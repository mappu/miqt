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
	h          *C.QDesktopWidget
	isSubclass bool
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
func newQDesktopWidget(h *C.QDesktopWidget, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QDesktopWidget {
	if h == nil {
		return nil
	}
	return &QDesktopWidget{h: h,
		QWidget: newQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQDesktopWidget constructs the type using only unsafe pointers.
func UnsafeNewQDesktopWidget(h unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QDesktopWidget {
	if h == nil {
		return nil
	}

	return &QDesktopWidget{h: (*C.QDesktopWidget)(h),
		QWidget: UnsafeNewQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQDesktopWidget constructs a new QDesktopWidget object.
func NewQDesktopWidget() *QDesktopWidget {
	var outptr_QDesktopWidget *C.QDesktopWidget = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QDesktopWidget_new(&outptr_QDesktopWidget, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQDesktopWidget(outptr_QDesktopWidget, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QDesktopWidget) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QDesktopWidget_MetaObject(this.h)))
}

func (this *QDesktopWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDesktopWidget_Metacast(this.h, param1_Cstring))
}

func QDesktopWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesktopWidget_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesktopWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesktopWidget_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesktopWidget) ScreenNumber() int {
	return (int)(C.QDesktopWidget_ScreenNumber(this.h))
}

func (this *QDesktopWidget) ScreenGeometry(widget *QWidget) *QRect {
	_ret := C.QDesktopWidget_ScreenGeometry(this.h, widget.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) AvailableGeometry(widget *QWidget) *QRect {
	_ret := C.QDesktopWidget_AvailableGeometry(this.h, widget.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) IsVirtualDesktop() bool {
	return (bool)(C.QDesktopWidget_IsVirtualDesktop(this.h))
}

func (this *QDesktopWidget) NumScreens() int {
	return (int)(C.QDesktopWidget_NumScreens(this.h))
}

func (this *QDesktopWidget) ScreenCount() int {
	return (int)(C.QDesktopWidget_ScreenCount(this.h))
}

func (this *QDesktopWidget) PrimaryScreen() int {
	return (int)(C.QDesktopWidget_PrimaryScreen(this.h))
}

func (this *QDesktopWidget) ScreenNumberWithQPoint(param1 *QPoint) int {
	return (int)(C.QDesktopWidget_ScreenNumberWithQPoint(this.h, param1.cPointer()))
}

func (this *QDesktopWidget) Screen() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QDesktopWidget_Screen(this.h)), nil, nil)
}

func (this *QDesktopWidget) ScreenGeometry2() *QRect {
	_ret := C.QDesktopWidget_ScreenGeometry2(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) ScreenGeometryWithPoint(point *QPoint) *QRect {
	_ret := C.QDesktopWidget_ScreenGeometryWithPoint(this.h, point.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) AvailableGeometry2() *QRect {
	_ret := C.QDesktopWidget_AvailableGeometry2(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) AvailableGeometryWithPoint(point *QPoint) *QRect {
	_ret := C.QDesktopWidget_AvailableGeometryWithPoint(this.h, point.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) Resized(param1 int) {
	C.QDesktopWidget_Resized(this.h, (C.int)(param1))
}
func (this *QDesktopWidget) OnResized(slot func(param1 int)) {
	C.QDesktopWidget_connect_Resized(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_Resized
func miqt_exec_callback_QDesktopWidget_Resized(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QDesktopWidget) WorkAreaResized(param1 int) {
	C.QDesktopWidget_WorkAreaResized(this.h, (C.int)(param1))
}
func (this *QDesktopWidget) OnWorkAreaResized(slot func(param1 int)) {
	C.QDesktopWidget_connect_WorkAreaResized(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_WorkAreaResized
func miqt_exec_callback_QDesktopWidget_WorkAreaResized(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QDesktopWidget) ScreenCountChanged(param1 int) {
	C.QDesktopWidget_ScreenCountChanged(this.h, (C.int)(param1))
}
func (this *QDesktopWidget) OnScreenCountChanged(slot func(param1 int)) {
	C.QDesktopWidget_connect_ScreenCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_ScreenCountChanged
func miqt_exec_callback_QDesktopWidget_ScreenCountChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QDesktopWidget) PrimaryScreenChanged() {
	C.QDesktopWidget_PrimaryScreenChanged(this.h)
}
func (this *QDesktopWidget) OnPrimaryScreenChanged(slot func()) {
	C.QDesktopWidget_connect_PrimaryScreenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_PrimaryScreenChanged
func miqt_exec_callback_QDesktopWidget_PrimaryScreenChanged(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QDesktopWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesktopWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesktopWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesktopWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesktopWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesktopWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesktopWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesktopWidget) ScreenNumber1(widget *QWidget) int {
	return (int)(C.QDesktopWidget_ScreenNumber1(this.h, widget.cPointer()))
}

func (this *QDesktopWidget) Screen1(screen int) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QDesktopWidget_Screen1(this.h, (C.int)(screen))), nil, nil)
}

func (this *QDesktopWidget) ScreenGeometry1(screen int) *QRect {
	_ret := C.QDesktopWidget_ScreenGeometry1(this.h, (C.int)(screen))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) AvailableGeometry1(screen int) *QRect {
	_ret := C.QDesktopWidget_AvailableGeometry1(this.h, (C.int)(screen))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) callVirtualBase_ResizeEvent(e *QResizeEvent) {

	C.QDesktopWidget_virtualbase_ResizeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QDesktopWidget) OnResizeEvent(slot func(super func(e *QResizeEvent), e *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_ResizeEvent
func miqt_exec_callback_QDesktopWidget_ResizeEvent(self *C.QDesktopWidget, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QResizeEvent), e *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(e), nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_DevType() int {

	return (int)(C.QDesktopWidget_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QDesktopWidget) OnDevType(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_DevType
func miqt_exec_callback_QDesktopWidget_DevType(self *C.QDesktopWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QDesktopWidget) callVirtualBase_SetVisible(visible bool) {

	C.QDesktopWidget_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QDesktopWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_SetVisible
func miqt_exec_callback_QDesktopWidget_SetVisible(self *C.QDesktopWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_SizeHint() *QSize {

	_ret := C.QDesktopWidget_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDesktopWidget) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_SizeHint
func miqt_exec_callback_QDesktopWidget_SizeHint(self *C.QDesktopWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QDesktopWidget) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QDesktopWidget_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDesktopWidget) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_MinimumSizeHint
func miqt_exec_callback_QDesktopWidget_MinimumSizeHint(self *C.QDesktopWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QDesktopWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QDesktopWidget_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDesktopWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_HeightForWidth
func miqt_exec_callback_QDesktopWidget_HeightForWidth(self *C.QDesktopWidget, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QDesktopWidget_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QDesktopWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_HasHeightForWidth
func miqt_exec_callback_QDesktopWidget_HasHeightForWidth(self *C.QDesktopWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QDesktopWidget) callVirtualBase_PaintEngine() *QPaintEngine {

	return UnsafeNewQPaintEngine(unsafe.Pointer(C.QDesktopWidget_virtualbase_PaintEngine(unsafe.Pointer(this.h))))
}
func (this *QDesktopWidget) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_PaintEngine
func miqt_exec_callback_QDesktopWidget_PaintEngine(self *C.QDesktopWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QDesktopWidget) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QDesktopWidget_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QDesktopWidget) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_Event
func miqt_exec_callback_QDesktopWidget_Event(self *C.QDesktopWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesktopWidget) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QDesktopWidget_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_MousePressEvent
func miqt_exec_callback_QDesktopWidget_MousePressEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QDesktopWidget_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_MouseReleaseEvent
func miqt_exec_callback_QDesktopWidget_MouseReleaseEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QDesktopWidget_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_MouseDoubleClickEvent
func miqt_exec_callback_QDesktopWidget_MouseDoubleClickEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QDesktopWidget_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_MouseMoveEvent
func miqt_exec_callback_QDesktopWidget_MouseMoveEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QDesktopWidget_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_WheelEvent
func miqt_exec_callback_QDesktopWidget_WheelEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QDesktopWidget_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_KeyPressEvent
func miqt_exec_callback_QDesktopWidget_KeyPressEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QDesktopWidget_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_KeyReleaseEvent
func miqt_exec_callback_QDesktopWidget_KeyReleaseEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QDesktopWidget_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_FocusInEvent
func miqt_exec_callback_QDesktopWidget_FocusInEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QDesktopWidget_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_FocusOutEvent
func miqt_exec_callback_QDesktopWidget_FocusOutEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_EnterEvent(event *QEvent) {

	C.QDesktopWidget_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_EnterEvent
func miqt_exec_callback_QDesktopWidget_EnterEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QDesktopWidget_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_LeaveEvent
func miqt_exec_callback_QDesktopWidget_LeaveEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QDesktopWidget_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_PaintEvent
func miqt_exec_callback_QDesktopWidget_PaintEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(event), nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QDesktopWidget_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_MoveEvent
func miqt_exec_callback_QDesktopWidget_MoveEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMoveEvent(unsafe.Pointer(event), nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QDesktopWidget_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_CloseEvent
func miqt_exec_callback_QDesktopWidget_CloseEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQCloseEvent(unsafe.Pointer(event), nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QDesktopWidget_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_ContextMenuEvent
func miqt_exec_callback_QDesktopWidget_ContextMenuEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QDesktopWidget_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_TabletEvent
func miqt_exec_callback_QDesktopWidget_TabletEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTabletEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QDesktopWidget_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_ActionEvent
func miqt_exec_callback_QDesktopWidget_ActionEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQActionEvent(unsafe.Pointer(event), nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QDesktopWidget_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_DragEnterEvent
func miqt_exec_callback_QDesktopWidget_DragEnterEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragEnterEvent(unsafe.Pointer(event), nil, nil, nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QDesktopWidget_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_DragMoveEvent
func miqt_exec_callback_QDesktopWidget_DragMoveEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QDesktopWidget_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_DragLeaveEvent
func miqt_exec_callback_QDesktopWidget_DragLeaveEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(event), nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QDesktopWidget_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_DropEvent
func miqt_exec_callback_QDesktopWidget_DropEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(event), nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QDesktopWidget_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_ShowEvent
func miqt_exec_callback_QDesktopWidget_ShowEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQShowEvent(unsafe.Pointer(event), nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QDesktopWidget_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDesktopWidget) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_HideEvent
func miqt_exec_callback_QDesktopWidget_HideEvent(self *C.QDesktopWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQHideEvent(unsafe.Pointer(event), nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QDesktopWidget_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QDesktopWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_NativeEvent
func miqt_exec_callback_QDesktopWidget_NativeEvent(self *C.QDesktopWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	C.QDesktopWidget_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDesktopWidget) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_ChangeEvent
func miqt_exec_callback_QDesktopWidget_ChangeEvent(self *C.QDesktopWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QDesktopWidget_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDesktopWidget) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_Metric
func miqt_exec_callback_QDesktopWidget_Metric(self *C.QDesktopWidget, cb C.intptr_t, param1 C.int) C.int {
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

	C.QDesktopWidget_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QDesktopWidget) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_InitPainter
func miqt_exec_callback_QDesktopWidget_InitPainter(self *C.QDesktopWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return UnsafeNewQPaintDevice(unsafe.Pointer(C.QDesktopWidget_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer())))
}
func (this *QDesktopWidget) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_Redirected
func miqt_exec_callback_QDesktopWidget_Redirected(self *C.QDesktopWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDesktopWidget) callVirtualBase_SharedPainter() *QPainter {

	return UnsafeNewQPainter(unsafe.Pointer(C.QDesktopWidget_virtualbase_SharedPainter(unsafe.Pointer(this.h))))
}
func (this *QDesktopWidget) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_SharedPainter
func miqt_exec_callback_QDesktopWidget_SharedPainter(self *C.QDesktopWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QDesktopWidget) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QDesktopWidget_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDesktopWidget) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_InputMethodEvent
func miqt_exec_callback_QDesktopWidget_InputMethodEvent(self *C.QDesktopWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(param1), nil)

	gofunc((&QDesktopWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QDesktopWidget) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_ret := C.QDesktopWidget_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDesktopWidget) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_InputMethodQuery
func miqt_exec_callback_QDesktopWidget_InputMethodQuery(self *C.QDesktopWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QDesktopWidget_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QDesktopWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QDesktopWidget_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_FocusNextPrevChild
func miqt_exec_callback_QDesktopWidget_FocusNextPrevChild(self *C.QDesktopWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QDesktopWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QDesktopWidget) Delete() {
	C.QDesktopWidget_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesktopWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesktopWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
