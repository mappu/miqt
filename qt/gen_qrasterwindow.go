package qt

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
	return newQMetaObject(C.QRasterWindow_MetaObject(this.h))
}

func (this *QRasterWindow) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QRasterWindow_Metacast(this.h, param1_Cstring))
}

func QRasterWindow_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRasterWindow_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRasterWindow_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRasterWindow_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRasterWindow_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRasterWindow_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRasterWindow_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRasterWindow_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRasterWindow_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRasterWindow_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRasterWindow_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRasterWindow_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRasterWindow) callVirtualBase_Metric(metric QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QRasterWindow_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(metric)))

}
func (this *QRasterWindow) OnMetric(slot func(super func(metric QPaintDevice__PaintDeviceMetric) int, metric QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QRasterWindow_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_Metric
func miqt_exec_callback_QRasterWindow_Metric(self *C.QRasterWindow, cb C.intptr_t, metric C.int) C.int {
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

	return newQPaintDevice(C.QRasterWindow_virtualbase_Redirected(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QRasterWindow) OnRedirected(slot func(super func(param1 *QPoint) *QPaintDevice, param1 *QPoint) *QPaintDevice) {
	ok := C.QRasterWindow_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_Redirected
func miqt_exec_callback_QRasterWindow_Redirected(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPoint) *QPaintDevice, param1 *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(param1)

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QRasterWindow) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QRasterWindow_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRasterWindow) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QRasterWindow_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_PaintEvent
func miqt_exec_callback_QRasterWindow_PaintEvent(self *C.QRasterWindow, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_ExposeEvent(param1 *QExposeEvent) {

	C.QRasterWindow_virtualbase_ExposeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnExposeEvent(slot func(super func(param1 *QExposeEvent), param1 *QExposeEvent)) {
	ok := C.QRasterWindow_override_virtual_ExposeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_ExposeEvent
func miqt_exec_callback_QRasterWindow_ExposeEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QExposeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QExposeEvent), param1 *QExposeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQExposeEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_ExposeEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QRasterWindow_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QRasterWindow) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QRasterWindow_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_Event
func miqt_exec_callback_QRasterWindow_Event(self *C.QRasterWindow, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (QSurface__SurfaceType)(C.QRasterWindow_virtualbase_SurfaceType(unsafe.Pointer(this.h)))

}
func (this *QRasterWindow) OnSurfaceType(slot func(super func() QSurface__SurfaceType) QSurface__SurfaceType) {
	ok := C.QRasterWindow_override_virtual_SurfaceType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_SurfaceType
func miqt_exec_callback_QRasterWindow_SurfaceType(self *C.QRasterWindow, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSurface__SurfaceType) QSurface__SurfaceType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_SurfaceType)

	return (C.int)(virtualReturn)

}

func (this *QRasterWindow) callVirtualBase_Format() *QSurfaceFormat {

	_goptr := newQSurfaceFormat(C.QRasterWindow_virtualbase_Format(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QRasterWindow) OnFormat(slot func(super func() *QSurfaceFormat) *QSurfaceFormat) {
	ok := C.QRasterWindow_override_virtual_Format(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_Format
func miqt_exec_callback_QRasterWindow_Format(self *C.QRasterWindow, cb C.intptr_t) *C.QSurfaceFormat {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSurfaceFormat) *QSurfaceFormat)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_Format)

	return virtualReturn.cPointer()

}

func (this *QRasterWindow) callVirtualBase_Size() *QSize {

	_goptr := newQSize(C.QRasterWindow_virtualbase_Size(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QRasterWindow) OnSize(slot func(super func() *QSize) *QSize) {
	ok := C.QRasterWindow_override_virtual_Size(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_Size
func miqt_exec_callback_QRasterWindow_Size(self *C.QRasterWindow, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_Size)

	return virtualReturn.cPointer()

}

func (this *QRasterWindow) callVirtualBase_AccessibleRoot() *QAccessibleInterface {

	return newQAccessibleInterface(C.QRasterWindow_virtualbase_AccessibleRoot(unsafe.Pointer(this.h)))

}
func (this *QRasterWindow) OnAccessibleRoot(slot func(super func() *QAccessibleInterface) *QAccessibleInterface) {
	ok := C.QRasterWindow_override_virtual_AccessibleRoot(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_AccessibleRoot
func miqt_exec_callback_QRasterWindow_AccessibleRoot(self *C.QRasterWindow, cb C.intptr_t) *C.QAccessibleInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QAccessibleInterface) *QAccessibleInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_AccessibleRoot)

	return virtualReturn.cPointer()

}

func (this *QRasterWindow) callVirtualBase_FocusObject() *QObject {

	return newQObject(C.QRasterWindow_virtualbase_FocusObject(unsafe.Pointer(this.h)))

}
func (this *QRasterWindow) OnFocusObject(slot func(super func() *QObject) *QObject) {
	ok := C.QRasterWindow_override_virtual_FocusObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_FocusObject
func miqt_exec_callback_QRasterWindow_FocusObject(self *C.QRasterWindow, cb C.intptr_t) *C.QObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QObject) *QObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_FocusObject)

	return virtualReturn.cPointer()

}

func (this *QRasterWindow) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QRasterWindow_virtualbase_ResizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QRasterWindow_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_ResizeEvent
func miqt_exec_callback_QRasterWindow_ResizeEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_MoveEvent(param1 *QMoveEvent) {

	C.QRasterWindow_virtualbase_MoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnMoveEvent(slot func(super func(param1 *QMoveEvent), param1 *QMoveEvent)) {
	ok := C.QRasterWindow_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_MoveEvent
func miqt_exec_callback_QRasterWindow_MoveEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMoveEvent), param1 *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_FocusInEvent(param1 *QFocusEvent) {

	C.QRasterWindow_virtualbase_FocusInEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnFocusInEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	ok := C.QRasterWindow_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_FocusInEvent
func miqt_exec_callback_QRasterWindow_FocusInEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_FocusOutEvent(param1 *QFocusEvent) {

	C.QRasterWindow_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnFocusOutEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	ok := C.QRasterWindow_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_FocusOutEvent
func miqt_exec_callback_QRasterWindow_FocusOutEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QRasterWindow_virtualbase_ShowEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QRasterWindow_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_ShowEvent
func miqt_exec_callback_QRasterWindow_ShowEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_HideEvent(param1 *QHideEvent) {

	C.QRasterWindow_virtualbase_HideEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnHideEvent(slot func(super func(param1 *QHideEvent), param1 *QHideEvent)) {
	ok := C.QRasterWindow_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_HideEvent
func miqt_exec_callback_QRasterWindow_HideEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QHideEvent), param1 *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QRasterWindow_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QRasterWindow_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_KeyPressEvent
func miqt_exec_callback_QRasterWindow_KeyPressEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_KeyReleaseEvent(param1 *QKeyEvent) {

	C.QRasterWindow_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnKeyReleaseEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QRasterWindow_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_KeyReleaseEvent
func miqt_exec_callback_QRasterWindow_KeyReleaseEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QRasterWindow_virtualbase_MousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QRasterWindow_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_MousePressEvent
func miqt_exec_callback_QRasterWindow_MousePressEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QRasterWindow_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QRasterWindow_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_MouseReleaseEvent
func miqt_exec_callback_QRasterWindow_MouseReleaseEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_MouseDoubleClickEvent(param1 *QMouseEvent) {

	C.QRasterWindow_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnMouseDoubleClickEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QRasterWindow_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_MouseDoubleClickEvent
func miqt_exec_callback_QRasterWindow_MouseDoubleClickEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QRasterWindow_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QRasterWindow_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_MouseMoveEvent
func miqt_exec_callback_QRasterWindow_MouseMoveEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QRasterWindow_virtualbase_WheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QRasterWindow_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_WheelEvent
func miqt_exec_callback_QRasterWindow_WheelEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_TouchEvent(param1 *QTouchEvent) {

	C.QRasterWindow_virtualbase_TouchEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnTouchEvent(slot func(super func(param1 *QTouchEvent), param1 *QTouchEvent)) {
	ok := C.QRasterWindow_override_virtual_TouchEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_TouchEvent
func miqt_exec_callback_QRasterWindow_TouchEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QTouchEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTouchEvent), param1 *QTouchEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTouchEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_TouchEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_TabletEvent(param1 *QTabletEvent) {

	C.QRasterWindow_virtualbase_TabletEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QRasterWindow) OnTabletEvent(slot func(super func(param1 *QTabletEvent), param1 *QTabletEvent)) {
	ok := C.QRasterWindow_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_TabletEvent
func miqt_exec_callback_QRasterWindow_TabletEvent(self *C.QRasterWindow, cb C.intptr_t, param1 *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTabletEvent), param1 *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(param1)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QRasterWindow_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QRasterWindow) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QRasterWindow_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_NativeEvent
func miqt_exec_callback_QRasterWindow_NativeEvent(self *C.QRasterWindow, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QRasterWindow) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QRasterWindow_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QRasterWindow) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QRasterWindow_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_EventFilter
func miqt_exec_callback_QRasterWindow_EventFilter(self *C.QRasterWindow, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QRasterWindow_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRasterWindow) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QRasterWindow_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_TimerEvent
func miqt_exec_callback_QRasterWindow_TimerEvent(self *C.QRasterWindow, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QRasterWindow_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRasterWindow) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QRasterWindow_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_ChildEvent
func miqt_exec_callback_QRasterWindow_ChildEvent(self *C.QRasterWindow, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_CustomEvent(event *QEvent) {

	C.QRasterWindow_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QRasterWindow) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QRasterWindow_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_CustomEvent
func miqt_exec_callback_QRasterWindow_CustomEvent(self *C.QRasterWindow, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QRasterWindow) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QRasterWindow_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QRasterWindow) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QRasterWindow_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_ConnectNotify
func miqt_exec_callback_QRasterWindow_ConnectNotify(self *C.QRasterWindow, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QRasterWindow) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QRasterWindow_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QRasterWindow) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QRasterWindow_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_DisconnectNotify
func miqt_exec_callback_QRasterWindow_DisconnectNotify(self *C.QRasterWindow, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QRasterWindow) callVirtualBase_DevType() int {

	return (int)(C.QRasterWindow_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QRasterWindow) OnDevType(slot func(super func() int) int) {
	ok := C.QRasterWindow_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_DevType
func miqt_exec_callback_QRasterWindow_DevType(self *C.QRasterWindow, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QRasterWindow) callVirtualBase_InitPainter(painter *QPainter) {

	C.QRasterWindow_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QRasterWindow) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QRasterWindow_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_InitPainter
func miqt_exec_callback_QRasterWindow_InitPainter(self *C.QRasterWindow, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QRasterWindow{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QRasterWindow) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QRasterWindow_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QRasterWindow) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QRasterWindow_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRasterWindow_SharedPainter
func miqt_exec_callback_QRasterWindow_SharedPainter(self *C.QRasterWindow, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRasterWindow{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QRasterWindow) Delete() {
	C.QRasterWindow_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRasterWindow) GoGC() {
	runtime.SetFinalizer(this, func(this *QRasterWindow) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
