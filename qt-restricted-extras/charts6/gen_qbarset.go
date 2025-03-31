package charts6

/*

#include "gen_qbarset.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QBarSet struct {
	h *C.QBarSet
	*qt6.QObject
}

func (this *QBarSet) cPointer() *C.QBarSet {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBarSet) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBarSet constructs the type using only CGO pointers.
func newQBarSet(h *C.QBarSet) *QBarSet {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QBarSet_virtbase(h, &outptr_QObject)

	return &QBarSet{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQBarSet constructs the type using only unsafe pointers.
func UnsafeNewQBarSet(h unsafe.Pointer) *QBarSet {
	return newQBarSet((*C.QBarSet)(h))
}

// NewQBarSet constructs a new QBarSet object.
func NewQBarSet(label string) *QBarSet {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))

	return newQBarSet(C.QBarSet_new(label_ms))
}

// NewQBarSet2 constructs a new QBarSet object.
func NewQBarSet2(label string, parent *qt6.QObject) *QBarSet {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))

	return newQBarSet(C.QBarSet_new2(label_ms, (*C.QObject)(parent.UnsafePointer())))
}

func (this *QBarSet) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QBarSet_metaObject(this.h)))
}

func (this *QBarSet) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QBarSet_metacast(this.h, param1_Cstring))
}

func QBarSet_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QBarSet_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBarSet) SetLabel(label string) {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	C.QBarSet_setLabel(this.h, label_ms)
}

func (this *QBarSet) Label() string {
	var _ms C.struct_miqt_string = C.QBarSet_label(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBarSet) Append(value float64) {
	C.QBarSet_append(this.h, (C.double)(value))
}

func (this *QBarSet) AppendWithValues(values []float64) {
	values_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(values))))
	defer C.free(unsafe.Pointer(values_CArray))
	for i := range values {
		values_CArray[i] = (C.double)(values[i])
	}
	values_ma := C.struct_miqt_array{len: C.size_t(len(values)), data: unsafe.Pointer(values_CArray)}
	C.QBarSet_appendWithValues(this.h, values_ma)
}

func (this *QBarSet) OperatorShiftLeft(value *float64) *QBarSet {
	return newQBarSet(C.QBarSet_operatorShiftLeft(this.h, (*C.double)(unsafe.Pointer(value))))
}

func (this *QBarSet) Insert(index int, value float64) {
	C.QBarSet_insert(this.h, (C.int)(index), (C.double)(value))
}

func (this *QBarSet) Remove(index int) {
	C.QBarSet_remove(this.h, (C.int)(index))
}

func (this *QBarSet) Replace(index int, value float64) {
	C.QBarSet_replace(this.h, (C.int)(index), (C.double)(value))
}

func (this *QBarSet) At(index int) float64 {
	return (float64)(C.QBarSet_at(this.h, (C.int)(index)))
}

func (this *QBarSet) OperatorSubscript(index int) float64 {
	return (float64)(C.QBarSet_operatorSubscript(this.h, (C.int)(index)))
}

func (this *QBarSet) Count() int {
	return (int)(C.QBarSet_count(this.h))
}

func (this *QBarSet) Sum() float64 {
	return (float64)(C.QBarSet_sum(this.h))
}

func (this *QBarSet) SetPen(pen *qt6.QPen) {
	C.QBarSet_setPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QBarSet) Pen() *qt6.QPen {
	_goptr := qt6.UnsafeNewQPen(unsafe.Pointer(C.QBarSet_pen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBarSet) SetBrush(brush *qt6.QBrush) {
	C.QBarSet_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QBarSet) Brush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QBarSet_brush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBarSet) SetLabelBrush(brush *qt6.QBrush) {
	C.QBarSet_setLabelBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QBarSet) LabelBrush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QBarSet_labelBrush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBarSet) SetLabelFont(font *qt6.QFont) {
	C.QBarSet_setLabelFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QBarSet) LabelFont() *qt6.QFont {
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QBarSet_labelFont(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBarSet) Color() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QBarSet_color(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBarSet) SetColor(color qt6.QColor) {
	C.QBarSet_setColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QBarSet) BorderColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QBarSet_borderColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBarSet) SetBorderColor(color qt6.QColor) {
	C.QBarSet_setBorderColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QBarSet) LabelColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QBarSet_labelColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBarSet) SetLabelColor(color qt6.QColor) {
	C.QBarSet_setLabelColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QBarSet) SelectedColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QBarSet_selectedColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBarSet) SetSelectedColor(color *qt6.QColor) {
	C.QBarSet_setSelectedColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QBarSet) IsBarSelected(index int) bool {
	return (bool)(C.QBarSet_isBarSelected(this.h, (C.int)(index)))
}

func (this *QBarSet) SelectBar(index int) {
	C.QBarSet_selectBar(this.h, (C.int)(index))
}

func (this *QBarSet) DeselectBar(index int) {
	C.QBarSet_deselectBar(this.h, (C.int)(index))
}

func (this *QBarSet) SetBarSelected(index int, selected bool) {
	C.QBarSet_setBarSelected(this.h, (C.int)(index), (C.bool)(selected))
}

func (this *QBarSet) SelectAllBars() {
	C.QBarSet_selectAllBars(this.h)
}

func (this *QBarSet) DeselectAllBars() {
	C.QBarSet_deselectAllBars(this.h)
}

func (this *QBarSet) SelectBars(indexes []int) {
	indexes_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = (C.int)(indexes[i])
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	C.QBarSet_selectBars(this.h, indexes_ma)
}

func (this *QBarSet) DeselectBars(indexes []int) {
	indexes_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = (C.int)(indexes[i])
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	C.QBarSet_deselectBars(this.h, indexes_ma)
}

func (this *QBarSet) ToggleSelection(indexes []int) {
	indexes_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = (C.int)(indexes[i])
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	C.QBarSet_toggleSelection(this.h, indexes_ma)
}

func (this *QBarSet) SelectedBars() []int {
	var _ma C.struct_miqt_array = C.QBarSet_selectedBars(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QBarSet) Clicked(index int) {
	C.QBarSet_clicked(this.h, (C.int)(index))
}
func (this *QBarSet) OnClicked(slot func(index int)) {
	C.QBarSet_connect_clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarSet_clicked
func miqt_exec_callback_QBarSet_clicked(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QBarSet) Hovered(status bool, index int) {
	C.QBarSet_hovered(this.h, (C.bool)(status), (C.int)(index))
}
func (this *QBarSet) OnHovered(slot func(status bool, index int)) {
	C.QBarSet_connect_hovered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarSet_hovered
func miqt_exec_callback_QBarSet_hovered(cb C.intptr_t, status C.bool, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(status bool, index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(status)

	slotval2 := (int)(index)

	gofunc(slotval1, slotval2)
}

func (this *QBarSet) Pressed(index int) {
	C.QBarSet_pressed(this.h, (C.int)(index))
}
func (this *QBarSet) OnPressed(slot func(index int)) {
	C.QBarSet_connect_pressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarSet_pressed
func miqt_exec_callback_QBarSet_pressed(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QBarSet) Released(index int) {
	C.QBarSet_released(this.h, (C.int)(index))
}
func (this *QBarSet) OnReleased(slot func(index int)) {
	C.QBarSet_connect_released(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarSet_released
func miqt_exec_callback_QBarSet_released(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QBarSet) DoubleClicked(index int) {
	C.QBarSet_doubleClicked(this.h, (C.int)(index))
}
func (this *QBarSet) OnDoubleClicked(slot func(index int)) {
	C.QBarSet_connect_doubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarSet_doubleClicked
func miqt_exec_callback_QBarSet_doubleClicked(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QBarSet) PenChanged() {
	C.QBarSet_penChanged(this.h)
}
func (this *QBarSet) OnPenChanged(slot func()) {
	C.QBarSet_connect_penChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarSet_penChanged
func miqt_exec_callback_QBarSet_penChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QBarSet) BrushChanged() {
	C.QBarSet_brushChanged(this.h)
}
func (this *QBarSet) OnBrushChanged(slot func()) {
	C.QBarSet_connect_brushChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarSet_brushChanged
func miqt_exec_callback_QBarSet_brushChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QBarSet) LabelChanged() {
	C.QBarSet_labelChanged(this.h)
}
func (this *QBarSet) OnLabelChanged(slot func()) {
	C.QBarSet_connect_labelChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarSet_labelChanged
func miqt_exec_callback_QBarSet_labelChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QBarSet) LabelBrushChanged() {
	C.QBarSet_labelBrushChanged(this.h)
}
func (this *QBarSet) OnLabelBrushChanged(slot func()) {
	C.QBarSet_connect_labelBrushChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarSet_labelBrushChanged
func miqt_exec_callback_QBarSet_labelBrushChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QBarSet) LabelFontChanged() {
	C.QBarSet_labelFontChanged(this.h)
}
func (this *QBarSet) OnLabelFontChanged(slot func()) {
	C.QBarSet_connect_labelFontChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarSet_labelFontChanged
func miqt_exec_callback_QBarSet_labelFontChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QBarSet) ColorChanged(color qt6.QColor) {
	C.QBarSet_colorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QBarSet) OnColorChanged(slot func(color qt6.QColor)) {
	C.QBarSet_connect_colorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarSet_colorChanged
func miqt_exec_callback_QBarSet_colorChanged(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	color_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(color))
	color_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *color_goptr

	gofunc(slotval1)
}

func (this *QBarSet) BorderColorChanged(color qt6.QColor) {
	C.QBarSet_borderColorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QBarSet) OnBorderColorChanged(slot func(color qt6.QColor)) {
	C.QBarSet_connect_borderColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarSet_borderColorChanged
func miqt_exec_callback_QBarSet_borderColorChanged(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	color_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(color))
	color_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *color_goptr

	gofunc(slotval1)
}

func (this *QBarSet) LabelColorChanged(color qt6.QColor) {
	C.QBarSet_labelColorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QBarSet) OnLabelColorChanged(slot func(color qt6.QColor)) {
	C.QBarSet_connect_labelColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarSet_labelColorChanged
func miqt_exec_callback_QBarSet_labelColorChanged(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	color_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(color))
	color_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *color_goptr

	gofunc(slotval1)
}

func (this *QBarSet) SelectedColorChanged(color *qt6.QColor) {
	C.QBarSet_selectedColorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QBarSet) OnSelectedColorChanged(slot func(color *qt6.QColor)) {
	C.QBarSet_connect_selectedColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarSet_selectedColorChanged
func miqt_exec_callback_QBarSet_selectedColorChanged(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(color))

	gofunc(slotval1)
}

func (this *QBarSet) ValuesAdded(index int, count int) {
	C.QBarSet_valuesAdded(this.h, (C.int)(index), (C.int)(count))
}
func (this *QBarSet) OnValuesAdded(slot func(index int, count int)) {
	C.QBarSet_connect_valuesAdded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarSet_valuesAdded
func miqt_exec_callback_QBarSet_valuesAdded(cb C.intptr_t, index C.int, count C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int, count int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	slotval2 := (int)(count)

	gofunc(slotval1, slotval2)
}

func (this *QBarSet) ValuesRemoved(index int, count int) {
	C.QBarSet_valuesRemoved(this.h, (C.int)(index), (C.int)(count))
}
func (this *QBarSet) OnValuesRemoved(slot func(index int, count int)) {
	C.QBarSet_connect_valuesRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarSet_valuesRemoved
func miqt_exec_callback_QBarSet_valuesRemoved(cb C.intptr_t, index C.int, count C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int, count int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	slotval2 := (int)(count)

	gofunc(slotval1, slotval2)
}

func (this *QBarSet) ValueChanged(index int) {
	C.QBarSet_valueChanged(this.h, (C.int)(index))
}
func (this *QBarSet) OnValueChanged(slot func(index int)) {
	C.QBarSet_connect_valueChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarSet_valueChanged
func miqt_exec_callback_QBarSet_valueChanged(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QBarSet) SelectedBarsChanged(indexes []int) {
	indexes_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = (C.int)(indexes[i])
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	C.QBarSet_selectedBarsChanged(this.h, indexes_ma)
}
func (this *QBarSet) OnSelectedBarsChanged(slot func(indexes []int)) {
	C.QBarSet_connect_selectedBarsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QBarSet_selectedBarsChanged
func miqt_exec_callback_QBarSet_selectedBarsChanged(cb C.intptr_t, indexes C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(indexes []int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var indexes_ma C.struct_miqt_array = indexes
	indexes_ret := make([]int, int(indexes_ma.len))
	indexes_outCast := (*[0xffff]C.int)(unsafe.Pointer(indexes_ma.data)) // hey ya
	for i := 0; i < int(indexes_ma.len); i++ {
		indexes_ret[i] = (int)(indexes_outCast[i])
	}
	slotval1 := indexes_ret

	gofunc(slotval1)
}

func QBarSet_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBarSet_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBarSet_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBarSet_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBarSet) Remove2(index int, count int) {
	C.QBarSet_remove2(this.h, (C.int)(index), (C.int)(count))
}

// Sender can only be called from a QBarSet that was directly constructed.
func (this *QBarSet) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QBarSet_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QBarSet that was directly constructed.
func (this *QBarSet) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QBarSet_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QBarSet that was directly constructed.
func (this *QBarSet) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QBarSet_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QBarSet that was directly constructed.
func (this *QBarSet) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QBarSet_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QBarSet) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QBarSet_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QBarSet) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QBarSet_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarSet_event
func miqt_exec_callback_QBarSet_event(self *C.QBarSet, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QBarSet{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QBarSet) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QBarSet_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QBarSet) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QBarSet_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarSet_eventFilter
func miqt_exec_callback_QBarSet_eventFilter(self *C.QBarSet, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QBarSet{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QBarSet) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QBarSet_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QBarSet) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QBarSet_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarSet_timerEvent
func miqt_exec_callback_QBarSet_timerEvent(self *C.QBarSet, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QBarSet{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QBarSet) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QBarSet_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QBarSet) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QBarSet_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarSet_childEvent
func miqt_exec_callback_QBarSet_childEvent(self *C.QBarSet, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QBarSet{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QBarSet) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QBarSet_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QBarSet) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QBarSet_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarSet_customEvent
func miqt_exec_callback_QBarSet_customEvent(self *C.QBarSet, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QBarSet{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QBarSet) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QBarSet_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QBarSet) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QBarSet_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarSet_connectNotify
func miqt_exec_callback_QBarSet_connectNotify(self *C.QBarSet, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QBarSet{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QBarSet) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QBarSet_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QBarSet) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QBarSet_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBarSet_disconnectNotify
func miqt_exec_callback_QBarSet_disconnectNotify(self *C.QBarSet, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QBarSet{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QBarSet) Delete() {
	C.QBarSet_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBarSet) GoGC() {
	runtime.SetFinalizer(this, func(this *QBarSet) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
