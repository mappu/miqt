package charts6

/*

#include "gen_qpieseries.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPieSeries struct {
	h *C.QPieSeries
	*QAbstractSeries
}

func (this *QPieSeries) cPointer() *C.QPieSeries {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPieSeries) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPieSeries constructs the type using only CGO pointers.
func newQPieSeries(h *C.QPieSeries) *QPieSeries {
	if h == nil {
		return nil
	}
	var outptr_QAbstractSeries *C.QAbstractSeries = nil
	C.QPieSeries_virtbase(h, &outptr_QAbstractSeries)

	return &QPieSeries{h: h,
		QAbstractSeries: newQAbstractSeries(outptr_QAbstractSeries)}
}

// UnsafeNewQPieSeries constructs the type using only unsafe pointers.
func UnsafeNewQPieSeries(h unsafe.Pointer) *QPieSeries {
	return newQPieSeries((*C.QPieSeries)(h))
}

// NewQPieSeries constructs a new QPieSeries object.
func NewQPieSeries() *QPieSeries {

	return newQPieSeries(C.QPieSeries_new())
}

// NewQPieSeries2 constructs a new QPieSeries object.
func NewQPieSeries2(parent *qt6.QObject) *QPieSeries {

	return newQPieSeries(C.QPieSeries_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QPieSeries) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QPieSeries_metaObject(this.h)))
}

func (this *QPieSeries) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPieSeries_metacast(this.h, param1_Cstring))
}

func QPieSeries_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPieSeries_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPieSeries) Type() QAbstractSeries__SeriesType {
	return (QAbstractSeries__SeriesType)(C.QPieSeries_type(this.h))
}

func (this *QPieSeries) Append(slice *QPieSlice) bool {
	return (bool)(C.QPieSeries_append(this.h, slice.cPointer()))
}

func (this *QPieSeries) AppendWithSlices(slices []*QPieSlice) bool {
	slices_CArray := (*[0xffff]*C.QPieSlice)(C.malloc(C.size_t(8 * len(slices))))
	defer C.free(unsafe.Pointer(slices_CArray))
	for i := range slices {
		slices_CArray[i] = slices[i].cPointer()
	}
	slices_ma := C.struct_miqt_array{len: C.size_t(len(slices)), data: unsafe.Pointer(slices_CArray)}
	return (bool)(C.QPieSeries_appendWithSlices(this.h, slices_ma))
}

func (this *QPieSeries) OperatorShiftLeft(slice *QPieSlice) *QPieSeries {
	return newQPieSeries(C.QPieSeries_operatorShiftLeft(this.h, slice.cPointer()))
}

func (this *QPieSeries) Append2(label string, value float64) *QPieSlice {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	return newQPieSlice(C.QPieSeries_append2(this.h, label_ms, (C.double)(value)))
}

func (this *QPieSeries) Insert(index int, slice *QPieSlice) bool {
	return (bool)(C.QPieSeries_insert(this.h, (C.int)(index), slice.cPointer()))
}

func (this *QPieSeries) Remove(slice *QPieSlice) bool {
	return (bool)(C.QPieSeries_remove(this.h, slice.cPointer()))
}

func (this *QPieSeries) Take(slice *QPieSlice) bool {
	return (bool)(C.QPieSeries_take(this.h, slice.cPointer()))
}

func (this *QPieSeries) Clear() {
	C.QPieSeries_clear(this.h)
}

func (this *QPieSeries) Slices() []*QPieSlice {
	var _ma C.struct_miqt_array = C.QPieSeries_slices(this.h)
	_ret := make([]*QPieSlice, int(_ma.len))
	_outCast := (*[0xffff]*C.QPieSlice)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQPieSlice(_outCast[i])
	}
	return _ret
}

func (this *QPieSeries) Count() int {
	return (int)(C.QPieSeries_count(this.h))
}

func (this *QPieSeries) IsEmpty() bool {
	return (bool)(C.QPieSeries_isEmpty(this.h))
}

func (this *QPieSeries) Sum() float64 {
	return (float64)(C.QPieSeries_sum(this.h))
}

func (this *QPieSeries) SetHoleSize(holeSize float64) {
	C.QPieSeries_setHoleSize(this.h, (C.double)(holeSize))
}

func (this *QPieSeries) HoleSize() float64 {
	return (float64)(C.QPieSeries_holeSize(this.h))
}

func (this *QPieSeries) SetHorizontalPosition(relativePosition float64) {
	C.QPieSeries_setHorizontalPosition(this.h, (C.double)(relativePosition))
}

func (this *QPieSeries) HorizontalPosition() float64 {
	return (float64)(C.QPieSeries_horizontalPosition(this.h))
}

func (this *QPieSeries) SetVerticalPosition(relativePosition float64) {
	C.QPieSeries_setVerticalPosition(this.h, (C.double)(relativePosition))
}

func (this *QPieSeries) VerticalPosition() float64 {
	return (float64)(C.QPieSeries_verticalPosition(this.h))
}

func (this *QPieSeries) SetPieSize(relativeSize float64) {
	C.QPieSeries_setPieSize(this.h, (C.double)(relativeSize))
}

func (this *QPieSeries) PieSize() float64 {
	return (float64)(C.QPieSeries_pieSize(this.h))
}

func (this *QPieSeries) SetPieStartAngle(startAngle float64) {
	C.QPieSeries_setPieStartAngle(this.h, (C.double)(startAngle))
}

func (this *QPieSeries) PieStartAngle() float64 {
	return (float64)(C.QPieSeries_pieStartAngle(this.h))
}

func (this *QPieSeries) SetPieEndAngle(endAngle float64) {
	C.QPieSeries_setPieEndAngle(this.h, (C.double)(endAngle))
}

func (this *QPieSeries) PieEndAngle() float64 {
	return (float64)(C.QPieSeries_pieEndAngle(this.h))
}

func (this *QPieSeries) SetLabelsVisible() {
	C.QPieSeries_setLabelsVisible(this.h)
}

func (this *QPieSeries) SetLabelsPosition(position QPieSlice__LabelPosition) {
	C.QPieSeries_setLabelsPosition(this.h, (C.int)(position))
}

func (this *QPieSeries) Added(slices []*QPieSlice) {
	slices_CArray := (*[0xffff]*C.QPieSlice)(C.malloc(C.size_t(8 * len(slices))))
	defer C.free(unsafe.Pointer(slices_CArray))
	for i := range slices {
		slices_CArray[i] = slices[i].cPointer()
	}
	slices_ma := C.struct_miqt_array{len: C.size_t(len(slices)), data: unsafe.Pointer(slices_CArray)}
	C.QPieSeries_added(this.h, slices_ma)
}
func (this *QPieSeries) OnAdded(slot func(slices []*QPieSlice)) {
	C.QPieSeries_connect_added(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSeries_added
func miqt_exec_callback_QPieSeries_added(cb C.intptr_t, slices C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(slices []*QPieSlice))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var slices_ma C.struct_miqt_array = slices
	slices_ret := make([]*QPieSlice, int(slices_ma.len))
	slices_outCast := (*[0xffff]*C.QPieSlice)(unsafe.Pointer(slices_ma.data)) // hey ya
	for i := 0; i < int(slices_ma.len); i++ {
		slices_ret[i] = newQPieSlice(slices_outCast[i])
	}
	slotval1 := slices_ret

	gofunc(slotval1)
}

func (this *QPieSeries) Removed(slices []*QPieSlice) {
	slices_CArray := (*[0xffff]*C.QPieSlice)(C.malloc(C.size_t(8 * len(slices))))
	defer C.free(unsafe.Pointer(slices_CArray))
	for i := range slices {
		slices_CArray[i] = slices[i].cPointer()
	}
	slices_ma := C.struct_miqt_array{len: C.size_t(len(slices)), data: unsafe.Pointer(slices_CArray)}
	C.QPieSeries_removed(this.h, slices_ma)
}
func (this *QPieSeries) OnRemoved(slot func(slices []*QPieSlice)) {
	C.QPieSeries_connect_removed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSeries_removed
func miqt_exec_callback_QPieSeries_removed(cb C.intptr_t, slices C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(slices []*QPieSlice))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var slices_ma C.struct_miqt_array = slices
	slices_ret := make([]*QPieSlice, int(slices_ma.len))
	slices_outCast := (*[0xffff]*C.QPieSlice)(unsafe.Pointer(slices_ma.data)) // hey ya
	for i := 0; i < int(slices_ma.len); i++ {
		slices_ret[i] = newQPieSlice(slices_outCast[i])
	}
	slotval1 := slices_ret

	gofunc(slotval1)
}

func (this *QPieSeries) Clicked(slice *QPieSlice) {
	C.QPieSeries_clicked(this.h, slice.cPointer())
}
func (this *QPieSeries) OnClicked(slot func(slice *QPieSlice)) {
	C.QPieSeries_connect_clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSeries_clicked
func miqt_exec_callback_QPieSeries_clicked(cb C.intptr_t, slice *C.QPieSlice) {
	gofunc, ok := cgo.Handle(cb).Value().(func(slice *QPieSlice))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPieSlice(slice)

	gofunc(slotval1)
}

func (this *QPieSeries) Hovered(slice *QPieSlice, state bool) {
	C.QPieSeries_hovered(this.h, slice.cPointer(), (C.bool)(state))
}
func (this *QPieSeries) OnHovered(slot func(slice *QPieSlice, state bool)) {
	C.QPieSeries_connect_hovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSeries_hovered
func miqt_exec_callback_QPieSeries_hovered(cb C.intptr_t, slice *C.QPieSlice, state C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(slice *QPieSlice, state bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPieSlice(slice)

	slotval2 := (bool)(state)

	gofunc(slotval1, slotval2)
}

func (this *QPieSeries) Pressed(slice *QPieSlice) {
	C.QPieSeries_pressed(this.h, slice.cPointer())
}
func (this *QPieSeries) OnPressed(slot func(slice *QPieSlice)) {
	C.QPieSeries_connect_pressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSeries_pressed
func miqt_exec_callback_QPieSeries_pressed(cb C.intptr_t, slice *C.QPieSlice) {
	gofunc, ok := cgo.Handle(cb).Value().(func(slice *QPieSlice))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPieSlice(slice)

	gofunc(slotval1)
}

func (this *QPieSeries) Released(slice *QPieSlice) {
	C.QPieSeries_released(this.h, slice.cPointer())
}
func (this *QPieSeries) OnReleased(slot func(slice *QPieSlice)) {
	C.QPieSeries_connect_released(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSeries_released
func miqt_exec_callback_QPieSeries_released(cb C.intptr_t, slice *C.QPieSlice) {
	gofunc, ok := cgo.Handle(cb).Value().(func(slice *QPieSlice))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPieSlice(slice)

	gofunc(slotval1)
}

func (this *QPieSeries) DoubleClicked(slice *QPieSlice) {
	C.QPieSeries_doubleClicked(this.h, slice.cPointer())
}
func (this *QPieSeries) OnDoubleClicked(slot func(slice *QPieSlice)) {
	C.QPieSeries_connect_doubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSeries_doubleClicked
func miqt_exec_callback_QPieSeries_doubleClicked(cb C.intptr_t, slice *C.QPieSlice) {
	gofunc, ok := cgo.Handle(cb).Value().(func(slice *QPieSlice))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPieSlice(slice)

	gofunc(slotval1)
}

func (this *QPieSeries) CountChanged() {
	C.QPieSeries_countChanged(this.h)
}
func (this *QPieSeries) OnCountChanged(slot func()) {
	C.QPieSeries_connect_countChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSeries_countChanged
func miqt_exec_callback_QPieSeries_countChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPieSeries) SumChanged() {
	C.QPieSeries_sumChanged(this.h)
}
func (this *QPieSeries) OnSumChanged(slot func()) {
	C.QPieSeries_connect_sumChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPieSeries_sumChanged
func miqt_exec_callback_QPieSeries_sumChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QPieSeries_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPieSeries_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPieSeries_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPieSeries_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPieSeries) SetLabelsVisible1(visible bool) {
	C.QPieSeries_setLabelsVisible1(this.h, (C.bool)(visible))
}

// Sender can only be called from a QPieSeries that was directly constructed.
func (this *QPieSeries) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QPieSeries_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QPieSeries that was directly constructed.
func (this *QPieSeries) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPieSeries_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QPieSeries that was directly constructed.
func (this *QPieSeries) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QPieSeries_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QPieSeries that was directly constructed.
func (this *QPieSeries) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QPieSeries_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QPieSeries) callVirtualBase_Type() QAbstractSeries__SeriesType {

	return (QAbstractSeries__SeriesType)(C.QPieSeries_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QPieSeries) OnType(slot func(super func() QAbstractSeries__SeriesType) QAbstractSeries__SeriesType) {
	ok := C.QPieSeries_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieSeries_type
func miqt_exec_callback_QPieSeries_type(self *C.QPieSeries, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractSeries__SeriesType) QAbstractSeries__SeriesType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPieSeries{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QPieSeries) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QPieSeries_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPieSeries) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QPieSeries_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieSeries_event
func miqt_exec_callback_QPieSeries_event(self *C.QPieSeries, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPieSeries{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPieSeries) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QPieSeries_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QPieSeries) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QPieSeries_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieSeries_eventFilter
func miqt_exec_callback_QPieSeries_eventFilter(self *C.QPieSeries, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QPieSeries{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPieSeries) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QPieSeries_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QPieSeries) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QPieSeries_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieSeries_timerEvent
func miqt_exec_callback_QPieSeries_timerEvent(self *C.QPieSeries, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QPieSeries{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPieSeries) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QPieSeries_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QPieSeries) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QPieSeries_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieSeries_childEvent
func miqt_exec_callback_QPieSeries_childEvent(self *C.QPieSeries, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QPieSeries{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPieSeries) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QPieSeries_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QPieSeries) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QPieSeries_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieSeries_customEvent
func miqt_exec_callback_QPieSeries_customEvent(self *C.QPieSeries, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QPieSeries{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPieSeries) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QPieSeries_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPieSeries) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPieSeries_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieSeries_connectNotify
func miqt_exec_callback_QPieSeries_connectNotify(self *C.QPieSeries, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPieSeries{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPieSeries) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QPieSeries_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QPieSeries) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QPieSeries_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPieSeries_disconnectNotify
func miqt_exec_callback_QPieSeries_disconnectNotify(self *C.QPieSeries, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QPieSeries{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPieSeries) Delete() {
	C.QPieSeries_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPieSeries) GoGC() {
	runtime.SetFinalizer(this, func(this *QPieSeries) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
