package qt6

/*

#include "gen_qwhatsthis.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QWhatsThis struct {
	h *C.QWhatsThis
}

func (this *QWhatsThis) cPointer() *C.QWhatsThis {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWhatsThis) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQWhatsThis(h *C.QWhatsThis) *QWhatsThis {
	if h == nil {
		return nil
	}
	return &QWhatsThis{h: h}
}

func UnsafeNewQWhatsThis(h unsafe.Pointer) *QWhatsThis {
	return newQWhatsThis((*C.QWhatsThis)(h))
}

func QWhatsThis_EnterWhatsThisMode() {
	C.QWhatsThis_EnterWhatsThisMode()
}

func QWhatsThis_InWhatsThisMode() bool {
	return (bool)(C.QWhatsThis_InWhatsThisMode())
}

func QWhatsThis_LeaveWhatsThisMode() {
	C.QWhatsThis_LeaveWhatsThisMode()
}

func QWhatsThis_ShowText(pos *QPoint, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QWhatsThis_ShowText(pos.cPointer(), text_ms)
}

func QWhatsThis_HideText() {
	C.QWhatsThis_HideText()
}

func QWhatsThis_CreateAction() *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QWhatsThis_CreateAction()))
}

func QWhatsThis_ShowText3(pos *QPoint, text string, w *QWidget) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QWhatsThis_ShowText3(pos.cPointer(), text_ms, w.cPointer())
}

func QWhatsThis_CreateAction1(parent *QObject) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QWhatsThis_CreateAction1(parent.cPointer())))
}

// Delete this object from C++ memory.
func (this *QWhatsThis) Delete() {
	C.QWhatsThis_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWhatsThis) GoGC() {
	runtime.SetFinalizer(this, func(this *QWhatsThis) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
