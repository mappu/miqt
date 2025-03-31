package charts6

/*

#include "gen_qlegend.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QLegend__MarkerShape int

const (
	QLegend__MarkerShapeDefault          QLegend__MarkerShape = 0
	QLegend__MarkerShapeRectangle        QLegend__MarkerShape = 1
	QLegend__MarkerShapeCircle           QLegend__MarkerShape = 2
	QLegend__MarkerShapeFromSeries       QLegend__MarkerShape = 3
	QLegend__MarkerShapeRotatedRectangle QLegend__MarkerShape = 4
	QLegend__MarkerShapeTriangle         QLegend__MarkerShape = 5
	QLegend__MarkerShapeStar             QLegend__MarkerShape = 6
	QLegend__MarkerShapePentagon         QLegend__MarkerShape = 7
)

type QLegend struct {
	h *C.QLegend
	*qt6.QGraphicsWidget
}

func (this *QLegend) cPointer() *C.QLegend {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLegend) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLegend constructs the type using only CGO pointers.
func newQLegend(h *C.QLegend) *QLegend {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsWidget *C.QGraphicsWidget = nil
	C.QLegend_virtbase(h, &outptr_QGraphicsWidget)

	return &QLegend{h: h,
		QGraphicsWidget: qt6.UnsafeNewQGraphicsWidget(unsafe.Pointer(outptr_QGraphicsWidget))}
}

// UnsafeNewQLegend constructs the type using only unsafe pointers.
func UnsafeNewQLegend(h unsafe.Pointer) *QLegend {
	return newQLegend((*C.QLegend)(h))
}

func (this *QLegend) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QLegend_metaObject(this.h)))
}

func (this *QLegend) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QLegend_metacast(this.h, param1_Cstring))
}

func QLegend_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLegend_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLegend) Paint(painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget) {
	C.QLegend_paint(this.h, (*C.QPainter)(painter.UnsafePointer()), (*C.QStyleOptionGraphicsItem)(option.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))
}

func (this *QLegend) SetBrush(brush *qt6.QBrush) {
	C.QLegend_setBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QLegend) Brush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QLegend_brush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLegend) SetColor(color qt6.QColor) {
	C.QLegend_setColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QLegend) Color() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QLegend_color(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLegend) SetPen(pen *qt6.QPen) {
	C.QLegend_setPen(this.h, (*C.QPen)(pen.UnsafePointer()))
}

func (this *QLegend) Pen() *qt6.QPen {
	_goptr := qt6.UnsafeNewQPen(unsafe.Pointer(C.QLegend_pen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLegend) SetBorderColor(color qt6.QColor) {
	C.QLegend_setBorderColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QLegend) BorderColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QLegend_borderColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLegend) SetFont(font *qt6.QFont) {
	C.QLegend_setFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QLegend) Font() *qt6.QFont {
	_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(C.QLegend_font(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLegend) SetLabelBrush(brush *qt6.QBrush) {
	C.QLegend_setLabelBrush(this.h, (*C.QBrush)(brush.UnsafePointer()))
}

func (this *QLegend) LabelBrush() *qt6.QBrush {
	_goptr := qt6.UnsafeNewQBrush(unsafe.Pointer(C.QLegend_labelBrush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLegend) SetLabelColor(color qt6.QColor) {
	C.QLegend_setLabelColor(this.h, (*C.QColor)(color.UnsafePointer()))
}

func (this *QLegend) LabelColor() *qt6.QColor {
	_goptr := qt6.UnsafeNewQColor(unsafe.Pointer(C.QLegend_labelColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLegend) SetAlignment(alignment qt6.AlignmentFlag) {
	C.QLegend_setAlignment(this.h, (C.int)(alignment))
}

func (this *QLegend) Alignment() qt6.AlignmentFlag {
	return (qt6.AlignmentFlag)(C.QLegend_alignment(this.h))
}

func (this *QLegend) DetachFromChart() {
	C.QLegend_detachFromChart(this.h)
}

func (this *QLegend) AttachToChart() {
	C.QLegend_attachToChart(this.h)
}

func (this *QLegend) IsAttachedToChart() bool {
	return (bool)(C.QLegend_isAttachedToChart(this.h))
}

func (this *QLegend) SetBackgroundVisible() {
	C.QLegend_setBackgroundVisible(this.h)
}

func (this *QLegend) IsBackgroundVisible() bool {
	return (bool)(C.QLegend_isBackgroundVisible(this.h))
}

func (this *QLegend) Markers() []*QLegendMarker {
	var _ma C.struct_miqt_array = C.QLegend_markers(this.h)
	_ret := make([]*QLegendMarker, int(_ma.len))
	_outCast := (*[0xffff]*C.QLegendMarker)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQLegendMarker(_outCast[i])
	}
	return _ret
}

func (this *QLegend) ReverseMarkers() bool {
	return (bool)(C.QLegend_reverseMarkers(this.h))
}

func (this *QLegend) SetReverseMarkers() {
	C.QLegend_setReverseMarkers(this.h)
}

func (this *QLegend) ShowToolTips() bool {
	return (bool)(C.QLegend_showToolTips(this.h))
}

func (this *QLegend) SetShowToolTips(show bool) {
	C.QLegend_setShowToolTips(this.h, (C.bool)(show))
}

func (this *QLegend) IsInteractive() bool {
	return (bool)(C.QLegend_isInteractive(this.h))
}

func (this *QLegend) SetInteractive(interactive bool) {
	C.QLegend_setInteractive(this.h, (C.bool)(interactive))
}

func (this *QLegend) MarkerShape() QLegend__MarkerShape {
	return (QLegend__MarkerShape)(C.QLegend_markerShape(this.h))
}

func (this *QLegend) SetMarkerShape(shape QLegend__MarkerShape) {
	C.QLegend_setMarkerShape(this.h, (C.int)(shape))
}

func (this *QLegend) BackgroundVisibleChanged(visible bool) {
	C.QLegend_backgroundVisibleChanged(this.h, (C.bool)(visible))
}
func (this *QLegend) OnBackgroundVisibleChanged(slot func(visible bool)) {
	C.QLegend_connect_backgroundVisibleChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegend_backgroundVisibleChanged
func miqt_exec_callback_QLegend_backgroundVisibleChanged(cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc(slotval1)
}

func (this *QLegend) ColorChanged(color qt6.QColor) {
	C.QLegend_colorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QLegend) OnColorChanged(slot func(color qt6.QColor)) {
	C.QLegend_connect_colorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegend_colorChanged
func miqt_exec_callback_QLegend_colorChanged(cb C.intptr_t, color *C.QColor) {
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

func (this *QLegend) BorderColorChanged(color qt6.QColor) {
	C.QLegend_borderColorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QLegend) OnBorderColorChanged(slot func(color qt6.QColor)) {
	C.QLegend_connect_borderColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegend_borderColorChanged
func miqt_exec_callback_QLegend_borderColorChanged(cb C.intptr_t, color *C.QColor) {
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

func (this *QLegend) FontChanged(font qt6.QFont) {
	C.QLegend_fontChanged(this.h, (*C.QFont)(font.UnsafePointer()))
}
func (this *QLegend) OnFontChanged(slot func(font qt6.QFont)) {
	C.QLegend_connect_fontChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegend_fontChanged
func miqt_exec_callback_QLegend_fontChanged(cb C.intptr_t, font *C.QFont) {
	gofunc, ok := cgo.Handle(cb).Value().(func(font qt6.QFont))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	font_goptr := qt6.UnsafeNewQFont(unsafe.Pointer(font))
	font_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *font_goptr

	gofunc(slotval1)
}

func (this *QLegend) LabelColorChanged(color qt6.QColor) {
	C.QLegend_labelColorChanged(this.h, (*C.QColor)(color.UnsafePointer()))
}
func (this *QLegend) OnLabelColorChanged(slot func(color qt6.QColor)) {
	C.QLegend_connect_labelColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegend_labelColorChanged
func miqt_exec_callback_QLegend_labelColorChanged(cb C.intptr_t, color *C.QColor) {
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

func (this *QLegend) ReverseMarkersChanged(reverseMarkers bool) {
	C.QLegend_reverseMarkersChanged(this.h, (C.bool)(reverseMarkers))
}
func (this *QLegend) OnReverseMarkersChanged(slot func(reverseMarkers bool)) {
	C.QLegend_connect_reverseMarkersChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegend_reverseMarkersChanged
func miqt_exec_callback_QLegend_reverseMarkersChanged(cb C.intptr_t, reverseMarkers C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(reverseMarkers bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(reverseMarkers)

	gofunc(slotval1)
}

func (this *QLegend) ShowToolTipsChanged(showToolTips bool) {
	C.QLegend_showToolTipsChanged(this.h, (C.bool)(showToolTips))
}
func (this *QLegend) OnShowToolTipsChanged(slot func(showToolTips bool)) {
	C.QLegend_connect_showToolTipsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegend_showToolTipsChanged
func miqt_exec_callback_QLegend_showToolTipsChanged(cb C.intptr_t, showToolTips C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(showToolTips bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(showToolTips)

	gofunc(slotval1)
}

func (this *QLegend) MarkerShapeChanged(shape QLegend__MarkerShape) {
	C.QLegend_markerShapeChanged(this.h, (C.int)(shape))
}
func (this *QLegend) OnMarkerShapeChanged(slot func(shape QLegend__MarkerShape)) {
	C.QLegend_connect_markerShapeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegend_markerShapeChanged
func miqt_exec_callback_QLegend_markerShapeChanged(cb C.intptr_t, shape C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(shape QLegend__MarkerShape))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QLegend__MarkerShape)(shape)

	gofunc(slotval1)
}

func (this *QLegend) AttachedToChartChanged(attachedToChart bool) {
	C.QLegend_attachedToChartChanged(this.h, (C.bool)(attachedToChart))
}
func (this *QLegend) OnAttachedToChartChanged(slot func(attachedToChart bool)) {
	C.QLegend_connect_attachedToChartChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegend_attachedToChartChanged
func miqt_exec_callback_QLegend_attachedToChartChanged(cb C.intptr_t, attachedToChart C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(attachedToChart bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(attachedToChart)

	gofunc(slotval1)
}

func (this *QLegend) InteractiveChanged(interactive bool) {
	C.QLegend_interactiveChanged(this.h, (C.bool)(interactive))
}
func (this *QLegend) OnInteractiveChanged(slot func(interactive bool)) {
	C.QLegend_connect_interactiveChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLegend_interactiveChanged
func miqt_exec_callback_QLegend_interactiveChanged(cb C.intptr_t, interactive C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(interactive bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(interactive)

	gofunc(slotval1)
}

func QLegend_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLegend_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLegend_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLegend_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLegend) SetBackgroundVisible1(visible bool) {
	C.QLegend_setBackgroundVisible1(this.h, (C.bool)(visible))
}

func (this *QLegend) Markers1(series *QAbstractSeries) []*QLegendMarker {
	var _ma C.struct_miqt_array = C.QLegend_markers1(this.h, series.cPointer())
	_ret := make([]*QLegendMarker, int(_ma.len))
	_outCast := (*[0xffff]*C.QLegendMarker)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQLegendMarker(_outCast[i])
	}
	return _ret
}

func (this *QLegend) SetReverseMarkers1(reverseMarkers bool) {
	C.QLegend_setReverseMarkers1(this.h, (C.bool)(reverseMarkers))
}

// Delete this object from C++ memory.
func (this *QLegend) Delete() {
	C.QLegend_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLegend) GoGC() {
	runtime.SetFinalizer(this, func(this *QLegend) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
