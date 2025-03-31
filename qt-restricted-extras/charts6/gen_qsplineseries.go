package charts6

/*

#include "gen_qsplineseries.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSplineSeries struct {
	h *C.QSplineSeries
	*QLineSeries
}

func (this *QSplineSeries) cPointer() *C.QSplineSeries {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSplineSeries) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSplineSeries constructs the type using only CGO pointers.
func newQSplineSeries(h *C.QSplineSeries) *QSplineSeries {
	if h == nil {
		return nil
	}
	var outptr_QLineSeries *C.QLineSeries = nil
	C.QSplineSeries_virtbase(h, &outptr_QLineSeries)

	return &QSplineSeries{h: h,
		QLineSeries: newQLineSeries(outptr_QLineSeries)}
}

// UnsafeNewQSplineSeries constructs the type using only unsafe pointers.
func UnsafeNewQSplineSeries(h unsafe.Pointer) *QSplineSeries {
	return newQSplineSeries((*C.QSplineSeries)(h))
}

// NewQSplineSeries constructs a new QSplineSeries object.
func NewQSplineSeries() *QSplineSeries {

	return newQSplineSeries(C.QSplineSeries_new())
}

// NewQSplineSeries2 constructs a new QSplineSeries object.
func NewQSplineSeries2(parent *qt6.QObject) *QSplineSeries {

	return newQSplineSeries(C.QSplineSeries_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QSplineSeries) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QSplineSeries_metaObject(this.h)))
}

func (this *QSplineSeries) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSplineSeries_metacast(this.h, param1_Cstring))
}

func QSplineSeries_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSplineSeries_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSplineSeries) Type() QAbstractSeries__SeriesType {
	return (QAbstractSeries__SeriesType)(C.QSplineSeries_type(this.h))
}

func QSplineSeries_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplineSeries_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplineSeries_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplineSeries_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QSplineSeries that was directly constructed.
func (this *QSplineSeries) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QSplineSeries_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QSplineSeries that was directly constructed.
func (this *QSplineSeries) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSplineSeries_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QSplineSeries that was directly constructed.
func (this *QSplineSeries) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSplineSeries_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QSplineSeries that was directly constructed.
func (this *QSplineSeries) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSplineSeries_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QSplineSeries) callVirtualBase_Type() QAbstractSeries__SeriesType {

	return (QAbstractSeries__SeriesType)(C.QSplineSeries_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QSplineSeries) OnType(slot func(super func() QAbstractSeries__SeriesType) QAbstractSeries__SeriesType) {
	ok := C.QSplineSeries_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplineSeries_type
func miqt_exec_callback_QSplineSeries_type(self *C.QSplineSeries, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractSeries__SeriesType) QAbstractSeries__SeriesType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplineSeries{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QSplineSeries) callVirtualBase_SetPen(pen *qt6.QPen) {

	C.QSplineSeries_virtualbase_setPen(unsafe.Pointer(this.h), (*C.QPen)(pen.UnsafePointer()))

}
func (this *QSplineSeries) OnSetPen(slot func(super func(pen *qt6.QPen), pen *qt6.QPen)) {
	ok := C.QSplineSeries_override_virtual_setPen(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplineSeries_setPen
func miqt_exec_callback_QSplineSeries_setPen(self *C.QSplineSeries, cb C.intptr_t, pen *C.QPen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pen *qt6.QPen), pen *qt6.QPen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPen(unsafe.Pointer(pen))

	gofunc((&QSplineSeries{h: self}).callVirtualBase_SetPen, slotval1)

}

func (this *QSplineSeries) callVirtualBase_SetBrush(brush *qt6.QBrush) {

	C.QSplineSeries_virtualbase_setBrush(unsafe.Pointer(this.h), (*C.QBrush)(brush.UnsafePointer()))

}
func (this *QSplineSeries) OnSetBrush(slot func(super func(brush *qt6.QBrush), brush *qt6.QBrush)) {
	ok := C.QSplineSeries_override_virtual_setBrush(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplineSeries_setBrush
func miqt_exec_callback_QSplineSeries_setBrush(self *C.QSplineSeries, cb C.intptr_t, brush *C.QBrush) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(brush *qt6.QBrush), brush *qt6.QBrush))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQBrush(unsafe.Pointer(brush))

	gofunc((&QSplineSeries{h: self}).callVirtualBase_SetBrush, slotval1)

}

func (this *QSplineSeries) callVirtualBase_SetColor(color *qt6.QColor) {

	C.QSplineSeries_virtualbase_setColor(unsafe.Pointer(this.h), (*C.QColor)(color.UnsafePointer()))

}
func (this *QSplineSeries) OnSetColor(slot func(super func(color *qt6.QColor), color *qt6.QColor)) {
	ok := C.QSplineSeries_override_virtual_setColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplineSeries_setColor
func miqt_exec_callback_QSplineSeries_setColor(self *C.QSplineSeries, cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(color *qt6.QColor), color *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(color))

	gofunc((&QSplineSeries{h: self}).callVirtualBase_SetColor, slotval1)

}

func (this *QSplineSeries) callVirtualBase_Color() *qt6.QColor {

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QSplineSeries_virtualbase_color(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplineSeries) OnColor(slot func(super func() *qt6.QColor) *qt6.QColor) {
	ok := C.QSplineSeries_override_virtual_color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplineSeries_color
func miqt_exec_callback_QSplineSeries_color(self *C.QSplineSeries, cb C.intptr_t) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QColor) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplineSeries{h: self}).callVirtualBase_Color)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QSplineSeries) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QSplineSeries_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSplineSeries) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QSplineSeries_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplineSeries_event
func miqt_exec_callback_QSplineSeries_event(self *C.QSplineSeries, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSplineSeries{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSplineSeries) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QSplineSeries_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSplineSeries) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QSplineSeries_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplineSeries_eventFilter
func miqt_exec_callback_QSplineSeries_eventFilter(self *C.QSplineSeries, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSplineSeries{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSplineSeries) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QSplineSeries_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSplineSeries) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QSplineSeries_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplineSeries_timerEvent
func miqt_exec_callback_QSplineSeries_timerEvent(self *C.QSplineSeries, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QSplineSeries{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSplineSeries) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QSplineSeries_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSplineSeries) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QSplineSeries_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplineSeries_childEvent
func miqt_exec_callback_QSplineSeries_childEvent(self *C.QSplineSeries, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QSplineSeries{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSplineSeries) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QSplineSeries_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSplineSeries) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QSplineSeries_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplineSeries_customEvent
func miqt_exec_callback_QSplineSeries_customEvent(self *C.QSplineSeries, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSplineSeries{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSplineSeries) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QSplineSeries_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSplineSeries) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QSplineSeries_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplineSeries_connectNotify
func miqt_exec_callback_QSplineSeries_connectNotify(self *C.QSplineSeries, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSplineSeries{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSplineSeries) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QSplineSeries_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSplineSeries) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QSplineSeries_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplineSeries_disconnectNotify
func miqt_exec_callback_QSplineSeries_disconnectNotify(self *C.QSplineSeries, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSplineSeries{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSplineSeries) Delete() {
	C.QSplineSeries_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSplineSeries) GoGC() {
	runtime.SetFinalizer(this, func(this *QSplineSeries) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
