package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qstyle.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QStyle struct {
	h *C.QStyle
	*QObject
}

func (this *QStyle) cPointer() *C.QStyle {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStyle(h *C.QStyle) *QStyle {
	return &QStyle{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQStyle_U(h unsafe.Pointer) *QStyle {
	return newQStyle((*C.QStyle)(h))
}

func (this *QStyle) MetaObject() *QMetaObject {
	ret := C.QStyle_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QStyle_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStyle_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStyle_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStyle_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStyle) Polish(widget *QWidget) {
	C.QStyle_Polish(this.h, widget.cPointer())
}

func (this *QStyle) Unpolish(widget *QWidget) {
	C.QStyle_Unpolish(this.h, widget.cPointer())
}

func (this *QStyle) PolishWithApplication(application *QApplication) {
	C.QStyle_PolishWithApplication(this.h, application.cPointer())
}

func (this *QStyle) UnpolishWithApplication(application *QApplication) {
	C.QStyle_UnpolishWithApplication(this.h, application.cPointer())
}

func (this *QStyle) PolishWithPalette(palette *QPalette) {
	C.QStyle_PolishWithPalette(this.h, palette.cPointer())
}

func (this *QStyle) ItemTextRect(fm *QFontMetrics, r *QRect, flags int, enabled bool, text string) *QRect {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QStyle_ItemTextRect(this.h, fm.cPointer(), r.cPointer(), (C.int)(flags), (C.bool)(enabled), text_Cstring, C.ulong(len(text)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStyle) ItemPixmapRect(r *QRect, flags int, pixmap *QPixmap) *QRect {
	ret := C.QStyle_ItemPixmapRect(this.h, r.cPointer(), (C.int)(flags), pixmap.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStyle) DrawItemPixmap(painter *QPainter, rect *QRect, alignment int, pixmap *QPixmap) {
	C.QStyle_DrawItemPixmap(this.h, painter.cPointer(), rect.cPointer(), (C.int)(alignment), pixmap.cPointer())
}

func (this *QStyle) StandardPalette() *QPalette {
	ret := C.QStyle_StandardPalette(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPalette(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPalette) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QStyle_SliderPositionFromValue(min int, max int, val int, space int) int {
	ret := C.QStyle_SliderPositionFromValue((C.int)(min), (C.int)(max), (C.int)(val), (C.int)(space))
	return (int)(ret)
}

func QStyle_SliderValueFromPosition(min int, max int, pos int, space int) int {
	ret := C.QStyle_SliderValueFromPosition((C.int)(min), (C.int)(max), (C.int)(pos), (C.int)(space))
	return (int)(ret)
}

func (this *QStyle) Proxy() *QStyle {
	ret := C.QStyle_Proxy(this.h)
	return newQStyle_U(unsafe.Pointer(ret))
}

func QStyle_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStyle_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStyle_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStyle_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStyle_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStyle_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStyle_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStyle_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QStyle_SliderPositionFromValue5(min int, max int, val int, space int, upsideDown bool) int {
	ret := C.QStyle_SliderPositionFromValue5((C.int)(min), (C.int)(max), (C.int)(val), (C.int)(space), (C.bool)(upsideDown))
	return (int)(ret)
}

func QStyle_SliderValueFromPosition5(min int, max int, pos int, space int, upsideDown bool) int {
	ret := C.QStyle_SliderValueFromPosition5((C.int)(min), (C.int)(max), (C.int)(pos), (C.int)(space), (C.bool)(upsideDown))
	return (int)(ret)
}

func (this *QStyle) Delete() {
	C.QStyle_Delete(this.h)
}
