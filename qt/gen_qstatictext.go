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

type QStaticText struct {
	h *C.QStaticText
}

func (this *QStaticText) cPointer() *C.QStaticText {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStaticText(h *C.QStaticText) *QStaticText {
	if h == nil {
		return nil
	}
	return &QStaticText{h: h}
}

func newQStaticText_U(h unsafe.Pointer) *QStaticText {
	return newQStaticText((*C.QStaticText)(h))
}

// NewQStaticText constructs a new QStaticText object.
func NewQStaticText() *QStaticText {
	ret := C.QStaticText_new()
	return newQStaticText(ret)
}

// NewQStaticText2 constructs a new QStaticText object.
func NewQStaticText2(text string) *QStaticText {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QStaticText_new2(text_Cstring, C.size_t(len(text)))
	return newQStaticText(ret)
}

// NewQStaticText3 constructs a new QStaticText object.
func NewQStaticText3(other *QStaticText) *QStaticText {
	ret := C.QStaticText_new3(other.cPointer())
	return newQStaticText(ret)
}

func (this *QStaticText) OperatorAssign(param1 *QStaticText) {
	C.QStaticText_OperatorAssign(this.h, param1.cPointer())
}

func (this *QStaticText) Swap(other *QStaticText) {
	C.QStaticText_Swap(this.h, other.cPointer())
}

func (this *QStaticText) SetText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QStaticText_SetText(this.h, text_Cstring, C.size_t(len(text)))
}

func (this *QStaticText) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStaticText_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStaticText) SetTextFormat(textFormat uintptr) {
	C.QStaticText_SetTextFormat(this.h, (C.uintptr_t)(textFormat))
}

func (this *QStaticText) TextFormat() uintptr {
	ret := C.QStaticText_TextFormat(this.h)
	return (uintptr)(ret)
}

func (this *QStaticText) SetTextWidth(textWidth float64) {
	C.QStaticText_SetTextWidth(this.h, (C.double)(textWidth))
}

func (this *QStaticText) TextWidth() float64 {
	ret := C.QStaticText_TextWidth(this.h)
	return (float64)(ret)
}

func (this *QStaticText) SetTextOption(textOption *QTextOption) {
	C.QStaticText_SetTextOption(this.h, textOption.cPointer())
}

func (this *QStaticText) TextOption() *QTextOption {
	ret := C.QStaticText_TextOption(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextOption(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextOption) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStaticText) Size() *QSizeF {
	ret := C.QStaticText_Size(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStaticText) Prepare() {
	C.QStaticText_Prepare(this.h)
}

func (this *QStaticText) SetPerformanceHint(performanceHint uintptr) {
	C.QStaticText_SetPerformanceHint(this.h, (C.uintptr_t)(performanceHint))
}

func (this *QStaticText) PerformanceHint() uintptr {
	ret := C.QStaticText_PerformanceHint(this.h)
	return (uintptr)(ret)
}

func (this *QStaticText) OperatorEqual(param1 *QStaticText) bool {
	ret := C.QStaticText_OperatorEqual(this.h, param1.cPointer())
	return (bool)(ret)
}

func (this *QStaticText) OperatorNotEqual(param1 *QStaticText) bool {
	ret := C.QStaticText_OperatorNotEqual(this.h, param1.cPointer())
	return (bool)(ret)
}

func (this *QStaticText) Prepare1(matrix *QTransform) {
	C.QStaticText_Prepare1(this.h, matrix.cPointer())
}

func (this *QStaticText) Prepare2(matrix *QTransform, font *QFont) {
	C.QStaticText_Prepare2(this.h, matrix.cPointer(), font.cPointer())
}

func (this *QStaticText) Delete() {
	C.QStaticText_Delete(this.h)
}
