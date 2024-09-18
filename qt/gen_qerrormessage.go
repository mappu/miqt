package qt

/*

#include "gen_qerrormessage.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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
	return newQMetaObject_U(unsafe.Pointer(C.QErrorMessage_MetaObject(this.h)))
}

func QErrorMessage_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QErrorMessage_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QErrorMessage_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QErrorMessage_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QErrorMessage_QtHandler() *QErrorMessage {
	return newQErrorMessage_U(unsafe.Pointer(C.QErrorMessage_QtHandler()))
}

func (this *QErrorMessage) ShowMessage(message string) {
	message_ms := miqt_strdupg(message)
	defer C.free(message_ms)
	C.QErrorMessage_ShowMessage(this.h, (*C.struct_miqt_string)(message_ms))
}

func (this *QErrorMessage) ShowMessage2(message string, typeVal string) {
	message_ms := miqt_strdupg(message)
	defer C.free(message_ms)
	typeVal_ms := miqt_strdupg(typeVal)
	defer C.free(typeVal_ms)
	C.QErrorMessage_ShowMessage2(this.h, (*C.struct_miqt_string)(message_ms), (*C.struct_miqt_string)(typeVal_ms))
}

func QErrorMessage_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QErrorMessage_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QErrorMessage_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QErrorMessage_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QErrorMessage_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QErrorMessage_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QErrorMessage_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QErrorMessage_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QErrorMessage) Delete() {
	C.QErrorMessage_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QErrorMessage) GoGC() {
	runtime.SetFinalizer(this, func(this *QErrorMessage) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
