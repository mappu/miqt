package qt6

/*

#include "gen_qstatictext.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QStaticText__PerformanceHint int

const (
	QStaticText__ModerateCaching   QStaticText__PerformanceHint = 0
	QStaticText__AggressiveCaching QStaticText__PerformanceHint = 1
)

type QStaticText struct {
	h *C.QStaticText
}

func (this *QStaticText) cPointer() *C.QStaticText {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStaticText) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStaticText constructs the type using only CGO pointers.
func newQStaticText(h *C.QStaticText) *QStaticText {
	if h == nil {
		return nil
	}

	return &QStaticText{h: h}
}

// UnsafeNewQStaticText constructs the type using only unsafe pointers.
func UnsafeNewQStaticText(h unsafe.Pointer) *QStaticText {
	return newQStaticText((*C.QStaticText)(h))
}

// NewQStaticText constructs a new QStaticText object.
func NewQStaticText() *QStaticText {

	return newQStaticText(C.QStaticText_new())
}

// NewQStaticText2 constructs a new QStaticText object.
func NewQStaticText2(text string) *QStaticText {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQStaticText(C.QStaticText_new2(text_ms))
}

// NewQStaticText3 constructs a new QStaticText object.
func NewQStaticText3(other *QStaticText) *QStaticText {

	return newQStaticText(C.QStaticText_new3(other.cPointer()))
}

func (this *QStaticText) OperatorAssign(param1 *QStaticText) {
	C.QStaticText_operatorAssign(this.h, param1.cPointer())
}

func (this *QStaticText) Swap(other *QStaticText) {
	C.QStaticText_swap(this.h, other.cPointer())
}

func (this *QStaticText) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStaticText_setText(this.h, text_ms)
}

func (this *QStaticText) Text() string {
	var _ms C.struct_miqt_string = C.QStaticText_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStaticText) SetTextFormat(textFormat TextFormat) {
	C.QStaticText_setTextFormat(this.h, (C.int)(textFormat))
}

func (this *QStaticText) TextFormat() TextFormat {
	return (TextFormat)(C.QStaticText_textFormat(this.h))
}

func (this *QStaticText) SetTextWidth(textWidth float64) {
	C.QStaticText_setTextWidth(this.h, (C.double)(textWidth))
}

func (this *QStaticText) TextWidth() float64 {
	return (float64)(C.QStaticText_textWidth(this.h))
}

func (this *QStaticText) SetTextOption(textOption *QTextOption) {
	C.QStaticText_setTextOption(this.h, textOption.cPointer())
}

func (this *QStaticText) TextOption() *QTextOption {
	_goptr := newQTextOption(C.QStaticText_textOption(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStaticText) Size() *QSizeF {
	_goptr := newQSizeF(C.QStaticText_size(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStaticText) Prepare() {
	C.QStaticText_prepare(this.h)
}

func (this *QStaticText) SetPerformanceHint(performanceHint QStaticText__PerformanceHint) {
	C.QStaticText_setPerformanceHint(this.h, (C.int)(performanceHint))
}

func (this *QStaticText) PerformanceHint() QStaticText__PerformanceHint {
	return (QStaticText__PerformanceHint)(C.QStaticText_performanceHint(this.h))
}

func (this *QStaticText) OperatorEqual(param1 *QStaticText) bool {
	return (bool)(C.QStaticText_operatorEqual(this.h, param1.cPointer()))
}

func (this *QStaticText) OperatorNotEqual(param1 *QStaticText) bool {
	return (bool)(C.QStaticText_operatorNotEqual(this.h, param1.cPointer()))
}

func (this *QStaticText) PrepareWithMatrix(matrix *QTransform) {
	C.QStaticText_prepareWithMatrix(this.h, matrix.cPointer())
}

func (this *QStaticText) Prepare2(matrix *QTransform, font *QFont) {
	C.QStaticText_prepare2(this.h, matrix.cPointer(), font.cPointer())
}

// Delete this object from C++ memory.
func (this *QStaticText) Delete() {
	C.QStaticText_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStaticText) GoGC() {
	runtime.SetFinalizer(this, func(this *QStaticText) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
