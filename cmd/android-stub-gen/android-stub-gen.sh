#!/bin/bash
#
# android-stub-gen generates a .so that runs an exported function from another
# so file. This is because Qt for Android always tries to run `main`, but Go's
# c-shared build mode cannot export a function named `main`.

set -eu

main() {

	if [[ $# -ne 3 && $# -ne 4 ]] ; then
		echo "Usage: android-gen-stub.sh src.so function-name dest.so [--qt6|--qt5]" >&2
		exit 1
	fi
	local ARG_SOURCE_SOFILE="$1"
	local ARG_FUNCTIONNAME="$2"
	local ARG_DEST_SOFILE="$3"
	local ARG_QTVERSION="${4:---qt5}"

	local tmpdir=$(mktemp -d)
	trap "rm -r ${tmpdir}" EXIT
	
	echo "- Using temporary directory: ${tmpdir}"

	echo "Generating stub..."
	
	cat > $tmpdir/miqtstub.cpp <<EOF
#include <android/log.h>
#include <dlfcn.h>
#include <stdlib.h>

typedef void goMainFunc_t();  

int main(int argc, char** argv) {
    __android_log_print(ANDROID_LOG_VERBOSE, "miqt_stub", "Starting up");
        
    void* handle = dlopen("$(basename "$ARG_SOURCE_SOFILE")", RTLD_LAZY);
    if (handle == NULL) {
        __android_log_print(ANDROID_LOG_VERBOSE, "miqt_stub", "miqt_stub: null handle opening so: %s", dlerror());
        exit(1);
    }
    
    void* goMain = dlsym(handle, "${ARG_FUNCTIONNAME}");
    if (goMain == NULL) {
        __android_log_print(ANDROID_LOG_VERBOSE, "miqt_stub", "miqt_stub: null handle looking for function: %s", dlerror());
        exit(1);        
    }
    
    __android_log_print(ANDROID_LOG_VERBOSE, "miqt_stub", "miqt_stub: Found target, calling");
    
    // Cast to function pointer and call
    goMainFunc_t* f = (goMainFunc_t*)goMain;
    f();
    
    __android_log_print(ANDROID_LOG_VERBOSE, "miqt_stub", "miqt_stub: Target function returned");
    return 0;
}
	
EOF
	
	# Compile
	# Link with Qt libraries so that androiddeployqt detects us as being the
	# main shared library
	
	if [[ $ARG_QTVERSION == '--qt5' ]] ; then
	
        # QT_PATH is already pre-set in our docker container environment. Includes trailing slash.
        QT_PATH=${QT_PATH:-/usr/local/Qt-5.15.13/}
        echo "- Found Qt path: ${QT_PATH}"

        $CXX -shared \
            -ldl \
            -llog \
            -L${QT_PATH}plugins/platforms -lplugins_platforms_qtforandroid_arm64-v8a \
            $(pkg-config --libs Qt5Widgets) \
            $(pkg-config --libs Qt5AndroidExtras) \
            $tmpdir/miqtstub.cpp \
            "-Wl,-soname,$(basename "$ARG_DEST_SOFILE")" \
            -o "$ARG_DEST_SOFILE"

	elif [[ $ARG_QTVERSION == '--qt6' ]] ; then
	
        # QT_ANDROID is already pre-set in our docker container environment. Does NOT include trailing slash
        QT_ANDROID=${QT_ANDROID:-/opt/Qt/6.6.1/android_arm64_v8a}
        echo "- Found Qt path: ${QT_ANDROID}"
        
        # There is no AndroidExtras in Qt 6
        
        $CXX -shared \
            -ldl \
            -llog \
            -L${QT_ANDROID}/plugins/platforms -lplugins_platforms_qtforandroid_arm64-v8a \
            $(pkg-config --libs Qt6Widgets) \
            $tmpdir/miqtstub.cpp \
            "-Wl,-soname,$(basename "$ARG_DEST_SOFILE")" \
            -o "$ARG_DEST_SOFILE"

	else
        echo "Unknown Qt version argument "${ARG_QTVERSION}" (expected --qt5 or --qt6)" >&2
        exit 1
	fi
	
	echo "Done."
}

main "$@"
