FROM debian:13

# Layer: aqtinstall, go, other Qt dependencies for ld

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    apt-get install -qyy golang-go build-essential python3-pip python3-venv && \
    apt-get install -qyy libgl1 libglx0 libegl1 libfontconfig1 libfreetype6 libglib2.0-0t64 libxkbcommon0 libdbus-1-3 --no-install-recommends && \
    apt-get clean && \
    python3 -m venv /aqtinstall && \
    /aqtinstall/bin/pip3 install aqtinstall && \
    rm -r /root/.cache

# Layer: Specific Qt version
    
RUN /aqtinstall/bin/aqt install-qt linux desktop 6.10.0 linux_gcc_64

# Environment variables

ENV PATH=/6.10.0/gcc_64/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
ENV PKG_CONFIG_PATH=/6.10.0/gcc_64/lib/pkgconfig/
ENV CGO_ENABLED=1
