package qt6

/*

#include "gen_qtooltip.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QToolTip struct {
	h *C.QToolTip
}

func (this *QToolTip) cPointer() *C.QToolTip {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QToolTip) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQToolTip constructs the type using only CGO pointers.
func newQToolTip(h *C.QToolTip) *QToolTip {
	if h == nil {
		return nil
	}

	return &QToolTip{h: h}
}

// UnsafeNewQToolTip constructs the type using only unsafe pointers.
func UnsafeNewQToolTip(h unsafe.Pointer) *QToolTip {
	return newQToolTip((*C.QToolTip)(h))
}

func QToolTip_ShowText(pos *QPoint, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QToolTip_showText(pos.cPointer(), text_ms)
}

func QToolTip_HideText() {
	C.QToolTip_hideText()
}

func QToolTip_IsVisible() bool {
	return (bool)(C.QToolTip_isVisible())
}

func QToolTip_Text() string {
	var _ms C.struct_miqt_string = C.QToolTip_text()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolTip_Palette() *QPalette {
	_goptr := newQPalette(C.QToolTip_palette())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QToolTip_SetPalette(palette *QPalette) {
	C.QToolTip_setPalette(palette.cPointer())
}

func QToolTip_Font() *QFont {
	_goptr := newQFont(C.QToolTip_font())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QToolTip_SetFont(font *QFont) {
	C.QToolTip_setFont(font.cPointer())
}

func QToolTip_ShowText3(pos *QPoint, text string, w *QWidget) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QToolTip_showText3(pos.cPointer(), text_ms, w.cPointer())
}

func QToolTip_ShowText4(pos *QPoint, text string, w *QWidget, rect *QRect) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QToolTip_showText4(pos.cPointer(), text_ms, w.cPointer(), rect.cPointer())
}

func QToolTip_ShowText5(pos *QPoint, text string, w *QWidget, rect *QRect, msecShowTime int) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QToolTip_showText5(pos.cPointer(), text_ms, w.cPointer(), rect.cPointer(), (C.int)(msecShowTime))
}

// Delete this object from C++ memory.
func (this *QToolTip) Delete() {
	C.QToolTip_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QToolTip) GoGC() {
	runtime.SetFinalizer(this, func(this *QToolTip) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
