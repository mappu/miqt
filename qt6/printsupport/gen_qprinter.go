package printsupport

/*

#include "gen_qprinter.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
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
	h  *C.QPrinter
	gc *[1]unsafe.Pointer
	*qt6.QPagedPaintDevice
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPrinter) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(printer)

	return newQPrinter(C.QPrinter_new2(printer.cPointer()))
}

// NewQPrinter3 constructs a new QPrinter object.
func NewQPrinter3(mode QPrinter__PrinterMode) *QPrinter {

	return newQPrinter(C.QPrinter_new3((C.int)(mode)))
}

// NewQPrinter4 constructs a new QPrinter object.
func NewQPrinter4(printer *QPrinterInfo, mode QPrinter__PrinterMode) *QPrinter {
	defer runtime.KeepAlive(printer)

	return newQPrinter(C.QPrinter_new4(printer.cPointer(), (C.int)(mode)))
}

func (this *QPrinter) DevType() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPrinter_devType(this.h))
}

func (this *QPrinter) SetOutputFormat(format QPrinter__OutputFormat) {
	defer runtime.KeepAlive(this)
	C.QPrinter_setOutputFormat(this.h, (C.int)(format))
}

func (this *QPrinter) OutputFormat() QPrinter__OutputFormat {
	defer runtime.KeepAlive(this)
	return (QPrinter__OutputFormat)(C.QPrinter_outputFormat(this.h))
}

func (this *QPrinter) SetPdfVersion(version qt6.QPagedPaintDevice__PdfVersion) {
	defer runtime.KeepAlive(this)
	C.QPrinter_setPdfVersion(this.h, (C.int)(version))
}

func (this *QPrinter) PdfVersion() qt6.QPagedPaintDevice__PdfVersion {
	defer runtime.KeepAlive(this)
	return (qt6.QPagedPaintDevice__PdfVersion)(C.QPrinter_pdfVersion(this.h))
}

func (this *QPrinter) SetPrinterName(printerName string) {
	defer runtime.KeepAlive(this)
	printerName_ms := C.struct_miqt_string{}
	printerName_ms.data = C.CString(printerName)
	printerName_ms.len = C.size_t(len(printerName))
	defer C.free(unsafe.Pointer(printerName_ms.data))
	C.QPrinter_setPrinterName(this.h, printerName_ms)
}

func (this *QPrinter) PrinterName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QPrinter_printerName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrinter) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPrinter_isValid(this.h))
}

func (this *QPrinter) SetOutputFileName(outputFileName string) {
	defer runtime.KeepAlive(this)
	outputFileName_ms := C.struct_miqt_string{}
	outputFileName_ms.data = C.CString(outputFileName)
	outputFileName_ms.len = C.size_t(len(outputFileName))
	defer C.free(unsafe.Pointer(outputFileName_ms.data))
	C.QPrinter_setOutputFileName(this.h, outputFileName_ms)
}

func (this *QPrinter) OutputFileName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QPrinter_outputFileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrinter) SetPrintProgram(printProgram string) {
	defer runtime.KeepAlive(this)
	printProgram_ms := C.struct_miqt_string{}
	printProgram_ms.data = C.CString(printProgram)
	printProgram_ms.len = C.size_t(len(printProgram))
	defer C.free(unsafe.Pointer(printProgram_ms.data))
	C.QPrinter_setPrintProgram(this.h, printProgram_ms)
}

func (this *QPrinter) PrintProgram() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QPrinter_printProgram(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrinter) SetDocName(docName string) {
	defer runtime.KeepAlive(this)
	docName_ms := C.struct_miqt_string{}
	docName_ms.data = C.CString(docName)
	docName_ms.len = C.size_t(len(docName))
	defer C.free(unsafe.Pointer(docName_ms.data))
	C.QPrinter_setDocName(this.h, docName_ms)
}

func (this *QPrinter) DocName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QPrinter_docName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrinter) SetCreator(creator string) {
	defer runtime.KeepAlive(this)
	creator_ms := C.struct_miqt_string{}
	creator_ms.data = C.CString(creator)
	creator_ms.len = C.size_t(len(creator))
	defer C.free(unsafe.Pointer(creator_ms.data))
	C.QPrinter_setCreator(this.h, creator_ms)
}

func (this *QPrinter) Creator() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QPrinter_creator(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrinter) SetPageOrder(pageOrder QPrinter__PageOrder) {
	defer runtime.KeepAlive(this)
	C.QPrinter_setPageOrder(this.h, (C.int)(pageOrder))
}

func (this *QPrinter) PageOrder() QPrinter__PageOrder {
	defer runtime.KeepAlive(this)
	return (QPrinter__PageOrder)(C.QPrinter_pageOrder(this.h))
}

func (this *QPrinter) SetResolution(resolution int) {
	defer runtime.KeepAlive(this)
	C.QPrinter_setResolution(this.h, (C.int)(resolution))
}

func (this *QPrinter) Resolution() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPrinter_resolution(this.h))
}

func (this *QPrinter) SetColorMode(colorMode QPrinter__ColorMode) {
	defer runtime.KeepAlive(this)
	C.QPrinter_setColorMode(this.h, (C.int)(colorMode))
}

func (this *QPrinter) ColorMode() QPrinter__ColorMode {
	defer runtime.KeepAlive(this)
	return (QPrinter__ColorMode)(C.QPrinter_colorMode(this.h))
}

func (this *QPrinter) SetCollateCopies(collate bool) {
	defer runtime.KeepAlive(this)
	C.QPrinter_setCollateCopies(this.h, (C.bool)(collate))
}

func (this *QPrinter) CollateCopies() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPrinter_collateCopies(this.h))
}

func (this *QPrinter) SetFullPage(fullPage bool) {
	defer runtime.KeepAlive(this)
	C.QPrinter_setFullPage(this.h, (C.bool)(fullPage))
}

func (this *QPrinter) FullPage() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPrinter_fullPage(this.h))
}

func (this *QPrinter) SetCopyCount(copyCount int) {
	defer runtime.KeepAlive(this)
	C.QPrinter_setCopyCount(this.h, (C.int)(copyCount))
}

func (this *QPrinter) CopyCount() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPrinter_copyCount(this.h))
}

func (this *QPrinter) SupportsMultipleCopies() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPrinter_supportsMultipleCopies(this.h))
}

func (this *QPrinter) SetPaperSource(paperSource QPrinter__PaperSource) {
	defer runtime.KeepAlive(this)
	C.QPrinter_setPaperSource(this.h, (C.int)(paperSource))
}

func (this *QPrinter) PaperSource() QPrinter__PaperSource {
	defer runtime.KeepAlive(this)
	return (QPrinter__PaperSource)(C.QPrinter_paperSource(this.h))
}

func (this *QPrinter) SetDuplex(duplex QPrinter__DuplexMode) {
	defer runtime.KeepAlive(this)
	C.QPrinter_setDuplex(this.h, (C.int)(duplex))
}

func (this *QPrinter) Duplex() QPrinter__DuplexMode {
	defer runtime.KeepAlive(this)
	return (QPrinter__DuplexMode)(C.QPrinter_duplex(this.h))
}

func (this *QPrinter) SupportedResolutions() []int {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QPrinter_supportedResolutions(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := unsafe.Slice((*C.int)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QPrinter) SetFontEmbeddingEnabled(enable bool) {
	defer runtime.KeepAlive(this)
	C.QPrinter_setFontEmbeddingEnabled(this.h, (C.bool)(enable))
}

func (this *QPrinter) FontEmbeddingEnabled() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPrinter_fontEmbeddingEnabled(this.h))
}

func (this *QPrinter) PaperRect(param1 QPrinter__Unit) qt6.QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt6.QRectF](C.QPrinter_paperRect(this.h, (C.int)(param1)))
}

func (this *QPrinter) PageRect(param1 QPrinter__Unit) qt6.QRectF {
	defer runtime.KeepAlive(this)
	return libmiqt.ValueCast[qt6.QRectF](C.QPrinter_pageRect(this.h, (C.int)(param1)))
}

func (this *QPrinter) PrinterSelectionOption() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QPrinter_printerSelectionOption(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPrinter) SetPrinterSelectionOption(printerSelectionOption string) {
	defer runtime.KeepAlive(this)
	printerSelectionOption_ms := C.struct_miqt_string{}
	printerSelectionOption_ms.data = C.CString(printerSelectionOption)
	printerSelectionOption_ms.len = C.size_t(len(printerSelectionOption))
	defer C.free(unsafe.Pointer(printerSelectionOption_ms.data))
	C.QPrinter_setPrinterSelectionOption(this.h, printerSelectionOption_ms)
}

func (this *QPrinter) NewPage() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPrinter_newPage(this.h))
}

func (this *QPrinter) Abort() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPrinter_abort(this.h))
}

func (this *QPrinter) PrinterState() QPrinter__PrinterState {
	defer runtime.KeepAlive(this)
	return (QPrinter__PrinterState)(C.QPrinter_printerState(this.h))
}

func (this *QPrinter) PaintEngine() *qt6.QPaintEngine {
	defer runtime.KeepAlive(this)
	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QPrinter_paintEngine(this.h)))
}

func (this *QPrinter) PrintEngine() *QPrintEngine {
	defer runtime.KeepAlive(this)
	return newQPrintEngine(C.QPrinter_printEngine(this.h))
}

func (this *QPrinter) SetFromTo(fromPage int, toPage int) {
	defer runtime.KeepAlive(this)
	C.QPrinter_setFromTo(this.h, (C.int)(fromPage), (C.int)(toPage))
}

func (this *QPrinter) FromPage() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPrinter_fromPage(this.h))
}

func (this *QPrinter) ToPage() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QPrinter_toPage(this.h))
}

func (this *QPrinter) SetPrintRange(rangeVal QPrinter__PrintRange) {
	defer runtime.KeepAlive(this)
	C.QPrinter_setPrintRange(this.h, (C.int)(rangeVal))
}

func (this *QPrinter) PrintRange() QPrinter__PrintRange {
	defer runtime.KeepAlive(this)
	return (QPrinter__PrintRange)(C.QPrinter_printRange(this.h))
}

// SetEngines can only be called from a QPrinter that was directly constructed.
func (this *QPrinter) SetEngines(printEngine *QPrintEngine, paintEngine *qt6.QPaintEngine) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(printEngine)
	defer runtime.KeepAlive(paintEngine)

	var _dynamic_cast_ok C.bool = false
	C.QPrinter_protectedbase_setEngines(&_dynamic_cast_ok, unsafe.Pointer(this.h), printEngine.cPointer(), (*C.QPaintEngine)(paintEngine.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QPrinter) callVirtualBase_DevType() int {
	defer runtime.KeepAlive(this)

	return (int)(C.QPrinter_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QPrinter) OnDevType(slot func(super func() int) int) {
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
	defer runtime.KeepAlive(this)

	return (bool)(C.QPrinter_virtualbase_newPage(unsafe.Pointer(this.h)))

}
func (this *QPrinter) OnNewPage(slot func(super func() bool) bool) {
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
	defer runtime.KeepAlive(this)

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QPrinter_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QPrinter) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
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
	defer runtime.KeepAlive(virtualReturn)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QPrinter) callVirtualBase_Metric(param1 qt6.QPaintDevice__PaintDeviceMetric) int {
	defer runtime.KeepAlive(this)

	return (int)(C.QPrinter_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QPrinter) OnMetric(slot func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int) {
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
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pageLayout)

	return (bool)(C.QPrinter_virtualbase_setPageLayout(unsafe.Pointer(this.h), (*C.QPageLayout)(pageLayout.UnsafePointer())))

}
func (this *QPrinter) OnSetPageLayout(slot func(super func(pageLayout *qt6.QPageLayout) bool, pageLayout *qt6.QPageLayout) bool) {
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
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pageSize)

	return (bool)(C.QPrinter_virtualbase_setPageSize(unsafe.Pointer(this.h), (*C.QPageSize)(pageSize.UnsafePointer())))

}
func (this *QPrinter) OnSetPageSize(slot func(super func(pageSize *qt6.QPageSize) bool, pageSize *qt6.QPageSize) bool) {
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
	defer runtime.KeepAlive(this)

	return (bool)(C.QPrinter_virtualbase_setPageOrientation(unsafe.Pointer(this.h), (C.int)(orientation)))

}
func (this *QPrinter) OnSetPageOrientation(slot func(super func(orientation qt6.QPageLayout__Orientation) bool, orientation qt6.QPageLayout__Orientation) bool) {
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

func (this *QPrinter) callVirtualBase_SetPageMargins(margins qt6.QMarginsF, units qt6.QPageLayout__Unit) bool {
	defer runtime.KeepAlive(this)

	return (bool)(C.QPrinter_virtualbase_setPageMargins(unsafe.Pointer(this.h), libmiqt.ValueCast[C.struct_miqt_qmarginsf](margins), (C.int)(units)))

}
func (this *QPrinter) OnSetPageMargins(slot func(super func(margins qt6.QMarginsF, units qt6.QPageLayout__Unit) bool, margins qt6.QMarginsF, units qt6.QPageLayout__Unit) bool) {
	ok := C.QPrinter_override_virtual_setPageMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QPrinter_setPageMargins
func miqt_exec_callback_QPrinter_setPageMargins(self *C.QPrinter, cb C.intptr_t, margins C.struct_miqt_qmarginsf, units C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(margins qt6.QMarginsF, units qt6.QPageLayout__Unit) bool, margins qt6.QMarginsF, units qt6.QPageLayout__Unit) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[qt6.QMarginsF](margins)

	slotval2 := (qt6.QPageLayout__Unit)(units)

	virtualReturn := gofunc((&QPrinter{h: self}).callVirtualBase_SetPageMargins, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPrinter) callVirtualBase_SetPageRanges(ranges *qt6.QPageRanges) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(ranges)

	C.QPrinter_virtualbase_setPageRanges(unsafe.Pointer(this.h), (*C.QPageRanges)(ranges.UnsafePointer()))

}
func (this *QPrinter) OnSetPageRanges(slot func(super func(ranges *qt6.QPageRanges), ranges *qt6.QPageRanges)) {
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
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(painter)

	C.QPrinter_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QPrinter) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
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
	defer runtime.KeepAlive(this)

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QPrinter_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QPrinter) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
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
	defer runtime.KeepAlive(virtualReturn)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QPrinter) callVirtualBase_SharedPainter() *qt6.QPainter {
	defer runtime.KeepAlive(this)

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QPrinter_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QPrinter) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
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
	defer runtime.KeepAlive(virtualReturn)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QPrinter) Delete() {
	C.QPrinter_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPrinter) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPrinter_delete((*C.QPrinter)(gc[0]))
	})
	this.miqtSetGC(gc)
}
