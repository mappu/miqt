package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qvariantanimation.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QVariantAnimation struct {
	h *C.QVariantAnimation
	*QAbstractAnimation
}

func (this *QVariantAnimation) cPointer() *C.QVariantAnimation {
	if this == nil {
		return nil
	}
	return this.h
}

func newQVariantAnimation(h *C.QVariantAnimation) *QVariantAnimation {
	if h == nil {
		return nil
	}
	return &QVariantAnimation{h: h, QAbstractAnimation: newQAbstractAnimation_U(unsafe.Pointer(h))}
}

func newQVariantAnimation_U(h unsafe.Pointer) *QVariantAnimation {
	return newQVariantAnimation((*C.QVariantAnimation)(h))
}

// NewQVariantAnimation constructs a new QVariantAnimation object.
func NewQVariantAnimation() *QVariantAnimation {
	ret := C.QVariantAnimation_new()
	return newQVariantAnimation(ret)
}

// NewQVariantAnimation2 constructs a new QVariantAnimation object.
func NewQVariantAnimation2(parent *QObject) *QVariantAnimation {
	ret := C.QVariantAnimation_new2(parent.cPointer())
	return newQVariantAnimation(ret)
}

func (this *QVariantAnimation) MetaObject() *QMetaObject {
	ret := C.QVariantAnimation_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QVariantAnimation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QVariantAnimation_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QVariantAnimation_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QVariantAnimation_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QVariantAnimation) StartValue() *QVariant {
	ret := C.QVariantAnimation_StartValue(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariantAnimation) SetStartValue(value *QVariant) {
	C.QVariantAnimation_SetStartValue(this.h, value.cPointer())
}

func (this *QVariantAnimation) EndValue() *QVariant {
	ret := C.QVariantAnimation_EndValue(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariantAnimation) SetEndValue(value *QVariant) {
	C.QVariantAnimation_SetEndValue(this.h, value.cPointer())
}

func (this *QVariantAnimation) KeyValueAt(step float64) *QVariant {
	ret := C.QVariantAnimation_KeyValueAt(this.h, (C.double)(step))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariantAnimation) SetKeyValueAt(step float64, value *QVariant) {
	C.QVariantAnimation_SetKeyValueAt(this.h, (C.double)(step), value.cPointer())
}

func (this *QVariantAnimation) CurrentValue() *QVariant {
	ret := C.QVariantAnimation_CurrentValue(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariantAnimation) Duration() int {
	ret := C.QVariantAnimation_Duration(this.h)
	return (int)(ret)
}

func (this *QVariantAnimation) SetDuration(msecs int) {
	C.QVariantAnimation_SetDuration(this.h, (C.int)(msecs))
}

func (this *QVariantAnimation) EasingCurve() *QEasingCurve {
	ret := C.QVariantAnimation_EasingCurve(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQEasingCurve(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QEasingCurve) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QVariantAnimation) SetEasingCurve(easing *QEasingCurve) {
	C.QVariantAnimation_SetEasingCurve(this.h, easing.cPointer())
}

func (this *QVariantAnimation) ValueChanged(value *QVariant) {
	C.QVariantAnimation_ValueChanged(this.h, value.cPointer())
}

func (this *QVariantAnimation) OnValueChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QVariantAnimation_connect_ValueChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QVariantAnimation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QVariantAnimation_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QVariantAnimation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QVariantAnimation_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QVariantAnimation_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QVariantAnimation_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QVariantAnimation_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QVariantAnimation_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QVariantAnimation) Delete() {
	C.QVariantAnimation_Delete(this.h)
}
