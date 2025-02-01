package qt

/*

#include "gen_qsplashscreen.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSplashScreen struct {
	h *C.QSplashScreen
	*QWidget
}

func (this *QSplashScreen) cPointer() *C.QSplashScreen {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSplashScreen) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSplashScreen constructs the type using only CGO pointers.
func newQSplashScreen(h *C.QSplashScreen) *QSplashScreen {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QSplashScreen_virtbase(h, &outptr_QWidget)

	return &QSplashScreen{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQSplashScreen constructs the type using only unsafe pointers.
func UnsafeNewQSplashScreen(h unsafe.Pointer) *QSplashScreen {
	return newQSplashScreen((*C.QSplashScreen)(h))
}

// NewQSplashScreen constructs a new QSplashScreen object.
func NewQSplashScreen(parent *QWidget) *QSplashScreen {

	return newQSplashScreen(C.QSplashScreen_new(parent.cPointer()))
}

// NewQSplashScreen2 constructs a new QSplashScreen object.
func NewQSplashScreen2() *QSplashScreen {

	return newQSplashScreen(C.QSplashScreen_new2())
}

// NewQSplashScreen3 constructs a new QSplashScreen object.
func NewQSplashScreen3(screen *QScreen) *QSplashScreen {

	return newQSplashScreen(C.QSplashScreen_new3(screen.cPointer()))
}

// NewQSplashScreen4 constructs a new QSplashScreen object.
func NewQSplashScreen4(pixmap *QPixmap) *QSplashScreen {

	return newQSplashScreen(C.QSplashScreen_new4(pixmap.cPointer()))
}

// NewQSplashScreen5 constructs a new QSplashScreen object.
func NewQSplashScreen5(pixmap *QPixmap, f WindowType) *QSplashScreen {

	return newQSplashScreen(C.QSplashScreen_new5(pixmap.cPointer(), (C.int)(f)))
}

// NewQSplashScreen6 constructs a new QSplashScreen object.
func NewQSplashScreen6(screen *QScreen, pixmap *QPixmap) *QSplashScreen {

	return newQSplashScreen(C.QSplashScreen_new6(screen.cPointer(), pixmap.cPointer()))
}

// NewQSplashScreen7 constructs a new QSplashScreen object.
func NewQSplashScreen7(screen *QScreen, pixmap *QPixmap, f WindowType) *QSplashScreen {

	return newQSplashScreen(C.QSplashScreen_new7(screen.cPointer(), pixmap.cPointer(), (C.int)(f)))
}

// NewQSplashScreen8 constructs a new QSplashScreen object.
func NewQSplashScreen8(parent *QWidget, pixmap *QPixmap) *QSplashScreen {

	return newQSplashScreen(C.QSplashScreen_new8(parent.cPointer(), pixmap.cPointer()))
}

// NewQSplashScreen9 constructs a new QSplashScreen object.
func NewQSplashScreen9(parent *QWidget, pixmap *QPixmap, f WindowType) *QSplashScreen {

	return newQSplashScreen(C.QSplashScreen_new9(parent.cPointer(), pixmap.cPointer(), (C.int)(f)))
}

func (this *QSplashScreen) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSplashScreen_metaObject(this.h))
}

func (this *QSplashScreen) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSplashScreen_metacast(this.h, param1_Cstring))
}

func QSplashScreen_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSplashScreen_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplashScreen_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSplashScreen_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSplashScreen) SetPixmap(pixmap *QPixmap) {
	C.QSplashScreen_setPixmap(this.h, pixmap.cPointer())
}

func (this *QSplashScreen) Pixmap() *QPixmap {
	_goptr := newQPixmap(C.QSplashScreen_pixmap(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSplashScreen) Finish(w *QWidget) {
	C.QSplashScreen_finish(this.h, w.cPointer())
}

func (this *QSplashScreen) Repaint() {
	C.QSplashScreen_repaint(this.h)
}

func (this *QSplashScreen) Message() string {
	var _ms C.struct_miqt_string = C.QSplashScreen_message(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSplashScreen) ShowMessage(message string) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	C.QSplashScreen_showMessage(this.h, message_ms)
}

func (this *QSplashScreen) ClearMessage() {
	C.QSplashScreen_clearMessage(this.h)
}

func (this *QSplashScreen) MessageChanged(message string) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	C.QSplashScreen_messageChanged(this.h, message_ms)
}
func (this *QSplashScreen) OnMessageChanged(slot func(message string)) {
	C.QSplashScreen_connect_messageChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_messageChanged
func miqt_exec_callback_QSplashScreen_messageChanged(cb C.intptr_t, message C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(message string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var message_ms C.struct_miqt_string = message
	message_ret := C.GoStringN(message_ms.data, C.int(int64(message_ms.len)))
	C.free(unsafe.Pointer(message_ms.data))
	slotval1 := message_ret

	gofunc(slotval1)
}

func QSplashScreen_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplashScreen_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplashScreen_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplashScreen_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplashScreen_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplashScreen_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplashScreen_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplashScreen_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSplashScreen) ShowMessage2(message string, alignment int) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	C.QSplashScreen_showMessage2(this.h, message_ms, (C.int)(alignment))
}

func (this *QSplashScreen) ShowMessage3(message string, alignment int, color *QColor) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	C.QSplashScreen_showMessage3(this.h, message_ms, (C.int)(alignment), color.cPointer())
}

func (this *QSplashScreen) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QSplashScreen_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QSplashScreen) Onevent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QSplashScreen_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_event
func miqt_exec_callback_QSplashScreen_event(self *C.QSplashScreen, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSplashScreen) callVirtualBase_DrawContents(painter *QPainter) {

	C.QSplashScreen_virtualbase_drawContents(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QSplashScreen) OndrawContents(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QSplashScreen_override_virtual_drawContents(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_drawContents
func miqt_exec_callback_QSplashScreen_drawContents(self *C.QSplashScreen, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_DrawContents, slotval1)

}

func (this *QSplashScreen) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QSplashScreen_virtualbase_mousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplashScreen) OnmousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QSplashScreen_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_mousePressEvent
func miqt_exec_callback_QSplashScreen_mousePressEvent(self *C.QSplashScreen, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_DevType() int {

	return (int)(C.QSplashScreen_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QSplashScreen) OndevType(slot func(super func() int) int) {
	ok := C.QSplashScreen_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_devType
func miqt_exec_callback_QSplashScreen_devType(self *C.QSplashScreen, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QSplashScreen) callVirtualBase_SetVisible(visible bool) {

	C.QSplashScreen_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QSplashScreen) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QSplashScreen_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_setVisible
func miqt_exec_callback_QSplashScreen_setVisible(self *C.QSplashScreen, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QSplashScreen) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QSplashScreen_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplashScreen) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSplashScreen_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_sizeHint
func miqt_exec_callback_QSplashScreen_sizeHint(self *C.QSplashScreen, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QSplashScreen) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QSplashScreen_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplashScreen) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSplashScreen_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_minimumSizeHint
func miqt_exec_callback_QSplashScreen_minimumSizeHint(self *C.QSplashScreen, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QSplashScreen) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QSplashScreen_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSplashScreen) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QSplashScreen_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_heightForWidth
func miqt_exec_callback_QSplashScreen_heightForWidth(self *C.QSplashScreen, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSplashScreen) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QSplashScreen_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QSplashScreen) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QSplashScreen_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_hasHeightForWidth
func miqt_exec_callback_QSplashScreen_hasHeightForWidth(self *C.QSplashScreen, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QSplashScreen) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QSplashScreen_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QSplashScreen) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QSplashScreen_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_paintEngine
func miqt_exec_callback_QSplashScreen_paintEngine(self *C.QSplashScreen, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QSplashScreen) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QSplashScreen_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnmouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSplashScreen_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_mouseReleaseEvent
func miqt_exec_callback_QSplashScreen_mouseReleaseEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QSplashScreen_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSplashScreen_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_mouseDoubleClickEvent
func miqt_exec_callback_QSplashScreen_mouseDoubleClickEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QSplashScreen_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnmouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSplashScreen_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_mouseMoveEvent
func miqt_exec_callback_QSplashScreen_mouseMoveEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QSplashScreen_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QSplashScreen_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_wheelEvent
func miqt_exec_callback_QSplashScreen_wheelEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QSplashScreen_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnkeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QSplashScreen_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_keyPressEvent
func miqt_exec_callback_QSplashScreen_keyPressEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QSplashScreen_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QSplashScreen_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_keyReleaseEvent
func miqt_exec_callback_QSplashScreen_keyReleaseEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QSplashScreen_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSplashScreen_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_focusInEvent
func miqt_exec_callback_QSplashScreen_focusInEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QSplashScreen_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSplashScreen_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_focusOutEvent
func miqt_exec_callback_QSplashScreen_focusOutEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_EnterEvent(event *QEvent) {

	C.QSplashScreen_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnenterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSplashScreen_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_enterEvent
func miqt_exec_callback_QSplashScreen_enterEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QSplashScreen_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSplashScreen_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_leaveEvent
func miqt_exec_callback_QSplashScreen_leaveEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QSplashScreen_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnpaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QSplashScreen_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_paintEvent
func miqt_exec_callback_QSplashScreen_paintEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QSplashScreen_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QSplashScreen_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_moveEvent
func miqt_exec_callback_QSplashScreen_moveEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QSplashScreen_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnresizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QSplashScreen_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_resizeEvent
func miqt_exec_callback_QSplashScreen_resizeEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QSplashScreen_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OncloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QSplashScreen_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_closeEvent
func miqt_exec_callback_QSplashScreen_closeEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QSplashScreen_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OncontextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QSplashScreen_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_contextMenuEvent
func miqt_exec_callback_QSplashScreen_contextMenuEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QSplashScreen_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QSplashScreen_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_tabletEvent
func miqt_exec_callback_QSplashScreen_tabletEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QSplashScreen_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QSplashScreen_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_actionEvent
func miqt_exec_callback_QSplashScreen_actionEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QSplashScreen_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QSplashScreen_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_dragEnterEvent
func miqt_exec_callback_QSplashScreen_dragEnterEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QSplashScreen_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QSplashScreen_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_dragMoveEvent
func miqt_exec_callback_QSplashScreen_dragMoveEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QSplashScreen_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QSplashScreen_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_dragLeaveEvent
func miqt_exec_callback_QSplashScreen_dragLeaveEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QSplashScreen_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QSplashScreen_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_dropEvent
func miqt_exec_callback_QSplashScreen_dropEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QSplashScreen_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnshowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QSplashScreen_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_showEvent
func miqt_exec_callback_QSplashScreen_showEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QSplashScreen_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QSplashScreen_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_hideEvent
func miqt_exec_callback_QSplashScreen_hideEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QSplashScreen_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QSplashScreen) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QSplashScreen_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_nativeEvent
func miqt_exec_callback_QSplashScreen_nativeEvent(self *C.QSplashScreen, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSplashScreen) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QSplashScreen_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplashScreen) OnchangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QSplashScreen_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_changeEvent
func miqt_exec_callback_QSplashScreen_changeEvent(self *C.QSplashScreen, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QSplashScreen_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSplashScreen) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QSplashScreen_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_metric
func miqt_exec_callback_QSplashScreen_metric(self *C.QSplashScreen, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSplashScreen) callVirtualBase_InitPainter(painter *QPainter) {

	C.QSplashScreen_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QSplashScreen) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QSplashScreen_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_initPainter
func miqt_exec_callback_QSplashScreen_initPainter(self *C.QSplashScreen, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QSplashScreen) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QSplashScreen_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QSplashScreen) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QSplashScreen_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_redirected
func miqt_exec_callback_QSplashScreen_redirected(self *C.QSplashScreen, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSplashScreen) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QSplashScreen_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QSplashScreen) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QSplashScreen_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_sharedPainter
func miqt_exec_callback_QSplashScreen_sharedPainter(self *C.QSplashScreen, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QSplashScreen) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QSplashScreen_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplashScreen) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QSplashScreen_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_inputMethodEvent
func miqt_exec_callback_QSplashScreen_inputMethodEvent(self *C.QSplashScreen, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QSplashScreen_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplashScreen) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QSplashScreen_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_inputMethodQuery
func miqt_exec_callback_QSplashScreen_inputMethodQuery(self *C.QSplashScreen, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSplashScreen) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QSplashScreen_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QSplashScreen) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QSplashScreen_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_focusNextPrevChild
func miqt_exec_callback_QSplashScreen_focusNextPrevChild(self *C.QSplashScreen, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSplashScreen) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSplashScreen_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSplashScreen) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSplashScreen_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_eventFilter
func miqt_exec_callback_QSplashScreen_eventFilter(self *C.QSplashScreen, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSplashScreen) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSplashScreen_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSplashScreen_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_timerEvent
func miqt_exec_callback_QSplashScreen_timerEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSplashScreen_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSplashScreen_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_childEvent
func miqt_exec_callback_QSplashScreen_childEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSplashScreen_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSplashScreen_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_customEvent
func miqt_exec_callback_QSplashScreen_customEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSplashScreen_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSplashScreen) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSplashScreen_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_connectNotify
func miqt_exec_callback_QSplashScreen_connectNotify(self *C.QSplashScreen, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSplashScreen) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSplashScreen_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSplashScreen) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSplashScreen_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplashScreen_disconnectNotify
func miqt_exec_callback_QSplashScreen_disconnectNotify(self *C.QSplashScreen, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSplashScreen) Delete() {
	C.QSplashScreen_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSplashScreen) GoGC() {
	runtime.SetFinalizer(this, func(this *QSplashScreen) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
