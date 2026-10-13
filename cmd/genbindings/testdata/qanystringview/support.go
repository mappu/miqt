package qt6

/*
#cgo CXXFLAGS: -std=c++17
#cgo pkg-config: Qt6Widgets
#include "support.h"
#include <stdlib.h>
*/
import "C"

import (
	"runtime"
	"unsafe"
)

func checkQtConsumers(view *QAnyStringView, name, file string) bool {
	n, f := C.CString(name), C.CString(file)
	defer C.free(unsafe.Pointer(n))
	defer C.free(unsafe.Pointer(f))
	ok := C.test_qt_consumers(view.UnsafePointer(), n, C.size_t(len(name)), f)
	runtime.KeepAlive(view)
	return bool(ok)
}

func externalView() unsafe.Pointer { return C.test_external_view() }

// The reduced fixture omits qnamespace.h; checked-in bindings also use this enum.
type CaseSensitivity int

func externalLatin1View() unsafe.Pointer { return C.test_external_latin1_view() }
