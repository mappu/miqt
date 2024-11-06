package printsupport

/*

#include "gen_qprinter.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QPrinter__PrinterMode int

const (
	QPrinter__ScreenResolution  QPrinter__PrinterMode = 0
	QPrinter__PrinterResolution QPrinter__PrinterMode = 1
	QPrinter__HighResolution    QPrinter__PrinterMode = 2
)

type QPrinter__Orientation int

const (
	QPrinter__Portrait  QPrinter__Orientation = 0
	QPrinter__Landscape QPrinter__Orientation = 1
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
	*qt.QPagedPaintDevice
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

func newQPrinter(h *C.QPrinter) *QPrinter {
	if h == nil {
		return nil
	}
	return &QPrinter{h: h, QPagedPaintDevice: qt.UnsafeNewQPagedPaintDevice(unsafe.Pointer(h))}
}

func UnsafeNewQPrinter(h unsafe.Pointer) *QPrinter {
	return newQPrinter((*C.QPrinter)(h))
}

// NewQPrinter constructs a new QPrinter object.
func NewQPrinter() *QPrinter {
	ret := C.QPrinter_new()
	return newQPrinter(ret)
}

// NewQPrinter2 constructs a new QPrinter object.
func NewQPrinter2(printer *QPrinterInfo) *QPrinter {
	ret := C.QPrinter_new2(printer.cPointer())
	return newQPrinter(ret)
}

// NewQPrinter3 constructs a new QPrinter object.
func NewQPrinter3(mode QPrinter__PrinterMode) *QPrinter {
	ret := C.QPrinter_new3((C.int)(mode))
	return newQPrinter(ret)
}

// NewQPrinter4 constructs a new QPrinter object.
func NewQPrinter4(printer *QPrinterInfo, mode QPrinter__PrinterMode) *QPrinter {
	ret := C.QPrinter_new4(printer.cPointer(), (C.int)(mode))
	return newQPrinter(ret)
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

func (this *QPrinter) SetPdfVersion(version qt.QPagedPaintDevice__PdfVersion) {
	C.QPrinter_SetPdfVersion(this.h, (C.int)(version))
}

func (this *QPrinter) PdfVersion() qt.QPagedPaintDevice__PdfVersion {
	return (qt.QPagedPaintDevice__PdfVersion)(C.QPrinter_PdfVersion(this.h))
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

func (this *QPrinter) SetOrientation(orientation QPrinter__Orientation) {
	C.QPrinter_SetOrientation(this.h, (C.int)(orientation))
}

func (this *QPrinter) Orientation() QPrinter__Orientation {
	return (QPrinter__Orientation)(C.QPrinter_Orientation(this.h))
}

func (this *QPrinter) SetPageSize(pageSize qt.QPagedPaintDevice__PageSize) {
	C.QPrinter_SetPageSize(this.h, (C.int)(pageSize))
}

func (this *QPrinter) PageSize() qt.QPagedPaintDevice__PageSize {
	return (qt.QPagedPaintDevice__PageSize)(C.QPrinter_PageSize(this.h))
}

func (this *QPrinter) SetPageSizeMM(size *qt.QSizeF) {
	C.QPrinter_SetPageSizeMM(this.h, (*C.QSizeF)(size.UnsafePointer()))
}

func (this *QPrinter) SetPaperSize(paperSize qt.QPagedPaintDevice__PageSize) {
	C.QPrinter_SetPaperSize(this.h, (C.int)(paperSize))
}

func (this *QPrinter) PaperSize() qt.QPagedPaintDevice__PageSize {
	return (qt.QPagedPaintDevice__PageSize)(C.QPrinter_PaperSize(this.h))
}

func (this *QPrinter) SetPaperSize2(paperSize *qt.QSizeF, unit QPrinter__Unit) {
	C.QPrinter_SetPaperSize2(this.h, (*C.QSizeF)(paperSize.UnsafePointer()), (C.int)(unit))
}

func (this *QPrinter) PaperSizeWithUnit(unit QPrinter__Unit) *qt.QSizeF {
	_ret := C.QPrinter_PaperSizeWithUnit(this.h, (C.int)(unit))
	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPrinter) SetPaperName(paperName string) {
	paperName_ms := C.struct_miqt_string{}
	paperName_ms.data = C.CString(paperName)
	paperName_ms.len = C.size_t(len(paperName))
	defer C.free(unsafe.Pointer(paperName_ms.data))
	C.QPrinter_SetPaperName(this.h, paperName_ms)
}

func (this *QPrinter) PaperName() string {
	var _ms C.struct_miqt_string = C.QPrinter_PaperName(this.h)
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

func (this *QPrinter) SetNumCopies(numCopies int) {
	C.QPrinter_SetNumCopies(this.h, (C.int)(numCopies))
}

func (this *QPrinter) NumCopies() int {
	return (int)(C.QPrinter_NumCopies(this.h))
}

func (this *QPrinter) ActualNumCopies() int {
	return (int)(C.QPrinter_ActualNumCopies(this.h))
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

func (this *QPrinter) SetDoubleSidedPrinting(enable bool) {
	C.QPrinter_SetDoubleSidedPrinting(this.h, (C.bool)(enable))
}

func (this *QPrinter) DoubleSidedPrinting() bool {
	return (bool)(C.QPrinter_DoubleSidedPrinting(this.h))
}

func (this *QPrinter) SetWinPageSize(winPageSize int) {
	C.QPrinter_SetWinPageSize(this.h, (C.int)(winPageSize))
}

func (this *QPrinter) WinPageSize() int {
	return (int)(C.QPrinter_WinPageSize(this.h))
}

func (this *QPrinter) PaperRect() *qt.QRect {
	_ret := C.QPrinter_PaperRect(this.h)
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPrinter) PageRect() *qt.QRect {
	_ret := C.QPrinter_PageRect(this.h)
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPrinter) PaperRectWithQPrinterUnit(param1 QPrinter__Unit) *qt.QRectF {
	_ret := C.QPrinter_PaperRectWithQPrinterUnit(this.h, (C.int)(param1))
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPrinter) PageRectWithQPrinterUnit(param1 QPrinter__Unit) *qt.QRectF {
	_ret := C.QPrinter_PageRectWithQPrinterUnit(this.h, (C.int)(param1))
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(_ret))
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

func (this *QPrinter) PaintEngine() *qt.QPaintEngine {
	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QPrinter_PaintEngine(this.h)))
}

func (this *QPrinter) PrintEngine() *QPrintEngine {
	return UnsafeNewQPrintEngine(unsafe.Pointer(C.QPrinter_PrintEngine(this.h)))
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

func (this *QPrinter) SetMargins(m *qt.QPagedPaintDevice__Margins) {
	C.QPrinter_SetMargins(this.h, (*C.QPagedPaintDevice__Margins)(m.UnsafePointer()))
}

func (this *QPrinter) SetPageMargins(left float64, top float64, right float64, bottom float64, unit QPrinter__Unit) {
	C.QPrinter_SetPageMargins(this.h, (C.double)(left), (C.double)(top), (C.double)(right), (C.double)(bottom), (C.int)(unit))
}

func (this *QPrinter) GetPageMargins(left *float64, top *float64, right *float64, bottom *float64, unit QPrinter__Unit) {
	C.QPrinter_GetPageMargins(this.h, (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)), (C.int)(unit))
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
