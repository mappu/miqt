# NOTICE: This image does not contain any runnable Qt tools (moc, rcc, lconvert, etc)

FROM debian:13 AS downloader

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    apt-get install -qyy wget libarchive-tools && \
    apt-get clean
    
# Download Fsu0513 Qt builds
# @ref https://build-qt.fsu0413.me/6.5-series/6.5.3-for-windows/index.html 
    
RUN wget 'https://sourceforge.net/projects/fsu0413-qtbuilds/files/Qt6.5/Windows-x86_64/MinGW-GCC/Qt6.5.3-Windows-x86_64-MinGW13.2.0-msvcrt-staticFull-20240527.7z' && \
	/bin/bash -c "echo '66684817adc07ff746e8f6b5d9225ea76899940876c3f6f8392df0b0a750544f /Qt6.5.3-Windows-x86_64-MinGW13.2.0-msvcrt-staticFull-20240527.7z' | sha256sum -c" && \
	bsdtar xf Qt6.5.3-Windows-x86_64-MinGW13.2.0-msvcrt-staticFull-20240527.7z && \
	rm Qt6.5.3-Windows-x86_64-MinGW13.2.0-msvcrt-staticFull-20240527.7z

FROM debian:13

# RUN mkdir -p /qt/6.5.3

COPY --from=downloader /Qt6.5.3-Windows-x86_64-MinGW13.2.0-msvcrt-staticFull /qt/6.5.3/mingw_64

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    apt-get install -qyy golang-go gcc-mingw-w64-x86-64 g++-mingw-w64-x86-64 mingw-w64-x86-64-dev && \
    apt-get clean

# This archive does not come with any pkg-config files
# Create some manually

RUN mkdir -p /qt/6.5.3/mingw_64/lib/pkgconfig/

# Qt6Platform

RUN echo 'prefix=/qt/6.5.3/mingw_64' \
	'\nexec_prefix=${prefix}' \
	'\nbindir=${prefix}/bin' \
	'\nlibexecdir=${prefix}/bin' \
	'\nlibdir=${prefix}/lib' \
	'\nincludedir=${prefix}/include' \
	'\nmkspecsdir=${prefix}/mkspecs' \
	'\n' \
	'\nName: Qt6 Platform' \
	'\nDescription: Qt Platform module' \
	'\nVersion: 6.5.3' \
	'\nCflags: -I${mkspecsdir}/win32-g++ -I${includedir} -DWIN32 -D_ENABLE_EXTENDED_ALIGNED_STORAGE -DWIN64 -D_WIN64 -DMINGW_HAS_SECURE_API=1' \
	> /qt/6.5.3/mingw_64/lib/pkgconfig/Qt6Platform.pc

# Qt6Core

RUN echo 'prefix=/qt/6.5.3/mingw_64' \
	'\nexec_prefix=${prefix}' \
	'\nbindir=${prefix}/bin' \
	'\nlibexecdir=${prefix}/bin' \
	'\nlibdir=${prefix}/lib' \
	'\nincludedir=${prefix}/include' \
	'\n' \
	'\nName: Qt6 Core' \
	'\nDescription: Qt Core module' \
	'\nVersion: 6.5.3' \
	'\nLibs: -L${libdir} -lQt6Core' \
	'\nCflags: -I${includedir}/QtCore -I${includedir} -DQT_CORE_LIB' \
	'\nRequires: Qt6Platform' \
	> /qt/6.5.3/mingw_64/lib/pkgconfig/Qt6Core.pc

# Qt6Gui

RUN echo 'prefix=/qt/6.5.3/mingw_64' \
	'\nexec_prefix=${prefix}' \
	'\nbindir=${prefix}/bin' \
	'\nlibexecdir=${prefix}/bin' \
	'\nlibdir=${prefix}/lib' \
	'\nincludedir=${prefix}/include' \
	'\n' \
	'\nName: Qt6 Gui' \
	'\nDescription: Qt Gui module' \
	'\nVersion: 6.5.3' \
	'\nLibs: -L${libdir} -lQt6Gui' \
	'\nCflags: -I${includedir}/QtGui -I${includedir} -DQT_GUI_LIB' \
	'\nRequires: Qt6Core' \
	> /qt/6.5.3/mingw_64/lib/pkgconfig/Qt6Gui.pc

# Qt6Widgets

RUN echo 'prefix=/qt/6.5.3/mingw_64' \
	'\nexec_prefix=${prefix}' \
	'\nbindir=${prefix}/bin' \
	'\nlibexecdir=${prefix}/bin' \
	'\nlibdir=${prefix}/lib' \
	'\nincludedir=${prefix}/include' \
	'\n' \
	'\nName: Qt6 Widgets' \
	'\nDescription: Qt Widgets module' \
	'\nVersion: 6.5.3' \
	'\nLibs: -L${libdir} -lQt6Widgets' \
	'\nCflags: -I${includedir}/QtWidgets -I${includedir} -DQT_WIDGETS_LIB' \
	'\nRequires: Qt6Core Qt6Gui' \
	> /qt/6.5.3/mingw_64/lib/pkgconfig/Qt6Widgets.pc

# Environment variables

ENV CXX=x86_64-w64-mingw32-g++                                                                             
ENV CC=x86_64-w64-mingw32-gcc
ENV PKG_CONFIG_PATH=/qt/6.5.3/mingw_64/lib/pkgconfig
ENV CGO_ENABLED=1
ENV GOOS=windows
ENV GOARCH=amd64

# Qt 6.0 < 6.7 has some missing symbols when statically linking
# Manually link in extra .obj files from the build output directory
# However, linking them directly causes multiple-definition errors(!)
# Use -Wl,--allow-multiple-definition to suppress this.
#
# @ref https://bugreports.qt.io/browse/QTBUG-91448
# @ref https://forum.qt.io/topic/143369/linker-error-when-trying-to-compile-my-executable 
#
# Affected paths:
#
# /qt/6.5.3/mingw_64/lib/objects-Release/QWindowsIntegrationPlugin_resources_1/.rcc/qrc_openglblacklists.cpp.obj
# /qt/6.5.3/mingw_64/lib/objects-Release/QWindowsIntegrationPlugin_resources_2/.rcc/qrc_cursors.cpp.obj
# /qt/6.5.3/mingw_64/lib/objects-Release/Widgets_resources_1/.rcc/qrc_qstyle.cpp.obj
# /qt/6.5.3/mingw_64/lib/objects-Release/Widgets_resources_3/.rcc/qrc_qmessagebox.cpp.obj
# /qt/6.5.3/mingw_64/lib/objects-Release/Gui_resources_1/.rcc/qrc_qpdf.cpp.obj

ENV CGO_LDFLAGS='-static -lwtsapi32 -luxtheme -lole32 -lwinpthread -lsynchronization -loleaut32 -lws2_32 -luuid -luser32 -ladvapi32 -lshlwapi -lnetapi32 -ldxgi -ld3d9 -ld3d11 -ld3d12 -ldwrite -lwinmm -lmincore -lshcore -limm32 -lgdi32 -lcomdlg32 -ldwmapi -lauthz -lversion -lsetupapi -L/qt/6.5.3/mingw_64/lib/ -lQt6BundledZLIB -lQt6BundledPcre2 -lQt6BundledLibpng -lQt6BundledHarfbuzz -lQt6BundledFreetype -L/qt/6.5.3/mingw_64/plugins/styles -lqwindowsvistastyle -L/qt/6.5.3/mingw_64/plugins/platforms -lqwindows -Wl,--allow-multiple-definition /qt/6.5.3/mingw_64/lib/objects-Release/QWindowsIntegrationPlugin_resources_1/.rcc/qrc_openglblacklists.cpp.obj /qt/6.5.3/mingw_64/lib/objects-Release/QWindowsIntegrationPlugin_resources_2/.rcc/qrc_cursors.cpp.obj /qt/6.5.3/mingw_64/lib/objects-Release/Widgets_resources_1/.rcc/qrc_qstyle.cpp.obj /qt/6.5.3/mingw_64/lib/objects-Release/Widgets_resources_3/.rcc/qrc_qmessagebox.cpp.obj /qt/6.5.3/mingw_64/lib/objects-Release/Gui_resources_1/.rcc/qrc_qpdf.cpp.obj'

# Usage:
# go build -ldflags '-s -w -H=windowsgui' --tags=windowsqtstatic
