FROM crazymax/osxcross:14.5-debian AS osxcross

FROM debian:bookworm

COPY --from=osxcross /osxcross /osxcross

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
	apt-get install --no-install-recommends -qyy \
		clang \
		lld \
		libc6-dev \
		openssl \
		bzip2 \
		ca-certificates \
		curl \
                python3 \
                zip \
		pkg-config wget nano procps make yasm unzip git file && \
    apt-get clean

ENV PATH="/osxcross/bin:$PATH"
ENV LD_LIBRARY_PATH="/osxcross/lib"

# VERSIONS
ENV TARGET=13.1
# Toolchain Version
ENV VER=23.6
# MacOS SDK Version
ENV SDK_VER=14.5
# Architecture
ENV TARGET_ARCH=x86_64

ENV MACOSX_DEPLOYMENT_TARGET=${TARGET}

# Preemptively mark some dependencies as installed that don't seem to download properly
RUN /usr/bin/env UNATTENDED=1 osxcross-macports update-cache && UNATTENDED=1 osxcross-macports \
    fake-install py313 py313-packaging xorg xrender curl-ca-bundle graphviz librsvg

# Install Qt 6.7 and dependencies
RUN /usr/bin/env UNATTENDED=1 osxcross-macports install qt67-qtbase

RUN rmdir /opt/ && \
	ln -s /osxcross/macports/pkgs/opt /opt

RUN mkdir -p /opt/local/libexec/qt6/lib/pkgconfig

RUN cat > /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/pkgconfig/Qt6Core.pc  <<'EOF'
prefix=/opt/local/libexec/qt6
exec_prefix=${prefix}
bindir=${prefix}/bin
libexecdir=${prefix}/libexec
libdir=${prefix}/lib
includedir=${prefix}/include

Name: Qt6 Core
Description: Qt Core module
Version: 6.7.3
Libs: -F${libdir} -framework QtCore
Cflags: -I${libdir}/QtCore.framework/Headers -I${libdir}/QtCore.framework -DQT_CORE_LIB
Requires: Qt6Platform
EOF

RUN cat > /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/pkgconfig/Qt6Concurrent.pc <<'EOF'
prefix=/opt/local/libexec/qt6
exec_prefix=${prefix}
bindir=${prefix}/bin
libexecdir=${prefix}/libexec
libdir=${prefix}/lib
includedir=${prefix}/include

Name: Qt6 Concurrent
Description: Qt Concurrent module
Version: 6.7.3
Libs: -F${libdir} -framework QtConcurrent
Cflags: -I${libdir}/QtConcurrent.framework/Headers -I${libdir}/QtConcurrent.framework -DQT_CONCURRENT_LIB
Requires: Qt6Core
EOF

RUN cat > /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/pkgconfig/Qt6DBus.pc <<'EOF'
prefix=/opt/local/libexec/qt6
exec_prefix=${prefix}
bindir=${prefix}/bin
libexecdir=${prefix}/libexec
libdir=${prefix}/lib
includedir=${prefix}/include

Name: Qt6 DBus
Description: Qt DBus module
Version: 6.7.3
Libs: -F${libdir} -framework QtDBus
Cflags: -I${libdir}/QtDBus.framework/Headers -I${libdir}/QtDBus.framework -DQT_DBUS_LIB
Requires: Qt6Core
EOF

RUN cat > /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/pkgconfig/Qt6Gui.pc <<'EOF'
prefix=/opt/local/libexec/qt6
exec_prefix=${prefix}
bindir=${prefix}/bin
libexecdir=${prefix}/libexec
libdir=${prefix}/lib
includedir=${prefix}/include

Name: Qt6 Gui
Description: Qt Gui module
Version: 6.7.3
Libs: -F${libdir} -framework QtGui
Cflags: -I${libdir}/QtGui.framework/Headers -I${libdir}/QtGui.framework -DQT_GUI_LIB
Requires: Qt6Core
EOF

RUN cat > /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/pkgconfig/Qt6Network.pc <<'EOF'
prefix=/opt/local/libexec/qt6
exec_prefix=${prefix}
bindir=${prefix}/bin
libexecdir=${prefix}/libexec
libdir=${prefix}/lib
includedir=${prefix}/include

Name: Qt6 Network
Description: Qt Network module
Version: 6.7.3
Libs: -F${libdir} -framework QtNetwork
Cflags: -I${libdir}/QtNetwork.framework/Headers -I${libdir}/QtNetwork.framework -DQT_NETWORK_LIB
Requires: Qt6Core
EOF

RUN cat > /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/pkgconfig/Qt6OpenGL.pc <<'EOF'
prefix=/opt/local/libexec/qt6
exec_prefix=${prefix}
bindir=${prefix}/bin
libexecdir=${prefix}/libexec
libdir=${prefix}/lib
includedir=${prefix}/include

Name: Qt6 OpenGL
Description: Qt OpenGL module
Version: 6.7.3
Libs: -F${libdir} -framework QtOpenGL
Cflags: -I${libdir}/QtOpenGL.framework/Headers -I${libdir}/QtOpenGL.framework -DQT_OPENGL_LIB
Requires: Qt6Core Qt6Gui
EOF

RUN cat > /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/pkgconfig/Qt6OpenGLWidgets.pc <<'EOF'
prefix=/opt/local/libexec/qt6
exec_prefix=${prefix}
bindir=${prefix}/bin
libexecdir=${prefix}/libexec
libdir=${prefix}/lib
includedir=${prefix}/include

Name: Qt6 OpenGLWidgets
Description: Qt OpenGLWidgets module
Version: 6.7.3
Libs: -F${libdir} -framework QtOpenGLWidgets
Cflags: -I${libdir}/QtOpenGLWidgets.framework/Headers -I${libdir}/QtOpenGLWidgets.framework -DQT_OPENGLWIDGETS_LIB
Requires: Qt6OpenGL Qt6Widgets
EOF

RUN cat > /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/pkgconfig/Qt6Platform.pc <<'EOF'
prefix=/opt/local/libexec/qt6
exec_prefix=${prefix}
bindir=${prefix}/bin
libexecdir=${prefix}/libexec
libdir=${prefix}/lib
includedir=${prefix}/include
mkspecsdir=${prefix}/mkspecs

Name: Qt6 Platform
Description: Qt Platform module
Version: 6.7.3
Cflags: -I${mkspecsdir}/macx-clang -I${includedir}
EOF

RUN cat > /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/pkgconfig/Qt6PrintSupport.pc <<'EOF'
prefix=/opt/local/libexec/qt6
exec_prefix=${prefix}
bindir=${prefix}/bin
libexecdir=${prefix}/libexec
libdir=${prefix}/lib
includedir=${prefix}/include

Name: Qt6 PrintSupport
Description: Qt PrintSupport module
Version: 6.7.3
Libs: -F${libdir} -framework QtPrintSupport
Cflags: -I${libdir}/QtPrintSupport.framework/Headers -I${libdir}/QtPrintSupport.framework -DQT_PRINTSUPPORT_LIB
Requires: Qt6Core Qt6Gui Qt6Widgets
EOF

RUN cat > /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/pkgconfig/Qt6Sql.pc <<'EOF'
prefix=/opt/local/libexec/qt6
exec_prefix=${prefix}
bindir=${prefix}/bin
libexecdir=${prefix}/libexec
libdir=${prefix}/lib
includedir=${prefix}/include

Name: Qt6 Sql
Description: Qt Sql module
Version: 6.7.3
Libs: -F${libdir} -framework QtSql
Cflags: -I${libdir}/QtSql.framework/Headers -I${libdir}/QtSql.framework -DQT_SQL_LIB
Requires: Qt6Core
EOF

RUN cat > /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/pkgconfig/Qt6Test.pc <<'EOF'
prefix=/opt/local/libexec/qt6
exec_prefix=${prefix}
bindir=${prefix}/bin
libexecdir=${prefix}/libexec
libdir=${prefix}/lib
includedir=${prefix}/include

Name: Qt6 Test
Description: Qt Test module
Version: 6.7.3
Libs: -F${libdir} -framework QtTest
Cflags: -I${libdir}/QtTest.framework/Headers -I${libdir}/QtTest.framework -DQT_TESTLIB_LIB
Requires: Qt6Core
EOF

RUN cat > /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/pkgconfig/Qt6Widgets.pc <<'EOF'
prefix=/opt/local/libexec/qt6
exec_prefix=${prefix}
bindir=${prefix}/bin
libexecdir=${prefix}/libexec
libdir=${prefix}/lib
includedir=${prefix}/include

Name: Qt6 Widgets
Description: Qt Widgets module
Version: 6.7.3
Libs: -F${libdir} -framework QtWidgets
Cflags: -I${libdir}/QtWidgets.framework/Headers -I${libdir}/QtWidgets.framework -DQT_WIDGETS_LIB
Requires: Qt6Core Qt6Gui
EOF

RUN cat > /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/pkgconfig/Qt6Xml.pc <<'EOF'
prefix=/opt/local/libexec/qt6
exec_prefix=${prefix}
bindir=${prefix}/bin
libexecdir=${prefix}/libexec
libdir=${prefix}/lib
includedir=${prefix}/include

Name: Qt6 Xml
Description: Qt Xml module
Version: 6.7.3
Libs: -F${libdir} -framework QtXml
Cflags: -I${libdir}/QtXml.framework/Headers -I${libdir}/QtXml.framework -DQT_XML_LIB
Requires: Qt6Core
EOF

# Fix lib path'es
RUN ln -sf /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/QtCore.framework/Versions/A/Headers /opt/local/libexec/qt6/include/QtCore && \
    ln -sf /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/QtWidgets.framework/Versions/A/Headers /opt/local/libexec/qt6/include/QtWidgets && \
    ln -sf /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/QtDBus.framework/Versions/A/Headers /opt/local/libexec/qt6/include/QtDBus && \
    ln -sf /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/QtGui.framework/Versions/A/Headers /opt/local/libexec/qt6/include/QtGui && \
    ln -sf /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/QtConcurrent.framework/Versions/A/Headers /opt/local/libexec/qt6/include/QtConcurrent && \
    ln -sf /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/QtNetwork.framework/Versions/A/Headers /opt/local/libexec/qt6/include/QtNetwork && \
    ln -sf /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/QtOpenGL.framework/Versions/A/Headers /opt/local/libexec/qt6/include/QtOpenGL && \
    ln -sf /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/QtOpenGLWidgets.framework/Versions/A/Headers /opt/local/libexec/qt6/include/QtOpenGLWidgets && \
    ln -sf /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/QtPrintSupport.framework/Versions/A/Headers /opt/local/libexec/qt6/include/QtPrintSupport && \
    ln -sf /osxcross/macports/pkgs/opt/local/libexec/qt6/lib/QtXml.framework/Versions/A/Headers /opt/local/libexec/qt6/include/QtXml

# Install Go 1.25.4
RUN curl -L -o /tmp/golang.tar.gz https://go.dev/dl/go1.25.4.linux-amd64.tar.gz && \
    tar -C /usr/local -xzf /tmp/golang.tar.gz

# prefix for all tools
ENV TOOLCHAINPREFIX=x86_64-apple-darwin${VER}
RUN ln -sf `which $TOOLCHAINPREFIX-otool` /usr/bin/otool && \
    ln -sf `which $TOOLCHAINPREFIX-install_name_tool` /usr/bin/install_name_tool

ENV CC=${TARGET_ARCH}-apple-darwin${VER}-clang
ENV CXX=${TARGET_ARCH}-apple-darwin${VER}-clang++
ENV GOOS=darwin
ENV GOARCH=amd64
ENV CGO_ENABLED=1
ENV PATH=/usr/local/go/bin:$PATH
ENV PKG_CONFIG_PATH=/opt/local/libexec/qt6/lib/pkgconfig/
ENV CGO_CXXFLAGS="-std=c++17 -stdlib=libc++ -fPIC -Wno-ignored-attributes -D_Bool=bool"
