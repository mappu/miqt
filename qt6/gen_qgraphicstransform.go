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
	h  *C.QGraphicsTransform
	gc *[1]unsafe.Pointer
	*QObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGraphicsTransform) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QObject.miqtSetGC(gc)
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
func newQGraphicsTransform(h *C.QGraphicsTransform) *QGraphicsTransform {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QGraphicsTransform_virtbase(h, &outptr_QObject)

	return &QGraphicsTransform{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQGraphicsTransform constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsTransform(h unsafe.Pointer) *QGraphicsTransform {
	return newQGraphicsTransform((*C.QGraphicsTransform)(h))
}

// NewQGraphicsTransform constructs a new QGraphicsTransform object.
func NewQGraphicsTransform() *QGraphicsTransform {

	return newQGraphicsTransform(C.QGraphicsTransform_new())
}

// NewQGraphicsTransform2 constructs a new QGraphicsTransform object.
func NewQGraphicsTransform2(parent *QObject) *QGraphicsTransform {
	defer runtime.KeepAlive(parent)

	return newQGraphicsTransform(C.QGraphicsTransform_new2(parent.cPointer()))
}

func (this *QGraphicsTransform) MetaObject() *QMetaObject {
	defer runtime.KeepAlive(this)
	return newQMetaObject(C.QGraphicsTransform_metaObject(this.h))
}

func (this *QGraphicsTransform) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsTransform_metacast(this.h, param1_Cstring))
}

func QGraphicsTransform_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsTransform_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsTransform) ApplyTo(matrix *QMatrix4x4) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(matrix)
	C.QGraphicsTransform_applyTo(this.h, matrix.cPointer())
}

func QGraphicsTransform_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsTransform_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsTransform_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsTransform_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Update can only be called from a QGraphicsTransform that was directly constructed.
func (this *QGraphicsTransform) Update() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsTransform_protectedbase_update(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QGraphicsTransform that was directly constructed.
func (this *QGraphicsTransform) Sender() *QObject {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QGraphicsTransform_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGraphicsTransform that was directly constructed.
func (this *QGraphicsTransform) SenderSignalIndex() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsTransform_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGraphicsTransform that was directly constructed.
func (this *QGraphicsTransform) Receivers(signal string) int {
	defer runtime.KeepAlive(this)
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsTransform_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGraphicsTransform that was directly constructed.
func (this *QGraphicsTransform) IsSignalConnected(signal *QMetaMethod) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsTransform_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QGraphicsTransform) OnApplyTo(slot func(matrix *QMatrix4x4)) {
	ok := C.QGraphicsTransform_override_virtual_applyTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTransform_applyTo
func miqt_exec_callback_QGraphicsTransform_applyTo(self *C.QGraphicsTransform, cb C.intptr_t, matrix *C.QMatrix4x4) {
	gofunc, ok := cgo.Handle(cb).Value().(func(matrix *QMatrix4x4))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMatrix4x4(matrix)

	gofunc(slotval1)

}

func (this *QGraphicsTransform) callVirtualBase_Event(event *QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	return (bool)(C.QGraphicsTransform_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsTransform) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsTransform_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTransform_event
func miqt_exec_callback_QGraphicsTransform_event(self *C.QGraphicsTransform, cb C.intptr_t, event *C.QEvent) C.bool {
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
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(watched)
	defer runtime.KeepAlive(event)

	return (bool)(C.QGraphicsTransform_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsTransform) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGraphicsTransform_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTransform_eventFilter
func miqt_exec_callback_QGraphicsTransform_eventFilter(self *C.QGraphicsTransform, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QGraphicsTransform_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTransform) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsTransform_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTransform_timerEvent
func miqt_exec_callback_QGraphicsTransform_timerEvent(self *C.QGraphicsTransform, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsTransform{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsTransform) callVirtualBase_ChildEvent(event *QChildEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QGraphicsTransform_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTransform) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsTransform_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTransform_childEvent
func miqt_exec_callback_QGraphicsTransform_childEvent(self *C.QGraphicsTransform, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsTransform{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsTransform) callVirtualBase_CustomEvent(event *QEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QGraphicsTransform_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsTransform) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsTransform_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTransform_customEvent
func miqt_exec_callback_QGraphicsTransform_customEvent(self *C.QGraphicsTransform, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsTransform{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsTransform) callVirtualBase_ConnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QGraphicsTransform_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsTransform) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsTransform_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTransform_connectNotify
func miqt_exec_callback_QGraphicsTransform_connectNotify(self *C.QGraphicsTransform, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsTransform{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsTransform) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QGraphicsTransform_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsTransform) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsTransform_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsTransform_disconnectNotify
func miqt_exec_callback_QGraphicsTransform_disconnectNotify(self *C.QGraphicsTransform, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QGraphicsTransform_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGraphicsTransform) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGraphicsTransform_delete((*C.QGraphicsTransform)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QGraphicsScale struct {
	h  *C.QGraphicsScale
	gc *[1]unsafe.Pointer
	*QGraphicsTransform
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGraphicsScale) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGraphicsTransform.miqtSetGC(gc)
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
func newQGraphicsScale(h *C.QGraphicsScale) *QGraphicsScale {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsTransform *C.QGraphicsTransform = nil
	C.QGraphicsScale_virtbase(h, &outptr_QGraphicsTransform)

	return &QGraphicsScale{h: h,
		QGraphicsTransform: newQGraphicsTransform(outptr_QGraphicsTransform)}
}

// UnsafeNewQGraphicsScale constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsScale(h unsafe.Pointer) *QGraphicsScale {
	return newQGraphicsScale((*C.QGraphicsScale)(h))
}

// NewQGraphicsScale constructs a new QGraphicsScale object.
func NewQGraphicsScale() *QGraphicsScale {

	return newQGraphicsScale(C.QGraphicsScale_new())
}

// NewQGraphicsScale2 constructs a new QGraphicsScale object.
func NewQGraphicsScale2(parent *QObject) *QGraphicsScale {
	defer runtime.KeepAlive(parent)

	return newQGraphicsScale(C.QGraphicsScale_new2(parent.cPointer()))
}

func (this *QGraphicsScale) MetaObject() *QMetaObject {
	defer runtime.KeepAlive(this)
	return newQMetaObject(C.QGraphicsScale_metaObject(this.h))
}

func (this *QGraphicsScale) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsScale_metacast(this.h, param1_Cstring))
}

func QGraphicsScale_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsScale_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsScale) Origin() *QVector3D {
	defer runtime.KeepAlive(this)
	_goptr := newQVector3D(C.QGraphicsScale_origin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsScale) SetOrigin(point *QVector3D) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(point)
	C.QGraphicsScale_setOrigin(this.h, point.cPointer())
}

func (this *QGraphicsScale) XScale() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGraphicsScale_xScale(this.h))
}

func (this *QGraphicsScale) SetXScale(xScale float64) {
	defer runtime.KeepAlive(this)
	C.QGraphicsScale_setXScale(this.h, (C.double)(xScale))
}

func (this *QGraphicsScale) YScale() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGraphicsScale_yScale(this.h))
}

func (this *QGraphicsScale) SetYScale(yScale float64) {
	defer runtime.KeepAlive(this)
	C.QGraphicsScale_setYScale(this.h, (C.double)(yScale))
}

func (this *QGraphicsScale) ZScale() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGraphicsScale_zScale(this.h))
}

func (this *QGraphicsScale) SetZScale(zScale float64) {
	defer runtime.KeepAlive(this)
	C.QGraphicsScale_setZScale(this.h, (C.double)(zScale))
}

func (this *QGraphicsScale) ApplyTo(matrix *QMatrix4x4) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(matrix)
	C.QGraphicsScale_applyTo(this.h, matrix.cPointer())
}

func (this *QGraphicsScale) OriginChanged() {
	defer runtime.KeepAlive(this)
	C.QGraphicsScale_originChanged(this.h)
}
func (this *QGraphicsScale) OnOriginChanged(slot func()) {
	C.QGraphicsScale_connect_originChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScale_originChanged
func miqt_exec_callback_QGraphicsScale_originChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsScale) XScaleChanged() {
	defer runtime.KeepAlive(this)
	C.QGraphicsScale_xScaleChanged(this.h)
}
func (this *QGraphicsScale) OnXScaleChanged(slot func()) {
	C.QGraphicsScale_connect_xScaleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScale_xScaleChanged
func miqt_exec_callback_QGraphicsScale_xScaleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsScale) YScaleChanged() {
	defer runtime.KeepAlive(this)
	C.QGraphicsScale_yScaleChanged(this.h)
}
func (this *QGraphicsScale) OnYScaleChanged(slot func()) {
	C.QGraphicsScale_connect_yScaleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScale_yScaleChanged
func miqt_exec_callback_QGraphicsScale_yScaleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsScale) ZScaleChanged() {
	defer runtime.KeepAlive(this)
	C.QGraphicsScale_zScaleChanged(this.h)
}
func (this *QGraphicsScale) OnZScaleChanged(slot func()) {
	C.QGraphicsScale_connect_zScaleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScale_zScaleChanged
func miqt_exec_callback_QGraphicsScale_zScaleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsScale) ScaleChanged() {
	defer runtime.KeepAlive(this)
	C.QGraphicsScale_scaleChanged(this.h)
}
func (this *QGraphicsScale) OnScaleChanged(slot func()) {
	C.QGraphicsScale_connect_scaleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsScale_scaleChanged
func miqt_exec_callback_QGraphicsScale_scaleChanged(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QGraphicsScale_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsScale_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsScale_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Update can only be called from a QGraphicsScale that was directly constructed.
func (this *QGraphicsScale) Update() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsScale_protectedbase_update(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QGraphicsScale that was directly constructed.
func (this *QGraphicsScale) Sender() *QObject {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QGraphicsScale_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGraphicsScale that was directly constructed.
func (this *QGraphicsScale) SenderSignalIndex() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsScale_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGraphicsScale that was directly constructed.
func (this *QGraphicsScale) Receivers(signal string) int {
	defer runtime.KeepAlive(this)
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsScale_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGraphicsScale that was directly constructed.
func (this *QGraphicsScale) IsSignalConnected(signal *QMetaMethod) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsScale_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QGraphicsScale) callVirtualBase_ApplyTo(matrix *QMatrix4x4) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(matrix)

	C.QGraphicsScale_virtualbase_applyTo(unsafe.Pointer(this.h), matrix.cPointer())

}
func (this *QGraphicsScale) OnApplyTo(slot func(super func(matrix *QMatrix4x4), matrix *QMatrix4x4)) {
	ok := C.QGraphicsScale_override_virtual_applyTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScale_applyTo
func miqt_exec_callback_QGraphicsScale_applyTo(self *C.QGraphicsScale, cb C.intptr_t, matrix *C.QMatrix4x4) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(matrix *QMatrix4x4), matrix *QMatrix4x4))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMatrix4x4(matrix)

	gofunc((&QGraphicsScale{h: self}).callVirtualBase_ApplyTo, slotval1)

}

func (this *QGraphicsScale) callVirtualBase_Event(event *QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	return (bool)(C.QGraphicsScale_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsScale) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsScale_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScale_event
func miqt_exec_callback_QGraphicsScale_event(self *C.QGraphicsScale, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsScale{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsScale) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(watched)
	defer runtime.KeepAlive(event)

	return (bool)(C.QGraphicsScale_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsScale) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGraphicsScale_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScale_eventFilter
func miqt_exec_callback_QGraphicsScale_eventFilter(self *C.QGraphicsScale, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsScale{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsScale) callVirtualBase_TimerEvent(event *QTimerEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QGraphicsScale_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScale) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsScale_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScale_timerEvent
func miqt_exec_callback_QGraphicsScale_timerEvent(self *C.QGraphicsScale, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsScale{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsScale) callVirtualBase_ChildEvent(event *QChildEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QGraphicsScale_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScale) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsScale_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScale_childEvent
func miqt_exec_callback_QGraphicsScale_childEvent(self *C.QGraphicsScale, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsScale{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsScale) callVirtualBase_CustomEvent(event *QEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QGraphicsScale_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsScale) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsScale_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScale_customEvent
func miqt_exec_callback_QGraphicsScale_customEvent(self *C.QGraphicsScale, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsScale{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsScale) callVirtualBase_ConnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QGraphicsScale_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsScale) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsScale_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScale_connectNotify
func miqt_exec_callback_QGraphicsScale_connectNotify(self *C.QGraphicsScale, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsScale{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsScale) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QGraphicsScale_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsScale) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsScale_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsScale_disconnectNotify
func miqt_exec_callback_QGraphicsScale_disconnectNotify(self *C.QGraphicsScale, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsScale{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QGraphicsScale) Delete() {
	C.QGraphicsScale_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGraphicsScale) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGraphicsScale_delete((*C.QGraphicsScale)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QGraphicsRotation struct {
	h  *C.QGraphicsRotation
	gc *[1]unsafe.Pointer
	*QGraphicsTransform
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGraphicsRotation) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGraphicsTransform.miqtSetGC(gc)
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
func newQGraphicsRotation(h *C.QGraphicsRotation) *QGraphicsRotation {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsTransform *C.QGraphicsTransform = nil
	C.QGraphicsRotation_virtbase(h, &outptr_QGraphicsTransform)

	return &QGraphicsRotation{h: h,
		QGraphicsTransform: newQGraphicsTransform(outptr_QGraphicsTransform)}
}

// UnsafeNewQGraphicsRotation constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsRotation(h unsafe.Pointer) *QGraphicsRotation {
	return newQGraphicsRotation((*C.QGraphicsRotation)(h))
}

// NewQGraphicsRotation constructs a new QGraphicsRotation object.
func NewQGraphicsRotation() *QGraphicsRotation {

	return newQGraphicsRotation(C.QGraphicsRotation_new())
}

// NewQGraphicsRotation2 constructs a new QGraphicsRotation object.
func NewQGraphicsRotation2(parent *QObject) *QGraphicsRotation {
	defer runtime.KeepAlive(parent)

	return newQGraphicsRotation(C.QGraphicsRotation_new2(parent.cPointer()))
}

func (this *QGraphicsRotation) MetaObject() *QMetaObject {
	defer runtime.KeepAlive(this)
	return newQMetaObject(C.QGraphicsRotation_metaObject(this.h))
}

func (this *QGraphicsRotation) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsRotation_metacast(this.h, param1_Cstring))
}

func QGraphicsRotation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsRotation_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsRotation) Origin() *QVector3D {
	defer runtime.KeepAlive(this)
	_goptr := newQVector3D(C.QGraphicsRotation_origin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsRotation) SetOrigin(point *QVector3D) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(point)
	C.QGraphicsRotation_setOrigin(this.h, point.cPointer())
}

func (this *QGraphicsRotation) Angle() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QGraphicsRotation_angle(this.h))
}

func (this *QGraphicsRotation) SetAngle(angle float64) {
	defer runtime.KeepAlive(this)
	C.QGraphicsRotation_setAngle(this.h, (C.double)(angle))
}

func (this *QGraphicsRotation) Axis() *QVector3D {
	defer runtime.KeepAlive(this)
	_goptr := newQVector3D(C.QGraphicsRotation_axis(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsRotation) SetAxis(axis *QVector3D) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(axis)
	C.QGraphicsRotation_setAxis(this.h, axis.cPointer())
}

func (this *QGraphicsRotation) SetAxisWithAxis(axis Axis) {
	defer runtime.KeepAlive(this)
	C.QGraphicsRotation_setAxisWithAxis(this.h, (C.int)(axis))
}

func (this *QGraphicsRotation) ApplyTo(matrix *QMatrix4x4) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(matrix)
	C.QGraphicsRotation_applyTo(this.h, matrix.cPointer())
}

func (this *QGraphicsRotation) OriginChanged() {
	defer runtime.KeepAlive(this)
	C.QGraphicsRotation_originChanged(this.h)
}
func (this *QGraphicsRotation) OnOriginChanged(slot func()) {
	C.QGraphicsRotation_connect_originChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsRotation_originChanged
func miqt_exec_callback_QGraphicsRotation_originChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsRotation) AngleChanged() {
	defer runtime.KeepAlive(this)
	C.QGraphicsRotation_angleChanged(this.h)
}
func (this *QGraphicsRotation) OnAngleChanged(slot func()) {
	C.QGraphicsRotation_connect_angleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsRotation_angleChanged
func miqt_exec_callback_QGraphicsRotation_angleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGraphicsRotation) AxisChanged() {
	defer runtime.KeepAlive(this)
	C.QGraphicsRotation_axisChanged(this.h)
}
func (this *QGraphicsRotation) OnAxisChanged(slot func()) {
	C.QGraphicsRotation_connect_axisChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsRotation_axisChanged
func miqt_exec_callback_QGraphicsRotation_axisChanged(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QGraphicsRotation_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsRotation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsRotation_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Update can only be called from a QGraphicsRotation that was directly constructed.
func (this *QGraphicsRotation) Update() {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsRotation_protectedbase_update(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QGraphicsRotation that was directly constructed.
func (this *QGraphicsRotation) Sender() *QObject {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QGraphicsRotation_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGraphicsRotation that was directly constructed.
func (this *QGraphicsRotation) SenderSignalIndex() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsRotation_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGraphicsRotation that was directly constructed.
func (this *QGraphicsRotation) Receivers(signal string) int {
	defer runtime.KeepAlive(this)
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsRotation_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGraphicsRotation that was directly constructed.
func (this *QGraphicsRotation) IsSignalConnected(signal *QMetaMethod) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsRotation_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QGraphicsRotation) callVirtualBase_ApplyTo(matrix *QMatrix4x4) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(matrix)

	C.QGraphicsRotation_virtualbase_applyTo(unsafe.Pointer(this.h), matrix.cPointer())

}
func (this *QGraphicsRotation) OnApplyTo(slot func(super func(matrix *QMatrix4x4), matrix *QMatrix4x4)) {
	ok := C.QGraphicsRotation_override_virtual_applyTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRotation_applyTo
func miqt_exec_callback_QGraphicsRotation_applyTo(self *C.QGraphicsRotation, cb C.intptr_t, matrix *C.QMatrix4x4) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(matrix *QMatrix4x4), matrix *QMatrix4x4))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMatrix4x4(matrix)

	gofunc((&QGraphicsRotation{h: self}).callVirtualBase_ApplyTo, slotval1)

}

func (this *QGraphicsRotation) callVirtualBase_Event(event *QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	return (bool)(C.QGraphicsRotation_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsRotation) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsRotation_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRotation_event
func miqt_exec_callback_QGraphicsRotation_event(self *C.QGraphicsRotation, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsRotation{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsRotation) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(watched)
	defer runtime.KeepAlive(event)

	return (bool)(C.QGraphicsRotation_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsRotation) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGraphicsRotation_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRotation_eventFilter
func miqt_exec_callback_QGraphicsRotation_eventFilter(self *C.QGraphicsRotation, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsRotation{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsRotation) callVirtualBase_TimerEvent(event *QTimerEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QGraphicsRotation_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRotation) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsRotation_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRotation_timerEvent
func miqt_exec_callback_QGraphicsRotation_timerEvent(self *C.QGraphicsRotation, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsRotation{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsRotation) callVirtualBase_ChildEvent(event *QChildEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QGraphicsRotation_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRotation) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsRotation_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRotation_childEvent
func miqt_exec_callback_QGraphicsRotation_childEvent(self *C.QGraphicsRotation, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsRotation{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsRotation) callVirtualBase_CustomEvent(event *QEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QGraphicsRotation_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsRotation) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsRotation_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRotation_customEvent
func miqt_exec_callback_QGraphicsRotation_customEvent(self *C.QGraphicsRotation, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsRotation{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsRotation) callVirtualBase_ConnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QGraphicsRotation_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsRotation) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsRotation_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRotation_connectNotify
func miqt_exec_callback_QGraphicsRotation_connectNotify(self *C.QGraphicsRotation, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsRotation{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsRotation) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QGraphicsRotation_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsRotation) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsRotation_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsRotation_disconnectNotify
func miqt_exec_callback_QGraphicsRotation_disconnectNotify(self *C.QGraphicsRotation, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsRotation{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QGraphicsRotation) Delete() {
	C.QGraphicsRotation_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGraphicsRotation) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGraphicsRotation_delete((*C.QGraphicsRotation)(gc[0]))
	})
	this.miqtSetGC(gc)
}
