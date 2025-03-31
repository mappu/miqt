package charts6

/*

#include "gen_qhpiemodelmapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QHPieModelMapper struct {
	h *C.QHPieModelMapper
	*QPieModelMapper
}

func (this *QHPieModelMapper) cPointer() *C.QHPieModelMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHPieModelMapper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHPieModelMapper constructs the type using only CGO pointers.
func newQHPieModelMapper(h *C.QHPieModelMapper) *QHPieModelMapper {
	if h == nil {
		return nil
	}
	var outptr_QPieModelMapper *C.QPieModelMapper = nil
	C.QHPieModelMapper_virtbase(h, &outptr_QPieModelMapper)

	return &QHPieModelMapper{h: h,
		QPieModelMapper: newQPieModelMapper(outptr_QPieModelMapper)}
}

// UnsafeNewQHPieModelMapper constructs the type using only unsafe pointers.
func UnsafeNewQHPieModelMapper(h unsafe.Pointer) *QHPieModelMapper {
	return newQHPieModelMapper((*C.QHPieModelMapper)(h))
}

// NewQHPieModelMapper constructs a new QHPieModelMapper object.
func NewQHPieModelMapper() *QHPieModelMapper {

	return newQHPieModelMapper(C.QHPieModelMapper_new())
}

// NewQHPieModelMapper2 constructs a new QHPieModelMapper object.
func NewQHPieModelMapper2(parent *qt6.QObject) *QHPieModelMapper {

	return newQHPieModelMapper(C.QHPieModelMapper_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QHPieModelMapper) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QHPieModelMapper_metaObject(this.h)))
}

func (this *QHPieModelMapper) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QHPieModelMapper_metacast(this.h, param1_Cstring))
}

func QHPieModelMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHPieModelMapper_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHPieModelMapper) Model() *qt6.QAbstractItemModel {
	return qt6.UnsafeNewQAbstractItemModel(unsafe.Pointer(C.QHPieModelMapper_model(this.h)))
}

func (this *QHPieModelMapper) SetModel(model *qt6.QAbstractItemModel) {
	C.QHPieModelMapper_setModel(this.h, (*C.QAbstractItemModel)(model.UnsafePointer()))
}

func (this *QHPieModelMapper) Series() *QPieSeries {
	return newQPieSeries(C.QHPieModelMapper_series(this.h))
}

func (this *QHPieModelMapper) SetSeries(series *QPieSeries) {
	C.QHPieModelMapper_setSeries(this.h, series.cPointer())
}

func (this *QHPieModelMapper) ValuesRow() int {
	return (int)(C.QHPieModelMapper_valuesRow(this.h))
}

func (this *QHPieModelMapper) SetValuesRow(valuesRow int) {
	C.QHPieModelMapper_setValuesRow(this.h, (C.int)(valuesRow))
}

func (this *QHPieModelMapper) LabelsRow() int {
	return (int)(C.QHPieModelMapper_labelsRow(this.h))
}

func (this *QHPieModelMapper) SetLabelsRow(labelsRow int) {
	C.QHPieModelMapper_setLabelsRow(this.h, (C.int)(labelsRow))
}

func (this *QHPieModelMapper) FirstColumn() int {
	return (int)(C.QHPieModelMapper_firstColumn(this.h))
}

func (this *QHPieModelMapper) SetFirstColumn(firstColumn int) {
	C.QHPieModelMapper_setFirstColumn(this.h, (C.int)(firstColumn))
}

func (this *QHPieModelMapper) ColumnCount() int {
	return (int)(C.QHPieModelMapper_columnCount(this.h))
}

func (this *QHPieModelMapper) SetColumnCount(columnCount int) {
	C.QHPieModelMapper_setColumnCount(this.h, (C.int)(columnCount))
}

func (this *QHPieModelMapper) SeriesReplaced() {
	C.QHPieModelMapper_seriesReplaced(this.h)
}
func (this *QHPieModelMapper) OnSeriesReplaced(slot func()) {
	C.QHPieModelMapper_connect_seriesReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHPieModelMapper_seriesReplaced
func miqt_exec_callback_QHPieModelMapper_seriesReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHPieModelMapper) ModelReplaced() {
	C.QHPieModelMapper_modelReplaced(this.h)
}
func (this *QHPieModelMapper) OnModelReplaced(slot func()) {
	C.QHPieModelMapper_connect_modelReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHPieModelMapper_modelReplaced
func miqt_exec_callback_QHPieModelMapper_modelReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHPieModelMapper) ValuesRowChanged() {
	C.QHPieModelMapper_valuesRowChanged(this.h)
}
func (this *QHPieModelMapper) OnValuesRowChanged(slot func()) {
	C.QHPieModelMapper_connect_valuesRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHPieModelMapper_valuesRowChanged
func miqt_exec_callback_QHPieModelMapper_valuesRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHPieModelMapper) LabelsRowChanged() {
	C.QHPieModelMapper_labelsRowChanged(this.h)
}
func (this *QHPieModelMapper) OnLabelsRowChanged(slot func()) {
	C.QHPieModelMapper_connect_labelsRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHPieModelMapper_labelsRowChanged
func miqt_exec_callback_QHPieModelMapper_labelsRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHPieModelMapper) FirstColumnChanged() {
	C.QHPieModelMapper_firstColumnChanged(this.h)
}
func (this *QHPieModelMapper) OnFirstColumnChanged(slot func()) {
	C.QHPieModelMapper_connect_firstColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHPieModelMapper_firstColumnChanged
func miqt_exec_callback_QHPieModelMapper_firstColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHPieModelMapper) ColumnCountChanged() {
	C.QHPieModelMapper_columnCountChanged(this.h)
}
func (this *QHPieModelMapper) OnColumnCountChanged(slot func()) {
	C.QHPieModelMapper_connect_columnCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHPieModelMapper_columnCountChanged
func miqt_exec_callback_QHPieModelMapper_columnCountChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QHPieModelMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHPieModelMapper_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHPieModelMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHPieModelMapper_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// First can only be called from a QHPieModelMapper that was directly constructed.
func (this *QHPieModelMapper) First() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHPieModelMapper_protectedbase_first(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetFirst can only be called from a QHPieModelMapper that was directly constructed.
func (this *QHPieModelMapper) SetFirst(first int) {

	var _dynamic_cast_ok C.bool = false
	C.QHPieModelMapper_protectedbase_setFirst(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(first))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Count can only be called from a QHPieModelMapper that was directly constructed.
func (this *QHPieModelMapper) Count() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHPieModelMapper_protectedbase_count(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetCount can only be called from a QHPieModelMapper that was directly constructed.
func (this *QHPieModelMapper) SetCount(count int) {

	var _dynamic_cast_ok C.bool = false
	C.QHPieModelMapper_protectedbase_setCount(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(count))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ValuesSection can only be called from a QHPieModelMapper that was directly constructed.
func (this *QHPieModelMapper) ValuesSection() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHPieModelMapper_protectedbase_valuesSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetValuesSection can only be called from a QHPieModelMapper that was directly constructed.
func (this *QHPieModelMapper) SetValuesSection(valuesSection int) {

	var _dynamic_cast_ok C.bool = false
	C.QHPieModelMapper_protectedbase_setValuesSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(valuesSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// LabelsSection can only be called from a QHPieModelMapper that was directly constructed.
func (this *QHPieModelMapper) LabelsSection() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHPieModelMapper_protectedbase_labelsSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetLabelsSection can only be called from a QHPieModelMapper that was directly constructed.
func (this *QHPieModelMapper) SetLabelsSection(labelsSection int) {

	var _dynamic_cast_ok C.bool = false
	C.QHPieModelMapper_protectedbase_setLabelsSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(labelsSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Orientation can only be called from a QHPieModelMapper that was directly constructed.
func (this *QHPieModelMapper) Orientation() qt6.Orientation {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (qt6.Orientation)(C.QHPieModelMapper_protectedbase_orientation(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetOrientation can only be called from a QHPieModelMapper that was directly constructed.
func (this *QHPieModelMapper) SetOrientation(orientation qt6.Orientation) {

	var _dynamic_cast_ok C.bool = false
	C.QHPieModelMapper_protectedbase_setOrientation(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(orientation))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QHPieModelMapper that was directly constructed.
func (this *QHPieModelMapper) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QHPieModelMapper_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QHPieModelMapper that was directly constructed.
func (this *QHPieModelMapper) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHPieModelMapper_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QHPieModelMapper that was directly constructed.
func (this *QHPieModelMapper) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHPieModelMapper_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QHPieModelMapper that was directly constructed.
func (this *QHPieModelMapper) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QHPieModelMapper_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QHPieModelMapper) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QHPieModelMapper_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QHPieModelMapper) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QHPieModelMapper_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHPieModelMapper_event
func miqt_exec_callback_QHPieModelMapper_event(self *C.QHPieModelMapper, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QHPieModelMapper{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHPieModelMapper) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QHPieModelMapper_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QHPieModelMapper) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QHPieModelMapper_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHPieModelMapper_eventFilter
func miqt_exec_callback_QHPieModelMapper_eventFilter(self *C.QHPieModelMapper, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QHPieModelMapper{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QHPieModelMapper) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QHPieModelMapper_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QHPieModelMapper) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QHPieModelMapper_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHPieModelMapper_timerEvent
func miqt_exec_callback_QHPieModelMapper_timerEvent(self *C.QHPieModelMapper, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QHPieModelMapper{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QHPieModelMapper) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QHPieModelMapper_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QHPieModelMapper) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QHPieModelMapper_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHPieModelMapper_childEvent
func miqt_exec_callback_QHPieModelMapper_childEvent(self *C.QHPieModelMapper, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QHPieModelMapper{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QHPieModelMapper) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QHPieModelMapper_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QHPieModelMapper) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QHPieModelMapper_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHPieModelMapper_customEvent
func miqt_exec_callback_QHPieModelMapper_customEvent(self *C.QHPieModelMapper, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QHPieModelMapper{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QHPieModelMapper) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QHPieModelMapper_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QHPieModelMapper) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QHPieModelMapper_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHPieModelMapper_connectNotify
func miqt_exec_callback_QHPieModelMapper_connectNotify(self *C.QHPieModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QHPieModelMapper{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QHPieModelMapper) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QHPieModelMapper_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QHPieModelMapper) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QHPieModelMapper_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHPieModelMapper_disconnectNotify
func miqt_exec_callback_QHPieModelMapper_disconnectNotify(self *C.QHPieModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QHPieModelMapper{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QHPieModelMapper) Delete() {
	C.QHPieModelMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHPieModelMapper) GoGC() {
	runtime.SetFinalizer(this, func(this *QHPieModelMapper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
