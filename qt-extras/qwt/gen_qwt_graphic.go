package qwt

/*

#include "gen_qwt_graphic.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtGraphic__RenderHint int

const (
	QwtGraphic__RenderPensUnscaled QwtGraphic__RenderHint = 1
)

type QwtGraphic struct {
	h *C.QwtGraphic
	*QwtNullPaintDevice
}

func (this *QwtGraphic) cPointer() *C.QwtGraphic {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtGraphic) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtGraphic constructs the type using only CGO pointers.
func newQwtGraphic(h *C.QwtGraphic) *QwtGraphic {
	if h == nil {
		return nil
	}
	var outptr_QwtNullPaintDevice *C.QwtNullPaintDevice = nil
	C.QwtGraphic_virtbase(h, &outptr_QwtNullPaintDevice)

	return &QwtGraphic{h: h,
		QwtNullPaintDevice: newQwtNullPaintDevice(outptr_QwtNullPaintDevice)}
}

// UnsafeNewQwtGraphic constructs the type using only unsafe pointers.
func UnsafeNewQwtGraphic(h unsafe.Pointer) *QwtGraphic {
	return newQwtGraphic((*C.QwtGraphic)(h))
}

// NewQwtGraphic constructs a new QwtGraphic object.
func NewQwtGraphic() *QwtGraphic {

	return newQwtGraphic(C.QwtGraphic_new())
}

// NewQwtGraphic2 constructs a new QwtGraphic object.
func NewQwtGraphic2(param1 *QwtGraphic) *QwtGraphic {

	return newQwtGraphic(C.QwtGraphic_new2(param1.cPointer()))
}

func (this *QwtGraphic) OperatorAssign(param1 *QwtGraphic) {
	C.QwtGraphic_operatorAssign(this.h, param1.cPointer())
}

func (this *QwtGraphic) Reset() {
	C.QwtGraphic_reset(this.h)
}

func (this *QwtGraphic) IsNull() bool {
	return (bool)(C.QwtGraphic_isNull(this.h))
}

func (this *QwtGraphic) IsEmpty() bool {
	return (bool)(C.QwtGraphic_isEmpty(this.h))
}

func (this *QwtGraphic) Render(param1 *qt.QPainter) {
	C.QwtGraphic_render(this.h, (*C.QPainter)(param1.UnsafePointer()))
}

func (this *QwtGraphic) Render2(param1 *qt.QPainter, param2 *qt.QSizeF) {
	C.QwtGraphic_render2(this.h, (*C.QPainter)(param1.UnsafePointer()), (*C.QSizeF)(param2.UnsafePointer()))
}

func (this *QwtGraphic) Render3(param1 *qt.QPainter, param2 *qt.QRectF) {
	C.QwtGraphic_render3(this.h, (*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()))
}

func (this *QwtGraphic) Render4(param1 *qt.QPainter, param2 *qt.QPointF) {
	C.QwtGraphic_render4(this.h, (*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(param2.UnsafePointer()))
}

func (this *QwtGraphic) ToPixmap() *qt.QPixmap {
	_goptr := qt.UnsafeNewQPixmap(unsafe.Pointer(C.QwtGraphic_toPixmap(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtGraphic) ToPixmapWithQSize(param1 *qt.QSize) *qt.QPixmap {
	_goptr := qt.UnsafeNewQPixmap(unsafe.Pointer(C.QwtGraphic_toPixmapWithQSize(this.h, (*C.QSize)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtGraphic) ToImage() *qt.QImage {
	_goptr := qt.UnsafeNewQImage(unsafe.Pointer(C.QwtGraphic_toImage(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtGraphic) ToImageWithQSize(param1 *qt.QSize) *qt.QImage {
	_goptr := qt.UnsafeNewQImage(unsafe.Pointer(C.QwtGraphic_toImageWithQSize(this.h, (*C.QSize)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtGraphic) ScaledBoundingRect(sx float64, sy float64) *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtGraphic_scaledBoundingRect(this.h, (C.double)(sx), (C.double)(sy))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtGraphic) BoundingRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtGraphic_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtGraphic) ControlPointRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QwtGraphic_controlPointRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtGraphic) SetDefaultSize(defaultSize *qt.QSizeF) {
	C.QwtGraphic_setDefaultSize(this.h, (*C.QSizeF)(defaultSize.UnsafePointer()))
}

func (this *QwtGraphic) DefaultSize() *qt.QSizeF {
	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QwtGraphic_defaultSize(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtGraphic) SetRenderHint(param1 QwtGraphic__RenderHint) {
	C.QwtGraphic_setRenderHint(this.h, (C.int)(param1))
}

func (this *QwtGraphic) TestRenderHint(param1 QwtGraphic__RenderHint) bool {
	return (bool)(C.QwtGraphic_testRenderHint(this.h, (C.int)(param1)))
}

func (this *QwtGraphic) Render5(param1 *qt.QPainter, param2 *qt.QSizeF, param3 qt.AspectRatioMode) {
	C.QwtGraphic_render5(this.h, (*C.QPainter)(param1.UnsafePointer()), (*C.QSizeF)(param2.UnsafePointer()), (C.int)(param3))
}

func (this *QwtGraphic) Render6(param1 *qt.QPainter, param2 *qt.QRectF, param3 qt.AspectRatioMode) {
	C.QwtGraphic_render6(this.h, (*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()), (C.int)(param3))
}

func (this *QwtGraphic) Render7(param1 *qt.QPainter, param2 *qt.QPointF, param3 qt.AlignmentFlag) {
	C.QwtGraphic_render7(this.h, (*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(param2.UnsafePointer()), (C.int)(param3))
}

func (this *QwtGraphic) ToPixmap2(param1 *qt.QSize, param2 qt.AspectRatioMode) *qt.QPixmap {
	_goptr := qt.UnsafeNewQPixmap(unsafe.Pointer(C.QwtGraphic_toPixmap2(this.h, (*C.QSize)(param1.UnsafePointer()), (C.int)(param2))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtGraphic) ToImage2(param1 *qt.QSize, param2 qt.AspectRatioMode) *qt.QImage {
	_goptr := qt.UnsafeNewQImage(unsafe.Pointer(C.QwtGraphic_toImage2(this.h, (*C.QSize)(param1.UnsafePointer()), (C.int)(param2))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtGraphic) SetRenderHint2(param1 QwtGraphic__RenderHint, on bool) {
	C.QwtGraphic_setRenderHint2(this.h, (C.int)(param1), (C.bool)(on))
}

func (this *QwtGraphic) callVirtualBase_SizeMetrics() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtGraphic_virtualbase_sizeMetrics(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtGraphic) OnSizeMetrics(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtGraphic_override_virtual_sizeMetrics(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtGraphic_sizeMetrics
func miqt_exec_callback_QwtGraphic_sizeMetrics(self *C.QwtGraphic, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtGraphic{h: self}).callVirtualBase_SizeMetrics)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtGraphic) callVirtualBase_DrawPath(param1 *qt.QPainterPath) {

	C.QwtGraphic_virtualbase_drawPath(unsafe.Pointer(this.h), (*C.QPainterPath)(param1.UnsafePointer()))

}
func (this *QwtGraphic) OnDrawPath(slot func(super func(param1 *qt.QPainterPath), param1 *qt.QPainterPath)) {
	ok := C.QwtGraphic_override_virtual_drawPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtGraphic_drawPath
func miqt_exec_callback_QwtGraphic_drawPath(self *C.QwtGraphic, cb C.intptr_t, param1 *C.QPainterPath) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainterPath), param1 *qt.QPainterPath))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainterPath(unsafe.Pointer(param1))

	gofunc((&QwtGraphic{h: self}).callVirtualBase_DrawPath, slotval1)

}

func (this *QwtGraphic) callVirtualBase_DrawPixmap(param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QRectF) {

	C.QwtGraphic_virtualbase_drawPixmap(unsafe.Pointer(this.h), (*C.QRectF)(param1.UnsafePointer()), (*C.QPixmap)(param2.UnsafePointer()), (*C.QRectF)(param3.UnsafePointer()))

}
func (this *QwtGraphic) OnDrawPixmap(slot func(super func(param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QRectF), param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QRectF)) {
	ok := C.QwtGraphic_override_virtual_drawPixmap(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtGraphic_drawPixmap
func miqt_exec_callback_QwtGraphic_drawPixmap(self *C.QwtGraphic, cb C.intptr_t, param1 *C.QRectF, param2 *C.QPixmap, param3 *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QRectF), param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRectF(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQPixmap(unsafe.Pointer(param2))

	slotval3 := qt.UnsafeNewQRectF(unsafe.Pointer(param3))

	gofunc((&QwtGraphic{h: self}).callVirtualBase_DrawPixmap, slotval1, slotval2, slotval3)

}

func (this *QwtGraphic) callVirtualBase_DrawImage(param1 *qt.QRectF, param2 *qt.QImage, param3 *qt.QRectF, param4 qt.ImageConversionFlag) {

	C.QwtGraphic_virtualbase_drawImage(unsafe.Pointer(this.h), (*C.QRectF)(param1.UnsafePointer()), (*C.QImage)(param2.UnsafePointer()), (*C.QRectF)(param3.UnsafePointer()), (C.int)(param4))

}
func (this *QwtGraphic) OnDrawImage(slot func(super func(param1 *qt.QRectF, param2 *qt.QImage, param3 *qt.QRectF, param4 qt.ImageConversionFlag), param1 *qt.QRectF, param2 *qt.QImage, param3 *qt.QRectF, param4 qt.ImageConversionFlag)) {
	ok := C.QwtGraphic_override_virtual_drawImage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtGraphic_drawImage
func miqt_exec_callback_QwtGraphic_drawImage(self *C.QwtGraphic, cb C.intptr_t, param1 *C.QRectF, param2 *C.QImage, param3 *C.QRectF, param4 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QRectF, param2 *qt.QImage, param3 *qt.QRectF, param4 qt.ImageConversionFlag), param1 *qt.QRectF, param2 *qt.QImage, param3 *qt.QRectF, param4 qt.ImageConversionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRectF(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQImage(unsafe.Pointer(param2))

	slotval3 := qt.UnsafeNewQRectF(unsafe.Pointer(param3))

	slotval4 := (qt.ImageConversionFlag)(param4)

	gofunc((&QwtGraphic{h: self}).callVirtualBase_DrawImage, slotval1, slotval2, slotval3, slotval4)

}

func (this *QwtGraphic) callVirtualBase_UpdateState(state *qt.QPaintEngineState) {

	C.QwtGraphic_virtualbase_updateState(unsafe.Pointer(this.h), (*C.QPaintEngineState)(state.UnsafePointer()))

}
func (this *QwtGraphic) OnUpdateState(slot func(super func(state *qt.QPaintEngineState), state *qt.QPaintEngineState)) {
	ok := C.QwtGraphic_override_virtual_updateState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtGraphic_updateState
func miqt_exec_callback_QwtGraphic_updateState(self *C.QwtGraphic, cb C.intptr_t, state *C.QPaintEngineState) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(state *qt.QPaintEngineState), state *qt.QPaintEngineState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEngineState(unsafe.Pointer(state))

	gofunc((&QwtGraphic{h: self}).callVirtualBase_UpdateState, slotval1)

}

func (this *QwtGraphic) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtGraphic_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtGraphic) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtGraphic_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtGraphic_paintEngine
func miqt_exec_callback_QwtGraphic_paintEngine(self *C.QwtGraphic, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtGraphic{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtGraphic) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtGraphic_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtGraphic) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtGraphic_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtGraphic_metric
func miqt_exec_callback_QwtGraphic_metric(self *C.QwtGraphic, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtGraphic{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtGraphic) callVirtualBase_DrawRects(param1 *qt.QRect, param2 int) {

	C.QwtGraphic_virtualbase_drawRects(unsafe.Pointer(this.h), (*C.QRect)(param1.UnsafePointer()), (C.int)(param2))

}
func (this *QwtGraphic) OnDrawRects(slot func(super func(param1 *qt.QRect, param2 int), param1 *qt.QRect, param2 int)) {
	ok := C.QwtGraphic_override_virtual_drawRects(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtGraphic_drawRects
func miqt_exec_callback_QwtGraphic_drawRects(self *C.QwtGraphic, cb C.intptr_t, param1 *C.QRect, param2 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QRect, param2 int), param1 *qt.QRect, param2 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRect(unsafe.Pointer(param1))

	slotval2 := (int)(param2)

	gofunc((&QwtGraphic{h: self}).callVirtualBase_DrawRects, slotval1, slotval2)

}

func (this *QwtGraphic) callVirtualBase_DrawLines(param1 *qt.QLine, param2 int) {

	C.QwtGraphic_virtualbase_drawLines(unsafe.Pointer(this.h), (*C.QLine)(param1.UnsafePointer()), (C.int)(param2))

}
func (this *QwtGraphic) OnDrawLines(slot func(super func(param1 *qt.QLine, param2 int), param1 *qt.QLine, param2 int)) {
	ok := C.QwtGraphic_override_virtual_drawLines(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtGraphic_drawLines
func miqt_exec_callback_QwtGraphic_drawLines(self *C.QwtGraphic, cb C.intptr_t, param1 *C.QLine, param2 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QLine, param2 int), param1 *qt.QLine, param2 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQLine(unsafe.Pointer(param1))

	slotval2 := (int)(param2)

	gofunc((&QwtGraphic{h: self}).callVirtualBase_DrawLines, slotval1, slotval2)

}

func (this *QwtGraphic) callVirtualBase_DrawEllipse(param1 *qt.QRectF) {

	C.QwtGraphic_virtualbase_drawEllipse(unsafe.Pointer(this.h), (*C.QRectF)(param1.UnsafePointer()))

}
func (this *QwtGraphic) OnDrawEllipse(slot func(super func(param1 *qt.QRectF), param1 *qt.QRectF)) {
	ok := C.QwtGraphic_override_virtual_drawEllipse(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtGraphic_drawEllipse
func miqt_exec_callback_QwtGraphic_drawEllipse(self *C.QwtGraphic, cb C.intptr_t, param1 *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QRectF), param1 *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRectF(unsafe.Pointer(param1))

	gofunc((&QwtGraphic{h: self}).callVirtualBase_DrawEllipse, slotval1)

}

func (this *QwtGraphic) callVirtualBase_DrawPoints(param1 *qt.QPointF, param2 int) {

	C.QwtGraphic_virtualbase_drawPoints(unsafe.Pointer(this.h), (*C.QPointF)(param1.UnsafePointer()), (C.int)(param2))

}
func (this *QwtGraphic) OnDrawPoints(slot func(super func(param1 *qt.QPointF, param2 int), param1 *qt.QPointF, param2 int)) {
	ok := C.QwtGraphic_override_virtual_drawPoints(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtGraphic_drawPoints
func miqt_exec_callback_QwtGraphic_drawPoints(self *C.QwtGraphic, cb C.intptr_t, param1 *C.QPointF, param2 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPointF, param2 int), param1 *qt.QPointF, param2 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPointF(unsafe.Pointer(param1))

	slotval2 := (int)(param2)

	gofunc((&QwtGraphic{h: self}).callVirtualBase_DrawPoints, slotval1, slotval2)

}

func (this *QwtGraphic) callVirtualBase_DrawPolygon(param1 *qt.QPointF, param2 int, param3 qt.QPaintEngine__PolygonDrawMode) {

	C.QwtGraphic_virtualbase_drawPolygon(unsafe.Pointer(this.h), (*C.QPointF)(param1.UnsafePointer()), (C.int)(param2), (C.int)(param3))

}
func (this *QwtGraphic) OnDrawPolygon(slot func(super func(param1 *qt.QPointF, param2 int, param3 qt.QPaintEngine__PolygonDrawMode), param1 *qt.QPointF, param2 int, param3 qt.QPaintEngine__PolygonDrawMode)) {
	ok := C.QwtGraphic_override_virtual_drawPolygon(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtGraphic_drawPolygon
func miqt_exec_callback_QwtGraphic_drawPolygon(self *C.QwtGraphic, cb C.intptr_t, param1 *C.QPointF, param2 C.int, param3 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPointF, param2 int, param3 qt.QPaintEngine__PolygonDrawMode), param1 *qt.QPointF, param2 int, param3 qt.QPaintEngine__PolygonDrawMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPointF(unsafe.Pointer(param1))

	slotval2 := (int)(param2)

	slotval3 := (qt.QPaintEngine__PolygonDrawMode)(param3)

	gofunc((&QwtGraphic{h: self}).callVirtualBase_DrawPolygon, slotval1, slotval2, slotval3)

}

func (this *QwtGraphic) callVirtualBase_DrawTextItem(param1 *qt.QPointF, param2 *qt.QTextItem) {

	C.QwtGraphic_virtualbase_drawTextItem(unsafe.Pointer(this.h), (*C.QPointF)(param1.UnsafePointer()), (*C.QTextItem)(param2.UnsafePointer()))

}
func (this *QwtGraphic) OnDrawTextItem(slot func(super func(param1 *qt.QPointF, param2 *qt.QTextItem), param1 *qt.QPointF, param2 *qt.QTextItem)) {
	ok := C.QwtGraphic_override_virtual_drawTextItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtGraphic_drawTextItem
func miqt_exec_callback_QwtGraphic_drawTextItem(self *C.QwtGraphic, cb C.intptr_t, param1 *C.QPointF, param2 *C.QTextItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPointF, param2 *qt.QTextItem), param1 *qt.QPointF, param2 *qt.QTextItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPointF(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQTextItem(unsafe.Pointer(param2))

	gofunc((&QwtGraphic{h: self}).callVirtualBase_DrawTextItem, slotval1, slotval2)

}

func (this *QwtGraphic) callVirtualBase_DrawTiledPixmap(param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QPointF) {

	C.QwtGraphic_virtualbase_drawTiledPixmap(unsafe.Pointer(this.h), (*C.QRectF)(param1.UnsafePointer()), (*C.QPixmap)(param2.UnsafePointer()), (*C.QPointF)(param3.UnsafePointer()))

}
func (this *QwtGraphic) OnDrawTiledPixmap(slot func(super func(param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QPointF), param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QPointF)) {
	ok := C.QwtGraphic_override_virtual_drawTiledPixmap(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtGraphic_drawTiledPixmap
func miqt_exec_callback_QwtGraphic_drawTiledPixmap(self *C.QwtGraphic, cb C.intptr_t, param1 *C.QRectF, param2 *C.QPixmap, param3 *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QPointF), param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRectF(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQPixmap(unsafe.Pointer(param2))

	slotval3 := qt.UnsafeNewQPointF(unsafe.Pointer(param3))

	gofunc((&QwtGraphic{h: self}).callVirtualBase_DrawTiledPixmap, slotval1, slotval2, slotval3)

}

func (this *QwtGraphic) callVirtualBase_DevType() int {

	return (int)(C.QwtGraphic_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtGraphic) OnDevType(slot func(super func() int) int) {
	ok := C.QwtGraphic_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtGraphic_devType
func miqt_exec_callback_QwtGraphic_devType(self *C.QwtGraphic, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtGraphic{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtGraphic) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtGraphic_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtGraphic) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtGraphic_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtGraphic_initPainter
func miqt_exec_callback_QwtGraphic_initPainter(self *C.QwtGraphic, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtGraphic{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtGraphic) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtGraphic_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtGraphic) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtGraphic_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtGraphic_redirected
func miqt_exec_callback_QwtGraphic_redirected(self *C.QwtGraphic, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtGraphic{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtGraphic) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtGraphic_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtGraphic) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtGraphic_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtGraphic_sharedPainter
func miqt_exec_callback_QwtGraphic_sharedPainter(self *C.QwtGraphic, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtGraphic{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QwtGraphic) Delete() {
	C.QwtGraphic_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtGraphic) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtGraphic) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
