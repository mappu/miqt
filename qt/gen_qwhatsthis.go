package qt

/*

#include "gen_qwhatsthis.h"
#include <stdlib.h>

*/
import "C"

import (
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
	ret := C.QWhatsThis_InWhatsThisMode()
	return (bool)(ret)
}

func QWhatsThis_LeaveWhatsThisMode() {
	C.QWhatsThis_LeaveWhatsThisMode()
}

func QWhatsThis_ShowText(pos *QPoint, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QWhatsThis_ShowText(pos.cPointer(), text_Cstring, C.size_t(len(text)))
}

func QWhatsThis_HideText() {
	C.QWhatsThis_HideText()
}

func QWhatsThis_CreateAction() *QAction {
	ret := C.QWhatsThis_CreateAction()
	return newQAction_U(unsafe.Pointer(ret))
}

func QWhatsThis_ShowText3(pos *QPoint, text string, w *QWidget) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QWhatsThis_ShowText3(pos.cPointer(), text_Cstring, C.size_t(len(text)), w.cPointer())
}

func QWhatsThis_CreateAction1(parent *QObject) *QAction {
	ret := C.QWhatsThis_CreateAction1(parent.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QWhatsThis) Delete() {
	C.QWhatsThis_Delete(this.h)
}
