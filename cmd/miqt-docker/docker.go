package main

import (
	"bytes"
	"encoding/json"
	"errors"
	"io"
	"log"
	"os"
	"os/exec"
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

// dockerCommand creates an *exec.Cmd for running docker. It respects the global
// `needsSudo` state.
func dockerCommand(args ...string) *exec.Cmd {
	docker := os.Getenv("DOCKER")
	if docker == "" {
		docker = "docker"
	}

	if needsSudo {
		useArgs := make([]string, 0, len(args)+1)
		useArgs = append(useArgs, docker)
		useArgs = append(useArgs, args...)
		return exec.Command(`sudo`, useArgs...)
	}

	return exec.Command(docker, args...)
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

	for _, im := range images {
		if im.Repository == repository && im.Tag == tag {
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
