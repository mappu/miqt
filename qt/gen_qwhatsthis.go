package qt

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

func newQWhatsThis(h *C.QWhatsThis) *QWhatsThis {
	if h == nil {
		return nil
	}
	return &QWhatsThis{h: h}
}

func newQWhatsThis_U(h unsafe.Pointer) *QWhatsThis {
	return newQWhatsThis((*C.QWhatsThis)(h))
}

func QWhatsThis_EnterWhatsThisMode() {
	C.QWhatsThis_EnterWhatsThisMode()
}

func QWhatsThis_InWhatsThisMode() bool {
	_ret := C.QWhatsThis_InWhatsThisMode()
	return (bool)(_ret)
}

func QWhatsThis_LeaveWhatsThisMode() {
	C.QWhatsThis_LeaveWhatsThisMode()
}

func QWhatsThis_ShowText(pos *QPoint, text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QWhatsThis_ShowText(pos.cPointer(), (*C.struct_miqt_string)(text_ms))
}

func QWhatsThis_HideText() {
	C.QWhatsThis_HideText()
}

func QWhatsThis_CreateAction() *QAction {
	_ret := C.QWhatsThis_CreateAction()
	return newQAction_U(unsafe.Pointer(_ret))
}

func QWhatsThis_ShowText3(pos *QPoint, text string, w *QWidget) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QWhatsThis_ShowText3(pos.cPointer(), (*C.struct_miqt_string)(text_ms), w.cPointer())
}

func QWhatsThis_CreateAction1(parent *QObject) *QAction {
	_ret := C.QWhatsThis_CreateAction1(parent.cPointer())
	return newQAction_U(unsafe.Pointer(_ret))
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
