package charts6

/*

#include "gen_qcandlestickset.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCandlestickSet struct {
	h *C.QCandlestickSet
	*qt6.QObject
}

func (this *QCandlestickSet) cPointer() *C.QCandlestickSet {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCandlestickSet) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCandlestickSet constructs the type using only CGO pointers.
func newQCandlestickSet(h *C.QCandlestickSet) *QCandlestickSet {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QCandlestickSet_virtbase(h, &outptr_QObject)

	return &QCandlestickSet{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQCandlestickSet constructs the type using only unsafe pointers.
func UnsafeNewQCandlestickSet(h unsafe.Pointer) *QCandlestickSet {
	return newQCandlestickSet((*C.QCandlestickSet)(h))
}

// NewQCandlestickSet constructs a new QCandlestickSet object.
func NewQCandlestickSet() *QCandlestickSet {

	return newQCandlestickSet(C.QCandlestickSet_new())
}

// NewQCandlestickSet2 constructs a new QCandlestickSet object.
func NewQCandlestickSet2(open float64, high float64, low float64, close float64) *QCandlestickSet {

	return newQCandlestickSet(C.QCandlestickSet_new2((C.double)(open), (C.double)(high), (C.double)(low), (C.double)(close)))
}

// NewQCandlestickSet3 constructs a new QCandlestickSet object.
func NewQCandlestickSet3(timestamp float64) *QCandlestickSet {

	return newQCandlestickSet(C.QCandlestickSet_new3((C.double)(timestamp)))
}

// NewQCandlestickSet4 constructs a new QCandlestickSet object.
func NewQCandlestickSet4(timestamp float64, parent *qt6.QObject) *QCandlestickSet {

	return newQCandlestickSet(C.QCandlestickSet_new4((C.double)(timestamp), (*C.QObject)(parent.UnsafePointer())))
}

// NewQCandlestickSet5 constructs a new QCandlestickSet object.
func NewQCandlestickSet5(open float64, high float64, low float64, close float64, timestamp float64) *QCandlestickSet {

	return newQCandlestickSet(C.QCandlestickSet_new5((C.double)(open), (C.double)(high), (C.double)(low), (C.double)(close), (C.double)(timestamp)))
}

// NewQCandlestickSet6 constructs a new QCandlestickSet object.
func NewQCandlestickSet6(open float64, high float64, low float64, close float64, timestamp float64, parent *qt6.QObject) *QCandlestickSet {

	return newQCandlestickSet(C.QCandlestickSet_new6((C.double)(open), (C.double)(high), (C.double)(low), (C.double)(close), (C.double)(timestamp), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QCandlestickSet) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QCandlestickSet_metaObject(this.h)))
}

func (this *QCandlestickSet) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCandlestickSet_metacast(this.h, param1_Cstring))
}

func QCandlestickSet_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCandlestickSet_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCandlestickSet) SetTimestamp(timestamp float64) {
	C.QCandlestickSet_setTimestamp(this.h, (C.double)(timestamp))
}

func (this *QCandlestickSet) Timestamp() float64 {
	return (float64)(C.QCandlestickSet_timestamp(this.h))
}

func (this *QCandlestickSet) SetOpen(open float64) {
	C.QCandlestickSet_setOpen(this.h, (C.double)(open))
}

func (this *QCandlestickSet) Open() float64 {
	return (float64)(C.QCandlestickSet_open(this.h))
}

func (this *QCandlestickSet) SetHigh(high float64) {
	C.QCandlestickSet_setHigh(this.h, (C.double)(high))
}

func (this *QCandlestickSet) High() float64 {
	return (float64)(C.QCandlestickSet_high(this.h))
}

func (this *QCandlestickSet) SetLow(low float64) {
	C.QCandlestickSet_setLow(this.h, (C.double)(low))
}

func (this *QCandlestickSet) Low() float64 {
	return (float64)(C.QCandlestickSet_low(this.h))
}

func (this *QCandlestickSet) SetClose(close float64) {
	C.QCandlestickSet_setClose(this.h, (C.double)(close))
}

func (this *QCandlestickSet) Close() float64 {
	return (float64)(C.QCandlestickSet_close(this.h))
}

func (this *QCandlestickSet) SetBrush(brush *qt6.QBrush) {
	C.QCandlestickSet_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QCandlestickSet) Brush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QCandlestickSet_brush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCandlestickSet) SetPen(pen *qt6.QPen) {
	C.QCandlestickSet_setPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QCandlestickSet) Pen() *qt6.QPen {
	_goptr := qt6.UnsafeNewQPen(unsafe.Pointer(C.QCandlestickSet_pen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCandlestickSet) Clicked() {
	C.QCandlestickSet_clicked(this.h)
}
func (this *QCandlestickSet) OnClicked(slot func()) {
	C.QCandlestickSet_connect_clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSet_clicked
func miqt_exec_callback_QCandlestickSet_clicked(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSet) Hovered(status bool) {
	C.QCandlestickSet_hovered(this.h, (C.bool)(status))
}
func (this *QCandlestickSet) OnHovered(slot func(status bool)) {
	C.QCandlestickSet_connect_hovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSet_hovered
func miqt_exec_callback_QCandlestickSet_hovered(cb C.intptr_t, status C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(status)

	gofunc(slotval1)
}

func (this *QCandlestickSet) Pressed() {
	C.QCandlestickSet_pressed(this.h)
}
func (this *QCandlestickSet) OnPressed(slot func()) {
	C.QCandlestickSet_connect_pressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSet_pressed
func miqt_exec_callback_QCandlestickSet_pressed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSet) Released() {
	C.QCandlestickSet_released(this.h)
}
func (this *QCandlestickSet) OnReleased(slot func()) {
	C.QCandlestickSet_connect_released(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSet_released
func miqt_exec_callback_QCandlestickSet_released(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSet) DoubleClicked() {
	C.QCandlestickSet_doubleClicked(this.h)
}
func (this *QCandlestickSet) OnDoubleClicked(slot func()) {
	C.QCandlestickSet_connect_doubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSet_doubleClicked
func miqt_exec_callback_QCandlestickSet_doubleClicked(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSet) TimestampChanged() {
	C.QCandlestickSet_timestampChanged(this.h)
}
func (this *QCandlestickSet) OnTimestampChanged(slot func()) {
	C.QCandlestickSet_connect_timestampChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSet_timestampChanged
func miqt_exec_callback_QCandlestickSet_timestampChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSet) OpenChanged() {
	C.QCandlestickSet_openChanged(this.h)
}
func (this *QCandlestickSet) OnOpenChanged(slot func()) {
	C.QCandlestickSet_connect_openChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSet_openChanged
func miqt_exec_callback_QCandlestickSet_openChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSet) HighChanged() {
	C.QCandlestickSet_highChanged(this.h)
}
func (this *QCandlestickSet) OnHighChanged(slot func()) {
	C.QCandlestickSet_connect_highChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSet_highChanged
func miqt_exec_callback_QCandlestickSet_highChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSet) LowChanged() {
	C.QCandlestickSet_lowChanged(this.h)
}
func (this *QCandlestickSet) OnLowChanged(slot func()) {
	C.QCandlestickSet_connect_lowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSet_lowChanged
func miqt_exec_callback_QCandlestickSet_lowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSet) CloseChanged() {
	C.QCandlestickSet_closeChanged(this.h)
}
func (this *QCandlestickSet) OnCloseChanged(slot func()) {
	C.QCandlestickSet_connect_closeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSet_closeChanged
func miqt_exec_callback_QCandlestickSet_closeChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSet) BrushChanged() {
	C.QCandlestickSet_brushChanged(this.h)
}
func (this *QCandlestickSet) OnBrushChanged(slot func()) {
	C.QCandlestickSet_connect_brushChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSet_brushChanged
func miqt_exec_callback_QCandlestickSet_brushChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSet) PenChanged() {
	C.QCandlestickSet_penChanged(this.h)
}
func (this *QCandlestickSet) OnPenChanged(slot func()) {
	C.QCandlestickSet_connect_penChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSet_penChanged
func miqt_exec_callback_QCandlestickSet_penChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QCandlestickSet_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCandlestickSet_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCandlestickSet_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCandlestickSet_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QCandlestickSet that was directly constructed.
func (this *QCandlestickSet) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QCandlestickSet_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QCandlestickSet that was directly constructed.
func (this *QCandlestickSet) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCandlestickSet_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QCandlestickSet that was directly constructed.
func (this *QCandlestickSet) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCandlestickSet_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QCandlestickSet that was directly constructed.
func (this *QCandlestickSet) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QCandlestickSet_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QCandlestickSet) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QCandlestickSet_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCandlestickSet) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QCandlestickSet_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickSet_event
func miqt_exec_callback_QCandlestickSet_event(self *C.QCandlestickSet, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCandlestickSet{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCandlestickSet) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QCandlestickSet_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCandlestickSet) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QCandlestickSet_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickSet_eventFilter
func miqt_exec_callback_QCandlestickSet_eventFilter(self *C.QCandlestickSet, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCandlestickSet{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QCandlestickSet) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QCandlestickSet_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QCandlestickSet) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QCandlestickSet_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickSet_timerEvent
func miqt_exec_callback_QCandlestickSet_timerEvent(self *C.QCandlestickSet, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QCandlestickSet{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QCandlestickSet) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QCandlestickSet_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QCandlestickSet) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QCandlestickSet_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickSet_childEvent
func miqt_exec_callback_QCandlestickSet_childEvent(self *C.QCandlestickSet, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QCandlestickSet{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QCandlestickSet) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QCandlestickSet_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QCandlestickSet) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QCandlestickSet_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickSet_customEvent
func miqt_exec_callback_QCandlestickSet_customEvent(self *C.QCandlestickSet, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QCandlestickSet{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QCandlestickSet) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QCandlestickSet_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCandlestickSet) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QCandlestickSet_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickSet_connectNotify
func miqt_exec_callback_QCandlestickSet_connectNotify(self *C.QCandlestickSet, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCandlestickSet{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QCandlestickSet) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QCandlestickSet_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCandlestickSet) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QCandlestickSet_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickSet_disconnectNotify
func miqt_exec_callback_QCandlestickSet_disconnectNotify(self *C.QCandlestickSet, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCandlestickSet{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QCandlestickSet) Delete() {
	C.QCandlestickSet_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCandlestickSet) GoGC() {
	runtime.SetFinalizer(this, func(this *QCandlestickSet) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
