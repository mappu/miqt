# NOTICE: This image does not contain any runnable Qt tools (moc, rcc, lconvert, etc)

FROM debian:13

# Layer: aqtinstall, go, other Qt dependencies for ld

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    apt-get install -qyy golang-go build-essential python3-pip python3-venv gcc-mingw-w64-x86-64 g++-mingw-w64-x86-64 mingw-w64-x86-64-dev && \
    apt-get clean && \
    python3 -m venv /aqtinstall && \
    /aqtinstall/bin/pip3 install aqtinstall && \
    rm -r /root/.cache

# Layer: Specific Qt version
# The supplied pkg-config paths have the wrong prefix= parameter, perform manual fixup

RUN mkdir /qt && \
    cd /qt && \
    /aqtinstall/bin/aqt install-qt windows desktop 6.10.0 win64_mingw && \
    find . -name '*.pc' -exec sed -i -re 's~/Users/qt/work/install~/qt/6.10.0/mingw_64~g' {} \; 

# Environment variables

ENV CXX=x86_64-w64-mingw32-g++
ENV CC=x86_64-w64-mingw32-gcc
ENV PKG_CONFIG_PATH=/qt/6.10.0/mingw_64/lib/pkgconfig
ENV CGO_ENABLED=1
ENV GOOS=windows
ENV GOARCH=amd64