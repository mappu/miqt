package qt6

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

func (this *QProxyStyle) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQProxyStyle(h *C.QProxyStyle) *QProxyStyle {
	if h == nil {
		return nil
	}
	return &QProxyStyle{h: h, QCommonStyle: UnsafeNewQCommonStyle(unsafe.Pointer(h))}
}

func UnsafeNewQProxyStyle(h unsafe.Pointer) *QProxyStyle {
	return newQProxyStyle((*C.QProxyStyle)(h))
}

// NewQProxyStyle constructs a new QProxyStyle object.
func NewQProxyStyle() *QProxyStyle {
	ret := C.QProxyStyle_new()
	return newQProxyStyle(ret)
}

// NewQProxyStyle2 constructs a new QProxyStyle object.
func NewQProxyStyle2(key string) *QProxyStyle {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	ret := C.QProxyStyle_new2(key_ms)
	return newQProxyStyle(ret)
}

// NewQProxyStyle3 constructs a new QProxyStyle object.
func NewQProxyStyle3(style *QStyle) *QProxyStyle {
	ret := C.QProxyStyle_new3(style.cPointer())
	return newQProxyStyle(ret)
}

func (this *QProxyStyle) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QProxyStyle_MetaObject(this.h)))
}

func (this *QProxyStyle) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QProxyStyle_Metacast(this.h, param1_Cstring))
}

func QProxyStyle_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QProxyStyle_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProxyStyle) BaseStyle() *QStyle {
	return UnsafeNewQStyle(unsafe.Pointer(C.QProxyStyle_BaseStyle(this.h)))
}

func (this *QProxyStyle) SetBaseStyle(style *QStyle) {
	C.QProxyStyle_SetBaseStyle(this.h, style.cPointer())
}

func (this *QProxyStyle) DrawPrimitive(element QStyle__PrimitiveElement, option *QStyleOption, painter *QPainter) {
	C.QProxyStyle_DrawPrimitive(this.h, (C.int)(element), option.cPointer(), painter.cPointer())
}

func (this *QProxyStyle) DrawControl(element QStyle__ControlElement, option *QStyleOption, painter *QPainter) {
	C.QProxyStyle_DrawControl(this.h, (C.int)(element), option.cPointer(), painter.cPointer())
}

func (this *QProxyStyle) DrawComplexControl(control QStyle__ComplexControl, option *QStyleOptionComplex, painter *QPainter) {
	C.QProxyStyle_DrawComplexControl(this.h, (C.int)(control), option.cPointer(), painter.cPointer())
}

func (this *QProxyStyle) DrawItemText(painter *QPainter, rect *QRect, flags int, pal *QPalette, enabled bool, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QProxyStyle_DrawItemText(this.h, painter.cPointer(), rect.cPointer(), (C.int)(flags), pal.cPointer(), (C.bool)(enabled), text_ms)
}

func (this *QProxyStyle) DrawItemPixmap(painter *QPainter, rect *QRect, alignment int, pixmap *QPixmap) {
	C.QProxyStyle_DrawItemPixmap(this.h, painter.cPointer(), rect.cPointer(), (C.int)(alignment), pixmap.cPointer())
}

func (this *QProxyStyle) SizeFromContents(typeVal QStyle__ContentsType, option *QStyleOption, size *QSize, widget *QWidget) *QSize {
	_ret := C.QProxyStyle_SizeFromContents(this.h, (C.int)(typeVal), option.cPointer(), size.cPointer(), widget.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProxyStyle) SubElementRect(element QStyle__SubElement, option *QStyleOption, widget *QWidget) *QRect {
	_ret := C.QProxyStyle_SubElementRect(this.h, (C.int)(element), option.cPointer(), widget.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProxyStyle) SubControlRect(cc QStyle__ComplexControl, opt *QStyleOptionComplex, sc QStyle__SubControl, widget *QWidget) *QRect {
	_ret := C.QProxyStyle_SubControlRect(this.h, (C.int)(cc), opt.cPointer(), (C.int)(sc), widget.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProxyStyle) ItemTextRect(fm *QFontMetrics, r *QRect, flags int, enabled bool, text string) *QRect {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	_ret := C.QProxyStyle_ItemTextRect(this.h, fm.cPointer(), r.cPointer(), (C.int)(flags), (C.bool)(enabled), text_ms)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProxyStyle) ItemPixmapRect(r *QRect, flags int, pixmap *QPixmap) *QRect {
	_ret := C.QProxyStyle_ItemPixmapRect(this.h, r.cPointer(), (C.int)(flags), pixmap.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProxyStyle) HitTestComplexControl(control QStyle__ComplexControl, option *QStyleOptionComplex, pos *QPoint) QStyle__SubControl {
	return (QStyle__SubControl)(C.QProxyStyle_HitTestComplexControl(this.h, (C.int)(control), option.cPointer(), pos.cPointer()))
}

func (this *QProxyStyle) StyleHint(hint QStyle__StyleHint) int {
	return (int)(C.QProxyStyle_StyleHint(this.h, (C.int)(hint)))
}

func (this *QProxyStyle) PixelMetric(metric QStyle__PixelMetric) int {
	return (int)(C.QProxyStyle_PixelMetric(this.h, (C.int)(metric)))
}

func (this *QProxyStyle) LayoutSpacing(control1 QSizePolicy__ControlType, control2 QSizePolicy__ControlType, orientation Orientation) int {
	return (int)(C.QProxyStyle_LayoutSpacing(this.h, (C.int)(control1), (C.int)(control2), (C.int)(orientation)))
}

func (this *QProxyStyle) StandardIcon(standardIcon QStyle__StandardPixmap) *QIcon {
	_ret := C.QProxyStyle_StandardIcon(this.h, (C.int)(standardIcon))
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProxyStyle) StandardPixmap(standardPixmap QStyle__StandardPixmap, opt *QStyleOption) *QPixmap {
	_ret := C.QProxyStyle_StandardPixmap(this.h, (C.int)(standardPixmap), opt.cPointer())
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProxyStyle) GeneratedIconPixmap(iconMode QIcon__Mode, pixmap *QPixmap, opt *QStyleOption) *QPixmap {
	_ret := C.QProxyStyle_GeneratedIconPixmap(this.h, (C.int)(iconMode), pixmap.cPointer(), opt.cPointer())
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProxyStyle) StandardPalette() *QPalette {
	_ret := C.QProxyStyle_StandardPalette(this.h)
	_goptr := newQPalette(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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
	var _ms C.struct_miqt_string = C.QProxyStyle_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QProxyStyle_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QProxyStyle_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProxyStyle) DrawPrimitive4(element QStyle__PrimitiveElement, option *QStyleOption, painter *QPainter, widget *QWidget) {
	C.QProxyStyle_DrawPrimitive4(this.h, (C.int)(element), option.cPointer(), painter.cPointer(), widget.cPointer())
}

func (this *QProxyStyle) DrawControl4(element QStyle__ControlElement, option *QStyleOption, painter *QPainter, widget *QWidget) {
	C.QProxyStyle_DrawControl4(this.h, (C.int)(element), option.cPointer(), painter.cPointer(), widget.cPointer())
}

func (this *QProxyStyle) DrawComplexControl4(control QStyle__ComplexControl, option *QStyleOptionComplex, painter *QPainter, widget *QWidget) {
	C.QProxyStyle_DrawComplexControl4(this.h, (C.int)(control), option.cPointer(), painter.cPointer(), widget.cPointer())
}

func (this *QProxyStyle) DrawItemText7(painter *QPainter, rect *QRect, flags int, pal *QPalette, enabled bool, text string, textRole QPalette__ColorRole) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QProxyStyle_DrawItemText7(this.h, painter.cPointer(), rect.cPointer(), (C.int)(flags), pal.cPointer(), (C.bool)(enabled), text_ms, (C.int)(textRole))
}

func (this *QProxyStyle) HitTestComplexControl4(control QStyle__ComplexControl, option *QStyleOptionComplex, pos *QPoint, widget *QWidget) QStyle__SubControl {
	return (QStyle__SubControl)(C.QProxyStyle_HitTestComplexControl4(this.h, (C.int)(control), option.cPointer(), pos.cPointer(), widget.cPointer()))
}

func (this *QProxyStyle) StyleHint2(hint QStyle__StyleHint, option *QStyleOption) int {
	return (int)(C.QProxyStyle_StyleHint2(this.h, (C.int)(hint), option.cPointer()))
}

func (this *QProxyStyle) StyleHint3(hint QStyle__StyleHint, option *QStyleOption, widget *QWidget) int {
	return (int)(C.QProxyStyle_StyleHint3(this.h, (C.int)(hint), option.cPointer(), widget.cPointer()))
}

func (this *QProxyStyle) StyleHint4(hint QStyle__StyleHint, option *QStyleOption, widget *QWidget, returnData *QStyleHintReturn) int {
	return (int)(C.QProxyStyle_StyleHint4(this.h, (C.int)(hint), option.cPointer(), widget.cPointer(), returnData.cPointer()))
}

func (this *QProxyStyle) PixelMetric2(metric QStyle__PixelMetric, option *QStyleOption) int {
	return (int)(C.QProxyStyle_PixelMetric2(this.h, (C.int)(metric), option.cPointer()))
}

func (this *QProxyStyle) PixelMetric3(metric QStyle__PixelMetric, option *QStyleOption, widget *QWidget) int {
	return (int)(C.QProxyStyle_PixelMetric3(this.h, (C.int)(metric), option.cPointer(), widget.cPointer()))
}

func (this *QProxyStyle) LayoutSpacing4(control1 QSizePolicy__ControlType, control2 QSizePolicy__ControlType, orientation Orientation, option *QStyleOption) int {
	return (int)(C.QProxyStyle_LayoutSpacing4(this.h, (C.int)(control1), (C.int)(control2), (C.int)(orientation), option.cPointer()))
}

func (this *QProxyStyle) LayoutSpacing5(control1 QSizePolicy__ControlType, control2 QSizePolicy__ControlType, orientation Orientation, option *QStyleOption, widget *QWidget) int {
	return (int)(C.QProxyStyle_LayoutSpacing5(this.h, (C.int)(control1), (C.int)(control2), (C.int)(orientation), option.cPointer(), widget.cPointer()))
}

func (this *QProxyStyle) StandardIcon2(standardIcon QStyle__StandardPixmap, option *QStyleOption) *QIcon {
	_ret := C.QProxyStyle_StandardIcon2(this.h, (C.int)(standardIcon), option.cPointer())
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProxyStyle) StandardIcon3(standardIcon QStyle__StandardPixmap, option *QStyleOption, widget *QWidget) *QIcon {
	_ret := C.QProxyStyle_StandardIcon3(this.h, (C.int)(standardIcon), option.cPointer(), widget.cPointer())
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProxyStyle) StandardPixmap3(standardPixmap QStyle__StandardPixmap, opt *QStyleOption, widget *QWidget) *QPixmap {
	_ret := C.QProxyStyle_StandardPixmap3(this.h, (C.int)(standardPixmap), opt.cPointer(), widget.cPointer())
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QProxyStyle) Delete() {
	C.QProxyStyle_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QProxyStyle) GoGC() {
	runtime.SetFinalizer(this, func(this *QProxyStyle) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
