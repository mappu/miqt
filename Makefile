BUILDSTAMPS := docker/genbindings.docker-buildstamp
DOCKER := docker
SHELL := /bin/bash

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
	mkdir -p ~/.cache/go-build
	$(DOCKER) run --user $$(id -u):$$(id -g) -v ~/.cache/go-build:/.cache/go-build -v $$PWD:/src -w /src miqt/genbindings:latest /bin/bash -c 'cd cmd/genbindings && go build && ./genbindings'

