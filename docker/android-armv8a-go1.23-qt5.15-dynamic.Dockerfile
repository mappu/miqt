FROM raymii/qt:5.15-android-source

RUN wget 'https://go.dev/dl/go1.23.1.linux-amd64.tar.gz' && \
	tar x -C /usr/local/ -f go1.23.1.linux-amd64.tar.gz && \
	rm go1.23.1.linux-amd64.tar.gz

ENV PATH=/usr/local/go/bin:/opt/cmake/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/local/Qt-5.15.13/bin:/opt/android-sdk/cmdline-tools/tools/bin:/opt/android-sdk/tools:/opt/android-sdk/tools/bin:/opt/android-sdk/platform-tools

# The pkg-config definitions were all installed with platform-specific suffixes
# (i.e. need to use Qt5Widgets_arm64-v8a instead of Qt5Widgets)
# This container is targeting armv8-a, so set up simple symlinks
RUN /bin/bash -c 'cd /usr/local/Qt-5.15.13/lib/pkgconfig ; for f in *_arm64-v8a.pc ; do cp $f "$(basename -s _arm64-v8a.pc "$f").pc"; done'

# This is gross but (A) it's containerized and (B) allows --uid=1000 to perform builds
# Only needed for certain problematic versions of the Android SDK; a readonly SDK works in both older+newer SDKs
RUN /bin/bash -c 'find /opt/android-sdk/ -type d -exec chmod 777 {} \; && find /opt/android-sdk/ -perm 660 -exec chmod 666 {} \;'

ENV CC=/opt/android-sdk/ndk/22.1.7171670/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android30-clang
ENV CXX=/opt/android-sdk/ndk/22.1.7171670/toolchains/llvm/prebuilt/linux-x86_64/bin/aarch64-linux-android30-clang++
ENV CGO_ENABLED=1
ENV GOOS=android
ENV GOARCH=arm64
ENV GOFLAGS=-buildvcs=false
ENV PKG_CONFIG_PATH=/usr/local/Qt-5.15.13/lib/pkgconfig
ENV CGO_CXXFLAGS="-Wno-ignored-attributes"

# Reset the ENTRYPOINT
ENTRYPOINT []
