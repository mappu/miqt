package qt

/*

#include "gen_qdesktopwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesktopWidget struct {
	h *C.QDesktopWidget
	*QWidget
}

func (this *QDesktopWidget) cPointer() *C.QDesktopWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesktopWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesktopWidget constructs the type using only CGO pointers.
func newQDesktopWidget(h *C.QDesktopWidget) *QDesktopWidget {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QDesktopWidget_virtbase(h, &outptr_QWidget)

	return &QDesktopWidget{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQDesktopWidget constructs the type using only unsafe pointers.
func UnsafeNewQDesktopWidget(h unsafe.Pointer) *QDesktopWidget {
	return newQDesktopWidget((*C.QDesktopWidget)(h))
}

// NewQDesktopWidget constructs a new QDesktopWidget object.
func NewQDesktopWidget() *QDesktopWidget {

	return newQDesktopWidget(C.QDesktopWidget_new())
}

func (this *QDesktopWidget) MetaObject() *QMetaObject {
	return newQMetaObject(C.QDesktopWidget_metaObject(this.h))
}

func (this *QDesktopWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDesktopWidget_metacast(this.h, param1_Cstring))
}

func QDesktopWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesktopWidget_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesktopWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesktopWidget_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesktopWidget) ScreenNumber() int {
	return (int)(C.QDesktopWidget_screenNumber(this.h))
}

func (this *QDesktopWidget) ScreenGeometry(widget *QWidget) *QRect {
	_goptr := newQRect(C.QDesktopWidget_screenGeometry(this.h, widget.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) AvailableGeometry(widget *QWidget) *QRect {
	_goptr := newQRect(C.QDesktopWidget_availableGeometry(this.h, widget.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) IsVirtualDesktop() bool {
	return (bool)(C.QDesktopWidget_isVirtualDesktop(this.h))
}

func (this *QDesktopWidget) NumScreens() int {
	return (int)(C.QDesktopWidget_numScreens(this.h))
}

func (this *QDesktopWidget) ScreenCount() int {
	return (int)(C.QDesktopWidget_screenCount(this.h))
}

func (this *QDesktopWidget) PrimaryScreen() int {
	return (int)(C.QDesktopWidget_primaryScreen(this.h))
}

func (this *QDesktopWidget) ScreenNumberWithQPoint(param1 *QPoint) int {
	return (int)(C.QDesktopWidget_screenNumberWithQPoint(this.h, param1.cPointer()))
}

func (this *QDesktopWidget) Screen() *QWidget {
	return newQWidget(C.QDesktopWidget_screen(this.h))
}

func (this *QDesktopWidget) ScreenGeometry2() *QRect {
	_goptr := newQRect(C.QDesktopWidget_screenGeometry2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) ScreenGeometryWithPoint(point *QPoint) *QRect {
	_goptr := newQRect(C.QDesktopWidget_screenGeometryWithPoint(this.h, point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) AvailableGeometry2() *QRect {
	_goptr := newQRect(C.QDesktopWidget_availableGeometry2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) AvailableGeometryWithPoint(point *QPoint) *QRect {
	_goptr := newQRect(C.QDesktopWidget_availableGeometryWithPoint(this.h, point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) Resized(param1 int) {
	C.QDesktopWidget_resized(this.h, (C.int)(param1))
}
func (this *QDesktopWidget) OnResized(slot func(param1 int)) {
	C.QDesktopWidget_connect_resized(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_resized
func miqt_exec_callback_QDesktopWidget_resized(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QDesktopWidget) WorkAreaResized(param1 int) {
	C.QDesktopWidget_workAreaResized(this.h, (C.int)(param1))
}
func (this *QDesktopWidget) OnWorkAreaResized(slot func(param1 int)) {
	C.QDesktopWidget_connect_workAreaResized(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_workAreaResized
func miqt_exec_callback_QDesktopWidget_workAreaResized(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QDesktopWidget) ScreenCountChanged(param1 int) {
	C.QDesktopWidget_screenCountChanged(this.h, (C.int)(param1))
}
func (this *QDesktopWidget) OnScreenCountChanged(slot func(param1 int)) {
	C.QDesktopWidget_connect_screenCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_screenCountChanged
func miqt_exec_callback_QDesktopWidget_screenCountChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QDesktopWidget) PrimaryScreenChanged() {
	C.QDesktopWidget_primaryScreenChanged(this.h)
}
func (this *QDesktopWidget) OnPrimaryScreenChanged(slot func()) {
	C.QDesktopWidget_connect_primaryScreenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_primaryScreenChanged
func miqt_exec_callback_QDesktopWidget_primaryScreenChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QDesktopWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesktopWidget_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesktopWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesktopWidget_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesktopWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesktopWidget_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesktopWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesktopWidget_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesktopWidget) ScreenNumber1(widget *QWidget) int {
	return (int)(C.QDesktopWidget_screenNumber1(this.h, widget.cPointer()))
}

func (this *QDesktopWidget) Screen1(screen int) *QWidget {
	return newQWidget(C.QDesktopWidget_screen1(this.h, (C.int)(screen)))
}

func (this *QDesktopWidget) ScreenGeometry1(screen int) *QRect {
	_goptr := newQRect(C.QDesktopWidget_screenGeometry1(this.h, (C.int)(screen)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) AvailableGeometry1(screen int) *QRect {
	_goptr := newQRect(C.QDesktopWidget_availableGeometry1(this.h, (C.int)(screen)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) callVirtualBase_ResizeEvent(e *QResizeEvent) {

	C.QDesktopWidget_virtualbase_resizeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QDesktopWidget) OnResizeEvent(slot func(super func(e *QResizeEvent), e *QResizeEvent)) {
	ok := C.QDesktopWidget_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_resizeEvent
func miqt_exec_callback_QDesktopWidget_resizeEvent(self *C.QDesktopWidget, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QResizeEvent), e *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(e)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_DevType() int {

	return (int)(C.QDesktopWidget_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QDesktopWidget) OnDevType(slot func(super func() int) int) {
	ok := C.QDesktopWidget_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_devType
func miqt_exec_callback_QDesktopWidget_devType(self *C.QDesktopWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QDesktopWidget) callVirtualBase_SetVisible(visible bool) {

	C.QDesktopWidget_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QDesktopWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QDesktopWidget_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_setVisible
func miqt_exec_callback_QDesktopWidget_setVisible(self *C.QDesktopWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QDesktopWidget_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDesktopWidget) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDesktopWidget_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_sizeHint
func miqt_exec_callback_QDesktopWidget_sizeHint(self *C.QDesktopWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QDesktopWidget) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QDesktopWidget_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDesktopWidget) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDesktopWidget_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_minimumSizeHint
func miqt_exec_callback_QDesktopWidget_minimumSizeHint(self *C.QDesktopWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QDesktopWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QDesktopWidget_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDesktopWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QDesktopWidget_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_heightForWidth
func miqt_exec_callback_QDesktopWidget_heightForWidth(self *C.QDesktopWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDesktopWidget) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QDesktopWidget_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QDesktopWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QDesktopWidget_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_hasHeightForWidth
func miqt_exec_callback_QDesktopWidget_hasHeightForWidth(self *C.QDesktopWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QDesktopWidget) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QDesktopWidget_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QDesktopWidget) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QDesktopWidget_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_paintEngine
func miqt_exec_callback_QDesktopWidget_paintEngine(self *C.QDesktopWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QDesktopWidget) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QDesktopWidget_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QDesktopWidget) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QDesktopWidget_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_event
func miqt_exec_callback_QDesktopWidget_event(self *C.QDesktopWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesktopWidget) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QDesktopWidget_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDesktopWidget_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_mousePressEvent
func miqt_exec_callback_QDesktopWidget_mousePressEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QDesktopWidget_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDesktopWidget_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_mouseReleaseEvent
func miqt_exec_callback_QDesktopWidget_mouseReleaseEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QDesktopWidget_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDesktopWidget_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_mouseDoubleClickEvent
func miqt_exec_callback_QDesktopWidget_mouseDoubleClickEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QDesktopWidget_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDesktopWidget_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_mouseMoveEvent
func miqt_exec_callback_QDesktopWidget_mouseMoveEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QDesktopWidget_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QDesktopWidget_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_wheelEvent
func miqt_exec_callback_QDesktopWidget_wheelEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QDesktopWidget_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDesktopWidget_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_keyPressEvent
func miqt_exec_callback_QDesktopWidget_keyPressEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QDesktopWidget_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDesktopWidget_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_keyReleaseEvent
func miqt_exec_callback_QDesktopWidget_keyReleaseEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QDesktopWidget_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDesktopWidget_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_focusInEvent
func miqt_exec_callback_QDesktopWidget_focusInEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QDesktopWidget_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDesktopWidget_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_focusOutEvent
func miqt_exec_callback_QDesktopWidget_focusOutEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_EnterEvent(event *QEvent) {

	C.QDesktopWidget_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDesktopWidget_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_enterEvent
func miqt_exec_callback_QDesktopWidget_enterEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QDesktopWidget_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDesktopWidget_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_leaveEvent
func miqt_exec_callback_QDesktopWidget_leaveEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QDesktopWidget_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QDesktopWidget_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_paintEvent
func miqt_exec_callback_QDesktopWidget_paintEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QDesktopWidget_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QDesktopWidget_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_moveEvent
func miqt_exec_callback_QDesktopWidget_moveEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QDesktopWidget_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QDesktopWidget_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_closeEvent
func miqt_exec_callback_QDesktopWidget_closeEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QDesktopWidget_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QDesktopWidget_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_contextMenuEvent
func miqt_exec_callback_QDesktopWidget_contextMenuEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QDesktopWidget_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QDesktopWidget_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_tabletEvent
func miqt_exec_callback_QDesktopWidget_tabletEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QDesktopWidget_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QDesktopWidget_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_actionEvent
func miqt_exec_callback_QDesktopWidget_actionEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QDesktopWidget_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QDesktopWidget_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_dragEnterEvent
func miqt_exec_callback_QDesktopWidget_dragEnterEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QDesktopWidget_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QDesktopWidget_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_dragMoveEvent
func miqt_exec_callback_QDesktopWidget_dragMoveEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QDesktopWidget_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QDesktopWidget_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_dragLeaveEvent
func miqt_exec_callback_QDesktopWidget_dragLeaveEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QDesktopWidget_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QDesktopWidget_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_dropEvent
func miqt_exec_callback_QDesktopWidget_dropEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QDesktopWidget_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QDesktopWidget_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_showEvent
func miqt_exec_callback_QDesktopWidget_showEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QDesktopWidget_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QDesktopWidget_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_hideEvent
func miqt_exec_callback_QDesktopWidget_hideEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QDesktopWidget_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QDesktopWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QDesktopWidget_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_nativeEvent
func miqt_exec_callback_QDesktopWidget_nativeEvent(self *C.QDesktopWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDesktopWidget) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QDesktopWidget_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDesktopWidget) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QDesktopWidget_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_changeEvent
func miqt_exec_callback_QDesktopWidget_changeEvent(self *C.QDesktopWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QDesktopWidget_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDesktopWidget) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QDesktopWidget_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_metric
func miqt_exec_callback_QDesktopWidget_metric(self *C.QDesktopWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDesktopWidget) callVirtualBase_InitPainter(painter *QPainter) {

	C.QDesktopWidget_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QDesktopWidget) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QDesktopWidget_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_initPainter
func miqt_exec_callback_QDesktopWidget_initPainter(self *C.QDesktopWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QDesktopWidget_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QDesktopWidget) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QDesktopWidget_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_redirected
func miqt_exec_callback_QDesktopWidget_redirected(self *C.QDesktopWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDesktopWidget) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QDesktopWidget_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QDesktopWidget) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QDesktopWidget_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_sharedPainter
func miqt_exec_callback_QDesktopWidget_sharedPainter(self *C.QDesktopWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QDesktopWidget) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QDesktopWidget_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDesktopWidget) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QDesktopWidget_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_inputMethodEvent
func miqt_exec_callback_QDesktopWidget_inputMethodEvent(self *C.QDesktopWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QDesktopWidget_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDesktopWidget) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QDesktopWidget_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_inputMethodQuery
func miqt_exec_callback_QDesktopWidget_inputMethodQuery(self *C.QDesktopWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDesktopWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QDesktopWidget_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QDesktopWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QDesktopWidget_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_focusNextPrevChild
func miqt_exec_callback_QDesktopWidget_focusNextPrevChild(self *C.QDesktopWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesktopWidget) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QDesktopWidget_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QDesktopWidget) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QDesktopWidget_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_eventFilter
func miqt_exec_callback_QDesktopWidget_eventFilter(self *C.QDesktopWidget, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDesktopWidget) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QDesktopWidget_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QDesktopWidget_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_timerEvent
func miqt_exec_callback_QDesktopWidget_timerEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QDesktopWidget_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QDesktopWidget_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_childEvent
func miqt_exec_callback_QDesktopWidget_childEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_CustomEvent(event *QEvent) {

	C.QDesktopWidget_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDesktopWidget_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_customEvent
func miqt_exec_callback_QDesktopWidget_customEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QDesktopWidget_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDesktopWidget) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDesktopWidget_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_connectNotify
func miqt_exec_callback_QDesktopWidget_connectNotify(self *C.QDesktopWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QDesktopWidget_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDesktopWidget) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDesktopWidget_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesktopWidget_disconnectNotify
func miqt_exec_callback_QDesktopWidget_disconnectNotify(self *C.QDesktopWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDesktopWidget) Delete() {
	C.QDesktopWidget_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesktopWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesktopWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
