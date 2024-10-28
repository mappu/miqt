FROM crazymax/osxcross:14.5-debian AS osxcross

FROM debian:bookworm

COPY --from=osxcross /osxcross /osxcross

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
	apt-get install --no-install-recommends -qyy \
		golang-go \
		clang \
		lld \
		libc6-dev \
		openssl \
		bzip2 \
		ca-certificates \
		curl \
		pkg-config && \
    apt-get clean

ENV PATH="/osxcross/bin:$PATH"
ENV LD_LIBRARY_PATH="/osxcross/lib:$LD_LIBRARY_PATH"

# The oldest macOS target with a working Qt 5.15 build on macports.org is High
# Sierra (10.13)
# @ref https://ports.macports.org/port/qt5-qtbase/details/
#
# Go 1.19 and Go 1.20 are the last versions of Go that can target macOS 10.13.
# For later versions of Go, a higher MACOSX_DEPLOYMENT_TARGET version can be set.
# @ref https://tip.golang.org/doc/go1.20#darwin
ENV MACOSX_DEPLOYMENT_TARGET=10.13

# Preemptively mark some dependencies as installed that don't seem to download properly
RUN /usr/bin/env UNATTENDED=1 osxcross-macports fake-install py312 py312-packaging xorg xrender

# Install Qt 5.15 and dependencies
RUN /usr/bin/env UNATTENDED=1 osxcross-macports install qt5-qtbase

RUN rmdir /opt/ && \
	ln -s /osxcross/macports/pkgs/opt /opt

ENV CC=x86_64-apple-darwin23.6-clang
ENV CXX=x86_64-apple-darwin23.6-clang++
ENV GOOS=darwin
ENV GOARCH=amd64
ENV CGO_ENABLED=1
ENV PKG_CONFIG_PATH=/opt/local/libexec/qt5/lib/pkgconfig/
ENV CGO_CXXFLAGS="-Wno-ignored-attributes -D_Bool=bool"
