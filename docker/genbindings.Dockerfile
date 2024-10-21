FROM debian:bookworm

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    apt-get install --no-install-recommends -qyy \
        golang-go \
        qtbase5-dev \
        qt6-base-dev \
        libqscintilla2-qt5-dev \
        clang \
        git \
        ca-certificates \
        pkg-config \
        build-essential && \
    apt-get clean
    
RUN mkdir -p /usr/local/src/scintilla && \
    git clone 'https://github.com/mirror/scintilla.git' /usr/local/src/scintilla && \
    git -C /usr/local/src/scintilla checkout rel-5-5-2
    
RUN \
    cd /usr/local/src/scintilla/qt/ScintillaEditBase && \
    qmake && \
    make && \
    cd /usr/local/src/scintilla/qt/ScintillaEdit && \
    python3 WidgetGen.py && \
    qmake && \
    make

RUN mkdir -p /usr/local/lib/pkgconfig

COPY pkg-config/QScintilla.pc.example /usr/local/lib/pkgconfig/QScintilla.pc
COPY pkg-config/ScintillaEdit.pc.example /usr/local/lib/pkgconfig/ScintillaEdit.pc

ENV GOFLAGS=-buildvcs=false
