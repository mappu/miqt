//go:build windowsqtstatic
// +build windowsqtstatic

package qt

// Some extra libraries should be linked to make a proper static build.
// Otherwise, it can cause "No Qt platform plugin could be initialized" error.
// @ref https://github.com/mappu/miqt/issues/25
// @ref https://stackoverflow.com/a/16776116
// @ref https://stackoverflow.com/a/58648193
// @ref https://stackoverflow.com/a/57374635

/*
#cgo windowsqtstatic CXXFLAGS: -DMIQT_WINDOWSQTSTATIC
#cgo LDFLAGS: -L/usr/lib/mxe/usr/x86_64-w64-mingw32.static/qt5/plugins/platforms -lqwindows -lQt5FontDatabaseSupport -lQt5EventDispatcherSupport -lQt5ThemeSupport -lQt5PlatformCompositorSupport -lQt5AccessibilitySupport -lQt5WindowsUIAutomationSupport -lwtsapi32 -L/usr/lib/mxe/usr/x86_64-w64-mingw32.static/qt5/plugins/styles -lqwindowsvistastyle -luxtheme
*/
import "C"
