FROM fedora:42

RUN dnf -y --setopt=install_weak_deps=False install \
	mingw64-qt6-qtbase.x86_64 \
	mingw64-qt6-qtmultimedia \
	mingw64-gcc.x86_64 \
	mingw64-gcc-c++.x86_64 \
	golang.x86_64

ENV CC=x86_64-w64-mingw32-gcc
ENV CXX=x86_64-w64-mingw32-g++
ENV PKG_CONFIG_PATH=/usr/x86_64-w64-mingw32/sys-root/mingw/lib/pkgconfig/
ENV GOOS=windows
ENV CGO_ENABLED=1
