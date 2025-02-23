//go:build windowsqtstatic
// +build windowsqtstatic

package qt6

// Statically link the Qt platform plugins

/*
#cgo windowsqtstatic CXXFLAGS: -DMIQT_WINDOWSQTSTATIC
#cgo amd64 LDFLAGS: -L/usr/lib/mxe/usr/x86_64-w64-mingw32.static/qt6/plugins/platforms -lqwindows -L/usr/lib/mxe/usr/x86_64-w64-mingw32.static/qt6/plugins/styles -lqmodernwindowsstyle -ld3d9 -lsetupapi -lshcore -lwtsapi32 -lfreetype
#cgo 386 LDFLAGS: -L/usr/lib/mxe/usr/i686-w64-mingw32.static/qt6/plugins/platforms -lqwindows -L/usr/lib/mxe/usr/i686-w64-mingw32.static/qt6/plugins/styles -lqmodernwindowsstyle -ld3d9 -lsetupapi -lshcore -lwtsapi32 -lfreetype
*/
import "C"
