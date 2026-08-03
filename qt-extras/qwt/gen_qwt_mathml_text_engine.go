package qwt

/*

#include "gen_qwt_mathml_text_engine.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QwtMathMLTextEngine struct {
	h *C.QwtMathMLTextEngine
	*QwtTextEngine
}

func (this *QwtMathMLTextEngine) cPointer() *C.QwtMathMLTextEngine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtMathMLTextEngine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtMathMLTextEngine constructs the type using only CGO pointers.
func newQwtMathMLTextEngine(h *C.QwtMathMLTextEngine) *QwtMathMLTextEngine {
	if h == nil {
		return nil
	}
	var outptr_QwtTextEngine *C.QwtTextEngine = nil
	C.QwtMathMLTextEngine_virtbase(h, &outptr_QwtTextEngine)

	return &QwtMathMLTextEngine{h: h,
		QwtTextEngine: newQwtTextEngine(outptr_QwtTextEngine)}
}

// UnsafeNewQwtMathMLTextEngine constructs the type using only unsafe pointers.
func UnsafeNewQwtMathMLTextEngine(h unsafe.Pointer) *QwtMathMLTextEngine {
	return newQwtMathMLTextEngine((*C.QwtMathMLTextEngine)(h))
}

func (this *QwtMathMLTextEngine) HeightForWidth(font *qt.QFont, flags int, text string, width float64) float64 {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (float64)(C.QwtMathMLTextEngine_heightForWidth(this.h, (*C.QFont)(font.UnsafePointer()), (C.int)(flags), text_ms, (C.double)(width)))
}

func (this *QwtMathMLTextEngine) TextSize(font *qt.QFont, flags int, text string) *qt.QSizeF {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QwtMathMLTextEngine_textSize(this.h, (*C.QFont)(font.UnsafePointer()), (C.int)(flags), text_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtMathMLTextEngine) Draw(painter *qt.QPainter, rect *qt.QRectF, flags int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QwtMathMLTextEngine_draw(this.h, (*C.QPainter)(painter.UnsafePointer()), (*C.QRectF)(rect.UnsafePointer()), (C.int)(flags), text_ms)
}

func (this *QwtMathMLTextEngine) MightRender(param1 string) bool {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	return (bool)(C.QwtMathMLTextEngine_mightRender(this.h, param1_ms))
}

func (this *QwtMathMLTextEngine) TextMargins(param1 *qt.QFont, param2 string, left *float64, right *float64, top *float64, bottom *float64) {
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))
	C.QwtMathMLTextEngine_textMargins(this.h, (*C.QFont)(param1.UnsafePointer()), param2_ms, (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(bottom)))
}

func (this *QwtMathMLTextEngine) OperatorAssign(param1 *QwtMathMLTextEngine) {
	C.QwtMathMLTextEngine_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QwtMathMLTextEngine) Delete() {
	C.QwtMathMLTextEngine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtMathMLTextEngine) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtMathMLTextEngine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
