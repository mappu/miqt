package qt

/*

#include "gen_qcommonstyle.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QCommonStyle struct {
	h *C.QCommonStyle
	*QStyle
}

func (this *QCommonStyle) cPointer() *C.QCommonStyle {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCommonStyle) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQCommonStyle(h *C.QCommonStyle) *QCommonStyle {
	if h == nil {
		return nil
	}
	return &QCommonStyle{h: h, QStyle: UnsafeNewQStyle(unsafe.Pointer(h))}
}

func UnsafeNewQCommonStyle(h unsafe.Pointer) *QCommonStyle {
	return newQCommonStyle((*C.QCommonStyle)(h))
}

// NewQCommonStyle constructs a new QCommonStyle object.
func NewQCommonStyle() *QCommonStyle {
	ret := C.QCommonStyle_new()
	return newQCommonStyle(ret)
}

func (this *QCommonStyle) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QCommonStyle_MetaObject(this.h)))
}

func (this *QCommonStyle) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QCommonStyle_Metacast(this.h, param1_Cstring)
}

func QCommonStyle_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QCommonStyle_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCommonStyle_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QCommonStyle_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCommonStyle) DrawPrimitive(pe QStyle__PrimitiveElement, opt *QStyleOption, p *QPainter) {
	C.QCommonStyle_DrawPrimitive(this.h, (C.int)(pe), opt.cPointer(), p.cPointer())
}

func (this *QCommonStyle) DrawControl(element QStyle__ControlElement, opt *QStyleOption, p *QPainter) {
	C.QCommonStyle_DrawControl(this.h, (C.int)(element), opt.cPointer(), p.cPointer())
}

func (this *QCommonStyle) SubElementRect(r QStyle__SubElement, opt *QStyleOption) *QRect {
	_ret := C.QCommonStyle_SubElementRect(this.h, (C.int)(r), opt.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) DrawComplexControl(cc QStyle__ComplexControl, opt *QStyleOptionComplex, p *QPainter) {
	C.QCommonStyle_DrawComplexControl(this.h, (C.int)(cc), opt.cPointer(), p.cPointer())
}

func (this *QCommonStyle) HitTestComplexControl(cc QStyle__ComplexControl, opt *QStyleOptionComplex, pt *QPoint) QStyle__SubControl {
	return (QStyle__SubControl)(C.QCommonStyle_HitTestComplexControl(this.h, (C.int)(cc), opt.cPointer(), pt.cPointer()))
}

func (this *QCommonStyle) SubControlRect(cc QStyle__ComplexControl, opt *QStyleOptionComplex, sc QStyle__SubControl) *QRect {
	_ret := C.QCommonStyle_SubControlRect(this.h, (C.int)(cc), opt.cPointer(), (C.int)(sc))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) SizeFromContents(ct QStyle__ContentsType, opt *QStyleOption, contentsSize *QSize) *QSize {
	_ret := C.QCommonStyle_SizeFromContents(this.h, (C.int)(ct), opt.cPointer(), contentsSize.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) PixelMetric(m QStyle__PixelMetric) int {
	return (int)(C.QCommonStyle_PixelMetric(this.h, (C.int)(m)))
}

func (this *QCommonStyle) StyleHint(sh QStyle__StyleHint) int {
	return (int)(C.QCommonStyle_StyleHint(this.h, (C.int)(sh)))
}

func (this *QCommonStyle) StandardIcon(standardIcon QStyle__StandardPixmap) *QIcon {
	_ret := C.QCommonStyle_StandardIcon(this.h, (C.int)(standardIcon))
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) StandardPixmap(sp QStyle__StandardPixmap) *QPixmap {
	_ret := C.QCommonStyle_StandardPixmap(this.h, (C.int)(sp))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) GeneratedIconPixmap(iconMode QIcon__Mode, pixmap *QPixmap, opt *QStyleOption) *QPixmap {
	_ret := C.QCommonStyle_GeneratedIconPixmap(this.h, (C.int)(iconMode), pixmap.cPointer(), opt.cPointer())
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) LayoutSpacing(control1 QSizePolicy__ControlType, control2 QSizePolicy__ControlType, orientation Orientation) int {
	return (int)(C.QCommonStyle_LayoutSpacing(this.h, (C.int)(control1), (C.int)(control2), (C.int)(orientation)))
}

func (this *QCommonStyle) Polish(param1 *QPalette) {
	C.QCommonStyle_Polish(this.h, param1.cPointer())
}

func (this *QCommonStyle) PolishWithApp(app *QApplication) {
	C.QCommonStyle_PolishWithApp(this.h, app.cPointer())
}

func (this *QCommonStyle) PolishWithWidget(widget *QWidget) {
	C.QCommonStyle_PolishWithWidget(this.h, widget.cPointer())
}

func (this *QCommonStyle) Unpolish(widget *QWidget) {
	C.QCommonStyle_Unpolish(this.h, widget.cPointer())
}

func (this *QCommonStyle) UnpolishWithApplication(application *QApplication) {
	C.QCommonStyle_UnpolishWithApplication(this.h, application.cPointer())
}

func QCommonStyle_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QCommonStyle_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCommonStyle_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QCommonStyle_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCommonStyle_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QCommonStyle_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QCommonStyle_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QCommonStyle_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QCommonStyle) DrawPrimitive4(pe QStyle__PrimitiveElement, opt *QStyleOption, p *QPainter, w *QWidget) {
	C.QCommonStyle_DrawPrimitive4(this.h, (C.int)(pe), opt.cPointer(), p.cPointer(), w.cPointer())
}

func (this *QCommonStyle) DrawControl4(element QStyle__ControlElement, opt *QStyleOption, p *QPainter, w *QWidget) {
	C.QCommonStyle_DrawControl4(this.h, (C.int)(element), opt.cPointer(), p.cPointer(), w.cPointer())
}

func (this *QCommonStyle) SubElementRect3(r QStyle__SubElement, opt *QStyleOption, widget *QWidget) *QRect {
	_ret := C.QCommonStyle_SubElementRect3(this.h, (C.int)(r), opt.cPointer(), widget.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) DrawComplexControl4(cc QStyle__ComplexControl, opt *QStyleOptionComplex, p *QPainter, w *QWidget) {
	C.QCommonStyle_DrawComplexControl4(this.h, (C.int)(cc), opt.cPointer(), p.cPointer(), w.cPointer())
}

func (this *QCommonStyle) HitTestComplexControl4(cc QStyle__ComplexControl, opt *QStyleOptionComplex, pt *QPoint, w *QWidget) QStyle__SubControl {
	return (QStyle__SubControl)(C.QCommonStyle_HitTestComplexControl4(this.h, (C.int)(cc), opt.cPointer(), pt.cPointer(), w.cPointer()))
}

func (this *QCommonStyle) SubControlRect4(cc QStyle__ComplexControl, opt *QStyleOptionComplex, sc QStyle__SubControl, w *QWidget) *QRect {
	_ret := C.QCommonStyle_SubControlRect4(this.h, (C.int)(cc), opt.cPointer(), (C.int)(sc), w.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) SizeFromContents4(ct QStyle__ContentsType, opt *QStyleOption, contentsSize *QSize, widget *QWidget) *QSize {
	_ret := C.QCommonStyle_SizeFromContents4(this.h, (C.int)(ct), opt.cPointer(), contentsSize.cPointer(), widget.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) PixelMetric2(m QStyle__PixelMetric, opt *QStyleOption) int {
	return (int)(C.QCommonStyle_PixelMetric2(this.h, (C.int)(m), opt.cPointer()))
}

func (this *QCommonStyle) PixelMetric3(m QStyle__PixelMetric, opt *QStyleOption, widget *QWidget) int {
	return (int)(C.QCommonStyle_PixelMetric3(this.h, (C.int)(m), opt.cPointer(), widget.cPointer()))
}

func (this *QCommonStyle) StyleHint2(sh QStyle__StyleHint, opt *QStyleOption) int {
	return (int)(C.QCommonStyle_StyleHint2(this.h, (C.int)(sh), opt.cPointer()))
}

func (this *QCommonStyle) StyleHint3(sh QStyle__StyleHint, opt *QStyleOption, w *QWidget) int {
	return (int)(C.QCommonStyle_StyleHint3(this.h, (C.int)(sh), opt.cPointer(), w.cPointer()))
}

func (this *QCommonStyle) StyleHint4(sh QStyle__StyleHint, opt *QStyleOption, w *QWidget, shret *QStyleHintReturn) int {
	return (int)(C.QCommonStyle_StyleHint4(this.h, (C.int)(sh), opt.cPointer(), w.cPointer(), shret.cPointer()))
}

func (this *QCommonStyle) StandardIcon2(standardIcon QStyle__StandardPixmap, opt *QStyleOption) *QIcon {
	_ret := C.QCommonStyle_StandardIcon2(this.h, (C.int)(standardIcon), opt.cPointer())
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) StandardIcon3(standardIcon QStyle__StandardPixmap, opt *QStyleOption, widget *QWidget) *QIcon {
	_ret := C.QCommonStyle_StandardIcon3(this.h, (C.int)(standardIcon), opt.cPointer(), widget.cPointer())
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) StandardPixmap2(sp QStyle__StandardPixmap, opt *QStyleOption) *QPixmap {
	_ret := C.QCommonStyle_StandardPixmap2(this.h, (C.int)(sp), opt.cPointer())
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) StandardPixmap3(sp QStyle__StandardPixmap, opt *QStyleOption, widget *QWidget) *QPixmap {
	_ret := C.QCommonStyle_StandardPixmap3(this.h, (C.int)(sp), opt.cPointer(), widget.cPointer())
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) LayoutSpacing4(control1 QSizePolicy__ControlType, control2 QSizePolicy__ControlType, orientation Orientation, option *QStyleOption) int {
	return (int)(C.QCommonStyle_LayoutSpacing4(this.h, (C.int)(control1), (C.int)(control2), (C.int)(orientation), option.cPointer()))
}

func (this *QCommonStyle) LayoutSpacing5(control1 QSizePolicy__ControlType, control2 QSizePolicy__ControlType, orientation Orientation, option *QStyleOption, widget *QWidget) int {
	return (int)(C.QCommonStyle_LayoutSpacing5(this.h, (C.int)(control1), (C.int)(control2), (C.int)(orientation), option.cPointer(), widget.cPointer()))
}

// Delete this object from C++ memory.
func (this *QCommonStyle) Delete() {
	C.QCommonStyle_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCommonStyle) GoGC() {
	runtime.SetFinalizer(this, func(this *QCommonStyle) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
