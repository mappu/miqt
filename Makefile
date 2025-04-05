BUILDSTAMPS := docker/genbindings.docker-buildstamp
DOCKER := docker
SHELL := /bin/bash

# DOCKEREXEC runs the target command in the `genbindings` docker container.
# It mounts in the current GOCACHE and GOMODCACHE.
DOCKEREXEC = mkdir -p "$$(go env GOCACHE)" && \
	mkdir -p "$$(go env GOMODCACHE)" && \
	$(DOCKER) run \
	--user "$$(id -u):$$(id -g)" \
	-v "$$(go env GOCACHE):/.cache/go-build" \
	-v "$$(go env GOMODCACHE):/go/pkg/mod" \
	-v "$$PWD:/src" \
	-w /src \
	miqt/genbindings:latest \
	/bin/bash -c

.PHONY: all
all: genbindings

docker/genbindings.docker-buildstamp: docker/genbindings.Dockerfile
	$(DOCKER) build -t miqt/genbindings:latest -f docker/genbindings.Dockerfile .
	touch $@

.PHONY: clean
clean:
	$(DOCKER) image rm -f miqt/genbindings:latest
	rm -f $(BUILDSTAMPS)

.PHONY: genbindings
genbindings: $(BUILDSTAMPS)
	$(DOCKEREXEC) 'cd cmd/genbindings && go build && ./genbindings'

.PHONY: build-all
build-all: $(BUILDSTAMPS)
	$(DOCKEREXEC) 'go build ./...'
