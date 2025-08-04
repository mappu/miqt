FROM debian:bookworm

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    apt-get install -qyy --no-install-recommends \
        autoconf automake autopoint bash bison bzip2 flex g++ g++-multilib \
        gettext git gperf intltool libltdl-dev libgdk-pixbuf2.0-dev libgl-dev \
        libpcre3-dev libssl-dev libtool-bin libxml-parser-perl lzip make \
        openssl p7zip-full patch perl python3 python3-distutils python3-mako \
        python3-packaging python3-pkg-resources python3-setuptools \
        python-is-python3 ruby sed sqlite3 unzip wget xz-utils && \
    apt-get clean


# Install MXE
# Use a pinned commit from 2025-02-21 with Qt 6.8.2

RUN cd /usr/lib/ && \
    git clone https://github.com/mxe/mxe.git && \
    cd mxe && \
    git reset --hard 2bf85f28165cefbce457a79cc0c69007455b025a


# Compile Qt6 static with MXE
# This downloads files from the internet and takes circa 45 minutes
# Clean up temporary directories: ccache (1.5GB), pkg downloads (337MB)

RUN cd /usr/lib/mxe && \
    make MXE_TARGETS='x86_64-w64-mingw32.static' qt6-qtbase && \
    rm -rf /usr/lib/mxe/.ccache && \
    rm -rf /usr/lib/mxe/pkg


# Install Go

RUN wget 'https://go.dev/dl/go1.23.6.linux-amd64.tar.gz' && \
	tar x -C /usr/local/ -f go1.23.6.linux-amd64.tar.gz && \
	rm go1.23.6.linux-amd64.tar.gz


# MXE does not install pkg-config files for mingw32.static qt6
# Invent some based on patching the x86_64-pc-linux-gnu ones

RUN \
    cp /usr/lib/mxe/usr/x86_64-pc-linux-gnu/qt6/lib/pkgconfig/Qt6* /usr/lib/mxe/usr/x86_64-w64-mingw32.static/lib/pkgconfig/ && \
    find /usr/lib/mxe/usr/x86_64-w64-mingw32.static/lib/pkgconfig/ -name 'Qt6*.pc' -exec sed -i -re 's~x86_64-pc-linux-gnu~x86_64-w64-mingw32.static~; s~linux-g\+\+~win32-g++~' {} \; && \
    echo 'Libs: -lgdi32 -lcomdlg32 -loleaut32 -limm32 -lwinmm -lws2_32 -lole32 -luuid -luser32 -ladvapi32 -lnetapi32 -lversion -lauthz -ldwmapi -ld3d11 -ld3d12 -lsynchronization -ldxgi -luxtheme -ldwrite -luserenv -lmpr -lruntimeobject' >> /usr/lib/mxe/usr/x86_64-w64-mingw32.static/lib/pkgconfig/Qt6Platform.pc && \
    echo 'Requires: libpcre2-16 zlib libzstd libpng freetype2 harfbuzz' >> /usr/lib/mxe/usr/x86_64-w64-mingw32.static/lib/pkgconfig/Qt6Platform.pc


# Environment variables

ENV PATH=/usr/local/go/bin:/usr/lib/mxe/usr/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
ENV PKG_CONFIG=x86_64-w64-mingw32.static-pkg-config
ENV PKG_CONFIG_PATH=/usr/lib/mxe/usr/x86_64-w64-mingw32.static/lib/pkgconfig
ENV CC=x86_64-w64-mingw32.static-gcc
ENV CXX=x86_64-w64-mingw32.static-g++
ENV CGO_ENABLED=1
ENV GOOS=windows
ENV GOARCH=amd64
ENV GOFLAGS='-buildvcs=false'

# Some static Qt compliation flags are not part of the pkg-config file
# Export them manually in the environment
ENV CGO_LDFLAGS='-L/usr/lib/mxe/usr/x86_64-w64-mingw32.static/qt6/plugins/platforms -lqwindows -L/usr/lib/mxe/usr/x86_64-w64-mingw32.static/qt6/plugins/styles -lqmodernwindowsstyle -ld3d9 -lsetupapi -lshcore -lwtsapi32 -lfreetype'
