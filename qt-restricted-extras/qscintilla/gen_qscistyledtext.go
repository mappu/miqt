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
	h *C.QsciStyledText
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

func newQsciStyledText(h *C.QsciStyledText) *QsciStyledText {
	if h == nil {
		return nil
	}
	return &QsciStyledText{h: h}
}

func UnsafeNewQsciStyledText(h unsafe.Pointer) *QsciStyledText {
	return newQsciStyledText((*C.QsciStyledText)(h))
}

// NewQsciStyledText constructs a new QsciStyledText object.
func NewQsciStyledText(text string, style int) *QsciStyledText {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	ret := C.QsciStyledText_new(text_ms, (C.int)(style))
	return newQsciStyledText(ret)
}

// NewQsciStyledText2 constructs a new QsciStyledText object.
func NewQsciStyledText2(text string, style *QsciStyle) *QsciStyledText {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	ret := C.QsciStyledText_new2(text_ms, style.cPointer())
	return newQsciStyledText(ret)
}

// NewQsciStyledText3 constructs a new QsciStyledText object.
func NewQsciStyledText3(param1 *QsciStyledText) *QsciStyledText {
	ret := C.QsciStyledText_new3(param1.cPointer())
	return newQsciStyledText(ret)
}

func (this *QsciStyledText) Apply(sci *QsciScintillaBase) {
	C.QsciStyledText_Apply(this.h, sci.cPointer())
}

func (this *QsciStyledText) Text() string {
	var _ms C.struct_miqt_string = C.QsciStyledText_Text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciStyledText) Style() int {
	return (int)(C.QsciStyledText_Style(this.h))
}

// Delete this object from C++ memory.
func (this *QsciStyledText) Delete() {
	C.QsciStyledText_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciStyledText) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciStyledText) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
