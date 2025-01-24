package webkit

/*

#include "gen_qwebinspector.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebInspector struct {
	h *C.QWebInspector
	*qt.QWidget
}

func (this *QWebInspector) cPointer() *C.QWebInspector {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebInspector) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebInspector constructs the type using only CGO pointers.
func newQWebInspector(h *C.QWebInspector) *QWebInspector {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QWebInspector_virtbase(h, &outptr_QWidget)

	return &QWebInspector{h: h,
		QWidget: qt.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewQWebInspector constructs the type using only unsafe pointers.
func UnsafeNewQWebInspector(h unsafe.Pointer) *QWebInspector {
	return newQWebInspector((*C.QWebInspector)(h))
}

// NewQWebInspector constructs a new QWebInspector object.
func NewQWebInspector(parent *qt.QWidget) *QWebInspector {

	return newQWebInspector(C.QWebInspector_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQWebInspector2 constructs a new QWebInspector object.
func NewQWebInspector2() *QWebInspector {

	return newQWebInspector(C.QWebInspector_new2())
}

func (this *QWebInspector) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebInspector_MetaObject(this.h)))
}

func (this *QWebInspector) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebInspector_Metacast(this.h, param1_Cstring))
}

func QWebInspector_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebInspector_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebInspector_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebInspector_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebInspector) SetPage(page *QWebPage) {
	C.QWebInspector_SetPage(this.h, page.cPointer())
}

func (this *QWebInspector) Page() *QWebPage {
	return newQWebPage(C.QWebInspector_Page(this.h))
}

func (this *QWebInspector) SizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QWebInspector_SizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebInspector) Event(param1 *qt.QEvent) bool {
	return (bool)(C.QWebInspector_Event(this.h, (*C.QEvent)(param1.UnsafePointer())))
}

func QWebInspector_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebInspector_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebInspector_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebInspector_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebInspector_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebInspector_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebInspector_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebInspector_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebInspector) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QWebInspector_virtualbase_SizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWebInspector) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QWebInspector_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_SizeHint
func miqt_exec_callback_QWebInspector_SizeHint(self *C.QWebInspector, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebInspector{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QWebInspector) callVirtualBase_Event(param1 *qt.QEvent) bool {

	return (bool)(C.QWebInspector_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QWebInspector) OnEvent(slot func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool) {
	ok := C.QWebInspector_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_Event
func miqt_exec_callback_QWebInspector_Event(self *C.QWebInspector, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QWebInspector{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebInspector) callVirtualBase_ResizeEvent(event *qt.QResizeEvent) {

	C.QWebInspector_virtualbase_ResizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnResizeEvent(slot func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent)) {
	ok := C.QWebInspector_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_ResizeEvent
func miqt_exec_callback_QWebInspector_ResizeEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QWebInspector_virtualbase_ShowEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QWebInspector_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_ShowEvent
func miqt_exec_callback_QWebInspector_ShowEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QWebInspector_virtualbase_HideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QWebInspector_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_HideEvent
func miqt_exec_callback_QWebInspector_HideEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QWebInspector_virtualbase_CloseEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QWebInspector_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_CloseEvent
func miqt_exec_callback_QWebInspector_CloseEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_DevType() int {

	return (int)(C.QWebInspector_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QWebInspector) OnDevType(slot func(super func() int) int) {
	ok := C.QWebInspector_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_DevType
func miqt_exec_callback_QWebInspector_DevType(self *C.QWebInspector, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebInspector{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QWebInspector) callVirtualBase_SetVisible(visible bool) {

	C.QWebInspector_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QWebInspector) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QWebInspector_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_SetVisible
func miqt_exec_callback_QWebInspector_SetVisible(self *C.QWebInspector, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QWebInspector{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QWebInspector) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QWebInspector_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWebInspector) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QWebInspector_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_MinimumSizeHint
func miqt_exec_callback_QWebInspector_MinimumSizeHint(self *C.QWebInspector, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebInspector{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QWebInspector) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QWebInspector_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWebInspector) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QWebInspector_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_HeightForWidth
func miqt_exec_callback_QWebInspector_HeightForWidth(self *C.QWebInspector, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QWebInspector{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWebInspector) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QWebInspector_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QWebInspector) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QWebInspector_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_HasHeightForWidth
func miqt_exec_callback_QWebInspector_HasHeightForWidth(self *C.QWebInspector, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebInspector{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QWebInspector) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QWebInspector_virtualbase_PaintEngine(unsafe.Pointer(this.h))))

}
func (this *QWebInspector) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QWebInspector_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_PaintEngine
func miqt_exec_callback_QWebInspector_PaintEngine(self *C.QWebInspector, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebInspector{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QWebInspector) callVirtualBase_MousePressEvent(event *qt.QMouseEvent) {

	C.QWebInspector_virtualbase_MousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnMousePressEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QWebInspector_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_MousePressEvent
func miqt_exec_callback_QWebInspector_MousePressEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_MouseReleaseEvent(event *qt.QMouseEvent) {

	C.QWebInspector_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnMouseReleaseEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QWebInspector_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_MouseReleaseEvent
func miqt_exec_callback_QWebInspector_MouseReleaseEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QWebInspector_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QWebInspector_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_MouseDoubleClickEvent
func miqt_exec_callback_QWebInspector_MouseDoubleClickEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_MouseMoveEvent(event *qt.QMouseEvent) {

	C.QWebInspector_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnMouseMoveEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QWebInspector_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_MouseMoveEvent
func miqt_exec_callback_QWebInspector_MouseMoveEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.QWebInspector_virtualbase_WheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	ok := C.QWebInspector_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_WheelEvent
func miqt_exec_callback_QWebInspector_WheelEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.QWebInspector_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QWebInspector_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_KeyPressEvent
func miqt_exec_callback_QWebInspector_KeyPressEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QWebInspector_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QWebInspector_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_KeyReleaseEvent
func miqt_exec_callback_QWebInspector_KeyReleaseEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QWebInspector_virtualbase_FocusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QWebInspector_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_FocusInEvent
func miqt_exec_callback_QWebInspector_FocusInEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QWebInspector_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QWebInspector_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_FocusOutEvent
func miqt_exec_callback_QWebInspector_FocusOutEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QWebInspector_virtualbase_EnterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QWebInspector_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_EnterEvent
func miqt_exec_callback_QWebInspector_EnterEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QWebInspector_virtualbase_LeaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QWebInspector_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_LeaveEvent
func miqt_exec_callback_QWebInspector_LeaveEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_PaintEvent(event *qt.QPaintEvent) {

	C.QWebInspector_virtualbase_PaintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnPaintEvent(slot func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent)) {
	ok := C.QWebInspector_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_PaintEvent
func miqt_exec_callback_QWebInspector_PaintEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QWebInspector_virtualbase_MoveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QWebInspector_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_MoveEvent
func miqt_exec_callback_QWebInspector_MoveEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QWebInspector_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QWebInspector_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_ContextMenuEvent
func miqt_exec_callback_QWebInspector_ContextMenuEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QWebInspector_virtualbase_TabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QWebInspector_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_TabletEvent
func miqt_exec_callback_QWebInspector_TabletEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QWebInspector_virtualbase_ActionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QWebInspector_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_ActionEvent
func miqt_exec_callback_QWebInspector_ActionEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QWebInspector_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QWebInspector_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_DragEnterEvent
func miqt_exec_callback_QWebInspector_DragEnterEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QWebInspector_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QWebInspector_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_DragMoveEvent
func miqt_exec_callback_QWebInspector_DragMoveEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QWebInspector_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QWebInspector_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_DragLeaveEvent
func miqt_exec_callback_QWebInspector_DragLeaveEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QWebInspector_virtualbase_DropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QWebInspector_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_DropEvent
func miqt_exec_callback_QWebInspector_DropEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QWebInspector_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QWebInspector) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QWebInspector_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_NativeEvent
func miqt_exec_callback_QWebInspector_NativeEvent(self *C.QWebInspector, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QWebInspector{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QWebInspector) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QWebInspector_virtualbase_ChangeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QWebInspector) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QWebInspector_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_ChangeEvent
func miqt_exec_callback_QWebInspector_ChangeEvent(self *C.QWebInspector, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QWebInspector{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QWebInspector_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWebInspector) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QWebInspector_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_Metric
func miqt_exec_callback_QWebInspector_Metric(self *C.QWebInspector, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QWebInspector{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWebInspector) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QWebInspector_virtualbase_InitPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QWebInspector) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QWebInspector_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_InitPainter
func miqt_exec_callback_QWebInspector_InitPainter(self *C.QWebInspector, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QWebInspector{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QWebInspector) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QWebInspector_virtualbase_Redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QWebInspector) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QWebInspector_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_Redirected
func miqt_exec_callback_QWebInspector_Redirected(self *C.QWebInspector, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QWebInspector{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QWebInspector) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QWebInspector_virtualbase_SharedPainter(unsafe.Pointer(this.h))))

}
func (this *QWebInspector) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QWebInspector_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_SharedPainter
func miqt_exec_callback_QWebInspector_SharedPainter(self *C.QWebInspector, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWebInspector{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QWebInspector) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QWebInspector_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QWebInspector) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QWebInspector_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_InputMethodEvent
func miqt_exec_callback_QWebInspector_InputMethodEvent(self *C.QWebInspector, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QWebInspector{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QWebInspector_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWebInspector) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QWebInspector_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_InputMethodQuery
func miqt_exec_callback_QWebInspector_InputMethodQuery(self *C.QWebInspector, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QWebInspector{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QWebInspector) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QWebInspector_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QWebInspector) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QWebInspector_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_FocusNextPrevChild
func miqt_exec_callback_QWebInspector_FocusNextPrevChild(self *C.QWebInspector, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QWebInspector{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QWebInspector) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QWebInspector_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QWebInspector) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QWebInspector_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_EventFilter
func miqt_exec_callback_QWebInspector_EventFilter(self *C.QWebInspector, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QWebInspector{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QWebInspector) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QWebInspector_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QWebInspector_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_TimerEvent
func miqt_exec_callback_QWebInspector_TimerEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QWebInspector_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QWebInspector_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_ChildEvent
func miqt_exec_callback_QWebInspector_ChildEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QWebInspector_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QWebInspector) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QWebInspector_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_CustomEvent
func miqt_exec_callback_QWebInspector_CustomEvent(self *C.QWebInspector, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QWebInspector{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QWebInspector) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QWebInspector_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebInspector) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QWebInspector_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_ConnectNotify
func miqt_exec_callback_QWebInspector_ConnectNotify(self *C.QWebInspector, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebInspector{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QWebInspector) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QWebInspector_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QWebInspector) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QWebInspector_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWebInspector_DisconnectNotify
func miqt_exec_callback_QWebInspector_DisconnectNotify(self *C.QWebInspector, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QWebInspector{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QWebInspector) Delete() {
	C.QWebInspector_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebInspector) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebInspector) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
