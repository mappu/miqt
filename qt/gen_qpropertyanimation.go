package qt

/*

#include "gen_qpropertyanimation.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPropertyAnimation struct {
	h *C.QPropertyAnimation
	*QVariantAnimation
}

func (this *QPropertyAnimation) cPointer() *C.QPropertyAnimation {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPropertyAnimation(h *C.QPropertyAnimation) *QPropertyAnimation {
	if h == nil {
		return nil
	}
	return &QPropertyAnimation{h: h, QVariantAnimation: newQVariantAnimation_U(unsafe.Pointer(h))}
}

func newQPropertyAnimation_U(h unsafe.Pointer) *QPropertyAnimation {
	return newQPropertyAnimation((*C.QPropertyAnimation)(h))
}

// NewQPropertyAnimation constructs a new QPropertyAnimation object.
func NewQPropertyAnimation() *QPropertyAnimation {
	ret := C.QPropertyAnimation_new()
	return newQPropertyAnimation(ret)
}

// NewQPropertyAnimation2 constructs a new QPropertyAnimation object.
func NewQPropertyAnimation2(target *QObject, propertyName *QByteArray) *QPropertyAnimation {
	ret := C.QPropertyAnimation_new2(target.cPointer(), propertyName.cPointer())
	return newQPropertyAnimation(ret)
}

// NewQPropertyAnimation3 constructs a new QPropertyAnimation object.
func NewQPropertyAnimation3(parent *QObject) *QPropertyAnimation {
	ret := C.QPropertyAnimation_new3(parent.cPointer())
	return newQPropertyAnimation(ret)
}

// NewQPropertyAnimation4 constructs a new QPropertyAnimation object.
func NewQPropertyAnimation4(target *QObject, propertyName *QByteArray, parent *QObject) *QPropertyAnimation {
	ret := C.QPropertyAnimation_new4(target.cPointer(), propertyName.cPointer(), parent.cPointer())
	return newQPropertyAnimation(ret)
}

func (this *QPropertyAnimation) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QPropertyAnimation_MetaObject(this.h)))
}

func (this *QPropertyAnimation) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QPropertyAnimation_Metacast(this.h, param1_Cstring)
}

func QPropertyAnimation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QPropertyAnimation_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPropertyAnimation_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QPropertyAnimation_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPropertyAnimation) TargetObject() *QObject {
	return newQObject_U(unsafe.Pointer(C.QPropertyAnimation_TargetObject(this.h)))
}

func (this *QPropertyAnimation) SetTargetObject(target *QObject) {
	C.QPropertyAnimation_SetTargetObject(this.h, target.cPointer())
}

func (this *QPropertyAnimation) PropertyName() *QByteArray {
	_ret := C.QPropertyAnimation_PropertyName(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPropertyAnimation) SetPropertyName(propertyName *QByteArray) {
	C.QPropertyAnimation_SetPropertyName(this.h, propertyName.cPointer())
}

func QPropertyAnimation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPropertyAnimation_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPropertyAnimation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPropertyAnimation_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPropertyAnimation_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPropertyAnimation_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPropertyAnimation_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPropertyAnimation_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QPropertyAnimation) Delete() {
	C.QPropertyAnimation_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPropertyAnimation) GoGC() {
	runtime.SetFinalizer(this, func(this *QPropertyAnimation) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
