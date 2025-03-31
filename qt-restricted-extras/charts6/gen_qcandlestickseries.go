package charts6

/*

#include "gen_qcandlestickseries.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCandlestickSeries struct {
	h *C.QCandlestickSeries
	*QAbstractSeries
}

func (this *QCandlestickSeries) cPointer() *C.QCandlestickSeries {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCandlestickSeries) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCandlestickSeries constructs the type using only CGO pointers.
func newQCandlestickSeries(h *C.QCandlestickSeries) *QCandlestickSeries {
	if h == nil {
		return nil
	}
	var outptr_QAbstractSeries *C.QAbstractSeries = nil
	C.QCandlestickSeries_virtbase(h, &outptr_QAbstractSeries)

	return &QCandlestickSeries{h: h,
		QAbstractSeries: newQAbstractSeries(outptr_QAbstractSeries)}
}

// UnsafeNewQCandlestickSeries constructs the type using only unsafe pointers.
func UnsafeNewQCandlestickSeries(h unsafe.Pointer) *QCandlestickSeries {
	return newQCandlestickSeries((*C.QCandlestickSeries)(h))
}

// NewQCandlestickSeries constructs a new QCandlestickSeries object.
func NewQCandlestickSeries() *QCandlestickSeries {

	return newQCandlestickSeries(C.QCandlestickSeries_new())
}

// NewQCandlestickSeries2 constructs a new QCandlestickSeries object.
func NewQCandlestickSeries2(parent *qt6.QObject) *QCandlestickSeries {

	return newQCandlestickSeries(C.QCandlestickSeries_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QCandlestickSeries) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QCandlestickSeries_metaObject(this.h)))
}

func (this *QCandlestickSeries) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCandlestickSeries_metacast(this.h, param1_Cstring))
}

func QCandlestickSeries_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCandlestickSeries_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCandlestickSeries) Append(set *QCandlestickSet) bool {
	return (bool)(C.QCandlestickSeries_append(this.h, set.cPointer()))
}

func (this *QCandlestickSeries) Remove(set *QCandlestickSet) bool {
	return (bool)(C.QCandlestickSeries_remove(this.h, set.cPointer()))
}

func (this *QCandlestickSeries) AppendWithSets(sets []*QCandlestickSet) bool {
	sets_CArray := (*[0xffff]*C.QCandlestickSet)(C.malloc(C.size_t(8 * len(sets))))
	defer C.free(unsafe.Pointer(sets_CArray))
	for i := range sets {
		sets_CArray[i] = sets[i].cPointer()
	}
	sets_ma := C.struct_miqt_array{len: C.size_t(len(sets)), data: unsafe.Pointer(sets_CArray)}
	return (bool)(C.QCandlestickSeries_appendWithSets(this.h, sets_ma))
}

func (this *QCandlestickSeries) RemoveWithSets(sets []*QCandlestickSet) bool {
	sets_CArray := (*[0xffff]*C.QCandlestickSet)(C.malloc(C.size_t(8 * len(sets))))
	defer C.free(unsafe.Pointer(sets_CArray))
	for i := range sets {
		sets_CArray[i] = sets[i].cPointer()
	}
	sets_ma := C.struct_miqt_array{len: C.size_t(len(sets)), data: unsafe.Pointer(sets_CArray)}
	return (bool)(C.QCandlestickSeries_removeWithSets(this.h, sets_ma))
}

func (this *QCandlestickSeries) Insert(index int, set *QCandlestickSet) bool {
	return (bool)(C.QCandlestickSeries_insert(this.h, (C.int)(index), set.cPointer()))
}

func (this *QCandlestickSeries) Take(set *QCandlestickSet) bool {
	return (bool)(C.QCandlestickSeries_take(this.h, set.cPointer()))
}

func (this *QCandlestickSeries) Clear() {
	C.QCandlestickSeries_clear(this.h)
}

func (this *QCandlestickSeries) Sets() []*QCandlestickSet {
	var _ma C.struct_miqt_array = C.QCandlestickSeries_sets(this.h)
	_ret := make([]*QCandlestickSet, int(_ma.len))
	_outCast := (*[0xffff]*C.QCandlestickSet)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQCandlestickSet(_outCast[i])
	}
	return _ret
}

func (this *QCandlestickSeries) Count() int {
	return (int)(C.QCandlestickSeries_count(this.h))
}

func (this *QCandlestickSeries) Type() QAbstractSeries__SeriesType {
	return (QAbstractSeries__SeriesType)(C.QCandlestickSeries_type(this.h))
}

func (this *QCandlestickSeries) SetMaximumColumnWidth(maximumColumnWidth float64) {
	C.QCandlestickSeries_setMaximumColumnWidth(this.h, (C.double)(maximumColumnWidth))
}

func (this *QCandlestickSeries) MaximumColumnWidth() float64 {
	return (float64)(C.QCandlestickSeries_maximumColumnWidth(this.h))
}

func (this *QCandlestickSeries) SetMinimumColumnWidth(minimumColumnWidth float64) {
	C.QCandlestickSeries_setMinimumColumnWidth(this.h, (C.double)(minimumColumnWidth))
}

func (this *QCandlestickSeries) MinimumColumnWidth() float64 {
	return (float64)(C.QCandlestickSeries_minimumColumnWidth(this.h))
}

func (this *QCandlestickSeries) SetBodyWidth(bodyWidth float64) {
	C.QCandlestickSeries_setBodyWidth(this.h, (C.double)(bodyWidth))
}

func (this *QCandlestickSeries) BodyWidth() float64 {
	return (float64)(C.QCandlestickSeries_bodyWidth(this.h))
}

func (this *QCandlestickSeries) SetBodyOutlineVisible(bodyOutlineVisible bool) {
	C.QCandlestickSeries_setBodyOutlineVisible(this.h, (C.bool)(bodyOutlineVisible))
}

func (this *QCandlestickSeries) BodyOutlineVisible() bool {
	return (bool)(C.QCandlestickSeries_bodyOutlineVisible(this.h))
}

func (this *QCandlestickSeries) SetCapsWidth(capsWidth float64) {
	C.QCandlestickSeries_setCapsWidth(this.h, (C.double)(capsWidth))
}

func (this *QCandlestickSeries) CapsWidth() float64 {
	return (float64)(C.QCandlestickSeries_capsWidth(this.h))
}

func (this *QCandlestickSeries) SetCapsVisible(capsVisible bool) {
	C.QCandlestickSeries_setCapsVisible(this.h, (C.bool)(capsVisible))
}

func (this *QCandlestickSeries) CapsVisible() bool {
	return (bool)(C.QCandlestickSeries_capsVisible(this.h))
}

func (this *QCandlestickSeries) SetIncreasingColor(increasingColor *qt6.QColor) {
	C.QCandlestickSeries_setIncreasingColor(this.h, (*C.QColor)(increasingColor.UnsafePointer()))
}

func (this *QCandlestickSeries) IncreasingColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QCandlestickSeries_increasingColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCandlestickSeries) SetDecreasingColor(decreasingColor *qt6.QColor) {
	C.QCandlestickSeries_setDecreasingColor(this.h, (*C.QColor)(decreasingColor.UnsafePointer()))
}

func (this *QCandlestickSeries) DecreasingColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QCandlestickSeries_decreasingColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCandlestickSeries) SetBrush(brush *qt6.QBrush) {
	C.QCandlestickSeries_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QCandlestickSeries) Brush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QCandlestickSeries_brush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCandlestickSeries) SetPen(pen *qt6.QPen) {
	C.QCandlestickSeries_setPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QCandlestickSeries) Pen() *qt6.QPen {
	_goptr := qt6.UnsafeNewQPen(unsafe.Pointer(C.QCandlestickSeries_pen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCandlestickSeries) Clicked(set *QCandlestickSet) {
	C.QCandlestickSeries_clicked(this.h, set.cPointer())
}
func (this *QCandlestickSeries) OnClicked(slot func(set *QCandlestickSet)) {
	C.QCandlestickSeries_connect_clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSeries_clicked
func miqt_exec_callback_QCandlestickSeries_clicked(cb C.intptr_t, set *C.QCandlestickSet) {
	gofunc, ok := cgo.Handle(cb).Value().(func(set *QCandlestickSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCandlestickSet(set)

	gofunc(slotval1)
}

func (this *QCandlestickSeries) Hovered(status bool, set *QCandlestickSet) {
	C.QCandlestickSeries_hovered(this.h, (C.bool)(status), set.cPointer())
}
func (this *QCandlestickSeries) OnHovered(slot func(status bool, set *QCandlestickSet)) {
	C.QCandlestickSeries_connect_hovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSeries_hovered
func miqt_exec_callback_QCandlestickSeries_hovered(cb C.intptr_t, status C.bool, set *C.QCandlestickSet) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status bool, set *QCandlestickSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(status)

	slotval2 := newQCandlestickSet(set)

	gofunc(slotval1, slotval2)
}

func (this *QCandlestickSeries) Pressed(set *QCandlestickSet) {
	C.QCandlestickSeries_pressed(this.h, set.cPointer())
}
func (this *QCandlestickSeries) OnPressed(slot func(set *QCandlestickSet)) {
	C.QCandlestickSeries_connect_pressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSeries_pressed
func miqt_exec_callback_QCandlestickSeries_pressed(cb C.intptr_t, set *C.QCandlestickSet) {
	gofunc, ok := cgo.Handle(cb).Value().(func(set *QCandlestickSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCandlestickSet(set)

	gofunc(slotval1)
}

func (this *QCandlestickSeries) Released(set *QCandlestickSet) {
	C.QCandlestickSeries_released(this.h, set.cPointer())
}
func (this *QCandlestickSeries) OnReleased(slot func(set *QCandlestickSet)) {
	C.QCandlestickSeries_connect_released(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSeries_released
func miqt_exec_callback_QCandlestickSeries_released(cb C.intptr_t, set *C.QCandlestickSet) {
	gofunc, ok := cgo.Handle(cb).Value().(func(set *QCandlestickSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCandlestickSet(set)

	gofunc(slotval1)
}

func (this *QCandlestickSeries) DoubleClicked(set *QCandlestickSet) {
	C.QCandlestickSeries_doubleClicked(this.h, set.cPointer())
}
func (this *QCandlestickSeries) OnDoubleClicked(slot func(set *QCandlestickSet)) {
	C.QCandlestickSeries_connect_doubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSeries_doubleClicked
func miqt_exec_callback_QCandlestickSeries_doubleClicked(cb C.intptr_t, set *C.QCandlestickSet) {
	gofunc, ok := cgo.Handle(cb).Value().(func(set *QCandlestickSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCandlestickSet(set)

	gofunc(slotval1)
}

func (this *QCandlestickSeries) CandlestickSetsAdded(sets []*QCandlestickSet) {
	sets_CArray := (*[0xffff]*C.QCandlestickSet)(C.malloc(C.size_t(8 * len(sets))))
	defer C.free(unsafe.Pointer(sets_CArray))
	for i := range sets {
		sets_CArray[i] = sets[i].cPointer()
	}
	sets_ma := C.struct_miqt_array{len: C.size_t(len(sets)), data: unsafe.Pointer(sets_CArray)}
	C.QCandlestickSeries_candlestickSetsAdded(this.h, sets_ma)
}
func (this *QCandlestickSeries) OnCandlestickSetsAdded(slot func(sets []*QCandlestickSet)) {
	C.QCandlestickSeries_connect_candlestickSetsAdded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSeries_candlestickSetsAdded
func miqt_exec_callback_QCandlestickSeries_candlestickSetsAdded(cb C.intptr_t, sets C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(sets []*QCandlestickSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var sets_ma C.struct_miqt_array = sets
	sets_ret := make([]*QCandlestickSet, int(sets_ma.len))
	sets_outCast := (*[0xffff]*C.QCandlestickSet)(unsafe.Pointer(sets_ma.data)) // hey ya
	for i := 0; i < int(sets_ma.len); i++ {
		sets_ret[i] = newQCandlestickSet(sets_outCast[i])
	}
	slotval1 := sets_ret

	gofunc(slotval1)
}

func (this *QCandlestickSeries) CandlestickSetsRemoved(sets []*QCandlestickSet) {
	sets_CArray := (*[0xffff]*C.QCandlestickSet)(C.malloc(C.size_t(8 * len(sets))))
	defer C.free(unsafe.Pointer(sets_CArray))
	for i := range sets {
		sets_CArray[i] = sets[i].cPointer()
	}
	sets_ma := C.struct_miqt_array{len: C.size_t(len(sets)), data: unsafe.Pointer(sets_CArray)}
	C.QCandlestickSeries_candlestickSetsRemoved(this.h, sets_ma)
}
func (this *QCandlestickSeries) OnCandlestickSetsRemoved(slot func(sets []*QCandlestickSet)) {
	C.QCandlestickSeries_connect_candlestickSetsRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSeries_candlestickSetsRemoved
func miqt_exec_callback_QCandlestickSeries_candlestickSetsRemoved(cb C.intptr_t, sets C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(sets []*QCandlestickSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var sets_ma C.struct_miqt_array = sets
	sets_ret := make([]*QCandlestickSet, int(sets_ma.len))
	sets_outCast := (*[0xffff]*C.QCandlestickSet)(unsafe.Pointer(sets_ma.data)) // hey ya
	for i := 0; i < int(sets_ma.len); i++ {
		sets_ret[i] = newQCandlestickSet(sets_outCast[i])
	}
	slotval1 := sets_ret

	gofunc(slotval1)
}

func (this *QCandlestickSeries) CountChanged() {
	C.QCandlestickSeries_countChanged(this.h)
}
func (this *QCandlestickSeries) OnCountChanged(slot func()) {
	C.QCandlestickSeries_connect_countChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSeries_countChanged
func miqt_exec_callback_QCandlestickSeries_countChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSeries) MaximumColumnWidthChanged() {
	C.QCandlestickSeries_maximumColumnWidthChanged(this.h)
}
func (this *QCandlestickSeries) OnMaximumColumnWidthChanged(slot func()) {
	C.QCandlestickSeries_connect_maximumColumnWidthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSeries_maximumColumnWidthChanged
func miqt_exec_callback_QCandlestickSeries_maximumColumnWidthChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSeries) MinimumColumnWidthChanged() {
	C.QCandlestickSeries_minimumColumnWidthChanged(this.h)
}
func (this *QCandlestickSeries) OnMinimumColumnWidthChanged(slot func()) {
	C.QCandlestickSeries_connect_minimumColumnWidthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSeries_minimumColumnWidthChanged
func miqt_exec_callback_QCandlestickSeries_minimumColumnWidthChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSeries) BodyWidthChanged() {
	C.QCandlestickSeries_bodyWidthChanged(this.h)
}
func (this *QCandlestickSeries) OnBodyWidthChanged(slot func()) {
	C.QCandlestickSeries_connect_bodyWidthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSeries_bodyWidthChanged
func miqt_exec_callback_QCandlestickSeries_bodyWidthChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSeries) BodyOutlineVisibilityChanged() {
	C.QCandlestickSeries_bodyOutlineVisibilityChanged(this.h)
}
func (this *QCandlestickSeries) OnBodyOutlineVisibilityChanged(slot func()) {
	C.QCandlestickSeries_connect_bodyOutlineVisibilityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSeries_bodyOutlineVisibilityChanged
func miqt_exec_callback_QCandlestickSeries_bodyOutlineVisibilityChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSeries) CapsWidthChanged() {
	C.QCandlestickSeries_capsWidthChanged(this.h)
}
func (this *QCandlestickSeries) OnCapsWidthChanged(slot func()) {
	C.QCandlestickSeries_connect_capsWidthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSeries_capsWidthChanged
func miqt_exec_callback_QCandlestickSeries_capsWidthChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSeries) CapsVisibilityChanged() {
	C.QCandlestickSeries_capsVisibilityChanged(this.h)
}
func (this *QCandlestickSeries) OnCapsVisibilityChanged(slot func()) {
	C.QCandlestickSeries_connect_capsVisibilityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSeries_capsVisibilityChanged
func miqt_exec_callback_QCandlestickSeries_capsVisibilityChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSeries) IncreasingColorChanged() {
	C.QCandlestickSeries_increasingColorChanged(this.h)
}
func (this *QCandlestickSeries) OnIncreasingColorChanged(slot func()) {
	C.QCandlestickSeries_connect_increasingColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSeries_increasingColorChanged
func miqt_exec_callback_QCandlestickSeries_increasingColorChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSeries) DecreasingColorChanged() {
	C.QCandlestickSeries_decreasingColorChanged(this.h)
}
func (this *QCandlestickSeries) OnDecreasingColorChanged(slot func()) {
	C.QCandlestickSeries_connect_decreasingColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSeries_decreasingColorChanged
func miqt_exec_callback_QCandlestickSeries_decreasingColorChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSeries) BrushChanged() {
	C.QCandlestickSeries_brushChanged(this.h)
}
func (this *QCandlestickSeries) OnBrushChanged(slot func()) {
	C.QCandlestickSeries_connect_brushChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSeries_brushChanged
func miqt_exec_callback_QCandlestickSeries_brushChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCandlestickSeries) PenChanged() {
	C.QCandlestickSeries_penChanged(this.h)
}
func (this *QCandlestickSeries) OnPenChanged(slot func()) {
	C.QCandlestickSeries_connect_penChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCandlestickSeries_penChanged
func miqt_exec_callback_QCandlestickSeries_penChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QCandlestickSeries_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCandlestickSeries_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCandlestickSeries_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCandlestickSeries_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QCandlestickSeries that was directly constructed.
func (this *QCandlestickSeries) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QCandlestickSeries_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QCandlestickSeries that was directly constructed.
func (this *QCandlestickSeries) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCandlestickSeries_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QCandlestickSeries that was directly constructed.
func (this *QCandlestickSeries) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QCandlestickSeries_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QCandlestickSeries that was directly constructed.
func (this *QCandlestickSeries) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QCandlestickSeries_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QCandlestickSeries) callVirtualBase_Type() QAbstractSeries__SeriesType {

	return (QAbstractSeries__SeriesType)(C.QCandlestickSeries_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QCandlestickSeries) OnType(slot func(super func() QAbstractSeries__SeriesType) QAbstractSeries__SeriesType) {
	ok := C.QCandlestickSeries_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickSeries_type
func miqt_exec_callback_QCandlestickSeries_type(self *C.QCandlestickSeries, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractSeries__SeriesType) QAbstractSeries__SeriesType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCandlestickSeries{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QCandlestickSeries) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QCandlestickSeries_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCandlestickSeries) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QCandlestickSeries_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickSeries_event
func miqt_exec_callback_QCandlestickSeries_event(self *C.QCandlestickSeries, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCandlestickSeries{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCandlestickSeries) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QCandlestickSeries_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCandlestickSeries) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QCandlestickSeries_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickSeries_eventFilter
func miqt_exec_callback_QCandlestickSeries_eventFilter(self *C.QCandlestickSeries, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCandlestickSeries{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QCandlestickSeries) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QCandlestickSeries_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QCandlestickSeries) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QCandlestickSeries_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickSeries_timerEvent
func miqt_exec_callback_QCandlestickSeries_timerEvent(self *C.QCandlestickSeries, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QCandlestickSeries{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QCandlestickSeries) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QCandlestickSeries_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QCandlestickSeries) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QCandlestickSeries_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickSeries_childEvent
func miqt_exec_callback_QCandlestickSeries_childEvent(self *C.QCandlestickSeries, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QCandlestickSeries{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QCandlestickSeries) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QCandlestickSeries_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QCandlestickSeries) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QCandlestickSeries_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickSeries_customEvent
func miqt_exec_callback_QCandlestickSeries_customEvent(self *C.QCandlestickSeries, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QCandlestickSeries{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QCandlestickSeries) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QCandlestickSeries_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCandlestickSeries) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QCandlestickSeries_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickSeries_connectNotify
func miqt_exec_callback_QCandlestickSeries_connectNotify(self *C.QCandlestickSeries, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCandlestickSeries{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QCandlestickSeries) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QCandlestickSeries_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCandlestickSeries) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QCandlestickSeries_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCandlestickSeries_disconnectNotify
func miqt_exec_callback_QCandlestickSeries_disconnectNotify(self *C.QCandlestickSeries, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCandlestickSeries{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QCandlestickSeries) Delete() {
	C.QCandlestickSeries_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCandlestickSeries) GoGC() {
	runtime.SetFinalizer(this, func(this *QCandlestickSeries) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
