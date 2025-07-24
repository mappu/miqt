package main

import (
	"bytes"
	"encoding/json"
	"errors"
	"io"
	"log"
	"os"
	"os/exec"
	"regexp"
)

var (
	needsSudo bool
)

// dockerImage describes an image available in the docker daemon.
type dockerImage struct {
	ID         string
	Repository string
	Tag        string
}

func cmdExists(cmd string) bool {
	_, err := exec.LookPath(cmd)
	return err == nil
}

func findContainerBackend() string {
	if cmdExists("docker") {
		return "docker"
	}
	if cmdExists("podman") {
		return "podman"
	}
	return ""
}

func resolveDockerCmd() string {
	if env := os.Getenv("DOCKER"); env != "" {
		if !cmdExists(env) {
			log.Printf("WARNING: DOCKER=%s command not found in path.\n", env)
		}
		return env
	}
	return findContainerBackend()
}

// dockerCommand creates an *exec.Cmd for running docker. It respects the global
// `needsSudo` state.
func dockerCommand(args ...string) *exec.Cmd {
	cmd := resolveDockerCmd()

	if cmd == "" {
		log.Println("Fatal: Could not locate docker backend")
	} else if os.Getenv("DOCKER") != "" && !cmdExists(cmd) {
		log.Printf("WARNING: DOCKER=%s command not found in path.\n", cmd)
	}

	if needsSudo {
		useArgs := make([]string, 0, len(args)+1)
		useArgs = append(useArgs, cmd)
		useArgs = append(useArgs, args...)
		return exec.Command(`sudo`, useArgs...)
	}

	return exec.Command(cmd, args...)
}

// dockerListImages lists all the current docker images.
func dockerListImages() ([]dockerImage, error) {

	cmd := dockerCommand(`image`, `ls`, `--format`, `{{json . }}`)
	cmd.Stderr = os.Stderr // passthrough

	buff, err := cmd.Output()
	if err != nil {
		if !needsSudo {
			// Retry with sudo
			log.Println("Retrying with sudo...")
			needsSudo = true
			return dockerListImages()
		}

		return nil, err
	}

	var ret []dockerImage

	dec := json.NewDecoder(bytes.NewReader(buff))
	for {
		var entry dockerImage
		err = dec.Decode(&entry)
		if err != nil {
			if errors.Is(err, io.EOF) {
				return ret, nil
			}
			return nil, err // real error
		}

		ret = append(ret, entry)
	}
}

// dockerFindImage searches all the current docker images to find one named as
// the supplied `repository:tag`.
func dockerFindImage(repository, tag string) (*dockerImage, error) {

	images, err := dockerListImages()
	if err != nil {
		return nil, err
	}

	re := regexp.MustCompile("^localhost/")

	for _, im := range images {
		if (im.Repository == repository || re.ReplaceAllString(im.Repository, "") == repository) && im.Tag == tag {
			// found it
			return &im, nil
		}
	}

	// No match
	return nil, os.ErrNotExist
}

// dockerBuild builds the supplied dockerfile and tags it as repository:tag
// as well as repository:latest.
func dockerBuild(dockerfile []byte, repository, tag string) error {
	cmd := dockerCommand(`build`, `-t`, repository+`:`+tag, `-t`, repository+`:latest`, `-`)
	cmd.Stderr = os.Stderr
	cmd.Stdin = bytes.NewReader(dockerfile)

	return cmd.Run()
}
