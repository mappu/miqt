package qwt

/*

#include "gen_qwt_plot_renderer.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/printsupport"
	"github.com/mappu/miqt/qt/svg"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtPlotRenderer__DiscardFlag int

const (
	QwtPlotRenderer__DiscardNone             QwtPlotRenderer__DiscardFlag = 0
	QwtPlotRenderer__DiscardBackground       QwtPlotRenderer__DiscardFlag = 1
	QwtPlotRenderer__DiscardTitle            QwtPlotRenderer__DiscardFlag = 2
	QwtPlotRenderer__DiscardLegend           QwtPlotRenderer__DiscardFlag = 4
	QwtPlotRenderer__DiscardCanvasBackground QwtPlotRenderer__DiscardFlag = 8
	QwtPlotRenderer__DiscardFooter           QwtPlotRenderer__DiscardFlag = 16
	QwtPlotRenderer__DiscardCanvasFrame      QwtPlotRenderer__DiscardFlag = 32
)

type QwtPlotRenderer__LayoutFlag int

const (
	QwtPlotRenderer__DefaultLayout   QwtPlotRenderer__LayoutFlag = 0
	QwtPlotRenderer__FrameWithScales QwtPlotRenderer__LayoutFlag = 1
)

type QwtPlotRenderer struct {
	h *C.QwtPlotRenderer
	*qt.QObject
}

func (this *QwtPlotRenderer) cPointer() *C.QwtPlotRenderer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotRenderer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotRenderer constructs the type using only CGO pointers.
func newQwtPlotRenderer(h *C.QwtPlotRenderer) *QwtPlotRenderer {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QwtPlotRenderer_virtbase(h, &outptr_QObject)

	return &QwtPlotRenderer{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQwtPlotRenderer constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotRenderer(h unsafe.Pointer) *QwtPlotRenderer {
	return newQwtPlotRenderer((*C.QwtPlotRenderer)(h))
}

// NewQwtPlotRenderer constructs a new QwtPlotRenderer object.
func NewQwtPlotRenderer() *QwtPlotRenderer {

	return newQwtPlotRenderer(C.QwtPlotRenderer_new())
}

// NewQwtPlotRenderer2 constructs a new QwtPlotRenderer object.
func NewQwtPlotRenderer2(param1 *qt.QObject) *QwtPlotRenderer {

	return newQwtPlotRenderer(C.QwtPlotRenderer_new2((*C.QObject)(param1.UnsafePointer())))
}

func (this *QwtPlotRenderer) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtPlotRenderer_metaObject(this.h)))
}

func (this *QwtPlotRenderer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtPlotRenderer_metacast(this.h, param1_Cstring))
}

func QwtPlotRenderer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotRenderer_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotRenderer_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotRenderer_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtPlotRenderer) SetDiscardFlag(flag QwtPlotRenderer__DiscardFlag) {
	C.QwtPlotRenderer_setDiscardFlag(this.h, (C.int)(flag))
}

func (this *QwtPlotRenderer) TestDiscardFlag(flag QwtPlotRenderer__DiscardFlag) bool {
	return (bool)(C.QwtPlotRenderer_testDiscardFlag(this.h, (C.int)(flag)))
}

func (this *QwtPlotRenderer) SetDiscardFlags(flags QwtPlotRenderer__DiscardFlag) {
	C.QwtPlotRenderer_setDiscardFlags(this.h, (C.int)(flags))
}

func (this *QwtPlotRenderer) DiscardFlags() QwtPlotRenderer__DiscardFlag {
	return (QwtPlotRenderer__DiscardFlag)(C.QwtPlotRenderer_discardFlags(this.h))
}

func (this *QwtPlotRenderer) SetLayoutFlag(flag QwtPlotRenderer__LayoutFlag) {
	C.QwtPlotRenderer_setLayoutFlag(this.h, (C.int)(flag))
}

func (this *QwtPlotRenderer) TestLayoutFlag(flag QwtPlotRenderer__LayoutFlag) bool {
	return (bool)(C.QwtPlotRenderer_testLayoutFlag(this.h, (C.int)(flag)))
}

func (this *QwtPlotRenderer) SetLayoutFlags(flags QwtPlotRenderer__LayoutFlag) {
	C.QwtPlotRenderer_setLayoutFlags(this.h, (C.int)(flags))
}

func (this *QwtPlotRenderer) LayoutFlags() QwtPlotRenderer__LayoutFlag {
	return (QwtPlotRenderer__LayoutFlag)(C.QwtPlotRenderer_layoutFlags(this.h))
}

func (this *QwtPlotRenderer) RenderDocument(param1 *QwtPlot, fileName string, sizeMM *qt.QSizeF) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QwtPlotRenderer_renderDocument(this.h, param1.cPointer(), fileName_ms, (*C.QSizeF)(sizeMM.UnsafePointer()))
}

func (this *QwtPlotRenderer) RenderDocument2(param1 *QwtPlot, fileName string, format string, sizeMM *qt.QSizeF) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	C.QwtPlotRenderer_renderDocument2(this.h, param1.cPointer(), fileName_ms, format_ms, (*C.QSizeF)(sizeMM.UnsafePointer()))
}

func (this *QwtPlotRenderer) RenderTo(param1 *QwtPlot, param2 *svg.QSvgGenerator) {
	C.QwtPlotRenderer_renderTo(this.h, param1.cPointer(), (*C.QSvgGenerator)(param2.UnsafePointer()))
}

func (this *QwtPlotRenderer) RenderTo2(param1 *QwtPlot, param2 *printsupport.QPrinter) {
	C.QwtPlotRenderer_renderTo2(this.h, param1.cPointer(), (*C.QPrinter)(param2.UnsafePointer()))
}

func (this *QwtPlotRenderer) RenderTo3(param1 *QwtPlot, param2 *qt.QPaintDevice) {
	C.QwtPlotRenderer_renderTo3(this.h, param1.cPointer(), (*C.QPaintDevice)(param2.UnsafePointer()))
}

func (this *QwtPlotRenderer) Render(param1 *QwtPlot, param2 *qt.QPainter, plotRect *qt.QRectF) {
	C.QwtPlotRenderer_render(this.h, param1.cPointer(), (*C.QPainter)(param2.UnsafePointer()), (*C.QRectF)(plotRect.UnsafePointer()))
}

func (this *QwtPlotRenderer) RenderTitle(param1 *QwtPlot, param2 *qt.QPainter, titleRect *qt.QRectF) {
	C.QwtPlotRenderer_renderTitle(this.h, param1.cPointer(), (*C.QPainter)(param2.UnsafePointer()), (*C.QRectF)(titleRect.UnsafePointer()))
}

func (this *QwtPlotRenderer) RenderFooter(param1 *QwtPlot, param2 *qt.QPainter, footerRect *qt.QRectF) {
	C.QwtPlotRenderer_renderFooter(this.h, param1.cPointer(), (*C.QPainter)(param2.UnsafePointer()), (*C.QRectF)(footerRect.UnsafePointer()))
}

func (this *QwtPlotRenderer) RenderScale(param1 *QwtPlot, param2 *qt.QPainter, axisId int, startDist int, endDist int, baseDist int, scaleRect *qt.QRectF) {
	C.QwtPlotRenderer_renderScale(this.h, param1.cPointer(), (*C.QPainter)(param2.UnsafePointer()), (C.int)(axisId), (C.int)(startDist), (C.int)(endDist), (C.int)(baseDist), (*C.QRectF)(scaleRect.UnsafePointer()))
}

func (this *QwtPlotRenderer) RenderLegend(param1 *QwtPlot, param2 *qt.QPainter, legendRect *qt.QRectF) {
	C.QwtPlotRenderer_renderLegend(this.h, param1.cPointer(), (*C.QPainter)(param2.UnsafePointer()), (*C.QRectF)(legendRect.UnsafePointer()))
}

func (this *QwtPlotRenderer) ExportTo(param1 *QwtPlot, documentName string) bool {
	documentName_ms := C.struct_miqt_string{}
	documentName_ms.data = C.CString(documentName)
	documentName_ms.len = C.size_t(len(documentName))
	defer C.free(unsafe.Pointer(documentName_ms.data))
	return (bool)(C.QwtPlotRenderer_exportTo(this.h, param1.cPointer(), documentName_ms))
}

func QwtPlotRenderer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotRenderer_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotRenderer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotRenderer_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotRenderer_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotRenderer_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPlotRenderer_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPlotRenderer_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtPlotRenderer) SetDiscardFlag2(flag QwtPlotRenderer__DiscardFlag, on bool) {
	C.QwtPlotRenderer_setDiscardFlag2(this.h, (C.int)(flag), (C.bool)(on))
}

func (this *QwtPlotRenderer) SetLayoutFlag2(flag QwtPlotRenderer__LayoutFlag, on bool) {
	C.QwtPlotRenderer_setLayoutFlag2(this.h, (C.int)(flag), (C.bool)(on))
}

func (this *QwtPlotRenderer) RenderDocument3(param1 *QwtPlot, fileName string, sizeMM *qt.QSizeF, resolution int) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QwtPlotRenderer_renderDocument3(this.h, param1.cPointer(), fileName_ms, (*C.QSizeF)(sizeMM.UnsafePointer()), (C.int)(resolution))
}

func (this *QwtPlotRenderer) RenderDocument4(param1 *QwtPlot, fileName string, format string, sizeMM *qt.QSizeF, resolution int) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	C.QwtPlotRenderer_renderDocument4(this.h, param1.cPointer(), fileName_ms, format_ms, (*C.QSizeF)(sizeMM.UnsafePointer()), (C.int)(resolution))
}

func (this *QwtPlotRenderer) ExportTo2(param1 *QwtPlot, documentName string, sizeMM *qt.QSizeF) bool {
	documentName_ms := C.struct_miqt_string{}
	documentName_ms.data = C.CString(documentName)
	documentName_ms.len = C.size_t(len(documentName))
	defer C.free(unsafe.Pointer(documentName_ms.data))
	return (bool)(C.QwtPlotRenderer_exportTo2(this.h, param1.cPointer(), documentName_ms, (*C.QSizeF)(sizeMM.UnsafePointer())))
}

func (this *QwtPlotRenderer) ExportTo3(param1 *QwtPlot, documentName string, sizeMM *qt.QSizeF, resolution int) bool {
	documentName_ms := C.struct_miqt_string{}
	documentName_ms.data = C.CString(documentName)
	documentName_ms.len = C.size_t(len(documentName))
	defer C.free(unsafe.Pointer(documentName_ms.data))
	return (bool)(C.QwtPlotRenderer_exportTo3(this.h, param1.cPointer(), documentName_ms, (*C.QSizeF)(sizeMM.UnsafePointer()), (C.int)(resolution)))
}

// Sender can only be called from a QwtPlotRenderer that was directly constructed.
func (this *QwtPlotRenderer) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtPlotRenderer_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtPlotRenderer that was directly constructed.
func (this *QwtPlotRenderer) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPlotRenderer_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtPlotRenderer that was directly constructed.
func (this *QwtPlotRenderer) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPlotRenderer_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtPlotRenderer that was directly constructed.
func (this *QwtPlotRenderer) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtPlotRenderer_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtPlotRenderer) callVirtualBase_Render(param1 *QwtPlot, param2 *qt.QPainter, plotRect *qt.QRectF) {

	C.QwtPlotRenderer_virtualbase_render(unsafe.Pointer(this.h), param1.cPointer(), (*C.QPainter)(param2.UnsafePointer()), (*C.QRectF)(plotRect.UnsafePointer()))

}
func (this *QwtPlotRenderer) OnRender(slot func(super func(param1 *QwtPlot, param2 *qt.QPainter, plotRect *qt.QRectF), param1 *QwtPlot, param2 *qt.QPainter, plotRect *qt.QRectF)) {
	ok := C.QwtPlotRenderer_override_virtual_render(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRenderer_render
func miqt_exec_callback_QwtPlotRenderer_render(self *C.QwtPlotRenderer, cb C.intptr_t, param1 *C.QwtPlot, param2 *C.QPainter, plotRect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtPlot, param2 *qt.QPainter, plotRect *qt.QRectF), param1 *QwtPlot, param2 *qt.QPainter, plotRect *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtPlot(param1)

	slotval2 := qt.UnsafeNewQPainter(unsafe.Pointer(param2))

	slotval3 := qt.UnsafeNewQRectF(unsafe.Pointer(plotRect))

	gofunc((&QwtPlotRenderer{h: self}).callVirtualBase_Render, slotval1, slotval2, slotval3)

}

func (this *QwtPlotRenderer) callVirtualBase_RenderTitle(param1 *QwtPlot, param2 *qt.QPainter, titleRect *qt.QRectF) {

	C.QwtPlotRenderer_virtualbase_renderTitle(unsafe.Pointer(this.h), param1.cPointer(), (*C.QPainter)(param2.UnsafePointer()), (*C.QRectF)(titleRect.UnsafePointer()))

}
func (this *QwtPlotRenderer) OnRenderTitle(slot func(super func(param1 *QwtPlot, param2 *qt.QPainter, titleRect *qt.QRectF), param1 *QwtPlot, param2 *qt.QPainter, titleRect *qt.QRectF)) {
	ok := C.QwtPlotRenderer_override_virtual_renderTitle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRenderer_renderTitle
func miqt_exec_callback_QwtPlotRenderer_renderTitle(self *C.QwtPlotRenderer, cb C.intptr_t, param1 *C.QwtPlot, param2 *C.QPainter, titleRect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtPlot, param2 *qt.QPainter, titleRect *qt.QRectF), param1 *QwtPlot, param2 *qt.QPainter, titleRect *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtPlot(param1)

	slotval2 := qt.UnsafeNewQPainter(unsafe.Pointer(param2))

	slotval3 := qt.UnsafeNewQRectF(unsafe.Pointer(titleRect))

	gofunc((&QwtPlotRenderer{h: self}).callVirtualBase_RenderTitle, slotval1, slotval2, slotval3)

}

func (this *QwtPlotRenderer) callVirtualBase_RenderFooter(param1 *QwtPlot, param2 *qt.QPainter, footerRect *qt.QRectF) {

	C.QwtPlotRenderer_virtualbase_renderFooter(unsafe.Pointer(this.h), param1.cPointer(), (*C.QPainter)(param2.UnsafePointer()), (*C.QRectF)(footerRect.UnsafePointer()))

}
func (this *QwtPlotRenderer) OnRenderFooter(slot func(super func(param1 *QwtPlot, param2 *qt.QPainter, footerRect *qt.QRectF), param1 *QwtPlot, param2 *qt.QPainter, footerRect *qt.QRectF)) {
	ok := C.QwtPlotRenderer_override_virtual_renderFooter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRenderer_renderFooter
func miqt_exec_callback_QwtPlotRenderer_renderFooter(self *C.QwtPlotRenderer, cb C.intptr_t, param1 *C.QwtPlot, param2 *C.QPainter, footerRect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtPlot, param2 *qt.QPainter, footerRect *qt.QRectF), param1 *QwtPlot, param2 *qt.QPainter, footerRect *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtPlot(param1)

	slotval2 := qt.UnsafeNewQPainter(unsafe.Pointer(param2))

	slotval3 := qt.UnsafeNewQRectF(unsafe.Pointer(footerRect))

	gofunc((&QwtPlotRenderer{h: self}).callVirtualBase_RenderFooter, slotval1, slotval2, slotval3)

}

func (this *QwtPlotRenderer) callVirtualBase_RenderScale(param1 *QwtPlot, param2 *qt.QPainter, axisId int, startDist int, endDist int, baseDist int, scaleRect *qt.QRectF) {

	C.QwtPlotRenderer_virtualbase_renderScale(unsafe.Pointer(this.h), param1.cPointer(), (*C.QPainter)(param2.UnsafePointer()), (C.int)(axisId), (C.int)(startDist), (C.int)(endDist), (C.int)(baseDist), (*C.QRectF)(scaleRect.UnsafePointer()))

}
func (this *QwtPlotRenderer) OnRenderScale(slot func(super func(param1 *QwtPlot, param2 *qt.QPainter, axisId int, startDist int, endDist int, baseDist int, scaleRect *qt.QRectF), param1 *QwtPlot, param2 *qt.QPainter, axisId int, startDist int, endDist int, baseDist int, scaleRect *qt.QRectF)) {
	ok := C.QwtPlotRenderer_override_virtual_renderScale(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRenderer_renderScale
func miqt_exec_callback_QwtPlotRenderer_renderScale(self *C.QwtPlotRenderer, cb C.intptr_t, param1 *C.QwtPlot, param2 *C.QPainter, axisId C.int, startDist C.int, endDist C.int, baseDist C.int, scaleRect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtPlot, param2 *qt.QPainter, axisId int, startDist int, endDist int, baseDist int, scaleRect *qt.QRectF), param1 *QwtPlot, param2 *qt.QPainter, axisId int, startDist int, endDist int, baseDist int, scaleRect *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtPlot(param1)

	slotval2 := qt.UnsafeNewQPainter(unsafe.Pointer(param2))

	slotval3 := (int)(axisId)

	slotval4 := (int)(startDist)

	slotval5 := (int)(endDist)

	slotval6 := (int)(baseDist)

	slotval7 := qt.UnsafeNewQRectF(unsafe.Pointer(scaleRect))

	gofunc((&QwtPlotRenderer{h: self}).callVirtualBase_RenderScale, slotval1, slotval2, slotval3, slotval4, slotval5, slotval6, slotval7)

}

func (this *QwtPlotRenderer) callVirtualBase_RenderLegend(param1 *QwtPlot, param2 *qt.QPainter, legendRect *qt.QRectF) {

	C.QwtPlotRenderer_virtualbase_renderLegend(unsafe.Pointer(this.h), param1.cPointer(), (*C.QPainter)(param2.UnsafePointer()), (*C.QRectF)(legendRect.UnsafePointer()))

}
func (this *QwtPlotRenderer) OnRenderLegend(slot func(super func(param1 *QwtPlot, param2 *qt.QPainter, legendRect *qt.QRectF), param1 *QwtPlot, param2 *qt.QPainter, legendRect *qt.QRectF)) {
	ok := C.QwtPlotRenderer_override_virtual_renderLegend(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRenderer_renderLegend
func miqt_exec_callback_QwtPlotRenderer_renderLegend(self *C.QwtPlotRenderer, cb C.intptr_t, param1 *C.QwtPlot, param2 *C.QPainter, legendRect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtPlot, param2 *qt.QPainter, legendRect *qt.QRectF), param1 *QwtPlot, param2 *qt.QPainter, legendRect *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtPlot(param1)

	slotval2 := qt.UnsafeNewQPainter(unsafe.Pointer(param2))

	slotval3 := qt.UnsafeNewQRectF(unsafe.Pointer(legendRect))

	gofunc((&QwtPlotRenderer{h: self}).callVirtualBase_RenderLegend, slotval1, slotval2, slotval3)

}

func (this *QwtPlotRenderer) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QwtPlotRenderer_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtPlotRenderer) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtPlotRenderer_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRenderer_event
func miqt_exec_callback_QwtPlotRenderer_event(self *C.QwtPlotRenderer, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtPlotRenderer{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotRenderer) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QwtPlotRenderer_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtPlotRenderer) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QwtPlotRenderer_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRenderer_eventFilter
func miqt_exec_callback_QwtPlotRenderer_eventFilter(self *C.QwtPlotRenderer, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtPlotRenderer{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotRenderer) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtPlotRenderer_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtPlotRenderer) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtPlotRenderer_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRenderer_timerEvent
func miqt_exec_callback_QwtPlotRenderer_timerEvent(self *C.QwtPlotRenderer, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotRenderer{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtPlotRenderer) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtPlotRenderer_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtPlotRenderer) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtPlotRenderer_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRenderer_childEvent
func miqt_exec_callback_QwtPlotRenderer_childEvent(self *C.QwtPlotRenderer, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotRenderer{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtPlotRenderer) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtPlotRenderer_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtPlotRenderer) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtPlotRenderer_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRenderer_customEvent
func miqt_exec_callback_QwtPlotRenderer_customEvent(self *C.QwtPlotRenderer, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotRenderer{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtPlotRenderer) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtPlotRenderer_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPlotRenderer) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPlotRenderer_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRenderer_connectNotify
func miqt_exec_callback_QwtPlotRenderer_connectNotify(self *C.QwtPlotRenderer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPlotRenderer{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtPlotRenderer) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtPlotRenderer_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPlotRenderer) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPlotRenderer_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRenderer_disconnectNotify
func miqt_exec_callback_QwtPlotRenderer_disconnectNotify(self *C.QwtPlotRenderer, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPlotRenderer{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtPlotRenderer) Delete() {
	C.QwtPlotRenderer_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPlotRenderer) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPlotRenderer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
