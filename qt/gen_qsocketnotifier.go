package qt

/*

#include "gen_qsocketnotifier.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSocketNotifier__Type int

const (
	QSocketNotifier__Read      QSocketNotifier__Type = 0
	QSocketNotifier__Write     QSocketNotifier__Type = 1
	QSocketNotifier__Exception QSocketNotifier__Type = 2
)

type QSocketNotifier struct {
	h *C.QSocketNotifier
	*QObject
}

func (this *QSocketNotifier) cPointer() *C.QSocketNotifier {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSocketNotifier) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQSocketNotifier(h *C.QSocketNotifier) *QSocketNotifier {
	if h == nil {
		return nil
	}
	return &QSocketNotifier{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQSocketNotifier(h unsafe.Pointer) *QSocketNotifier {
	return newQSocketNotifier((*C.QSocketNotifier)(h))
}

// NewQSocketNotifier constructs a new QSocketNotifier object.
func NewQSocketNotifier(socket uintptr, param2 QSocketNotifier__Type) *QSocketNotifier {
	ret := C.QSocketNotifier_new((C.intptr_t)(socket), (C.int)(param2))
	return newQSocketNotifier(ret)
}

// NewQSocketNotifier2 constructs a new QSocketNotifier object.
func NewQSocketNotifier2(socket uintptr, param2 QSocketNotifier__Type, parent *QObject) *QSocketNotifier {
	ret := C.QSocketNotifier_new2((C.intptr_t)(socket), (C.int)(param2), parent.cPointer())
	return newQSocketNotifier(ret)
}

func (this *QSocketNotifier) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QSocketNotifier_MetaObject(this.h)))
}

func (this *QSocketNotifier) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QSocketNotifier_Metacast(this.h, param1_Cstring)
}

func QSocketNotifier_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSocketNotifier_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSocketNotifier_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSocketNotifier_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSocketNotifier) Socket() uintptr {
	return (uintptr)(C.QSocketNotifier_Socket(this.h))
}

func (this *QSocketNotifier) Type() QSocketNotifier__Type {
	return (QSocketNotifier__Type)(C.QSocketNotifier_Type(this.h))
}

func (this *QSocketNotifier) IsEnabled() bool {
	return (bool)(C.QSocketNotifier_IsEnabled(this.h))
}

func (this *QSocketNotifier) SetEnabled(enabled bool) {
	C.QSocketNotifier_SetEnabled(this.h, (C.bool)(enabled))
}

func QSocketNotifier_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSocketNotifier_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSocketNotifier_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSocketNotifier_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSocketNotifier_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSocketNotifier_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSocketNotifier_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSocketNotifier_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QSocketNotifier) Delete() {
	C.QSocketNotifier_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSocketNotifier) GoGC() {
	runtime.SetFinalizer(this, func(this *QSocketNotifier) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QSocketDescriptor struct {
	h *C.QSocketDescriptor
}

func (this *QSocketDescriptor) cPointer() *C.QSocketDescriptor {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSocketDescriptor) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQSocketDescriptor(h *C.QSocketDescriptor) *QSocketDescriptor {
	if h == nil {
		return nil
	}
	return &QSocketDescriptor{h: h}
}

func UnsafeNewQSocketDescriptor(h unsafe.Pointer) *QSocketDescriptor {
	return newQSocketDescriptor((*C.QSocketDescriptor)(h))
}

// NewQSocketDescriptor constructs a new QSocketDescriptor object.
func NewQSocketDescriptor() *QSocketDescriptor {
	ret := C.QSocketDescriptor_new()
	return newQSocketDescriptor(ret)
}

// NewQSocketDescriptor2 constructs a new QSocketDescriptor object.
func NewQSocketDescriptor2(param1 *QSocketDescriptor) *QSocketDescriptor {
	ret := C.QSocketDescriptor_new2(param1.cPointer())
	return newQSocketDescriptor(ret)
}

// NewQSocketDescriptor3 constructs a new QSocketDescriptor object.
func NewQSocketDescriptor3(descriptor int) *QSocketDescriptor {
	if runtime.GOOS == "linux" {
		ret := C.QSocketDescriptor_new3((C.int)(descriptor))
		return newQSocketDescriptor(ret)
	} else {
		panic("Unsupported OS")
	}
}

func (this *QSocketDescriptor) IsValid() bool {
	return (bool)(C.QSocketDescriptor_IsValid(this.h))
}

// Delete this object from C++ memory.
func (this *QSocketDescriptor) Delete() {
	C.QSocketDescriptor_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSocketDescriptor) GoGC() {
	runtime.SetFinalizer(this, func(this *QSocketDescriptor) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
