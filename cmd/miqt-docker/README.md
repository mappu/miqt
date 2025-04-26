# miqt-docker

This is a helper program to quickly run a dockerized MIQT build environment.

- Supports all available MIQT docker containers
- Use glob matches to automatically pick the highest version container for target
- Automatically build new docker containers or reuse existing, based on content hash of the Dockerfile
- Automatically bind source code volume from current go.mod / go.work / git repository and preserve relative working directory
- Handles bind-mounting the GOCACHE and GOMODCACHE directories
- Handles using the proper uid+gid on Linux
- Automatically detect sudo requirement on Linux

## Usage

Run `miqt-docker` with no arguments to see full usage instructions and all
available embedded dockerfiles:

```bash
Usage: miqt-docker ENVIRONMENT COMMAND...

Environment variables:
- DOCKER       Override the path to docker

Available container environments (use * for partial match):
[...]
```

Example build commands:

```bash
miqt-docker macos go build -ldflags '-s -w'
miqt-docker win64*qt6*dynamic go build -ldflags '-s -w -H windowsgui'
```
