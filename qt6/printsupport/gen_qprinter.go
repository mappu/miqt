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
	return (int)(C.QPrinter_devType(this.h))
}

func (this *QPrinter) SetOutputFormat(format QPrinter__OutputFormat) {
	C.QPrinter_setOutputFormat(this.h, (C.int)(format))
}

func (this *QPrinter) OutputFormat() QPrinter__OutputFormat {
	return (QPrinter__OutputFormat)(C.QPrinter_outputFormat(this.h))
}

func (this *QPrinter) SetPdfVersion(version qt6.QPagedPaintDevice__PdfVersion) {
	C.QPrinter_setPdfVersion(this.h, (C.int)(version))
}

func (this *QPrinter) PdfVersion() qt6.QPagedPaintDevice__PdfVersion {
	return (qt6.QPagedPaintDevice__PdfVersion)(C.QPrinter_pdfVersion(this.h))
}

func (this *QPrinter) SetPrinterName(printerName string) {
	printerName_ms := C.struct_miqt_string{}
	printerName_ms.data = C.CString(printerName)
	printerName_ms.len = C.size_t(len(printerName))
	defer C.free(unsafe.Pointer(printerName_ms.data))
	C.QPrinter_setPrinterName(this.h, printerName_ms)
}

func (this *QPrinter) PrinterName() string {
	var _ms C.struct_miqt_string = C.QPrinter_printerName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrinter) IsValid() bool {
	return (bool)(C.QPrinter_isValid(this.h))
}

func (this *QPrinter) SetOutputFileName(outputFileName string) {
	outputFileName_ms := C.struct_miqt_string{}
	outputFileName_ms.data = C.CString(outputFileName)
	outputFileName_ms.len = C.size_t(len(outputFileName))
	defer C.free(unsafe.Pointer(outputFileName_ms.data))
	C.QPrinter_setOutputFileName(this.h, outputFileName_ms)
}

func (this *QPrinter) OutputFileName() string {
	var _ms C.struct_miqt_string = C.QPrinter_outputFileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrinter) SetPrintProgram(printProgram string) {
	printProgram_ms := C.struct_miqt_string{}
	printProgram_ms.data = C.CString(printProgram)
	printProgram_ms.len = C.size_t(len(printProgram))
	defer C.free(unsafe.Pointer(printProgram_ms.data))
	C.QPrinter_setPrintProgram(this.h, printProgram_ms)
}

func (this *QPrinter) PrintProgram() string {
	var _ms C.struct_miqt_string = C.QPrinter_printProgram(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrinter) SetDocName(docName string) {
	docName_ms := C.struct_miqt_string{}
	docName_ms.data = C.CString(docName)
	docName_ms.len = C.size_t(len(docName))
	defer C.free(unsafe.Pointer(docName_ms.data))
	C.QPrinter_setDocName(this.h, docName_ms)
}

func (this *QPrinter) DocName() string {
	var _ms C.struct_miqt_string = C.QPrinter_docName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrinter) SetCreator(creator string) {
	creator_ms := C.struct_miqt_string{}
	creator_ms.data = C.CString(creator)
	creator_ms.len = C.size_t(len(creator))
	defer C.free(unsafe.Pointer(creator_ms.data))
	C.QPrinter_setCreator(this.h, creator_ms)
}

func (this *QPrinter) Creator() string {
	var _ms C.struct_miqt_string = C.QPrinter_creator(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrinter) SetPageOrder(pageOrder QPrinter__PageOrder) {
	C.QPrinter_setPageOrder(this.h, (C.int)(pageOrder))
}

func (this *QPrinter) PageOrder() QPrinter__PageOrder {
	return (QPrinter__PageOrder)(C.QPrinter_pageOrder(this.h))
}

func (this *QPrinter) SetResolution(resolution int) {
	C.QPrinter_setResolution(this.h, (C.int)(resolution))
}

func (this *QPrinter) Resolution() int {
	return (int)(C.QPrinter_resolution(this.h))
}

func (this *QPrinter) SetColorMode(colorMode QPrinter__ColorMode) {
	C.QPrinter_setColorMode(this.h, (C.int)(colorMode))
}

func (this *QPrinter) ColorMode() QPrinter__ColorMode {
	return (QPrinter__ColorMode)(C.QPrinter_colorMode(this.h))
}

func (this *QPrinter) SetCollateCopies(collate bool) {
	C.QPrinter_setCollateCopies(this.h, (C.bool)(collate))
}

func (this *QPrinter) CollateCopies() bool {
	return (bool)(C.QPrinter_collateCopies(this.h))
}

func (this *QPrinter) SetFullPage(fullPage bool) {
	C.QPrinter_setFullPage(this.h, (C.bool)(fullPage))
}

func (this *QPrinter) FullPage() bool {
	return (bool)(C.QPrinter_fullPage(this.h))
}

func (this *QPrinter) SetCopyCount(copyCount int) {
	C.QPrinter_setCopyCount(this.h, (C.int)(copyCount))
}

func (this *QPrinter) CopyCount() int {
	return (int)(C.QPrinter_copyCount(this.h))
}

func (this *QPrinter) SupportsMultipleCopies() bool {
	return (bool)(C.QPrinter_supportsMultipleCopies(this.h))
}

func (this *QPrinter) SetPaperSource(paperSource QPrinter__PaperSource) {
	C.QPrinter_setPaperSource(this.h, (C.int)(paperSource))
}

func (this *QPrinter) PaperSource() QPrinter__PaperSource {
	return (QPrinter__PaperSource)(C.QPrinter_paperSource(this.h))
}

func (this *QPrinter) SetDuplex(duplex QPrinter__DuplexMode) {
	C.QPrinter_setDuplex(this.h, (C.int)(duplex))
}

func (this *QPrinter) Duplex() QPrinter__DuplexMode {
	return (QPrinter__DuplexMode)(C.QPrinter_duplex(this.h))
}

func (this *QPrinter) SupportedResolutions() []int {
	var _ma C.struct_miqt_array = C.QPrinter_supportedResolutions(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QPrinter) SetFontEmbeddingEnabled(enable bool) {
	C.QPrinter_setFontEmbeddingEnabled(this.h, (C.bool)(enable))
}

func (this *QPrinter) FontEmbeddingEnabled() bool {
	return (bool)(C.QPrinter_fontEmbeddingEnabled(this.h))
}

func (this *QPrinter) PaperRect(param1 QPrinter__Unit) *qt6.QRectF {
	_goptr := qt6.UnsafeNewQRectF(unsafe.Pointer(C.QPrinter_paperRect(this.h, (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPrinter) PageRect(param1 QPrinter__Unit) *qt6.QRectF {
	_goptr := qt6.UnsafeNewQRectF(unsafe.Pointer(C.QPrinter_pageRect(this.h, (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPrinter) PrinterSelectionOption() string {
	var _ms C.struct_miqt_string = C.QPrinter_printerSelectionOption(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrinter) SetPrinterSelectionOption(printerSelectionOption string) {
	printerSelectionOption_ms := C.struct_miqt_string{}
	printerSelectionOption_ms.data = C.CString(printerSelectionOption)
	printerSelectionOption_ms.len = C.size_t(len(printerSelectionOption))
	defer C.free(unsafe.Pointer(printerSelectionOption_ms.data))
	C.QPrinter_setPrinterSelectionOption(this.h, printerSelectionOption_ms)
}

func (this *QPrinter) NewPage() bool {
	return (bool)(C.QPrinter_newPage(this.h))
}

func (this *QPrinter) Abort() bool {
	return (bool)(C.QPrinter_abort(this.h))
}

func (this *QPrinter) PrinterState() QPrinter__PrinterState {
	return (QPrinter__PrinterState)(C.QPrinter_printerState(this.h))
}

func (this *QPrinter) PaintEngine() *qt6.QPaintEngine {
	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QPrinter_paintEngine(this.h)))
}

func (this *QPrinter) PrintEngine() *QPrintEngine {
	return newQPrintEngine(C.QPrinter_printEngine(this.h))
}

func (this *QPrinter) SetFromTo(fromPage int, toPage int) {
	C.QPrinter_setFromTo(this.h, (C.int)(fromPage), (C.int)(toPage))
}

func (this *QPrinter) FromPage() int {
	return (int)(C.QPrinter_fromPage(this.h))
}

func (this *QPrinter) ToPage() int {
	return (int)(C.QPrinter_toPage(this.h))
}

func (this *QPrinter) SetPrintRange(rangeVal QPrinter__PrintRange) {
	C.QPrinter_setPrintRange(this.h, (C.int)(rangeVal))
}

func (this *QPrinter) PrintRange() QPrinter__PrintRange {
	return (QPrinter__PrintRange)(C.QPrinter_printRange(this.h))
}

func (this *QPrinter) callVirtualBase_DevType() int {

	return (int)(C.QPrinter_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QPrinter) OndevType(slot func(super func() int) int) {
	ok := C.QPrinter_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_devType
func miqt_exec_callback_QPrinter_devType(self *C.QPrinter, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrinter{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QPrinter) callVirtualBase_NewPage() bool {

	return (bool)(C.QPrinter_virtualbase_newPage(unsafe.Pointer(this.h)))

}
func (this *QPrinter) OnnewPage(slot func(super func() bool) bool) {
	ok := C.QPrinter_override_virtual_newPage(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_newPage
func miqt_exec_callback_QPrinter_newPage(self *C.QPrinter, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrinter{h: self}).callVirtualBase_NewPage)

	return (C.bool)(virtualReturn)

}

func (this *QPrinter) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QPrinter_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QPrinter) OnpaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.QPrinter_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_paintEngine
func miqt_exec_callback_QPrinter_paintEngine(self *C.QPrinter, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrinter{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QPrinter) callVirtualBase_Metric(param1 qt6.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QPrinter_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPrinter) Onmetric(slot func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QPrinter_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_metric
func miqt_exec_callback_QPrinter_metric(self *C.QPrinter, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QPrinter_virtualbase_setPageLayout(unsafe.Pointer(this.h), (*C.QPageLayout)(pageLayout.UnsafePointer())))

}
func (this *QPrinter) OnsetPageLayout(slot func(super func(pageLayout *qt6.QPageLayout) bool, pageLayout *qt6.QPageLayout) bool) {
	ok := C.QPrinter_override_virtual_setPageLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_setPageLayout
func miqt_exec_callback_QPrinter_setPageLayout(self *C.QPrinter, cb C.intptr_t, pageLayout *C.QPageLayout) C.bool {
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

	return (bool)(C.QPrinter_virtualbase_setPageSize(unsafe.Pointer(this.h), (*C.QPageSize)(pageSize.UnsafePointer())))

}
func (this *QPrinter) OnsetPageSize(slot func(super func(pageSize *qt6.QPageSize) bool, pageSize *qt6.QPageSize) bool) {
	ok := C.QPrinter_override_virtual_setPageSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_setPageSize
func miqt_exec_callback_QPrinter_setPageSize(self *C.QPrinter, cb C.intptr_t, pageSize *C.QPageSize) C.bool {
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

	return (bool)(C.QPrinter_virtualbase_setPageOrientation(unsafe.Pointer(this.h), (C.int)(orientation)))

}
func (this *QPrinter) OnsetPageOrientation(slot func(super func(orientation qt6.QPageLayout__Orientation) bool, orientation qt6.QPageLayout__Orientation) bool) {
	ok := C.QPrinter_override_virtual_setPageOrientation(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_setPageOrientation
func miqt_exec_callback_QPrinter_setPageOrientation(self *C.QPrinter, cb C.intptr_t, orientation C.int) C.bool {
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

	return (bool)(C.QPrinter_virtualbase_setPageMargins(unsafe.Pointer(this.h), (*C.QMarginsF)(margins.UnsafePointer()), (C.int)(units)))

}
func (this *QPrinter) OnsetPageMargins(slot func(super func(margins *qt6.QMarginsF, units qt6.QPageLayout__Unit) bool, margins *qt6.QMarginsF, units qt6.QPageLayout__Unit) bool) {
	ok := C.QPrinter_override_virtual_setPageMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_setPageMargins
func miqt_exec_callback_QPrinter_setPageMargins(self *C.QPrinter, cb C.intptr_t, margins *C.QMarginsF, units C.int) C.bool {
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

	C.QPrinter_virtualbase_setPageRanges(unsafe.Pointer(this.h), (*C.QPageRanges)(ranges.UnsafePointer()))

}
func (this *QPrinter) OnsetPageRanges(slot func(super func(ranges *qt6.QPageRanges), ranges *qt6.QPageRanges)) {
	ok := C.QPrinter_override_virtual_setPageRanges(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_setPageRanges
func miqt_exec_callback_QPrinter_setPageRanges(self *C.QPrinter, cb C.intptr_t, ranges *C.QPageRanges) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ranges *qt6.QPageRanges), ranges *qt6.QPageRanges))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPageRanges(unsafe.Pointer(ranges))

	gofunc((&QPrinter{h: self}).callVirtualBase_SetPageRanges, slotval1)

}

func (this *QPrinter) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.QPrinter_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QPrinter) OninitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.QPrinter_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_initPainter
func miqt_exec_callback_QPrinter_initPainter(self *C.QPrinter, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QPrinter{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QPrinter) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QPrinter_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QPrinter) Onredirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.QPrinter_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_redirected
func miqt_exec_callback_QPrinter_redirected(self *C.QPrinter, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QPrinter_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QPrinter) OnsharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.QPrinter_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_sharedPainter
func miqt_exec_callback_QPrinter_sharedPainter(self *C.QPrinter, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPrinter{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QPrinter) Delete() {
	C.QPrinter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPrinter) GoGC() {
	runtime.SetFinalizer(this, func(this *QPrinter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
