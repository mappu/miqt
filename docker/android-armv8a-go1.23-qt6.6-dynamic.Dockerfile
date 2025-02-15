FROM stateoftheartio/qt6:6.6-android-aqt

# The base image sets us to uid:gid 1000:999. Revert it so we can run apt
USER root

RUN apt update && apt install -qyy wget pkg-config && apt autoclean

RUN wget 'https://go.dev/dl/go1.23.6.linux-amd64.tar.gz' && \
	tar x -C /usr/local/ -f go1.23.6.linux-amd64.tar.gz && \
	rm go1.23.6.linux-amd64.tar.gz

COPY cmd/android-stub-gen/android-stub-gen.sh /usr/local/bin/android-stub-gen.sh
COPY cmd/android-mktemplate/android-mktemplate.sh /usr/local/bin/android-mktemplate.sh

# Fix up pkg-config definitions:
# 1. There are only pkg-config definitions included for gcc_64 (Linux native), not for the android_arm64_v8a target we actually want
# 2. It looks for `Libs: -L${libdir} -lQt6Widgets` but the file is named libQt6Widgets_arm64-v8a.so

RUN mkdir -p /opt/Qt/6.6.1/android_arm64_v8a/lib/pkgconfig/ && \
	cp /opt/Qt/6.6.1/gcc_64/lib/pkgconfig/*.pc /opt/Qt/6.6.1/android_arm64_v8a/lib/pkgconfig/ && \
	find /opt/Qt/6.6.1/android_arm64_v8a/lib/pkgconfig/ -type f -exec sed -i -re 's~gcc_64~android_arm64_v8a~' {} \; && \
	find /opt/Qt/6.6.1/android_arm64_v8a/lib/pkgconfig/ -type f -exec sed -i -re 's~-l(Q[^ ]+)~-l\1_arm64-v8a~' {} \; 

# The final step of building a Miqt app for android is running androiddeployqt
# This binary only exists in the gcc_64 target which is not in $PATH
# Add a symlink

RUN ln -s /opt/Qt/6.6.1/gcc_64/bin/androiddeployqt /usr/local/bin/androiddeployqt

ENV PATH=/usr/local/go/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/opt/Qt/Tools/CMake/bin:/opt/Qt/Tools/Ninja:/opt/Qt/6.6.1/android_arm64_v8a/bin:/opt/android-sdk/cmdline-tools/10.0/bin:/opt/android-sdk/platform-tools
ENV CC=/opt/android-sdk/ndk/25.1.8937393/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android33-clang
ENV CXX=/opt/android-sdk/ndk/25.1.8937393/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android33-clang++
ENV CGO_ENABLED=1
ENV GOOS=android
ENV GOARCH=arm64
ENV GOFLAGS=-buildvcs=false
ENV PKG_CONFIG_PATH=/opt/Qt/6.6.1/android_arm64_v8a/lib/pkgconfig
ENV CGO_CXXFLAGS="--std=c++17 -Wno-ignored-attributes"
