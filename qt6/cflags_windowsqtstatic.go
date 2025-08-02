//go:build windowsqtstatic
// +build windowsqtstatic

package qt6

// Statically link the Qt platform plugins

/*
#cgo windowsqtstatic CXXFLAGS: -DMIQT_WINDOWSQTSTATIC
#cgo pkg-config: --static Qt6Widgets
*/
import "C"
