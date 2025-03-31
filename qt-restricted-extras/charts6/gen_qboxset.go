package charts6

/*

#include "gen_qboxset.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QBoxSet__ValuePositions int

const (
	QBoxSet__LowerExtreme  QBoxSet__ValuePositions = 0
	QBoxSet__LowerQuartile QBoxSet__ValuePositions = 1
	QBoxSet__Median        QBoxSet__ValuePositions = 2
	QBoxSet__UpperQuartile QBoxSet__ValuePositions = 3
	QBoxSet__UpperExtreme  QBoxSet__ValuePositions = 4
)

type QBoxSet struct {
	h *C.QBoxSet
	*qt6.QObject
}

func (this *QBoxSet) cPointer() *C.QBoxSet {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBoxSet) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBoxSet constructs the type using only CGO pointers.
func newQBoxSet(h *C.QBoxSet) *QBoxSet {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QBoxSet_virtbase(h, &outptr_QObject)

	return &QBoxSet{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQBoxSet constructs the type using only unsafe pointers.
func UnsafeNewQBoxSet(h unsafe.Pointer) *QBoxSet {
	return newQBoxSet((*C.QBoxSet)(h))
}

// NewQBoxSet constructs a new QBoxSet object.
func NewQBoxSet() *QBoxSet {

	return newQBoxSet(C.QBoxSet_new())
}

// NewQBoxSet2 constructs a new QBoxSet object.
func NewQBoxSet2(le float64, lq float64, m float64, uq float64, ue float64) *QBoxSet {

	return newQBoxSet(C.QBoxSet_new2((C.double)(le), (C.double)(lq), (C.double)(m), (C.double)(uq), (C.double)(ue)))
}

// NewQBoxSet3 constructs a new QBoxSet object.
func NewQBoxSet3(label string) *QBoxSet {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))

	return newQBoxSet(C.QBoxSet_new3(label_ms))
}

// NewQBoxSet4 constructs a new QBoxSet object.
func NewQBoxSet4(label string, parent *qt6.QObject) *QBoxSet {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))

	return newQBoxSet(C.QBoxSet_new4(label_ms, (*C.QObject)(parent.UnsafePointer())))
}

// NewQBoxSet5 constructs a new QBoxSet object.
func NewQBoxSet5(le float64, lq float64, m float64, uq float64, ue float64, label string) *QBoxSet {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))

	return newQBoxSet(C.QBoxSet_new5((C.double)(le), (C.double)(lq), (C.double)(m), (C.double)(uq), (C.double)(ue), label_ms))
}

// NewQBoxSet6 constructs a new QBoxSet object.
func NewQBoxSet6(le float64, lq float64, m float64, uq float64, ue float64, label string, parent *qt6.QObject) *QBoxSet {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))

	return newQBoxSet(C.QBoxSet_new6((C.double)(le), (C.double)(lq), (C.double)(m), (C.double)(uq), (C.double)(ue), label_ms, (*C.QObject)(parent.UnsafePointer())))
}

func (this *QBoxSet) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QBoxSet_metaObject(this.h)))
}

func (this *QBoxSet) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QBoxSet_metacast(this.h, param1_Cstring))
}

func QBoxSet_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QBoxSet_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBoxSet) Append(value float64) {
	C.QBoxSet_append(this.h, (C.double)(value))
}

func (this *QBoxSet) AppendWithValues(values []float64) {
	values_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(values))))
	defer C.free(unsafe.Pointer(values_CArray))
	for i := range values {
		values_CArray[i] = (C.double)(values[i])
	}
	values_ma := C.struct_miqt_array{len: C.size_t(len(values)), data: unsafe.Pointer(values_CArray)}
	C.QBoxSet_appendWithValues(this.h, values_ma)
}

func (this *QBoxSet) Clear() {
	C.QBoxSet_clear(this.h)
}

func (this *QBoxSet) SetLabel(label string) {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	C.QBoxSet_setLabel(this.h, label_ms)
}

func (this *QBoxSet) Label() string {
	var _ms C.struct_miqt_string = C.QBoxSet_label(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBoxSet) OperatorShiftLeft(value *float64) *QBoxSet {
	return newQBoxSet(C.QBoxSet_operatorShiftLeft(this.h, (*C.double)(unsafe.Pointer(value))))
}

func (this *QBoxSet) SetValue(index int, value float64) {
	C.QBoxSet_setValue(this.h, (C.int)(index), (C.double)(value))
}

func (this *QBoxSet) At(index int) float64 {
	return (float64)(C.QBoxSet_at(this.h, (C.int)(index)))
}

func (this *QBoxSet) OperatorSubscript(index int) float64 {
	return (float64)(C.QBoxSet_operatorSubscript(this.h, (C.int)(index)))
}

func (this *QBoxSet) Count() int {
	return (int)(C.QBoxSet_count(this.h))
}

func (this *QBoxSet) SetPen(pen *qt6.QPen) {
	C.QBoxSet_setPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QBoxSet) Pen() *qt6.QPen {
	_goptr := qt6.UnsafeNewQPen(unsafe.Pointer(C.QBoxSet_pen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBoxSet) SetBrush(brush *qt6.QBrush) {
	C.QBoxSet_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QBoxSet) Brush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QBoxSet_brush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBoxSet) Clicked() {
	C.QBoxSet_clicked(this.h)
}
func (this *QBoxSet) OnClicked(slot func()) {
	C.QBoxSet_connect_clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxSet_clicked
func miqt_exec_callback_QBoxSet_clicked(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QBoxSet) Hovered(status bool) {
	C.QBoxSet_hovered(this.h, (C.bool)(status))
}
func (this *QBoxSet) OnHovered(slot func(status bool)) {
	C.QBoxSet_connect_hovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxSet_hovered
func miqt_exec_callback_QBoxSet_hovered(cb C.intptr_t, status C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(status)

	gofunc(slotval1)
}

func (this *QBoxSet) Pressed() {
	C.QBoxSet_pressed(this.h)
}
func (this *QBoxSet) OnPressed(slot func()) {
	C.QBoxSet_connect_pressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxSet_pressed
func miqt_exec_callback_QBoxSet_pressed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QBoxSet) Released() {
	C.QBoxSet_released(this.h)
}
func (this *QBoxSet) OnReleased(slot func()) {
	C.QBoxSet_connect_released(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxSet_released
func miqt_exec_callback_QBoxSet_released(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QBoxSet) DoubleClicked() {
	C.QBoxSet_doubleClicked(this.h)
}
func (this *QBoxSet) OnDoubleClicked(slot func()) {
	C.QBoxSet_connect_doubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxSet_doubleClicked
func miqt_exec_callback_QBoxSet_doubleClicked(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QBoxSet) PenChanged() {
	C.QBoxSet_penChanged(this.h)
}
func (this *QBoxSet) OnPenChanged(slot func()) {
	C.QBoxSet_connect_penChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxSet_penChanged
func miqt_exec_callback_QBoxSet_penChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QBoxSet) BrushChanged() {
	C.QBoxSet_brushChanged(this.h)
}
func (this *QBoxSet) OnBrushChanged(slot func()) {
	C.QBoxSet_connect_brushChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxSet_brushChanged
func miqt_exec_callback_QBoxSet_brushChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QBoxSet) ValuesChanged() {
	C.QBoxSet_valuesChanged(this.h)
}
func (this *QBoxSet) OnValuesChanged(slot func()) {
	C.QBoxSet_connect_valuesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxSet_valuesChanged
func miqt_exec_callback_QBoxSet_valuesChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QBoxSet) ValueChanged(index int) {
	C.QBoxSet_valueChanged(this.h, (C.int)(index))
}
func (this *QBoxSet) OnValueChanged(slot func(index int)) {
	C.QBoxSet_connect_valueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxSet_valueChanged
func miqt_exec_callback_QBoxSet_valueChanged(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QBoxSet) Cleared() {
	C.QBoxSet_cleared(this.h)
}
func (this *QBoxSet) OnCleared(slot func()) {
	C.QBoxSet_connect_cleared(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxSet_cleared
func miqt_exec_callback_QBoxSet_cleared(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QBoxSet_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBoxSet_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBoxSet_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBoxSet_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QBoxSet that was directly constructed.
func (this *QBoxSet) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QBoxSet_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QBoxSet that was directly constructed.
func (this *QBoxSet) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QBoxSet_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QBoxSet that was directly constructed.
func (this *QBoxSet) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QBoxSet_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QBoxSet that was directly constructed.
func (this *QBoxSet) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QBoxSet_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QBoxSet) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QBoxSet_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QBoxSet) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QBoxSet_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxSet_event
func miqt_exec_callback_QBoxSet_event(self *C.QBoxSet, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QBoxSet{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QBoxSet) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QBoxSet_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QBoxSet) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QBoxSet_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxSet_eventFilter
func miqt_exec_callback_QBoxSet_eventFilter(self *C.QBoxSet, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QBoxSet{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QBoxSet) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QBoxSet_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QBoxSet) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QBoxSet_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxSet_timerEvent
func miqt_exec_callback_QBoxSet_timerEvent(self *C.QBoxSet, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QBoxSet{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QBoxSet) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QBoxSet_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QBoxSet) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QBoxSet_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxSet_childEvent
func miqt_exec_callback_QBoxSet_childEvent(self *C.QBoxSet, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QBoxSet{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QBoxSet) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QBoxSet_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QBoxSet) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QBoxSet_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxSet_customEvent
func miqt_exec_callback_QBoxSet_customEvent(self *C.QBoxSet, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QBoxSet{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QBoxSet) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QBoxSet_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QBoxSet) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QBoxSet_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxSet_connectNotify
func miqt_exec_callback_QBoxSet_connectNotify(self *C.QBoxSet, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QBoxSet{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QBoxSet) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QBoxSet_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QBoxSet) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QBoxSet_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxSet_disconnectNotify
func miqt_exec_callback_QBoxSet_disconnectNotify(self *C.QBoxSet, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QBoxSet{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QBoxSet) Delete() {
	C.QBoxSet_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBoxSet) GoGC() {
	runtime.SetFinalizer(this, func(this *QBoxSet) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
