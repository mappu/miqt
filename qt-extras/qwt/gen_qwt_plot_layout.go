package qwt

/*

#include "gen_qwt_plot_layout.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtPlotLayout__Option int

const (
	QwtPlotLayout__AlignScales      QwtPlotLayout__Option = 1
	QwtPlotLayout__IgnoreScrollbars QwtPlotLayout__Option = 2
	QwtPlotLayout__IgnoreFrames     QwtPlotLayout__Option = 4
	QwtPlotLayout__IgnoreLegend     QwtPlotLayout__Option = 8
	QwtPlotLayout__IgnoreTitle      QwtPlotLayout__Option = 16
	QwtPlotLayout__IgnoreFooter     QwtPlotLayout__Option = 32
)

type QwtPlotLayout struct {
	h *C.QwtPlotLayout
}

func (this *QwtPlotLayout) cPointer() *C.QwtPlotLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotLayout constructs the type using only CGO pointers.
func newQwtPlotLayout(h *C.QwtPlotLayout) *QwtPlotLayout {
	if h == nil {
		return nil
	}

	return &QwtPlotLayout{h: h}
}

// UnsafeNewQwtPlotLayout constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotLayout(h unsafe.Pointer) *QwtPlotLayout {
	return newQwtPlotLayout((*C.QwtPlotLayout)(h))
}

// NewQwtPlotLayout constructs a new QwtPlotLayout object.
func NewQwtPlotLayout() *QwtPlotLayout {

	return newQwtPlotLayout(C.QwtPlotLayout_new())
}

func (this *QwtPlotLayout) SetCanvasMargin(margin int) {
	C.QwtPlotLayout_setCanvasMargin(this.h, (C.int)(margin))
}

func (this *QwtPlotLayout) CanvasMargin(axisId int) int {
	return (int)(C.QwtPlotLayout_canvasMargin(this.h, (C.int)(axisId)))
}

func (this *QwtPlotLayout) SetAlignCanvasToScales(alignCanvasToScales bool) {
	C.QwtPlotLayout_setAlignCanvasToScales(this.h, (C.bool)(alignCanvasToScales))
}

func (this *QwtPlotLayout) SetAlignCanvasToScale(axisId int, param2 bool) {
	C.QwtPlotLayout_setAlignCanvasToScale(this.h, (C.int)(axisId), (C.bool)(param2))
}

func (this *QwtPlotLayout) AlignCanvasToScale(axisId int) bool {
	return (bool)(C.QwtPlotLayout_alignCanvasToScale(this.h, (C.int)(axisId)))
}

func (this *QwtPlotLayout) SetSpacing(spacing int) {
	C.QwtPlotLayout_setSpacing(this.h, (C.int)(spacing))
}

func (this *QwtPlotLayout) Spacing() int {
	return (int)(C.QwtPlotLayout_spacing(this.h))
}

func (this *QwtPlotLayout) SetLegendPosition(pos QwtPlot__LegendPosition, ratio float64) {
	C.QwtPlotLayout_setLegendPosition(this.h, (C.int)(pos), (C.double)(ratio))
}

func (this *QwtPlotLayout) SetLegendPositionWithPos(pos QwtPlot__LegendPosition) {
	C.QwtPlotLayout_setLegendPositionWithPos(this.h, (C.int)(pos))
}

func (this *QwtPlotLayout) LegendPosition() QwtPlot__LegendPosition {
	return (QwtPlot__LegendPosition)(C.QwtPlotLayout_legendPosition(this.h))
}

func (this *QwtPlotLayout) SetLegendRatio(ratio float64) {
	C.QwtPlotLayout_setLegendRatio(this.h, (C.double)(ratio))
}

func (this *QwtPlotLayout) LegendRatio() float64 {
	return (float64)(C.QwtPlotLayout_legendRatio(this.h))
}

func (this *QwtPlotLayout) MinimumSizeHint(param1 *QwtPlot) *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtPlotLayout_minimumSizeHint(this.h, param1.cPointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotLayout) Activate(param1 *QwtPlot, plotRect *qt.QRectF, options QwtPlotLayout__Option) {
	C.QwtPlotLayout_activate(this.h, param1.cPointer(), (*C.QRectF)(plotRect.UnsafePointer()), (C.int)(options))
}

func (this *QwtPlotLayout) Invalidate() {
	C.QwtPlotLayout_invalidate(this.h)
}

func (this *QwtPlotLayout) TitleRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotLayout_titleRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotLayout) FooterRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotLayout_footerRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotLayout) LegendRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotLayout_legendRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotLayout) ScaleRect(axis int) *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotLayout_scaleRect(this.h, (C.int)(axis))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotLayout) CanvasRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotLayout_canvasRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotLayout) OperatorAssign(param1 *QwtPlotLayout) {
	C.QwtPlotLayout_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtPlotLayout) SetCanvasMargin2(margin int, axis int) {
	C.QwtPlotLayout_setCanvasMargin2(this.h, (C.int)(margin), (C.int)(axis))
}

// SetTitleRect can only be called from a QwtPlotLayout that was directly constructed.
func (this *QwtPlotLayout) SetTitleRect(titleRect *qt.QRectF) {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlotLayout_protectedbase_setTitleRect(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QRectF)(titleRect.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetFooterRect can only be called from a QwtPlotLayout that was directly constructed.
func (this *QwtPlotLayout) SetFooterRect(footerRect *qt.QRectF) {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlotLayout_protectedbase_setFooterRect(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QRectF)(footerRect.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetLegendRect can only be called from a QwtPlotLayout that was directly constructed.
func (this *QwtPlotLayout) SetLegendRect(legendRect *qt.QRectF) {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlotLayout_protectedbase_setLegendRect(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QRectF)(legendRect.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetScaleRect can only be called from a QwtPlotLayout that was directly constructed.
func (this *QwtPlotLayout) SetScaleRect(axis int, param2 *qt.QRectF) {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlotLayout_protectedbase_setScaleRect(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(axis), (*C.QRectF)(param2.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetCanvasRect can only be called from a QwtPlotLayout that was directly constructed.
func (this *QwtPlotLayout) SetCanvasRect(canvasRect *qt.QRectF) {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlotLayout_protectedbase_setCanvasRect(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QRectF)(canvasRect.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// LayoutLegend can only be called from a QwtPlotLayout that was directly constructed.
func (this *QwtPlotLayout) LayoutLegend(options QwtPlotLayout__Option, param2 *qt.QRectF) qt.QRectF {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotLayout_protectedbase_layoutLegend(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(options), (*C.QRectF)(param2.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// AlignLegend can only be called from a QwtPlotLayout that was directly constructed.
func (this *QwtPlotLayout) AlignLegend(canvasRect *qt.QRectF, legendRect *qt.QRectF) qt.QRectF {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtPlotLayout_protectedbase_alignLegend(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QRectF)(canvasRect.UnsafePointer()), (*C.QRectF)(legendRect.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// ExpandLineBreaks can only be called from a QwtPlotLayout that was directly constructed.
func (this *QwtPlotLayout) ExpandLineBreaks(options QwtPlotLayout__Option, rect *qt.QRectF, dimTitle *int, dimFooter *int, dimAxes *int) {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlotLayout_protectedbase_expandLineBreaks(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(options), (*C.QRectF)(rect.UnsafePointer()), (*C.int)(unsafe.Pointer(dimTitle)), (*C.int)(unsafe.Pointer(dimFooter)), (*C.int)(unsafe.Pointer(dimAxes)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AlignScales can only be called from a QwtPlotLayout that was directly constructed.
func (this *QwtPlotLayout) AlignScales(options QwtPlotLayout__Option, canvasRect *qt.QRectF, scaleRect *qt.QRectF) {

	var _dynamic_cast_ok C.bool = false
	C.QwtPlotLayout_protectedbase_alignScales(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(options), (*C.QRectF)(canvasRect.UnsafePointer()), (*C.QRectF)(scaleRect.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QwtPlotLayout) callVirtualBase_MinimumSizeHint(param1 *QwtPlot) *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtPlotLayout_virtualbase_minimumSizeHint(unsafe.Pointer(this.h), param1.cPointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotLayout) OnMinimumSizeHint(slot func(super func(param1 *QwtPlot) *qt.QSize, param1 *QwtPlot) *qt.QSize) {
	ok := C.QwtPlotLayout_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotLayout_minimumSizeHint
func miqt_exec_callback_QwtPlotLayout_minimumSizeHint(self *C.QwtPlotLayout, cb C.intptr_t, param1 *C.QwtPlot) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtPlot) *qt.QSize, param1 *QwtPlot) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtPlot(param1)

	virtualReturn := gofunc((&QwtPlotLayout{h: self}).callVirtualBase_MinimumSizeHint, slotval1)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtPlotLayout) callVirtualBase_Activate(param1 *QwtPlot, plotRect *qt.QRectF, options QwtPlotLayout__Option) {

	C.QwtPlotLayout_virtualbase_activate(unsafe.Pointer(this.h), param1.cPointer(), (*C.QRectF)(plotRect.UnsafePointer()), (C.int)(options))

}
func (this *QwtPlotLayout) OnActivate(slot func(super func(param1 *QwtPlot, plotRect *qt.QRectF, options QwtPlotLayout__Option), param1 *QwtPlot, plotRect *qt.QRectF, options QwtPlotLayout__Option)) {
	ok := C.QwtPlotLayout_override_virtual_activate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotLayout_activate
func miqt_exec_callback_QwtPlotLayout_activate(self *C.QwtPlotLayout, cb C.intptr_t, param1 *C.QwtPlot, plotRect *C.QRectF, options C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtPlot, plotRect *qt.QRectF, options QwtPlotLayout__Option), param1 *QwtPlot, plotRect *qt.QRectF, options QwtPlotLayout__Option))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtPlot(param1)

	slotval2 := qt.UnsafeNewQRectF(unsafe.Pointer(plotRect))

	slotval3 := (QwtPlotLayout__Option)(options)

	gofunc((&QwtPlotLayout{h: self}).callVirtualBase_Activate, slotval1, slotval2, slotval3)

}

func (this *QwtPlotLayout) callVirtualBase_Invalidate() {

	C.QwtPlotLayout_virtualbase_invalidate(unsafe.Pointer(this.h))

}
func (this *QwtPlotLayout) OnInvalidate(slot func(super func())) {
	ok := C.QwtPlotLayout_override_virtual_invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotLayout_invalidate
func miqt_exec_callback_QwtPlotLayout_invalidate(self *C.QwtPlotLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPlotLayout{h: self}).callVirtualBase_Invalidate)

}

// Delete this object from C++ memory.
func (this *QwtPlotLayout) Delete() {
	C.QwtPlotLayout_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
