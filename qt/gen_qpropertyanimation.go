package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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
	ret := C.QPropertyAnimation_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QPropertyAnimation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPropertyAnimation_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPropertyAnimation_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPropertyAnimation_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPropertyAnimation) TargetObject() *QObject {
	ret := C.QPropertyAnimation_TargetObject(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QPropertyAnimation) SetTargetObject(target *QObject) {
	C.QPropertyAnimation_SetTargetObject(this.h, target.cPointer())
}

func (this *QPropertyAnimation) PropertyName() *QByteArray {
	ret := C.QPropertyAnimation_PropertyName(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPropertyAnimation) SetPropertyName(propertyName *QByteArray) {
	C.QPropertyAnimation_SetPropertyName(this.h, propertyName.cPointer())
}

func QPropertyAnimation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPropertyAnimation_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPropertyAnimation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPropertyAnimation_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPropertyAnimation_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPropertyAnimation_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPropertyAnimation_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPropertyAnimation_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPropertyAnimation) Delete() {
	C.QPropertyAnimation_Delete(this.h)
}
