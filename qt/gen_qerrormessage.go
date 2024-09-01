package qt

/*

#include "gen_qerrormessage.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QErrorMessage struct {
	h *C.QErrorMessage
	*QDialog
}

func (this *QErrorMessage) cPointer() *C.QErrorMessage {
	if this == nil {
		return nil
	}
	return this.h
}

func newQErrorMessage(h *C.QErrorMessage) *QErrorMessage {
	if h == nil {
		return nil
	}
	return &QErrorMessage{h: h, QDialog: newQDialog_U(unsafe.Pointer(h))}
}

func newQErrorMessage_U(h unsafe.Pointer) *QErrorMessage {
	return newQErrorMessage((*C.QErrorMessage)(h))
}

// NewQErrorMessage constructs a new QErrorMessage object.
func NewQErrorMessage() *QErrorMessage {
	ret := C.QErrorMessage_new()
	return newQErrorMessage(ret)
}

// NewQErrorMessage2 constructs a new QErrorMessage object.
func NewQErrorMessage2(parent *QWidget) *QErrorMessage {
	ret := C.QErrorMessage_new2(parent.cPointer())
	return newQErrorMessage(ret)
}

func (this *QErrorMessage) MetaObject() *QMetaObject {
	ret := C.QErrorMessage_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QErrorMessage_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QErrorMessage_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QErrorMessage_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QErrorMessage_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QErrorMessage_QtHandler() *QErrorMessage {
	ret := C.QErrorMessage_QtHandler()
	return newQErrorMessage_U(unsafe.Pointer(ret))
}

func (this *QErrorMessage) ShowMessage(message string) {
	message_Cstring := C.CString(message)
	defer C.free(unsafe.Pointer(message_Cstring))
	C.QErrorMessage_ShowMessage(this.h, message_Cstring, C.ulong(len(message)))
}

func (this *QErrorMessage) ShowMessage2(message string, typeVal string) {
	message_Cstring := C.CString(message)
	defer C.free(unsafe.Pointer(message_Cstring))
	typeVal_Cstring := C.CString(typeVal)
	defer C.free(unsafe.Pointer(typeVal_Cstring))
	C.QErrorMessage_ShowMessage2(this.h, message_Cstring, C.ulong(len(message)), typeVal_Cstring, C.ulong(len(typeVal)))
}

func QErrorMessage_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QErrorMessage_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QErrorMessage_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QErrorMessage_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QErrorMessage_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QErrorMessage_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QErrorMessage_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QErrorMessage_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QErrorMessage) Delete() {
	C.QErrorMessage_Delete(this.h)
}
