package qt6

/*

#include "gen_qrubberband.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QRubberBand__Shape int

const (
	QRubberBand__Line      QRubberBand__Shape = 0
	QRubberBand__Rectangle QRubberBand__Shape = 1
)

type QRubberBand struct {
	h *C.QRubberBand
	*QWidget
}

func (this *QRubberBand) cPointer() *C.QRubberBand {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRubberBand) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRubberBand constructs the type using only CGO pointers.
func newQRubberBand(h *C.QRubberBand) *QRubberBand {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QRubberBand_virtbase(h, &outptr_QWidget)

	return &QRubberBand{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQRubberBand constructs the type using only unsafe pointers.
func UnsafeNewQRubberBand(h unsafe.Pointer) *QRubberBand {
	return newQRubberBand((*C.QRubberBand)(h))
}

// NewQRubberBand constructs a new QRubberBand object.
func NewQRubberBand(param1 QRubberBand__Shape) *QRubberBand {

	return newQRubberBand(C.QRubberBand_new((C.int)(param1)))
}

// NewQRubberBand2 constructs a new QRubberBand object.
func NewQRubberBand2(param1 QRubberBand__Shape, param2 *QWidget) *QRubberBand {

	return newQRubberBand(C.QRubberBand_new2((C.int)(param1), param2.cPointer()))
}

func (this *QRubberBand) MetaObject() *QMetaObject {
	return newQMetaObject(C.QRubberBand_metaObject(this.h))
}

func (this *QRubberBand) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QRubberBand_metacast(this.h, param1_Cstring))
}

func QRubberBand_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRubberBand_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRubberBand) Shape() QRubberBand__Shape {
	return (QRubberBand__Shape)(C.QRubberBand_shape(this.h))
}

func (this *QRubberBand) SetGeometry(r *QRect) {
	C.QRubberBand_setGeometry(this.h, r.cPointer())
}

func (this *QRubberBand) SetGeometry2(x int, y int, w int, h int) {
	C.QRubberBand_setGeometry2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QRubberBand) Move(x int, y int) {
	C.QRubberBand_move(this.h, (C.int)(x), (C.int)(y))
}

func (this *QRubberBand) MoveWithQPoint(p *QPoint) {
	C.QRubberBand_moveWithQPoint(this.h, p.cPointer())
}

func (this *QRubberBand) Resize(w int, h int) {
	C.QRubberBand_resize(this.h, (C.int)(w), (C.int)(h))
}

func (this *QRubberBand) ResizeWithQSize(s *QSize) {
	C.QRubberBand_resizeWithQSize(this.h, s.cPointer())
}

func QRubberBand_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRubberBand_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRubberBand_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRubberBand_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRubberBand) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QRubberBand_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QRubberBand) Onevent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QRubberBand_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_event
func miqt_exec_callback_QRubberBand_event(self *C.QRubberBand, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QRubberBand{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QRubberBand) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QRubberBand_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRubberBand) OnpaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QRubberBand_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_paintEvent
func miqt_exec_callback_QRubberBand_paintEvent(self *C.QRubberBand, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QRubberBand{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QRubberBand_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRubberBand) OnchangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QRubberBand_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_changeEvent
func miqt_exec_callback_QRubberBand_changeEvent(self *C.QRubberBand, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QRubberBand{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QRubberBand_virtualbase_showEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRubberBand) OnshowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QRubberBand_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_showEvent
func miqt_exec_callback_QRubberBand_showEvent(self *C.QRubberBand, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QRubberBand{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QRubberBand_virtualbase_resizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRubberBand) OnresizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QRubberBand_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_resizeEvent
func miqt_exec_callback_QRubberBand_resizeEvent(self *C.QRubberBand, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QRubberBand{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_MoveEvent(param1 *QMoveEvent) {

	C.QRubberBand_virtualbase_moveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRubberBand) OnmoveEvent(slot func(super func(param1 *QMoveEvent), param1 *QMoveEvent)) {
	ok := C.QRubberBand_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_moveEvent
func miqt_exec_callback_QRubberBand_moveEvent(self *C.QRubberBand, cb C.intptr_t, param1 *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMoveEvent), param1 *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(param1)

	gofunc((&QRubberBand{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_InitStyleOption(option *QStyleOptionRubberBand) {

	C.QRubberBand_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QRubberBand) OninitStyleOption(slot func(super func(option *QStyleOptionRubberBand), option *QStyleOptionRubberBand)) {
	ok := C.QRubberBand_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_initStyleOption
func miqt_exec_callback_QRubberBand_initStyleOption(self *C.QRubberBand, cb C.intptr_t, option *C.QStyleOptionRubberBand) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionRubberBand), option *QStyleOptionRubberBand))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionRubberBand(option)

	gofunc((&QRubberBand{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QRubberBand) callVirtualBase_DevType() int {

	return (int)(C.QRubberBand_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QRubberBand) OndevType(slot func(super func() int) int) {
	ok := C.QRubberBand_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_devType
func miqt_exec_callback_QRubberBand_devType(self *C.QRubberBand, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRubberBand{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QRubberBand) callVirtualBase_SetVisible(visible bool) {

	C.QRubberBand_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QRubberBand) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QRubberBand_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_setVisible
func miqt_exec_callback_QRubberBand_setVisible(self *C.QRubberBand, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QRubberBand{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QRubberBand) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QRubberBand_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QRubberBand) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QRubberBand_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_sizeHint
func miqt_exec_callback_QRubberBand_sizeHint(self *C.QRubberBand, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRubberBand{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QRubberBand) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QRubberBand_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QRubberBand) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QRubberBand_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_minimumSizeHint
func miqt_exec_callback_QRubberBand_minimumSizeHint(self *C.QRubberBand, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRubberBand{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QRubberBand) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QRubberBand_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QRubberBand) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QRubberBand_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_heightForWidth
func miqt_exec_callback_QRubberBand_heightForWidth(self *C.QRubberBand, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QRubberBand{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QRubberBand) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QRubberBand_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QRubberBand) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QRubberBand_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_hasHeightForWidth
func miqt_exec_callback_QRubberBand_hasHeightForWidth(self *C.QRubberBand, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRubberBand{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QRubberBand) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QRubberBand_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QRubberBand) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QRubberBand_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_paintEngine
func miqt_exec_callback_QRubberBand_paintEngine(self *C.QRubberBand, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRubberBand{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QRubberBand) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QRubberBand_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OnmousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QRubberBand_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_mousePressEvent
func miqt_exec_callback_QRubberBand_mousePressEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QRubberBand_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OnmouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QRubberBand_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_mouseReleaseEvent
func miqt_exec_callback_QRubberBand_mouseReleaseEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QRubberBand_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QRubberBand_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_mouseDoubleClickEvent
func miqt_exec_callback_QRubberBand_mouseDoubleClickEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QRubberBand_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OnmouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QRubberBand_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_mouseMoveEvent
func miqt_exec_callback_QRubberBand_mouseMoveEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QRubberBand_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QRubberBand_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_wheelEvent
func miqt_exec_callback_QRubberBand_wheelEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QRubberBand_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OnkeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QRubberBand_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_keyPressEvent
func miqt_exec_callback_QRubberBand_keyPressEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QRubberBand_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QRubberBand_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_keyReleaseEvent
func miqt_exec_callback_QRubberBand_keyReleaseEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QRubberBand_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QRubberBand_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_focusInEvent
func miqt_exec_callback_QRubberBand_focusInEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QRubberBand_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QRubberBand_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_focusOutEvent
func miqt_exec_callback_QRubberBand_focusOutEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QRubberBand_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OnenterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QRubberBand_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_enterEvent
func miqt_exec_callback_QRubberBand_enterEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QRubberBand_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QRubberBand_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_leaveEvent
func miqt_exec_callback_QRubberBand_leaveEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QRubberBand_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OncloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QRubberBand_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_closeEvent
func miqt_exec_callback_QRubberBand_closeEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QRubberBand_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OncontextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QRubberBand_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_contextMenuEvent
func miqt_exec_callback_QRubberBand_contextMenuEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QRubberBand_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QRubberBand_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_tabletEvent
func miqt_exec_callback_QRubberBand_tabletEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QRubberBand_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QRubberBand_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_actionEvent
func miqt_exec_callback_QRubberBand_actionEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QRubberBand_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QRubberBand_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_dragEnterEvent
func miqt_exec_callback_QRubberBand_dragEnterEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QRubberBand_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QRubberBand_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_dragMoveEvent
func miqt_exec_callback_QRubberBand_dragMoveEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QRubberBand_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QRubberBand_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_dragLeaveEvent
func miqt_exec_callback_QRubberBand_dragLeaveEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QRubberBand_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QRubberBand_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_dropEvent
func miqt_exec_callback_QRubberBand_dropEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QRubberBand_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QRubberBand_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_hideEvent
func miqt_exec_callback_QRubberBand_hideEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QRubberBand_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QRubberBand) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QRubberBand_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_nativeEvent
func miqt_exec_callback_QRubberBand_nativeEvent(self *C.QRubberBand, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QRubberBand{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QRubberBand) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QRubberBand_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QRubberBand) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QRubberBand_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_metric
func miqt_exec_callback_QRubberBand_metric(self *C.QRubberBand, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QRubberBand{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QRubberBand) callVirtualBase_InitPainter(painter *QPainter) {

	C.QRubberBand_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QRubberBand) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QRubberBand_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_initPainter
func miqt_exec_callback_QRubberBand_initPainter(self *C.QRubberBand, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QRubberBand{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QRubberBand) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QRubberBand_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QRubberBand) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QRubberBand_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_redirected
func miqt_exec_callback_QRubberBand_redirected(self *C.QRubberBand, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QRubberBand{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QRubberBand) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QRubberBand_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QRubberBand) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QRubberBand_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_sharedPainter
func miqt_exec_callback_QRubberBand_sharedPainter(self *C.QRubberBand, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRubberBand{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QRubberBand) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QRubberBand_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRubberBand) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QRubberBand_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_inputMethodEvent
func miqt_exec_callback_QRubberBand_inputMethodEvent(self *C.QRubberBand, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QRubberBand{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QRubberBand_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QRubberBand) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QRubberBand_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_inputMethodQuery
func miqt_exec_callback_QRubberBand_inputMethodQuery(self *C.QRubberBand, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QRubberBand{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QRubberBand) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QRubberBand_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QRubberBand) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QRubberBand_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_focusNextPrevChild
func miqt_exec_callback_QRubberBand_focusNextPrevChild(self *C.QRubberBand, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QRubberBand{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QRubberBand) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QRubberBand_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QRubberBand) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QRubberBand_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_eventFilter
func miqt_exec_callback_QRubberBand_eventFilter(self *C.QRubberBand, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QRubberBand{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QRubberBand) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QRubberBand_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QRubberBand_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_timerEvent
func miqt_exec_callback_QRubberBand_timerEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QRubberBand_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QRubberBand_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_childEvent
func miqt_exec_callback_QRubberBand_childEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_CustomEvent(event *QEvent) {

	C.QRubberBand_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRubberBand) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QRubberBand_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_customEvent
func miqt_exec_callback_QRubberBand_customEvent(self *C.QRubberBand, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QRubberBand{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QRubberBand) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QRubberBand_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QRubberBand) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QRubberBand_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_connectNotify
func miqt_exec_callback_QRubberBand_connectNotify(self *C.QRubberBand, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QRubberBand{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QRubberBand) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QRubberBand_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QRubberBand) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QRubberBand_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRubberBand_disconnectNotify
func miqt_exec_callback_QRubberBand_disconnectNotify(self *C.QRubberBand, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QRubberBand{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QRubberBand) Delete() {
	C.QRubberBand_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRubberBand) GoGC() {
	runtime.SetFinalizer(this, func(this *QRubberBand) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
