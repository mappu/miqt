package qt6

/*

#include "gen_qrasterwindow.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QRasterWindow struct {
	h *C.QRasterWindow
	*QPaintDeviceWindow
}

func (this *QRasterWindow) cPointer() *C.QRasterWindow {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRasterWindow) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRasterWindow constructs the type using only CGO pointers.
func newQRasterWindow(h *C.QRasterWindow) *QRasterWindow {
	if h == nil {
		return nil
	}
	var outptr_QPaintDeviceWindow *C.QPaintDeviceWindow = nil
	C.QRasterWindow_virtbase(h, &outptr_QPaintDeviceWindow)

	return &QRasterWindow{h: h,
		QPaintDeviceWindow: newQPaintDeviceWindow(outptr_QPaintDeviceWindow)}
}

// UnsafeNewQRasterWindow constructs the type using only unsafe pointers.
func UnsafeNewQRasterWindow(h unsafe.Pointer) *QRasterWindow {
	return newQRasterWindow((*C.QRasterWindow)(h))
}

// NewQRasterWindow constructs a new QRasterWindow object.
func NewQRasterWindow() *QRasterWindow {

	return newQRasterWindow(C.QRasterWindow_new())
}

// NewQRasterWindow2 constructs a new QRasterWindow object.
func NewQRasterWindow2(parent *QWindow) *QRasterWindow {

	return newQRasterWindow(C.QRasterWindow_new2(parent.cPointer()))
}

func (this *QRasterWindow) MetaObject() *QMetaObject {
	return newQMetaObject(C.QRasterWindow_metaObject(this.h))
}

func (this *QRasterWindow) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QRasterWindow_metacast(this.h, param1_Cstring))
}

func QRasterWindow_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRasterWindow_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRasterWindow_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRasterWindow_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRasterWindow_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRasterWindow_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRasterWindow) callVirtualBase_Metric(metric QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QRasterWindow_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(metric)))

}
func (this *QRasterWindow) Onmetric(slot func(super func(metric QPaintDevice__PaintDeviceMetric) int, metric QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QRasterWindow_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_metric
func miqt_exec_callback_QRasterWindow_metric(self *C.QRasterWindow, cb C.intptr_t, metric C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(metric QPaintDevice__PaintDeviceMetric) int, metric QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(metric)

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QRasterWindow) callVirtualBase_Redirected(param1 *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QRasterWindow_virtualbase_redirected(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QRasterWindow) Onredirected(slot func(super func(param1 *QPoint) *QPaintDevice, param1 *QPoint) *QPaintDevice) {
	ok := C.QRasterWindow_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_redirected
func miqt_exec_callback_QRasterWindow_redirected(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPoint) *QPaintDevice, param1 *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(param1)

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QRasterWindow) callVirtualBase_ExposeEvent(param1 *QExposeEvent) {

	C.QRasterWindow_virtualbase_exposeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnexposeEvent(slot func(super func(param1 *QExposeEvent), param1 *QExposeEvent)) {
	ok := C.QRasterWindow_override_virtual_exposeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_exposeEvent
func miqt_exec_callback_QRasterWindow_exposeEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QExposeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QExposeEvent), param1 *QExposeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQExposeEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_ExposeEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QRasterWindow_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRasterWindow) OnpaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QRasterWindow_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_paintEvent
func miqt_exec_callback_QRasterWindow_paintEvent(self *C.QRasterWindow, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QRasterWindow_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QRasterWindow) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QRasterWindow_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_event
func miqt_exec_callback_QRasterWindow_event(self *C.QRasterWindow, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QRasterWindow) callVirtualBase_SurfaceType() QSurface__SurfaceType {

	return (QSurface__SurfaceType)(C.QRasterWindow_virtualbase_surfaceType(unsafe.Pointer(this.h)))

}
func (this *QRasterWindow) OnsurfaceType(slot func(super func() QSurface__SurfaceType) QSurface__SurfaceType) {
	ok := C.QRasterWindow_override_virtual_surfaceType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_surfaceType
func miqt_exec_callback_QRasterWindow_surfaceType(self *C.QRasterWindow, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSurface__SurfaceType) QSurface__SurfaceType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_SurfaceType)

	return (C.int)(virtualReturn)

}

func (this *QRasterWindow) callVirtualBase_Format() *QSurfaceFormat {

	_goptr := newQSurfaceFormat(C.QRasterWindow_virtualbase_format(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QRasterWindow) Onformat(slot func(super func() *QSurfaceFormat) *QSurfaceFormat) {
	ok := C.QRasterWindow_override_virtual_format(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_format
func miqt_exec_callback_QRasterWindow_format(self *C.QRasterWindow, cb C.intptr_t) *C.QSurfaceFormat {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSurfaceFormat) *QSurfaceFormat)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_Format)

	return virtualReturn.cPointer()

}

func (this *QRasterWindow) callVirtualBase_Size() *QSize {

	_goptr := newQSize(C.QRasterWindow_virtualbase_size(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QRasterWindow) Onsize(slot func(super func() *QSize) *QSize) {
	ok := C.QRasterWindow_override_virtual_size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_size
func miqt_exec_callback_QRasterWindow_size(self *C.QRasterWindow, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_Size)

	return virtualReturn.cPointer()

}

func (this *QRasterWindow) callVirtualBase_AccessibleRoot() *QAccessibleInterface {

	return newQAccessibleInterface(C.QRasterWindow_virtualbase_accessibleRoot(unsafe.Pointer(this.h)))

}
func (this *QRasterWindow) OnaccessibleRoot(slot func(super func() *QAccessibleInterface) *QAccessibleInterface) {
	ok := C.QRasterWindow_override_virtual_accessibleRoot(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_accessibleRoot
func miqt_exec_callback_QRasterWindow_accessibleRoot(self *C.QRasterWindow, cb C.intptr_t) *C.QAccessibleInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QAccessibleInterface) *QAccessibleInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_AccessibleRoot)

	return virtualReturn.cPointer()

}

func (this *QRasterWindow) callVirtualBase_FocusObject() *QObject {

	return newQObject(C.QRasterWindow_virtualbase_focusObject(unsafe.Pointer(this.h)))

}
func (this *QRasterWindow) OnfocusObject(slot func(super func() *QObject) *QObject) {
	ok := C.QRasterWindow_override_virtual_focusObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_focusObject
func miqt_exec_callback_QRasterWindow_focusObject(self *C.QRasterWindow, cb C.intptr_t) *C.QObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QObject) *QObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_FocusObject)

	return virtualReturn.cPointer()

}

func (this *QRasterWindow) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QRasterWindow_virtualbase_resizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnresizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QRasterWindow_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_resizeEvent
func miqt_exec_callback_QRasterWindow_resizeEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_MoveEvent(param1 *QMoveEvent) {

	C.QRasterWindow_virtualbase_moveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnmoveEvent(slot func(super func(param1 *QMoveEvent), param1 *QMoveEvent)) {
	ok := C.QRasterWindow_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_moveEvent
func miqt_exec_callback_QRasterWindow_moveEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMoveEvent), param1 *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_FocusInEvent(param1 *QFocusEvent) {

	C.QRasterWindow_virtualbase_focusInEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnfocusInEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	ok := C.QRasterWindow_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_focusInEvent
func miqt_exec_callback_QRasterWindow_focusInEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_FocusOutEvent(param1 *QFocusEvent) {

	C.QRasterWindow_virtualbase_focusOutEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnfocusOutEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	ok := C.QRasterWindow_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_focusOutEvent
func miqt_exec_callback_QRasterWindow_focusOutEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QRasterWindow_virtualbase_showEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnshowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QRasterWindow_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_showEvent
func miqt_exec_callback_QRasterWindow_showEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_HideEvent(param1 *QHideEvent) {

	C.QRasterWindow_virtualbase_hideEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnhideEvent(slot func(super func(param1 *QHideEvent), param1 *QHideEvent)) {
	ok := C.QRasterWindow_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_hideEvent
func miqt_exec_callback_QRasterWindow_hideEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QHideEvent), param1 *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_CloseEvent(param1 *QCloseEvent) {

	C.QRasterWindow_virtualbase_closeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OncloseEvent(slot func(super func(param1 *QCloseEvent), param1 *QCloseEvent)) {
	ok := C.QRasterWindow_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_closeEvent
func miqt_exec_callback_QRasterWindow_closeEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QCloseEvent), param1 *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QRasterWindow_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnkeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QRasterWindow_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_keyPressEvent
func miqt_exec_callback_QRasterWindow_keyPressEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_KeyReleaseEvent(param1 *QKeyEvent) {

	C.QRasterWindow_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnkeyReleaseEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QRasterWindow_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_keyReleaseEvent
func miqt_exec_callback_QRasterWindow_keyReleaseEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QRasterWindow_virtualbase_mousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnmousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QRasterWindow_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_mousePressEvent
func miqt_exec_callback_QRasterWindow_mousePressEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QRasterWindow_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnmouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QRasterWindow_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_mouseReleaseEvent
func miqt_exec_callback_QRasterWindow_mouseReleaseEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_MouseDoubleClickEvent(param1 *QMouseEvent) {

	C.QRasterWindow_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnmouseDoubleClickEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QRasterWindow_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_mouseDoubleClickEvent
func miqt_exec_callback_QRasterWindow_mouseDoubleClickEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QRasterWindow_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnmouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QRasterWindow_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_mouseMoveEvent
func miqt_exec_callback_QRasterWindow_mouseMoveEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QRasterWindow_virtualbase_wheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnwheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QRasterWindow_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_wheelEvent
func miqt_exec_callback_QRasterWindow_wheelEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_TouchEvent(param1 *QTouchEvent) {

	C.QRasterWindow_virtualbase_touchEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OntouchEvent(slot func(super func(param1 *QTouchEvent), param1 *QTouchEvent)) {
	ok := C.QRasterWindow_override_virtual_touchEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_touchEvent
func miqt_exec_callback_QRasterWindow_touchEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QTouchEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTouchEvent), param1 *QTouchEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTouchEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_TouchEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_TabletEvent(param1 *QTabletEvent) {

	C.QRasterWindow_virtualbase_tabletEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OntabletEvent(slot func(super func(param1 *QTabletEvent), param1 *QTabletEvent)) {
	ok := C.QRasterWindow_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_tabletEvent
func miqt_exec_callback_QRasterWindow_tabletEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTabletEvent), param1 *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QRasterWindow_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QRasterWindow) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QRasterWindow_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_nativeEvent
func miqt_exec_callback_QRasterWindow_nativeEvent(self *C.QRasterWindow, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QRasterWindow) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QRasterWindow_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QRasterWindow) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QRasterWindow_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_eventFilter
func miqt_exec_callback_QRasterWindow_eventFilter(self *C.QRasterWindow, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QRasterWindow) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QRasterWindow_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRasterWindow) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QRasterWindow_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_timerEvent
func miqt_exec_callback_QRasterWindow_timerEvent(self *C.QRasterWindow, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QRasterWindow_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRasterWindow) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QRasterWindow_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_childEvent
func miqt_exec_callback_QRasterWindow_childEvent(self *C.QRasterWindow, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_CustomEvent(event *QEvent) {

	C.QRasterWindow_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRasterWindow) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QRasterWindow_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_customEvent
func miqt_exec_callback_QRasterWindow_customEvent(self *C.QRasterWindow, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QRasterWindow_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QRasterWindow) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QRasterWindow_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_connectNotify
func miqt_exec_callback_QRasterWindow_connectNotify(self *C.QRasterWindow, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QRasterWindow) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QRasterWindow_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QRasterWindow) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QRasterWindow_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_disconnectNotify
func miqt_exec_callback_QRasterWindow_disconnectNotify(self *C.QRasterWindow, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QRasterWindow) callVirtualBase_DevType() int {

	return (int)(C.QRasterWindow_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QRasterWindow) OndevType(slot func(super func() int) int) {
	ok := C.QRasterWindow_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_devType
func miqt_exec_callback_QRasterWindow_devType(self *C.QRasterWindow, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QRasterWindow) callVirtualBase_InitPainter(painter *QPainter) {

	C.QRasterWindow_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QRasterWindow) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QRasterWindow_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_initPainter
func miqt_exec_callback_QRasterWindow_initPainter(self *C.QRasterWindow, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QRasterWindow) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QRasterWindow_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QRasterWindow) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QRasterWindow_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_sharedPainter
func miqt_exec_callback_QRasterWindow_sharedPainter(self *C.QRasterWindow, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QRasterWindow) Delete() {
	C.QRasterWindow_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRasterWindow) GoGC() {
	runtime.SetFinalizer(this, func(this *QRasterWindow) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
