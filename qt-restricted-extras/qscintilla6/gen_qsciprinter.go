package qscintilla6

/*

#include "gen_qsciprinter.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"github.com/mappu/miqt/qt6/printsupport"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciPrinter struct {
	h *C.QsciPrinter
	*printsupport.QPrinter
}

func (this *QsciPrinter) cPointer() *C.QsciPrinter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciPrinter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciPrinter constructs the type using only CGO pointers.
func newQsciPrinter(h *C.QsciPrinter) *QsciPrinter {
	if h == nil {
		return nil
	}
	var outptr_QPrinter *C.QPrinter = nil
	C.QsciPrinter_virtbase(h, &outptr_QPrinter)

	return &QsciPrinter{h: h,
		QPrinter: printsupport.UnsafeNewQPrinter(unsafe.Pointer(outptr_QPrinter))}
}

// UnsafeNewQsciPrinter constructs the type using only unsafe pointers.
func UnsafeNewQsciPrinter(h unsafe.Pointer) *QsciPrinter {
	return newQsciPrinter((*C.QsciPrinter)(h))
}

// NewQsciPrinter constructs a new QsciPrinter object.
func NewQsciPrinter() *QsciPrinter {

	return newQsciPrinter(C.QsciPrinter_new())
}

// NewQsciPrinter2 constructs a new QsciPrinter object.
func NewQsciPrinter2(mode printsupport.QPrinter__PrinterMode) *QsciPrinter {

	return newQsciPrinter(C.QsciPrinter_new2((C.int)(mode)))
}

func (this *QsciPrinter) FormatPage(painter *qt6.QPainter, drawing bool, area *qt6.QRect, pagenr int) {
	C.QsciPrinter_formatPage(this.h, (*C.QPainter)(painter.UnsafePointer()), (C.bool)(drawing), (*C.QRect)(area.UnsafePointer()), (C.int)(pagenr))
}

func (this *QsciPrinter) Magnification() int {
	return (int)(C.QsciPrinter_magnification(this.h))
}

func (this *QsciPrinter) SetMagnification(magnification int) {
	C.QsciPrinter_setMagnification(this.h, (C.int)(magnification))
}

func (this *QsciPrinter) PrintRange(qsb *QsciScintillaBase, painter *qt6.QPainter, from int, to int) int {
	return (int)(C.QsciPrinter_printRange(this.h, qsb.cPointer(), (*C.QPainter)(painter.UnsafePointer()), (C.int)(from), (C.int)(to)))
}

func (this *QsciPrinter) PrintRange2(qsb *QsciScintillaBase, from int, to int) int {
	return (int)(C.QsciPrinter_printRange2(this.h, qsb.cPointer(), (C.int)(from), (C.int)(to)))
}

func (this *QsciPrinter) WrapMode() QsciScintilla__WrapMode {
	return (QsciScintilla__WrapMode)(C.QsciPrinter_wrapMode(this.h))
}

func (this *QsciPrinter) SetWrapMode(wmode QsciScintilla__WrapMode) {
	C.QsciPrinter_setWrapMode(this.h, (C.int)(wmode))
}

// SetEngines can only be called from a QsciPrinter that was directly constructed.
func (this *QsciPrinter) SetEngines(printEngine *printsupport.QPrintEngine, paintEngine *qt6.QPaintEngine) {

	var _dynamic_cast_ok C.bool = false
	C.QsciPrinter_protectedbase_setEngines(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QPrintEngine)(printEngine.UnsafePointer()), (*C.QPaintEngine)(paintEngine.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QsciPrinter) callVirtualBase_FormatPage(painter *qt6.QPainter, drawing bool, area *qt6.QRect, pagenr int) {

	C.QsciPrinter_virtualbase_formatPage(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()), (C.bool)(drawing), (*C.QRect)(area.UnsafePointer()), (C.int)(pagenr))

}
func (this *QsciPrinter) OnFormatPage(slot func(super func(painter *qt6.QPainter, drawing bool, area *qt6.QRect, pagenr int), painter *qt6.QPainter, drawing bool, area *qt6.QRect, pagenr int)) {
	ok := C.QsciPrinter_override_virtual_formatPage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciPrinter_formatPage
func miqt_exec_callback_QsciPrinter_formatPage(self *C.QsciPrinter, cb C.intptr_t, painter *C.QPainter, drawing C.bool, area *C.QRect, pagenr C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter, drawing bool, area *qt6.QRect, pagenr int), painter *qt6.QPainter, drawing bool, area *qt6.QRect, pagenr int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := (bool)(drawing)

	slotval3 := qt6.UnsafeNewQRect(unsafe.Pointer(area))

	slotval4 := (int)(pagenr)

	gofunc((&QsciPrinter{h: self}).callVirtualBase_FormatPage, slotval1, slotval2, slotval3, slotval4)

}

func (this *QsciPrinter) callVirtualBase_SetMagnification(magnification int) {

	C.QsciPrinter_virtualbase_setMagnification(unsafe.Pointer(this.h), (C.int)(magnification))

}
func (this *QsciPrinter) OnSetMagnification(slot func(super func(magnification int), magnification int)) {
	ok := C.QsciPrinter_override_virtual_setMagnification(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciPrinter_setMagnification
func miqt_exec_callback_QsciPrinter_setMagnification(self *C.QsciPrinter, cb C.intptr_t, magnification C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(magnification int), magnification int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(magnification)

	gofunc((&QsciPrinter{h: self}).callVirtualBase_SetMagnification, slotval1)

}

func (this *QsciPrinter) callVirtualBase_PrintRange(qsb *QsciScintillaBase, painter *qt6.QPainter, from int, to int) int {

	return (int)(C.QsciPrinter_virtualbase_printRange(unsafe.Pointer(this.h), qsb.cPointer(), (*C.QPainter)(painter.UnsafePointer()), (C.int)(from), (C.int)(to)))

}
func (this *QsciPrinter) OnPrintRange(slot func(super func(qsb *QsciScintillaBase, painter *qt6.QPainter, from int, to int) int, qsb *QsciScintillaBase, painter *qt6.QPainter, from int, to int) int) {
	ok := C.QsciPrinter_override_virtual_printRange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciPrinter_printRange
func miqt_exec_callback_QsciPrinter_printRange(self *C.QsciPrinter, cb C.intptr_t, qsb *C.QsciScintillaBase, painter *C.QPainter, from C.int, to C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(qsb *QsciScintillaBase, painter *qt6.QPainter, from int, to int) int, qsb *QsciScintillaBase, painter *qt6.QPainter, from int, to int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQsciScintillaBase(qsb)

	slotval2 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval3 := (int)(from)

	slotval4 := (int)(to)

	virtualReturn := gofunc((&QsciPrinter{h: self}).callVirtualBase_PrintRange, slotval1, slotval2, slotval3, slotval4)

	return (C.int)(virtualReturn)

}

func (this *QsciPrinter) callVirtualBase_PrintRange2(qsb *QsciScintillaBase, from int, to int) int {

	return (int)(C.QsciPrinter_virtualbase_printRange2(unsafe.Pointer(this.h), qsb.cPointer(), (C.int)(from), (C.int)(to)))

}
func (this *QsciPrinter) OnPrintRange2(slot func(super func(qsb *QsciScintillaBase, from int, to int) int, qsb *QsciScintillaBase, from int, to int) int) {
	ok := C.QsciPrinter_override_virtual_printRange2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciPrinter_printRange2
func miqt_exec_callback_QsciPrinter_printRange2(self *C.QsciPrinter, cb C.intptr_t, qsb *C.QsciScintillaBase, from C.int, to C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(qsb *QsciScintillaBase, from int, to int) int, qsb *QsciScintillaBase, from int, to int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQsciScintillaBase(qsb)

	slotval2 := (int)(from)

	slotval3 := (int)(to)

	virtualReturn := gofunc((&QsciPrinter{h: self}).callVirtualBase_PrintRange2, slotval1, slotval2, slotval3)

	return (C.int)(virtualReturn)

}

func (this *QsciPrinter) callVirtualBase_SetWrapMode(wmode QsciScintilla__WrapMode) {

	C.QsciPrinter_virtualbase_setWrapMode(unsafe.Pointer(this.h), (C.int)(wmode))

}
func (this *QsciPrinter) OnSetWrapMode(slot func(super func(wmode QsciScintilla__WrapMode), wmode QsciScintilla__WrapMode)) {
	ok := C.QsciPrinter_override_virtual_setWrapMode(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciPrinter_setWrapMode
func miqt_exec_callback_QsciPrinter_setWrapMode(self *C.QsciPrinter, cb C.intptr_t, wmode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(wmode QsciScintilla__WrapMode), wmode QsciScintilla__WrapMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QsciScintilla__WrapMode)(wmode)

	gofunc((&QsciPrinter{h: self}).callVirtualBase_SetWrapMode, slotval1)

}

func (this *QsciPrinter) callVirtualBase_DevType() int {

	return (int)(C.QsciPrinter_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QsciPrinter) OnDevType(slot func(super func() int) int) {
	ok := C.QsciPrinter_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciPrinter_devType
func miqt_exec_callback_QsciPrinter_devType(self *C.QsciPrinter, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciPrinter{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QsciPrinter) callVirtualBase_NewPage() bool {

	return (bool)(C.QsciPrinter_virtualbase_newPage(unsafe.Pointer(this.h)))

}
func (this *QsciPrinter) OnNewPage(slot func(super func() bool) bool) {
	ok := C.QsciPrinter_override_virtual_newPage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciPrinter_newPage
func miqt_exec_callback_QsciPrinter_newPage(self *C.QsciPrinter, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciPrinter{h: self}).callVirtualBase_NewPage)

	return (C.bool)(virtualReturn)

}

func (this *QsciPrinter) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QsciPrinter_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QsciPrinter) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.QsciPrinter_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciPrinter_paintEngine
func miqt_exec_callback_QsciPrinter_paintEngine(self *C.QsciPrinter, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciPrinter{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QsciPrinter) callVirtualBase_Metric(param1 qt6.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QsciPrinter_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QsciPrinter) OnMetric(slot func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QsciPrinter_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciPrinter_metric
func miqt_exec_callback_QsciPrinter_metric(self *C.QsciPrinter, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QsciPrinter{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QsciPrinter) callVirtualBase_SetPageLayout(pageLayout *qt6.QPageLayout) bool {

	return (bool)(C.QsciPrinter_virtualbase_setPageLayout(unsafe.Pointer(this.h), (*C.QPageLayout)(pageLayout.UnsafePointer())))

}
func (this *QsciPrinter) OnSetPageLayout(slot func(super func(pageLayout *qt6.QPageLayout) bool, pageLayout *qt6.QPageLayout) bool) {
	ok := C.QsciPrinter_override_virtual_setPageLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciPrinter_setPageLayout
func miqt_exec_callback_QsciPrinter_setPageLayout(self *C.QsciPrinter, cb C.intptr_t, pageLayout *C.QPageLayout) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pageLayout *qt6.QPageLayout) bool, pageLayout *qt6.QPageLayout) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPageLayout(unsafe.Pointer(pageLayout))

	virtualReturn := gofunc((&QsciPrinter{h: self}).callVirtualBase_SetPageLayout, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciPrinter) callVirtualBase_SetPageSize(pageSize *qt6.QPageSize) bool {

	return (bool)(C.QsciPrinter_virtualbase_setPageSize(unsafe.Pointer(this.h), (*C.QPageSize)(pageSize.UnsafePointer())))

}
func (this *QsciPrinter) OnSetPageSize(slot func(super func(pageSize *qt6.QPageSize) bool, pageSize *qt6.QPageSize) bool) {
	ok := C.QsciPrinter_override_virtual_setPageSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciPrinter_setPageSize
func miqt_exec_callback_QsciPrinter_setPageSize(self *C.QsciPrinter, cb C.intptr_t, pageSize *C.QPageSize) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pageSize *qt6.QPageSize) bool, pageSize *qt6.QPageSize) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPageSize(unsafe.Pointer(pageSize))

	virtualReturn := gofunc((&QsciPrinter{h: self}).callVirtualBase_SetPageSize, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciPrinter) callVirtualBase_SetPageOrientation(orientation qt6.QPageLayout__Orientation) bool {

	return (bool)(C.QsciPrinter_virtualbase_setPageOrientation(unsafe.Pointer(this.h), (C.int)(orientation)))

}
func (this *QsciPrinter) OnSetPageOrientation(slot func(super func(orientation qt6.QPageLayout__Orientation) bool, orientation qt6.QPageLayout__Orientation) bool) {
	ok := C.QsciPrinter_override_virtual_setPageOrientation(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciPrinter_setPageOrientation
func miqt_exec_callback_QsciPrinter_setPageOrientation(self *C.QsciPrinter, cb C.intptr_t, orientation C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(orientation qt6.QPageLayout__Orientation) bool, orientation qt6.QPageLayout__Orientation) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QPageLayout__Orientation)(orientation)

	virtualReturn := gofunc((&QsciPrinter{h: self}).callVirtualBase_SetPageOrientation, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciPrinter) callVirtualBase_SetPageMargins(margins *qt6.QMarginsF, units qt6.QPageLayout__Unit) bool {

	return (bool)(C.QsciPrinter_virtualbase_setPageMargins(unsafe.Pointer(this.h), (*C.QMarginsF)(margins.UnsafePointer()), (C.int)(units)))

}
func (this *QsciPrinter) OnSetPageMargins(slot func(super func(margins *qt6.QMarginsF, units qt6.QPageLayout__Unit) bool, margins *qt6.QMarginsF, units qt6.QPageLayout__Unit) bool) {
	ok := C.QsciPrinter_override_virtual_setPageMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciPrinter_setPageMargins
func miqt_exec_callback_QsciPrinter_setPageMargins(self *C.QsciPrinter, cb C.intptr_t, margins *C.QMarginsF, units C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(margins *qt6.QMarginsF, units qt6.QPageLayout__Unit) bool, margins *qt6.QMarginsF, units qt6.QPageLayout__Unit) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMarginsF(unsafe.Pointer(margins))

	slotval2 := (qt6.QPageLayout__Unit)(units)

	virtualReturn := gofunc((&QsciPrinter{h: self}).callVirtualBase_SetPageMargins, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciPrinter) callVirtualBase_SetPageRanges(ranges *qt6.QPageRanges) {

	C.QsciPrinter_virtualbase_setPageRanges(unsafe.Pointer(this.h), (*C.QPageRanges)(ranges.UnsafePointer()))

}
func (this *QsciPrinter) OnSetPageRanges(slot func(super func(ranges *qt6.QPageRanges), ranges *qt6.QPageRanges)) {
	ok := C.QsciPrinter_override_virtual_setPageRanges(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciPrinter_setPageRanges
func miqt_exec_callback_QsciPrinter_setPageRanges(self *C.QsciPrinter, cb C.intptr_t, ranges *C.QPageRanges) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ranges *qt6.QPageRanges), ranges *qt6.QPageRanges))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPageRanges(unsafe.Pointer(ranges))

	gofunc((&QsciPrinter{h: self}).callVirtualBase_SetPageRanges, slotval1)

}

func (this *QsciPrinter) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.QsciPrinter_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QsciPrinter) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.QsciPrinter_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciPrinter_initPainter
func miqt_exec_callback_QsciPrinter_initPainter(self *C.QsciPrinter, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QsciPrinter{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QsciPrinter) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QsciPrinter_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QsciPrinter) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.QsciPrinter_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciPrinter_redirected
func miqt_exec_callback_QsciPrinter_redirected(self *C.QsciPrinter, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QsciPrinter{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QsciPrinter) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QsciPrinter_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QsciPrinter) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.QsciPrinter_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QsciPrinter_sharedPainter
func miqt_exec_callback_QsciPrinter_sharedPainter(self *C.QsciPrinter, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciPrinter{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QsciPrinter) Delete() {
	C.QsciPrinter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciPrinter) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciPrinter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
