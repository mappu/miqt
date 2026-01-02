package designer

/*

#include "gen_extrainfo.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QDesignerExtraInfoExtension struct {
	h *C.QDesignerExtraInfoExtension
}

func (this *QDesignerExtraInfoExtension) cPointer() *C.QDesignerExtraInfoExtension {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerExtraInfoExtension) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerExtraInfoExtension constructs the type using only CGO pointers.
func newQDesignerExtraInfoExtension(h *C.QDesignerExtraInfoExtension) *QDesignerExtraInfoExtension {
	if h == nil {
		return nil
	}

	return &QDesignerExtraInfoExtension{h: h}
}

// UnsafeNewQDesignerExtraInfoExtension constructs the type using only unsafe pointers.
func UnsafeNewQDesignerExtraInfoExtension(h unsafe.Pointer) *QDesignerExtraInfoExtension {
	return newQDesignerExtraInfoExtension((*C.QDesignerExtraInfoExtension)(h))
}

func (this *QDesignerExtraInfoExtension) Core() *QDesignerFormEditorInterface {
	return newQDesignerFormEditorInterface(C.QDesignerExtraInfoExtension_core(this.h))
}

func (this *QDesignerExtraInfoExtension) Widget() *qt6.QWidget {
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerExtraInfoExtension_widget(this.h)))
}

func (this *QDesignerExtraInfoExtension) WorkingDirectory() string {
	var _ms C.struct_miqt_string = C.QDesignerExtraInfoExtension_workingDirectory(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerExtraInfoExtension) SetWorkingDirectory(workingDirectory string) {
	workingDirectory_ms := C.struct_miqt_string{}
	workingDirectory_ms.data = C.CString(workingDirectory)
	workingDirectory_ms.len = C.size_t(len(workingDirectory))
	defer C.free(unsafe.Pointer(workingDirectory_ms.data))
	C.QDesignerExtraInfoExtension_setWorkingDirectory(this.h, workingDirectory_ms)
}

// Delete this object from C++ memory.
func (this *QDesignerExtraInfoExtension) Delete() {
	C.QDesignerExtraInfoExtension_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerExtraInfoExtension) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerExtraInfoExtension) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
