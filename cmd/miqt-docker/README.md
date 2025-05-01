# miqt-docker

This is an optional helper program to quickly run a dockerized MIQT cross-compiler
environment. Many containers are available targeting different OSes and Qt versions.

It also has some built-in commands that can be run either dockerized or natively.

## Usage

Run `miqt-docker` with no arguments to see full usage instructions and all
available embedded dockerfiles:

```bash
Usage: miqt-docker ENVIRONMENT COMMAND...

COMMAND may be any shell command (e.g. go build); or /bin/bash to get an
interactive terminal; or one of the following predefined tasks:

  -build           Run 'go build' with usual MIQT flags
  -minify-build    Run 'go build' with special minification flags
  -windows-build   Run 'go build' with special Windows support
  -android-build   Build an Android APK (using the android-qt5 or android-qt6
                    container environments)

Environment variables:
  DOCKER           Override the path to docker
	
Available container environments: (use - as wildcard character)
  [...]
```

You can specify the environment using a short form of the name. For example,
`win64-static` will be expanded to the regex `/win64.+static/` and pick the
best available match with the highest version number (`win64-cross-go1.24-qt6.8-static`
at time of writing).
This allows you to pin platforms and major versions in build commands while
automatically upgrading to minor versions.

Example build commands:

```bash
miqt-docker macos go build -ldflags '-s -w'
miqt-docker native -minify-build
miqt-docker win64-qt6-static -windows-build
miqt-docker win64-qt6-static /bin/bash
miqt-docker android-qt6 -android-build
```

## Comparison to manual Docker commands

You can create a dockerized MIQT build environment yourself using the Dockerfiles
in the `docker/` directory. The benefit of miqt-docker is:

- Embeds all available MIQT docker containers
- Use glob matches to automatically pick the highest version container for target
- Automatically build new docker containers or reuse existing, based on content hash of the Dockerfile
- Consistently named docker images across multiple projects using MIQT
- Automatically bind source code volume from current go.mod / go.work / git repository and preserve relative working directory
- Handles bind-mounting the GOCACHE and GOMODCACHE directories for fast rebuilds
- Handles using the proper uid+gid on Linux
- Automatically detect sudo requirement on Linux
- Convenient predefined tasks
- Advanced build support for Android
