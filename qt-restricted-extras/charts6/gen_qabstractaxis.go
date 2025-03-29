package charts6

/*

#include "gen_qabstractaxis.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractAxis__AxisType int

const (
	QAbstractAxis__AxisTypeNoAxis      QAbstractAxis__AxisType = 0
	QAbstractAxis__AxisTypeValue       QAbstractAxis__AxisType = 1
	QAbstractAxis__AxisTypeBarCategory QAbstractAxis__AxisType = 2
	QAbstractAxis__AxisTypeCategory    QAbstractAxis__AxisType = 4
	QAbstractAxis__AxisTypeDateTime    QAbstractAxis__AxisType = 8
	QAbstractAxis__AxisTypeLogValue    QAbstractAxis__AxisType = 16
	QAbstractAxis__AxisTypeColor       QAbstractAxis__AxisType = 32
)

type QAbstractAxis struct {
	h *C.QAbstractAxis
	*qt6.QObject
}

func (this *QAbstractAxis) cPointer() *C.QAbstractAxis {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractAxis) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractAxis constructs the type using only CGO pointers.
func newQAbstractAxis(h *C.QAbstractAxis) *QAbstractAxis {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAbstractAxis_virtbase(h, &outptr_QObject)

	return &QAbstractAxis{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQAbstractAxis constructs the type using only unsafe pointers.
func UnsafeNewQAbstractAxis(h unsafe.Pointer) *QAbstractAxis {
	return newQAbstractAxis((*C.QAbstractAxis)(h))
}

func (this *QAbstractAxis) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractAxis_metaObject(this.h)))
}

func (this *QAbstractAxis) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractAxis_metacast(this.h, param1_Cstring))
}

func QAbstractAxis_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractAxis_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractAxis) Type() QAbstractAxis__AxisType {
	return (QAbstractAxis__AxisType)(C.QAbstractAxis_type(this.h))
}

func (this *QAbstractAxis) IsVisible() bool {
	return (bool)(C.QAbstractAxis_isVisible(this.h))
}

func (this *QAbstractAxis) SetVisible() {
	C.QAbstractAxis_setVisible(this.h)
}

func (this *QAbstractAxis) Show() {
	C.QAbstractAxis_show(this.h)
}

func (this *QAbstractAxis) Hide() {
	C.QAbstractAxis_hide(this.h)
}

func (this *QAbstractAxis) IsLineVisible() bool {
	return (bool)(C.QAbstractAxis_isLineVisible(this.h))
}

func (this *QAbstractAxis) SetLineVisible() {
	C.QAbstractAxis_setLineVisible(this.h)
}

func (this *QAbstractAxis) SetLinePen(pen *qt6.QPen) {
	C.QAbstractAxis_setLinePen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QAbstractAxis) LinePen() *qt6.QPen {
	_goptr := qt6.UnsafeNewQPen(unsafe.Pointer(C.QAbstractAxis_linePen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractAxis) SetLinePenColor(color qt6.QColor) {
	C.QAbstractAxis_setLinePenColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QAbstractAxis) LinePenColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QAbstractAxis_linePenColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractAxis) IsGridLineVisible() bool {
	return (bool)(C.QAbstractAxis_isGridLineVisible(this.h))
}

func (this *QAbstractAxis) SetGridLineVisible() {
	C.QAbstractAxis_setGridLineVisible(this.h)
}

func (this *QAbstractAxis) SetGridLinePen(pen *qt6.QPen) {
	C.QAbstractAxis_setGridLinePen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QAbstractAxis) GridLinePen() *qt6.QPen {
	_goptr := qt6.UnsafeNewQPen(unsafe.Pointer(C.QAbstractAxis_gridLinePen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractAxis) IsMinorGridLineVisible() bool {
	return (bool)(C.QAbstractAxis_isMinorGridLineVisible(this.h))
}

func (this *QAbstractAxis) SetMinorGridLineVisible() {
	C.QAbstractAxis_setMinorGridLineVisible(this.h)
}

func (this *QAbstractAxis) SetMinorGridLinePen(pen *qt6.QPen) {
	C.QAbstractAxis_setMinorGridLinePen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QAbstractAxis) MinorGridLinePen() *qt6.QPen {
	_goptr := qt6.UnsafeNewQPen(unsafe.Pointer(C.QAbstractAxis_minorGridLinePen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractAxis) SetGridLineColor(color *qt6.QColor) {
	C.QAbstractAxis_setGridLineColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QAbstractAxis) GridLineColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QAbstractAxis_gridLineColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractAxis) SetMinorGridLineColor(color *qt6.QColor) {
	C.QAbstractAxis_setMinorGridLineColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QAbstractAxis) MinorGridLineColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QAbstractAxis_minorGridLineColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractAxis) LabelsVisible() bool {
	return (bool)(C.QAbstractAxis_labelsVisible(this.h))
}

func (this *QAbstractAxis) SetLabelsVisible() {
	C.QAbstractAxis_setLabelsVisible(this.h)
}

func (this *QAbstractAxis) SetLabelsBrush(brush *qt6.QBrush) {
	C.QAbstractAxis_setLabelsBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QAbstractAxis) LabelsBrush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QAbstractAxis_labelsBrush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractAxis) SetLabelsFont(font *qt6.QFont) {
	C.QAbstractAxis_setLabelsFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QAbstractAxis) LabelsFont() *qt6.QFont {
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QAbstractAxis_labelsFont(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractAxis) SetLabelsAngle(angle int) {
	C.QAbstractAxis_setLabelsAngle(this.h, (C.int)(angle))
}

func (this *QAbstractAxis) LabelsAngle() int {
	return (int)(C.QAbstractAxis_labelsAngle(this.h))
}

func (this *QAbstractAxis) SetLabelsColor(color qt6.QColor) {
	C.QAbstractAxis_setLabelsColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QAbstractAxis) LabelsColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QAbstractAxis_labelsColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractAxis) IsTitleVisible() bool {
	return (bool)(C.QAbstractAxis_isTitleVisible(this.h))
}

func (this *QAbstractAxis) SetTitleVisible() {
	C.QAbstractAxis_setTitleVisible(this.h)
}

func (this *QAbstractAxis) SetTitleBrush(brush *qt6.QBrush) {
	C.QAbstractAxis_setTitleBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QAbstractAxis) TitleBrush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QAbstractAxis_titleBrush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractAxis) SetTitleFont(font *qt6.QFont) {
	C.QAbstractAxis_setTitleFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QAbstractAxis) TitleFont() *qt6.QFont {
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QAbstractAxis_titleFont(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractAxis) SetTitleText(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QAbstractAxis_setTitleText(this.h, title_ms)
}

func (this *QAbstractAxis) TitleText() string {
	var _ms C.struct_miqt_string = C.QAbstractAxis_titleText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractAxis) ShadesVisible() bool {
	return (bool)(C.QAbstractAxis_shadesVisible(this.h))
}

func (this *QAbstractAxis) SetShadesVisible() {
	C.QAbstractAxis_setShadesVisible(this.h)
}

func (this *QAbstractAxis) SetShadesPen(pen *qt6.QPen) {
	C.QAbstractAxis_setShadesPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QAbstractAxis) ShadesPen() *qt6.QPen {
	_goptr := qt6.UnsafeNewQPen(unsafe.Pointer(C.QAbstractAxis_shadesPen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractAxis) SetShadesBrush(brush *qt6.QBrush) {
	C.QAbstractAxis_setShadesBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QAbstractAxis) ShadesBrush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QAbstractAxis_shadesBrush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractAxis) SetShadesColor(color qt6.QColor) {
	C.QAbstractAxis_setShadesColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QAbstractAxis) ShadesColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QAbstractAxis_shadesColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractAxis) SetShadesBorderColor(color qt6.QColor) {
	C.QAbstractAxis_setShadesBorderColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QAbstractAxis) ShadesBorderColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QAbstractAxis_shadesBorderColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractAxis) Orientation() qt6.Orientation {
	return (qt6.Orientation)(C.QAbstractAxis_orientation(this.h))
}

func (this *QAbstractAxis) Alignment() qt6.AlignmentFlag {
	return (qt6.AlignmentFlag)(C.QAbstractAxis_alignment(this.h))
}

func (this *QAbstractAxis) SetMin(min *qt6.QVariant) {
	C.QAbstractAxis_setMin(this.h, (*C.QVariant)(min.UnsafePointer()))
}

func (this *QAbstractAxis) SetMax(max *qt6.QVariant) {
	C.QAbstractAxis_setMax(this.h, (*C.QVariant)(max.UnsafePointer()))
}

func (this *QAbstractAxis) SetRange(min *qt6.QVariant, max *qt6.QVariant) {
	C.QAbstractAxis_setRange(this.h, (*C.QVariant)(min.UnsafePointer()), (*C.QVariant)(max.UnsafePointer()))
}

func (this *QAbstractAxis) SetReverse() {
	C.QAbstractAxis_setReverse(this.h)
}

func (this *QAbstractAxis) IsReverse() bool {
	return (bool)(C.QAbstractAxis_isReverse(this.h))
}

func (this *QAbstractAxis) SetLabelsEditable() {
	C.QAbstractAxis_setLabelsEditable(this.h)
}

func (this *QAbstractAxis) LabelsEditable() bool {
	return (bool)(C.QAbstractAxis_labelsEditable(this.h))
}

func (this *QAbstractAxis) LabelsTruncated() bool {
	return (bool)(C.QAbstractAxis_labelsTruncated(this.h))
}

func (this *QAbstractAxis) SetTruncateLabels() {
	C.QAbstractAxis_setTruncateLabels(this.h)
}

func (this *QAbstractAxis) TruncateLabels() bool {
	return (bool)(C.QAbstractAxis_truncateLabels(this.h))
}

func (this *QAbstractAxis) VisibleChanged(visible bool) {
	C.QAbstractAxis_visibleChanged(this.h, (C.bool)(visible))
}
func (this *QAbstractAxis) OnVisibleChanged(slot func(visible bool)) {
	C.QAbstractAxis_connect_visibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_visibleChanged
func miqt_exec_callback_QAbstractAxis_visibleChanged(cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc(slotval1)
}

func (this *QAbstractAxis) LinePenChanged(pen *qt6.QPen) {
	C.QAbstractAxis_linePenChanged(this.h, (*C.QPen)(pen.UnsafePointer()))
}
func (this *QAbstractAxis) OnLinePenChanged(slot func(pen *qt6.QPen)) {
	C.QAbstractAxis_connect_linePenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_linePenChanged
func miqt_exec_callback_QAbstractAxis_linePenChanged(cb C.intptr_t, pen *C.QPen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pen *qt6.QPen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPen(unsafe.Pointer(pen))

	gofunc(slotval1)
}

func (this *QAbstractAxis) LineVisibleChanged(visible bool) {
	C.QAbstractAxis_lineVisibleChanged(this.h, (C.bool)(visible))
}
func (this *QAbstractAxis) OnLineVisibleChanged(slot func(visible bool)) {
	C.QAbstractAxis_connect_lineVisibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_lineVisibleChanged
func miqt_exec_callback_QAbstractAxis_lineVisibleChanged(cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc(slotval1)
}

func (this *QAbstractAxis) LabelsVisibleChanged(visible bool) {
	C.QAbstractAxis_labelsVisibleChanged(this.h, (C.bool)(visible))
}
func (this *QAbstractAxis) OnLabelsVisibleChanged(slot func(visible bool)) {
	C.QAbstractAxis_connect_labelsVisibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_labelsVisibleChanged
func miqt_exec_callback_QAbstractAxis_labelsVisibleChanged(cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc(slotval1)
}

func (this *QAbstractAxis) LabelsBrushChanged(brush *qt6.QBrush) {
	C.QAbstractAxis_labelsBrushChanged(this.h, (*C.QBrush)(brush.UnsafePointer()))
}
func (this *QAbstractAxis) OnLabelsBrushChanged(slot func(brush *qt6.QBrush)) {
	C.QAbstractAxis_connect_labelsBrushChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_labelsBrushChanged
func miqt_exec_callback_QAbstractAxis_labelsBrushChanged(cb C.intptr_t, brush *C.QBrush) {
	gofunc, ok := cgo.Handle(cb).Value().(func(brush *qt6.QBrush))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQBrush(unsafe.Pointer(brush))

	gofunc(slotval1)
}

func (this *QAbstractAxis) LabelsFontChanged(pen *qt6.QFont) {
	C.QAbstractAxis_labelsFontChanged(this.h, (*C.QFont)(pen.UnsafePointer()))
}
func (this *QAbstractAxis) OnLabelsFontChanged(slot func(pen *qt6.QFont)) {
	C.QAbstractAxis_connect_labelsFontChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_labelsFontChanged
func miqt_exec_callback_QAbstractAxis_labelsFontChanged(cb C.intptr_t, pen *C.QFont) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pen *qt6.QFont))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFont(unsafe.Pointer(pen))

	gofunc(slotval1)
}

func (this *QAbstractAxis) LabelsAngleChanged(angle int) {
	C.QAbstractAxis_labelsAngleChanged(this.h, (C.int)(angle))
}
func (this *QAbstractAxis) OnLabelsAngleChanged(slot func(angle int)) {
	C.QAbstractAxis_connect_labelsAngleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_labelsAngleChanged
func miqt_exec_callback_QAbstractAxis_labelsAngleChanged(cb C.intptr_t, angle C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(angle int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(angle)

	gofunc(slotval1)
}

func (this *QAbstractAxis) GridLinePenChanged(pen *qt6.QPen) {
	C.QAbstractAxis_gridLinePenChanged(this.h, (*C.QPen)(pen.UnsafePointer()))
}
func (this *QAbstractAxis) OnGridLinePenChanged(slot func(pen *qt6.QPen)) {
	C.QAbstractAxis_connect_gridLinePenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_gridLinePenChanged
func miqt_exec_callback_QAbstractAxis_gridLinePenChanged(cb C.intptr_t, pen *C.QPen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pen *qt6.QPen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPen(unsafe.Pointer(pen))

	gofunc(slotval1)
}

func (this *QAbstractAxis) GridVisibleChanged(visible bool) {
	C.QAbstractAxis_gridVisibleChanged(this.h, (C.bool)(visible))
}
func (this *QAbstractAxis) OnGridVisibleChanged(slot func(visible bool)) {
	C.QAbstractAxis_connect_gridVisibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_gridVisibleChanged
func miqt_exec_callback_QAbstractAxis_gridVisibleChanged(cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc(slotval1)
}

func (this *QAbstractAxis) MinorGridVisibleChanged(visible bool) {
	C.QAbstractAxis_minorGridVisibleChanged(this.h, (C.bool)(visible))
}
func (this *QAbstractAxis) OnMinorGridVisibleChanged(slot func(visible bool)) {
	C.QAbstractAxis_connect_minorGridVisibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_minorGridVisibleChanged
func miqt_exec_callback_QAbstractAxis_minorGridVisibleChanged(cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc(slotval1)
}

func (this *QAbstractAxis) MinorGridLinePenChanged(pen *qt6.QPen) {
	C.QAbstractAxis_minorGridLinePenChanged(this.h, (*C.QPen)(pen.UnsafePointer()))
}
func (this *QAbstractAxis) OnMinorGridLinePenChanged(slot func(pen *qt6.QPen)) {
	C.QAbstractAxis_connect_minorGridLinePenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_minorGridLinePenChanged
func miqt_exec_callback_QAbstractAxis_minorGridLinePenChanged(cb C.intptr_t, pen *C.QPen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pen *qt6.QPen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPen(unsafe.Pointer(pen))

	gofunc(slotval1)
}

func (this *QAbstractAxis) GridLineColorChanged(color *qt6.QColor) {
	C.QAbstractAxis_gridLineColorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QAbstractAxis) OnGridLineColorChanged(slot func(color *qt6.QColor)) {
	C.QAbstractAxis_connect_gridLineColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_gridLineColorChanged
func miqt_exec_callback_QAbstractAxis_gridLineColorChanged(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(color))

	gofunc(slotval1)
}

func (this *QAbstractAxis) MinorGridLineColorChanged(color *qt6.QColor) {
	C.QAbstractAxis_minorGridLineColorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QAbstractAxis) OnMinorGridLineColorChanged(slot func(color *qt6.QColor)) {
	C.QAbstractAxis_connect_minorGridLineColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_minorGridLineColorChanged
func miqt_exec_callback_QAbstractAxis_minorGridLineColorChanged(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color *qt6.QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQColor(unsafe.Pointer(color))

	gofunc(slotval1)
}

func (this *QAbstractAxis) ColorChanged(color qt6.QColor) {
	C.QAbstractAxis_colorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QAbstractAxis) OnColorChanged(slot func(color qt6.QColor)) {
	C.QAbstractAxis_connect_colorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_colorChanged
func miqt_exec_callback_QAbstractAxis_colorChanged(cb C.intptr_t, color *C.QColor) {
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

func (this *QAbstractAxis) LabelsColorChanged(color qt6.QColor) {
	C.QAbstractAxis_labelsColorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QAbstractAxis) OnLabelsColorChanged(slot func(color qt6.QColor)) {
	C.QAbstractAxis_connect_labelsColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_labelsColorChanged
func miqt_exec_callback_QAbstractAxis_labelsColorChanged(cb C.intptr_t, color *C.QColor) {
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

func (this *QAbstractAxis) TitleTextChanged(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QAbstractAxis_titleTextChanged(this.h, title_ms)
}
func (this *QAbstractAxis) OnTitleTextChanged(slot func(title string)) {
	C.QAbstractAxis_connect_titleTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_titleTextChanged
func miqt_exec_callback_QAbstractAxis_titleTextChanged(cb C.intptr_t, title C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(title string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var title_ms C.struct_miqt_string = title
	title_ret := C.GoStringN(title_ms.data, C.int(int64(title_ms.len)))
	C.free(unsafe.Pointer(title_ms.data))
	slotval1 := title_ret

	gofunc(slotval1)
}

func (this *QAbstractAxis) TitleBrushChanged(brush *qt6.QBrush) {
	C.QAbstractAxis_titleBrushChanged(this.h, (*C.QBrush)(brush.UnsafePointer()))
}
func (this *QAbstractAxis) OnTitleBrushChanged(slot func(brush *qt6.QBrush)) {
	C.QAbstractAxis_connect_titleBrushChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_titleBrushChanged
func miqt_exec_callback_QAbstractAxis_titleBrushChanged(cb C.intptr_t, brush *C.QBrush) {
	gofunc, ok := cgo.Handle(cb).Value().(func(brush *qt6.QBrush))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQBrush(unsafe.Pointer(brush))

	gofunc(slotval1)
}

func (this *QAbstractAxis) TitleVisibleChanged(visible bool) {
	C.QAbstractAxis_titleVisibleChanged(this.h, (C.bool)(visible))
}
func (this *QAbstractAxis) OnTitleVisibleChanged(slot func(visible bool)) {
	C.QAbstractAxis_connect_titleVisibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_titleVisibleChanged
func miqt_exec_callback_QAbstractAxis_titleVisibleChanged(cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc(slotval1)
}

func (this *QAbstractAxis) TitleFontChanged(font *qt6.QFont) {
	C.QAbstractAxis_titleFontChanged(this.h, (*C.QFont)(font.UnsafePointer()))
}
func (this *QAbstractAxis) OnTitleFontChanged(slot func(font *qt6.QFont)) {
	C.QAbstractAxis_connect_titleFontChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_titleFontChanged
func miqt_exec_callback_QAbstractAxis_titleFontChanged(cb C.intptr_t, font *C.QFont) {
	gofunc, ok := cgo.Handle(cb).Value().(func(font *qt6.QFont))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFont(unsafe.Pointer(font))

	gofunc(slotval1)
}

func (this *QAbstractAxis) ShadesVisibleChanged(visible bool) {
	C.QAbstractAxis_shadesVisibleChanged(this.h, (C.bool)(visible))
}
func (this *QAbstractAxis) OnShadesVisibleChanged(slot func(visible bool)) {
	C.QAbstractAxis_connect_shadesVisibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_shadesVisibleChanged
func miqt_exec_callback_QAbstractAxis_shadesVisibleChanged(cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc(slotval1)
}

func (this *QAbstractAxis) ShadesColorChanged(color qt6.QColor) {
	C.QAbstractAxis_shadesColorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QAbstractAxis) OnShadesColorChanged(slot func(color qt6.QColor)) {
	C.QAbstractAxis_connect_shadesColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_shadesColorChanged
func miqt_exec_callback_QAbstractAxis_shadesColorChanged(cb C.intptr_t, color *C.QColor) {
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

func (this *QAbstractAxis) ShadesBorderColorChanged(color qt6.QColor) {
	C.QAbstractAxis_shadesBorderColorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QAbstractAxis) OnShadesBorderColorChanged(slot func(color qt6.QColor)) {
	C.QAbstractAxis_connect_shadesBorderColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_shadesBorderColorChanged
func miqt_exec_callback_QAbstractAxis_shadesBorderColorChanged(cb C.intptr_t, color *C.QColor) {
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

func (this *QAbstractAxis) ShadesPenChanged(pen *qt6.QPen) {
	C.QAbstractAxis_shadesPenChanged(this.h, (*C.QPen)(pen.UnsafePointer()))
}
func (this *QAbstractAxis) OnShadesPenChanged(slot func(pen *qt6.QPen)) {
	C.QAbstractAxis_connect_shadesPenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_shadesPenChanged
func miqt_exec_callback_QAbstractAxis_shadesPenChanged(cb C.intptr_t, pen *C.QPen) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pen *qt6.QPen))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPen(unsafe.Pointer(pen))

	gofunc(slotval1)
}

func (this *QAbstractAxis) ShadesBrushChanged(brush *qt6.QBrush) {
	C.QAbstractAxis_shadesBrushChanged(this.h, (*C.QBrush)(brush.UnsafePointer()))
}
func (this *QAbstractAxis) OnShadesBrushChanged(slot func(brush *qt6.QBrush)) {
	C.QAbstractAxis_connect_shadesBrushChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_shadesBrushChanged
func miqt_exec_callback_QAbstractAxis_shadesBrushChanged(cb C.intptr_t, brush *C.QBrush) {
	gofunc, ok := cgo.Handle(cb).Value().(func(brush *qt6.QBrush))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQBrush(unsafe.Pointer(brush))

	gofunc(slotval1)
}

func (this *QAbstractAxis) ReverseChanged(reverse bool) {
	C.QAbstractAxis_reverseChanged(this.h, (C.bool)(reverse))
}
func (this *QAbstractAxis) OnReverseChanged(slot func(reverse bool)) {
	C.QAbstractAxis_connect_reverseChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_reverseChanged
func miqt_exec_callback_QAbstractAxis_reverseChanged(cb C.intptr_t, reverse C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(reverse bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(reverse)

	gofunc(slotval1)
}

func (this *QAbstractAxis) LabelsEditableChanged(editable bool) {
	C.QAbstractAxis_labelsEditableChanged(this.h, (C.bool)(editable))
}
func (this *QAbstractAxis) OnLabelsEditableChanged(slot func(editable bool)) {
	C.QAbstractAxis_connect_labelsEditableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_labelsEditableChanged
func miqt_exec_callback_QAbstractAxis_labelsEditableChanged(cb C.intptr_t, editable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(editable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(editable)

	gofunc(slotval1)
}

func (this *QAbstractAxis) LabelsTruncatedChanged(labelsTruncated bool) {
	C.QAbstractAxis_labelsTruncatedChanged(this.h, (C.bool)(labelsTruncated))
}
func (this *QAbstractAxis) OnLabelsTruncatedChanged(slot func(labelsTruncated bool)) {
	C.QAbstractAxis_connect_labelsTruncatedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_labelsTruncatedChanged
func miqt_exec_callback_QAbstractAxis_labelsTruncatedChanged(cb C.intptr_t, labelsTruncated C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(labelsTruncated bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(labelsTruncated)

	gofunc(slotval1)
}

func (this *QAbstractAxis) TruncateLabelsChanged(truncateLabels bool) {
	C.QAbstractAxis_truncateLabelsChanged(this.h, (C.bool)(truncateLabels))
}
func (this *QAbstractAxis) OnTruncateLabelsChanged(slot func(truncateLabels bool)) {
	C.QAbstractAxis_connect_truncateLabelsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractAxis_truncateLabelsChanged
func miqt_exec_callback_QAbstractAxis_truncateLabelsChanged(cb C.intptr_t, truncateLabels C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(truncateLabels bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(truncateLabels)

	gofunc(slotval1)
}

func QAbstractAxis_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractAxis_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractAxis_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractAxis_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractAxis) SetVisible1(visible bool) {
	C.QAbstractAxis_setVisible1(this.h, (C.bool)(visible))
}

func (this *QAbstractAxis) SetLineVisible1(visible bool) {
	C.QAbstractAxis_setLineVisible1(this.h, (C.bool)(visible))
}

func (this *QAbstractAxis) SetGridLineVisible1(visible bool) {
	C.QAbstractAxis_setGridLineVisible1(this.h, (C.bool)(visible))
}

func (this *QAbstractAxis) SetMinorGridLineVisible1(visible bool) {
	C.QAbstractAxis_setMinorGridLineVisible1(this.h, (C.bool)(visible))
}

func (this *QAbstractAxis) SetLabelsVisible1(visible bool) {
	C.QAbstractAxis_setLabelsVisible1(this.h, (C.bool)(visible))
}

func (this *QAbstractAxis) SetTitleVisible1(visible bool) {
	C.QAbstractAxis_setTitleVisible1(this.h, (C.bool)(visible))
}

func (this *QAbstractAxis) SetShadesVisible1(visible bool) {
	C.QAbstractAxis_setShadesVisible1(this.h, (C.bool)(visible))
}

func (this *QAbstractAxis) SetReverse1(reverse bool) {
	C.QAbstractAxis_setReverse1(this.h, (C.bool)(reverse))
}

func (this *QAbstractAxis) SetLabelsEditable1(editable bool) {
	C.QAbstractAxis_setLabelsEditable1(this.h, (C.bool)(editable))
}

func (this *QAbstractAxis) SetTruncateLabels1(truncateLabels bool) {
	C.QAbstractAxis_setTruncateLabels1(this.h, (C.bool)(truncateLabels))
}

// Delete this object from C++ memory.
func (this *QAbstractAxis) Delete() {
	C.QAbstractAxis_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractAxis) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractAxis) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
