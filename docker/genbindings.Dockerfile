FROM debian:bookworm

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    apt-get install --no-install-recommends -qyy \
        golang-go \
        qtbase5-dev \
        qtmultimedia5-dev \
        qtpdf5-dev \
        qtpositioning5-dev \
        qtscript5-dev \
        qttools5-dev \
        libqt5svg5-dev \
        libqt5webkit5-dev \
        libqt5websockets5-dev \
        qtwebengine5-dev \
        qt6-base-dev \
        qt6-charts-dev \
        qt6-declarative-dev \
        qt6-multimedia-dev \
        qt6-pdf-dev \
        qt6-positioning-dev \
        qt6-tools-dev \
        qt6-svg-dev \
        qt6-webengine-dev \
        qt6-websockets-dev \
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

# Custom pkg-config definitions

RUN mkdir -p /usr/local/lib/pkgconfig

RUN 	echo 'includedir=/usr/include/x86_64-linux-gnu/qt5/Qsci/' \
	'\n' \
	'\nName: QScintilla' \
	'\nDescription: Qt5 port of the Scintilla source code editing widget' \
	'\nURL: http://www.riverbankcomputing.co.uk/software/qscintilla' \
	'\nVersion: 2.13.3' \
	'\nRequires: Qt5Widgets, Qt5PrintSupport' \
	'\nLibs: -lqscintilla2_qt5' \
	'\nCflags: -I${includedir}' \
	> /usr/local/lib/pkgconfig/QScintilla.pc

RUN echo 'includedir=/usr/include/x86_64-linux-gnu/qt6/Qsci/' \
	'\n' \
	'\nName: QScintilla6' \
	'\nDescription: Qt6 port of the Scintilla source code editing widget' \
	'\nURL: http://www.riverbankcomputing.co.uk/software/qscintilla' \
	'\nVersion: 2.13.3' \
	'\nRequires: Qt6Widgets, Qt6PrintSupport' \
	'\nLibs: -lqscintilla2_qt6' \
	'\nCflags: -I${includedir}' \
	> /usr/local/lib/pkgconfig/QScintilla6.pc

RUN echo 'srcdir=/usr/local/src/scintilla/' \
	'\n' \
	'\nName: ScintillaEdit' \
	'\nDescription: Scintilla upstream Qt port' \
	'\nURL: https://www.scintilla.org/' \
	'\nVersion: 5.5.2' \
	'\nRequires: Qt5Widgets' \
	'\nLibs: -L${srcdir}/bin -lScintillaEdit' \
	'\nCflags: -include stdint.h -I${srcdir}/qt/ScintillaEdit -I${srcdir}/qt/ScintillaEditBase -I${srcdir}/include -I${srcdir}/src' \
	> /usr/local/lib/pkgconfig/ScintillaEdit.pc

#

ENV GOFLAGS=-buildvcs=false
