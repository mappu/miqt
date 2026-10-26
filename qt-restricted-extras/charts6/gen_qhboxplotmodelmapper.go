package charts6

/*

#include "gen_qhboxplotmodelmapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QHBoxPlotModelMapper struct {
	h  *C.QHBoxPlotModelMapper
	gc *[1]unsafe.Pointer
	*QBoxPlotModelMapper
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QHBoxPlotModelMapper) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QBoxPlotModelMapper.miqtSetGC(gc)
}

func (this *QHBoxPlotModelMapper) cPointer() *C.QHBoxPlotModelMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHBoxPlotModelMapper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHBoxPlotModelMapper constructs the type using only CGO pointers.
func newQHBoxPlotModelMapper(h *C.QHBoxPlotModelMapper) *QHBoxPlotModelMapper {
	if h == nil {
		return nil
	}
	var outptr_QBoxPlotModelMapper *C.QBoxPlotModelMapper = nil
	C.QHBoxPlotModelMapper_virtbase(h, &outptr_QBoxPlotModelMapper)

	return &QHBoxPlotModelMapper{h: h,
		QBoxPlotModelMapper: newQBoxPlotModelMapper(outptr_QBoxPlotModelMapper)}
}

// UnsafeNewQHBoxPlotModelMapper constructs the type using only unsafe pointers.
func UnsafeNewQHBoxPlotModelMapper(h unsafe.Pointer) *QHBoxPlotModelMapper {
	return newQHBoxPlotModelMapper((*C.QHBoxPlotModelMapper)(h))
}

// NewQHBoxPlotModelMapper constructs a new QHBoxPlotModelMapper object.
func NewQHBoxPlotModelMapper() *QHBoxPlotModelMapper {

	return newQHBoxPlotModelMapper(C.QHBoxPlotModelMapper_new())
}

// NewQHBoxPlotModelMapper2 constructs a new QHBoxPlotModelMapper object.
func NewQHBoxPlotModelMapper2(parent *qt6.QObject) *QHBoxPlotModelMapper {
	defer runtime.KeepAlive(parent)

	return newQHBoxPlotModelMapper(C.QHBoxPlotModelMapper_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QHBoxPlotModelMapper) MetaObject() *qt6.QMetaObject {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QHBoxPlotModelMapper_metaObject(this.h)))
}

func (this *QHBoxPlotModelMapper) Metacast(param1 string) unsafe.Pointer {
	defer runtime.KeepAlive(this)
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QHBoxPlotModelMapper_metacast(this.h, param1_Cstring))
}

func QHBoxPlotModelMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHBoxPlotModelMapper_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHBoxPlotModelMapper) Model() *qt6.QAbstractItemModel {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQAbstractItemModel(unsafe.Pointer(C.QHBoxPlotModelMapper_model(this.h)))
}

func (this *QHBoxPlotModelMapper) SetModel(model *qt6.QAbstractItemModel) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(model)
	C.QHBoxPlotModelMapper_setModel(this.h, (*C.QAbstractItemModel)(model.UnsafePointer()))
}

func (this *QHBoxPlotModelMapper) Series() *QBoxPlotSeries {
	defer runtime.KeepAlive(this)
	return newQBoxPlotSeries(C.QHBoxPlotModelMapper_series(this.h))
}

func (this *QHBoxPlotModelMapper) SetSeries(series *QBoxPlotSeries) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(series)
	C.QHBoxPlotModelMapper_setSeries(this.h, series.cPointer())
}

func (this *QHBoxPlotModelMapper) FirstBoxSetRow() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QHBoxPlotModelMapper_firstBoxSetRow(this.h))
}

func (this *QHBoxPlotModelMapper) SetFirstBoxSetRow(firstBoxSetRow int) {
	defer runtime.KeepAlive(this)
	C.QHBoxPlotModelMapper_setFirstBoxSetRow(this.h, (C.int)(firstBoxSetRow))
}

func (this *QHBoxPlotModelMapper) LastBoxSetRow() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QHBoxPlotModelMapper_lastBoxSetRow(this.h))
}

func (this *QHBoxPlotModelMapper) SetLastBoxSetRow(lastBoxSetRow int) {
	defer runtime.KeepAlive(this)
	C.QHBoxPlotModelMapper_setLastBoxSetRow(this.h, (C.int)(lastBoxSetRow))
}

func (this *QHBoxPlotModelMapper) FirstColumn() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QHBoxPlotModelMapper_firstColumn(this.h))
}

func (this *QHBoxPlotModelMapper) SetFirstColumn(firstColumn int) {
	defer runtime.KeepAlive(this)
	C.QHBoxPlotModelMapper_setFirstColumn(this.h, (C.int)(firstColumn))
}

func (this *QHBoxPlotModelMapper) ColumnCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QHBoxPlotModelMapper_columnCount(this.h))
}

func (this *QHBoxPlotModelMapper) SetColumnCount(rowCount int) {
	defer runtime.KeepAlive(this)
	C.QHBoxPlotModelMapper_setColumnCount(this.h, (C.int)(rowCount))
}

func (this *QHBoxPlotModelMapper) SeriesReplaced() {
	defer runtime.KeepAlive(this)
	C.QHBoxPlotModelMapper_seriesReplaced(this.h)
}
func (this *QHBoxPlotModelMapper) OnSeriesReplaced(slot func()) {
	C.QHBoxPlotModelMapper_connect_seriesReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxPlotModelMapper_seriesReplaced
func miqt_exec_callback_QHBoxPlotModelMapper_seriesReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHBoxPlotModelMapper) ModelReplaced() {
	defer runtime.KeepAlive(this)
	C.QHBoxPlotModelMapper_modelReplaced(this.h)
}
func (this *QHBoxPlotModelMapper) OnModelReplaced(slot func()) {
	C.QHBoxPlotModelMapper_connect_modelReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxPlotModelMapper_modelReplaced
func miqt_exec_callback_QHBoxPlotModelMapper_modelReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHBoxPlotModelMapper) FirstBoxSetRowChanged() {
	defer runtime.KeepAlive(this)
	C.QHBoxPlotModelMapper_firstBoxSetRowChanged(this.h)
}
func (this *QHBoxPlotModelMapper) OnFirstBoxSetRowChanged(slot func()) {
	C.QHBoxPlotModelMapper_connect_firstBoxSetRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxPlotModelMapper_firstBoxSetRowChanged
func miqt_exec_callback_QHBoxPlotModelMapper_firstBoxSetRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHBoxPlotModelMapper) LastBoxSetRowChanged() {
	defer runtime.KeepAlive(this)
	C.QHBoxPlotModelMapper_lastBoxSetRowChanged(this.h)
}
func (this *QHBoxPlotModelMapper) OnLastBoxSetRowChanged(slot func()) {
	C.QHBoxPlotModelMapper_connect_lastBoxSetRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxPlotModelMapper_lastBoxSetRowChanged
func miqt_exec_callback_QHBoxPlotModelMapper_lastBoxSetRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHBoxPlotModelMapper) FirstColumnChanged() {
	defer runtime.KeepAlive(this)
	C.QHBoxPlotModelMapper_firstColumnChanged(this.h)
}
func (this *QHBoxPlotModelMapper) OnFirstColumnChanged(slot func()) {
	C.QHBoxPlotModelMapper_connect_firstColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxPlotModelMapper_firstColumnChanged
func miqt_exec_callback_QHBoxPlotModelMapper_firstColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHBoxPlotModelMapper) ColumnCountChanged() {
	defer runtime.KeepAlive(this)
	C.QHBoxPlotModelMapper_columnCountChanged(this.h)
}
func (this *QHBoxPlotModelMapper) OnColumnCountChanged(slot func()) {
	C.QHBoxPlotModelMapper_connect_columnCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHBoxPlotModelMapper_columnCountChanged
func miqt_exec_callback_QHBoxPlotModelMapper_columnCountChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QHBoxPlotModelMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHBoxPlotModelMapper_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHBoxPlotModelMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHBoxPlotModelMapper_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// First can only be called from a QHBoxPlotModelMapper that was directly constructed.
func (this *QHBoxPlotModelMapper) First() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHBoxPlotModelMapper_protectedbase_first(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetFirst can only be called from a QHBoxPlotModelMapper that was directly constructed.
func (this *QHBoxPlotModelMapper) SetFirst(first int) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QHBoxPlotModelMapper_protectedbase_setFirst(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(first))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Count can only be called from a QHBoxPlotModelMapper that was directly constructed.
func (this *QHBoxPlotModelMapper) Count() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHBoxPlotModelMapper_protectedbase_count(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetCount can only be called from a QHBoxPlotModelMapper that was directly constructed.
func (this *QHBoxPlotModelMapper) SetCount(count int) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QHBoxPlotModelMapper_protectedbase_setCount(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(count))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FirstBoxSetSection can only be called from a QHBoxPlotModelMapper that was directly constructed.
func (this *QHBoxPlotModelMapper) FirstBoxSetSection() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHBoxPlotModelMapper_protectedbase_firstBoxSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetFirstBoxSetSection can only be called from a QHBoxPlotModelMapper that was directly constructed.
func (this *QHBoxPlotModelMapper) SetFirstBoxSetSection(firstBoxSetSection int) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QHBoxPlotModelMapper_protectedbase_setFirstBoxSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(firstBoxSetSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// LastBoxSetSection can only be called from a QHBoxPlotModelMapper that was directly constructed.
func (this *QHBoxPlotModelMapper) LastBoxSetSection() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHBoxPlotModelMapper_protectedbase_lastBoxSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetLastBoxSetSection can only be called from a QHBoxPlotModelMapper that was directly constructed.
func (this *QHBoxPlotModelMapper) SetLastBoxSetSection(lastBoxSetSection int) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QHBoxPlotModelMapper_protectedbase_setLastBoxSetSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(lastBoxSetSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Orientation can only be called from a QHBoxPlotModelMapper that was directly constructed.
func (this *QHBoxPlotModelMapper) Orientation() qt6.Orientation {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (qt6.Orientation)(C.QHBoxPlotModelMapper_protectedbase_orientation(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetOrientation can only be called from a QHBoxPlotModelMapper that was directly constructed.
func (this *QHBoxPlotModelMapper) SetOrientation(orientation qt6.Orientation) {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	C.QHBoxPlotModelMapper_protectedbase_setOrientation(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(orientation))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QHBoxPlotModelMapper that was directly constructed.
func (this *QHBoxPlotModelMapper) Sender() *qt6.QObject {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QHBoxPlotModelMapper_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QHBoxPlotModelMapper that was directly constructed.
func (this *QHBoxPlotModelMapper) SenderSignalIndex() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHBoxPlotModelMapper_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QHBoxPlotModelMapper that was directly constructed.
func (this *QHBoxPlotModelMapper) Receivers(signal string) int {
	defer runtime.KeepAlive(this)
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHBoxPlotModelMapper_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QHBoxPlotModelMapper that was directly constructed.
func (this *QHBoxPlotModelMapper) IsSignalConnected(signal *qt6.QMetaMethod) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QHBoxPlotModelMapper_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QHBoxPlotModelMapper) callVirtualBase_Event(event *qt6.QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	return (bool)(C.QHBoxPlotModelMapper_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QHBoxPlotModelMapper) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QHBoxPlotModelMapper_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxPlotModelMapper_event
func miqt_exec_callback_QHBoxPlotModelMapper_event(self *C.QHBoxPlotModelMapper, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QHBoxPlotModelMapper{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHBoxPlotModelMapper) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(watched)
	defer runtime.KeepAlive(event)

	return (bool)(C.QHBoxPlotModelMapper_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QHBoxPlotModelMapper) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QHBoxPlotModelMapper_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxPlotModelMapper_eventFilter
func miqt_exec_callback_QHBoxPlotModelMapper_eventFilter(self *C.QHBoxPlotModelMapper, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QHBoxPlotModelMapper{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QHBoxPlotModelMapper) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QHBoxPlotModelMapper_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QHBoxPlotModelMapper) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QHBoxPlotModelMapper_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxPlotModelMapper_timerEvent
func miqt_exec_callback_QHBoxPlotModelMapper_timerEvent(self *C.QHBoxPlotModelMapper, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QHBoxPlotModelMapper{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QHBoxPlotModelMapper) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QHBoxPlotModelMapper_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QHBoxPlotModelMapper) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QHBoxPlotModelMapper_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxPlotModelMapper_childEvent
func miqt_exec_callback_QHBoxPlotModelMapper_childEvent(self *C.QHBoxPlotModelMapper, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QHBoxPlotModelMapper{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QHBoxPlotModelMapper) callVirtualBase_CustomEvent(event *qt6.QEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QHBoxPlotModelMapper_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QHBoxPlotModelMapper) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QHBoxPlotModelMapper_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxPlotModelMapper_customEvent
func miqt_exec_callback_QHBoxPlotModelMapper_customEvent(self *C.QHBoxPlotModelMapper, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QHBoxPlotModelMapper{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QHBoxPlotModelMapper) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QHBoxPlotModelMapper_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QHBoxPlotModelMapper) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QHBoxPlotModelMapper_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxPlotModelMapper_connectNotify
func miqt_exec_callback_QHBoxPlotModelMapper_connectNotify(self *C.QHBoxPlotModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QHBoxPlotModelMapper{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QHBoxPlotModelMapper) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QHBoxPlotModelMapper_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QHBoxPlotModelMapper) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QHBoxPlotModelMapper_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxPlotModelMapper_disconnectNotify
func miqt_exec_callback_QHBoxPlotModelMapper_disconnectNotify(self *C.QHBoxPlotModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QHBoxPlotModelMapper{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QHBoxPlotModelMapper) Delete() {
	C.QHBoxPlotModelMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QHBoxPlotModelMapper) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QHBoxPlotModelMapper_delete((*C.QHBoxPlotModelMapper)(gc[0]))
	})
	this.miqtSetGC(gc)
}
