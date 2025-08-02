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
#cgo pkg-config: --static QtWidgets
*/
import "C"
