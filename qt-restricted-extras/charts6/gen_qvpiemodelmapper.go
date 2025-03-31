package charts6

/*

#include "gen_qvpiemodelmapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QVPieModelMapper struct {
	h *C.QVPieModelMapper
	*QPieModelMapper
}

func (this *QVPieModelMapper) cPointer() *C.QVPieModelMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVPieModelMapper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVPieModelMapper constructs the type using only CGO pointers.
func newQVPieModelMapper(h *C.QVPieModelMapper) *QVPieModelMapper {
	if h == nil {
		return nil
	}
	var outptr_QPieModelMapper *C.QPieModelMapper = nil
	C.QVPieModelMapper_virtbase(h, &outptr_QPieModelMapper)

	return &QVPieModelMapper{h: h,
		QPieModelMapper: newQPieModelMapper(outptr_QPieModelMapper)}
}

// UnsafeNewQVPieModelMapper constructs the type using only unsafe pointers.
func UnsafeNewQVPieModelMapper(h unsafe.Pointer) *QVPieModelMapper {
	return newQVPieModelMapper((*C.QVPieModelMapper)(h))
}

// NewQVPieModelMapper constructs a new QVPieModelMapper object.
func NewQVPieModelMapper() *QVPieModelMapper {

	return newQVPieModelMapper(C.QVPieModelMapper_new())
}

// NewQVPieModelMapper2 constructs a new QVPieModelMapper object.
func NewQVPieModelMapper2(parent *qt6.QObject) *QVPieModelMapper {

	return newQVPieModelMapper(C.QVPieModelMapper_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QVPieModelMapper) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QVPieModelMapper_metaObject(this.h)))
}

func (this *QVPieModelMapper) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVPieModelMapper_metacast(this.h, param1_Cstring))
}

func QVPieModelMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVPieModelMapper_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVPieModelMapper) Model() *qt6.QAbstractItemModel {
	return qt6.UnsafeNewQAbstractItemModel(unsafe.Pointer(C.QVPieModelMapper_model(this.h)))
}

func (this *QVPieModelMapper) SetModel(model *qt6.QAbstractItemModel) {
	C.QVPieModelMapper_setModel(this.h, (*C.QAbstractItemModel)(model.UnsafePointer()))
}

func (this *QVPieModelMapper) Series() *QPieSeries {
	return newQPieSeries(C.QVPieModelMapper_series(this.h))
}

func (this *QVPieModelMapper) SetSeries(series *QPieSeries) {
	C.QVPieModelMapper_setSeries(this.h, series.cPointer())
}

func (this *QVPieModelMapper) ValuesColumn() int {
	return (int)(C.QVPieModelMapper_valuesColumn(this.h))
}

func (this *QVPieModelMapper) SetValuesColumn(valuesColumn int) {
	C.QVPieModelMapper_setValuesColumn(this.h, (C.int)(valuesColumn))
}

func (this *QVPieModelMapper) LabelsColumn() int {
	return (int)(C.QVPieModelMapper_labelsColumn(this.h))
}

func (this *QVPieModelMapper) SetLabelsColumn(labelsColumn int) {
	C.QVPieModelMapper_setLabelsColumn(this.h, (C.int)(labelsColumn))
}

func (this *QVPieModelMapper) FirstRow() int {
	return (int)(C.QVPieModelMapper_firstRow(this.h))
}

func (this *QVPieModelMapper) SetFirstRow(firstRow int) {
	C.QVPieModelMapper_setFirstRow(this.h, (C.int)(firstRow))
}

func (this *QVPieModelMapper) RowCount() int {
	return (int)(C.QVPieModelMapper_rowCount(this.h))
}

func (this *QVPieModelMapper) SetRowCount(rowCount int) {
	C.QVPieModelMapper_setRowCount(this.h, (C.int)(rowCount))
}

func (this *QVPieModelMapper) SeriesReplaced() {
	C.QVPieModelMapper_seriesReplaced(this.h)
}
func (this *QVPieModelMapper) OnSeriesReplaced(slot func()) {
	C.QVPieModelMapper_connect_seriesReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVPieModelMapper_seriesReplaced
func miqt_exec_callback_QVPieModelMapper_seriesReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVPieModelMapper) ModelReplaced() {
	C.QVPieModelMapper_modelReplaced(this.h)
}
func (this *QVPieModelMapper) OnModelReplaced(slot func()) {
	C.QVPieModelMapper_connect_modelReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVPieModelMapper_modelReplaced
func miqt_exec_callback_QVPieModelMapper_modelReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVPieModelMapper) ValuesColumnChanged() {
	C.QVPieModelMapper_valuesColumnChanged(this.h)
}
func (this *QVPieModelMapper) OnValuesColumnChanged(slot func()) {
	C.QVPieModelMapper_connect_valuesColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVPieModelMapper_valuesColumnChanged
func miqt_exec_callback_QVPieModelMapper_valuesColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVPieModelMapper) LabelsColumnChanged() {
	C.QVPieModelMapper_labelsColumnChanged(this.h)
}
func (this *QVPieModelMapper) OnLabelsColumnChanged(slot func()) {
	C.QVPieModelMapper_connect_labelsColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVPieModelMapper_labelsColumnChanged
func miqt_exec_callback_QVPieModelMapper_labelsColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVPieModelMapper) FirstRowChanged() {
	C.QVPieModelMapper_firstRowChanged(this.h)
}
func (this *QVPieModelMapper) OnFirstRowChanged(slot func()) {
	C.QVPieModelMapper_connect_firstRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVPieModelMapper_firstRowChanged
func miqt_exec_callback_QVPieModelMapper_firstRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVPieModelMapper) RowCountChanged() {
	C.QVPieModelMapper_rowCountChanged(this.h)
}
func (this *QVPieModelMapper) OnRowCountChanged(slot func()) {
	C.QVPieModelMapper_connect_rowCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVPieModelMapper_rowCountChanged
func miqt_exec_callback_QVPieModelMapper_rowCountChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QVPieModelMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVPieModelMapper_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVPieModelMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVPieModelMapper_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// First can only be called from a QVPieModelMapper that was directly constructed.
func (this *QVPieModelMapper) First() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVPieModelMapper_protectedbase_first(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetFirst can only be called from a QVPieModelMapper that was directly constructed.
func (this *QVPieModelMapper) SetFirst(first int) {

	var _dynamic_cast_ok C.bool = false
	C.QVPieModelMapper_protectedbase_setFirst(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(first))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Count can only be called from a QVPieModelMapper that was directly constructed.
func (this *QVPieModelMapper) Count() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVPieModelMapper_protectedbase_count(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetCount can only be called from a QVPieModelMapper that was directly constructed.
func (this *QVPieModelMapper) SetCount(count int) {

	var _dynamic_cast_ok C.bool = false
	C.QVPieModelMapper_protectedbase_setCount(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(count))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ValuesSection can only be called from a QVPieModelMapper that was directly constructed.
func (this *QVPieModelMapper) ValuesSection() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVPieModelMapper_protectedbase_valuesSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetValuesSection can only be called from a QVPieModelMapper that was directly constructed.
func (this *QVPieModelMapper) SetValuesSection(valuesSection int) {

	var _dynamic_cast_ok C.bool = false
	C.QVPieModelMapper_protectedbase_setValuesSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(valuesSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// LabelsSection can only be called from a QVPieModelMapper that was directly constructed.
func (this *QVPieModelMapper) LabelsSection() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVPieModelMapper_protectedbase_labelsSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetLabelsSection can only be called from a QVPieModelMapper that was directly constructed.
func (this *QVPieModelMapper) SetLabelsSection(labelsSection int) {

	var _dynamic_cast_ok C.bool = false
	C.QVPieModelMapper_protectedbase_setLabelsSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(labelsSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Orientation can only be called from a QVPieModelMapper that was directly constructed.
func (this *QVPieModelMapper) Orientation() qt6.Orientation {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (qt6.Orientation)(C.QVPieModelMapper_protectedbase_orientation(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetOrientation can only be called from a QVPieModelMapper that was directly constructed.
func (this *QVPieModelMapper) SetOrientation(orientation qt6.Orientation) {

	var _dynamic_cast_ok C.bool = false
	C.QVPieModelMapper_protectedbase_setOrientation(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(orientation))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QVPieModelMapper that was directly constructed.
func (this *QVPieModelMapper) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QVPieModelMapper_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QVPieModelMapper that was directly constructed.
func (this *QVPieModelMapper) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVPieModelMapper_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QVPieModelMapper that was directly constructed.
func (this *QVPieModelMapper) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVPieModelMapper_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QVPieModelMapper that was directly constructed.
func (this *QVPieModelMapper) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QVPieModelMapper_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QVPieModelMapper) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QVPieModelMapper_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QVPieModelMapper) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QVPieModelMapper_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVPieModelMapper_event
func miqt_exec_callback_QVPieModelMapper_event(self *C.QVPieModelMapper, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QVPieModelMapper{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QVPieModelMapper) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QVPieModelMapper_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QVPieModelMapper) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QVPieModelMapper_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVPieModelMapper_eventFilter
func miqt_exec_callback_QVPieModelMapper_eventFilter(self *C.QVPieModelMapper, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QVPieModelMapper{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QVPieModelMapper) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QVPieModelMapper_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QVPieModelMapper) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QVPieModelMapper_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVPieModelMapper_timerEvent
func miqt_exec_callback_QVPieModelMapper_timerEvent(self *C.QVPieModelMapper, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QVPieModelMapper{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QVPieModelMapper) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QVPieModelMapper_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QVPieModelMapper) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QVPieModelMapper_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVPieModelMapper_childEvent
func miqt_exec_callback_QVPieModelMapper_childEvent(self *C.QVPieModelMapper, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QVPieModelMapper{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QVPieModelMapper) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QVPieModelMapper_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QVPieModelMapper) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QVPieModelMapper_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVPieModelMapper_customEvent
func miqt_exec_callback_QVPieModelMapper_customEvent(self *C.QVPieModelMapper, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QVPieModelMapper{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QVPieModelMapper) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QVPieModelMapper_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QVPieModelMapper) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QVPieModelMapper_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVPieModelMapper_connectNotify
func miqt_exec_callback_QVPieModelMapper_connectNotify(self *C.QVPieModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QVPieModelMapper{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QVPieModelMapper) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QVPieModelMapper_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QVPieModelMapper) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QVPieModelMapper_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVPieModelMapper_disconnectNotify
func miqt_exec_callback_QVPieModelMapper_disconnectNotify(self *C.QVPieModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QVPieModelMapper{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QVPieModelMapper) Delete() {
	C.QVPieModelMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVPieModelMapper) GoGC() {
	runtime.SetFinalizer(this, func(this *QVPieModelMapper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
