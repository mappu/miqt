package multimedia

/*

#include "gen_qvideowidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QVideoWidget struct {
	h *C.QVideoWidget
	*qt6.QWidget
}

func (this *QVideoWidget) cPointer() *C.QVideoWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVideoWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVideoWidget constructs the type using only CGO pointers.
func newQVideoWidget(h *C.QVideoWidget) *QVideoWidget {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QVideoWidget_virtbase(h, &outptr_QWidget)

	return &QVideoWidget{h: h,
		QWidget: qt6.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewQVideoWidget constructs the type using only unsafe pointers.
func UnsafeNewQVideoWidget(h unsafe.Pointer) *QVideoWidget {
	return newQVideoWidget((*C.QVideoWidget)(h))
}

// NewQVideoWidget constructs a new QVideoWidget object.
func NewQVideoWidget(parent *qt6.QWidget) *QVideoWidget {

	return newQVideoWidget(C.QVideoWidget_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQVideoWidget2 constructs a new QVideoWidget object.
func NewQVideoWidget2() *QVideoWidget {

	return newQVideoWidget(C.QVideoWidget_new2())
}

func (this *QVideoWidget) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QVideoWidget_MetaObject(this.h)))
}

func (this *QVideoWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVideoWidget_Metacast(this.h, param1_Cstring))
}

func QVideoWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWidget_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoWidget) VideoSink() *QVideoSink {
	return newQVideoSink(C.QVideoWidget_VideoSink(this.h))
}

func (this *QVideoWidget) AspectRatioMode() qt6.AspectRatioMode {
	return (qt6.AspectRatioMode)(C.QVideoWidget_AspectRatioMode(this.h))
}

func (this *QVideoWidget) SizeHint() *qt6.QSize {
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QVideoWidget_SizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVideoWidget) SetFullScreen(fullScreen bool) {
	C.QVideoWidget_SetFullScreen(this.h, (C.bool)(fullScreen))
}

func (this *QVideoWidget) SetAspectRatioMode(mode qt6.AspectRatioMode) {
	C.QVideoWidget_SetAspectRatioMode(this.h, (C.int)(mode))
}

func (this *QVideoWidget) FullScreenChanged(fullScreen bool) {
	C.QVideoWidget_FullScreenChanged(this.h, (C.bool)(fullScreen))
}
func (this *QVideoWidget) OnFullScreenChanged(slot func(fullScreen bool)) {
	C.QVideoWidget_connect_FullScreenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWidget_FullScreenChanged
func miqt_exec_callback_QVideoWidget_FullScreenChanged(cb C.intptr_t, fullScreen C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(fullScreen bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fullScreen)

	gofunc(slotval1)
}

func (this *QVideoWidget) AspectRatioModeChanged(mode qt6.AspectRatioMode) {
	C.QVideoWidget_AspectRatioModeChanged(this.h, (C.int)(mode))
}
func (this *QVideoWidget) OnAspectRatioModeChanged(slot func(mode qt6.AspectRatioMode)) {
	C.QVideoWidget_connect_AspectRatioModeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QVideoWidget_AspectRatioModeChanged
func miqt_exec_callback_QVideoWidget_AspectRatioModeChanged(cb C.intptr_t, mode C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mode qt6.AspectRatioMode))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.AspectRatioMode)(mode)

	gofunc(slotval1)
}

func QVideoWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVideoWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVideoWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVideoWidget) callVirtualBase_SizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QVideoWidget_virtualbase_SizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QVideoWidget) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QVideoWidget_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_SizeHint
func miqt_exec_callback_QVideoWidget_SizeHint(self *C.QVideoWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVideoWidget{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QVideoWidget) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QVideoWidget_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QVideoWidget) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QVideoWidget_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_Event
func miqt_exec_callback_QVideoWidget_Event(self *C.QVideoWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QVideoWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QVideoWidget) callVirtualBase_ShowEvent(event *qt6.QShowEvent) {

	C.QVideoWidget_virtualbase_ShowEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnShowEvent(slot func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent)) {
	ok := C.QVideoWidget_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_ShowEvent
func miqt_exec_callback_QVideoWidget_ShowEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.QVideoWidget_virtualbase_HideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.QVideoWidget_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_HideEvent
func miqt_exec_callback_QVideoWidget_HideEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_ResizeEvent(event *qt6.QResizeEvent) {

	C.QVideoWidget_virtualbase_ResizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnResizeEvent(slot func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent)) {
	ok := C.QVideoWidget_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_ResizeEvent
func miqt_exec_callback_QVideoWidget_ResizeEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_MoveEvent(event *qt6.QMoveEvent) {

	C.QVideoWidget_virtualbase_MoveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnMoveEvent(slot func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent)) {
	ok := C.QVideoWidget_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_MoveEvent
func miqt_exec_callback_QVideoWidget_MoveEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_DevType() int {

	return (int)(C.QVideoWidget_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QVideoWidget) OnDevType(slot func(super func() int) int) {
	ok := C.QVideoWidget_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_DevType
func miqt_exec_callback_QVideoWidget_DevType(self *C.QVideoWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVideoWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QVideoWidget) callVirtualBase_SetVisible(visible bool) {

	C.QVideoWidget_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QVideoWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QVideoWidget_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_SetVisible
func miqt_exec_callback_QVideoWidget_SetVisible(self *C.QVideoWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QVideoWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QVideoWidget) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QVideoWidget_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QVideoWidget) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QVideoWidget_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_MinimumSizeHint
func miqt_exec_callback_QVideoWidget_MinimumSizeHint(self *C.QVideoWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVideoWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QVideoWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QVideoWidget_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QVideoWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QVideoWidget_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_HeightForWidth
func miqt_exec_callback_QVideoWidget_HeightForWidth(self *C.QVideoWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QVideoWidget{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QVideoWidget) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QVideoWidget_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QVideoWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QVideoWidget_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_HasHeightForWidth
func miqt_exec_callback_QVideoWidget_HasHeightForWidth(self *C.QVideoWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVideoWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QVideoWidget) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QVideoWidget_virtualbase_PaintEngine(unsafe.Pointer(this.h))))

}
func (this *QVideoWidget) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.QVideoWidget_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_PaintEngine
func miqt_exec_callback_QVideoWidget_PaintEngine(self *C.QVideoWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVideoWidget{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QVideoWidget) callVirtualBase_MousePressEvent(event *qt6.QMouseEvent) {

	C.QVideoWidget_virtualbase_MousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnMousePressEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QVideoWidget_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_MousePressEvent
func miqt_exec_callback_QVideoWidget_MousePressEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_MouseReleaseEvent(event *qt6.QMouseEvent) {

	C.QVideoWidget_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnMouseReleaseEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QVideoWidget_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_MouseReleaseEvent
func miqt_exec_callback_QVideoWidget_MouseReleaseEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_MouseDoubleClickEvent(event *qt6.QMouseEvent) {

	C.QVideoWidget_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QVideoWidget_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_MouseDoubleClickEvent
func miqt_exec_callback_QVideoWidget_MouseDoubleClickEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_MouseMoveEvent(event *qt6.QMouseEvent) {

	C.QVideoWidget_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnMouseMoveEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QVideoWidget_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_MouseMoveEvent
func miqt_exec_callback_QVideoWidget_MouseMoveEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_WheelEvent(event *qt6.QWheelEvent) {

	C.QVideoWidget_virtualbase_WheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnWheelEvent(slot func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent)) {
	ok := C.QVideoWidget_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_WheelEvent
func miqt_exec_callback_QVideoWidget_WheelEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_KeyPressEvent(event *qt6.QKeyEvent) {

	C.QVideoWidget_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnKeyPressEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QVideoWidget_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_KeyPressEvent
func miqt_exec_callback_QVideoWidget_KeyPressEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.QVideoWidget_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QVideoWidget_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_KeyReleaseEvent
func miqt_exec_callback_QVideoWidget_KeyReleaseEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.QVideoWidget_virtualbase_FocusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QVideoWidget_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_FocusInEvent
func miqt_exec_callback_QVideoWidget_FocusInEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.QVideoWidget_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QVideoWidget_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_FocusOutEvent
func miqt_exec_callback_QVideoWidget_FocusOutEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_EnterEvent(event *qt6.QEnterEvent) {

	C.QVideoWidget_virtualbase_EnterEvent(unsafe.Pointer(this.h), (*C.QEnterEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnEnterEvent(slot func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent)) {
	ok := C.QVideoWidget_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_EnterEvent
func miqt_exec_callback_QVideoWidget_EnterEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEnterEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_LeaveEvent(event *qt6.QEvent) {

	C.QVideoWidget_virtualbase_LeaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnLeaveEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QVideoWidget_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_LeaveEvent
func miqt_exec_callback_QVideoWidget_LeaveEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_PaintEvent(event *qt6.QPaintEvent) {

	C.QVideoWidget_virtualbase_PaintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnPaintEvent(slot func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent)) {
	ok := C.QVideoWidget_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_PaintEvent
func miqt_exec_callback_QVideoWidget_PaintEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_CloseEvent(event *qt6.QCloseEvent) {

	C.QVideoWidget_virtualbase_CloseEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnCloseEvent(slot func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent)) {
	ok := C.QVideoWidget_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_CloseEvent
func miqt_exec_callback_QVideoWidget_CloseEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_ContextMenuEvent(event *qt6.QContextMenuEvent) {

	C.QVideoWidget_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnContextMenuEvent(slot func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent)) {
	ok := C.QVideoWidget_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_ContextMenuEvent
func miqt_exec_callback_QVideoWidget_ContextMenuEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_TabletEvent(event *qt6.QTabletEvent) {

	C.QVideoWidget_virtualbase_TabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnTabletEvent(slot func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent)) {
	ok := C.QVideoWidget_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_TabletEvent
func miqt_exec_callback_QVideoWidget_TabletEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_ActionEvent(event *qt6.QActionEvent) {

	C.QVideoWidget_virtualbase_ActionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnActionEvent(slot func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent)) {
	ok := C.QVideoWidget_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_ActionEvent
func miqt_exec_callback_QVideoWidget_ActionEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_DragEnterEvent(event *qt6.QDragEnterEvent) {

	C.QVideoWidget_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnDragEnterEvent(slot func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent)) {
	ok := C.QVideoWidget_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_DragEnterEvent
func miqt_exec_callback_QVideoWidget_DragEnterEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_DragMoveEvent(event *qt6.QDragMoveEvent) {

	C.QVideoWidget_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnDragMoveEvent(slot func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent)) {
	ok := C.QVideoWidget_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_DragMoveEvent
func miqt_exec_callback_QVideoWidget_DragMoveEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_DragLeaveEvent(event *qt6.QDragLeaveEvent) {

	C.QVideoWidget_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnDragLeaveEvent(slot func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent)) {
	ok := C.QVideoWidget_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_DragLeaveEvent
func miqt_exec_callback_QVideoWidget_DragLeaveEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_DropEvent(event *qt6.QDropEvent) {

	C.QVideoWidget_virtualbase_DropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnDropEvent(slot func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent)) {
	ok := C.QVideoWidget_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_DropEvent
func miqt_exec_callback_QVideoWidget_DropEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QVideoWidget_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QVideoWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QVideoWidget_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_NativeEvent
func miqt_exec_callback_QVideoWidget_NativeEvent(self *C.QVideoWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QVideoWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QVideoWidget) callVirtualBase_ChangeEvent(param1 *qt6.QEvent) {

	C.QVideoWidget_virtualbase_ChangeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QVideoWidget) OnChangeEvent(slot func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent)) {
	ok := C.QVideoWidget_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_ChangeEvent
func miqt_exec_callback_QVideoWidget_ChangeEvent(self *C.QVideoWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_Metric(param1 qt6.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QVideoWidget_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QVideoWidget) OnMetric(slot func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QVideoWidget_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_Metric
func miqt_exec_callback_QVideoWidget_Metric(self *C.QVideoWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QVideoWidget{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QVideoWidget) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.QVideoWidget_virtualbase_InitPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QVideoWidget) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.QVideoWidget_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_InitPainter
func miqt_exec_callback_QVideoWidget_InitPainter(self *C.QVideoWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QVideoWidget) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QVideoWidget_virtualbase_Redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QVideoWidget) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.QVideoWidget_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_Redirected
func miqt_exec_callback_QVideoWidget_Redirected(self *C.QVideoWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QVideoWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QVideoWidget) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QVideoWidget_virtualbase_SharedPainter(unsafe.Pointer(this.h))))

}
func (this *QVideoWidget) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.QVideoWidget_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_SharedPainter
func miqt_exec_callback_QVideoWidget_SharedPainter(self *C.QVideoWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVideoWidget{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QVideoWidget) callVirtualBase_InputMethodEvent(param1 *qt6.QInputMethodEvent) {

	C.QVideoWidget_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QVideoWidget) OnInputMethodEvent(slot func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent)) {
	ok := C.QVideoWidget_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_InputMethodEvent
func miqt_exec_callback_QVideoWidget_InputMethodEvent(self *C.QVideoWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_InputMethodQuery(param1 qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QVideoWidget_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QVideoWidget) OnInputMethodQuery(slot func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.QVideoWidget_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_InputMethodQuery
func miqt_exec_callback_QVideoWidget_InputMethodQuery(self *C.QVideoWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QVideoWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QVideoWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QVideoWidget_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QVideoWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QVideoWidget_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_FocusNextPrevChild
func miqt_exec_callback_QVideoWidget_FocusNextPrevChild(self *C.QVideoWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QVideoWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QVideoWidget) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QVideoWidget_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QVideoWidget) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QVideoWidget_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_EventFilter
func miqt_exec_callback_QVideoWidget_EventFilter(self *C.QVideoWidget, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QVideoWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QVideoWidget) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QVideoWidget_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QVideoWidget_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_TimerEvent
func miqt_exec_callback_QVideoWidget_TimerEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QVideoWidget_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QVideoWidget_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_ChildEvent
func miqt_exec_callback_QVideoWidget_ChildEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QVideoWidget_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QVideoWidget) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QVideoWidget_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_CustomEvent
func miqt_exec_callback_QVideoWidget_CustomEvent(self *C.QVideoWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QVideoWidget) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QVideoWidget_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QVideoWidget) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QVideoWidget_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_ConnectNotify
func miqt_exec_callback_QVideoWidget_ConnectNotify(self *C.QVideoWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QVideoWidget) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QVideoWidget_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QVideoWidget) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QVideoWidget_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVideoWidget_DisconnectNotify
func miqt_exec_callback_QVideoWidget_DisconnectNotify(self *C.QVideoWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QVideoWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QVideoWidget) Delete() {
	C.QVideoWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVideoWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QVideoWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
