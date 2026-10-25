package charts6

/*

#include "gen_qvbarmodelmapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QVBarModelMapper struct {
	h  *C.QVBarModelMapper
	gc *[1]unsafe.Pointer
	*QBarModelMapper
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QVBarModelMapper) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QBarModelMapper.miqtSetGC(gc)
}

func (this *QVBarModelMapper) cPointer() *C.QVBarModelMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVBarModelMapper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVBarModelMapper constructs the type using only CGO pointers.
func newQVBarModelMapper(h *C.QVBarModelMapper) *QVBarModelMapper {
	if h == nil {
		return nil
	}
	var outptr_QBarModelMapper *C.QBarModelMapper = nil
	C.QVBarModelMapper_virtbase(h, &outptr_QBarModelMapper)

	return &QVBarModelMapper{h: h,
		QBarModelMapper: newQBarModelMapper(outptr_QBarModelMapper)}
}

// UnsafeNewQVBarModelMapper constructs the type using only unsafe pointers.
func UnsafeNewQVBarModelMapper(h unsafe.Pointer) *QVBarModelMapper {
	return newQVBarModelMapper((*C.QVBarModelMapper)(h))
}

// NewQVBarModelMapper constructs a new QVBarModelMapper object.
func NewQVBarModelMapper() *QVBarModelMapper {

	return newQVBarModelMapper(C.QVBarModelMapper_new())
}

// NewQVBarModelMapper2 constructs a new QVBarModelMapper object.
func NewQVBarModelMapper2(parent *qt6.QObject) *QVBarModelMapper {
	defer runtime.KeepAlive(parent)

	return newQVBarModelMapper(C.QVBarModelMapper_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QVBarModelMapper) MetaObject() *qt6.QMetaObject {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QVBarModelMapper_metaObject(this.h)))
}

func (this *QVBarModelMapper) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVBarModelMapper_metacast(this.h, param1_Cstring))
}

func QVBarModelMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVBarModelMapper_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVBarModelMapper) Model() *qt6.QAbstractItemModel {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQAbstractItemModel(unsafe.Pointer(C.QVBarModelMapper_model(this.h)))
}

func (this *QVBarModelMapper) SetModel(model *qt6.QAbstractItemModel) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(model)
	C.QVBarModelMapper_setModel(this.h, (*C.QAbstractItemModel)(model.UnsafePointer()))
}

func (this *QVBarModelMapper) Series() *QAbstractBarSeries {
	defer runtime.KeepAlive(this)
	return newQAbstractBarSeries(C.QVBarModelMapper_series(this.h))
}

func (this *QVBarModelMapper) SetSeries(series *QAbstractBarSeries) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(series)
	C.QVBarModelMapper_setSeries(this.h, series.cPointer())
}

func (this *QVBarModelMapper) FirstBarSetColumn() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QVBarModelMapper_firstBarSetColumn(this.h))
}

func (this *QVBarModelMapper) SetFirstBarSetColumn(firstBarSetColumn int) {
	defer runtime.KeepAlive(this)
	C.QVBarModelMapper_setFirstBarSetColumn(this.h, (C.int)(firstBarSetColumn))
}

func (this *QVBarModelMapper) LastBarSetColumn() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QVBarModelMapper_lastBarSetColumn(this.h))
}

func (this *QVBarModelMapper) SetLastBarSetColumn(lastBarSetColumn int) {
	defer runtime.KeepAlive(this)
	C.QVBarModelMapper_setLastBarSetColumn(this.h, (C.int)(lastBarSetColumn))
}

func (this *QVBarModelMapper) FirstRow() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QVBarModelMapper_firstRow(this.h))
}

func (this *QVBarModelMapper) SetFirstRow(firstRow int) {
	defer runtime.KeepAlive(this)
	C.QVBarModelMapper_setFirstRow(this.h, (C.int)(firstRow))
}

func (this *QVBarModelMapper) RowCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QVBarModelMapper_rowCount(this.h))
}

func (this *QVBarModelMapper) SetRowCount(rowCount int) {
	defer runtime.KeepAlive(this)
	C.QVBarModelMapper_setRowCount(this.h, (C.int)(rowCount))
}

func (this *QVBarModelMapper) SeriesReplaced() {
	defer runtime.KeepAlive(this)
	C.QVBarModelMapper_seriesReplaced(this.h)
}
func (this *QVBarModelMapper) OnSeriesReplaced(slot func()) {
	C.QVBarModelMapper_connect_seriesReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBarModelMapper_seriesReplaced
func miqt_exec_callback_QVBarModelMapper_seriesReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVBarModelMapper) ModelReplaced() {
	defer runtime.KeepAlive(this)
	C.QVBarModelMapper_modelReplaced(this.h)
}
func (this *QVBarModelMapper) OnModelReplaced(slot func()) {
	C.QVBarModelMapper_connect_modelReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBarModelMapper_modelReplaced
func miqt_exec_callback_QVBarModelMapper_modelReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVBarModelMapper) FirstBarSetColumnChanged() {
	defer runtime.KeepAlive(this)
	C.QVBarModelMapper_firstBarSetColumnChanged(this.h)
}
func (this *QVBarModelMapper) OnFirstBarSetColumnChanged(slot func()) {
	C.QVBarModelMapper_connect_firstBarSetColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBarModelMapper_firstBarSetColumnChanged
func miqt_exec_callback_QVBarModelMapper_firstBarSetColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVBarModelMapper) LastBarSetColumnChanged() {
	defer runtime.KeepAlive(this)
	C.QVBarModelMapper_lastBarSetColumnChanged(this.h)
}
func (this *QVBarModelMapper) OnLastBarSetColumnChanged(slot func()) {
	C.QVBarModelMapper_connect_lastBarSetColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBarModelMapper_lastBarSetColumnChanged
func miqt_exec_callback_QVBarModelMapper_lastBarSetColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVBarModelMapper) FirstRowChanged() {
	defer runtime.KeepAlive(this)
	C.QVBarModelMapper_firstRowChanged(this.h)
}
func (this *QVBarModelMapper) OnFirstRowChanged(slot func()) {
	C.QVBarModelMapper_connect_firstRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBarModelMapper_firstRowChanged
func miqt_exec_callback_QVBarModelMapper_firstRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QVBarModelMapper) RowCountChanged() {
	defer runtime.KeepAlive(this)
	C.QVBarModelMapper_rowCountChanged(this.h)
}
func (this *QVBarModelMapper) OnRowCountChanged(slot func()) {
	C.QVBarModelMapper_connect_rowCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVBarModelMapper_rowCountChanged
func miqt_exec_callback_QVBarModelMapper_rowCountChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QVBarModelMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVBarModelMapper_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVBarModelMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVBarModelMapper_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// First can only be called from a QVBarModelMapper that was directly constructed.
func (this *QVBarModelMapper) First() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVBarModelMapper_protectedbase_first(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetFirst can only be called from a QVBarModelMapper that was directly constructed.
func (this *QVBarModelMapper) SetFirst(first int) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QVBarModelMapper_protectedbase_setFirst(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(first))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Count can only be called from a QVBarModelMapper that was directly constructed.
func (this *QVBarModelMapper) Count() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVBarModelMapper_protectedbase_count(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetCount can only be called from a QVBarModelMapper that was directly constructed.
func (this *QVBarModelMapper) SetCount(count int) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QVBarModelMapper_protectedbase_setCount(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(count))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FirstBarSetSection can only be called from a QVBarModelMapper that was directly constructed.
func (this *QVBarModelMapper) FirstBarSetSection() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVBarModelMapper_protectedbase_firstBarSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetFirstBarSetSection can only be called from a QVBarModelMapper that was directly constructed.
func (this *QVBarModelMapper) SetFirstBarSetSection(firstBarSetSection int) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QVBarModelMapper_protectedbase_setFirstBarSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(firstBarSetSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// LastBarSetSection can only be called from a QVBarModelMapper that was directly constructed.
func (this *QVBarModelMapper) LastBarSetSection() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVBarModelMapper_protectedbase_lastBarSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetLastBarSetSection can only be called from a QVBarModelMapper that was directly constructed.
func (this *QVBarModelMapper) SetLastBarSetSection(lastBarSetSection int) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QVBarModelMapper_protectedbase_setLastBarSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(lastBarSetSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Orientation can only be called from a QVBarModelMapper that was directly constructed.
func (this *QVBarModelMapper) Orientation() qt6.Orientation {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (qt6.Orientation)(C.QVBarModelMapper_protectedbase_orientation(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetOrientation can only be called from a QVBarModelMapper that was directly constructed.
func (this *QVBarModelMapper) SetOrientation(orientation qt6.Orientation) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QVBarModelMapper_protectedbase_setOrientation(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(orientation))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QVBarModelMapper that was directly constructed.
func (this *QVBarModelMapper) Sender() *qt6.QObject {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QVBarModelMapper_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QVBarModelMapper that was directly constructed.
func (this *QVBarModelMapper) SenderSignalIndex() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVBarModelMapper_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QVBarModelMapper that was directly constructed.
func (this *QVBarModelMapper) Receivers(signal string) int {
	defer runtime.KeepAlive(this)
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QVBarModelMapper_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QVBarModelMapper that was directly constructed.
func (this *QVBarModelMapper) IsSignalConnected(signal *qt6.QMetaMethod) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QVBarModelMapper_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QVBarModelMapper) callVirtualBase_Event(event *qt6.QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	return (bool)(C.QVBarModelMapper_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QVBarModelMapper) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QVBarModelMapper_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBarModelMapper_event
func miqt_exec_callback_QVBarModelMapper_event(self *C.QVBarModelMapper, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QVBarModelMapper{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QVBarModelMapper) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(watched)
	defer runtime.KeepAlive(event)

	return (bool)(C.QVBarModelMapper_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QVBarModelMapper) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QVBarModelMapper_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBarModelMapper_eventFilter
func miqt_exec_callback_QVBarModelMapper_eventFilter(self *C.QVBarModelMapper, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QVBarModelMapper{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QVBarModelMapper) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QVBarModelMapper_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QVBarModelMapper) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QVBarModelMapper_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBarModelMapper_timerEvent
func miqt_exec_callback_QVBarModelMapper_timerEvent(self *C.QVBarModelMapper, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QVBarModelMapper{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QVBarModelMapper) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QVBarModelMapper_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QVBarModelMapper) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QVBarModelMapper_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBarModelMapper_childEvent
func miqt_exec_callback_QVBarModelMapper_childEvent(self *C.QVBarModelMapper, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QVBarModelMapper{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QVBarModelMapper) callVirtualBase_CustomEvent(event *qt6.QEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QVBarModelMapper_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QVBarModelMapper) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QVBarModelMapper_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBarModelMapper_customEvent
func miqt_exec_callback_QVBarModelMapper_customEvent(self *C.QVBarModelMapper, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QVBarModelMapper{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QVBarModelMapper) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QVBarModelMapper_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QVBarModelMapper) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QVBarModelMapper_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBarModelMapper_connectNotify
func miqt_exec_callback_QVBarModelMapper_connectNotify(self *C.QVBarModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QVBarModelMapper{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QVBarModelMapper) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QVBarModelMapper_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QVBarModelMapper) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QVBarModelMapper_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBarModelMapper_disconnectNotify
func miqt_exec_callback_QVBarModelMapper_disconnectNotify(self *C.QVBarModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QVBarModelMapper{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QVBarModelMapper) Delete() {
	C.QVBarModelMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QVBarModelMapper) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QVBarModelMapper_delete((*C.QVBarModelMapper)(gc[0]))
	})
	this.miqtSetGC(gc)
}
