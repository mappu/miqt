package qt

/*

#include "gen_qcommonstyle.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
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

// newQCommonStyle constructs the type using only CGO pointers.
func newQCommonStyle(h *C.QCommonStyle) *QCommonStyle {
	if h == nil {
		return nil
	}
	var outptr_QStyle *C.QStyle = nil
	C.QCommonStyle_virtbase(h, &outptr_QStyle)

	return &QCommonStyle{h: h,
		QStyle: newQStyle(outptr_QStyle)}
}

// UnsafeNewQCommonStyle constructs the type using only unsafe pointers.
func UnsafeNewQCommonStyle(h unsafe.Pointer) *QCommonStyle {
	return newQCommonStyle((*C.QCommonStyle)(h))
}

// NewQCommonStyle constructs a new QCommonStyle object.
func NewQCommonStyle() *QCommonStyle {

	return newQCommonStyle(C.QCommonStyle_new())
}

func (this *QCommonStyle) MetaObject() *QMetaObject {
	return newQMetaObject(C.QCommonStyle_MetaObject(this.h))
}

func (this *QCommonStyle) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCommonStyle_Metacast(this.h, param1_Cstring))
}

func QCommonStyle_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCommonStyle_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCommonStyle_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCommonStyle_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCommonStyle) DrawPrimitive(pe QStyle__PrimitiveElement, opt *QStyleOption, p *QPainter, w *QWidget) {
	C.QCommonStyle_DrawPrimitive(this.h, (C.int)(pe), opt.cPointer(), p.cPointer(), w.cPointer())
}

func (this *QCommonStyle) DrawControl(element QStyle__ControlElement, opt *QStyleOption, p *QPainter, w *QWidget) {
	C.QCommonStyle_DrawControl(this.h, (C.int)(element), opt.cPointer(), p.cPointer(), w.cPointer())
}

func (this *QCommonStyle) SubElementRect(r QStyle__SubElement, opt *QStyleOption, widget *QWidget) *QRect {
	_goptr := newQRect(C.QCommonStyle_SubElementRect(this.h, (C.int)(r), opt.cPointer(), widget.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) DrawComplexControl(cc QStyle__ComplexControl, opt *QStyleOptionComplex, p *QPainter, w *QWidget) {
	C.QCommonStyle_DrawComplexControl(this.h, (C.int)(cc), opt.cPointer(), p.cPointer(), w.cPointer())
}

func (this *QCommonStyle) HitTestComplexControl(cc QStyle__ComplexControl, opt *QStyleOptionComplex, pt *QPoint, w *QWidget) QStyle__SubControl {
	return (QStyle__SubControl)(C.QCommonStyle_HitTestComplexControl(this.h, (C.int)(cc), opt.cPointer(), pt.cPointer(), w.cPointer()))
}

func (this *QCommonStyle) SubControlRect(cc QStyle__ComplexControl, opt *QStyleOptionComplex, sc QStyle__SubControl, w *QWidget) *QRect {
	_goptr := newQRect(C.QCommonStyle_SubControlRect(this.h, (C.int)(cc), opt.cPointer(), (C.int)(sc), w.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) SizeFromContents(ct QStyle__ContentsType, opt *QStyleOption, contentsSize *QSize, widget *QWidget) *QSize {
	_goptr := newQSize(C.QCommonStyle_SizeFromContents(this.h, (C.int)(ct), opt.cPointer(), contentsSize.cPointer(), widget.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) PixelMetric(m QStyle__PixelMetric, opt *QStyleOption, widget *QWidget) int {
	return (int)(C.QCommonStyle_PixelMetric(this.h, (C.int)(m), opt.cPointer(), widget.cPointer()))
}

func (this *QCommonStyle) StyleHint(sh QStyle__StyleHint, opt *QStyleOption, w *QWidget, shret *QStyleHintReturn) int {
	return (int)(C.QCommonStyle_StyleHint(this.h, (C.int)(sh), opt.cPointer(), w.cPointer(), shret.cPointer()))
}

func (this *QCommonStyle) StandardIcon(standardIcon QStyle__StandardPixmap, opt *QStyleOption, widget *QWidget) *QIcon {
	_goptr := newQIcon(C.QCommonStyle_StandardIcon(this.h, (C.int)(standardIcon), opt.cPointer(), widget.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) StandardPixmap(sp QStyle__StandardPixmap, opt *QStyleOption, widget *QWidget) *QPixmap {
	_goptr := newQPixmap(C.QCommonStyle_StandardPixmap(this.h, (C.int)(sp), opt.cPointer(), widget.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) GeneratedIconPixmap(iconMode QIcon__Mode, pixmap *QPixmap, opt *QStyleOption) *QPixmap {
	_goptr := newQPixmap(C.QCommonStyle_GeneratedIconPixmap(this.h, (C.int)(iconMode), pixmap.cPointer(), opt.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCommonStyle) LayoutSpacing(control1 QSizePolicy__ControlType, control2 QSizePolicy__ControlType, orientation Orientation, option *QStyleOption, widget *QWidget) int {
	return (int)(C.QCommonStyle_LayoutSpacing(this.h, (C.int)(control1), (C.int)(control2), (C.int)(orientation), option.cPointer(), widget.cPointer()))
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
	var _ms C.struct_miqt_string = C.QCommonStyle_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCommonStyle_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCommonStyle_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCommonStyle_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCommonStyle_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCommonStyle_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCommonStyle_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCommonStyle) callVirtualBase_DrawPrimitive(pe QStyle__PrimitiveElement, opt *QStyleOption, p *QPainter, w *QWidget) {

	C.QCommonStyle_virtualbase_DrawPrimitive(unsafe.Pointer(this.h), (C.int)(pe), opt.cPointer(), p.cPointer(), w.cPointer())

}
func (this *QCommonStyle) OnDrawPrimitive(slot func(super func(pe QStyle__PrimitiveElement, opt *QStyleOption, p *QPainter, w *QWidget), pe QStyle__PrimitiveElement, opt *QStyleOption, p *QPainter, w *QWidget)) {
	ok := C.QCommonStyle_override_virtual_DrawPrimitive(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_DrawPrimitive
func miqt_exec_callback_QCommonStyle_DrawPrimitive(self *C.QCommonStyle, cb C.intptr_t, pe C.int, opt *C.QStyleOption, p *C.QPainter, w *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pe QStyle__PrimitiveElement, opt *QStyleOption, p *QPainter, w *QWidget), pe QStyle__PrimitiveElement, opt *QStyleOption, p *QPainter, w *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QStyle__PrimitiveElement)(pe)

	slotval2 := newQStyleOption(opt)

	slotval3 := newQPainter(p)

	slotval4 := newQWidget(w)

	gofunc((&QCommonStyle{h: self}).callVirtualBase_DrawPrimitive, slotval1, slotval2, slotval3, slotval4)

}

func (this *QCommonStyle) callVirtualBase_DrawControl(element QStyle__ControlElement, opt *QStyleOption, p *QPainter, w *QWidget) {

	C.QCommonStyle_virtualbase_DrawControl(unsafe.Pointer(this.h), (C.int)(element), opt.cPointer(), p.cPointer(), w.cPointer())

}
func (this *QCommonStyle) OnDrawControl(slot func(super func(element QStyle__ControlElement, opt *QStyleOption, p *QPainter, w *QWidget), element QStyle__ControlElement, opt *QStyleOption, p *QPainter, w *QWidget)) {
	ok := C.QCommonStyle_override_virtual_DrawControl(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_DrawControl
func miqt_exec_callback_QCommonStyle_DrawControl(self *C.QCommonStyle, cb C.intptr_t, element C.int, opt *C.QStyleOption, p *C.QPainter, w *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(element QStyle__ControlElement, opt *QStyleOption, p *QPainter, w *QWidget), element QStyle__ControlElement, opt *QStyleOption, p *QPainter, w *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QStyle__ControlElement)(element)

	slotval2 := newQStyleOption(opt)

	slotval3 := newQPainter(p)

	slotval4 := newQWidget(w)

	gofunc((&QCommonStyle{h: self}).callVirtualBase_DrawControl, slotval1, slotval2, slotval3, slotval4)

}

func (this *QCommonStyle) callVirtualBase_SubElementRect(r QStyle__SubElement, opt *QStyleOption, widget *QWidget) *QRect {

	_goptr := newQRect(C.QCommonStyle_virtualbase_SubElementRect(unsafe.Pointer(this.h), (C.int)(r), opt.cPointer(), widget.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCommonStyle) OnSubElementRect(slot func(super func(r QStyle__SubElement, opt *QStyleOption, widget *QWidget) *QRect, r QStyle__SubElement, opt *QStyleOption, widget *QWidget) *QRect) {
	ok := C.QCommonStyle_override_virtual_SubElementRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_SubElementRect
func miqt_exec_callback_QCommonStyle_SubElementRect(self *C.QCommonStyle, cb C.intptr_t, r C.int, opt *C.QStyleOption, widget *C.QWidget) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(r QStyle__SubElement, opt *QStyleOption, widget *QWidget) *QRect, r QStyle__SubElement, opt *QStyleOption, widget *QWidget) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QStyle__SubElement)(r)

	slotval2 := newQStyleOption(opt)

	slotval3 := newQWidget(widget)

	virtualReturn := gofunc((&QCommonStyle{h: self}).callVirtualBase_SubElementRect, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QCommonStyle) callVirtualBase_DrawComplexControl(cc QStyle__ComplexControl, opt *QStyleOptionComplex, p *QPainter, w *QWidget) {

	C.QCommonStyle_virtualbase_DrawComplexControl(unsafe.Pointer(this.h), (C.int)(cc), opt.cPointer(), p.cPointer(), w.cPointer())

}
func (this *QCommonStyle) OnDrawComplexControl(slot func(super func(cc QStyle__ComplexControl, opt *QStyleOptionComplex, p *QPainter, w *QWidget), cc QStyle__ComplexControl, opt *QStyleOptionComplex, p *QPainter, w *QWidget)) {
	ok := C.QCommonStyle_override_virtual_DrawComplexControl(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_DrawComplexControl
func miqt_exec_callback_QCommonStyle_DrawComplexControl(self *C.QCommonStyle, cb C.intptr_t, cc C.int, opt *C.QStyleOptionComplex, p *C.QPainter, w *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cc QStyle__ComplexControl, opt *QStyleOptionComplex, p *QPainter, w *QWidget), cc QStyle__ComplexControl, opt *QStyleOptionComplex, p *QPainter, w *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QStyle__ComplexControl)(cc)

	slotval2 := newQStyleOptionComplex(opt)

	slotval3 := newQPainter(p)

	slotval4 := newQWidget(w)

	gofunc((&QCommonStyle{h: self}).callVirtualBase_DrawComplexControl, slotval1, slotval2, slotval3, slotval4)

}

func (this *QCommonStyle) callVirtualBase_HitTestComplexControl(cc QStyle__ComplexControl, opt *QStyleOptionComplex, pt *QPoint, w *QWidget) QStyle__SubControl {

	return (QStyle__SubControl)(C.QCommonStyle_virtualbase_HitTestComplexControl(unsafe.Pointer(this.h), (C.int)(cc), opt.cPointer(), pt.cPointer(), w.cPointer()))

}
func (this *QCommonStyle) OnHitTestComplexControl(slot func(super func(cc QStyle__ComplexControl, opt *QStyleOptionComplex, pt *QPoint, w *QWidget) QStyle__SubControl, cc QStyle__ComplexControl, opt *QStyleOptionComplex, pt *QPoint, w *QWidget) QStyle__SubControl) {
	ok := C.QCommonStyle_override_virtual_HitTestComplexControl(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_HitTestComplexControl
func miqt_exec_callback_QCommonStyle_HitTestComplexControl(self *C.QCommonStyle, cb C.intptr_t, cc C.int, opt *C.QStyleOptionComplex, pt *C.QPoint, w *C.QWidget) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cc QStyle__ComplexControl, opt *QStyleOptionComplex, pt *QPoint, w *QWidget) QStyle__SubControl, cc QStyle__ComplexControl, opt *QStyleOptionComplex, pt *QPoint, w *QWidget) QStyle__SubControl)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QStyle__ComplexControl)(cc)

	slotval2 := newQStyleOptionComplex(opt)

	slotval3 := newQPoint(pt)

	slotval4 := newQWidget(w)

	virtualReturn := gofunc((&QCommonStyle{h: self}).callVirtualBase_HitTestComplexControl, slotval1, slotval2, slotval3, slotval4)

	return (C.int)(virtualReturn)

}

func (this *QCommonStyle) callVirtualBase_SubControlRect(cc QStyle__ComplexControl, opt *QStyleOptionComplex, sc QStyle__SubControl, w *QWidget) *QRect {

	_goptr := newQRect(C.QCommonStyle_virtualbase_SubControlRect(unsafe.Pointer(this.h), (C.int)(cc), opt.cPointer(), (C.int)(sc), w.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCommonStyle) OnSubControlRect(slot func(super func(cc QStyle__ComplexControl, opt *QStyleOptionComplex, sc QStyle__SubControl, w *QWidget) *QRect, cc QStyle__ComplexControl, opt *QStyleOptionComplex, sc QStyle__SubControl, w *QWidget) *QRect) {
	ok := C.QCommonStyle_override_virtual_SubControlRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_SubControlRect
func miqt_exec_callback_QCommonStyle_SubControlRect(self *C.QCommonStyle, cb C.intptr_t, cc C.int, opt *C.QStyleOptionComplex, sc C.int, w *C.QWidget) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cc QStyle__ComplexControl, opt *QStyleOptionComplex, sc QStyle__SubControl, w *QWidget) *QRect, cc QStyle__ComplexControl, opt *QStyleOptionComplex, sc QStyle__SubControl, w *QWidget) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QStyle__ComplexControl)(cc)

	slotval2 := newQStyleOptionComplex(opt)

	slotval3 := (QStyle__SubControl)(sc)

	slotval4 := newQWidget(w)

	virtualReturn := gofunc((&QCommonStyle{h: self}).callVirtualBase_SubControlRect, slotval1, slotval2, slotval3, slotval4)

	return virtualReturn.cPointer()

}

func (this *QCommonStyle) callVirtualBase_SizeFromContents(ct QStyle__ContentsType, opt *QStyleOption, contentsSize *QSize, widget *QWidget) *QSize {

	_goptr := newQSize(C.QCommonStyle_virtualbase_SizeFromContents(unsafe.Pointer(this.h), (C.int)(ct), opt.cPointer(), contentsSize.cPointer(), widget.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCommonStyle) OnSizeFromContents(slot func(super func(ct QStyle__ContentsType, opt *QStyleOption, contentsSize *QSize, widget *QWidget) *QSize, ct QStyle__ContentsType, opt *QStyleOption, contentsSize *QSize, widget *QWidget) *QSize) {
	ok := C.QCommonStyle_override_virtual_SizeFromContents(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_SizeFromContents
func miqt_exec_callback_QCommonStyle_SizeFromContents(self *C.QCommonStyle, cb C.intptr_t, ct C.int, opt *C.QStyleOption, contentsSize *C.QSize, widget *C.QWidget) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ct QStyle__ContentsType, opt *QStyleOption, contentsSize *QSize, widget *QWidget) *QSize, ct QStyle__ContentsType, opt *QStyleOption, contentsSize *QSize, widget *QWidget) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QStyle__ContentsType)(ct)

	slotval2 := newQStyleOption(opt)

	slotval3 := newQSize(contentsSize)

	slotval4 := newQWidget(widget)

	virtualReturn := gofunc((&QCommonStyle{h: self}).callVirtualBase_SizeFromContents, slotval1, slotval2, slotval3, slotval4)

	return virtualReturn.cPointer()

}

func (this *QCommonStyle) callVirtualBase_PixelMetric(m QStyle__PixelMetric, opt *QStyleOption, widget *QWidget) int {

	return (int)(C.QCommonStyle_virtualbase_PixelMetric(unsafe.Pointer(this.h), (C.int)(m), opt.cPointer(), widget.cPointer()))

}
func (this *QCommonStyle) OnPixelMetric(slot func(super func(m QStyle__PixelMetric, opt *QStyleOption, widget *QWidget) int, m QStyle__PixelMetric, opt *QStyleOption, widget *QWidget) int) {
	ok := C.QCommonStyle_override_virtual_PixelMetric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_PixelMetric
func miqt_exec_callback_QCommonStyle_PixelMetric(self *C.QCommonStyle, cb C.intptr_t, m C.int, opt *C.QStyleOption, widget *C.QWidget) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(m QStyle__PixelMetric, opt *QStyleOption, widget *QWidget) int, m QStyle__PixelMetric, opt *QStyleOption, widget *QWidget) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QStyle__PixelMetric)(m)

	slotval2 := newQStyleOption(opt)

	slotval3 := newQWidget(widget)

	virtualReturn := gofunc((&QCommonStyle{h: self}).callVirtualBase_PixelMetric, slotval1, slotval2, slotval3)

	return (C.int)(virtualReturn)

}

func (this *QCommonStyle) callVirtualBase_StyleHint(sh QStyle__StyleHint, opt *QStyleOption, w *QWidget, shret *QStyleHintReturn) int {

	return (int)(C.QCommonStyle_virtualbase_StyleHint(unsafe.Pointer(this.h), (C.int)(sh), opt.cPointer(), w.cPointer(), shret.cPointer()))

}
func (this *QCommonStyle) OnStyleHint(slot func(super func(sh QStyle__StyleHint, opt *QStyleOption, w *QWidget, shret *QStyleHintReturn) int, sh QStyle__StyleHint, opt *QStyleOption, w *QWidget, shret *QStyleHintReturn) int) {
	ok := C.QCommonStyle_override_virtual_StyleHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_StyleHint
func miqt_exec_callback_QCommonStyle_StyleHint(self *C.QCommonStyle, cb C.intptr_t, sh C.int, opt *C.QStyleOption, w *C.QWidget, shret *C.QStyleHintReturn) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sh QStyle__StyleHint, opt *QStyleOption, w *QWidget, shret *QStyleHintReturn) int, sh QStyle__StyleHint, opt *QStyleOption, w *QWidget, shret *QStyleHintReturn) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QStyle__StyleHint)(sh)

	slotval2 := newQStyleOption(opt)

	slotval3 := newQWidget(w)

	slotval4 := newQStyleHintReturn(shret)

	virtualReturn := gofunc((&QCommonStyle{h: self}).callVirtualBase_StyleHint, slotval1, slotval2, slotval3, slotval4)

	return (C.int)(virtualReturn)

}

func (this *QCommonStyle) callVirtualBase_StandardIcon(standardIcon QStyle__StandardPixmap, opt *QStyleOption, widget *QWidget) *QIcon {

	_goptr := newQIcon(C.QCommonStyle_virtualbase_StandardIcon(unsafe.Pointer(this.h), (C.int)(standardIcon), opt.cPointer(), widget.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCommonStyle) OnStandardIcon(slot func(super func(standardIcon QStyle__StandardPixmap, opt *QStyleOption, widget *QWidget) *QIcon, standardIcon QStyle__StandardPixmap, opt *QStyleOption, widget *QWidget) *QIcon) {
	ok := C.QCommonStyle_override_virtual_StandardIcon(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_StandardIcon
func miqt_exec_callback_QCommonStyle_StandardIcon(self *C.QCommonStyle, cb C.intptr_t, standardIcon C.int, opt *C.QStyleOption, widget *C.QWidget) *C.QIcon {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(standardIcon QStyle__StandardPixmap, opt *QStyleOption, widget *QWidget) *QIcon, standardIcon QStyle__StandardPixmap, opt *QStyleOption, widget *QWidget) *QIcon)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QStyle__StandardPixmap)(standardIcon)

	slotval2 := newQStyleOption(opt)

	slotval3 := newQWidget(widget)

	virtualReturn := gofunc((&QCommonStyle{h: self}).callVirtualBase_StandardIcon, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QCommonStyle) callVirtualBase_StandardPixmap(sp QStyle__StandardPixmap, opt *QStyleOption, widget *QWidget) *QPixmap {

	_goptr := newQPixmap(C.QCommonStyle_virtualbase_StandardPixmap(unsafe.Pointer(this.h), (C.int)(sp), opt.cPointer(), widget.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCommonStyle) OnStandardPixmap(slot func(super func(sp QStyle__StandardPixmap, opt *QStyleOption, widget *QWidget) *QPixmap, sp QStyle__StandardPixmap, opt *QStyleOption, widget *QWidget) *QPixmap) {
	ok := C.QCommonStyle_override_virtual_StandardPixmap(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_StandardPixmap
func miqt_exec_callback_QCommonStyle_StandardPixmap(self *C.QCommonStyle, cb C.intptr_t, sp C.int, opt *C.QStyleOption, widget *C.QWidget) *C.QPixmap {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sp QStyle__StandardPixmap, opt *QStyleOption, widget *QWidget) *QPixmap, sp QStyle__StandardPixmap, opt *QStyleOption, widget *QWidget) *QPixmap)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QStyle__StandardPixmap)(sp)

	slotval2 := newQStyleOption(opt)

	slotval3 := newQWidget(widget)

	virtualReturn := gofunc((&QCommonStyle{h: self}).callVirtualBase_StandardPixmap, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QCommonStyle) callVirtualBase_GeneratedIconPixmap(iconMode QIcon__Mode, pixmap *QPixmap, opt *QStyleOption) *QPixmap {

	_goptr := newQPixmap(C.QCommonStyle_virtualbase_GeneratedIconPixmap(unsafe.Pointer(this.h), (C.int)(iconMode), pixmap.cPointer(), opt.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCommonStyle) OnGeneratedIconPixmap(slot func(super func(iconMode QIcon__Mode, pixmap *QPixmap, opt *QStyleOption) *QPixmap, iconMode QIcon__Mode, pixmap *QPixmap, opt *QStyleOption) *QPixmap) {
	ok := C.QCommonStyle_override_virtual_GeneratedIconPixmap(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_GeneratedIconPixmap
func miqt_exec_callback_QCommonStyle_GeneratedIconPixmap(self *C.QCommonStyle, cb C.intptr_t, iconMode C.int, pixmap *C.QPixmap, opt *C.QStyleOption) *C.QPixmap {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(iconMode QIcon__Mode, pixmap *QPixmap, opt *QStyleOption) *QPixmap, iconMode QIcon__Mode, pixmap *QPixmap, opt *QStyleOption) *QPixmap)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QIcon__Mode)(iconMode)

	slotval2 := newQPixmap(pixmap)

	slotval3 := newQStyleOption(opt)

	virtualReturn := gofunc((&QCommonStyle{h: self}).callVirtualBase_GeneratedIconPixmap, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QCommonStyle) callVirtualBase_LayoutSpacing(control1 QSizePolicy__ControlType, control2 QSizePolicy__ControlType, orientation Orientation, option *QStyleOption, widget *QWidget) int {

	return (int)(C.QCommonStyle_virtualbase_LayoutSpacing(unsafe.Pointer(this.h), (C.int)(control1), (C.int)(control2), (C.int)(orientation), option.cPointer(), widget.cPointer()))

}
func (this *QCommonStyle) OnLayoutSpacing(slot func(super func(control1 QSizePolicy__ControlType, control2 QSizePolicy__ControlType, orientation Orientation, option *QStyleOption, widget *QWidget) int, control1 QSizePolicy__ControlType, control2 QSizePolicy__ControlType, orientation Orientation, option *QStyleOption, widget *QWidget) int) {
	ok := C.QCommonStyle_override_virtual_LayoutSpacing(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_LayoutSpacing
func miqt_exec_callback_QCommonStyle_LayoutSpacing(self *C.QCommonStyle, cb C.intptr_t, control1 C.int, control2 C.int, orientation C.int, option *C.QStyleOption, widget *C.QWidget) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(control1 QSizePolicy__ControlType, control2 QSizePolicy__ControlType, orientation Orientation, option *QStyleOption, widget *QWidget) int, control1 QSizePolicy__ControlType, control2 QSizePolicy__ControlType, orientation Orientation, option *QStyleOption, widget *QWidget) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QSizePolicy__ControlType)(control1)

	slotval2 := (QSizePolicy__ControlType)(control2)

	slotval3 := (Orientation)(orientation)

	slotval4 := newQStyleOption(option)

	slotval5 := newQWidget(widget)

	virtualReturn := gofunc((&QCommonStyle{h: self}).callVirtualBase_LayoutSpacing, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.int)(virtualReturn)

}

func (this *QCommonStyle) callVirtualBase_Polish(param1 *QPalette) {

	C.QCommonStyle_virtualbase_Polish(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCommonStyle) OnPolish(slot func(super func(param1 *QPalette), param1 *QPalette)) {
	ok := C.QCommonStyle_override_virtual_Polish(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_Polish
func miqt_exec_callback_QCommonStyle_Polish(self *C.QCommonStyle, cb C.intptr_t, param1 *C.QPalette) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPalette), param1 *QPalette))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPalette(param1)

	gofunc((&QCommonStyle{h: self}).callVirtualBase_Polish, slotval1)

}

func (this *QCommonStyle) callVirtualBase_PolishWithApp(app *QApplication) {

	C.QCommonStyle_virtualbase_PolishWithApp(unsafe.Pointer(this.h), app.cPointer())

}
func (this *QCommonStyle) OnPolishWithApp(slot func(super func(app *QApplication), app *QApplication)) {
	ok := C.QCommonStyle_override_virtual_PolishWithApp(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_PolishWithApp
func miqt_exec_callback_QCommonStyle_PolishWithApp(self *C.QCommonStyle, cb C.intptr_t, app *C.QApplication) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(app *QApplication), app *QApplication))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQApplication(app)

	gofunc((&QCommonStyle{h: self}).callVirtualBase_PolishWithApp, slotval1)

}

func (this *QCommonStyle) callVirtualBase_PolishWithWidget(widget *QWidget) {

	C.QCommonStyle_virtualbase_PolishWithWidget(unsafe.Pointer(this.h), widget.cPointer())

}
func (this *QCommonStyle) OnPolishWithWidget(slot func(super func(widget *QWidget), widget *QWidget)) {
	ok := C.QCommonStyle_override_virtual_PolishWithWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_PolishWithWidget
func miqt_exec_callback_QCommonStyle_PolishWithWidget(self *C.QCommonStyle, cb C.intptr_t, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(widget *QWidget), widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(widget)

	gofunc((&QCommonStyle{h: self}).callVirtualBase_PolishWithWidget, slotval1)

}

func (this *QCommonStyle) callVirtualBase_Unpolish(widget *QWidget) {

	C.QCommonStyle_virtualbase_Unpolish(unsafe.Pointer(this.h), widget.cPointer())

}
func (this *QCommonStyle) OnUnpolish(slot func(super func(widget *QWidget), widget *QWidget)) {
	ok := C.QCommonStyle_override_virtual_Unpolish(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_Unpolish
func miqt_exec_callback_QCommonStyle_Unpolish(self *C.QCommonStyle, cb C.intptr_t, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(widget *QWidget), widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(widget)

	gofunc((&QCommonStyle{h: self}).callVirtualBase_Unpolish, slotval1)

}

func (this *QCommonStyle) callVirtualBase_UnpolishWithApplication(application *QApplication) {

	C.QCommonStyle_virtualbase_UnpolishWithApplication(unsafe.Pointer(this.h), application.cPointer())

}
func (this *QCommonStyle) OnUnpolishWithApplication(slot func(super func(application *QApplication), application *QApplication)) {
	ok := C.QCommonStyle_override_virtual_UnpolishWithApplication(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_UnpolishWithApplication
func miqt_exec_callback_QCommonStyle_UnpolishWithApplication(self *C.QCommonStyle, cb C.intptr_t, application *C.QApplication) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(application *QApplication), application *QApplication))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQApplication(application)

	gofunc((&QCommonStyle{h: self}).callVirtualBase_UnpolishWithApplication, slotval1)

}

func (this *QCommonStyle) callVirtualBase_ItemTextRect(fm *QFontMetrics, r *QRect, flags int, enabled bool, text string) *QRect {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	_goptr := newQRect(C.QCommonStyle_virtualbase_ItemTextRect(unsafe.Pointer(this.h), fm.cPointer(), r.cPointer(), (C.int)(flags), (C.bool)(enabled), text_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCommonStyle) OnItemTextRect(slot func(super func(fm *QFontMetrics, r *QRect, flags int, enabled bool, text string) *QRect, fm *QFontMetrics, r *QRect, flags int, enabled bool, text string) *QRect) {
	ok := C.QCommonStyle_override_virtual_ItemTextRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_ItemTextRect
func miqt_exec_callback_QCommonStyle_ItemTextRect(self *C.QCommonStyle, cb C.intptr_t, fm *C.QFontMetrics, r *C.QRect, flags C.int, enabled C.bool, text C.struct_miqt_string) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(fm *QFontMetrics, r *QRect, flags int, enabled bool, text string) *QRect, fm *QFontMetrics, r *QRect, flags int, enabled bool, text string) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFontMetrics(fm)

	slotval2 := newQRect(r)

	slotval3 := (int)(flags)

	slotval4 := (bool)(enabled)

	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval5 := text_ret

	virtualReturn := gofunc((&QCommonStyle{h: self}).callVirtualBase_ItemTextRect, slotval1, slotval2, slotval3, slotval4, slotval5)

	return virtualReturn.cPointer()

}

func (this *QCommonStyle) callVirtualBase_ItemPixmapRect(r *QRect, flags int, pixmap *QPixmap) *QRect {

	_goptr := newQRect(C.QCommonStyle_virtualbase_ItemPixmapRect(unsafe.Pointer(this.h), r.cPointer(), (C.int)(flags), pixmap.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCommonStyle) OnItemPixmapRect(slot func(super func(r *QRect, flags int, pixmap *QPixmap) *QRect, r *QRect, flags int, pixmap *QPixmap) *QRect) {
	ok := C.QCommonStyle_override_virtual_ItemPixmapRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_ItemPixmapRect
func miqt_exec_callback_QCommonStyle_ItemPixmapRect(self *C.QCommonStyle, cb C.intptr_t, r *C.QRect, flags C.int, pixmap *C.QPixmap) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(r *QRect, flags int, pixmap *QPixmap) *QRect, r *QRect, flags int, pixmap *QPixmap) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(r)

	slotval2 := (int)(flags)

	slotval3 := newQPixmap(pixmap)

	virtualReturn := gofunc((&QCommonStyle{h: self}).callVirtualBase_ItemPixmapRect, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QCommonStyle) callVirtualBase_DrawItemText(painter *QPainter, rect *QRect, flags int, pal *QPalette, enabled bool, text string, textRole QPalette__ColorRole) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	C.QCommonStyle_virtualbase_DrawItemText(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer(), (C.int)(flags), pal.cPointer(), (C.bool)(enabled), text_ms, (C.int)(textRole))

}
func (this *QCommonStyle) OnDrawItemText(slot func(super func(painter *QPainter, rect *QRect, flags int, pal *QPalette, enabled bool, text string, textRole QPalette__ColorRole), painter *QPainter, rect *QRect, flags int, pal *QPalette, enabled bool, text string, textRole QPalette__ColorRole)) {
	ok := C.QCommonStyle_override_virtual_DrawItemText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_DrawItemText
func miqt_exec_callback_QCommonStyle_DrawItemText(self *C.QCommonStyle, cb C.intptr_t, painter *C.QPainter, rect *C.QRect, flags C.int, pal *C.QPalette, enabled C.bool, text C.struct_miqt_string, textRole C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect *QRect, flags int, pal *QPalette, enabled bool, text string, textRole QPalette__ColorRole), painter *QPainter, rect *QRect, flags int, pal *QPalette, enabled bool, text string, textRole QPalette__ColorRole))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQRect(rect)

	slotval3 := (int)(flags)

	slotval4 := newQPalette(pal)

	slotval5 := (bool)(enabled)

	var text_ms C.struct_miqt_string = text
	text_ret := C.GoStringN(text_ms.data, C.int(int64(text_ms.len)))
	C.free(unsafe.Pointer(text_ms.data))
	slotval6 := text_ret
	slotval7 := (QPalette__ColorRole)(textRole)

	gofunc((&QCommonStyle{h: self}).callVirtualBase_DrawItemText, slotval1, slotval2, slotval3, slotval4, slotval5, slotval6, slotval7)

}

func (this *QCommonStyle) callVirtualBase_DrawItemPixmap(painter *QPainter, rect *QRect, alignment int, pixmap *QPixmap) {

	C.QCommonStyle_virtualbase_DrawItemPixmap(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer(), (C.int)(alignment), pixmap.cPointer())

}
func (this *QCommonStyle) OnDrawItemPixmap(slot func(super func(painter *QPainter, rect *QRect, alignment int, pixmap *QPixmap), painter *QPainter, rect *QRect, alignment int, pixmap *QPixmap)) {
	ok := C.QCommonStyle_override_virtual_DrawItemPixmap(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_DrawItemPixmap
func miqt_exec_callback_QCommonStyle_DrawItemPixmap(self *C.QCommonStyle, cb C.intptr_t, painter *C.QPainter, rect *C.QRect, alignment C.int, pixmap *C.QPixmap) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect *QRect, alignment int, pixmap *QPixmap), painter *QPainter, rect *QRect, alignment int, pixmap *QPixmap))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQRect(rect)

	slotval3 := (int)(alignment)

	slotval4 := newQPixmap(pixmap)

	gofunc((&QCommonStyle{h: self}).callVirtualBase_DrawItemPixmap, slotval1, slotval2, slotval3, slotval4)

}

func (this *QCommonStyle) callVirtualBase_StandardPalette() *QPalette {

	_goptr := newQPalette(C.QCommonStyle_virtualbase_StandardPalette(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCommonStyle) OnStandardPalette(slot func(super func() *QPalette) *QPalette) {
	ok := C.QCommonStyle_override_virtual_StandardPalette(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_StandardPalette
func miqt_exec_callback_QCommonStyle_StandardPalette(self *C.QCommonStyle, cb C.intptr_t) *C.QPalette {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPalette) *QPalette)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCommonStyle{h: self}).callVirtualBase_StandardPalette)

	return virtualReturn.cPointer()

}

func (this *QCommonStyle) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QCommonStyle_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QCommonStyle) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QCommonStyle_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_Event
func miqt_exec_callback_QCommonStyle_Event(self *C.QCommonStyle, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QCommonStyle{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCommonStyle) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QCommonStyle_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QCommonStyle) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QCommonStyle_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_EventFilter
func miqt_exec_callback_QCommonStyle_EventFilter(self *C.QCommonStyle, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QCommonStyle{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QCommonStyle) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QCommonStyle_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommonStyle) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QCommonStyle_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_TimerEvent
func miqt_exec_callback_QCommonStyle_TimerEvent(self *C.QCommonStyle, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QCommonStyle{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QCommonStyle) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QCommonStyle_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommonStyle) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QCommonStyle_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_ChildEvent
func miqt_exec_callback_QCommonStyle_ChildEvent(self *C.QCommonStyle, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QCommonStyle{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QCommonStyle) callVirtualBase_CustomEvent(event *QEvent) {

	C.QCommonStyle_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QCommonStyle) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QCommonStyle_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_CustomEvent
func miqt_exec_callback_QCommonStyle_CustomEvent(self *C.QCommonStyle, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QCommonStyle{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QCommonStyle) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QCommonStyle_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QCommonStyle) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QCommonStyle_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_ConnectNotify
func miqt_exec_callback_QCommonStyle_ConnectNotify(self *C.QCommonStyle, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QCommonStyle{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QCommonStyle) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QCommonStyle_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QCommonStyle) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QCommonStyle_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCommonStyle_DisconnectNotify
func miqt_exec_callback_QCommonStyle_DisconnectNotify(self *C.QCommonStyle, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QCommonStyle{h: self}).callVirtualBase_DisconnectNotify, slotval1)

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
