package multimedia

/*

#include "gen_qcameraviewfinder.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCameraViewfinder struct {
	h *C.QCameraViewfinder
	*QVideoWidget
}

func (this *QCameraViewfinder) cPointer() *C.QCameraViewfinder {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraViewfinder) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraViewfinder constructs the type using only CGO pointers.
func newQCameraViewfinder(h *C.QCameraViewfinder) *QCameraViewfinder {
	if h == nil {
		return nil
	}
	var outptr_QVideoWidget *C.QVideoWidget = nil
	C.QCameraViewfinder_virtbase(h, &outptr_QVideoWidget)

	return &QCameraViewfinder{h: h,
		QVideoWidget: newQVideoWidget(outptr_QVideoWidget)}
}

// UnsafeNewQCameraViewfinder constructs the type using only unsafe pointers.
func UnsafeNewQCameraViewfinder(h unsafe.Pointer) *QCameraViewfinder {
	return newQCameraViewfinder((*C.QCameraViewfinder)(h))
}

// NewQCameraViewfinder constructs a new QCameraViewfinder object.
func NewQCameraViewfinder(parent *qt.QWidget) *QCameraViewfinder {

	return newQCameraViewfinder(C.QCameraViewfinder_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQCameraViewfinder2 constructs a new QCameraViewfinder object.
func NewQCameraViewfinder2() *QCameraViewfinder {

	return newQCameraViewfinder(C.QCameraViewfinder_new2())
}

func (this *QCameraViewfinder) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraViewfinder_MetaObject(this.h)))
}

func (this *QCameraViewfinder) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraViewfinder_Metacast(this.h, param1_Cstring))
}

func QCameraViewfinder_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinder_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinder_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinder_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraViewfinder) MediaObject() *QMediaObject {
	return newQMediaObject(C.QCameraViewfinder_MediaObject(this.h))
}

func QCameraViewfinder_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinder_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinder_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinder_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinder_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinder_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraViewfinder_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraViewfinder_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraViewfinder) callVirtualBase_MediaObject() *QMediaObject {

	return newQMediaObject(C.QCameraViewfinder_virtualbase_MediaObject(unsafe.Pointer(this.h)))

}
func (this *QCameraViewfinder) OnMediaObject(slot func(super func() *QMediaObject) *QMediaObject) {
	ok := C.QCameraViewfinder_override_virtual_MediaObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_MediaObject
func miqt_exec_callback_QCameraViewfinder_MediaObject(self *C.QCameraViewfinder, cb C.intptr_t) *C.QMediaObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMediaObject) *QMediaObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_MediaObject)

	return virtualReturn.cPointer()

}

func (this *QCameraViewfinder) callVirtualBase_SetMediaObject(object *QMediaObject) bool {

	return (bool)(C.QCameraViewfinder_virtualbase_SetMediaObject(unsafe.Pointer(this.h), object.cPointer()))

}
func (this *QCameraViewfinder) OnSetMediaObject(slot func(super func(object *QMediaObject) bool, object *QMediaObject) bool) {
	ok := C.QCameraViewfinder_override_virtual_SetMediaObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_SetMediaObject
func miqt_exec_callback_QCameraViewfinder_SetMediaObject(self *C.QCameraViewfinder, cb C.intptr_t, object *C.QMediaObject) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QMediaObject) bool, object *QMediaObject) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMediaObject(object)

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_SetMediaObject, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCameraViewfinder) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QCameraViewfinder_virtualbase_SizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCameraViewfinder) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QCameraViewfinder_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_SizeHint
func miqt_exec_callback_QCameraViewfinder_SizeHint(self *C.QCameraViewfinder, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QCameraViewfinder) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QCameraViewfinder_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCameraViewfinder) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QCameraViewfinder_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_Event
func miqt_exec_callback_QCameraViewfinder_Event(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCameraViewfinder) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QCameraViewfinder_virtualbase_ShowEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QCameraViewfinder_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_ShowEvent
func miqt_exec_callback_QCameraViewfinder_ShowEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QCameraViewfinder_virtualbase_HideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QCameraViewfinder_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_HideEvent
func miqt_exec_callback_QCameraViewfinder_HideEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_ResizeEvent(event *qt.QResizeEvent) {

	C.QCameraViewfinder_virtualbase_ResizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnResizeEvent(slot func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent)) {
	ok := C.QCameraViewfinder_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_ResizeEvent
func miqt_exec_callback_QCameraViewfinder_ResizeEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QCameraViewfinder_virtualbase_MoveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QCameraViewfinder_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_MoveEvent
func miqt_exec_callback_QCameraViewfinder_MoveEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_PaintEvent(event *qt.QPaintEvent) {

	C.QCameraViewfinder_virtualbase_PaintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnPaintEvent(slot func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent)) {
	ok := C.QCameraViewfinder_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_PaintEvent
func miqt_exec_callback_QCameraViewfinder_PaintEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_DevType() int {

	return (int)(C.QCameraViewfinder_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QCameraViewfinder) OnDevType(slot func(super func() int) int) {
	ok := C.QCameraViewfinder_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_DevType
func miqt_exec_callback_QCameraViewfinder_DevType(self *C.QCameraViewfinder, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QCameraViewfinder) callVirtualBase_SetVisible(visible bool) {

	C.QCameraViewfinder_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QCameraViewfinder) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QCameraViewfinder_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_SetVisible
func miqt_exec_callback_QCameraViewfinder_SetVisible(self *C.QCameraViewfinder, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QCameraViewfinder_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCameraViewfinder) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QCameraViewfinder_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_MinimumSizeHint
func miqt_exec_callback_QCameraViewfinder_MinimumSizeHint(self *C.QCameraViewfinder, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QCameraViewfinder) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QCameraViewfinder_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QCameraViewfinder) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QCameraViewfinder_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_HeightForWidth
func miqt_exec_callback_QCameraViewfinder_HeightForWidth(self *C.QCameraViewfinder, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QCameraViewfinder) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QCameraViewfinder_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QCameraViewfinder) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QCameraViewfinder_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_HasHeightForWidth
func miqt_exec_callback_QCameraViewfinder_HasHeightForWidth(self *C.QCameraViewfinder, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QCameraViewfinder) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QCameraViewfinder_virtualbase_PaintEngine(unsafe.Pointer(this.h))))

}
func (this *QCameraViewfinder) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QCameraViewfinder_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_PaintEngine
func miqt_exec_callback_QCameraViewfinder_PaintEngine(self *C.QCameraViewfinder, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QCameraViewfinder) callVirtualBase_MousePressEvent(event *qt.QMouseEvent) {

	C.QCameraViewfinder_virtualbase_MousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnMousePressEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QCameraViewfinder_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_MousePressEvent
func miqt_exec_callback_QCameraViewfinder_MousePressEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_MouseReleaseEvent(event *qt.QMouseEvent) {

	C.QCameraViewfinder_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnMouseReleaseEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QCameraViewfinder_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_MouseReleaseEvent
func miqt_exec_callback_QCameraViewfinder_MouseReleaseEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QCameraViewfinder_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QCameraViewfinder_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_MouseDoubleClickEvent
func miqt_exec_callback_QCameraViewfinder_MouseDoubleClickEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_MouseMoveEvent(event *qt.QMouseEvent) {

	C.QCameraViewfinder_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnMouseMoveEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QCameraViewfinder_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_MouseMoveEvent
func miqt_exec_callback_QCameraViewfinder_MouseMoveEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.QCameraViewfinder_virtualbase_WheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	ok := C.QCameraViewfinder_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_WheelEvent
func miqt_exec_callback_QCameraViewfinder_WheelEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.QCameraViewfinder_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QCameraViewfinder_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_KeyPressEvent
func miqt_exec_callback_QCameraViewfinder_KeyPressEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QCameraViewfinder_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QCameraViewfinder_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_KeyReleaseEvent
func miqt_exec_callback_QCameraViewfinder_KeyReleaseEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QCameraViewfinder_virtualbase_FocusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QCameraViewfinder_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_FocusInEvent
func miqt_exec_callback_QCameraViewfinder_FocusInEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QCameraViewfinder_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QCameraViewfinder_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_FocusOutEvent
func miqt_exec_callback_QCameraViewfinder_FocusOutEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QCameraViewfinder_virtualbase_EnterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QCameraViewfinder_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_EnterEvent
func miqt_exec_callback_QCameraViewfinder_EnterEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QCameraViewfinder_virtualbase_LeaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QCameraViewfinder_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_LeaveEvent
func miqt_exec_callback_QCameraViewfinder_LeaveEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QCameraViewfinder_virtualbase_CloseEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QCameraViewfinder_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_CloseEvent
func miqt_exec_callback_QCameraViewfinder_CloseEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QCameraViewfinder_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QCameraViewfinder_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_ContextMenuEvent
func miqt_exec_callback_QCameraViewfinder_ContextMenuEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QCameraViewfinder_virtualbase_TabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QCameraViewfinder_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_TabletEvent
func miqt_exec_callback_QCameraViewfinder_TabletEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QCameraViewfinder_virtualbase_ActionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QCameraViewfinder_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_ActionEvent
func miqt_exec_callback_QCameraViewfinder_ActionEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QCameraViewfinder_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QCameraViewfinder_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_DragEnterEvent
func miqt_exec_callback_QCameraViewfinder_DragEnterEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QCameraViewfinder_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QCameraViewfinder_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_DragMoveEvent
func miqt_exec_callback_QCameraViewfinder_DragMoveEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QCameraViewfinder_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QCameraViewfinder_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_DragLeaveEvent
func miqt_exec_callback_QCameraViewfinder_DragLeaveEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QCameraViewfinder_virtualbase_DropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QCameraViewfinder_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_DropEvent
func miqt_exec_callback_QCameraViewfinder_DropEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QCameraViewfinder_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QCameraViewfinder) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QCameraViewfinder_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_NativeEvent
func miqt_exec_callback_QCameraViewfinder_NativeEvent(self *C.QCameraViewfinder, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QCameraViewfinder) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QCameraViewfinder_virtualbase_ChangeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QCameraViewfinder) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QCameraViewfinder_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_ChangeEvent
func miqt_exec_callback_QCameraViewfinder_ChangeEvent(self *C.QCameraViewfinder, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QCameraViewfinder_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QCameraViewfinder) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QCameraViewfinder_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_Metric
func miqt_exec_callback_QCameraViewfinder_Metric(self *C.QCameraViewfinder, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QCameraViewfinder) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QCameraViewfinder_virtualbase_InitPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QCameraViewfinder) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QCameraViewfinder_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_InitPainter
func miqt_exec_callback_QCameraViewfinder_InitPainter(self *C.QCameraViewfinder, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QCameraViewfinder_virtualbase_Redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QCameraViewfinder) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QCameraViewfinder_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_Redirected
func miqt_exec_callback_QCameraViewfinder_Redirected(self *C.QCameraViewfinder, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QCameraViewfinder) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QCameraViewfinder_virtualbase_SharedPainter(unsafe.Pointer(this.h))))

}
func (this *QCameraViewfinder) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QCameraViewfinder_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_SharedPainter
func miqt_exec_callback_QCameraViewfinder_SharedPainter(self *C.QCameraViewfinder, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QCameraViewfinder) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QCameraViewfinder_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QCameraViewfinder) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QCameraViewfinder_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_InputMethodEvent
func miqt_exec_callback_QCameraViewfinder_InputMethodEvent(self *C.QCameraViewfinder, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QCameraViewfinder_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCameraViewfinder) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QCameraViewfinder_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_InputMethodQuery
func miqt_exec_callback_QCameraViewfinder_InputMethodQuery(self *C.QCameraViewfinder, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QCameraViewfinder) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QCameraViewfinder_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QCameraViewfinder) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QCameraViewfinder_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_FocusNextPrevChild
func miqt_exec_callback_QCameraViewfinder_FocusNextPrevChild(self *C.QCameraViewfinder, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCameraViewfinder) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QCameraViewfinder_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QCameraViewfinder) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QCameraViewfinder_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_EventFilter
func miqt_exec_callback_QCameraViewfinder_EventFilter(self *C.QCameraViewfinder, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QCameraViewfinder{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QCameraViewfinder) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QCameraViewfinder_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QCameraViewfinder_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_TimerEvent
func miqt_exec_callback_QCameraViewfinder_TimerEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QCameraViewfinder_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QCameraViewfinder_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_ChildEvent
func miqt_exec_callback_QCameraViewfinder_ChildEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QCameraViewfinder_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QCameraViewfinder) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QCameraViewfinder_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_CustomEvent
func miqt_exec_callback_QCameraViewfinder_CustomEvent(self *C.QCameraViewfinder, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QCameraViewfinder_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCameraViewfinder) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QCameraViewfinder_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_ConnectNotify
func miqt_exec_callback_QCameraViewfinder_ConnectNotify(self *C.QCameraViewfinder, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QCameraViewfinder) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QCameraViewfinder_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QCameraViewfinder) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QCameraViewfinder_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QCameraViewfinder_DisconnectNotify
func miqt_exec_callback_QCameraViewfinder_DisconnectNotify(self *C.QCameraViewfinder, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QCameraViewfinder{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QCameraViewfinder) Delete() {
	C.QCameraViewfinder_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraViewfinder) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraViewfinder) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
