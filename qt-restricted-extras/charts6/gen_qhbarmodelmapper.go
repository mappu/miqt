package charts6

/*

#include "gen_qhbarmodelmapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QHBarModelMapper struct {
	h *C.QHBarModelMapper
	*QBarModelMapper
}

func (this *QHBarModelMapper) cPointer() *C.QHBarModelMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHBarModelMapper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHBarModelMapper constructs the type using only CGO pointers.
func newQHBarModelMapper(h *C.QHBarModelMapper) *QHBarModelMapper {
	if h == nil {
		return nil
	}
	var outptr_QBarModelMapper *C.QBarModelMapper = nil
	C.QHBarModelMapper_virtbase(h, &outptr_QBarModelMapper)

	return &QHBarModelMapper{h: h,
		QBarModelMapper: newQBarModelMapper(outptr_QBarModelMapper)}
}

// UnsafeNewQHBarModelMapper constructs the type using only unsafe pointers.
func UnsafeNewQHBarModelMapper(h unsafe.Pointer) *QHBarModelMapper {
	return newQHBarModelMapper((*C.QHBarModelMapper)(h))
}

// NewQHBarModelMapper constructs a new QHBarModelMapper object.
func NewQHBarModelMapper() *QHBarModelMapper {

	return newQHBarModelMapper(C.QHBarModelMapper_new())
}

// NewQHBarModelMapper2 constructs a new QHBarModelMapper object.
func NewQHBarModelMapper2(parent *qt6.QObject) *QHBarModelMapper {

	return newQHBarModelMapper(C.QHBarModelMapper_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QHBarModelMapper) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QHBarModelMapper_metaObject(this.h)))
}

func (this *QHBarModelMapper) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QHBarModelMapper_metacast(this.h, param1_Cstring))
}

func QHBarModelMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHBarModelMapper_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHBarModelMapper) Model() *qt6.QAbstractItemModel {
	return qt6.UnsafeNewQAbstractItemModel(unsafe.Pointer(C.QHBarModelMapper_model(this.h)))
}

func (this *QHBarModelMapper) SetModel(model *qt6.QAbstractItemModel) {
	C.QHBarModelMapper_setModel(this.h, (*C.QAbstractItemModel)(model.UnsafePointer()))
}

func (this *QHBarModelMapper) Series() *QAbstractBarSeries {
	return newQAbstractBarSeries(C.QHBarModelMapper_series(this.h))
}

func (this *QHBarModelMapper) SetSeries(series *QAbstractBarSeries) {
	C.QHBarModelMapper_setSeries(this.h, series.cPointer())
}

func (this *QHBarModelMapper) FirstBarSetRow() int {
	return (int)(C.QHBarModelMapper_firstBarSetRow(this.h))
}

func (this *QHBarModelMapper) SetFirstBarSetRow(firstBarSetRow int) {
	C.QHBarModelMapper_setFirstBarSetRow(this.h, (C.int)(firstBarSetRow))
}

func (this *QHBarModelMapper) LastBarSetRow() int {
	return (int)(C.QHBarModelMapper_lastBarSetRow(this.h))
}

func (this *QHBarModelMapper) SetLastBarSetRow(lastBarSetRow int) {
	C.QHBarModelMapper_setLastBarSetRow(this.h, (C.int)(lastBarSetRow))
}

func (this *QHBarModelMapper) FirstColumn() int {
	return (int)(C.QHBarModelMapper_firstColumn(this.h))
}

func (this *QHBarModelMapper) SetFirstColumn(firstColumn int) {
	C.QHBarModelMapper_setFirstColumn(this.h, (C.int)(firstColumn))
}

func (this *QHBarModelMapper) ColumnCount() int {
	return (int)(C.QHBarModelMapper_columnCount(this.h))
}

func (this *QHBarModelMapper) SetColumnCount(columnCount int) {
	C.QHBarModelMapper_setColumnCount(this.h, (C.int)(columnCount))
}

func (this *QHBarModelMapper) SeriesReplaced() {
	C.QHBarModelMapper_seriesReplaced(this.h)
}
func (this *QHBarModelMapper) OnSeriesReplaced(slot func()) {
	C.QHBarModelMapper_connect_seriesReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBarModelMapper_seriesReplaced
func miqt_exec_callback_QHBarModelMapper_seriesReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHBarModelMapper) ModelReplaced() {
	C.QHBarModelMapper_modelReplaced(this.h)
}
func (this *QHBarModelMapper) OnModelReplaced(slot func()) {
	C.QHBarModelMapper_connect_modelReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBarModelMapper_modelReplaced
func miqt_exec_callback_QHBarModelMapper_modelReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHBarModelMapper) FirstBarSetRowChanged() {
	C.QHBarModelMapper_firstBarSetRowChanged(this.h)
}
func (this *QHBarModelMapper) OnFirstBarSetRowChanged(slot func()) {
	C.QHBarModelMapper_connect_firstBarSetRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBarModelMapper_firstBarSetRowChanged
func miqt_exec_callback_QHBarModelMapper_firstBarSetRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHBarModelMapper) LastBarSetRowChanged() {
	C.QHBarModelMapper_lastBarSetRowChanged(this.h)
}
func (this *QHBarModelMapper) OnLastBarSetRowChanged(slot func()) {
	C.QHBarModelMapper_connect_lastBarSetRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBarModelMapper_lastBarSetRowChanged
func miqt_exec_callback_QHBarModelMapper_lastBarSetRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHBarModelMapper) FirstColumnChanged() {
	C.QHBarModelMapper_firstColumnChanged(this.h)
}
func (this *QHBarModelMapper) OnFirstColumnChanged(slot func()) {
	C.QHBarModelMapper_connect_firstColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBarModelMapper_firstColumnChanged
func miqt_exec_callback_QHBarModelMapper_firstColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHBarModelMapper) ColumnCountChanged() {
	C.QHBarModelMapper_columnCountChanged(this.h)
}
func (this *QHBarModelMapper) OnColumnCountChanged(slot func()) {
	C.QHBarModelMapper_connect_columnCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBarModelMapper_columnCountChanged
func miqt_exec_callback_QHBarModelMapper_columnCountChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QHBarModelMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHBarModelMapper_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHBarModelMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHBarModelMapper_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// First can only be called from a QHBarModelMapper that was directly constructed.
func (this *QHBarModelMapper) First() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHBarModelMapper_protectedbase_first(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetFirst can only be called from a QHBarModelMapper that was directly constructed.
func (this *QHBarModelMapper) SetFirst(first int) {

	var _dynamic_cast_ok C.bool = false
	C.QHBarModelMapper_protectedbase_setFirst(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(first))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Count can only be called from a QHBarModelMapper that was directly constructed.
func (this *QHBarModelMapper) Count() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHBarModelMapper_protectedbase_count(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetCount can only be called from a QHBarModelMapper that was directly constructed.
func (this *QHBarModelMapper) SetCount(count int) {

	var _dynamic_cast_ok C.bool = false
	C.QHBarModelMapper_protectedbase_setCount(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(count))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FirstBarSetSection can only be called from a QHBarModelMapper that was directly constructed.
func (this *QHBarModelMapper) FirstBarSetSection() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHBarModelMapper_protectedbase_firstBarSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetFirstBarSetSection can only be called from a QHBarModelMapper that was directly constructed.
func (this *QHBarModelMapper) SetFirstBarSetSection(firstBarSetSection int) {

	var _dynamic_cast_ok C.bool = false
	C.QHBarModelMapper_protectedbase_setFirstBarSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(firstBarSetSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// LastBarSetSection can only be called from a QHBarModelMapper that was directly constructed.
func (this *QHBarModelMapper) LastBarSetSection() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHBarModelMapper_protectedbase_lastBarSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetLastBarSetSection can only be called from a QHBarModelMapper that was directly constructed.
func (this *QHBarModelMapper) SetLastBarSetSection(lastBarSetSection int) {

	var _dynamic_cast_ok C.bool = false
	C.QHBarModelMapper_protectedbase_setLastBarSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(lastBarSetSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Orientation can only be called from a QHBarModelMapper that was directly constructed.
func (this *QHBarModelMapper) Orientation() qt6.Orientation {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (qt6.Orientation)(C.QHBarModelMapper_protectedbase_orientation(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetOrientation can only be called from a QHBarModelMapper that was directly constructed.
func (this *QHBarModelMapper) SetOrientation(orientation qt6.Orientation) {

	var _dynamic_cast_ok C.bool = false
	C.QHBarModelMapper_protectedbase_setOrientation(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(orientation))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QHBarModelMapper that was directly constructed.
func (this *QHBarModelMapper) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QHBarModelMapper_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QHBarModelMapper that was directly constructed.
func (this *QHBarModelMapper) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHBarModelMapper_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QHBarModelMapper that was directly constructed.
func (this *QHBarModelMapper) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHBarModelMapper_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QHBarModelMapper that was directly constructed.
func (this *QHBarModelMapper) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QHBarModelMapper_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QHBarModelMapper) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QHBarModelMapper_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QHBarModelMapper) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QHBarModelMapper_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBarModelMapper_event
func miqt_exec_callback_QHBarModelMapper_event(self *C.QHBarModelMapper, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QHBarModelMapper{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHBarModelMapper) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QHBarModelMapper_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QHBarModelMapper) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QHBarModelMapper_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBarModelMapper_eventFilter
func miqt_exec_callback_QHBarModelMapper_eventFilter(self *C.QHBarModelMapper, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QHBarModelMapper{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QHBarModelMapper) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QHBarModelMapper_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QHBarModelMapper) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QHBarModelMapper_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBarModelMapper_timerEvent
func miqt_exec_callback_QHBarModelMapper_timerEvent(self *C.QHBarModelMapper, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QHBarModelMapper{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QHBarModelMapper) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QHBarModelMapper_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QHBarModelMapper) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QHBarModelMapper_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBarModelMapper_childEvent
func miqt_exec_callback_QHBarModelMapper_childEvent(self *C.QHBarModelMapper, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QHBarModelMapper{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QHBarModelMapper) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QHBarModelMapper_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QHBarModelMapper) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QHBarModelMapper_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBarModelMapper_customEvent
func miqt_exec_callback_QHBarModelMapper_customEvent(self *C.QHBarModelMapper, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QHBarModelMapper{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QHBarModelMapper) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QHBarModelMapper_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QHBarModelMapper) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QHBarModelMapper_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBarModelMapper_connectNotify
func miqt_exec_callback_QHBarModelMapper_connectNotify(self *C.QHBarModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QHBarModelMapper{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QHBarModelMapper) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QHBarModelMapper_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QHBarModelMapper) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QHBarModelMapper_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBarModelMapper_disconnectNotify
func miqt_exec_callback_QHBarModelMapper_disconnectNotify(self *C.QHBarModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QHBarModelMapper{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QHBarModelMapper) Delete() {
	C.QHBarModelMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHBarModelMapper) GoGC() {
	runtime.SetFinalizer(this, func(this *QHBarModelMapper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
