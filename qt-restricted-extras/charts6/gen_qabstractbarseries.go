package charts6

/*

#include "gen_qabstractbarseries.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractBarSeries__LabelsPosition int

const (
	QAbstractBarSeries__LabelsCenter     QAbstractBarSeries__LabelsPosition = 0
	QAbstractBarSeries__LabelsInsideEnd  QAbstractBarSeries__LabelsPosition = 1
	QAbstractBarSeries__LabelsInsideBase QAbstractBarSeries__LabelsPosition = 2
	QAbstractBarSeries__LabelsOutsideEnd QAbstractBarSeries__LabelsPosition = 3
)

type QAbstractBarSeries struct {
	h *C.QAbstractBarSeries
	*QAbstractSeries
}

func (this *QAbstractBarSeries) cPointer() *C.QAbstractBarSeries {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractBarSeries) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractBarSeries constructs the type using only CGO pointers.
func newQAbstractBarSeries(h *C.QAbstractBarSeries) *QAbstractBarSeries {
	if h == nil {
		return nil
	}
	var outptr_QAbstractSeries *C.QAbstractSeries = nil
	C.QAbstractBarSeries_virtbase(h, &outptr_QAbstractSeries)

	return &QAbstractBarSeries{h: h,
		QAbstractSeries: newQAbstractSeries(outptr_QAbstractSeries)}
}

// UnsafeNewQAbstractBarSeries constructs the type using only unsafe pointers.
func UnsafeNewQAbstractBarSeries(h unsafe.Pointer) *QAbstractBarSeries {
	return newQAbstractBarSeries((*C.QAbstractBarSeries)(h))
}

func (this *QAbstractBarSeries) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractBarSeries_metaObject(this.h)))
}

func (this *QAbstractBarSeries) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractBarSeries_metacast(this.h, param1_Cstring))
}

func QAbstractBarSeries_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractBarSeries_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractBarSeries) SetBarWidth(width float64) {
	C.QAbstractBarSeries_setBarWidth(this.h, (C.double)(width))
}

func (this *QAbstractBarSeries) BarWidth() float64 {
	return (float64)(C.QAbstractBarSeries_barWidth(this.h))
}

func (this *QAbstractBarSeries) Append(set *QBarSet) bool {
	return (bool)(C.QAbstractBarSeries_append(this.h, set.cPointer()))
}

func (this *QAbstractBarSeries) Remove(set *QBarSet) bool {
	return (bool)(C.QAbstractBarSeries_remove(this.h, set.cPointer()))
}

func (this *QAbstractBarSeries) Take(set *QBarSet) bool {
	return (bool)(C.QAbstractBarSeries_take(this.h, set.cPointer()))
}

func (this *QAbstractBarSeries) AppendWithSets(sets []*QBarSet) bool {
	sets_CArray := (*[0xffff]*C.QBarSet)(C.malloc(C.size_t(8 * len(sets))))
	defer C.free(unsafe.Pointer(sets_CArray))
	for i := range sets {
		sets_CArray[i] = sets[i].cPointer()
	}
	sets_ma := C.struct_miqt_array{len: C.size_t(len(sets)), data: unsafe.Pointer(sets_CArray)}
	return (bool)(C.QAbstractBarSeries_appendWithSets(this.h, sets_ma))
}

func (this *QAbstractBarSeries) Insert(index int, set *QBarSet) bool {
	return (bool)(C.QAbstractBarSeries_insert(this.h, (C.int)(index), set.cPointer()))
}

func (this *QAbstractBarSeries) Count() int {
	return (int)(C.QAbstractBarSeries_count(this.h))
}

func (this *QAbstractBarSeries) BarSets() []*QBarSet {
	var _ma C.struct_miqt_array = C.QAbstractBarSeries_barSets(this.h)
	_ret := make([]*QBarSet, int(_ma.len))
	_outCast := (*[0xffff]*C.QBarSet)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQBarSet(_outCast[i])
	}
	return _ret
}

func (this *QAbstractBarSeries) Clear() {
	C.QAbstractBarSeries_clear(this.h)
}

func (this *QAbstractBarSeries) SetLabelsVisible() {
	C.QAbstractBarSeries_setLabelsVisible(this.h)
}

func (this *QAbstractBarSeries) IsLabelsVisible() bool {
	return (bool)(C.QAbstractBarSeries_isLabelsVisible(this.h))
}

func (this *QAbstractBarSeries) SetLabelsFormat(format string) {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	C.QAbstractBarSeries_setLabelsFormat(this.h, format_ms)
}

func (this *QAbstractBarSeries) LabelsFormat() string {
	var _ms C.struct_miqt_string = C.QAbstractBarSeries_labelsFormat(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractBarSeries) SetLabelsAngle(angle float64) {
	C.QAbstractBarSeries_setLabelsAngle(this.h, (C.double)(angle))
}

func (this *QAbstractBarSeries) LabelsAngle() float64 {
	return (float64)(C.QAbstractBarSeries_labelsAngle(this.h))
}

func (this *QAbstractBarSeries) SetLabelsPosition(position QAbstractBarSeries__LabelsPosition) {
	C.QAbstractBarSeries_setLabelsPosition(this.h, (C.int)(position))
}

func (this *QAbstractBarSeries) LabelsPosition() QAbstractBarSeries__LabelsPosition {
	return (QAbstractBarSeries__LabelsPosition)(C.QAbstractBarSeries_labelsPosition(this.h))
}

func (this *QAbstractBarSeries) SetLabelsPrecision(precision int) {
	C.QAbstractBarSeries_setLabelsPrecision(this.h, (C.int)(precision))
}

func (this *QAbstractBarSeries) LabelsPrecision() int {
	return (int)(C.QAbstractBarSeries_labelsPrecision(this.h))
}

func (this *QAbstractBarSeries) Clicked(index int, barset *QBarSet) {
	C.QAbstractBarSeries_clicked(this.h, (C.int)(index), barset.cPointer())
}
func (this *QAbstractBarSeries) OnClicked(slot func(index int, barset *QBarSet)) {
	C.QAbstractBarSeries_connect_clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractBarSeries_clicked
func miqt_exec_callback_QAbstractBarSeries_clicked(cb C.intptr_t, index C.int, barset *C.QBarSet) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int, barset *QBarSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	slotval2 := newQBarSet(barset)

	gofunc(slotval1, slotval2)
}

func (this *QAbstractBarSeries) Hovered(status bool, index int, barset *QBarSet) {
	C.QAbstractBarSeries_hovered(this.h, (C.bool)(status), (C.int)(index), barset.cPointer())
}
func (this *QAbstractBarSeries) OnHovered(slot func(status bool, index int, barset *QBarSet)) {
	C.QAbstractBarSeries_connect_hovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractBarSeries_hovered
func miqt_exec_callback_QAbstractBarSeries_hovered(cb C.intptr_t, status C.bool, index C.int, barset *C.QBarSet) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status bool, index int, barset *QBarSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(status)

	slotval2 := (int)(index)

	slotval3 := newQBarSet(barset)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QAbstractBarSeries) Pressed(index int, barset *QBarSet) {
	C.QAbstractBarSeries_pressed(this.h, (C.int)(index), barset.cPointer())
}
func (this *QAbstractBarSeries) OnPressed(slot func(index int, barset *QBarSet)) {
	C.QAbstractBarSeries_connect_pressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractBarSeries_pressed
func miqt_exec_callback_QAbstractBarSeries_pressed(cb C.intptr_t, index C.int, barset *C.QBarSet) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int, barset *QBarSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	slotval2 := newQBarSet(barset)

	gofunc(slotval1, slotval2)
}

func (this *QAbstractBarSeries) Released(index int, barset *QBarSet) {
	C.QAbstractBarSeries_released(this.h, (C.int)(index), barset.cPointer())
}
func (this *QAbstractBarSeries) OnReleased(slot func(index int, barset *QBarSet)) {
	C.QAbstractBarSeries_connect_released(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractBarSeries_released
func miqt_exec_callback_QAbstractBarSeries_released(cb C.intptr_t, index C.int, barset *C.QBarSet) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int, barset *QBarSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	slotval2 := newQBarSet(barset)

	gofunc(slotval1, slotval2)
}

func (this *QAbstractBarSeries) DoubleClicked(index int, barset *QBarSet) {
	C.QAbstractBarSeries_doubleClicked(this.h, (C.int)(index), barset.cPointer())
}
func (this *QAbstractBarSeries) OnDoubleClicked(slot func(index int, barset *QBarSet)) {
	C.QAbstractBarSeries_connect_doubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractBarSeries_doubleClicked
func miqt_exec_callback_QAbstractBarSeries_doubleClicked(cb C.intptr_t, index C.int, barset *C.QBarSet) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int, barset *QBarSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	slotval2 := newQBarSet(barset)

	gofunc(slotval1, slotval2)
}

func (this *QAbstractBarSeries) CountChanged() {
	C.QAbstractBarSeries_countChanged(this.h)
}
func (this *QAbstractBarSeries) OnCountChanged(slot func()) {
	C.QAbstractBarSeries_connect_countChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractBarSeries_countChanged
func miqt_exec_callback_QAbstractBarSeries_countChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractBarSeries) LabelsVisibleChanged() {
	C.QAbstractBarSeries_labelsVisibleChanged(this.h)
}
func (this *QAbstractBarSeries) OnLabelsVisibleChanged(slot func()) {
	C.QAbstractBarSeries_connect_labelsVisibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractBarSeries_labelsVisibleChanged
func miqt_exec_callback_QAbstractBarSeries_labelsVisibleChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractBarSeries) LabelsFormatChanged(format string) {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	C.QAbstractBarSeries_labelsFormatChanged(this.h, format_ms)
}
func (this *QAbstractBarSeries) OnLabelsFormatChanged(slot func(format string)) {
	C.QAbstractBarSeries_connect_labelsFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractBarSeries_labelsFormatChanged
func miqt_exec_callback_QAbstractBarSeries_labelsFormatChanged(cb C.intptr_t, format C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(format string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var format_ms C.struct_miqt_string = format
	format_ret := C.GoStringN(format_ms.data, C.int(int64(format_ms.len)))
	C.free(unsafe.Pointer(format_ms.data))
	slotval1 := format_ret

	gofunc(slotval1)
}

func (this *QAbstractBarSeries) LabelsPositionChanged(position QAbstractBarSeries__LabelsPosition) {
	C.QAbstractBarSeries_labelsPositionChanged(this.h, (C.int)(position))
}
func (this *QAbstractBarSeries) OnLabelsPositionChanged(slot func(position QAbstractBarSeries__LabelsPosition)) {
	C.QAbstractBarSeries_connect_labelsPositionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractBarSeries_labelsPositionChanged
func miqt_exec_callback_QAbstractBarSeries_labelsPositionChanged(cb C.intptr_t, position C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position QAbstractBarSeries__LabelsPosition))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractBarSeries__LabelsPosition)(position)

	gofunc(slotval1)
}

func (this *QAbstractBarSeries) LabelsAngleChanged(angle float64) {
	C.QAbstractBarSeries_labelsAngleChanged(this.h, (C.double)(angle))
}
func (this *QAbstractBarSeries) OnLabelsAngleChanged(slot func(angle float64)) {
	C.QAbstractBarSeries_connect_labelsAngleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractBarSeries_labelsAngleChanged
func miqt_exec_callback_QAbstractBarSeries_labelsAngleChanged(cb C.intptr_t, angle C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(angle float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(angle)

	gofunc(slotval1)
}

func (this *QAbstractBarSeries) LabelsPrecisionChanged(precision int) {
	C.QAbstractBarSeries_labelsPrecisionChanged(this.h, (C.int)(precision))
}
func (this *QAbstractBarSeries) OnLabelsPrecisionChanged(slot func(precision int)) {
	C.QAbstractBarSeries_connect_labelsPrecisionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractBarSeries_labelsPrecisionChanged
func miqt_exec_callback_QAbstractBarSeries_labelsPrecisionChanged(cb C.intptr_t, precision C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(precision int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(precision)

	gofunc(slotval1)
}

func (this *QAbstractBarSeries) BarsetsAdded(sets []*QBarSet) {
	sets_CArray := (*[0xffff]*C.QBarSet)(C.malloc(C.size_t(8 * len(sets))))
	defer C.free(unsafe.Pointer(sets_CArray))
	for i := range sets {
		sets_CArray[i] = sets[i].cPointer()
	}
	sets_ma := C.struct_miqt_array{len: C.size_t(len(sets)), data: unsafe.Pointer(sets_CArray)}
	C.QAbstractBarSeries_barsetsAdded(this.h, sets_ma)
}
func (this *QAbstractBarSeries) OnBarsetsAdded(slot func(sets []*QBarSet)) {
	C.QAbstractBarSeries_connect_barsetsAdded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractBarSeries_barsetsAdded
func miqt_exec_callback_QAbstractBarSeries_barsetsAdded(cb C.intptr_t, sets C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(sets []*QBarSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var sets_ma C.struct_miqt_array = sets
	sets_ret := make([]*QBarSet, int(sets_ma.len))
	sets_outCast := (*[0xffff]*C.QBarSet)(unsafe.Pointer(sets_ma.data)) // hey ya
	for i := 0; i < int(sets_ma.len); i++ {
		sets_ret[i] = newQBarSet(sets_outCast[i])
	}
	slotval1 := sets_ret

	gofunc(slotval1)
}

func (this *QAbstractBarSeries) BarsetsRemoved(sets []*QBarSet) {
	sets_CArray := (*[0xffff]*C.QBarSet)(C.malloc(C.size_t(8 * len(sets))))
	defer C.free(unsafe.Pointer(sets_CArray))
	for i := range sets {
		sets_CArray[i] = sets[i].cPointer()
	}
	sets_ma := C.struct_miqt_array{len: C.size_t(len(sets)), data: unsafe.Pointer(sets_CArray)}
	C.QAbstractBarSeries_barsetsRemoved(this.h, sets_ma)
}
func (this *QAbstractBarSeries) OnBarsetsRemoved(slot func(sets []*QBarSet)) {
	C.QAbstractBarSeries_connect_barsetsRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractBarSeries_barsetsRemoved
func miqt_exec_callback_QAbstractBarSeries_barsetsRemoved(cb C.intptr_t, sets C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(sets []*QBarSet))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var sets_ma C.struct_miqt_array = sets
	sets_ret := make([]*QBarSet, int(sets_ma.len))
	sets_outCast := (*[0xffff]*C.QBarSet)(unsafe.Pointer(sets_ma.data)) // hey ya
	for i := 0; i < int(sets_ma.len); i++ {
		sets_ret[i] = newQBarSet(sets_outCast[i])
	}
	slotval1 := sets_ret

	gofunc(slotval1)
}

func QAbstractBarSeries_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractBarSeries_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractBarSeries_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractBarSeries_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractBarSeries) SetLabelsVisible1(visible bool) {
	C.QAbstractBarSeries_setLabelsVisible1(this.h, (C.bool)(visible))
}

// Delete this object from C++ memory.
func (this *QAbstractBarSeries) Delete() {
	C.QAbstractBarSeries_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractBarSeries) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractBarSeries) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
