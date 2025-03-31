FROM debian:bookworm

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    apt-get install --no-install-recommends -qyy \
        golang-go \
        qtbase5-dev \
        qtmultimedia5-dev \
        qtscript5-dev \
        libqt5svg5-dev \
        libqt5webkit5-dev \
        qtwebengine5-dev \
        qt6-base-dev \
        qt6-charts-dev \
        qt6-multimedia-dev \
        qt6-svg-dev \
        qt6-webengine-dev \
        libqscintilla2-qt5-dev \
        libqscintilla2-qt6-dev \
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
