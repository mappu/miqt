package qt

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
	h  *C.QStaticText
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStaticText) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
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
	defer runtime.KeepAlive(other)

	return newQStaticText(C.QStaticText_new3(other.cPointer()))
}

func (this *QStaticText) OperatorAssign(param1 *QStaticText) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStaticText_operatorAssign(this.h, param1.cPointer())
}

func (this *QStaticText) Swap(other *QStaticText) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QStaticText_swap(this.h, other.cPointer())
}

func (this *QStaticText) SetText(text string) {
	defer runtime.KeepAlive(this)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStaticText_setText(this.h, text_ms)
}

func (this *QStaticText) Text() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QStaticText_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStaticText) SetTextFormat(textFormat TextFormat) {
	defer runtime.KeepAlive(this)
	C.QStaticText_setTextFormat(this.h, (C.int)(textFormat))
}

func (this *QStaticText) TextFormat() TextFormat {
	defer runtime.KeepAlive(this)
	return (TextFormat)(C.QStaticText_textFormat(this.h))
}

func (this *QStaticText) SetTextWidth(textWidth float64) {
	defer runtime.KeepAlive(this)
	C.QStaticText_setTextWidth(this.h, (C.double)(textWidth))
}

func (this *QStaticText) TextWidth() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QStaticText_textWidth(this.h))
}

func (this *QStaticText) SetTextOption(textOption *QTextOption) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(textOption)
	C.QStaticText_setTextOption(this.h, textOption.cPointer())
}

func (this *QStaticText) TextOption() *QTextOption {
	defer runtime.KeepAlive(this)
	_goptr := newQTextOption(C.QStaticText_textOption(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStaticText) Size() *QSizeF {
	defer runtime.KeepAlive(this)
	_goptr := newQSizeF(C.QStaticText_size(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStaticText) Prepare() {
	defer runtime.KeepAlive(this)
	C.QStaticText_prepare(this.h)
}

func (this *QStaticText) SetPerformanceHint(performanceHint QStaticText__PerformanceHint) {
	defer runtime.KeepAlive(this)
	C.QStaticText_setPerformanceHint(this.h, (C.int)(performanceHint))
}

func (this *QStaticText) PerformanceHint() QStaticText__PerformanceHint {
	defer runtime.KeepAlive(this)
	return (QStaticText__PerformanceHint)(C.QStaticText_performanceHint(this.h))
}

func (this *QStaticText) OperatorEqual(param1 *QStaticText) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	return (bool)(C.QStaticText_operatorEqual(this.h, param1.cPointer()))
}

func (this *QStaticText) OperatorNotEqual(param1 *QStaticText) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	return (bool)(C.QStaticText_operatorNotEqual(this.h, param1.cPointer()))
}

func (this *QStaticText) PrepareWithMatrix(matrix *QTransform) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(matrix)
	C.QStaticText_prepareWithMatrix(this.h, matrix.cPointer())
}

func (this *QStaticText) Prepare2(matrix *QTransform, font *QFont) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(matrix)
	defer runtime.KeepAlive(font)
	C.QStaticText_prepare2(this.h, matrix.cPointer(), font.cPointer())
}

// Delete this object from C++ memory.
func (this *QStaticText) Delete() {
	C.QStaticText_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStaticText) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStaticText_delete((*C.QStaticText)(gc[0]))
	})
	this.miqtSetGC(gc)
}
