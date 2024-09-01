package qt

/*

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
	if h == nil {
		return nil
	}
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

func (this *QStyle) DrawItemText(painter *QPainter, rect *QRect, flags int, pal *QPalette, enabled bool, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QStyle_DrawItemText(this.h, painter.cPointer(), rect.cPointer(), (C.int)(flags), pal.cPointer(), (C.bool)(enabled), text_Cstring, C.ulong(len(text)))
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

func (this *QStyle) DrawPrimitive(pe uintptr, opt *QStyleOption, p *QPainter) {
	C.QStyle_DrawPrimitive(this.h, (C.uintptr_t)(pe), opt.cPointer(), p.cPointer())
}

func (this *QStyle) DrawControl(element uintptr, opt *QStyleOption, p *QPainter) {
	C.QStyle_DrawControl(this.h, (C.uintptr_t)(element), opt.cPointer(), p.cPointer())
}

func (this *QStyle) SubElementRect(subElement uintptr, option *QStyleOption) *QRect {
	ret := C.QStyle_SubElementRect(this.h, (C.uintptr_t)(subElement), option.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStyle) DrawComplexControl(cc uintptr, opt *QStyleOptionComplex, p *QPainter) {
	C.QStyle_DrawComplexControl(this.h, (C.uintptr_t)(cc), opt.cPointer(), p.cPointer())
}

func (this *QStyle) HitTestComplexControl(cc uintptr, opt *QStyleOptionComplex, pt *QPoint) uintptr {
	ret := C.QStyle_HitTestComplexControl(this.h, (C.uintptr_t)(cc), opt.cPointer(), pt.cPointer())
	return (uintptr)(ret)
}

func (this *QStyle) SubControlRect(cc uintptr, opt *QStyleOptionComplex, sc uintptr) *QRect {
	ret := C.QStyle_SubControlRect(this.h, (C.uintptr_t)(cc), opt.cPointer(), (C.uintptr_t)(sc))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStyle) PixelMetric(metric uintptr) int {
	ret := C.QStyle_PixelMetric(this.h, (C.uintptr_t)(metric))
	return (int)(ret)
}

func (this *QStyle) SizeFromContents(ct uintptr, opt *QStyleOption, contentsSize *QSize) *QSize {
	ret := C.QStyle_SizeFromContents(this.h, (C.uintptr_t)(ct), opt.cPointer(), contentsSize.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStyle) StyleHint(stylehint uintptr) int {
	ret := C.QStyle_StyleHint(this.h, (C.uintptr_t)(stylehint))
	return (int)(ret)
}

func (this *QStyle) StandardPixmap(standardPixmap uintptr) *QPixmap {
	ret := C.QStyle_StandardPixmap(this.h, (C.uintptr_t)(standardPixmap))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStyle) StandardIcon(standardIcon uintptr) *QIcon {
	ret := C.QStyle_StandardIcon(this.h, (C.uintptr_t)(standardIcon))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStyle) GeneratedIconPixmap(iconMode uintptr, pixmap *QPixmap, opt *QStyleOption) *QPixmap {
	ret := C.QStyle_GeneratedIconPixmap(this.h, (C.uintptr_t)(iconMode), pixmap.cPointer(), opt.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QStyle_VisualRect(direction uintptr, boundingRect *QRect, logicalRect *QRect) *QRect {
	ret := C.QStyle_VisualRect((C.uintptr_t)(direction), boundingRect.cPointer(), logicalRect.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QStyle_VisualPos(direction uintptr, boundingRect *QRect, logicalPos *QPoint) *QPoint {
	ret := C.QStyle_VisualPos((C.uintptr_t)(direction), boundingRect.cPointer(), logicalPos.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
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

func QStyle_VisualAlignment(direction uintptr, alignment int) int {
	ret := C.QStyle_VisualAlignment((C.uintptr_t)(direction), (C.int)(alignment))
	return (int)(ret)
}

func QStyle_AlignedRect(direction uintptr, alignment int, size *QSize, rectangle *QRect) *QRect {
	ret := C.QStyle_AlignedRect((C.uintptr_t)(direction), (C.int)(alignment), size.cPointer(), rectangle.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStyle) LayoutSpacing(control1 uintptr, control2 uintptr, orientation uintptr) int {
	ret := C.QStyle_LayoutSpacing(this.h, (C.uintptr_t)(control1), (C.uintptr_t)(control2), (C.uintptr_t)(orientation))
	return (int)(ret)
}

func (this *QStyle) CombinedLayoutSpacing(controls1 int, controls2 int, orientation uintptr) int {
	ret := C.QStyle_CombinedLayoutSpacing(this.h, (C.int)(controls1), (C.int)(controls2), (C.uintptr_t)(orientation))
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

func (this *QStyle) DrawItemText7(painter *QPainter, rect *QRect, flags int, pal *QPalette, enabled bool, text string, textRole uintptr) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QStyle_DrawItemText7(this.h, painter.cPointer(), rect.cPointer(), (C.int)(flags), pal.cPointer(), (C.bool)(enabled), text_Cstring, C.ulong(len(text)), (C.uintptr_t)(textRole))
}

func (this *QStyle) DrawPrimitive4(pe uintptr, opt *QStyleOption, p *QPainter, w *QWidget) {
	C.QStyle_DrawPrimitive4(this.h, (C.uintptr_t)(pe), opt.cPointer(), p.cPointer(), w.cPointer())
}

func (this *QStyle) DrawControl4(element uintptr, opt *QStyleOption, p *QPainter, w *QWidget) {
	C.QStyle_DrawControl4(this.h, (C.uintptr_t)(element), opt.cPointer(), p.cPointer(), w.cPointer())
}

func (this *QStyle) SubElementRect3(subElement uintptr, option *QStyleOption, widget *QWidget) *QRect {
	ret := C.QStyle_SubElementRect3(this.h, (C.uintptr_t)(subElement), option.cPointer(), widget.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStyle) DrawComplexControl4(cc uintptr, opt *QStyleOptionComplex, p *QPainter, widget *QWidget) {
	C.QStyle_DrawComplexControl4(this.h, (C.uintptr_t)(cc), opt.cPointer(), p.cPointer(), widget.cPointer())
}

func (this *QStyle) HitTestComplexControl4(cc uintptr, opt *QStyleOptionComplex, pt *QPoint, widget *QWidget) uintptr {
	ret := C.QStyle_HitTestComplexControl4(this.h, (C.uintptr_t)(cc), opt.cPointer(), pt.cPointer(), widget.cPointer())
	return (uintptr)(ret)
}

func (this *QStyle) SubControlRect4(cc uintptr, opt *QStyleOptionComplex, sc uintptr, widget *QWidget) *QRect {
	ret := C.QStyle_SubControlRect4(this.h, (C.uintptr_t)(cc), opt.cPointer(), (C.uintptr_t)(sc), widget.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStyle) PixelMetric2(metric uintptr, option *QStyleOption) int {
	ret := C.QStyle_PixelMetric2(this.h, (C.uintptr_t)(metric), option.cPointer())
	return (int)(ret)
}

func (this *QStyle) PixelMetric3(metric uintptr, option *QStyleOption, widget *QWidget) int {
	ret := C.QStyle_PixelMetric3(this.h, (C.uintptr_t)(metric), option.cPointer(), widget.cPointer())
	return (int)(ret)
}

func (this *QStyle) SizeFromContents4(ct uintptr, opt *QStyleOption, contentsSize *QSize, w *QWidget) *QSize {
	ret := C.QStyle_SizeFromContents4(this.h, (C.uintptr_t)(ct), opt.cPointer(), contentsSize.cPointer(), w.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStyle) StyleHint2(stylehint uintptr, opt *QStyleOption) int {
	ret := C.QStyle_StyleHint2(this.h, (C.uintptr_t)(stylehint), opt.cPointer())
	return (int)(ret)
}

func (this *QStyle) StyleHint3(stylehint uintptr, opt *QStyleOption, widget *QWidget) int {
	ret := C.QStyle_StyleHint3(this.h, (C.uintptr_t)(stylehint), opt.cPointer(), widget.cPointer())
	return (int)(ret)
}

func (this *QStyle) StyleHint4(stylehint uintptr, opt *QStyleOption, widget *QWidget, returnData *QStyleHintReturn) int {
	ret := C.QStyle_StyleHint4(this.h, (C.uintptr_t)(stylehint), opt.cPointer(), widget.cPointer(), returnData.cPointer())
	return (int)(ret)
}

func (this *QStyle) StandardPixmap2(standardPixmap uintptr, opt *QStyleOption) *QPixmap {
	ret := C.QStyle_StandardPixmap2(this.h, (C.uintptr_t)(standardPixmap), opt.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStyle) StandardPixmap3(standardPixmap uintptr, opt *QStyleOption, widget *QWidget) *QPixmap {
	ret := C.QStyle_StandardPixmap3(this.h, (C.uintptr_t)(standardPixmap), opt.cPointer(), widget.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStyle) StandardIcon2(standardIcon uintptr, option *QStyleOption) *QIcon {
	ret := C.QStyle_StandardIcon2(this.h, (C.uintptr_t)(standardIcon), option.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QStyle) StandardIcon3(standardIcon uintptr, option *QStyleOption, widget *QWidget) *QIcon {
	ret := C.QStyle_StandardIcon3(this.h, (C.uintptr_t)(standardIcon), option.cPointer(), widget.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QStyle_SliderPositionFromValue5(min int, max int, val int, space int, upsideDown bool) int {
	ret := C.QStyle_SliderPositionFromValue5((C.int)(min), (C.int)(max), (C.int)(val), (C.int)(space), (C.bool)(upsideDown))
	return (int)(ret)
}

func QStyle_SliderValueFromPosition5(min int, max int, pos int, space int, upsideDown bool) int {
	ret := C.QStyle_SliderValueFromPosition5((C.int)(min), (C.int)(max), (C.int)(pos), (C.int)(space), (C.bool)(upsideDown))
	return (int)(ret)
}

func (this *QStyle) LayoutSpacing4(control1 uintptr, control2 uintptr, orientation uintptr, option *QStyleOption) int {
	ret := C.QStyle_LayoutSpacing4(this.h, (C.uintptr_t)(control1), (C.uintptr_t)(control2), (C.uintptr_t)(orientation), option.cPointer())
	return (int)(ret)
}

func (this *QStyle) LayoutSpacing5(control1 uintptr, control2 uintptr, orientation uintptr, option *QStyleOption, widget *QWidget) int {
	ret := C.QStyle_LayoutSpacing5(this.h, (C.uintptr_t)(control1), (C.uintptr_t)(control2), (C.uintptr_t)(orientation), option.cPointer(), widget.cPointer())
	return (int)(ret)
}

func (this *QStyle) CombinedLayoutSpacing4(controls1 int, controls2 int, orientation uintptr, option *QStyleOption) int {
	ret := C.QStyle_CombinedLayoutSpacing4(this.h, (C.int)(controls1), (C.int)(controls2), (C.uintptr_t)(orientation), option.cPointer())
	return (int)(ret)
}

func (this *QStyle) CombinedLayoutSpacing5(controls1 int, controls2 int, orientation uintptr, option *QStyleOption, widget *QWidget) int {
	ret := C.QStyle_CombinedLayoutSpacing5(this.h, (C.int)(controls1), (C.int)(controls2), (C.uintptr_t)(orientation), option.cPointer(), widget.cPointer())
	return (int)(ret)
}

func (this *QStyle) Delete() {
	C.QStyle_Delete(this.h)
}
