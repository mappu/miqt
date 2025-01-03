FROM golang:1.23-bookworm

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    apt-get install -qyy gnupg2 ca-certificates && \
    apt-get clean

RUN DEBIAN_FRONTEND=noninteractive \
    echo "deb https://pkg.mxe.cc/repos/apt buster main" >/etc/apt/sources.list.d/mxeapt.list && \
    apt-key adv --keyserver keyserver.ubuntu.com --recv-keys 86B72ED9 && \
    apt-get update && \
    apt-get install -qyy mxe-i686-w64-mingw32.shared-qt5 && \
    apt-get clean

ENV PATH=/usr/lib/mxe/usr/bin:$PATH

ENV CXX=i686-w64-mingw32.shared-g++
ENV CC=i686-w64-mingw32.shared-gcc
ENV PKG_CONFIG=i686-w64-mingw32.shared-pkg-config
ENV GOOS=windows
ENV GOARCH=386
ENV CGO_ENABLED=1
ENV GOFLAGS=-buildvcs=false
