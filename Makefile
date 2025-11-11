SHELL := /bin/bash
GO := go

.PHONY: all
all: genbindings

cmd/miqt-docker/miqt-docker: go.mod cmd/miqt-docker/*.go docker/*.Dockerfile
	$(GO) build -o cmd/miqt-docker/miqt-docker ./cmd/miqt-docker

.PHONY: clean-cache
clean-cache:
	rm -f cmd/genbindings/cachedir/*.json

cmd/genbindings/genbindings: go.mod cmd/genbindings/*.go
	$(GO) build -o cmd/genbindings/genbindings ./cmd/genbindings

.PHONY: genbindings
genbindings: cmd/miqt-docker/miqt-docker cmd/genbindings/genbindings
	cd cmd/genbindings && ../miqt-docker/miqt-docker genbindings ./genbindings -config qt5
	cd cmd/genbindings && ../miqt-docker/miqt-docker genbindings ./genbindings -config qt6

.PHONY: test-cmd
test-cmd: cmd/miqt-docker/miqt-docker
	./cmd/miqt-docker/miqt-docker genbindings go test ./cmd/...

.PHONY: build-all
build-all: cmd/miqt-docker/miqt-docker
	./cmd/miqt-docker/miqt-docker genbindings go build ./...
