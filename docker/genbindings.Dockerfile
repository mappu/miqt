FROM debian:bookworm

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    apt-get install --no-install-recommends -qyy \
        golang-go \
        qtbase5-dev \
        libqscintilla2-qt5-dev \
        clang \
        git \
        ca-certificates \
        pkg-config \
        build-essential && \
    apt-get clean
RUN mkdir -p /usr/local/lib/pkgconfig
COPY pkg-config/QScintilla.pc.example /usr/local/lib/pkgconfig/QScintilla.pc
ENV GOFLAGS=-buildvcs=false
