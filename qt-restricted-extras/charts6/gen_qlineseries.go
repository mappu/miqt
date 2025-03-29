package charts6

/*

#include "gen_qlineseries.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QLineSeries struct {
	h *C.QLineSeries
	*QXYSeries
}

func (this *QLineSeries) cPointer() *C.QLineSeries {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLineSeries) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLineSeries constructs the type using only CGO pointers.
func newQLineSeries(h *C.QLineSeries) *QLineSeries {
	if h == nil {
		return nil
	}
	var outptr_QXYSeries *C.QXYSeries = nil
	C.QLineSeries_virtbase(h, &outptr_QXYSeries)

	return &QLineSeries{h: h,
		QXYSeries: newQXYSeries(outptr_QXYSeries)}
}

// UnsafeNewQLineSeries constructs the type using only unsafe pointers.
func UnsafeNewQLineSeries(h unsafe.Pointer) *QLineSeries {
	return newQLineSeries((*C.QLineSeries)(h))
}

// NewQLineSeries constructs a new QLineSeries object.
func NewQLineSeries() *QLineSeries {

	return newQLineSeries(C.QLineSeries_new())
}

// NewQLineSeries2 constructs a new QLineSeries object.
func NewQLineSeries2(parent *qt6.QObject) *QLineSeries {

	return newQLineSeries(C.QLineSeries_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QLineSeries) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QLineSeries_metaObject(this.h)))
}

func (this *QLineSeries) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QLineSeries_metacast(this.h, param1_Cstring))
}

func QLineSeries_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLineSeries_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLineSeries) Type() QAbstractSeries__SeriesType {
	return (QAbstractSeries__SeriesType)(C.QLineSeries_type(this.h))
}

func QLineSeries_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLineSeries_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLineSeries_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLineSeries_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QLineSeries that was directly constructed.
func (this *QLineSeries) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QLineSeries_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QLineSeries that was directly constructed.
func (this *QLineSeries) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QLineSeries_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QLineSeries that was directly constructed.
func (this *QLineSeries) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QLineSeries_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QLineSeries that was directly constructed.
func (this *QLineSeries) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QLineSeries_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QLineSeries) callVirtualBase_Type() QAbstractSeries__SeriesType {

	return (QAbstractSeries__SeriesType)(C.QLineSeries_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QLineSeries) OnType(slot func(super func() QAbstractSeries__SeriesType) QAbstractSeries__SeriesType) {
	ok := C.QLineSeries_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineSeries_type
func miqt_exec_callback_QLineSeries_type(self *C.QLineSeries, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractSeries__SeriesType) QAbstractSeries__SeriesType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLineSeries{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QLineSeries) callVirtualBase_SetPen(pen *qt6.QPen) {

	C.QLineSeries_virtualbase_setPen(unsafe.Pointer(this.h), (*C.QPen)(pen.UnsafePointer()))

}
func (this *QLineSeries) OnSetPen(slot func(super func(pen *qt6.QPen), pen *qt6.QPen)) {
	ok := C.QLineSeries_override_virtual_setPen(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineSeries_setPen
func miqt_exec_callback_QLineSeries_setPen(self *C.QLineSeries, cb C.intptr_t, pen *C.QPen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pen *qt6.QPen), pen *qt6.QPen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPen(unsafe.Pointer(pen))

	gofunc((&QLineSeries{h: self}).callVirtualBase_SetPen, slotval1)

}

func (this *QLineSeries) callVirtualBase_SetBrush(brush *qt6.QBrush) {

	C.QLineSeries_virtualbase_setBrush(unsafe.Pointer(this.h), (*C.QBrush)(brush.UnsafePointer()))

}
func (this *QLineSeries) OnSetBrush(slot func(super func(brush *qt6.QBrush), brush *qt6.QBrush)) {
	ok := C.QLineSeries_override_virtual_setBrush(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineSeries_setBrush
func miqt_exec_callback_QLineSeries_setBrush(self *C.QLineSeries, cb C.intptr_t, brush *C.QBrush) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(brush *qt6.QBrush), brush *qt6.QBrush))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQBrush(unsafe.Pointer(brush))

	gofunc((&QLineSeries{h: self}).callVirtualBase_SetBrush, slotval1)

}

func (this *QLineSeries) callVirtualBase_SetColor(color *qt6.QColor) {

	C.QLineSeries_virtualbase_setColor(unsafe.Pointer(this.h), (*C.QColor)(color.UnsafePointer()))

}
func (this *QLineSeries) OnSetColor(slot func(super func(color *qt6.QColor), color *qt6.QColor)) {
	ok := C.QLineSeries_override_virtual_setColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineSeries_setColor
func miqt_exec_callback_QLineSeries_setColor(self *C.QLineSeries, cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(color *qt6.QColor), color *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(color))

	gofunc((&QLineSeries{h: self}).callVirtualBase_SetColor, slotval1)

}

func (this *QLineSeries) callVirtualBase_Color() *qt6.QColor {

	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QLineSeries_virtualbase_color(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLineSeries) OnColor(slot func(super func() *qt6.QColor) *qt6.QColor) {
	ok := C.QLineSeries_override_virtual_color(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineSeries_color
func miqt_exec_callback_QLineSeries_color(self *C.QLineSeries, cb C.intptr_t) *C.QColor {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QColor) *qt6.QColor)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLineSeries{h: self}).callVirtualBase_Color)

	return (*C.QColor)(virtualReturn.UnsafePointer())

}

func (this *QLineSeries) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QLineSeries_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QLineSeries) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QLineSeries_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineSeries_event
func miqt_exec_callback_QLineSeries_event(self *C.QLineSeries, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QLineSeries{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLineSeries) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QLineSeries_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QLineSeries) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QLineSeries_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineSeries_eventFilter
func miqt_exec_callback_QLineSeries_eventFilter(self *C.QLineSeries, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QLineSeries{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QLineSeries) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QLineSeries_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QLineSeries) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QLineSeries_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineSeries_timerEvent
func miqt_exec_callback_QLineSeries_timerEvent(self *C.QLineSeries, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QLineSeries{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QLineSeries) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QLineSeries_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QLineSeries) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QLineSeries_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineSeries_childEvent
func miqt_exec_callback_QLineSeries_childEvent(self *C.QLineSeries, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QLineSeries{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QLineSeries) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QLineSeries_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QLineSeries) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QLineSeries_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineSeries_customEvent
func miqt_exec_callback_QLineSeries_customEvent(self *C.QLineSeries, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QLineSeries{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QLineSeries) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QLineSeries_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QLineSeries) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QLineSeries_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineSeries_connectNotify
func miqt_exec_callback_QLineSeries_connectNotify(self *C.QLineSeries, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QLineSeries{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QLineSeries) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QLineSeries_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QLineSeries) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QLineSeries_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineSeries_disconnectNotify
func miqt_exec_callback_QLineSeries_disconnectNotify(self *C.QLineSeries, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QLineSeries{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QLineSeries) Delete() {
	C.QLineSeries_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLineSeries) GoGC() {
	runtime.SetFinalizer(this, func(this *QLineSeries) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
