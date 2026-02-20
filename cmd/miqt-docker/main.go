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
	"path"
	"path/filepath"
	"runtime"
	"strings"

	"github.com/mappu/miqt/docker"
)

// shasum returns the hex sha256 of a byte slice.
func shasum(data []byte) string {
	hashdata := sha256.Sum256(data)
	return hex.EncodeToString(hashdata[:])
}

// usage displays how to use miqt-docker and then exits the process.
func usage(dockerfiles []fs.DirEntry) {
	fmt.Fprint(os.Stderr, `Usage: `+filepath.Base(os.Args[0])+` ENVIRONMENT COMMAND...
	
COMMAND may be any shell command (e.g. go build); or /bin/bash to get an
interactive terminal; or one of the following special tasks:

  -build           Run 'go build' with usual MIQT flags
  -minify-build    Run 'go build' with special minification flags
  -windows-build   Run 'go build' with special Windows support
  -android-build   Build an Android APK (using the android-qt5 or android-qt6
                    container environments)

Environment variables:
  DOCKER           Override the path to docker
  MIQTDOCKER_UID   Run the docker command under a custom uid or uid:gid
  MIQTDOCKER_FLAGS Add extra flags to the docker command
	
Available container environments: (use - as wildcard character)
  native (Run natively without docker)
`)

	for _, ff := range dockerfiles {
		fmt.Fprintf(os.Stderr, "  %s\n", strings.TrimSuffix(ff.Name(), `.Dockerfile`))
	}

	os.Exit(1)
}

// getDockerRunArgsForGlob returns a []string array of all the {busywork} arguments
// for a `docker {run -e -v ...} go build` command.
// It does glob matching for the target container, and builds it if it does not yet exist.
func getDockerRunArgsForGlob(dockerfiles []fs.DirEntry, containerNameGlob string, isatty bool) ([]string, error) {

	var match string
	for _, ff := range dockerfiles {
		if !matchAllParts(containerNameGlob, ff.Name()) {
			continue
		}

		match = ff.Name()
		// continue searching for a later match with higher version number
	}

	if match == "" {
		return nil, fmt.Errorf("No available environment matches the request %q\n", containerNameGlob)
	}

	if !(match == os.Args[1] || match == os.Args[1]+`.Dockerfile`) {
		// An inexact/glob match was involved. Show what it was
		log.Printf("Selecting dockerfile: %s", match)
	}

	dockerFileContent, err := docker.ReadFile(match)
	if err != nil {
		return nil, err // shouldn't happen
	}

	dockerfileHash := shasum(dockerFileContent)[:8] // First 8 characters of content hash

	// Check to see if this dockerfile has already been turned into an image

	containerName := `miqt-docker/` + strings.TrimSuffix(match, `.Dockerfile`)

	_, err = dockerFindImage(containerName, dockerfileHash)
	if err != nil {
		if err != os.ErrNotExist {
			return nil, err // real error
		}

		log.Printf("No matching docker image, creating...")
		err = dockerBuild(dockerFileContent, containerName, dockerfileHash)
		if err != nil {
			return nil, err
		}

		// Search again
		_, err = dockerFindImage(containerName, dockerfileHash)
		if err != nil {
			return nil, fmt.Errorf("Failed to build container for %s:%s: %w", containerName, dockerfileHash, err) // Any error now is a real error
		}
	}

	// Container match found - clean up older containers for the same tag

	allContainers, err := dockerListImages()
	if err != nil {
		return nil, err
	}
	for _, ctr := range allContainers {
		if ctr.Repository == containerName &&
			!(ctr.Tag == dockerfileHash || ctr.Tag == "latest") {
			log.Printf("Removing previous version container %s:%s ...", containerName, ctr.Tag)
			rmCmd := dockerCommand(`image`, `rm`, containerName+`:`+ctr.Tag)
			rmCmd.Stdout = os.Stdout
			rmCmd.Stderr = os.Stderr
			err = rmCmd.Run()
			if err != nil {
				log.Printf("Warning: Failed to remove previous container: %v", err.Error())
				// log and continue
			}
		}
	}

	// Container match found - safe to run our command

	fullCommand := []string{"run",
		"--rm",   // Delete container after execution
		"--init", // Handle signals for multiple processes
		"-i",     // Interactive (supports stdin)
	}

	if isatty {
		fullCommand = append(fullCommand, "-t")
	}

	// On Linux, Docker runs as root, and our generated files would be owned by 0:0
	// Use `--user $uid:$gid` to avoid this
	// This is not needed for Windows, and it's not needed if the user explicitly
	// requested a root shell

	if forceUid := os.Getenv("MIQTDOCKER_UID"); len(forceUid) > 0 {
		log.Printf("Forcing --user parameter to %q", forceUid)
		fullCommand = append(fullCommand, `--user`, forceUid)

	} else if dockerIsPodman() {
		// Podman has a feature to opt-out of user namespacing. This is slightly
		// more efficient than doing a 1:1 mapping.
		fullCommand = append(fullCommand, `--userns=keep-id`)

	} else if runtime.GOOS != "linux" {
		// On Windows and macOS, the Docker Linux VM has its own uid/gids that
		// do not match anything we can detect on the host OS.
		log.Printf("Skipping user isolation because: OS is %q", runtime.GOOS)

	} else {
		// Normal user isolation (common case)
		userinfo, err := user.Current()
		if err != nil {
			log.Panic(err)
		}

		fullCommand = append(fullCommand, `--user`, userinfo.Uid+`:`+userinfo.Gid)

	}

	// Find the GOMODCACHE and GOCACHE to populate mapped volumes
	gomodcache, err := exec.Command(`go`, `env`, `GOMODCACHE`).Output()
	if err != nil {
		return nil, fmt.Errorf("Finding GOMODCACHE: %w", err)
	}
	if gomodcache_sz := strings.TrimSpace(string(gomodcache)); len(gomodcache_sz) > 0 {
		_ = os.MkdirAll(gomodcache_sz, 0755) // Might not exist if no Go modules have been used yet

		fullCommand = append(fullCommand, `-v`, gomodcache_sz+`:/go/pkg/mod`, `-e`, `GOMODCACHE=/go/pkg/mod`)
	}

	gocache, err := exec.Command(`go`, `env`, `GOCACHE`).Output()
	if err != nil {
		return nil, fmt.Errorf("Finding GOCACHE: %w", err)
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
		return nil, fmt.Errorf("Finding GOMOD: %w", err)
	}
	if gomod_sz := strings.TrimSpace(string(gomod)); len(gomod_sz) > 0 {
		parentPaths = append(parentPaths, gomod_sz)
	}

	gowork, err := exec.Command(`go`, `env`, `GOWORK`).Output()
	if err != nil {
		return nil, fmt.Errorf("Finding GOWORK: %w", err)
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
			// On Windows, sometimes Cygwin/MSYS git is in $PATH, which returns
			// a special kind of filepath that requires conversion to use
			parentPaths = append(parentPaths, maybeTransformCygpath(gitroot_sz))
		}
	}

	cwd, err := os.Getwd()
	if err != nil {
		return nil, err
	}

	parentPaths = append(parentPaths, cwd) // It's an option too

	basedir, err := highestCommonParent(parentPaths)
	if err != nil {
		return nil, err
	}

	relCwd, err := filepath.Rel(basedir, cwd)
	if err != nil {
		return nil, err
	}

	// Don't mount directly on /src , otherwise -android-build will not know
	// the package name for top-level builds. Use a subfolder within it
	mountDir := `/src/` + filepath.Base(cwd)

	if runtime.GOOS == "windows" {
		// convert C:\foo\bar paths to /c/foo/bar that Docker understands
		// Otherwise, you experience "invalid mode" when the : is parsed
		basedir = `/` + strings.ToLower(string(basedir[0])) + `/` + strings.ReplaceAll(basedir[3:], `\`, `/`)

		// Always forwardslashes for in-docker paths, even on Windows OS
		mountDir = strings.ReplaceAll(mountDir, `\`, `/`)
	}

	// Extra user-supplied docker flags
	if extraFlags := os.Getenv(`MIQTDOCKER_FLAGS`); extraFlags != "" {
		fullCommand = append(fullCommand, StringFields(extraFlags)...)
	}

	fullCommand = append(fullCommand,
		`-v`, basedir+`:`+mountDir,
		`-w`, path.Join(mountDir, relCwd),

		// Final standard docker commands
		`-e`, `HOME=/tmp`,
		containerName+`:`+dockerfileHash,
	)

	return fullCommand, nil
}

func main() {

	dockerfiles, err := docker.Dockerfiles.ReadDir(`.`)
	if err != nil {
		log.Fatal(err)
	}

	if len(os.Args) < 3 {
		usage(dockerfiles)
	}

	taskArgs, taskOp, taskAllowTty, err := evaluateTask(os.Args[2:])
	if err != nil {
		log.Fatal(err)
	}

	var cmd *exec.Cmd
	if os.Args[1] == "native" {

		if taskArgs[0] == `/bin/bash` && runtime.GOOS == "windows" {
			log.Fatal("This command can't be used in 'native' mode on Windows.")
		}

		cmd = exec.Command(taskArgs[0], taskArgs[1:]...) // n.b. [1:] may be an empty slice

	} else {
		dockerArgs, err := getDockerRunArgsForGlob(dockerfiles, os.Args[1], taskAllowTty && isatty())
		if err != nil {
			log.Fatal(err)
		}

		dockerArgs = append(dockerArgs, taskArgs...)
		cmd = dockerCommand(dockerArgs...)
	}

	cmd.Stdin = os.Stdin
	cmd.Stderr = os.Stderr
	cmd.Stdout = os.Stdout
	taskOp(cmd)
	err = cmd.Run()
	if err != nil {
		log.Fatal(err)
	}
}
