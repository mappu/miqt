package qt

/*

#include "gen_qpropertyanimation.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPropertyAnimation struct {
	h          *C.QPropertyAnimation
	isSubclass bool
	*QVariantAnimation
}

func (this *QPropertyAnimation) cPointer() *C.QPropertyAnimation {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPropertyAnimation) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPropertyAnimation constructs the type using only CGO pointers.
func newQPropertyAnimation(h *C.QPropertyAnimation, h_QVariantAnimation *C.QVariantAnimation, h_QAbstractAnimation *C.QAbstractAnimation, h_QObject *C.QObject) *QPropertyAnimation {
	if h == nil {
		return nil
	}
	return &QPropertyAnimation{h: h,
		QVariantAnimation: newQVariantAnimation(h_QVariantAnimation, h_QAbstractAnimation, h_QObject)}
}

// UnsafeNewQPropertyAnimation constructs the type using only unsafe pointers.
func UnsafeNewQPropertyAnimation(h unsafe.Pointer, h_QVariantAnimation unsafe.Pointer, h_QAbstractAnimation unsafe.Pointer, h_QObject unsafe.Pointer) *QPropertyAnimation {
	if h == nil {
		return nil
	}

	return &QPropertyAnimation{h: (*C.QPropertyAnimation)(h),
		QVariantAnimation: UnsafeNewQVariantAnimation(h_QVariantAnimation, h_QAbstractAnimation, h_QObject)}
}

// NewQPropertyAnimation constructs a new QPropertyAnimation object.
func NewQPropertyAnimation() *QPropertyAnimation {
	var outptr_QPropertyAnimation *C.QPropertyAnimation = nil
	var outptr_QVariantAnimation *C.QVariantAnimation = nil
	var outptr_QAbstractAnimation *C.QAbstractAnimation = nil
	var outptr_QObject *C.QObject = nil

	C.QPropertyAnimation_new(&outptr_QPropertyAnimation, &outptr_QVariantAnimation, &outptr_QAbstractAnimation, &outptr_QObject)
	ret := newQPropertyAnimation(outptr_QPropertyAnimation, outptr_QVariantAnimation, outptr_QAbstractAnimation, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQPropertyAnimation2 constructs a new QPropertyAnimation object.
func NewQPropertyAnimation2(target *QObject, propertyName []byte) *QPropertyAnimation {
	propertyName_alias := C.struct_miqt_string{}
	propertyName_alias.data = (*C.char)(unsafe.Pointer(&propertyName[0]))
	propertyName_alias.len = C.size_t(len(propertyName))
	var outptr_QPropertyAnimation *C.QPropertyAnimation = nil
	var outptr_QVariantAnimation *C.QVariantAnimation = nil
	var outptr_QAbstractAnimation *C.QAbstractAnimation = nil
	var outptr_QObject *C.QObject = nil

	C.QPropertyAnimation_new2(target.cPointer(), propertyName_alias, &outptr_QPropertyAnimation, &outptr_QVariantAnimation, &outptr_QAbstractAnimation, &outptr_QObject)
	ret := newQPropertyAnimation(outptr_QPropertyAnimation, outptr_QVariantAnimation, outptr_QAbstractAnimation, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQPropertyAnimation3 constructs a new QPropertyAnimation object.
func NewQPropertyAnimation3(parent *QObject) *QPropertyAnimation {
	var outptr_QPropertyAnimation *C.QPropertyAnimation = nil
	var outptr_QVariantAnimation *C.QVariantAnimation = nil
	var outptr_QAbstractAnimation *C.QAbstractAnimation = nil
	var outptr_QObject *C.QObject = nil

	C.QPropertyAnimation_new3(parent.cPointer(), &outptr_QPropertyAnimation, &outptr_QVariantAnimation, &outptr_QAbstractAnimation, &outptr_QObject)
	ret := newQPropertyAnimation(outptr_QPropertyAnimation, outptr_QVariantAnimation, outptr_QAbstractAnimation, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQPropertyAnimation4 constructs a new QPropertyAnimation object.
func NewQPropertyAnimation4(target *QObject, propertyName []byte, parent *QObject) *QPropertyAnimation {
	propertyName_alias := C.struct_miqt_string{}
	propertyName_alias.data = (*C.char)(unsafe.Pointer(&propertyName[0]))
	propertyName_alias.len = C.size_t(len(propertyName))
	var outptr_QPropertyAnimation *C.QPropertyAnimation = nil
	var outptr_QVariantAnimation *C.QVariantAnimation = nil
	var outptr_QAbstractAnimation *C.QAbstractAnimation = nil
	var outptr_QObject *C.QObject = nil

	C.QPropertyAnimation_new4(target.cPointer(), propertyName_alias, parent.cPointer(), &outptr_QPropertyAnimation, &outptr_QVariantAnimation, &outptr_QAbstractAnimation, &outptr_QObject)
	ret := newQPropertyAnimation(outptr_QPropertyAnimation, outptr_QVariantAnimation, outptr_QAbstractAnimation, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QPropertyAnimation) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QPropertyAnimation_MetaObject(this.h)))
}

func (this *QPropertyAnimation) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPropertyAnimation_Metacast(this.h, param1_Cstring))
}

func QPropertyAnimation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPropertyAnimation_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPropertyAnimation_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPropertyAnimation_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPropertyAnimation) TargetObject() *QObject {
	return UnsafeNewQObject(unsafe.Pointer(C.QPropertyAnimation_TargetObject(this.h)))
}

func (this *QPropertyAnimation) SetTargetObject(target *QObject) {
	C.QPropertyAnimation_SetTargetObject(this.h, target.cPointer())
}

func (this *QPropertyAnimation) PropertyName() []byte {
	var _bytearray C.struct_miqt_string = C.QPropertyAnimation_PropertyName(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QPropertyAnimation) SetPropertyName(propertyName []byte) {
	propertyName_alias := C.struct_miqt_string{}
	propertyName_alias.data = (*C.char)(unsafe.Pointer(&propertyName[0]))
	propertyName_alias.len = C.size_t(len(propertyName))
	C.QPropertyAnimation_SetPropertyName(this.h, propertyName_alias)
}

func QPropertyAnimation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPropertyAnimation_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPropertyAnimation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPropertyAnimation_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPropertyAnimation_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPropertyAnimation_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPropertyAnimation_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPropertyAnimation_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPropertyAnimation) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QPropertyAnimation_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QPropertyAnimation) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QPropertyAnimation_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPropertyAnimation_Event
func miqt_exec_callback_QPropertyAnimation_Event(self *C.QPropertyAnimation, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPropertyAnimation{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPropertyAnimation) callVirtualBase_UpdateCurrentValue(value *QVariant) {

	C.QPropertyAnimation_virtualbase_UpdateCurrentValue(unsafe.Pointer(this.h), value.cPointer())

}
func (this *QPropertyAnimation) OnUpdateCurrentValue(slot func(super func(value *QVariant), value *QVariant)) {
	C.QPropertyAnimation_override_virtual_UpdateCurrentValue(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPropertyAnimation_UpdateCurrentValue
func miqt_exec_callback_QPropertyAnimation_UpdateCurrentValue(self *C.QPropertyAnimation, cb C.intptr_t, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value *QVariant), value *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc((&QPropertyAnimation{h: self}).callVirtualBase_UpdateCurrentValue, slotval1)

}

func (this *QPropertyAnimation) callVirtualBase_UpdateState(newState QAbstractAnimation__State, oldState QAbstractAnimation__State) {

	C.QPropertyAnimation_virtualbase_UpdateState(unsafe.Pointer(this.h), (C.int)(newState), (C.int)(oldState))

}
func (this *QPropertyAnimation) OnUpdateState(slot func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State)) {
	C.QPropertyAnimation_override_virtual_UpdateState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPropertyAnimation_UpdateState
func miqt_exec_callback_QPropertyAnimation_UpdateState(self *C.QPropertyAnimation, cb C.intptr_t, newState C.int, oldState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__State)(newState)

	slotval2 := (QAbstractAnimation__State)(oldState)

	gofunc((&QPropertyAnimation{h: self}).callVirtualBase_UpdateState, slotval1, slotval2)

}

func (this *QPropertyAnimation) callVirtualBase_Duration() int {

	return (int)(C.QPropertyAnimation_virtualbase_Duration(unsafe.Pointer(this.h)))

}
func (this *QPropertyAnimation) OnDuration(slot func(super func() int) int) {
	C.QPropertyAnimation_override_virtual_Duration(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPropertyAnimation_Duration
func miqt_exec_callback_QPropertyAnimation_Duration(self *C.QPropertyAnimation, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPropertyAnimation{h: self}).callVirtualBase_Duration)

	return (C.int)(virtualReturn)

}

func (this *QPropertyAnimation) callVirtualBase_UpdateCurrentTime(param1 int) {

	C.QPropertyAnimation_virtualbase_UpdateCurrentTime(unsafe.Pointer(this.h), (C.int)(param1))

}
func (this *QPropertyAnimation) OnUpdateCurrentTime(slot func(super func(param1 int), param1 int)) {
	C.QPropertyAnimation_override_virtual_UpdateCurrentTime(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPropertyAnimation_UpdateCurrentTime
func miqt_exec_callback_QPropertyAnimation_UpdateCurrentTime(self *C.QPropertyAnimation, cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int), param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc((&QPropertyAnimation{h: self}).callVirtualBase_UpdateCurrentTime, slotval1)

}

func (this *QPropertyAnimation) callVirtualBase_Interpolated(from *QVariant, to *QVariant, progress float64) *QVariant {

	_ret := C.QPropertyAnimation_virtualbase_Interpolated(unsafe.Pointer(this.h), from.cPointer(), to.cPointer(), (C.double)(progress))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPropertyAnimation) OnInterpolated(slot func(super func(from *QVariant, to *QVariant, progress float64) *QVariant, from *QVariant, to *QVariant, progress float64) *QVariant) {
	C.QPropertyAnimation_override_virtual_Interpolated(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPropertyAnimation_Interpolated
func miqt_exec_callback_QPropertyAnimation_Interpolated(self *C.QPropertyAnimation, cb C.intptr_t, from *C.QVariant, to *C.QVariant, progress C.double) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(from *QVariant, to *QVariant, progress float64) *QVariant, from *QVariant, to *QVariant, progress float64) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQVariant(unsafe.Pointer(from))
	slotval2 := UnsafeNewQVariant(unsafe.Pointer(to))
	slotval3 := (float64)(progress)

	virtualReturn := gofunc((&QPropertyAnimation{h: self}).callVirtualBase_Interpolated, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QPropertyAnimation) Delete() {
	C.QPropertyAnimation_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPropertyAnimation) GoGC() {
	runtime.SetFinalizer(this, func(this *QPropertyAnimation) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
