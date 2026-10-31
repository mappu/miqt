package qscintilla

/*

#include "gen_qscistyledtext.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QsciStyledText struct {
	h  *C.QsciStyledText
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QsciStyledText) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QsciStyledText) cPointer() *C.QsciStyledText {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciStyledText) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciStyledText constructs the type using only CGO pointers.
func newQsciStyledText(h *C.QsciStyledText) *QsciStyledText {
	if h == nil {
		return nil
	}

	return &QsciStyledText{h: h}
}

// UnsafeNewQsciStyledText constructs the type using only unsafe pointers.
func UnsafeNewQsciStyledText(h unsafe.Pointer) *QsciStyledText {
	return newQsciStyledText((*C.QsciStyledText)(h))
}

// NewQsciStyledText constructs a new QsciStyledText object.
func NewQsciStyledText(text string, style int) *QsciStyledText {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQsciStyledText(C.QsciStyledText_new(text_ms, (C.int)(style)))
}

// NewQsciStyledText2 constructs a new QsciStyledText object.
func NewQsciStyledText2(text string, style *QsciStyle) *QsciStyledText {
	defer runtime.KeepAlive(style)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQsciStyledText(C.QsciStyledText_new2(text_ms, style.cPointer()))
}

// NewQsciStyledText3 constructs a new QsciStyledText object.
func NewQsciStyledText3(param1 *QsciStyledText) *QsciStyledText {
	defer runtime.KeepAlive(param1)

	return newQsciStyledText(C.QsciStyledText_new3(param1.cPointer()))
}

func (this *QsciStyledText) Apply(sci *QsciScintillaBase) {
	defer runtime.KeepAlive(this)
	C.QsciStyledText_apply(this.h, sci.cPointer())
}

func (this *QsciStyledText) Text() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QsciStyledText_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciStyledText) Style() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QsciStyledText_style(this.h))
}

func (this *QsciStyledText) OperatorAssign(param1 *QsciStyledText) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QsciStyledText_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QsciStyledText) Delete() {
	C.QsciStyledText_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QsciStyledText) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QsciStyledText_delete((*C.QsciStyledText)(gc[0]))
	})
	this.miqtSetGC(gc)
}
