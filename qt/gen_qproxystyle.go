package qt

/*

#include "gen_qproxystyle.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QProxyStyle struct {
	h *C.QProxyStyle
	*QCommonStyle
}

func (this *QProxyStyle) cPointer() *C.QProxyStyle {
	if this == nil {
		return nil
	}
	return this.h
}

func newQProxyStyle(h *C.QProxyStyle) *QProxyStyle {
	if h == nil {
		return nil
	}
	return &QProxyStyle{h: h, QCommonStyle: newQCommonStyle_U(unsafe.Pointer(h))}
}

func newQProxyStyle_U(h unsafe.Pointer) *QProxyStyle {
	return newQProxyStyle((*C.QProxyStyle)(h))
}

// NewQProxyStyle constructs a new QProxyStyle object.
func NewQProxyStyle() *QProxyStyle {
	ret := C.QProxyStyle_new()
	return newQProxyStyle(ret)
}

// NewQProxyStyle2 constructs a new QProxyStyle object.
func NewQProxyStyle2(key string) *QProxyStyle {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QProxyStyle_new2(key_Cstring, C.size_t(len(key)))
	return newQProxyStyle(ret)
}

// NewQProxyStyle3 constructs a new QProxyStyle object.
func NewQProxyStyle3(style *QStyle) *QProxyStyle {
	ret := C.QProxyStyle_new3(style.cPointer())
	return newQProxyStyle(ret)
}

func (this *QProxyStyle) MetaObject() *QMetaObject {
	ret := C.QProxyStyle_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QProxyStyle_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProxyStyle_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QProxyStyle_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProxyStyle_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QProxyStyle) BaseStyle() *QStyle {
	ret := C.QProxyStyle_BaseStyle(this.h)
	return newQStyle_U(unsafe.Pointer(ret))
}

func (this *QProxyStyle) SetBaseStyle(style *QStyle) {
	C.QProxyStyle_SetBaseStyle(this.h, style.cPointer())
}

func (this *QProxyStyle) DrawPrimitive(element QStyle__PrimitiveElement, option *QStyleOption, painter *QPainter) {
	C.QProxyStyle_DrawPrimitive(this.h, (C.uintptr_t)(element), option.cPointer(), painter.cPointer())
}

func (this *QProxyStyle) DrawControl(element QStyle__ControlElement, option *QStyleOption, painter *QPainter) {
	C.QProxyStyle_DrawControl(this.h, (C.uintptr_t)(element), option.cPointer(), painter.cPointer())
}

func (this *QProxyStyle) DrawComplexControl(control QStyle__ComplexControl, option *QStyleOptionComplex, painter *QPainter) {
	C.QProxyStyle_DrawComplexControl(this.h, (C.uintptr_t)(control), option.cPointer(), painter.cPointer())
}

func (this *QProxyStyle) DrawItemText(painter *QPainter, rect *QRect, flags int, pal *QPalette, enabled bool, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QProxyStyle_DrawItemText(this.h, painter.cPointer(), rect.cPointer(), (C.int)(flags), pal.cPointer(), (C.bool)(enabled), text_Cstring, C.size_t(len(text)))
}

func (this *QProxyStyle) DrawItemPixmap(painter *QPainter, rect *QRect, alignment int, pixmap *QPixmap) {
	C.QProxyStyle_DrawItemPixmap(this.h, painter.cPointer(), rect.cPointer(), (C.int)(alignment), pixmap.cPointer())
}

func (this *QProxyStyle) SizeFromContents(typeVal QStyle__ContentsType, option *QStyleOption, size *QSize, widget *QWidget) *QSize {
	ret := C.QProxyStyle_SizeFromContents(this.h, (C.uintptr_t)(typeVal), option.cPointer(), size.cPointer(), widget.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProxyStyle) SubElementRect(element QStyle__SubElement, option *QStyleOption, widget *QWidget) *QRect {
	ret := C.QProxyStyle_SubElementRect(this.h, (C.uintptr_t)(element), option.cPointer(), widget.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProxyStyle) SubControlRect(cc QStyle__ComplexControl, opt *QStyleOptionComplex, sc QStyle__SubControl, widget *QWidget) *QRect {
	ret := C.QProxyStyle_SubControlRect(this.h, (C.uintptr_t)(cc), opt.cPointer(), (C.uintptr_t)(sc), widget.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProxyStyle) ItemTextRect(fm *QFontMetrics, r *QRect, flags int, enabled bool, text string) *QRect {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QProxyStyle_ItemTextRect(this.h, fm.cPointer(), r.cPointer(), (C.int)(flags), (C.bool)(enabled), text_Cstring, C.size_t(len(text)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProxyStyle) ItemPixmapRect(r *QRect, flags int, pixmap *QPixmap) *QRect {
	ret := C.QProxyStyle_ItemPixmapRect(this.h, r.cPointer(), (C.int)(flags), pixmap.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProxyStyle) HitTestComplexControl(control QStyle__ComplexControl, option *QStyleOptionComplex, pos *QPoint) QStyle__SubControl {
	ret := C.QProxyStyle_HitTestComplexControl(this.h, (C.uintptr_t)(control), option.cPointer(), pos.cPointer())
	return (QStyle__SubControl)(ret)
}

func (this *QProxyStyle) StyleHint(hint QStyle__StyleHint) int {
	ret := C.QProxyStyle_StyleHint(this.h, (C.uintptr_t)(hint))
	return (int)(ret)
}

func (this *QProxyStyle) PixelMetric(metric QStyle__PixelMetric) int {
	ret := C.QProxyStyle_PixelMetric(this.h, (C.uintptr_t)(metric))
	return (int)(ret)
}

func (this *QProxyStyle) LayoutSpacing(control1 QSizePolicy__ControlType, control2 QSizePolicy__ControlType, orientation Orientation) int {
	ret := C.QProxyStyle_LayoutSpacing(this.h, (C.uintptr_t)(control1), (C.uintptr_t)(control2), (C.uintptr_t)(orientation))
	return (int)(ret)
}

func (this *QProxyStyle) StandardIcon(standardIcon QStyle__StandardPixmap) *QIcon {
	ret := C.QProxyStyle_StandardIcon(this.h, (C.uintptr_t)(standardIcon))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProxyStyle) StandardPixmap(standardPixmap QStyle__StandardPixmap, opt *QStyleOption) *QPixmap {
	ret := C.QProxyStyle_StandardPixmap(this.h, (C.uintptr_t)(standardPixmap), opt.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProxyStyle) GeneratedIconPixmap(iconMode QIcon__Mode, pixmap *QPixmap, opt *QStyleOption) *QPixmap {
	ret := C.QProxyStyle_GeneratedIconPixmap(this.h, (C.uintptr_t)(iconMode), pixmap.cPointer(), opt.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProxyStyle) StandardPalette() *QPalette {
	ret := C.QProxyStyle_StandardPalette(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPalette(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPalette) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProxyStyle) Polish(widget *QWidget) {
	C.QProxyStyle_Polish(this.h, widget.cPointer())
}

func (this *QProxyStyle) PolishWithPal(pal *QPalette) {
	C.QProxyStyle_PolishWithPal(this.h, pal.cPointer())
}

func (this *QProxyStyle) PolishWithApp(app *QApplication) {
	C.QProxyStyle_PolishWithApp(this.h, app.cPointer())
}

func (this *QProxyStyle) Unpolish(widget *QWidget) {
	C.QProxyStyle_Unpolish(this.h, widget.cPointer())
}

func (this *QProxyStyle) UnpolishWithApp(app *QApplication) {
	C.QProxyStyle_UnpolishWithApp(this.h, app.cPointer())
}

func QProxyStyle_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProxyStyle_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QProxyStyle_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProxyStyle_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QProxyStyle_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProxyStyle_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QProxyStyle_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QProxyStyle_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QProxyStyle) DrawPrimitive4(element QStyle__PrimitiveElement, option *QStyleOption, painter *QPainter, widget *QWidget) {
	C.QProxyStyle_DrawPrimitive4(this.h, (C.uintptr_t)(element), option.cPointer(), painter.cPointer(), widget.cPointer())
}

func (this *QProxyStyle) DrawControl4(element QStyle__ControlElement, option *QStyleOption, painter *QPainter, widget *QWidget) {
	C.QProxyStyle_DrawControl4(this.h, (C.uintptr_t)(element), option.cPointer(), painter.cPointer(), widget.cPointer())
}

func (this *QProxyStyle) DrawComplexControl4(control QStyle__ComplexControl, option *QStyleOptionComplex, painter *QPainter, widget *QWidget) {
	C.QProxyStyle_DrawComplexControl4(this.h, (C.uintptr_t)(control), option.cPointer(), painter.cPointer(), widget.cPointer())
}

func (this *QProxyStyle) DrawItemText7(painter *QPainter, rect *QRect, flags int, pal *QPalette, enabled bool, text string, textRole QPalette__ColorRole) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QProxyStyle_DrawItemText7(this.h, painter.cPointer(), rect.cPointer(), (C.int)(flags), pal.cPointer(), (C.bool)(enabled), text_Cstring, C.size_t(len(text)), (C.uintptr_t)(textRole))
}

func (this *QProxyStyle) HitTestComplexControl4(control QStyle__ComplexControl, option *QStyleOptionComplex, pos *QPoint, widget *QWidget) QStyle__SubControl {
	ret := C.QProxyStyle_HitTestComplexControl4(this.h, (C.uintptr_t)(control), option.cPointer(), pos.cPointer(), widget.cPointer())
	return (QStyle__SubControl)(ret)
}

func (this *QProxyStyle) StyleHint2(hint QStyle__StyleHint, option *QStyleOption) int {
	ret := C.QProxyStyle_StyleHint2(this.h, (C.uintptr_t)(hint), option.cPointer())
	return (int)(ret)
}

func (this *QProxyStyle) StyleHint3(hint QStyle__StyleHint, option *QStyleOption, widget *QWidget) int {
	ret := C.QProxyStyle_StyleHint3(this.h, (C.uintptr_t)(hint), option.cPointer(), widget.cPointer())
	return (int)(ret)
}

func (this *QProxyStyle) StyleHint4(hint QStyle__StyleHint, option *QStyleOption, widget *QWidget, returnData *QStyleHintReturn) int {
	ret := C.QProxyStyle_StyleHint4(this.h, (C.uintptr_t)(hint), option.cPointer(), widget.cPointer(), returnData.cPointer())
	return (int)(ret)
}

func (this *QProxyStyle) PixelMetric2(metric QStyle__PixelMetric, option *QStyleOption) int {
	ret := C.QProxyStyle_PixelMetric2(this.h, (C.uintptr_t)(metric), option.cPointer())
	return (int)(ret)
}

func (this *QProxyStyle) PixelMetric3(metric QStyle__PixelMetric, option *QStyleOption, widget *QWidget) int {
	ret := C.QProxyStyle_PixelMetric3(this.h, (C.uintptr_t)(metric), option.cPointer(), widget.cPointer())
	return (int)(ret)
}

func (this *QProxyStyle) LayoutSpacing4(control1 QSizePolicy__ControlType, control2 QSizePolicy__ControlType, orientation Orientation, option *QStyleOption) int {
	ret := C.QProxyStyle_LayoutSpacing4(this.h, (C.uintptr_t)(control1), (C.uintptr_t)(control2), (C.uintptr_t)(orientation), option.cPointer())
	return (int)(ret)
}

func (this *QProxyStyle) LayoutSpacing5(control1 QSizePolicy__ControlType, control2 QSizePolicy__ControlType, orientation Orientation, option *QStyleOption, widget *QWidget) int {
	ret := C.QProxyStyle_LayoutSpacing5(this.h, (C.uintptr_t)(control1), (C.uintptr_t)(control2), (C.uintptr_t)(orientation), option.cPointer(), widget.cPointer())
	return (int)(ret)
}

func (this *QProxyStyle) StandardIcon2(standardIcon QStyle__StandardPixmap, option *QStyleOption) *QIcon {
	ret := C.QProxyStyle_StandardIcon2(this.h, (C.uintptr_t)(standardIcon), option.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProxyStyle) StandardIcon3(standardIcon QStyle__StandardPixmap, option *QStyleOption, widget *QWidget) *QIcon {
	ret := C.QProxyStyle_StandardIcon3(this.h, (C.uintptr_t)(standardIcon), option.cPointer(), widget.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProxyStyle) StandardPixmap3(standardPixmap QStyle__StandardPixmap, opt *QStyleOption, widget *QWidget) *QPixmap {
	ret := C.QProxyStyle_StandardPixmap3(this.h, (C.uintptr_t)(standardPixmap), opt.cPointer(), widget.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QProxyStyle) Delete() {
	C.QProxyStyle_Delete(this.h)
}
