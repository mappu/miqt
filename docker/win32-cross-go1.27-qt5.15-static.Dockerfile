FROM golang:1.27-trixie

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    apt-get install -qyy gnupg2 ca-certificates && \
    apt-get clean
    
# Force allow obsolete SHA1 signatures
RUN mkdir -p /etc/crypto-policies/back-ends/ && \
	cp /usr/share/apt/default-sequoia.config /etc/crypto-policies/back-ends/apt-sequoia.config && \
	sed -i -re 's/2026-02-01/2099-01-01/g' /etc/crypto-policies/back-ends/apt-sequoia.config

# Install MXE apt repo
RUN DEBIAN_FRONTEND=noninteractive \
    echo "deb [arch=amd64 signed-by=/usr/share/keyrings/mxe-archive-keyring.gpg] https://pkg.mxe.cc/repos/apt buster main" >/etc/apt/sources.list.d/mxeapt.list && \
    mkdir -p /usr/share/keyrings && \
	gpg --keyserver hkp://keyserver.ubuntu.com --recv-keys 86B72ED9 && \
	gpg --export 86B72ED9 > /usr/share/keyrings/mxe-archive-keyring.gpg

RUN DEBIAN_FRONTEND=noninteractive \
    apt-get update && \
    apt-get install -qyy mxe-i686-w64-mingw32.static-qt5 && \
    apt-get clean

ENV PATH=/usr/lib/mxe/usr/bin:$PATH

ENV CXX=i686-w64-mingw32.static-g++
ENV CC=i686-w64-mingw32.static-gcc
ENV PKG_CONFIG=i686-w64-mingw32.static-pkg-config
ENV GOOS=windows
ENV GOARCH=386
ENV CGO_ENABLED=1
ENV GOFLAGS=-buildvcs=false

# Some static Qt compliation flags are not part of the pkg-config file
# Export them manually in the environment
ENV CGO_LDFLAGS='-L/usr/lib/mxe/usr/i686-w64-mingw32.static/qt5/plugins/platforms -lqwindows -lQt5FontDatabaseSupport -lQt5EventDispatcherSupport -lQt5ThemeSupport -lQt5PlatformCompositorSupport -lQt5AccessibilitySupport -lQt5WindowsUIAutomationSupport -lwtsapi32 -L/usr/lib/mxe/usr/i686-w64-mingw32.static/qt5/plugins/styles -lqwindowsvistastyle -luxtheme'
