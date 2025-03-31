package charts6

/*

#include "gen_qcategoryaxis.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCategoryAxis__AxisLabelsPosition int

const (
	QCategoryAxis__AxisLabelsPositionCenter  QCategoryAxis__AxisLabelsPosition = 0
	QCategoryAxis__AxisLabelsPositionOnValue QCategoryAxis__AxisLabelsPosition = 1
)

type QCategoryAxis struct {
	h *C.QCategoryAxis
	*QValueAxis
}

func (this *QCategoryAxis) cPointer() *C.QCategoryAxis {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCategoryAxis) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCategoryAxis constructs the type using only CGO pointers.
func newQCategoryAxis(h *C.QCategoryAxis) *QCategoryAxis {
	if h == nil {
		return nil
	}
	var outptr_QValueAxis *C.QValueAxis = nil
	C.QCategoryAxis_virtbase(h, &outptr_QValueAxis)

	return &QCategoryAxis{h: h,
		QValueAxis: newQValueAxis(outptr_QValueAxis)}
}

// UnsafeNewQCategoryAxis constructs the type using only unsafe pointers.
func UnsafeNewQCategoryAxis(h unsafe.Pointer) *QCategoryAxis {
	return newQCategoryAxis((*C.QCategoryAxis)(h))
}

// NewQCategoryAxis constructs a new QCategoryAxis object.
func NewQCategoryAxis() *QCategoryAxis {

	return newQCategoryAxis(C.QCategoryAxis_new())
}

// NewQCategoryAxis2 constructs a new QCategoryAxis object.
func NewQCategoryAxis2(parent *qt6.QObject) *QCategoryAxis {

	return newQCategoryAxis(C.QCategoryAxis_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QCategoryAxis) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QCategoryAxis_metaObject(this.h)))
}

func (this *QCategoryAxis) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCategoryAxis_metacast(this.h, param1_Cstring))
}

func QCategoryAxis_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCategoryAxis_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCategoryAxis) Type() QAbstractAxis__AxisType {
	return (QAbstractAxis__AxisType)(C.QCategoryAxis_type(this.h))
}

func (this *QCategoryAxis) Append(label string, categoryEndValue float64) {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	C.QCategoryAxis_append(this.h, label_ms, (C.double)(categoryEndValue))
}

func (this *QCategoryAxis) Remove(label string) {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	C.QCategoryAxis_remove(this.h, label_ms)
}

func (this *QCategoryAxis) ReplaceLabel(oldLabel string, newLabel string) {
	oldLabel_ms := C.struct_miqt_string{}
	oldLabel_ms.data = C.CString(oldLabel)
	oldLabel_ms.len = C.size_t(len(oldLabel))
	defer C.free(unsafe.Pointer(oldLabel_ms.data))
	newLabel_ms := C.struct_miqt_string{}
	newLabel_ms.data = C.CString(newLabel)
	newLabel_ms.len = C.size_t(len(newLabel))
	defer C.free(unsafe.Pointer(newLabel_ms.data))
	C.QCategoryAxis_replaceLabel(this.h, oldLabel_ms, newLabel_ms)
}

func (this *QCategoryAxis) StartValue() float64 {
	return (float64)(C.QCategoryAxis_startValue(this.h))
}

func (this *QCategoryAxis) SetStartValue(min float64) {
	C.QCategoryAxis_setStartValue(this.h, (C.double)(min))
}

func (this *QCategoryAxis) EndValue(categoryLabel string) float64 {
	categoryLabel_ms := C.struct_miqt_string{}
	categoryLabel_ms.data = C.CString(categoryLabel)
	categoryLabel_ms.len = C.size_t(len(categoryLabel))
	defer C.free(unsafe.Pointer(categoryLabel_ms.data))
	return (float64)(C.QCategoryAxis_endValue(this.h, categoryLabel_ms))
}

func (this *QCategoryAxis) CategoriesLabels() []string {
	var _ma C.struct_miqt_array = C.QCategoryAxis_categoriesLabels(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QCategoryAxis) Count() int {
	return (int)(C.QCategoryAxis_count(this.h))
}

func (this *QCategoryAxis) LabelsPosition() QCategoryAxis__AxisLabelsPosition {
	return (QCategoryAxis__AxisLabelsPosition)(C.QCategoryAxis_labelsPosition(this.h))
}

func (this *QCategoryAxis) SetLabelsPosition(position QCategoryAxis__AxisLabelsPosition) {
	C.QCategoryAxis_setLabelsPosition(this.h, (C.int)(position))
}

func (this *QCategoryAxis) CategoriesChanged() {
	C.QCategoryAxis_categoriesChanged(this.h)
}
func (this *QCategoryAxis) OnCategoriesChanged(slot func()) {
	C.QCategoryAxis_connect_categoriesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCategoryAxis_categoriesChanged
func miqt_exec_callback_QCategoryAxis_categoriesChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCategoryAxis) LabelsPositionChanged(position QCategoryAxis__AxisLabelsPosition) {
	C.QCategoryAxis_labelsPositionChanged(this.h, (C.int)(position))
}
func (this *QCategoryAxis) OnLabelsPositionChanged(slot func(position QCategoryAxis__AxisLabelsPosition)) {
	C.QCategoryAxis_connect_labelsPositionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCategoryAxis_labelsPositionChanged
func miqt_exec_callback_QCategoryAxis_labelsPositionChanged(cb C.intptr_t, position C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position QCategoryAxis__AxisLabelsPosition))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QCategoryAxis__AxisLabelsPosition)(position)

	gofunc(slotval1)
}

func QCategoryAxis_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCategoryAxis_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCategoryAxis_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCategoryAxis_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCategoryAxis) StartValue1(categoryLabel string) float64 {
	categoryLabel_ms := C.struct_miqt_string{}
	categoryLabel_ms.data = C.CString(categoryLabel)
	categoryLabel_ms.len = C.size_t(len(categoryLabel))
	defer C.free(unsafe.Pointer(categoryLabel_ms.data))
	return (float64)(C.QCategoryAxis_startValue1(this.h, categoryLabel_ms))
}

// Sender can only be called from a QCategoryAxis that was directly constructed.
func (this *QCategoryAxis) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QCategoryAxis_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QCategoryAxis that was directly constructed.
func (this *QCategoryAxis) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCategoryAxis_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QCategoryAxis that was directly constructed.
func (this *QCategoryAxis) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCategoryAxis_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QCategoryAxis that was directly constructed.
func (this *QCategoryAxis) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QCategoryAxis_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QCategoryAxis) callVirtualBase_Type() QAbstractAxis__AxisType {

	return (QAbstractAxis__AxisType)(C.QCategoryAxis_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QCategoryAxis) OnType(slot func(super func() QAbstractAxis__AxisType) QAbstractAxis__AxisType) {
	ok := C.QCategoryAxis_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCategoryAxis_type
func miqt_exec_callback_QCategoryAxis_type(self *C.QCategoryAxis, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractAxis__AxisType) QAbstractAxis__AxisType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCategoryAxis{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QCategoryAxis) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QCategoryAxis_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCategoryAxis) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QCategoryAxis_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCategoryAxis_event
func miqt_exec_callback_QCategoryAxis_event(self *C.QCategoryAxis, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCategoryAxis{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCategoryAxis) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QCategoryAxis_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCategoryAxis) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QCategoryAxis_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCategoryAxis_eventFilter
func miqt_exec_callback_QCategoryAxis_eventFilter(self *C.QCategoryAxis, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCategoryAxis{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QCategoryAxis) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QCategoryAxis_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QCategoryAxis) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QCategoryAxis_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCategoryAxis_timerEvent
func miqt_exec_callback_QCategoryAxis_timerEvent(self *C.QCategoryAxis, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QCategoryAxis{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QCategoryAxis) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QCategoryAxis_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QCategoryAxis) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QCategoryAxis_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCategoryAxis_childEvent
func miqt_exec_callback_QCategoryAxis_childEvent(self *C.QCategoryAxis, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QCategoryAxis{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QCategoryAxis) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QCategoryAxis_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QCategoryAxis) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QCategoryAxis_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCategoryAxis_customEvent
func miqt_exec_callback_QCategoryAxis_customEvent(self *C.QCategoryAxis, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QCategoryAxis{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QCategoryAxis) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QCategoryAxis_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCategoryAxis) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QCategoryAxis_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCategoryAxis_connectNotify
func miqt_exec_callback_QCategoryAxis_connectNotify(self *C.QCategoryAxis, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCategoryAxis{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QCategoryAxis) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QCategoryAxis_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCategoryAxis) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QCategoryAxis_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCategoryAxis_disconnectNotify
func miqt_exec_callback_QCategoryAxis_disconnectNotify(self *C.QCategoryAxis, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCategoryAxis{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QCategoryAxis) Delete() {
	C.QCategoryAxis_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCategoryAxis) GoGC() {
	runtime.SetFinalizer(this, func(this *QCategoryAxis) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
