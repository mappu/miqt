#!/bin/bash
#
# android-stub-gen generates a .so that runs an exported function from another
# so file. This is because Qt for Android always tries to run `main`, but Go's
# c-shared build mode cannot export a function named `main`.

set -eu

# QT_PATH is already pre-set in our docker container environment. Includes trailing slash.
QT_PATH=${QT_PATH:-/usr/local/Qt-5.15.13/}

main() {

	if [[ $# -ne 3 ]] ; then
		echo "Usage: android-gen-stub.sh src.so function-name dest.so" >&2
		exit 1
	fi
	local ARG_SOURCE_SOFILE="$1"
	local ARG_FUNCTIONNAME="$2"
	local ARG_DEST_SOFILE="$3"

	local tmpdir=$(mktemp -d)
	trap "rm -r ${tmpdir}" EXIT
	
	echo "- Using temporary directory: ${tmpdir}"
	echo "- Found Qt path: ${QT_PATH}"

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
	$CXX -shared \
        -ldl \
        -llog \
        ${QT_PATH}plugins/platforms/libplugins_platforms_qtforandroid_arm64-v8a.so \
        ${QT_PATH}lib/libQt5Widgets_arm64-v8a.so /usr/local/Qt-5.15.13/lib/libQt5Gui_arm64-v8a.so \
        ${QT_PATH}lib/libQt5Core_arm64-v8a.so \
        ${QT_PATH}lib/libQt5Svg_arm64-v8a.so \
        ${QT_PATH}lib/libQt5AndroidExtras_arm64-v8a.so \
        -fPIC -DQT_WIDGETS_LIB -I${QT_PATH}include/QtWidgets -I${QT_PATH}include/ -I${QT_PATH}include/QtCore -DQT_GUI_LIB -I${QT_PATH}include/QtGui -DQT_CORE_LIB \
        $tmpdir/miqtstub.cpp \
        "-Wl,-soname,$(basename "$ARG_DEST_SOFILE")" \
        -o "$ARG_DEST_SOFILE"

	
	echo "Done."
}

main "$@"
