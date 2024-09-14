package qt

/*

#include "gen_qobjectcleanuphandler.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QObjectCleanupHandler struct {
	h *C.QObjectCleanupHandler
	*QObject
}

func (this *QObjectCleanupHandler) cPointer() *C.QObjectCleanupHandler {
	if this == nil {
		return nil
	}
	return this.h
}

func newQObjectCleanupHandler(h *C.QObjectCleanupHandler) *QObjectCleanupHandler {
	if h == nil {
		return nil
	}
	return &QObjectCleanupHandler{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQObjectCleanupHandler_U(h unsafe.Pointer) *QObjectCleanupHandler {
	return newQObjectCleanupHandler((*C.QObjectCleanupHandler)(h))
}

// NewQObjectCleanupHandler constructs a new QObjectCleanupHandler object.
func NewQObjectCleanupHandler() *QObjectCleanupHandler {
	ret := C.QObjectCleanupHandler_new()
	return newQObjectCleanupHandler(ret)
}

func (this *QObjectCleanupHandler) MetaObject() *QMetaObject {
	_ret := C.QObjectCleanupHandler_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QObjectCleanupHandler_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QObjectCleanupHandler_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QObjectCleanupHandler_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QObjectCleanupHandler_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QObjectCleanupHandler) Add(object *QObject) *QObject {
	_ret := C.QObjectCleanupHandler_Add(this.h, object.cPointer())
	return newQObject_U(unsafe.Pointer(_ret))
}

func (this *QObjectCleanupHandler) Remove(object *QObject) {
	C.QObjectCleanupHandler_Remove(this.h, object.cPointer())
}

func (this *QObjectCleanupHandler) IsEmpty() bool {
	_ret := C.QObjectCleanupHandler_IsEmpty(this.h)
	return (bool)(_ret)
}

func (this *QObjectCleanupHandler) Clear() {
	C.QObjectCleanupHandler_Clear(this.h)
}

func QObjectCleanupHandler_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QObjectCleanupHandler_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QObjectCleanupHandler_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QObjectCleanupHandler_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QObjectCleanupHandler_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QObjectCleanupHandler_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QObjectCleanupHandler_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QObjectCleanupHandler_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QObjectCleanupHandler) Delete() {
	C.QObjectCleanupHandler_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QObjectCleanupHandler) GoGC() {
	runtime.SetFinalizer(this, func(this *QObjectCleanupHandler) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
