package qwt

/*

#include "gen_qwt_null_paintdevice.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtNullPaintDevice__Mode int

const (
	QwtNullPaintDevice__NormalMode      QwtNullPaintDevice__Mode = 0
	QwtNullPaintDevice__PolygonPathMode QwtNullPaintDevice__Mode = 1
	QwtNullPaintDevice__PathMode        QwtNullPaintDevice__Mode = 2
)

type QwtNullPaintDevice struct {
	h *C.QwtNullPaintDevice
	*qt.QPaintDevice
}

func (this *QwtNullPaintDevice) cPointer() *C.QwtNullPaintDevice {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtNullPaintDevice) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtNullPaintDevice constructs the type using only CGO pointers.
func newQwtNullPaintDevice(h *C.QwtNullPaintDevice) *QwtNullPaintDevice {
	if h == nil {
		return nil
	}
	var outptr_QPaintDevice *C.QPaintDevice = nil
	C.QwtNullPaintDevice_virtbase(h, &outptr_QPaintDevice)

	return &QwtNullPaintDevice{h: h,
		QPaintDevice: qt.UnsafeNewQPaintDevice(unsafe.Pointer(outptr_QPaintDevice))}
}

// UnsafeNewQwtNullPaintDevice constructs the type using only unsafe pointers.
func UnsafeNewQwtNullPaintDevice(h unsafe.Pointer) *QwtNullPaintDevice {
	return newQwtNullPaintDevice((*C.QwtNullPaintDevice)(h))
}

// NewQwtNullPaintDevice constructs a new QwtNullPaintDevice object.
func NewQwtNullPaintDevice() *QwtNullPaintDevice {

	return newQwtNullPaintDevice(C.QwtNullPaintDevice_new())
}

func (this *QwtNullPaintDevice) SetMode(mode QwtNullPaintDevice__Mode) {
	C.QwtNullPaintDevice_setMode(this.h, (C.int)(mode))
}

func (this *QwtNullPaintDevice) Mode() QwtNullPaintDevice__Mode {
	return (QwtNullPaintDevice__Mode)(C.QwtNullPaintDevice_mode(this.h))
}

func (this *QwtNullPaintDevice) PaintEngine() *qt.QPaintEngine {
	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtNullPaintDevice_paintEngine(this.h)))
}

func (this *QwtNullPaintDevice) Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {
	return (int)(C.QwtNullPaintDevice_metric(this.h, (C.int)(param1)))
}

func (this *QwtNullPaintDevice) DrawRects(param1 *qt.QRect, param2 int) {
	C.QwtNullPaintDevice_drawRects(this.h, (*C.QRect)(param1.UnsafePointer()), (C.int)(param2))
}

func (this *QwtNullPaintDevice) DrawRects2(param1 *qt.QRectF, param2 int) {
	C.QwtNullPaintDevice_drawRects2(this.h, (*C.QRectF)(param1.UnsafePointer()), (C.int)(param2))
}

func (this *QwtNullPaintDevice) DrawLines(param1 *qt.QLine, param2 int) {
	C.QwtNullPaintDevice_drawLines(this.h, (*C.QLine)(param1.UnsafePointer()), (C.int)(param2))
}

func (this *QwtNullPaintDevice) DrawLines2(param1 *qt.QLineF, param2 int) {
	C.QwtNullPaintDevice_drawLines2(this.h, (*C.QLineF)(param1.UnsafePointer()), (C.int)(param2))
}

func (this *QwtNullPaintDevice) DrawEllipse(param1 *qt.QRectF) {
	C.QwtNullPaintDevice_drawEllipse(this.h, (*C.QRectF)(param1.UnsafePointer()))
}

func (this *QwtNullPaintDevice) DrawEllipseWithQRect(param1 *qt.QRect) {
	C.QwtNullPaintDevice_drawEllipseWithQRect(this.h, (*C.QRect)(param1.UnsafePointer()))
}

func (this *QwtNullPaintDevice) DrawPath(param1 *qt.QPainterPath) {
	C.QwtNullPaintDevice_drawPath(this.h, (*C.QPainterPath)(param1.UnsafePointer()))
}

func (this *QwtNullPaintDevice) DrawPoints(param1 *qt.QPointF, param2 int) {
	C.QwtNullPaintDevice_drawPoints(this.h, (*C.QPointF)(param1.UnsafePointer()), (C.int)(param2))
}

func (this *QwtNullPaintDevice) DrawPoints2(param1 *qt.QPoint, param2 int) {
	C.QwtNullPaintDevice_drawPoints2(this.h, (*C.QPoint)(param1.UnsafePointer()), (C.int)(param2))
}

func (this *QwtNullPaintDevice) DrawPolygon(param1 *qt.QPointF, param2 int, param3 qt.QPaintEngine__PolygonDrawMode) {
	C.QwtNullPaintDevice_drawPolygon(this.h, (*C.QPointF)(param1.UnsafePointer()), (C.int)(param2), (C.int)(param3))
}

func (this *QwtNullPaintDevice) DrawPolygon2(param1 *qt.QPoint, param2 int, param3 qt.QPaintEngine__PolygonDrawMode) {
	C.QwtNullPaintDevice_drawPolygon2(this.h, (*C.QPoint)(param1.UnsafePointer()), (C.int)(param2), (C.int)(param3))
}

func (this *QwtNullPaintDevice) DrawPixmap(param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QRectF) {
	C.QwtNullPaintDevice_drawPixmap(this.h, (*C.QRectF)(param1.UnsafePointer()), (*C.QPixmap)(param2.UnsafePointer()), (*C.QRectF)(param3.UnsafePointer()))
}

func (this *QwtNullPaintDevice) DrawTextItem(param1 *qt.QPointF, param2 *qt.QTextItem) {
	C.QwtNullPaintDevice_drawTextItem(this.h, (*C.QPointF)(param1.UnsafePointer()), (*C.QTextItem)(param2.UnsafePointer()))
}

func (this *QwtNullPaintDevice) DrawTiledPixmap(param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QPointF) {
	C.QwtNullPaintDevice_drawTiledPixmap(this.h, (*C.QRectF)(param1.UnsafePointer()), (*C.QPixmap)(param2.UnsafePointer()), (*C.QPointF)(param3.UnsafePointer()))
}

func (this *QwtNullPaintDevice) DrawImage(param1 *qt.QRectF, param2 *qt.QImage, param3 *qt.QRectF, param4 qt.ImageConversionFlag) {
	C.QwtNullPaintDevice_drawImage(this.h, (*C.QRectF)(param1.UnsafePointer()), (*C.QImage)(param2.UnsafePointer()), (*C.QRectF)(param3.UnsafePointer()), (C.int)(param4))
}

func (this *QwtNullPaintDevice) UpdateState(param1 *qt.QPaintEngineState) {
	C.QwtNullPaintDevice_updateState(this.h, (*C.QPaintEngineState)(param1.UnsafePointer()))
}

func (this *QwtNullPaintDevice) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtNullPaintDevice_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtNullPaintDevice) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtNullPaintDevice_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_paintEngine
func miqt_exec_callback_QwtNullPaintDevice_paintEngine(self *C.QwtNullPaintDevice, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtNullPaintDevice) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtNullPaintDevice_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtNullPaintDevice) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtNullPaintDevice_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_metric
func miqt_exec_callback_QwtNullPaintDevice_metric(self *C.QwtNullPaintDevice, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtNullPaintDevice) callVirtualBase_DrawRects(param1 *qt.QRect, param2 int) {

	C.QwtNullPaintDevice_virtualbase_drawRects(unsafe.Pointer(this.h), (*C.QRect)(param1.UnsafePointer()), (C.int)(param2))

}
func (this *QwtNullPaintDevice) OnDrawRects(slot func(super func(param1 *qt.QRect, param2 int), param1 *qt.QRect, param2 int)) {
	ok := C.QwtNullPaintDevice_override_virtual_drawRects(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_drawRects
func miqt_exec_callback_QwtNullPaintDevice_drawRects(self *C.QwtNullPaintDevice, cb C.intptr_t, param1 *C.QRect, param2 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QRect, param2 int), param1 *qt.QRect, param2 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRect(unsafe.Pointer(param1))

	slotval2 := (int)(param2)

	gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_DrawRects, slotval1, slotval2)

}

func (this *QwtNullPaintDevice) callVirtualBase_DrawRects2(param1 *qt.QRectF, param2 int) {

	C.QwtNullPaintDevice_virtualbase_drawRects2(unsafe.Pointer(this.h), (*C.QRectF)(param1.UnsafePointer()), (C.int)(param2))

}
func (this *QwtNullPaintDevice) OnDrawRects2(slot func(super func(param1 *qt.QRectF, param2 int), param1 *qt.QRectF, param2 int)) {
	ok := C.QwtNullPaintDevice_override_virtual_drawRects2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_drawRects2
func miqt_exec_callback_QwtNullPaintDevice_drawRects2(self *C.QwtNullPaintDevice, cb C.intptr_t, param1 *C.QRectF, param2 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QRectF, param2 int), param1 *qt.QRectF, param2 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRectF(unsafe.Pointer(param1))

	slotval2 := (int)(param2)

	gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_DrawRects2, slotval1, slotval2)

}

func (this *QwtNullPaintDevice) callVirtualBase_DrawLines(param1 *qt.QLine, param2 int) {

	C.QwtNullPaintDevice_virtualbase_drawLines(unsafe.Pointer(this.h), (*C.QLine)(param1.UnsafePointer()), (C.int)(param2))

}
func (this *QwtNullPaintDevice) OnDrawLines(slot func(super func(param1 *qt.QLine, param2 int), param1 *qt.QLine, param2 int)) {
	ok := C.QwtNullPaintDevice_override_virtual_drawLines(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_drawLines
func miqt_exec_callback_QwtNullPaintDevice_drawLines(self *C.QwtNullPaintDevice, cb C.intptr_t, param1 *C.QLine, param2 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QLine, param2 int), param1 *qt.QLine, param2 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQLine(unsafe.Pointer(param1))

	slotval2 := (int)(param2)

	gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_DrawLines, slotval1, slotval2)

}

func (this *QwtNullPaintDevice) callVirtualBase_DrawLines2(param1 *qt.QLineF, param2 int) {

	C.QwtNullPaintDevice_virtualbase_drawLines2(unsafe.Pointer(this.h), (*C.QLineF)(param1.UnsafePointer()), (C.int)(param2))

}
func (this *QwtNullPaintDevice) OnDrawLines2(slot func(super func(param1 *qt.QLineF, param2 int), param1 *qt.QLineF, param2 int)) {
	ok := C.QwtNullPaintDevice_override_virtual_drawLines2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_drawLines2
func miqt_exec_callback_QwtNullPaintDevice_drawLines2(self *C.QwtNullPaintDevice, cb C.intptr_t, param1 *C.QLineF, param2 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QLineF, param2 int), param1 *qt.QLineF, param2 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQLineF(unsafe.Pointer(param1))

	slotval2 := (int)(param2)

	gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_DrawLines2, slotval1, slotval2)

}

func (this *QwtNullPaintDevice) callVirtualBase_DrawEllipse(param1 *qt.QRectF) {

	C.QwtNullPaintDevice_virtualbase_drawEllipse(unsafe.Pointer(this.h), (*C.QRectF)(param1.UnsafePointer()))

}
func (this *QwtNullPaintDevice) OnDrawEllipse(slot func(super func(param1 *qt.QRectF), param1 *qt.QRectF)) {
	ok := C.QwtNullPaintDevice_override_virtual_drawEllipse(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_drawEllipse
func miqt_exec_callback_QwtNullPaintDevice_drawEllipse(self *C.QwtNullPaintDevice, cb C.intptr_t, param1 *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QRectF), param1 *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRectF(unsafe.Pointer(param1))

	gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_DrawEllipse, slotval1)

}

func (this *QwtNullPaintDevice) callVirtualBase_DrawEllipseWithQRect(param1 *qt.QRect) {

	C.QwtNullPaintDevice_virtualbase_drawEllipseWithQRect(unsafe.Pointer(this.h), (*C.QRect)(param1.UnsafePointer()))

}
func (this *QwtNullPaintDevice) OnDrawEllipseWithQRect(slot func(super func(param1 *qt.QRect), param1 *qt.QRect)) {
	ok := C.QwtNullPaintDevice_override_virtual_drawEllipseWithQRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_drawEllipseWithQRect
func miqt_exec_callback_QwtNullPaintDevice_drawEllipseWithQRect(self *C.QwtNullPaintDevice, cb C.intptr_t, param1 *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QRect), param1 *qt.QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRect(unsafe.Pointer(param1))

	gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_DrawEllipseWithQRect, slotval1)

}

func (this *QwtNullPaintDevice) callVirtualBase_DrawPath(param1 *qt.QPainterPath) {

	C.QwtNullPaintDevice_virtualbase_drawPath(unsafe.Pointer(this.h), (*C.QPainterPath)(param1.UnsafePointer()))

}
func (this *QwtNullPaintDevice) OnDrawPath(slot func(super func(param1 *qt.QPainterPath), param1 *qt.QPainterPath)) {
	ok := C.QwtNullPaintDevice_override_virtual_drawPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_drawPath
func miqt_exec_callback_QwtNullPaintDevice_drawPath(self *C.QwtNullPaintDevice, cb C.intptr_t, param1 *C.QPainterPath) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainterPath), param1 *qt.QPainterPath))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainterPath(unsafe.Pointer(param1))

	gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_DrawPath, slotval1)

}

func (this *QwtNullPaintDevice) callVirtualBase_DrawPoints(param1 *qt.QPointF, param2 int) {

	C.QwtNullPaintDevice_virtualbase_drawPoints(unsafe.Pointer(this.h), (*C.QPointF)(param1.UnsafePointer()), (C.int)(param2))

}
func (this *QwtNullPaintDevice) OnDrawPoints(slot func(super func(param1 *qt.QPointF, param2 int), param1 *qt.QPointF, param2 int)) {
	ok := C.QwtNullPaintDevice_override_virtual_drawPoints(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_drawPoints
func miqt_exec_callback_QwtNullPaintDevice_drawPoints(self *C.QwtNullPaintDevice, cb C.intptr_t, param1 *C.QPointF, param2 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPointF, param2 int), param1 *qt.QPointF, param2 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPointF(unsafe.Pointer(param1))

	slotval2 := (int)(param2)

	gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_DrawPoints, slotval1, slotval2)

}

func (this *QwtNullPaintDevice) callVirtualBase_DrawPoints2(param1 *qt.QPoint, param2 int) {

	C.QwtNullPaintDevice_virtualbase_drawPoints2(unsafe.Pointer(this.h), (*C.QPoint)(param1.UnsafePointer()), (C.int)(param2))

}
func (this *QwtNullPaintDevice) OnDrawPoints2(slot func(super func(param1 *qt.QPoint, param2 int), param1 *qt.QPoint, param2 int)) {
	ok := C.QwtNullPaintDevice_override_virtual_drawPoints2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_drawPoints2
func miqt_exec_callback_QwtNullPaintDevice_drawPoints2(self *C.QwtNullPaintDevice, cb C.intptr_t, param1 *C.QPoint, param2 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPoint, param2 int), param1 *qt.QPoint, param2 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(param1))

	slotval2 := (int)(param2)

	gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_DrawPoints2, slotval1, slotval2)

}

func (this *QwtNullPaintDevice) callVirtualBase_DrawPolygon(param1 *qt.QPointF, param2 int, param3 qt.QPaintEngine__PolygonDrawMode) {

	C.QwtNullPaintDevice_virtualbase_drawPolygon(unsafe.Pointer(this.h), (*C.QPointF)(param1.UnsafePointer()), (C.int)(param2), (C.int)(param3))

}
func (this *QwtNullPaintDevice) OnDrawPolygon(slot func(super func(param1 *qt.QPointF, param2 int, param3 qt.QPaintEngine__PolygonDrawMode), param1 *qt.QPointF, param2 int, param3 qt.QPaintEngine__PolygonDrawMode)) {
	ok := C.QwtNullPaintDevice_override_virtual_drawPolygon(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_drawPolygon
func miqt_exec_callback_QwtNullPaintDevice_drawPolygon(self *C.QwtNullPaintDevice, cb C.intptr_t, param1 *C.QPointF, param2 C.int, param3 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPointF, param2 int, param3 qt.QPaintEngine__PolygonDrawMode), param1 *qt.QPointF, param2 int, param3 qt.QPaintEngine__PolygonDrawMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPointF(unsafe.Pointer(param1))

	slotval2 := (int)(param2)

	slotval3 := (qt.QPaintEngine__PolygonDrawMode)(param3)

	gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_DrawPolygon, slotval1, slotval2, slotval3)

}

func (this *QwtNullPaintDevice) callVirtualBase_DrawPolygon2(param1 *qt.QPoint, param2 int, param3 qt.QPaintEngine__PolygonDrawMode) {

	C.QwtNullPaintDevice_virtualbase_drawPolygon2(unsafe.Pointer(this.h), (*C.QPoint)(param1.UnsafePointer()), (C.int)(param2), (C.int)(param3))

}
func (this *QwtNullPaintDevice) OnDrawPolygon2(slot func(super func(param1 *qt.QPoint, param2 int, param3 qt.QPaintEngine__PolygonDrawMode), param1 *qt.QPoint, param2 int, param3 qt.QPaintEngine__PolygonDrawMode)) {
	ok := C.QwtNullPaintDevice_override_virtual_drawPolygon2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_drawPolygon2
func miqt_exec_callback_QwtNullPaintDevice_drawPolygon2(self *C.QwtNullPaintDevice, cb C.intptr_t, param1 *C.QPoint, param2 C.int, param3 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPoint, param2 int, param3 qt.QPaintEngine__PolygonDrawMode), param1 *qt.QPoint, param2 int, param3 qt.QPaintEngine__PolygonDrawMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(param1))

	slotval2 := (int)(param2)

	slotval3 := (qt.QPaintEngine__PolygonDrawMode)(param3)

	gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_DrawPolygon2, slotval1, slotval2, slotval3)

}

func (this *QwtNullPaintDevice) callVirtualBase_DrawPixmap(param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QRectF) {

	C.QwtNullPaintDevice_virtualbase_drawPixmap(unsafe.Pointer(this.h), (*C.QRectF)(param1.UnsafePointer()), (*C.QPixmap)(param2.UnsafePointer()), (*C.QRectF)(param3.UnsafePointer()))

}
func (this *QwtNullPaintDevice) OnDrawPixmap(slot func(super func(param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QRectF), param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QRectF)) {
	ok := C.QwtNullPaintDevice_override_virtual_drawPixmap(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_drawPixmap
func miqt_exec_callback_QwtNullPaintDevice_drawPixmap(self *C.QwtNullPaintDevice, cb C.intptr_t, param1 *C.QRectF, param2 *C.QPixmap, param3 *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QRectF), param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRectF(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQPixmap(unsafe.Pointer(param2))

	slotval3 := qt.UnsafeNewQRectF(unsafe.Pointer(param3))

	gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_DrawPixmap, slotval1, slotval2, slotval3)

}

func (this *QwtNullPaintDevice) callVirtualBase_DrawTextItem(param1 *qt.QPointF, param2 *qt.QTextItem) {

	C.QwtNullPaintDevice_virtualbase_drawTextItem(unsafe.Pointer(this.h), (*C.QPointF)(param1.UnsafePointer()), (*C.QTextItem)(param2.UnsafePointer()))

}
func (this *QwtNullPaintDevice) OnDrawTextItem(slot func(super func(param1 *qt.QPointF, param2 *qt.QTextItem), param1 *qt.QPointF, param2 *qt.QTextItem)) {
	ok := C.QwtNullPaintDevice_override_virtual_drawTextItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_drawTextItem
func miqt_exec_callback_QwtNullPaintDevice_drawTextItem(self *C.QwtNullPaintDevice, cb C.intptr_t, param1 *C.QPointF, param2 *C.QTextItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPointF, param2 *qt.QTextItem), param1 *qt.QPointF, param2 *qt.QTextItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPointF(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQTextItem(unsafe.Pointer(param2))

	gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_DrawTextItem, slotval1, slotval2)

}

func (this *QwtNullPaintDevice) callVirtualBase_DrawTiledPixmap(param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QPointF) {

	C.QwtNullPaintDevice_virtualbase_drawTiledPixmap(unsafe.Pointer(this.h), (*C.QRectF)(param1.UnsafePointer()), (*C.QPixmap)(param2.UnsafePointer()), (*C.QPointF)(param3.UnsafePointer()))

}
func (this *QwtNullPaintDevice) OnDrawTiledPixmap(slot func(super func(param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QPointF), param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QPointF)) {
	ok := C.QwtNullPaintDevice_override_virtual_drawTiledPixmap(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_drawTiledPixmap
func miqt_exec_callback_QwtNullPaintDevice_drawTiledPixmap(self *C.QwtNullPaintDevice, cb C.intptr_t, param1 *C.QRectF, param2 *C.QPixmap, param3 *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QPointF), param1 *qt.QRectF, param2 *qt.QPixmap, param3 *qt.QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRectF(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQPixmap(unsafe.Pointer(param2))

	slotval3 := qt.UnsafeNewQPointF(unsafe.Pointer(param3))

	gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_DrawTiledPixmap, slotval1, slotval2, slotval3)

}

func (this *QwtNullPaintDevice) callVirtualBase_DrawImage(param1 *qt.QRectF, param2 *qt.QImage, param3 *qt.QRectF, param4 qt.ImageConversionFlag) {

	C.QwtNullPaintDevice_virtualbase_drawImage(unsafe.Pointer(this.h), (*C.QRectF)(param1.UnsafePointer()), (*C.QImage)(param2.UnsafePointer()), (*C.QRectF)(param3.UnsafePointer()), (C.int)(param4))

}
func (this *QwtNullPaintDevice) OnDrawImage(slot func(super func(param1 *qt.QRectF, param2 *qt.QImage, param3 *qt.QRectF, param4 qt.ImageConversionFlag), param1 *qt.QRectF, param2 *qt.QImage, param3 *qt.QRectF, param4 qt.ImageConversionFlag)) {
	ok := C.QwtNullPaintDevice_override_virtual_drawImage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_drawImage
func miqt_exec_callback_QwtNullPaintDevice_drawImage(self *C.QwtNullPaintDevice, cb C.intptr_t, param1 *C.QRectF, param2 *C.QImage, param3 *C.QRectF, param4 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QRectF, param2 *qt.QImage, param3 *qt.QRectF, param4 qt.ImageConversionFlag), param1 *qt.QRectF, param2 *qt.QImage, param3 *qt.QRectF, param4 qt.ImageConversionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQRectF(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQImage(unsafe.Pointer(param2))

	slotval3 := qt.UnsafeNewQRectF(unsafe.Pointer(param3))

	slotval4 := (qt.ImageConversionFlag)(param4)

	gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_DrawImage, slotval1, slotval2, slotval3, slotval4)

}

func (this *QwtNullPaintDevice) callVirtualBase_UpdateState(param1 *qt.QPaintEngineState) {

	C.QwtNullPaintDevice_virtualbase_updateState(unsafe.Pointer(this.h), (*C.QPaintEngineState)(param1.UnsafePointer()))

}
func (this *QwtNullPaintDevice) OnUpdateState(slot func(super func(param1 *qt.QPaintEngineState), param1 *qt.QPaintEngineState)) {
	ok := C.QwtNullPaintDevice_override_virtual_updateState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_updateState
func miqt_exec_callback_QwtNullPaintDevice_updateState(self *C.QwtNullPaintDevice, cb C.intptr_t, param1 *C.QPaintEngineState) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPaintEngineState), param1 *qt.QPaintEngineState))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEngineState(unsafe.Pointer(param1))

	gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_UpdateState, slotval1)

}
func (this *QwtNullPaintDevice) OnSizeMetrics(slot func() *qt.QSize) {
	ok := C.QwtNullPaintDevice_override_virtual_sizeMetrics(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_sizeMetrics
func miqt_exec_callback_QwtNullPaintDevice_sizeMetrics(self *C.QwtNullPaintDevice, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func() *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtNullPaintDevice) callVirtualBase_DevType() int {

	return (int)(C.QwtNullPaintDevice_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtNullPaintDevice) OnDevType(slot func(super func() int) int) {
	ok := C.QwtNullPaintDevice_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_devType
func miqt_exec_callback_QwtNullPaintDevice_devType(self *C.QwtNullPaintDevice, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtNullPaintDevice) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtNullPaintDevice_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtNullPaintDevice) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtNullPaintDevice_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_initPainter
func miqt_exec_callback_QwtNullPaintDevice_initPainter(self *C.QwtNullPaintDevice, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtNullPaintDevice) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtNullPaintDevice_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtNullPaintDevice) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtNullPaintDevice_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_redirected
func miqt_exec_callback_QwtNullPaintDevice_redirected(self *C.QwtNullPaintDevice, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtNullPaintDevice) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtNullPaintDevice_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtNullPaintDevice) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtNullPaintDevice_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtNullPaintDevice_sharedPainter
func miqt_exec_callback_QwtNullPaintDevice_sharedPainter(self *C.QwtNullPaintDevice, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtNullPaintDevice{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QwtNullPaintDevice) Delete() {
	C.QwtNullPaintDevice_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtNullPaintDevice) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtNullPaintDevice) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
