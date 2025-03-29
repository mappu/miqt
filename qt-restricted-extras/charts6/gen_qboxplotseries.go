package charts6

/*

#include "gen_qboxplotseries.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QBoxPlotSeries struct {
	h *C.QBoxPlotSeries
	*QAbstractSeries
}

func (this *QBoxPlotSeries) cPointer() *C.QBoxPlotSeries {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBoxPlotSeries) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBoxPlotSeries constructs the type using only CGO pointers.
func newQBoxPlotSeries(h *C.QBoxPlotSeries) *QBoxPlotSeries {
	if h == nil {
		return nil
	}
	var outptr_QAbstractSeries *C.QAbstractSeries = nil
	C.QBoxPlotSeries_virtbase(h, &outptr_QAbstractSeries)

	return &QBoxPlotSeries{h: h,
		QAbstractSeries: newQAbstractSeries(outptr_QAbstractSeries)}
}

// UnsafeNewQBoxPlotSeries constructs the type using only unsafe pointers.
func UnsafeNewQBoxPlotSeries(h unsafe.Pointer) *QBoxPlotSeries {
	return newQBoxPlotSeries((*C.QBoxPlotSeries)(h))
}

// NewQBoxPlotSeries constructs a new QBoxPlotSeries object.
func NewQBoxPlotSeries() *QBoxPlotSeries {

	return newQBoxPlotSeries(C.QBoxPlotSeries_new())
}

// NewQBoxPlotSeries2 constructs a new QBoxPlotSeries object.
func NewQBoxPlotSeries2(parent *qt6.QObject) *QBoxPlotSeries {

	return newQBoxPlotSeries(C.QBoxPlotSeries_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QBoxPlotSeries) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QBoxPlotSeries_metaObject(this.h)))
}

func (this *QBoxPlotSeries) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QBoxPlotSeries_metacast(this.h, param1_Cstring))
}

func QBoxPlotSeries_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QBoxPlotSeries_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBoxPlotSeries) Append(box *QBoxSet) bool {
	return (bool)(C.QBoxPlotSeries_append(this.h, box.cPointer()))
}

func (this *QBoxPlotSeries) Remove(box *QBoxSet) bool {
	return (bool)(C.QBoxPlotSeries_remove(this.h, box.cPointer()))
}

func (this *QBoxPlotSeries) Take(box *QBoxSet) bool {
	return (bool)(C.QBoxPlotSeries_take(this.h, box.cPointer()))
}

func (this *QBoxPlotSeries) AppendWithBoxes(boxes []*QBoxSet) bool {
	boxes_CArray := (*[0xffff]*C.QBoxSet)(C.malloc(C.size_t(8 * len(boxes))))
	defer C.free(unsafe.Pointer(boxes_CArray))
	for i := range boxes {
		boxes_CArray[i] = boxes[i].cPointer()
	}
	boxes_ma := C.struct_miqt_array{len: C.size_t(len(boxes)), data: unsafe.Pointer(boxes_CArray)}
	return (bool)(C.QBoxPlotSeries_appendWithBoxes(this.h, boxes_ma))
}

func (this *QBoxPlotSeries) Insert(index int, box *QBoxSet) bool {
	return (bool)(C.QBoxPlotSeries_insert(this.h, (C.int)(index), box.cPointer()))
}

func (this *QBoxPlotSeries) Count() int {
	return (int)(C.QBoxPlotSeries_count(this.h))
}

func (this *QBoxPlotSeries) BoxSets() []*QBoxSet {
	var _ma C.struct_miqt_array = C.QBoxPlotSeries_boxSets(this.h)
	_ret := make([]*QBoxSet, int(_ma.len))
	_outCast := (*[0xffff]*C.QBoxSet)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQBoxSet(_outCast[i])
	}
	return _ret
}

func (this *QBoxPlotSeries) Clear() {
	C.QBoxPlotSeries_clear(this.h)
}

func (this *QBoxPlotSeries) Type() QAbstractSeries__SeriesType {
	return (QAbstractSeries__SeriesType)(C.QBoxPlotSeries_type(this.h))
}

func (this *QBoxPlotSeries) SetBoxOutlineVisible(visible bool) {
	C.QBoxPlotSeries_setBoxOutlineVisible(this.h, (C.bool)(visible))
}

func (this *QBoxPlotSeries) BoxOutlineVisible() bool {
	return (bool)(C.QBoxPlotSeries_boxOutlineVisible(this.h))
}

func (this *QBoxPlotSeries) SetBoxWidth(width float64) {
	C.QBoxPlotSeries_setBoxWidth(this.h, (C.double)(width))
}

func (this *QBoxPlotSeries) BoxWidth() float64 {
	return (float64)(C.QBoxPlotSeries_boxWidth(this.h))
}

func (this *QBoxPlotSeries) SetBrush(brush *qt6.QBrush) {
	C.QBoxPlotSeries_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QBoxPlotSeries) Brush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QBoxPlotSeries_brush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBoxPlotSeries) SetPen(pen *qt6.QPen) {
	C.QBoxPlotSeries_setPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QBoxPlotSeries) Pen() *qt6.QPen {
	_goptr := qt6.UnsafeNewQPen(unsafe.Pointer(C.QBoxPlotSeries_pen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBoxPlotSeries) Clicked(boxset *QBoxSet) {
	C.QBoxPlotSeries_clicked(this.h, boxset.cPointer())
}
func (this *QBoxPlotSeries) OnClicked(slot func(boxset *QBoxSet)) {
	C.QBoxPlotSeries_connect_clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxPlotSeries_clicked
func miqt_exec_callback_QBoxPlotSeries_clicked(cb C.intptr_t, boxset *C.QBoxSet) {
	gofunc, ok := cgo.Handle(cb).Value().(func(boxset *QBoxSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQBoxSet(boxset)

	gofunc(slotval1)
}

func (this *QBoxPlotSeries) Hovered(status bool, boxset *QBoxSet) {
	C.QBoxPlotSeries_hovered(this.h, (C.bool)(status), boxset.cPointer())
}
func (this *QBoxPlotSeries) OnHovered(slot func(status bool, boxset *QBoxSet)) {
	C.QBoxPlotSeries_connect_hovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxPlotSeries_hovered
func miqt_exec_callback_QBoxPlotSeries_hovered(cb C.intptr_t, status C.bool, boxset *C.QBoxSet) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status bool, boxset *QBoxSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(status)

	slotval2 := newQBoxSet(boxset)

	gofunc(slotval1, slotval2)
}

func (this *QBoxPlotSeries) Pressed(boxset *QBoxSet) {
	C.QBoxPlotSeries_pressed(this.h, boxset.cPointer())
}
func (this *QBoxPlotSeries) OnPressed(slot func(boxset *QBoxSet)) {
	C.QBoxPlotSeries_connect_pressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxPlotSeries_pressed
func miqt_exec_callback_QBoxPlotSeries_pressed(cb C.intptr_t, boxset *C.QBoxSet) {
	gofunc, ok := cgo.Handle(cb).Value().(func(boxset *QBoxSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQBoxSet(boxset)

	gofunc(slotval1)
}

func (this *QBoxPlotSeries) Released(boxset *QBoxSet) {
	C.QBoxPlotSeries_released(this.h, boxset.cPointer())
}
func (this *QBoxPlotSeries) OnReleased(slot func(boxset *QBoxSet)) {
	C.QBoxPlotSeries_connect_released(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxPlotSeries_released
func miqt_exec_callback_QBoxPlotSeries_released(cb C.intptr_t, boxset *C.QBoxSet) {
	gofunc, ok := cgo.Handle(cb).Value().(func(boxset *QBoxSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQBoxSet(boxset)

	gofunc(slotval1)
}

func (this *QBoxPlotSeries) DoubleClicked(boxset *QBoxSet) {
	C.QBoxPlotSeries_doubleClicked(this.h, boxset.cPointer())
}
func (this *QBoxPlotSeries) OnDoubleClicked(slot func(boxset *QBoxSet)) {
	C.QBoxPlotSeries_connect_doubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxPlotSeries_doubleClicked
func miqt_exec_callback_QBoxPlotSeries_doubleClicked(cb C.intptr_t, boxset *C.QBoxSet) {
	gofunc, ok := cgo.Handle(cb).Value().(func(boxset *QBoxSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQBoxSet(boxset)

	gofunc(slotval1)
}

func (this *QBoxPlotSeries) CountChanged() {
	C.QBoxPlotSeries_countChanged(this.h)
}
func (this *QBoxPlotSeries) OnCountChanged(slot func()) {
	C.QBoxPlotSeries_connect_countChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxPlotSeries_countChanged
func miqt_exec_callback_QBoxPlotSeries_countChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QBoxPlotSeries) PenChanged() {
	C.QBoxPlotSeries_penChanged(this.h)
}
func (this *QBoxPlotSeries) OnPenChanged(slot func()) {
	C.QBoxPlotSeries_connect_penChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxPlotSeries_penChanged
func miqt_exec_callback_QBoxPlotSeries_penChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QBoxPlotSeries) BrushChanged() {
	C.QBoxPlotSeries_brushChanged(this.h)
}
func (this *QBoxPlotSeries) OnBrushChanged(slot func()) {
	C.QBoxPlotSeries_connect_brushChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxPlotSeries_brushChanged
func miqt_exec_callback_QBoxPlotSeries_brushChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QBoxPlotSeries) BoxOutlineVisibilityChanged() {
	C.QBoxPlotSeries_boxOutlineVisibilityChanged(this.h)
}
func (this *QBoxPlotSeries) OnBoxOutlineVisibilityChanged(slot func()) {
	C.QBoxPlotSeries_connect_boxOutlineVisibilityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxPlotSeries_boxOutlineVisibilityChanged
func miqt_exec_callback_QBoxPlotSeries_boxOutlineVisibilityChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QBoxPlotSeries) BoxWidthChanged() {
	C.QBoxPlotSeries_boxWidthChanged(this.h)
}
func (this *QBoxPlotSeries) OnBoxWidthChanged(slot func()) {
	C.QBoxPlotSeries_connect_boxWidthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxPlotSeries_boxWidthChanged
func miqt_exec_callback_QBoxPlotSeries_boxWidthChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QBoxPlotSeries) BoxsetsAdded(sets []*QBoxSet) {
	sets_CArray := (*[0xffff]*C.QBoxSet)(C.malloc(C.size_t(8 * len(sets))))
	defer C.free(unsafe.Pointer(sets_CArray))
	for i := range sets {
		sets_CArray[i] = sets[i].cPointer()
	}
	sets_ma := C.struct_miqt_array{len: C.size_t(len(sets)), data: unsafe.Pointer(sets_CArray)}
	C.QBoxPlotSeries_boxsetsAdded(this.h, sets_ma)
}
func (this *QBoxPlotSeries) OnBoxsetsAdded(slot func(sets []*QBoxSet)) {
	C.QBoxPlotSeries_connect_boxsetsAdded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxPlotSeries_boxsetsAdded
func miqt_exec_callback_QBoxPlotSeries_boxsetsAdded(cb C.intptr_t, sets C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(sets []*QBoxSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var sets_ma C.struct_miqt_array = sets
	sets_ret := make([]*QBoxSet, int(sets_ma.len))
	sets_outCast := (*[0xffff]*C.QBoxSet)(unsafe.Pointer(sets_ma.data)) // hey ya
	for i := 0; i < int(sets_ma.len); i++ {
		sets_ret[i] = newQBoxSet(sets_outCast[i])
	}
	slotval1 := sets_ret

	gofunc(slotval1)
}

func (this *QBoxPlotSeries) BoxsetsRemoved(sets []*QBoxSet) {
	sets_CArray := (*[0xffff]*C.QBoxSet)(C.malloc(C.size_t(8 * len(sets))))
	defer C.free(unsafe.Pointer(sets_CArray))
	for i := range sets {
		sets_CArray[i] = sets[i].cPointer()
	}
	sets_ma := C.struct_miqt_array{len: C.size_t(len(sets)), data: unsafe.Pointer(sets_CArray)}
	C.QBoxPlotSeries_boxsetsRemoved(this.h, sets_ma)
}
func (this *QBoxPlotSeries) OnBoxsetsRemoved(slot func(sets []*QBoxSet)) {
	C.QBoxPlotSeries_connect_boxsetsRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBoxPlotSeries_boxsetsRemoved
func miqt_exec_callback_QBoxPlotSeries_boxsetsRemoved(cb C.intptr_t, sets C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(sets []*QBoxSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var sets_ma C.struct_miqt_array = sets
	sets_ret := make([]*QBoxSet, int(sets_ma.len))
	sets_outCast := (*[0xffff]*C.QBoxSet)(unsafe.Pointer(sets_ma.data)) // hey ya
	for i := 0; i < int(sets_ma.len); i++ {
		sets_ret[i] = newQBoxSet(sets_outCast[i])
	}
	slotval1 := sets_ret

	gofunc(slotval1)
}

func QBoxPlotSeries_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBoxPlotSeries_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBoxPlotSeries_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBoxPlotSeries_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QBoxPlotSeries that was directly constructed.
func (this *QBoxPlotSeries) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QBoxPlotSeries_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QBoxPlotSeries that was directly constructed.
func (this *QBoxPlotSeries) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QBoxPlotSeries_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QBoxPlotSeries that was directly constructed.
func (this *QBoxPlotSeries) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QBoxPlotSeries_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QBoxPlotSeries that was directly constructed.
func (this *QBoxPlotSeries) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QBoxPlotSeries_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QBoxPlotSeries) callVirtualBase_Type() QAbstractSeries__SeriesType {

	return (QAbstractSeries__SeriesType)(C.QBoxPlotSeries_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QBoxPlotSeries) OnType(slot func(super func() QAbstractSeries__SeriesType) QAbstractSeries__SeriesType) {
	ok := C.QBoxPlotSeries_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxPlotSeries_type
func miqt_exec_callback_QBoxPlotSeries_type(self *C.QBoxPlotSeries, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractSeries__SeriesType) QAbstractSeries__SeriesType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxPlotSeries{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QBoxPlotSeries) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QBoxPlotSeries_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QBoxPlotSeries) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QBoxPlotSeries_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxPlotSeries_event
func miqt_exec_callback_QBoxPlotSeries_event(self *C.QBoxPlotSeries, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QBoxPlotSeries{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QBoxPlotSeries) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QBoxPlotSeries_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QBoxPlotSeries) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QBoxPlotSeries_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxPlotSeries_eventFilter
func miqt_exec_callback_QBoxPlotSeries_eventFilter(self *C.QBoxPlotSeries, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QBoxPlotSeries{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QBoxPlotSeries) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QBoxPlotSeries_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QBoxPlotSeries) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QBoxPlotSeries_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxPlotSeries_timerEvent
func miqt_exec_callback_QBoxPlotSeries_timerEvent(self *C.QBoxPlotSeries, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QBoxPlotSeries{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QBoxPlotSeries) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QBoxPlotSeries_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QBoxPlotSeries) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QBoxPlotSeries_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxPlotSeries_childEvent
func miqt_exec_callback_QBoxPlotSeries_childEvent(self *C.QBoxPlotSeries, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QBoxPlotSeries{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QBoxPlotSeries) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QBoxPlotSeries_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QBoxPlotSeries) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QBoxPlotSeries_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxPlotSeries_customEvent
func miqt_exec_callback_QBoxPlotSeries_customEvent(self *C.QBoxPlotSeries, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QBoxPlotSeries{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QBoxPlotSeries) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QBoxPlotSeries_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QBoxPlotSeries) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QBoxPlotSeries_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxPlotSeries_connectNotify
func miqt_exec_callback_QBoxPlotSeries_connectNotify(self *C.QBoxPlotSeries, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QBoxPlotSeries{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QBoxPlotSeries) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QBoxPlotSeries_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QBoxPlotSeries) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QBoxPlotSeries_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxPlotSeries_disconnectNotify
func miqt_exec_callback_QBoxPlotSeries_disconnectNotify(self *C.QBoxPlotSeries, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QBoxPlotSeries{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QBoxPlotSeries) Delete() {
	C.QBoxPlotSeries_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBoxPlotSeries) GoGC() {
	runtime.SetFinalizer(this, func(this *QBoxPlotSeries) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
