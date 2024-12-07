package qt6

/*

#include "gen_qgraphicstransform.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsTransform struct {
	h          *C.QGraphicsTransform
	isSubclass bool
	*QObject
}

func (this *QGraphicsTransform) cPointer() *C.QGraphicsTransform {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsTransform) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsTransform constructs the type using only CGO pointers.
func newQGraphicsTransform(h *C.QGraphicsTransform, h_QObject *C.QObject) *QGraphicsTransform {
	if h == nil {
		return nil
	}
	return &QGraphicsTransform{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQGraphicsTransform constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsTransform(h unsafe.Pointer, h_QObject unsafe.Pointer) *QGraphicsTransform {
	if h == nil {
		return nil
	}

	return &QGraphicsTransform{h: (*C.QGraphicsTransform)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQGraphicsTransform constructs a new QGraphicsTransform object.
func NewQGraphicsTransform() *QGraphicsTransform {
	var outptr_QGraphicsTransform *C.QGraphicsTransform = nil
	var outptr_QObject *C.QObject = nil

	C.QGraphicsTransform_new(&outptr_QGraphicsTransform, &outptr_QObject)
	ret := newQGraphicsTransform(outptr_QGraphicsTransform, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsTransform2 constructs a new QGraphicsTransform object.
func NewQGraphicsTransform2(parent *QObject) *QGraphicsTransform {
	var outptr_QGraphicsTransform *C.QGraphicsTransform = nil
	var outptr_QObject *C.QObject = nil

	C.QGraphicsTransform_new2(parent.cPointer(), &outptr_QGraphicsTransform, &outptr_QObject)
	ret := newQGraphicsTransform(outptr_QGraphicsTransform, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QGraphicsTransform) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsTransform_MetaObject(this.h))
}

func (this *QGraphicsTransform) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsTransform_Metacast(this.h, param1_Cstring))
}

func QGraphicsTransform_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsTransform_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsTransform) ApplyTo(matrix *QMatrix4x4) {
	C.QGraphicsTransform_ApplyTo(this.h, matrix.cPointer())
}

func QGraphicsTransform_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsTransform_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsTransform_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsTransform_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QGraphicsTransform) OnApplyTo(slot func(matrix *QMatrix4x4)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsTransform_override_virtual_ApplyTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTransform_ApplyTo
func miqt_exec_callback_QGraphicsTransform_ApplyTo(self *C.QGraphicsTransform, cb C.intptr_t, matrix *C.QMatrix4x4) {
	gofunc, ok := cgo.Handle(cb).Value().(func(matrix *QMatrix4x4))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMatrix4x4(matrix)

	gofunc(slotval1)

}

func (this *QGraphicsTransform) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsTransform_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsTransform) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsTransform_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTransform_Event
func miqt_exec_callback_QGraphicsTransform_Event(self *C.QGraphicsTransform, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsTransform{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsTransform) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QGraphicsTransform_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsTransform) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsTransform_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTransform_EventFilter
func miqt_exec_callback_QGraphicsTransform_EventFilter(self *C.QGraphicsTransform, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsTransform{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsTransform) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGraphicsTransform_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTransform) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsTransform_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTransform_TimerEvent
func miqt_exec_callback_QGraphicsTransform_TimerEvent(self *C.QGraphicsTransform, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event, nil)

	gofunc((&QGraphicsTransform{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsTransform) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsTransform_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTransform) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsTransform_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTransform_ChildEvent
func miqt_exec_callback_QGraphicsTransform_ChildEvent(self *C.QGraphicsTransform, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event, nil)

	gofunc((&QGraphicsTransform{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsTransform) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsTransform_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTransform) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsTransform_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTransform_CustomEvent
func miqt_exec_callback_QGraphicsTransform_CustomEvent(self *C.QGraphicsTransform, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsTransform{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsTransform) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsTransform_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsTransform) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsTransform_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTransform_ConnectNotify
func miqt_exec_callback_QGraphicsTransform_ConnectNotify(self *C.QGraphicsTransform, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsTransform{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsTransform) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsTransform_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsTransform) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsTransform_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsTransform_DisconnectNotify
func miqt_exec_callback_QGraphicsTransform_DisconnectNotify(self *C.QGraphicsTransform, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsTransform{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QGraphicsTransform) Delete() {
	C.QGraphicsTransform_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsTransform) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsTransform) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsScale struct {
	h          *C.QGraphicsScale
	isSubclass bool
	*QGraphicsTransform
}

func (this *QGraphicsScale) cPointer() *C.QGraphicsScale {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsScale) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsScale constructs the type using only CGO pointers.
func newQGraphicsScale(h *C.QGraphicsScale, h_QGraphicsTransform *C.QGraphicsTransform, h_QObject *C.QObject) *QGraphicsScale {
	if h == nil {
		return nil
	}
	return &QGraphicsScale{h: h,
		QGraphicsTransform: newQGraphicsTransform(h_QGraphicsTransform, h_QObject)}
}

// UnsafeNewQGraphicsScale constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsScale(h unsafe.Pointer, h_QGraphicsTransform unsafe.Pointer, h_QObject unsafe.Pointer) *QGraphicsScale {
	if h == nil {
		return nil
	}

	return &QGraphicsScale{h: (*C.QGraphicsScale)(h),
		QGraphicsTransform: UnsafeNewQGraphicsTransform(h_QGraphicsTransform, h_QObject)}
}

// NewQGraphicsScale constructs a new QGraphicsScale object.
func NewQGraphicsScale() *QGraphicsScale {
	var outptr_QGraphicsScale *C.QGraphicsScale = nil
	var outptr_QGraphicsTransform *C.QGraphicsTransform = nil
	var outptr_QObject *C.QObject = nil

	C.QGraphicsScale_new(&outptr_QGraphicsScale, &outptr_QGraphicsTransform, &outptr_QObject)
	ret := newQGraphicsScale(outptr_QGraphicsScale, outptr_QGraphicsTransform, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsScale2 constructs a new QGraphicsScale object.
func NewQGraphicsScale2(parent *QObject) *QGraphicsScale {
	var outptr_QGraphicsScale *C.QGraphicsScale = nil
	var outptr_QGraphicsTransform *C.QGraphicsTransform = nil
	var outptr_QObject *C.QObject = nil

	C.QGraphicsScale_new2(parent.cPointer(), &outptr_QGraphicsScale, &outptr_QGraphicsTransform, &outptr_QObject)
	ret := newQGraphicsScale(outptr_QGraphicsScale, outptr_QGraphicsTransform, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QGraphicsScale) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsScale_MetaObject(this.h))
}

func (this *QGraphicsScale) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsScale_Metacast(this.h, param1_Cstring))
}

func QGraphicsScale_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsScale_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsScale) Origin() *QVector3D {
	_goptr := newQVector3D(C.QGraphicsScale_Origin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsScale) SetOrigin(point *QVector3D) {
	C.QGraphicsScale_SetOrigin(this.h, point.cPointer())
}

func (this *QGraphicsScale) XScale() float64 {
	return (float64)(C.QGraphicsScale_XScale(this.h))
}

func (this *QGraphicsScale) SetXScale(xScale float64) {
	C.QGraphicsScale_SetXScale(this.h, (C.double)(xScale))
}

func (this *QGraphicsScale) YScale() float64 {
	return (float64)(C.QGraphicsScale_YScale(this.h))
}

func (this *QGraphicsScale) SetYScale(yScale float64) {
	C.QGraphicsScale_SetYScale(this.h, (C.double)(yScale))
}

func (this *QGraphicsScale) ZScale() float64 {
	return (float64)(C.QGraphicsScale_ZScale(this.h))
}

func (this *QGraphicsScale) SetZScale(zScale float64) {
	C.QGraphicsScale_SetZScale(this.h, (C.double)(zScale))
}

func (this *QGraphicsScale) ApplyTo(matrix *QMatrix4x4) {
	C.QGraphicsScale_ApplyTo(this.h, matrix.cPointer())
}

func (this *QGraphicsScale) OriginChanged() {
	C.QGraphicsScale_OriginChanged(this.h)
}
func (this *QGraphicsScale) OnOriginChanged(slot func()) {
	C.QGraphicsScale_connect_OriginChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScale_OriginChanged
func miqt_exec_callback_QGraphicsScale_OriginChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsScale) XScaleChanged() {
	C.QGraphicsScale_XScaleChanged(this.h)
}
func (this *QGraphicsScale) OnXScaleChanged(slot func()) {
	C.QGraphicsScale_connect_XScaleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScale_XScaleChanged
func miqt_exec_callback_QGraphicsScale_XScaleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsScale) YScaleChanged() {
	C.QGraphicsScale_YScaleChanged(this.h)
}
func (this *QGraphicsScale) OnYScaleChanged(slot func()) {
	C.QGraphicsScale_connect_YScaleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScale_YScaleChanged
func miqt_exec_callback_QGraphicsScale_YScaleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsScale) ZScaleChanged() {
	C.QGraphicsScale_ZScaleChanged(this.h)
}
func (this *QGraphicsScale) OnZScaleChanged(slot func()) {
	C.QGraphicsScale_connect_ZScaleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScale_ZScaleChanged
func miqt_exec_callback_QGraphicsScale_ZScaleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsScale) ScaleChanged() {
	C.QGraphicsScale_ScaleChanged(this.h)
}
func (this *QGraphicsScale) OnScaleChanged(slot func()) {
	C.QGraphicsScale_connect_ScaleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScale_ScaleChanged
func miqt_exec_callback_QGraphicsScale_ScaleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QGraphicsScale_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsScale_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsScale_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsScale_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsScale) callVirtualBase_ApplyTo(matrix *QMatrix4x4) {

	C.QGraphicsScale_virtualbase_ApplyTo(unsafe.Pointer(this.h), matrix.cPointer())

}
func (this *QGraphicsScale) OnApplyTo(slot func(super func(matrix *QMatrix4x4), matrix *QMatrix4x4)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsScale_override_virtual_ApplyTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScale_ApplyTo
func miqt_exec_callback_QGraphicsScale_ApplyTo(self *C.QGraphicsScale, cb C.intptr_t, matrix *C.QMatrix4x4) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(matrix *QMatrix4x4), matrix *QMatrix4x4))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMatrix4x4(matrix)

	gofunc((&QGraphicsScale{h: self}).callVirtualBase_ApplyTo, slotval1)

}

// Delete this object from C++ memory.
func (this *QGraphicsScale) Delete() {
	C.QGraphicsScale_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsScale) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsScale) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsRotation struct {
	h          *C.QGraphicsRotation
	isSubclass bool
	*QGraphicsTransform
}

func (this *QGraphicsRotation) cPointer() *C.QGraphicsRotation {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsRotation) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsRotation constructs the type using only CGO pointers.
func newQGraphicsRotation(h *C.QGraphicsRotation, h_QGraphicsTransform *C.QGraphicsTransform, h_QObject *C.QObject) *QGraphicsRotation {
	if h == nil {
		return nil
	}
	return &QGraphicsRotation{h: h,
		QGraphicsTransform: newQGraphicsTransform(h_QGraphicsTransform, h_QObject)}
}

// UnsafeNewQGraphicsRotation constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsRotation(h unsafe.Pointer, h_QGraphicsTransform unsafe.Pointer, h_QObject unsafe.Pointer) *QGraphicsRotation {
	if h == nil {
		return nil
	}

	return &QGraphicsRotation{h: (*C.QGraphicsRotation)(h),
		QGraphicsTransform: UnsafeNewQGraphicsTransform(h_QGraphicsTransform, h_QObject)}
}

// NewQGraphicsRotation constructs a new QGraphicsRotation object.
func NewQGraphicsRotation() *QGraphicsRotation {
	var outptr_QGraphicsRotation *C.QGraphicsRotation = nil
	var outptr_QGraphicsTransform *C.QGraphicsTransform = nil
	var outptr_QObject *C.QObject = nil

	C.QGraphicsRotation_new(&outptr_QGraphicsRotation, &outptr_QGraphicsTransform, &outptr_QObject)
	ret := newQGraphicsRotation(outptr_QGraphicsRotation, outptr_QGraphicsTransform, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsRotation2 constructs a new QGraphicsRotation object.
func NewQGraphicsRotation2(parent *QObject) *QGraphicsRotation {
	var outptr_QGraphicsRotation *C.QGraphicsRotation = nil
	var outptr_QGraphicsTransform *C.QGraphicsTransform = nil
	var outptr_QObject *C.QObject = nil

	C.QGraphicsRotation_new2(parent.cPointer(), &outptr_QGraphicsRotation, &outptr_QGraphicsTransform, &outptr_QObject)
	ret := newQGraphicsRotation(outptr_QGraphicsRotation, outptr_QGraphicsTransform, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QGraphicsRotation) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsRotation_MetaObject(this.h))
}

func (this *QGraphicsRotation) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsRotation_Metacast(this.h, param1_Cstring))
}

func QGraphicsRotation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsRotation_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsRotation) Origin() *QVector3D {
	_goptr := newQVector3D(C.QGraphicsRotation_Origin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsRotation) SetOrigin(point *QVector3D) {
	C.QGraphicsRotation_SetOrigin(this.h, point.cPointer())
}

func (this *QGraphicsRotation) Angle() float64 {
	return (float64)(C.QGraphicsRotation_Angle(this.h))
}

func (this *QGraphicsRotation) SetAngle(angle float64) {
	C.QGraphicsRotation_SetAngle(this.h, (C.double)(angle))
}

func (this *QGraphicsRotation) Axis() *QVector3D {
	_goptr := newQVector3D(C.QGraphicsRotation_Axis(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsRotation) SetAxis(axis *QVector3D) {
	C.QGraphicsRotation_SetAxis(this.h, axis.cPointer())
}

func (this *QGraphicsRotation) SetAxisWithAxis(axis Axis) {
	C.QGraphicsRotation_SetAxisWithAxis(this.h, (C.int)(axis))
}

func (this *QGraphicsRotation) ApplyTo(matrix *QMatrix4x4) {
	C.QGraphicsRotation_ApplyTo(this.h, matrix.cPointer())
}

func (this *QGraphicsRotation) OriginChanged() {
	C.QGraphicsRotation_OriginChanged(this.h)
}
func (this *QGraphicsRotation) OnOriginChanged(slot func()) {
	C.QGraphicsRotation_connect_OriginChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsRotation_OriginChanged
func miqt_exec_callback_QGraphicsRotation_OriginChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsRotation) AngleChanged() {
	C.QGraphicsRotation_AngleChanged(this.h)
}
func (this *QGraphicsRotation) OnAngleChanged(slot func()) {
	C.QGraphicsRotation_connect_AngleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsRotation_AngleChanged
func miqt_exec_callback_QGraphicsRotation_AngleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsRotation) AxisChanged() {
	C.QGraphicsRotation_AxisChanged(this.h)
}
func (this *QGraphicsRotation) OnAxisChanged(slot func()) {
	C.QGraphicsRotation_connect_AxisChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsRotation_AxisChanged
func miqt_exec_callback_QGraphicsRotation_AxisChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QGraphicsRotation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsRotation_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsRotation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsRotation_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsRotation) callVirtualBase_ApplyTo(matrix *QMatrix4x4) {

	C.QGraphicsRotation_virtualbase_ApplyTo(unsafe.Pointer(this.h), matrix.cPointer())

}
func (this *QGraphicsRotation) OnApplyTo(slot func(super func(matrix *QMatrix4x4), matrix *QMatrix4x4)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsRotation_override_virtual_ApplyTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsRotation_ApplyTo
func miqt_exec_callback_QGraphicsRotation_ApplyTo(self *C.QGraphicsRotation, cb C.intptr_t, matrix *C.QMatrix4x4) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(matrix *QMatrix4x4), matrix *QMatrix4x4))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMatrix4x4(matrix)

	gofunc((&QGraphicsRotation{h: self}).callVirtualBase_ApplyTo, slotval1)

}

// Delete this object from C++ memory.
func (this *QGraphicsRotation) Delete() {
	C.QGraphicsRotation_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsRotation) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsRotation) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
