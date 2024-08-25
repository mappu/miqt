package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
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

func newQToolTip(h *C.QToolTip) *QToolTip {
	return &QToolTip{h: h}
}

func newQToolTip_U(h unsafe.Pointer) *QToolTip {
	return newQToolTip((*C.QToolTip)(h))
}

func QToolTip_ShowText(pos *QPoint, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QToolTip_ShowText(pos.cPointer(), text_Cstring, C.ulong(len(text)))
}

func QToolTip_ShowText2(pos *QPoint, text string, w *QWidget, rect *QRect) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QToolTip_ShowText2(pos.cPointer(), text_Cstring, C.ulong(len(text)), w.cPointer(), rect.cPointer())
}

func QToolTip_ShowText3(pos *QPoint, text string, w *QWidget, rect *QRect, msecShowTime int) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QToolTip_ShowText3(pos.cPointer(), text_Cstring, C.ulong(len(text)), w.cPointer(), rect.cPointer(), (C.int)(msecShowTime))
}

func QToolTip_HideText() {
	C.QToolTip_HideText()
}

func QToolTip_IsVisible() bool {
	ret := C.QToolTip_IsVisible()
	return (bool)(ret)
}

func QToolTip_Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolTip_Text(&_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QToolTip_Palette() *QPalette {
	ret := C.QToolTip_Palette()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPalette(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPalette) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QToolTip_SetPalette(palette *QPalette) {
	C.QToolTip_SetPalette(palette.cPointer())
}

func QToolTip_Font() *QFont {
	ret := C.QToolTip_Font()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QToolTip_SetFont(font *QFont) {
	C.QToolTip_SetFont(font.cPointer())
}

func QToolTip_ShowText32(pos *QPoint, text string, w *QWidget) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QToolTip_ShowText32(pos.cPointer(), text_Cstring, C.ulong(len(text)), w.cPointer())
}

func (this *QToolTip) Delete() {
	C.QToolTip_Delete(this.h)
}
