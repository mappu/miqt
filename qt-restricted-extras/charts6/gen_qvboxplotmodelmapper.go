package charts6

/*

#include "gen_qvboxplotmodelmapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QVBoxPlotModelMapper struct {
	h *C.QVBoxPlotModelMapper
	*QBoxPlotModelMapper
}

func (this *QVBoxPlotModelMapper) cPointer() *C.QVBoxPlotModelMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVBoxPlotModelMapper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVBoxPlotModelMapper constructs the type using only CGO pointers.
func newQVBoxPlotModelMapper(h *C.QVBoxPlotModelMapper) *QVBoxPlotModelMapper {
	if h == nil {
		return nil
	}
	var outptr_QBoxPlotModelMapper *C.QBoxPlotModelMapper = nil
	C.QVBoxPlotModelMapper_virtbase(h, &outptr_QBoxPlotModelMapper)

	return &QVBoxPlotModelMapper{h: h,
		QBoxPlotModelMapper: newQBoxPlotModelMapper(outptr_QBoxPlotModelMapper)}
}

// UnsafeNewQVBoxPlotModelMapper constructs the type using only unsafe pointers.
func UnsafeNewQVBoxPlotModelMapper(h unsafe.Pointer) *QVBoxPlotModelMapper {
	return newQVBoxPlotModelMapper((*C.QVBoxPlotModelMapper)(h))
}

// NewQVBoxPlotModelMapper constructs a new QVBoxPlotModelMapper object.
func NewQVBoxPlotModelMapper() *QVBoxPlotModelMapper {

	return newQVBoxPlotModelMapper(C.QVBoxPlotModelMapper_new())
}

// NewQVBoxPlotModelMapper2 constructs a new QVBoxPlotModelMapper object.
func NewQVBoxPlotModelMapper2(parent *qt6.QObject) *QVBoxPlotModelMapper {

	return newQVBoxPlotModelMapper(C.QVBoxPlotModelMapper_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QVBoxPlotModelMapper) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QVBoxPlotModelMapper_metaObject(this.h)))
}

func (this *QVBoxPlotModelMapper) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVBoxPlotModelMapper_metacast(this.h, param1_Cstring))
}

func QVBoxPlotModelMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVBoxPlotModelMapper_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVBoxPlotModelMapper) Model() *qt6.QAbstractItemModel {
	return qt6.UnsafeNewQAbstractItemModel(unsafe.Pointer(C.QVBoxPlotModelMapper_model(this.h)))
}

func (this *QVBoxPlotModelMapper) SetModel(model *qt6.QAbstractItemModel) {
	C.QVBoxPlotModelMapper_setModel(this.h, (*C.QAbstractItemModel)(model.UnsafePointer()))
}

func (this *QVBoxPlotModelMapper) Series() *QBoxPlotSeries {
	return newQBoxPlotSeries(C.QVBoxPlotModelMapper_series(this.h))
}

func (this *QVBoxPlotModelMapper) SetSeries(series *QBoxPlotSeries) {
	C.QVBoxPlotModelMapper_setSeries(this.h, series.cPointer())
}

func (this *QVBoxPlotModelMapper) FirstBoxSetColumn() int {
	return (int)(C.QVBoxPlotModelMapper_firstBoxSetColumn(this.h))
}

func (this *QVBoxPlotModelMapper) SetFirstBoxSetColumn(firstBoxSetColumn int) {
	C.QVBoxPlotModelMapper_setFirstBoxSetColumn(this.h, (C.int)(firstBoxSetColumn))
}

func (this *QVBoxPlotModelMapper) LastBoxSetColumn() int {
	return (int)(C.QVBoxPlotModelMapper_lastBoxSetColumn(this.h))
}

func (this *QVBoxPlotModelMapper) SetLastBoxSetColumn(lastBoxSetColumn int) {
	C.QVBoxPlotModelMapper_setLastBoxSetColumn(this.h, (C.int)(lastBoxSetColumn))
}

func (this *QVBoxPlotModelMapper) FirstRow() int {
	return (int)(C.QVBoxPlotModelMapper_firstRow(this.h))
}

func (this *QVBoxPlotModelMapper) SetFirstRow(firstRow int) {
	C.QVBoxPlotModelMapper_setFirstRow(this.h, (C.int)(firstRow))
}

func (this *QVBoxPlotModelMapper) RowCount() int {
	return (int)(C.QVBoxPlotModelMapper_rowCount(this.h))
}

func (this *QVBoxPlotModelMapper) SetRowCount(rowCount int) {
	C.QVBoxPlotModelMapper_setRowCount(this.h, (C.int)(rowCount))
}

func (this *QVBoxPlotModelMapper) SeriesReplaced() {
	C.QVBoxPlotModelMapper_seriesReplaced(this.h)
}
func (this *QVBoxPlotModelMapper) OnSeriesReplaced(slot func()) {
	C.QVBoxPlotModelMapper_connect_seriesReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxPlotModelMapper_seriesReplaced
func miqt_exec_callback_QVBoxPlotModelMapper_seriesReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVBoxPlotModelMapper) ModelReplaced() {
	C.QVBoxPlotModelMapper_modelReplaced(this.h)
}
func (this *QVBoxPlotModelMapper) OnModelReplaced(slot func()) {
	C.QVBoxPlotModelMapper_connect_modelReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxPlotModelMapper_modelReplaced
func miqt_exec_callback_QVBoxPlotModelMapper_modelReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVBoxPlotModelMapper) FirstBoxSetColumnChanged() {
	C.QVBoxPlotModelMapper_firstBoxSetColumnChanged(this.h)
}
func (this *QVBoxPlotModelMapper) OnFirstBoxSetColumnChanged(slot func()) {
	C.QVBoxPlotModelMapper_connect_firstBoxSetColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxPlotModelMapper_firstBoxSetColumnChanged
func miqt_exec_callback_QVBoxPlotModelMapper_firstBoxSetColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVBoxPlotModelMapper) LastBoxSetColumnChanged() {
	C.QVBoxPlotModelMapper_lastBoxSetColumnChanged(this.h)
}
func (this *QVBoxPlotModelMapper) OnLastBoxSetColumnChanged(slot func()) {
	C.QVBoxPlotModelMapper_connect_lastBoxSetColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxPlotModelMapper_lastBoxSetColumnChanged
func miqt_exec_callback_QVBoxPlotModelMapper_lastBoxSetColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVBoxPlotModelMapper) FirstRowChanged() {
	C.QVBoxPlotModelMapper_firstRowChanged(this.h)
}
func (this *QVBoxPlotModelMapper) OnFirstRowChanged(slot func()) {
	C.QVBoxPlotModelMapper_connect_firstRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxPlotModelMapper_firstRowChanged
func miqt_exec_callback_QVBoxPlotModelMapper_firstRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVBoxPlotModelMapper) RowCountChanged() {
	C.QVBoxPlotModelMapper_rowCountChanged(this.h)
}
func (this *QVBoxPlotModelMapper) OnRowCountChanged(slot func()) {
	C.QVBoxPlotModelMapper_connect_rowCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBoxPlotModelMapper_rowCountChanged
func miqt_exec_callback_QVBoxPlotModelMapper_rowCountChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QVBoxPlotModelMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVBoxPlotModelMapper_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVBoxPlotModelMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVBoxPlotModelMapper_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// First can only be called from a QVBoxPlotModelMapper that was directly constructed.
func (this *QVBoxPlotModelMapper) First() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVBoxPlotModelMapper_protectedbase_first(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetFirst can only be called from a QVBoxPlotModelMapper that was directly constructed.
func (this *QVBoxPlotModelMapper) SetFirst(first int) {

	var _dynamic_cast_ok C.bool = false
	C.QVBoxPlotModelMapper_protectedbase_setFirst(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(first))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Count can only be called from a QVBoxPlotModelMapper that was directly constructed.
func (this *QVBoxPlotModelMapper) Count() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVBoxPlotModelMapper_protectedbase_count(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetCount can only be called from a QVBoxPlotModelMapper that was directly constructed.
func (this *QVBoxPlotModelMapper) SetCount(count int) {

	var _dynamic_cast_ok C.bool = false
	C.QVBoxPlotModelMapper_protectedbase_setCount(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(count))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FirstBoxSetSection can only be called from a QVBoxPlotModelMapper that was directly constructed.
func (this *QVBoxPlotModelMapper) FirstBoxSetSection() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVBoxPlotModelMapper_protectedbase_firstBoxSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetFirstBoxSetSection can only be called from a QVBoxPlotModelMapper that was directly constructed.
func (this *QVBoxPlotModelMapper) SetFirstBoxSetSection(firstBoxSetSection int) {

	var _dynamic_cast_ok C.bool = false
	C.QVBoxPlotModelMapper_protectedbase_setFirstBoxSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(firstBoxSetSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// LastBoxSetSection can only be called from a QVBoxPlotModelMapper that was directly constructed.
func (this *QVBoxPlotModelMapper) LastBoxSetSection() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVBoxPlotModelMapper_protectedbase_lastBoxSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetLastBoxSetSection can only be called from a QVBoxPlotModelMapper that was directly constructed.
func (this *QVBoxPlotModelMapper) SetLastBoxSetSection(lastBoxSetSection int) {

	var _dynamic_cast_ok C.bool = false
	C.QVBoxPlotModelMapper_protectedbase_setLastBoxSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(lastBoxSetSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Orientation can only be called from a QVBoxPlotModelMapper that was directly constructed.
func (this *QVBoxPlotModelMapper) Orientation() qt6.Orientation {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (qt6.Orientation)(C.QVBoxPlotModelMapper_protectedbase_orientation(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetOrientation can only be called from a QVBoxPlotModelMapper that was directly constructed.
func (this *QVBoxPlotModelMapper) SetOrientation(orientation qt6.Orientation) {

	var _dynamic_cast_ok C.bool = false
	C.QVBoxPlotModelMapper_protectedbase_setOrientation(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(orientation))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QVBoxPlotModelMapper that was directly constructed.
func (this *QVBoxPlotModelMapper) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QVBoxPlotModelMapper_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QVBoxPlotModelMapper that was directly constructed.
func (this *QVBoxPlotModelMapper) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVBoxPlotModelMapper_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QVBoxPlotModelMapper that was directly constructed.
func (this *QVBoxPlotModelMapper) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVBoxPlotModelMapper_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QVBoxPlotModelMapper that was directly constructed.
func (this *QVBoxPlotModelMapper) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QVBoxPlotModelMapper_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QVBoxPlotModelMapper) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QVBoxPlotModelMapper_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QVBoxPlotModelMapper) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QVBoxPlotModelMapper_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxPlotModelMapper_event
func miqt_exec_callback_QVBoxPlotModelMapper_event(self *C.QVBoxPlotModelMapper, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QVBoxPlotModelMapper{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QVBoxPlotModelMapper) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QVBoxPlotModelMapper_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QVBoxPlotModelMapper) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QVBoxPlotModelMapper_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxPlotModelMapper_eventFilter
func miqt_exec_callback_QVBoxPlotModelMapper_eventFilter(self *C.QVBoxPlotModelMapper, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QVBoxPlotModelMapper{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QVBoxPlotModelMapper) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QVBoxPlotModelMapper_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QVBoxPlotModelMapper) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QVBoxPlotModelMapper_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxPlotModelMapper_timerEvent
func miqt_exec_callback_QVBoxPlotModelMapper_timerEvent(self *C.QVBoxPlotModelMapper, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QVBoxPlotModelMapper{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QVBoxPlotModelMapper) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QVBoxPlotModelMapper_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QVBoxPlotModelMapper) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QVBoxPlotModelMapper_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxPlotModelMapper_childEvent
func miqt_exec_callback_QVBoxPlotModelMapper_childEvent(self *C.QVBoxPlotModelMapper, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QVBoxPlotModelMapper{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QVBoxPlotModelMapper) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QVBoxPlotModelMapper_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QVBoxPlotModelMapper) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QVBoxPlotModelMapper_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxPlotModelMapper_customEvent
func miqt_exec_callback_QVBoxPlotModelMapper_customEvent(self *C.QVBoxPlotModelMapper, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QVBoxPlotModelMapper{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QVBoxPlotModelMapper) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QVBoxPlotModelMapper_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QVBoxPlotModelMapper) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QVBoxPlotModelMapper_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxPlotModelMapper_connectNotify
func miqt_exec_callback_QVBoxPlotModelMapper_connectNotify(self *C.QVBoxPlotModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QVBoxPlotModelMapper{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QVBoxPlotModelMapper) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QVBoxPlotModelMapper_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QVBoxPlotModelMapper) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QVBoxPlotModelMapper_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxPlotModelMapper_disconnectNotify
func miqt_exec_callback_QVBoxPlotModelMapper_disconnectNotify(self *C.QVBoxPlotModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QVBoxPlotModelMapper{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QVBoxPlotModelMapper) Delete() {
	C.QVBoxPlotModelMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVBoxPlotModelMapper) GoGC() {
	runtime.SetFinalizer(this, func(this *QVBoxPlotModelMapper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
