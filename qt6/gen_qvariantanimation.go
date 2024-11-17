package qt6

/*

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

func (this *QVariantAnimation) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQVariantAnimation(h *C.QVariantAnimation) *QVariantAnimation {
	if h == nil {
		return nil
	}
	return &QVariantAnimation{h: h, QAbstractAnimation: UnsafeNewQAbstractAnimation(unsafe.Pointer(h))}
}

func UnsafeNewQVariantAnimation(h unsafe.Pointer) *QVariantAnimation {
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
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QVariantAnimation_MetaObject(this.h)))
}

func (this *QVariantAnimation) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVariantAnimation_Metacast(this.h, param1_Cstring))
}

func QVariantAnimation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVariantAnimation_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVariantAnimation) StartValue() *QVariant {
	_ret := C.QVariantAnimation_StartValue(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariantAnimation) SetStartValue(value *QVariant) {
	C.QVariantAnimation_SetStartValue(this.h, value.cPointer())
}

func (this *QVariantAnimation) EndValue() *QVariant {
	_ret := C.QVariantAnimation_EndValue(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariantAnimation) SetEndValue(value *QVariant) {
	C.QVariantAnimation_SetEndValue(this.h, value.cPointer())
}

func (this *QVariantAnimation) KeyValueAt(step float64) *QVariant {
	_ret := C.QVariantAnimation_KeyValueAt(this.h, (C.double)(step))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariantAnimation) SetKeyValueAt(step float64, value *QVariant) {
	C.QVariantAnimation_SetKeyValueAt(this.h, (C.double)(step), value.cPointer())
}

func (this *QVariantAnimation) KeyValues() []struct {
	First  float64
	Second QVariant
} {
	var _ma C.struct_miqt_array = C.QVariantAnimation_KeyValues(this.h)
	_ret := make([]struct {
		First  float64
		Second QVariant
	}, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_map)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_mm C.struct_miqt_map = _outCast[i]
		_lv_First_CArray := (*[0xffff]C.double)(unsafe.Pointer(_lv_mm.keys))
		_lv_Second_CArray := (*[0xffff]*C.QVariant)(unsafe.Pointer(_lv_mm.values))
		_lv_entry_First := (float64)(_lv_First_CArray[0])

		_lv_second_ret := _lv_Second_CArray[0]
		_lv_second_goptr := newQVariant(_lv_second_ret)
		_lv_second_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_lv_entry_Second := *_lv_second_goptr

		_ret[i] = struct {
			First  float64
			Second QVariant
		}{First: _lv_entry_First, Second: _lv_entry_Second}
	}
	return _ret
}

func (this *QVariantAnimation) SetKeyValues(values []struct {
	First  float64
	Second QVariant
}) {
	values_CArray := (*[0xffff]C.struct_miqt_map)(C.malloc(C.size_t(8 * len(values))))
	defer C.free(unsafe.Pointer(values_CArray))
	for i := range values {
		values_i_First_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8)))
		defer C.free(unsafe.Pointer(values_i_First_CArray))
		values_i_Second_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8)))
		defer C.free(unsafe.Pointer(values_i_Second_CArray))
		values_i_First_CArray[0] = (C.double)(values[i].First)
		values_i_Second_CArray[0] = values[i].Second.cPointer()
		values_i_pair := C.struct_miqt_map{
			len:    1,
			keys:   unsafe.Pointer(values_i_First_CArray),
			values: unsafe.Pointer(values_i_Second_CArray),
		}
		values_CArray[i] = values_i_pair
	}
	values_ma := C.struct_miqt_array{len: C.size_t(len(values)), data: unsafe.Pointer(values_CArray)}
	C.QVariantAnimation_SetKeyValues(this.h, values_ma)
}

func (this *QVariantAnimation) CurrentValue() *QVariant {
	_ret := C.QVariantAnimation_CurrentValue(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariantAnimation) Duration() int {
	return (int)(C.QVariantAnimation_Duration(this.h))
}

func (this *QVariantAnimation) SetDuration(msecs int) {
	C.QVariantAnimation_SetDuration(this.h, (C.int)(msecs))
}

func (this *QVariantAnimation) EasingCurve() *QEasingCurve {
	_ret := C.QVariantAnimation_EasingCurve(this.h)
	_goptr := newQEasingCurve(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVariantAnimation) SetEasingCurve(easing *QEasingCurve) {
	C.QVariantAnimation_SetEasingCurve(this.h, easing.cPointer())
}

func (this *QVariantAnimation) ValueChanged(value *QVariant) {
	C.QVariantAnimation_ValueChanged(this.h, value.cPointer())
}
func (this *QVariantAnimation) OnValueChanged(slot func(value *QVariant)) {
	C.QVariantAnimation_connect_ValueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVariantAnimation_ValueChanged
func miqt_exec_callback_QVariantAnimation_ValueChanged(cb C.intptr_t, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(value *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc(slotval1)
}

func QVariantAnimation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVariantAnimation_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVariantAnimation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVariantAnimation_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QVariantAnimation) Delete() {
	C.QVariantAnimation_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVariantAnimation) GoGC() {
	runtime.SetFinalizer(this, func(this *QVariantAnimation) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
