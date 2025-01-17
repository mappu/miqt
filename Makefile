BUILDSTAMPS = docker/genbindings.docker-buildstamp

all: genbindings

docker/genbindings.docker-buildstamp: docker/genbindings.Dockerfile
	docker build -t miqt/genbindings:latest -f docker/genbindings.Dockerfile .
	touch $@

clean:
	docker image rm -f miqt/genbindings:latest
	rm -f $(BUILDSTAMPS)

genbindings: $(BUILDSTAMPS)
	mkdir -p ~/.cache/go-build
	docker run --user $$(id -u):$$(id -g) -v ~/.cache/go-build:/.cache/go-build -v $$PWD:/src -w /src miqt/genbindings:latest /bin/bash -c 'cd cmd/genbindings && go build && ./genbindings'

.PHONY : all clean genbindings
