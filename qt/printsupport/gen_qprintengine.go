package printsupport

/*

#include "gen_qprintengine.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QPrintEngine__PrintEnginePropertyKey int

const (
	QPrintEngine__PPK_CollateCopies          QPrintEngine__PrintEnginePropertyKey = 0
	QPrintEngine__PPK_ColorMode              QPrintEngine__PrintEnginePropertyKey = 1
	QPrintEngine__PPK_Creator                QPrintEngine__PrintEnginePropertyKey = 2
	QPrintEngine__PPK_DocumentName           QPrintEngine__PrintEnginePropertyKey = 3
	QPrintEngine__PPK_FullPage               QPrintEngine__PrintEnginePropertyKey = 4
	QPrintEngine__PPK_NumberOfCopies         QPrintEngine__PrintEnginePropertyKey = 5
	QPrintEngine__PPK_Orientation            QPrintEngine__PrintEnginePropertyKey = 6
	QPrintEngine__PPK_OutputFileName         QPrintEngine__PrintEnginePropertyKey = 7
	QPrintEngine__PPK_PageOrder              QPrintEngine__PrintEnginePropertyKey = 8
	QPrintEngine__PPK_PageRect               QPrintEngine__PrintEnginePropertyKey = 9
	QPrintEngine__PPK_PageSize               QPrintEngine__PrintEnginePropertyKey = 10
	QPrintEngine__PPK_PaperRect              QPrintEngine__PrintEnginePropertyKey = 11
	QPrintEngine__PPK_PaperSource            QPrintEngine__PrintEnginePropertyKey = 12
	QPrintEngine__PPK_PrinterName            QPrintEngine__PrintEnginePropertyKey = 13
	QPrintEngine__PPK_PrinterProgram         QPrintEngine__PrintEnginePropertyKey = 14
	QPrintEngine__PPK_Resolution             QPrintEngine__PrintEnginePropertyKey = 15
	QPrintEngine__PPK_SelectionOption        QPrintEngine__PrintEnginePropertyKey = 16
	QPrintEngine__PPK_SupportedResolutions   QPrintEngine__PrintEnginePropertyKey = 17
	QPrintEngine__PPK_WindowsPageSize        QPrintEngine__PrintEnginePropertyKey = 18
	QPrintEngine__PPK_FontEmbedding          QPrintEngine__PrintEnginePropertyKey = 19
	QPrintEngine__PPK_Duplex                 QPrintEngine__PrintEnginePropertyKey = 20
	QPrintEngine__PPK_PaperSources           QPrintEngine__PrintEnginePropertyKey = 21
	QPrintEngine__PPK_CustomPaperSize        QPrintEngine__PrintEnginePropertyKey = 22
	QPrintEngine__PPK_PageMargins            QPrintEngine__PrintEnginePropertyKey = 23
	QPrintEngine__PPK_CopyCount              QPrintEngine__PrintEnginePropertyKey = 24
	QPrintEngine__PPK_SupportsMultipleCopies QPrintEngine__PrintEnginePropertyKey = 25
	QPrintEngine__PPK_PaperName              QPrintEngine__PrintEnginePropertyKey = 26
	QPrintEngine__PPK_QPageSize              QPrintEngine__PrintEnginePropertyKey = 27
	QPrintEngine__PPK_QPageMargins           QPrintEngine__PrintEnginePropertyKey = 28
	QPrintEngine__PPK_QPageLayout            QPrintEngine__PrintEnginePropertyKey = 29
	QPrintEngine__PPK_PaperSize              QPrintEngine__PrintEnginePropertyKey = 10
	QPrintEngine__PPK_CustomBase             QPrintEngine__PrintEnginePropertyKey = 65280
)

type QPrintEngine struct {
	h          *C.QPrintEngine
	isSubclass bool
}

func (this *QPrintEngine) cPointer() *C.QPrintEngine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPrintEngine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPrintEngine constructs the type using only CGO pointers.
func newQPrintEngine(h *C.QPrintEngine) *QPrintEngine {
	if h == nil {
		return nil
	}
	return &QPrintEngine{h: h}
}

// UnsafeNewQPrintEngine constructs the type using only unsafe pointers.
func UnsafeNewQPrintEngine(h unsafe.Pointer) *QPrintEngine {
	if h == nil {
		return nil
	}

	return &QPrintEngine{h: (*C.QPrintEngine)(h)}
}

func (this *QPrintEngine) SetProperty(key QPrintEngine__PrintEnginePropertyKey, value *qt.QVariant) {
	C.QPrintEngine_SetProperty(this.h, (C.int)(key), (*C.QVariant)(value.UnsafePointer()))
}

func (this *QPrintEngine) Property(key QPrintEngine__PrintEnginePropertyKey) *qt.QVariant {
	_ret := C.QPrintEngine_Property(this.h, (C.int)(key))
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPrintEngine) NewPage() bool {
	return (bool)(C.QPrintEngine_NewPage(this.h))
}

func (this *QPrintEngine) Abort() bool {
	return (bool)(C.QPrintEngine_Abort(this.h))
}

func (this *QPrintEngine) Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {
	return (int)(C.QPrintEngine_Metric(this.h, (C.int)(param1)))
}

func (this *QPrintEngine) PrinterState() QPrinter__PrinterState {
	return (QPrinter__PrinterState)(C.QPrintEngine_PrinterState(this.h))
}

func (this *QPrintEngine) OperatorAssign(param1 *QPrintEngine) {
	C.QPrintEngine_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QPrintEngine) Delete() {
	C.QPrintEngine_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPrintEngine) GoGC() {
	runtime.SetFinalizer(this, func(this *QPrintEngine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
