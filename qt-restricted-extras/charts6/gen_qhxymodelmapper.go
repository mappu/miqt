package charts6

/*

#include "gen_qhxymodelmapper.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QHXYModelMapper struct {
	h *C.QHXYModelMapper
	*QXYModelMapper
}

func (this *QHXYModelMapper) cPointer() *C.QHXYModelMapper {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHXYModelMapper) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHXYModelMapper constructs the type using only CGO pointers.
func newQHXYModelMapper(h *C.QHXYModelMapper) *QHXYModelMapper {
	if h == nil {
		return nil
	}
	var outptr_QXYModelMapper *C.QXYModelMapper = nil
	C.QHXYModelMapper_virtbase(h, &outptr_QXYModelMapper)

	return &QHXYModelMapper{h: h,
		QXYModelMapper: newQXYModelMapper(outptr_QXYModelMapper)}
}

// UnsafeNewQHXYModelMapper constructs the type using only unsafe pointers.
func UnsafeNewQHXYModelMapper(h unsafe.Pointer) *QHXYModelMapper {
	return newQHXYModelMapper((*C.QHXYModelMapper)(h))
}

// NewQHXYModelMapper constructs a new QHXYModelMapper object.
func NewQHXYModelMapper() *QHXYModelMapper {

	return newQHXYModelMapper(C.QHXYModelMapper_new())
}

// NewQHXYModelMapper2 constructs a new QHXYModelMapper object.
func NewQHXYModelMapper2(parent *qt6.QObject) *QHXYModelMapper {

	return newQHXYModelMapper(C.QHXYModelMapper_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QHXYModelMapper) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QHXYModelMapper_metaObject(this.h)))
}

func (this *QHXYModelMapper) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QHXYModelMapper_metacast(this.h, param1_Cstring))
}

func QHXYModelMapper_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHXYModelMapper_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHXYModelMapper) Model() *qt6.QAbstractItemModel {
	return qt6.UnsafeNewQAbstractItemModel(unsafe.Pointer(C.QHXYModelMapper_model(this.h)))
}

func (this *QHXYModelMapper) SetModel(model *qt6.QAbstractItemModel) {
	C.QHXYModelMapper_setModel(this.h, (*C.QAbstractItemModel)(model.UnsafePointer()))
}

func (this *QHXYModelMapper) Series() *QXYSeries {
	return newQXYSeries(C.QHXYModelMapper_series(this.h))
}

func (this *QHXYModelMapper) SetSeries(series *QXYSeries) {
	C.QHXYModelMapper_setSeries(this.h, series.cPointer())
}

func (this *QHXYModelMapper) XRow() int {
	return (int)(C.QHXYModelMapper_xRow(this.h))
}

func (this *QHXYModelMapper) SetXRow(xRow int) {
	C.QHXYModelMapper_setXRow(this.h, (C.int)(xRow))
}

func (this *QHXYModelMapper) YRow() int {
	return (int)(C.QHXYModelMapper_yRow(this.h))
}

func (this *QHXYModelMapper) SetYRow(yRow int) {
	C.QHXYModelMapper_setYRow(this.h, (C.int)(yRow))
}

func (this *QHXYModelMapper) FirstColumn() int {
	return (int)(C.QHXYModelMapper_firstColumn(this.h))
}

func (this *QHXYModelMapper) SetFirstColumn(firstColumn int) {
	C.QHXYModelMapper_setFirstColumn(this.h, (C.int)(firstColumn))
}

func (this *QHXYModelMapper) ColumnCount() int {
	return (int)(C.QHXYModelMapper_columnCount(this.h))
}

func (this *QHXYModelMapper) SetColumnCount(columnCount int) {
	C.QHXYModelMapper_setColumnCount(this.h, (C.int)(columnCount))
}

func (this *QHXYModelMapper) SeriesReplaced() {
	C.QHXYModelMapper_seriesReplaced(this.h)
}
func (this *QHXYModelMapper) OnSeriesReplaced(slot func()) {
	C.QHXYModelMapper_connect_seriesReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHXYModelMapper_seriesReplaced
func miqt_exec_callback_QHXYModelMapper_seriesReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHXYModelMapper) ModelReplaced() {
	C.QHXYModelMapper_modelReplaced(this.h)
}
func (this *QHXYModelMapper) OnModelReplaced(slot func()) {
	C.QHXYModelMapper_connect_modelReplaced(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHXYModelMapper_modelReplaced
func miqt_exec_callback_QHXYModelMapper_modelReplaced(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHXYModelMapper) XRowChanged() {
	C.QHXYModelMapper_xRowChanged(this.h)
}
func (this *QHXYModelMapper) OnXRowChanged(slot func()) {
	C.QHXYModelMapper_connect_xRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHXYModelMapper_xRowChanged
func miqt_exec_callback_QHXYModelMapper_xRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHXYModelMapper) YRowChanged() {
	C.QHXYModelMapper_yRowChanged(this.h)
}
func (this *QHXYModelMapper) OnYRowChanged(slot func()) {
	C.QHXYModelMapper_connect_yRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHXYModelMapper_yRowChanged
func miqt_exec_callback_QHXYModelMapper_yRowChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHXYModelMapper) FirstColumnChanged() {
	C.QHXYModelMapper_firstColumnChanged(this.h)
}
func (this *QHXYModelMapper) OnFirstColumnChanged(slot func()) {
	C.QHXYModelMapper_connect_firstColumnChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHXYModelMapper_firstColumnChanged
func miqt_exec_callback_QHXYModelMapper_firstColumnChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHXYModelMapper) ColumnCountChanged() {
	C.QHXYModelMapper_columnCountChanged(this.h)
}
func (this *QHXYModelMapper) OnColumnCountChanged(slot func()) {
	C.QHXYModelMapper_connect_columnCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHXYModelMapper_columnCountChanged
func miqt_exec_callback_QHXYModelMapper_columnCountChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QHXYModelMapper_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHXYModelMapper_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHXYModelMapper_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHXYModelMapper_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// First can only be called from a QHXYModelMapper that was directly constructed.
func (this *QHXYModelMapper) First() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHXYModelMapper_protectedbase_first(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetFirst can only be called from a QHXYModelMapper that was directly constructed.
func (this *QHXYModelMapper) SetFirst(first int) {

	var _dynamic_cast_ok C.bool = false
	C.QHXYModelMapper_protectedbase_setFirst(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(first))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Count can only be called from a QHXYModelMapper that was directly constructed.
func (this *QHXYModelMapper) Count() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHXYModelMapper_protectedbase_count(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetCount can only be called from a QHXYModelMapper that was directly constructed.
func (this *QHXYModelMapper) SetCount(count int) {

	var _dynamic_cast_ok C.bool = false
	C.QHXYModelMapper_protectedbase_setCount(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(count))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Orientation can only be called from a QHXYModelMapper that was directly constructed.
func (this *QHXYModelMapper) Orientation() qt6.Orientation {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (qt6.Orientation)(C.QHXYModelMapper_protectedbase_orientation(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetOrientation can only be called from a QHXYModelMapper that was directly constructed.
func (this *QHXYModelMapper) SetOrientation(orientation qt6.Orientation) {

	var _dynamic_cast_ok C.bool = false
	C.QHXYModelMapper_protectedbase_setOrientation(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(orientation))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// XSection can only be called from a QHXYModelMapper that was directly constructed.
func (this *QHXYModelMapper) XSection() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHXYModelMapper_protectedbase_xSection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetXSection can only be called from a QHXYModelMapper that was directly constructed.
func (this *QHXYModelMapper) SetXSection(xSection int) {

	var _dynamic_cast_ok C.bool = false
	C.QHXYModelMapper_protectedbase_setXSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(xSection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// YSection can only be called from a QHXYModelMapper that was directly constructed.
func (this *QHXYModelMapper) YSection() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHXYModelMapper_protectedbase_ySection(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetYSection can only be called from a QHXYModelMapper that was directly constructed.
func (this *QHXYModelMapper) SetYSection(ySection int) {

	var _dynamic_cast_ok C.bool = false
	C.QHXYModelMapper_protectedbase_setYSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(ySection))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QHXYModelMapper that was directly constructed.
func (this *QHXYModelMapper) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QHXYModelMapper_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QHXYModelMapper that was directly constructed.
func (this *QHXYModelMapper) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHXYModelMapper_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QHXYModelMapper that was directly constructed.
func (this *QHXYModelMapper) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHXYModelMapper_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QHXYModelMapper that was directly constructed.
func (this *QHXYModelMapper) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QHXYModelMapper_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QHXYModelMapper) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QHXYModelMapper_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QHXYModelMapper) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QHXYModelMapper_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHXYModelMapper_event
func miqt_exec_callback_QHXYModelMapper_event(self *C.QHXYModelMapper, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QHXYModelMapper{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHXYModelMapper) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QHXYModelMapper_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QHXYModelMapper) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QHXYModelMapper_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHXYModelMapper_eventFilter
func miqt_exec_callback_QHXYModelMapper_eventFilter(self *C.QHXYModelMapper, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QHXYModelMapper{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QHXYModelMapper) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QHXYModelMapper_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QHXYModelMapper) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QHXYModelMapper_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHXYModelMapper_timerEvent
func miqt_exec_callback_QHXYModelMapper_timerEvent(self *C.QHXYModelMapper, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QHXYModelMapper{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QHXYModelMapper) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QHXYModelMapper_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QHXYModelMapper) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QHXYModelMapper_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHXYModelMapper_childEvent
func miqt_exec_callback_QHXYModelMapper_childEvent(self *C.QHXYModelMapper, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QHXYModelMapper{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QHXYModelMapper) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QHXYModelMapper_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QHXYModelMapper) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QHXYModelMapper_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHXYModelMapper_customEvent
func miqt_exec_callback_QHXYModelMapper_customEvent(self *C.QHXYModelMapper, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QHXYModelMapper{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QHXYModelMapper) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QHXYModelMapper_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QHXYModelMapper) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QHXYModelMapper_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHXYModelMapper_connectNotify
func miqt_exec_callback_QHXYModelMapper_connectNotify(self *C.QHXYModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QHXYModelMapper{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QHXYModelMapper) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QHXYModelMapper_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QHXYModelMapper) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QHXYModelMapper_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHXYModelMapper_disconnectNotify
func miqt_exec_callback_QHXYModelMapper_disconnectNotify(self *C.QHXYModelMapper, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QHXYModelMapper{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QHXYModelMapper) Delete() {
	C.QHXYModelMapper_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHXYModelMapper) GoGC() {
	runtime.SetFinalizer(this, func(this *QHXYModelMapper) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
