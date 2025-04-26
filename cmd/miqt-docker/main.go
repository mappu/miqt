package main

import (
	"crypto/sha256"
	"encoding/hex"
	"fmt"
	"io/fs"
	"log"
	"os"
	"os/exec"
	"os/user"
	"path/filepath"
	"regexp"
	"runtime"
	"strings"

	"github.com/mappu/miqt/docker"
)

// glob2regex converts the glob pattern into a regexp.
// It only supports `*` as a special character.
// The resulting regex is unanchored i.e. can match anywhere within a target string.
func glob2regex(pattern string) *regexp.Regexp {
	parts := strings.Split(pattern, `*`)
	for i, p := range parts {
		parts[i] = regexp.QuoteMeta(p)
	}

	return regexp.MustCompile(strings.Join(parts, `.*`))
}

// shasum returns the hex sha256 of a byte slice.
func shasum(data []byte) string {
	hashdata := sha256.Sum256(data)
	return hex.EncodeToString(hashdata[:])
}

// usage displays how to use miqt-docker and then exits the process.
func usage(dockerfiles []fs.DirEntry) {
	fmt.Fprintf(os.Stderr, "Usage: %s ENVIRONMENT COMMAND...\n", filepath.Base(os.Args[0]))
	fmt.Fprintln(os.Stderr, "")
	fmt.Fprintln(os.Stderr, "Environment variables:")
	fmt.Fprintln(os.Stderr, "- DOCKER       Override the path to docker")
	fmt.Fprintln(os.Stderr, "")
	fmt.Fprintln(os.Stderr, "Available container environments (use * for partial match):")

	for _, ff := range dockerfiles {
		fmt.Fprintf(os.Stderr, "- %s\n", strings.TrimSuffix(ff.Name(), `.Dockerfile`))
	}

	os.Exit(1)
}

func main() {

	dockerfiles, err := docker.Dockerfiles.ReadDir(`.`)
	if err != nil {
		log.Panic(err)
	}

	if len(os.Args) < 3 {
		usage(dockerfiles)
	}

	requestEnvironment := glob2regex(os.Args[1])
	var match string
	for _, ff := range dockerfiles {
		if !requestEnvironment.MatchString(ff.Name()) {
			continue
		}

		match = ff.Name()
		// continue searching for a later match with higher version number
	}

	if match == "" {
		log.Fatalf("No available environment matches the request %q\n", os.Args[1])
	}

	if !(match == os.Args[1] || match == os.Args[1]+`.Dockerfile`) {
		// An inexact/glob match was involved. Show what it was
		log.Printf("Selecting dockerfile: %s", match)
	}

	dockerFileContent, err := docker.ReadFile(match)
	if err != nil {
		log.Panic(err) // shouldn't happen
	}

	dockerfileHash := shasum(dockerFileContent)[:8] // First 8 characters of content hash

	// Check to see if this dockerfile has already been turned into an image

	containerName := `miqt-docker/` + strings.TrimSuffix(match, `.Dockerfile`)

	_, err = dockerFindImage(containerName, dockerfileHash)
	if err != nil {
		if err != os.ErrNotExist {
			log.Panic(err) // real error
		}

		log.Printf("No matching docker image, creating...")
		err = dockerBuild(dockerFileContent, containerName, dockerfileHash)
		if err != nil {
			log.Panic(err)
		}

		// Search again
		_, err = dockerFindImage(containerName, dockerfileHash)
		if err != nil {
			log.Printf("Failed to build container for %s:%s", containerName, dockerfileHash)
			log.Panic(err) // Any error now is a real error
		}
	}

	// Container match found - safe to run our command

	fullCommand := []string{"run"}

	if runtime.GOOS != "windows" {
		userinfo, err := user.Current()
		if err != nil {
			log.Panic(err)
		}

		fullCommand = append(fullCommand, `--user`, userinfo.Uid+`:`+userinfo.Gid)
	}

	// Find the GOMODCACHE and GOCACHE to populate mapped volumes
	gomodcache, err := exec.Command(`go`, `env`, `GOMODCACHE`).Output()
	if err != nil {
		log.Panic(err)
	}
	if gomodcache_sz := strings.TrimSpace(string(gomodcache)); len(gomodcache_sz) > 0 {
		_ = os.MkdirAll(gomodcache_sz, 0755) // Might not exist if no Go modules have been used yet

		fullCommand = append(fullCommand, `-v`, gomodcache_sz+`:/go/pkg/mod`, `-e`, `GOMODCACHE=/go/pkg/mod`)
	}

	gocache, err := exec.Command(`go`, `env`, `GOCACHE`).Output()
	if err != nil {
		log.Panic(err)
	}
	if gocache_sz := strings.TrimSpace(string(gocache)); len(gocache_sz) > 0 {
		_ = os.MkdirAll(gocache_sz, 0755) // Might not exist if no Go packages have been built yet

		fullCommand = append(fullCommand, `-v`, gocache_sz+`:/.cache/go-build`, `-e`, `GOCACHE=/.cache/go-build`)
	}

	// We need to bind-mount probably not just the current working directory,
	// but upwards to the root git repo / go.mod file / go.work file (whichever
	// is highest)

	var parentPaths []string
	gomod, err := exec.Command(`go`, `env`, `GOMOD`).Output()
	if err != nil {
		log.Panic(err)
	}
	if gomod_sz := strings.TrimSpace(string(gomod)); len(gomod_sz) > 0 {
		parentPaths = append(parentPaths, gomod_sz)
	}

	gowork, err := exec.Command(`go`, `env`, `GOWORK`).Output()
	if err != nil {
		log.Panic(err)
	}
	if gowork_sz := strings.TrimSpace(string(gowork)); len(gowork_sz) > 0 {
		parentPaths = append(parentPaths, gowork_sz)
	}

	gitroot, err := exec.Command(`git`, `rev-parse`, `--show-toplevel`).Output()
	if err != nil {
		// Maybe this isn't a git repository? Git is optional anyway, there are hg/bzr users
		// Don't panic
	} else {
		if gitroot_sz := strings.TrimSpace(string(gitroot)); len(gitroot_sz) > 0 {
			parentPaths = append(parentPaths, gitroot_sz)
		}
	}

	cwd, err := os.Getwd()
	if err != nil {
		log.Panic(err)
	}

	parentPaths = append(parentPaths, cwd) // It's an option too

	basedir, err := highestCommonParent(parentPaths)
	if err != nil {
		log.Panic(err)
	}

	relCwd, err := filepath.Rel(basedir, cwd)
	if err != nil {
		log.Panic(err)
	}

	fullCommand = append(fullCommand, `-v`, basedir+`:/src`, `-w`, filepath.Join(`/src`, relCwd))

	// Final standard docker commands

	fullCommand = append(fullCommand, containerName+`:`+dockerfileHash) // , `/bin/bash`, `-c`)
	fullCommand = append(fullCommand, os.Args[2:]...)

	cmd := dockerCommand(fullCommand...)
	cmd.Stderr = os.Stderr
	cmd.Stdout = os.Stdout
	err = cmd.Run()
	if err != nil {
		log.Fatal(err)
	}
}
