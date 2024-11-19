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
	h          *C.QSplashScreen
	isSubclass bool
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
func newQSplashScreen(h *C.QSplashScreen, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QSplashScreen {
	if h == nil {
		return nil
	}
	return &QSplashScreen{h: h,
		QWidget: newQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQSplashScreen constructs the type using only unsafe pointers.
func UnsafeNewQSplashScreen(h unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QSplashScreen {
	if h == nil {
		return nil
	}

	return &QSplashScreen{h: (*C.QSplashScreen)(h),
		QWidget: UnsafeNewQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQSplashScreen constructs a new QSplashScreen object.
func NewQSplashScreen(parent *QWidget) *QSplashScreen {
	var outptr_QSplashScreen *C.QSplashScreen = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QSplashScreen_new(parent.cPointer(), &outptr_QSplashScreen, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQSplashScreen(outptr_QSplashScreen, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQSplashScreen2 constructs a new QSplashScreen object.
func NewQSplashScreen2() *QSplashScreen {
	var outptr_QSplashScreen *C.QSplashScreen = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QSplashScreen_new2(&outptr_QSplashScreen, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQSplashScreen(outptr_QSplashScreen, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQSplashScreen3 constructs a new QSplashScreen object.
func NewQSplashScreen3(screen *QScreen) *QSplashScreen {
	var outptr_QSplashScreen *C.QSplashScreen = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QSplashScreen_new3(screen.cPointer(), &outptr_QSplashScreen, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQSplashScreen(outptr_QSplashScreen, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQSplashScreen4 constructs a new QSplashScreen object.
func NewQSplashScreen4(pixmap *QPixmap) *QSplashScreen {
	var outptr_QSplashScreen *C.QSplashScreen = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QSplashScreen_new4(pixmap.cPointer(), &outptr_QSplashScreen, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQSplashScreen(outptr_QSplashScreen, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQSplashScreen5 constructs a new QSplashScreen object.
func NewQSplashScreen5(pixmap *QPixmap, f WindowType) *QSplashScreen {
	var outptr_QSplashScreen *C.QSplashScreen = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QSplashScreen_new5(pixmap.cPointer(), (C.int)(f), &outptr_QSplashScreen, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQSplashScreen(outptr_QSplashScreen, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQSplashScreen6 constructs a new QSplashScreen object.
func NewQSplashScreen6(screen *QScreen, pixmap *QPixmap) *QSplashScreen {
	var outptr_QSplashScreen *C.QSplashScreen = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QSplashScreen_new6(screen.cPointer(), pixmap.cPointer(), &outptr_QSplashScreen, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQSplashScreen(outptr_QSplashScreen, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQSplashScreen7 constructs a new QSplashScreen object.
func NewQSplashScreen7(screen *QScreen, pixmap *QPixmap, f WindowType) *QSplashScreen {
	var outptr_QSplashScreen *C.QSplashScreen = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QSplashScreen_new7(screen.cPointer(), pixmap.cPointer(), (C.int)(f), &outptr_QSplashScreen, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQSplashScreen(outptr_QSplashScreen, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQSplashScreen8 constructs a new QSplashScreen object.
func NewQSplashScreen8(parent *QWidget, pixmap *QPixmap) *QSplashScreen {
	var outptr_QSplashScreen *C.QSplashScreen = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QSplashScreen_new8(parent.cPointer(), pixmap.cPointer(), &outptr_QSplashScreen, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQSplashScreen(outptr_QSplashScreen, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQSplashScreen9 constructs a new QSplashScreen object.
func NewQSplashScreen9(parent *QWidget, pixmap *QPixmap, f WindowType) *QSplashScreen {
	var outptr_QSplashScreen *C.QSplashScreen = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QSplashScreen_new9(parent.cPointer(), pixmap.cPointer(), (C.int)(f), &outptr_QSplashScreen, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQSplashScreen(outptr_QSplashScreen, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QSplashScreen) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QSplashScreen_MetaObject(this.h)))
}

func (this *QSplashScreen) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSplashScreen_Metacast(this.h, param1_Cstring))
}

func QSplashScreen_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSplashScreen_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplashScreen_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSplashScreen_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSplashScreen) SetPixmap(pixmap *QPixmap) {
	C.QSplashScreen_SetPixmap(this.h, pixmap.cPointer())
}

func (this *QSplashScreen) Pixmap() *QPixmap {
	_ret := C.QSplashScreen_Pixmap(this.h)
	_goptr := newQPixmap(_ret, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSplashScreen) Finish(w *QWidget) {
	C.QSplashScreen_Finish(this.h, w.cPointer())
}

func (this *QSplashScreen) Repaint() {
	C.QSplashScreen_Repaint(this.h)
}

func (this *QSplashScreen) Message() string {
	var _ms C.struct_miqt_string = C.QSplashScreen_Message(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSplashScreen) ShowMessage(message string) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	C.QSplashScreen_ShowMessage(this.h, message_ms)
}

func (this *QSplashScreen) ClearMessage() {
	C.QSplashScreen_ClearMessage(this.h)
}

func (this *QSplashScreen) MessageChanged(message string) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	C.QSplashScreen_MessageChanged(this.h, message_ms)
}
func (this *QSplashScreen) OnMessageChanged(slot func(message string)) {
	C.QSplashScreen_connect_MessageChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_MessageChanged
func miqt_exec_callback_QSplashScreen_MessageChanged(cb C.intptr_t, message C.struct_miqt_string) {
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
	var _ms C.struct_miqt_string = C.QSplashScreen_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplashScreen_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplashScreen_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplashScreen_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplashScreen_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplashScreen_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplashScreen_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSplashScreen) ShowMessage2(message string, alignment int) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	C.QSplashScreen_ShowMessage2(this.h, message_ms, (C.int)(alignment))
}

func (this *QSplashScreen) ShowMessage3(message string, alignment int, color *QColor) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	C.QSplashScreen_ShowMessage3(this.h, message_ms, (C.int)(alignment), color.cPointer())
}

func (this *QSplashScreen) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QSplashScreen_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QSplashScreen) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	C.QSplashScreen_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_Event
func miqt_exec_callback_QSplashScreen_Event(self *C.QSplashScreen, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSplashScreen) callVirtualBase_DrawContents(painter *QPainter) {

	C.QSplashScreen_virtualbase_DrawContents(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QSplashScreen) OnDrawContents(slot func(super func(painter *QPainter), painter *QPainter)) {
	C.QSplashScreen_override_virtual_DrawContents(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_DrawContents
func miqt_exec_callback_QSplashScreen_DrawContents(self *C.QSplashScreen, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QSplashScreen{h: self}).callVirtualBase_DrawContents, slotval1)

}

func (this *QSplashScreen) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QSplashScreen_virtualbase_MousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplashScreen) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	C.QSplashScreen_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_MousePressEvent
func miqt_exec_callback_QSplashScreen_MousePressEvent(self *C.QSplashScreen, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_DevType() int {

	return (int)(C.QSplashScreen_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QSplashScreen) OnDevType(slot func(super func() int) int) {
	C.QSplashScreen_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_DevType
func miqt_exec_callback_QSplashScreen_DevType(self *C.QSplashScreen, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QSplashScreen) callVirtualBase_SetVisible(visible bool) {

	C.QSplashScreen_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QSplashScreen) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	C.QSplashScreen_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_SetVisible
func miqt_exec_callback_QSplashScreen_SetVisible(self *C.QSplashScreen, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QSplashScreen) callVirtualBase_SizeHint() *QSize {

	_ret := C.QSplashScreen_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplashScreen) OnSizeHint(slot func(super func() *QSize) *QSize) {
	C.QSplashScreen_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_SizeHint
func miqt_exec_callback_QSplashScreen_SizeHint(self *C.QSplashScreen, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QSplashScreen) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QSplashScreen_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplashScreen) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	C.QSplashScreen_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_MinimumSizeHint
func miqt_exec_callback_QSplashScreen_MinimumSizeHint(self *C.QSplashScreen, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QSplashScreen) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QSplashScreen_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSplashScreen) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	C.QSplashScreen_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_HeightForWidth
func miqt_exec_callback_QSplashScreen_HeightForWidth(self *C.QSplashScreen, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QSplashScreen_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QSplashScreen) OnHasHeightForWidth(slot func(super func() bool) bool) {
	C.QSplashScreen_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_HasHeightForWidth
func miqt_exec_callback_QSplashScreen_HasHeightForWidth(self *C.QSplashScreen, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QSplashScreen) callVirtualBase_PaintEngine() *QPaintEngine {

	return UnsafeNewQPaintEngine(unsafe.Pointer(C.QSplashScreen_virtualbase_PaintEngine(unsafe.Pointer(this.h))))
}
func (this *QSplashScreen) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	C.QSplashScreen_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_PaintEngine
func miqt_exec_callback_QSplashScreen_PaintEngine(self *C.QSplashScreen, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QSplashScreen) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QSplashScreen_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	C.QSplashScreen_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_MouseReleaseEvent
func miqt_exec_callback_QSplashScreen_MouseReleaseEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QSplashScreen_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	C.QSplashScreen_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_MouseDoubleClickEvent
func miqt_exec_callback_QSplashScreen_MouseDoubleClickEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QSplashScreen_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	C.QSplashScreen_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_MouseMoveEvent
func miqt_exec_callback_QSplashScreen_MouseMoveEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QSplashScreen_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	C.QSplashScreen_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_WheelEvent
func miqt_exec_callback_QSplashScreen_WheelEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QSplashScreen_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	C.QSplashScreen_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_KeyPressEvent
func miqt_exec_callback_QSplashScreen_KeyPressEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QSplashScreen_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	C.QSplashScreen_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_KeyReleaseEvent
func miqt_exec_callback_QSplashScreen_KeyReleaseEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QSplashScreen_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	C.QSplashScreen_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_FocusInEvent
func miqt_exec_callback_QSplashScreen_FocusInEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QSplashScreen_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	C.QSplashScreen_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_FocusOutEvent
func miqt_exec_callback_QSplashScreen_FocusOutEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_EnterEvent(event *QEvent) {

	C.QSplashScreen_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QSplashScreen_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_EnterEvent
func miqt_exec_callback_QSplashScreen_EnterEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSplashScreen{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QSplashScreen_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QSplashScreen_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_LeaveEvent
func miqt_exec_callback_QSplashScreen_LeaveEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSplashScreen{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QSplashScreen_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	C.QSplashScreen_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_PaintEvent
func miqt_exec_callback_QSplashScreen_PaintEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(event), nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QSplashScreen_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	C.QSplashScreen_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_MoveEvent
func miqt_exec_callback_QSplashScreen_MoveEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMoveEvent(unsafe.Pointer(event), nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QSplashScreen_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	C.QSplashScreen_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_ResizeEvent
func miqt_exec_callback_QSplashScreen_ResizeEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(event), nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QSplashScreen_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	C.QSplashScreen_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_CloseEvent
func miqt_exec_callback_QSplashScreen_CloseEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQCloseEvent(unsafe.Pointer(event), nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QSplashScreen_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	C.QSplashScreen_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_ContextMenuEvent
func miqt_exec_callback_QSplashScreen_ContextMenuEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QSplashScreen_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	C.QSplashScreen_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_TabletEvent
func miqt_exec_callback_QSplashScreen_TabletEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTabletEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QSplashScreen_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	C.QSplashScreen_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_ActionEvent
func miqt_exec_callback_QSplashScreen_ActionEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQActionEvent(unsafe.Pointer(event), nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QSplashScreen_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	C.QSplashScreen_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_DragEnterEvent
func miqt_exec_callback_QSplashScreen_DragEnterEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragEnterEvent(unsafe.Pointer(event), nil, nil, nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QSplashScreen_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	C.QSplashScreen_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_DragMoveEvent
func miqt_exec_callback_QSplashScreen_DragMoveEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QSplashScreen_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	C.QSplashScreen_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_DragLeaveEvent
func miqt_exec_callback_QSplashScreen_DragLeaveEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(event), nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QSplashScreen_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	C.QSplashScreen_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_DropEvent
func miqt_exec_callback_QSplashScreen_DropEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(event), nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QSplashScreen_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	C.QSplashScreen_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_ShowEvent
func miqt_exec_callback_QSplashScreen_ShowEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQShowEvent(unsafe.Pointer(event), nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QSplashScreen_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplashScreen) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	C.QSplashScreen_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_HideEvent
func miqt_exec_callback_QSplashScreen_HideEvent(self *C.QSplashScreen, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQHideEvent(unsafe.Pointer(event), nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QSplashScreen_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QSplashScreen) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	C.QSplashScreen_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_NativeEvent
func miqt_exec_callback_QSplashScreen_NativeEvent(self *C.QSplashScreen, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	C.QSplashScreen_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplashScreen) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	C.QSplashScreen_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_ChangeEvent
func miqt_exec_callback_QSplashScreen_ChangeEvent(self *C.QSplashScreen, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QSplashScreen{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QSplashScreen_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSplashScreen) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	C.QSplashScreen_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_Metric
func miqt_exec_callback_QSplashScreen_Metric(self *C.QSplashScreen, cb C.intptr_t, param1 C.int) C.int {
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

	C.QSplashScreen_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QSplashScreen) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	C.QSplashScreen_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_InitPainter
func miqt_exec_callback_QSplashScreen_InitPainter(self *C.QSplashScreen, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QSplashScreen{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QSplashScreen) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return UnsafeNewQPaintDevice(unsafe.Pointer(C.QSplashScreen_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer())))
}
func (this *QSplashScreen) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	C.QSplashScreen_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_Redirected
func miqt_exec_callback_QSplashScreen_Redirected(self *C.QSplashScreen, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSplashScreen) callVirtualBase_SharedPainter() *QPainter {

	return UnsafeNewQPainter(unsafe.Pointer(C.QSplashScreen_virtualbase_SharedPainter(unsafe.Pointer(this.h))))
}
func (this *QSplashScreen) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	C.QSplashScreen_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_SharedPainter
func miqt_exec_callback_QSplashScreen_SharedPainter(self *C.QSplashScreen, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QSplashScreen) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QSplashScreen_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplashScreen) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	C.QSplashScreen_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_InputMethodEvent
func miqt_exec_callback_QSplashScreen_InputMethodEvent(self *C.QSplashScreen, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(param1), nil)

	gofunc((&QSplashScreen{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QSplashScreen) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_ret := C.QSplashScreen_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplashScreen) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	C.QSplashScreen_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_InputMethodQuery
func miqt_exec_callback_QSplashScreen_InputMethodQuery(self *C.QSplashScreen, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QSplashScreen_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QSplashScreen) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	C.QSplashScreen_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplashScreen_FocusNextPrevChild
func miqt_exec_callback_QSplashScreen_FocusNextPrevChild(self *C.QSplashScreen, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QSplashScreen{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QSplashScreen) Delete() {
	C.QSplashScreen_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSplashScreen) GoGC() {
	runtime.SetFinalizer(this, func(this *QSplashScreen) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
