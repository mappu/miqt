FROM debian:bookworm

ENV QT6_VERSION=6.2.4
ENV QT5_VERSION=5.15.2

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    apt-get install --no-install-recommends -qyy \
        python3 \
        python3-pip \
        python3.11-venv \
        golang-go \
        libqscintilla2-qt6-dev \
        clang \
        git \
        ca-certificates \
        pkg-config \
        build-essential && \
    apt-get clean

RUN python3 -m venv /opt/virtualenvironment
ENV PATH="/opt/virtualenvironment/bin:$PATH"
RUN python3 -m pip install aqtinstall

RUN aqt install-qt linux desktop $QT5_VERSION gcc_64 --outputdir /opt/Qt
ENV PATH=/opt/Qt/$QT5_VERSION/gcc_64/bin:$PATH
ENV LD_LIBRARY_PATH=/opt/Qt/$QT5_VERSION/gcc_64/lib
ENV QT_PLUGIN_PATH=/opt/Qt/$QT5_VERSION/gcc_64/plugins
ENV QTDIR=/opt/Qt/$QT5_VERSION/gcc_64
ENV PKG_CONFIG_PATH=/opt/Qt/$QT5_VERSION/gcc_64/lib/pkgconfig:$PKG_CONFIG_PATH

RUN aqt install-qt linux desktop $QT6_VERSION gcc_64 --outputdir /opt/Qt
ENV PATH=/opt/Qt/$QT6_VERSION/gcc_64/bin:$PATH
ENV LD_LIBRARY_PATH=/opt/Qt/$QT6_VERSION/gcc_64/lib
ENV QT_PLUGIN_PATH=/opt/Qt/$QT6_VERSION/gcc_64/plugins
ENV QTDIR=/opt/Qt/$QT6_VERSION/gcc_64
ENV PKG_CONFIG_PATH=/opt/Qt/$QT6_VERSION/gcc_64/lib/pkgconfig:$PKG_CONFIG_PATH


ENV GOFLAGS=-buildvcs=false
