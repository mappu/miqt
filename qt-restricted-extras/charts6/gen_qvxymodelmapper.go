package charts6

/*

#include "gen_qvxymodelmapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QVXYModelMapper struct {
	h *C.QVXYModelMapper
	*QXYModelMapper
}

func (this *QVXYModelMapper) cPointer() *C.QVXYModelMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVXYModelMapper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVXYModelMapper constructs the type using only CGO pointers.
func newQVXYModelMapper(h *C.QVXYModelMapper) *QVXYModelMapper {
	if h == nil {
		return nil
	}
	var outptr_QXYModelMapper *C.QXYModelMapper = nil
	C.QVXYModelMapper_virtbase(h, &outptr_QXYModelMapper)

	return &QVXYModelMapper{h: h,
		QXYModelMapper: newQXYModelMapper(outptr_QXYModelMapper)}
}

// UnsafeNewQVXYModelMapper constructs the type using only unsafe pointers.
func UnsafeNewQVXYModelMapper(h unsafe.Pointer) *QVXYModelMapper {
	return newQVXYModelMapper((*C.QVXYModelMapper)(h))
}

// NewQVXYModelMapper constructs a new QVXYModelMapper object.
func NewQVXYModelMapper() *QVXYModelMapper {

	return newQVXYModelMapper(C.QVXYModelMapper_new())
}

// NewQVXYModelMapper2 constructs a new QVXYModelMapper object.
func NewQVXYModelMapper2(parent *qt6.QObject) *QVXYModelMapper {

	return newQVXYModelMapper(C.QVXYModelMapper_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QVXYModelMapper) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QVXYModelMapper_metaObject(this.h)))
}

func (this *QVXYModelMapper) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVXYModelMapper_metacast(this.h, param1_Cstring))
}

func QVXYModelMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVXYModelMapper_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVXYModelMapper) Model() *qt6.QAbstractItemModel {
	return qt6.UnsafeNewQAbstractItemModel(unsafe.Pointer(C.QVXYModelMapper_model(this.h)))
}

func (this *QVXYModelMapper) SetModel(model *qt6.QAbstractItemModel) {
	C.QVXYModelMapper_setModel(this.h, (*C.QAbstractItemModel)(model.UnsafePointer()))
}

func (this *QVXYModelMapper) Series() *QXYSeries {
	return newQXYSeries(C.QVXYModelMapper_series(this.h))
}

func (this *QVXYModelMapper) SetSeries(series *QXYSeries) {
	C.QVXYModelMapper_setSeries(this.h, series.cPointer())
}

func (this *QVXYModelMapper) XColumn() int {
	return (int)(C.QVXYModelMapper_xColumn(this.h))
}

func (this *QVXYModelMapper) SetXColumn(xColumn int) {
	C.QVXYModelMapper_setXColumn(this.h, (C.int)(xColumn))
}

func (this *QVXYModelMapper) YColumn() int {
	return (int)(C.QVXYModelMapper_yColumn(this.h))
}

func (this *QVXYModelMapper) SetYColumn(yColumn int) {
	C.QVXYModelMapper_setYColumn(this.h, (C.int)(yColumn))
}

func (this *QVXYModelMapper) FirstRow() int {
	return (int)(C.QVXYModelMapper_firstRow(this.h))
}

func (this *QVXYModelMapper) SetFirstRow(firstRow int) {
	C.QVXYModelMapper_setFirstRow(this.h, (C.int)(firstRow))
}

func (this *QVXYModelMapper) RowCount() int {
	return (int)(C.QVXYModelMapper_rowCount(this.h))
}

func (this *QVXYModelMapper) SetRowCount(rowCount int) {
	C.QVXYModelMapper_setRowCount(this.h, (C.int)(rowCount))
}

func (this *QVXYModelMapper) SeriesReplaced() {
	C.QVXYModelMapper_seriesReplaced(this.h)
}
func (this *QVXYModelMapper) OnSeriesReplaced(slot func()) {
	C.QVXYModelMapper_connect_seriesReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVXYModelMapper_seriesReplaced
func miqt_exec_callback_QVXYModelMapper_seriesReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVXYModelMapper) ModelReplaced() {
	C.QVXYModelMapper_modelReplaced(this.h)
}
func (this *QVXYModelMapper) OnModelReplaced(slot func()) {
	C.QVXYModelMapper_connect_modelReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVXYModelMapper_modelReplaced
func miqt_exec_callback_QVXYModelMapper_modelReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVXYModelMapper) XColumnChanged() {
	C.QVXYModelMapper_xColumnChanged(this.h)
}
func (this *QVXYModelMapper) OnXColumnChanged(slot func()) {
	C.QVXYModelMapper_connect_xColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVXYModelMapper_xColumnChanged
func miqt_exec_callback_QVXYModelMapper_xColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVXYModelMapper) YColumnChanged() {
	C.QVXYModelMapper_yColumnChanged(this.h)
}
func (this *QVXYModelMapper) OnYColumnChanged(slot func()) {
	C.QVXYModelMapper_connect_yColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVXYModelMapper_yColumnChanged
func miqt_exec_callback_QVXYModelMapper_yColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVXYModelMapper) FirstRowChanged() {
	C.QVXYModelMapper_firstRowChanged(this.h)
}
func (this *QVXYModelMapper) OnFirstRowChanged(slot func()) {
	C.QVXYModelMapper_connect_firstRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVXYModelMapper_firstRowChanged
func miqt_exec_callback_QVXYModelMapper_firstRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVXYModelMapper) RowCountChanged() {
	C.QVXYModelMapper_rowCountChanged(this.h)
}
func (this *QVXYModelMapper) OnRowCountChanged(slot func()) {
	C.QVXYModelMapper_connect_rowCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVXYModelMapper_rowCountChanged
func miqt_exec_callback_QVXYModelMapper_rowCountChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QVXYModelMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVXYModelMapper_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVXYModelMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVXYModelMapper_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// First can only be called from a QVXYModelMapper that was directly constructed.
func (this *QVXYModelMapper) First() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVXYModelMapper_protectedbase_first(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetFirst can only be called from a QVXYModelMapper that was directly constructed.
func (this *QVXYModelMapper) SetFirst(first int) {

	var _dynamic_cast_ok C.bool = false
	C.QVXYModelMapper_protectedbase_setFirst(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(first))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Count can only be called from a QVXYModelMapper that was directly constructed.
func (this *QVXYModelMapper) Count() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVXYModelMapper_protectedbase_count(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetCount can only be called from a QVXYModelMapper that was directly constructed.
func (this *QVXYModelMapper) SetCount(count int) {

	var _dynamic_cast_ok C.bool = false
	C.QVXYModelMapper_protectedbase_setCount(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(count))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Orientation can only be called from a QVXYModelMapper that was directly constructed.
func (this *QVXYModelMapper) Orientation() qt6.Orientation {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (qt6.Orientation)(C.QVXYModelMapper_protectedbase_orientation(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetOrientation can only be called from a QVXYModelMapper that was directly constructed.
func (this *QVXYModelMapper) SetOrientation(orientation qt6.Orientation) {

	var _dynamic_cast_ok C.bool = false
	C.QVXYModelMapper_protectedbase_setOrientation(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(orientation))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// XSection can only be called from a QVXYModelMapper that was directly constructed.
func (this *QVXYModelMapper) XSection() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVXYModelMapper_protectedbase_xSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetXSection can only be called from a QVXYModelMapper that was directly constructed.
func (this *QVXYModelMapper) SetXSection(xSection int) {

	var _dynamic_cast_ok C.bool = false
	C.QVXYModelMapper_protectedbase_setXSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(xSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// YSection can only be called from a QVXYModelMapper that was directly constructed.
func (this *QVXYModelMapper) YSection() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVXYModelMapper_protectedbase_ySection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetYSection can only be called from a QVXYModelMapper that was directly constructed.
func (this *QVXYModelMapper) SetYSection(ySection int) {

	var _dynamic_cast_ok C.bool = false
	C.QVXYModelMapper_protectedbase_setYSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(ySection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QVXYModelMapper that was directly constructed.
func (this *QVXYModelMapper) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QVXYModelMapper_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QVXYModelMapper that was directly constructed.
func (this *QVXYModelMapper) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVXYModelMapper_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QVXYModelMapper that was directly constructed.
func (this *QVXYModelMapper) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVXYModelMapper_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QVXYModelMapper that was directly constructed.
func (this *QVXYModelMapper) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QVXYModelMapper_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QVXYModelMapper) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QVXYModelMapper_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QVXYModelMapper) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QVXYModelMapper_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVXYModelMapper_event
func miqt_exec_callback_QVXYModelMapper_event(self *C.QVXYModelMapper, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QVXYModelMapper{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QVXYModelMapper) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QVXYModelMapper_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QVXYModelMapper) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QVXYModelMapper_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVXYModelMapper_eventFilter
func miqt_exec_callback_QVXYModelMapper_eventFilter(self *C.QVXYModelMapper, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QVXYModelMapper{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QVXYModelMapper) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QVXYModelMapper_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QVXYModelMapper) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QVXYModelMapper_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVXYModelMapper_timerEvent
func miqt_exec_callback_QVXYModelMapper_timerEvent(self *C.QVXYModelMapper, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QVXYModelMapper{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QVXYModelMapper) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QVXYModelMapper_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QVXYModelMapper) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QVXYModelMapper_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVXYModelMapper_childEvent
func miqt_exec_callback_QVXYModelMapper_childEvent(self *C.QVXYModelMapper, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QVXYModelMapper{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QVXYModelMapper) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QVXYModelMapper_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QVXYModelMapper) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QVXYModelMapper_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVXYModelMapper_customEvent
func miqt_exec_callback_QVXYModelMapper_customEvent(self *C.QVXYModelMapper, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QVXYModelMapper{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QVXYModelMapper) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QVXYModelMapper_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QVXYModelMapper) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QVXYModelMapper_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVXYModelMapper_connectNotify
func miqt_exec_callback_QVXYModelMapper_connectNotify(self *C.QVXYModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QVXYModelMapper{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QVXYModelMapper) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QVXYModelMapper_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QVXYModelMapper) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QVXYModelMapper_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVXYModelMapper_disconnectNotify
func miqt_exec_callback_QVXYModelMapper_disconnectNotify(self *C.QVXYModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QVXYModelMapper{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QVXYModelMapper) Delete() {
	C.QVXYModelMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVXYModelMapper) GoGC() {
	runtime.SetFinalizer(this, func(this *QVXYModelMapper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
