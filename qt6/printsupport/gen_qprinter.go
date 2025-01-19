package printsupport

/*

#include "gen_qprinter.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPrinter__PrinterMode int

const (
	QPrinter__ScreenResolution  QPrinter__PrinterMode = 0
	QPrinter__PrinterResolution QPrinter__PrinterMode = 1
	QPrinter__HighResolution    QPrinter__PrinterMode = 2
)

type QPrinter__PageOrder int

const (
	QPrinter__FirstPageFirst QPrinter__PageOrder = 0
	QPrinter__LastPageFirst  QPrinter__PageOrder = 1
)

type QPrinter__ColorMode int

const (
	QPrinter__GrayScale QPrinter__ColorMode = 0
	QPrinter__Color     QPrinter__ColorMode = 1
)

type QPrinter__PaperSource int

const (
	QPrinter__OnlyOne         QPrinter__PaperSource = 0
	QPrinter__Lower           QPrinter__PaperSource = 1
	QPrinter__Middle          QPrinter__PaperSource = 2
	QPrinter__Manual          QPrinter__PaperSource = 3
	QPrinter__Envelope        QPrinter__PaperSource = 4
	QPrinter__EnvelopeManual  QPrinter__PaperSource = 5
	QPrinter__Auto            QPrinter__PaperSource = 6
	QPrinter__Tractor         QPrinter__PaperSource = 7
	QPrinter__SmallFormat     QPrinter__PaperSource = 8
	QPrinter__LargeFormat     QPrinter__PaperSource = 9
	QPrinter__LargeCapacity   QPrinter__PaperSource = 10
	QPrinter__Cassette        QPrinter__PaperSource = 11
	QPrinter__FormSource      QPrinter__PaperSource = 12
	QPrinter__MaxPageSource   QPrinter__PaperSource = 13
	QPrinter__CustomSource    QPrinter__PaperSource = 14
	QPrinter__LastPaperSource QPrinter__PaperSource = 14
	QPrinter__Upper           QPrinter__PaperSource = 0
)

type QPrinter__PrinterState int

const (
	QPrinter__Idle    QPrinter__PrinterState = 0
	QPrinter__Active  QPrinter__PrinterState = 1
	QPrinter__Aborted QPrinter__PrinterState = 2
	QPrinter__Error   QPrinter__PrinterState = 3
)

type QPrinter__OutputFormat int

const (
	QPrinter__NativeFormat QPrinter__OutputFormat = 0
	QPrinter__PdfFormat    QPrinter__OutputFormat = 1
)

type QPrinter__PrintRange int

const (
	QPrinter__AllPages    QPrinter__PrintRange = 0
	QPrinter__Selection   QPrinter__PrintRange = 1
	QPrinter__PageRange   QPrinter__PrintRange = 2
	QPrinter__CurrentPage QPrinter__PrintRange = 3
)

type QPrinter__Unit int

const (
	QPrinter__Millimeter  QPrinter__Unit = 0
	QPrinter__Point       QPrinter__Unit = 1
	QPrinter__Inch        QPrinter__Unit = 2
	QPrinter__Pica        QPrinter__Unit = 3
	QPrinter__Didot       QPrinter__Unit = 4
	QPrinter__Cicero      QPrinter__Unit = 5
	QPrinter__DevicePixel QPrinter__Unit = 6
)

type QPrinter__DuplexMode int

const (
	QPrinter__DuplexNone      QPrinter__DuplexMode = 0
	QPrinter__DuplexAuto      QPrinter__DuplexMode = 1
	QPrinter__DuplexLongSide  QPrinter__DuplexMode = 2
	QPrinter__DuplexShortSide QPrinter__DuplexMode = 3
)

type QPrinter struct {
	h *C.QPrinter
	*qt6.QPagedPaintDevice
}

func (this *QPrinter) cPointer() *C.QPrinter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPrinter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPrinter constructs the type using only CGO pointers.
func newQPrinter(h *C.QPrinter) *QPrinter {
	if h == nil {
		return nil
	}
	var outptr_QPagedPaintDevice *C.QPagedPaintDevice = nil
	C.QPrinter_virtbase(h, &outptr_QPagedPaintDevice)

	return &QPrinter{h: h,
		QPagedPaintDevice: qt6.UnsafeNewQPagedPaintDevice(unsafe.Pointer(outptr_QPagedPaintDevice))}
}

// UnsafeNewQPrinter constructs the type using only unsafe pointers.
func UnsafeNewQPrinter(h unsafe.Pointer) *QPrinter {
	return newQPrinter((*C.QPrinter)(h))
}

// NewQPrinter constructs a new QPrinter object.
func NewQPrinter() *QPrinter {

	return newQPrinter(C.QPrinter_new())
}

// NewQPrinter2 constructs a new QPrinter object.
func NewQPrinter2(printer *QPrinterInfo) *QPrinter {

	return newQPrinter(C.QPrinter_new2(printer.cPointer()))
}

// NewQPrinter3 constructs a new QPrinter object.
func NewQPrinter3(mode QPrinter__PrinterMode) *QPrinter {

	return newQPrinter(C.QPrinter_new3((C.int)(mode)))
}

// NewQPrinter4 constructs a new QPrinter object.
func NewQPrinter4(printer *QPrinterInfo, mode QPrinter__PrinterMode) *QPrinter {

	return newQPrinter(C.QPrinter_new4(printer.cPointer(), (C.int)(mode)))
}

func (this *QPrinter) DevType() int {
	return (int)(C.QPrinter_DevType(this.h))
}

func (this *QPrinter) SetOutputFormat(format QPrinter__OutputFormat) {
	C.QPrinter_SetOutputFormat(this.h, (C.int)(format))
}

func (this *QPrinter) OutputFormat() QPrinter__OutputFormat {
	return (QPrinter__OutputFormat)(C.QPrinter_OutputFormat(this.h))
}

func (this *QPrinter) SetPdfVersion(version qt6.QPagedPaintDevice__PdfVersion) {
	C.QPrinter_SetPdfVersion(this.h, (C.int)(version))
}

func (this *QPrinter) PdfVersion() qt6.QPagedPaintDevice__PdfVersion {
	return (qt6.QPagedPaintDevice__PdfVersion)(C.QPrinter_PdfVersion(this.h))
}

func (this *QPrinter) SetPrinterName(printerName string) {
	printerName_ms := C.struct_miqt_string{}
	printerName_ms.data = C.CString(printerName)
	printerName_ms.len = C.size_t(len(printerName))
	defer C.free(unsafe.Pointer(printerName_ms.data))
	C.QPrinter_SetPrinterName(this.h, printerName_ms)
}

func (this *QPrinter) PrinterName() string {
	var _ms C.struct_miqt_string = C.QPrinter_PrinterName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrinter) IsValid() bool {
	return (bool)(C.QPrinter_IsValid(this.h))
}

func (this *QPrinter) SetOutputFileName(outputFileName string) {
	outputFileName_ms := C.struct_miqt_string{}
	outputFileName_ms.data = C.CString(outputFileName)
	outputFileName_ms.len = C.size_t(len(outputFileName))
	defer C.free(unsafe.Pointer(outputFileName_ms.data))
	C.QPrinter_SetOutputFileName(this.h, outputFileName_ms)
}

func (this *QPrinter) OutputFileName() string {
	var _ms C.struct_miqt_string = C.QPrinter_OutputFileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrinter) SetPrintProgram(printProgram string) {
	printProgram_ms := C.struct_miqt_string{}
	printProgram_ms.data = C.CString(printProgram)
	printProgram_ms.len = C.size_t(len(printProgram))
	defer C.free(unsafe.Pointer(printProgram_ms.data))
	C.QPrinter_SetPrintProgram(this.h, printProgram_ms)
}

func (this *QPrinter) PrintProgram() string {
	var _ms C.struct_miqt_string = C.QPrinter_PrintProgram(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrinter) SetDocName(docName string) {
	docName_ms := C.struct_miqt_string{}
	docName_ms.data = C.CString(docName)
	docName_ms.len = C.size_t(len(docName))
	defer C.free(unsafe.Pointer(docName_ms.data))
	C.QPrinter_SetDocName(this.h, docName_ms)
}

func (this *QPrinter) DocName() string {
	var _ms C.struct_miqt_string = C.QPrinter_DocName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrinter) SetCreator(creator string) {
	creator_ms := C.struct_miqt_string{}
	creator_ms.data = C.CString(creator)
	creator_ms.len = C.size_t(len(creator))
	defer C.free(unsafe.Pointer(creator_ms.data))
	C.QPrinter_SetCreator(this.h, creator_ms)
}

func (this *QPrinter) Creator() string {
	var _ms C.struct_miqt_string = C.QPrinter_Creator(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrinter) SetPageOrder(pageOrder QPrinter__PageOrder) {
	C.QPrinter_SetPageOrder(this.h, (C.int)(pageOrder))
}

func (this *QPrinter) PageOrder() QPrinter__PageOrder {
	return (QPrinter__PageOrder)(C.QPrinter_PageOrder(this.h))
}

func (this *QPrinter) SetResolution(resolution int) {
	C.QPrinter_SetResolution(this.h, (C.int)(resolution))
}

func (this *QPrinter) Resolution() int {
	return (int)(C.QPrinter_Resolution(this.h))
}

func (this *QPrinter) SetColorMode(colorMode QPrinter__ColorMode) {
	C.QPrinter_SetColorMode(this.h, (C.int)(colorMode))
}

func (this *QPrinter) ColorMode() QPrinter__ColorMode {
	return (QPrinter__ColorMode)(C.QPrinter_ColorMode(this.h))
}

func (this *QPrinter) SetCollateCopies(collate bool) {
	C.QPrinter_SetCollateCopies(this.h, (C.bool)(collate))
}

func (this *QPrinter) CollateCopies() bool {
	return (bool)(C.QPrinter_CollateCopies(this.h))
}

func (this *QPrinter) SetFullPage(fullPage bool) {
	C.QPrinter_SetFullPage(this.h, (C.bool)(fullPage))
}

func (this *QPrinter) FullPage() bool {
	return (bool)(C.QPrinter_FullPage(this.h))
}

func (this *QPrinter) SetCopyCount(copyCount int) {
	C.QPrinter_SetCopyCount(this.h, (C.int)(copyCount))
}

func (this *QPrinter) CopyCount() int {
	return (int)(C.QPrinter_CopyCount(this.h))
}

func (this *QPrinter) SupportsMultipleCopies() bool {
	return (bool)(C.QPrinter_SupportsMultipleCopies(this.h))
}

func (this *QPrinter) SetPaperSource(paperSource QPrinter__PaperSource) {
	C.QPrinter_SetPaperSource(this.h, (C.int)(paperSource))
}

func (this *QPrinter) PaperSource() QPrinter__PaperSource {
	return (QPrinter__PaperSource)(C.QPrinter_PaperSource(this.h))
}

func (this *QPrinter) SetDuplex(duplex QPrinter__DuplexMode) {
	C.QPrinter_SetDuplex(this.h, (C.int)(duplex))
}

func (this *QPrinter) Duplex() QPrinter__DuplexMode {
	return (QPrinter__DuplexMode)(C.QPrinter_Duplex(this.h))
}

func (this *QPrinter) SupportedResolutions() []int {
	var _ma C.struct_miqt_array = C.QPrinter_SupportedResolutions(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QPrinter) SetFontEmbeddingEnabled(enable bool) {
	C.QPrinter_SetFontEmbeddingEnabled(this.h, (C.bool)(enable))
}

func (this *QPrinter) FontEmbeddingEnabled() bool {
	return (bool)(C.QPrinter_FontEmbeddingEnabled(this.h))
}

func (this *QPrinter) PaperRect(param1 QPrinter__Unit) *qt6.QRectF {
	_goptr := qt6.UnsafeNewQRectF(unsafe.Pointer(C.QPrinter_PaperRect(this.h, (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPrinter) PageRect(param1 QPrinter__Unit) *qt6.QRectF {
	_goptr := qt6.UnsafeNewQRectF(unsafe.Pointer(C.QPrinter_PageRect(this.h, (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPrinter) PrinterSelectionOption() string {
	var _ms C.struct_miqt_string = C.QPrinter_PrinterSelectionOption(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrinter) SetPrinterSelectionOption(printerSelectionOption string) {
	printerSelectionOption_ms := C.struct_miqt_string{}
	printerSelectionOption_ms.data = C.CString(printerSelectionOption)
	printerSelectionOption_ms.len = C.size_t(len(printerSelectionOption))
	defer C.free(unsafe.Pointer(printerSelectionOption_ms.data))
	C.QPrinter_SetPrinterSelectionOption(this.h, printerSelectionOption_ms)
}

func (this *QPrinter) NewPage() bool {
	return (bool)(C.QPrinter_NewPage(this.h))
}

func (this *QPrinter) Abort() bool {
	return (bool)(C.QPrinter_Abort(this.h))
}

func (this *QPrinter) PrinterState() QPrinter__PrinterState {
	return (QPrinter__PrinterState)(C.QPrinter_PrinterState(this.h))
}

func (this *QPrinter) PaintEngine() *qt6.QPaintEngine {
	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QPrinter_PaintEngine(this.h)))
}

func (this *QPrinter) PrintEngine() *QPrintEngine {
	return newQPrintEngine(C.QPrinter_PrintEngine(this.h))
}

func (this *QPrinter) SetFromTo(fromPage int, toPage int) {
	C.QPrinter_SetFromTo(this.h, (C.int)(fromPage), (C.int)(toPage))
}

func (this *QPrinter) FromPage() int {
	return (int)(C.QPrinter_FromPage(this.h))
}

func (this *QPrinter) ToPage() int {
	return (int)(C.QPrinter_ToPage(this.h))
}

func (this *QPrinter) SetPrintRange(rangeVal QPrinter__PrintRange) {
	C.QPrinter_SetPrintRange(this.h, (C.int)(rangeVal))
}

func (this *QPrinter) PrintRange() QPrinter__PrintRange {
	return (QPrinter__PrintRange)(C.QPrinter_PrintRange(this.h))
}

func (this *QPrinter) callVirtualBase_DevType() int {

	return (int)(C.QPrinter_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QPrinter) OnDevType(slot func(super func() int) int) {
	ok := C.QPrinter_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_DevType
func miqt_exec_callback_QPrinter_DevType(self *C.QPrinter, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrinter{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QPrinter) callVirtualBase_NewPage() bool {

	return (bool)(C.QPrinter_virtualbase_NewPage(unsafe.Pointer(this.h)))

}
func (this *QPrinter) OnNewPage(slot func(super func() bool) bool) {
	ok := C.QPrinter_override_virtual_NewPage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_NewPage
func miqt_exec_callback_QPrinter_NewPage(self *C.QPrinter, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrinter{h: self}).callVirtualBase_NewPage)

	return (C.bool)(virtualReturn)

}

func (this *QPrinter) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QPrinter_virtualbase_PaintEngine(unsafe.Pointer(this.h))))

}
func (this *QPrinter) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.QPrinter_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_PaintEngine
func miqt_exec_callback_QPrinter_PaintEngine(self *C.QPrinter, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrinter{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QPrinter) callVirtualBase_Metric(param1 qt6.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QPrinter_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPrinter) OnMetric(slot func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QPrinter_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_Metric
func miqt_exec_callback_QPrinter_Metric(self *C.QPrinter, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QPrinter{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QPrinter) callVirtualBase_SetPageLayout(pageLayout *qt6.QPageLayout) bool {

	return (bool)(C.QPrinter_virtualbase_SetPageLayout(unsafe.Pointer(this.h), (*C.QPageLayout)(pageLayout.UnsafePointer())))

}
func (this *QPrinter) OnSetPageLayout(slot func(super func(pageLayout *qt6.QPageLayout) bool, pageLayout *qt6.QPageLayout) bool) {
	ok := C.QPrinter_override_virtual_SetPageLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_SetPageLayout
func miqt_exec_callback_QPrinter_SetPageLayout(self *C.QPrinter, cb C.intptr_t, pageLayout *C.QPageLayout) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pageLayout *qt6.QPageLayout) bool, pageLayout *qt6.QPageLayout) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPageLayout(unsafe.Pointer(pageLayout))

	virtualReturn := gofunc((&QPrinter{h: self}).callVirtualBase_SetPageLayout, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPrinter) callVirtualBase_SetPageSize(pageSize *qt6.QPageSize) bool {

	return (bool)(C.QPrinter_virtualbase_SetPageSize(unsafe.Pointer(this.h), (*C.QPageSize)(pageSize.UnsafePointer())))

}
func (this *QPrinter) OnSetPageSize(slot func(super func(pageSize *qt6.QPageSize) bool, pageSize *qt6.QPageSize) bool) {
	ok := C.QPrinter_override_virtual_SetPageSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_SetPageSize
func miqt_exec_callback_QPrinter_SetPageSize(self *C.QPrinter, cb C.intptr_t, pageSize *C.QPageSize) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pageSize *qt6.QPageSize) bool, pageSize *qt6.QPageSize) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPageSize(unsafe.Pointer(pageSize))

	virtualReturn := gofunc((&QPrinter{h: self}).callVirtualBase_SetPageSize, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPrinter) callVirtualBase_SetPageOrientation(orientation qt6.QPageLayout__Orientation) bool {

	return (bool)(C.QPrinter_virtualbase_SetPageOrientation(unsafe.Pointer(this.h), (C.int)(orientation)))

}
func (this *QPrinter) OnSetPageOrientation(slot func(super func(orientation qt6.QPageLayout__Orientation) bool, orientation qt6.QPageLayout__Orientation) bool) {
	ok := C.QPrinter_override_virtual_SetPageOrientation(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_SetPageOrientation
func miqt_exec_callback_QPrinter_SetPageOrientation(self *C.QPrinter, cb C.intptr_t, orientation C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(orientation qt6.QPageLayout__Orientation) bool, orientation qt6.QPageLayout__Orientation) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QPageLayout__Orientation)(orientation)

	virtualReturn := gofunc((&QPrinter{h: self}).callVirtualBase_SetPageOrientation, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPrinter) callVirtualBase_SetPageMargins(margins *qt6.QMarginsF, units qt6.QPageLayout__Unit) bool {

	return (bool)(C.QPrinter_virtualbase_SetPageMargins(unsafe.Pointer(this.h), (*C.QMarginsF)(margins.UnsafePointer()), (C.int)(units)))

}
func (this *QPrinter) OnSetPageMargins(slot func(super func(margins *qt6.QMarginsF, units qt6.QPageLayout__Unit) bool, margins *qt6.QMarginsF, units qt6.QPageLayout__Unit) bool) {
	ok := C.QPrinter_override_virtual_SetPageMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_SetPageMargins
func miqt_exec_callback_QPrinter_SetPageMargins(self *C.QPrinter, cb C.intptr_t, margins *C.QMarginsF, units C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(margins *qt6.QMarginsF, units qt6.QPageLayout__Unit) bool, margins *qt6.QMarginsF, units qt6.QPageLayout__Unit) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMarginsF(unsafe.Pointer(margins))

	slotval2 := (qt6.QPageLayout__Unit)(units)

	virtualReturn := gofunc((&QPrinter{h: self}).callVirtualBase_SetPageMargins, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPrinter) callVirtualBase_SetPageRanges(ranges *qt6.QPageRanges) {

	C.QPrinter_virtualbase_SetPageRanges(unsafe.Pointer(this.h), (*C.QPageRanges)(ranges.UnsafePointer()))

}
func (this *QPrinter) OnSetPageRanges(slot func(super func(ranges *qt6.QPageRanges), ranges *qt6.QPageRanges)) {
	ok := C.QPrinter_override_virtual_SetPageRanges(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_SetPageRanges
func miqt_exec_callback_QPrinter_SetPageRanges(self *C.QPrinter, cb C.intptr_t, ranges *C.QPageRanges) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ranges *qt6.QPageRanges), ranges *qt6.QPageRanges))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPageRanges(unsafe.Pointer(ranges))

	gofunc((&QPrinter{h: self}).callVirtualBase_SetPageRanges, slotval1)

}

func (this *QPrinter) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.QPrinter_virtualbase_InitPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QPrinter) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.QPrinter_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_InitPainter
func miqt_exec_callback_QPrinter_InitPainter(self *C.QPrinter, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QPrinter{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QPrinter) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QPrinter_virtualbase_Redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QPrinter) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.QPrinter_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_Redirected
func miqt_exec_callback_QPrinter_Redirected(self *C.QPrinter, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QPrinter{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QPrinter) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QPrinter_virtualbase_SharedPainter(unsafe.Pointer(this.h))))

}
func (this *QPrinter) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.QPrinter_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_SharedPainter
func miqt_exec_callback_QPrinter_SharedPainter(self *C.QPrinter, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrinter{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QPrinter) Delete() {
	C.QPrinter_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPrinter) GoGC() {
	runtime.SetFinalizer(this, func(this *QPrinter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
