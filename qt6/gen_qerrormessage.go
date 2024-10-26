package qt6

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

func (this *QErrorMessage) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQErrorMessage(h *C.QErrorMessage) *QErrorMessage {
	if h == nil {
		return nil
	}
	return &QErrorMessage{h: h, QDialog: UnsafeNewQDialog(unsafe.Pointer(h))}
}

func UnsafeNewQErrorMessage(h unsafe.Pointer) *QErrorMessage {
	return newQErrorMessage((*C.QErrorMessage)(h))
}

// NewQErrorMessage constructs a new QErrorMessage object.
func NewQErrorMessage(parent *QWidget) *QErrorMessage {
	ret := C.QErrorMessage_new(parent.cPointer())
	return newQErrorMessage(ret)
}

// NewQErrorMessage2 constructs a new QErrorMessage object.
func NewQErrorMessage2() *QErrorMessage {
	ret := C.QErrorMessage_new2()
	return newQErrorMessage(ret)
}

func (this *QErrorMessage) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QErrorMessage_MetaObject(this.h)))
}

func (this *QErrorMessage) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QErrorMessage_Metacast(this.h, param1_Cstring))
}

func QErrorMessage_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QErrorMessage_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QErrorMessage_QtHandler() *QErrorMessage {
	return UnsafeNewQErrorMessage(unsafe.Pointer(C.QErrorMessage_QtHandler()))
}

func (this *QErrorMessage) ShowMessage(message string) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	C.QErrorMessage_ShowMessage(this.h, message_ms)
}

func (this *QErrorMessage) ShowMessage2(message string, typeVal string) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	typeVal_ms := C.struct_miqt_string{}
	typeVal_ms.data = C.CString(typeVal)
	typeVal_ms.len = C.size_t(len(typeVal))
	defer C.free(unsafe.Pointer(typeVal_ms.data))
	C.QErrorMessage_ShowMessage2(this.h, message_ms, typeVal_ms)
}

func QErrorMessage_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QErrorMessage_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QErrorMessage_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QErrorMessage_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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
