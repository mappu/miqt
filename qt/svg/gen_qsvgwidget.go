package svg

/*

#include "gen_qsvgwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSvgWidget struct {
	h *C.QSvgWidget
	*qt.QWidget
}

func (this *QSvgWidget) cPointer() *C.QSvgWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSvgWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSvgWidget constructs the type using only CGO pointers.
func newQSvgWidget(h *C.QSvgWidget) *QSvgWidget {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QSvgWidget_virtbase(h, &outptr_QWidget)

	return &QSvgWidget{h: h,
		QWidget: qt.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewQSvgWidget constructs the type using only unsafe pointers.
func UnsafeNewQSvgWidget(h unsafe.Pointer) *QSvgWidget {
	return newQSvgWidget((*C.QSvgWidget)(h))
}

// NewQSvgWidget constructs a new QSvgWidget object.
func NewQSvgWidget(parent *qt.QWidget) *QSvgWidget {

	return newQSvgWidget(C.QSvgWidget_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQSvgWidget2 constructs a new QSvgWidget object.
func NewQSvgWidget2() *QSvgWidget {

	return newQSvgWidget(C.QSvgWidget_new2())
}

// NewQSvgWidget3 constructs a new QSvgWidget object.
func NewQSvgWidget3(file string) *QSvgWidget {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))

	return newQSvgWidget(C.QSvgWidget_new3(file_ms))
}

// NewQSvgWidget4 constructs a new QSvgWidget object.
func NewQSvgWidget4(file string, parent *qt.QWidget) *QSvgWidget {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))

	return newQSvgWidget(C.QSvgWidget_new4(file_ms, (*C.QWidget)(parent.UnsafePointer())))
}

func (this *QSvgWidget) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QSvgWidget_MetaObject(this.h)))
}

func (this *QSvgWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSvgWidget_Metacast(this.h, param1_Cstring))
}

func QSvgWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSvgWidget_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSvgWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSvgWidget_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSvgWidget) Renderer() *QSvgRenderer {
	return newQSvgRenderer(C.QSvgWidget_Renderer(this.h))
}

func (this *QSvgWidget) SizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QSvgWidget_SizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSvgWidget) Load(file string) {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	C.QSvgWidget_Load(this.h, file_ms)
}

func (this *QSvgWidget) LoadWithContents(contents []byte) {
	contents_alias := C.struct_miqt_string{}
	if len(contents) > 0 {
		contents_alias.data = (*C.char)(unsafe.Pointer(&contents[0]))
	} else {
		contents_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	contents_alias.len = C.size_t(len(contents))
	C.QSvgWidget_LoadWithContents(this.h, contents_alias)
}

func QSvgWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSvgWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSvgWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSvgWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSvgWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSvgWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSvgWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSvgWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSvgWidget) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QSvgWidget_virtualbase_SizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSvgWidget) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QSvgWidget_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_SizeHint
func miqt_exec_callback_QSvgWidget_SizeHint(self *C.QSvgWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSvgWidget{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QSvgWidget) callVirtualBase_PaintEvent(event *qt.QPaintEvent) {

	C.QSvgWidget_virtualbase_PaintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnPaintEvent(slot func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent)) {
	ok := C.QSvgWidget_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_PaintEvent
func miqt_exec_callback_QSvgWidget_PaintEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QPaintEvent), event *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_DevType() int {

	return (int)(C.QSvgWidget_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QSvgWidget) OnDevType(slot func(super func() int) int) {
	ok := C.QSvgWidget_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_DevType
func miqt_exec_callback_QSvgWidget_DevType(self *C.QSvgWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSvgWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QSvgWidget) callVirtualBase_SetVisible(visible bool) {

	C.QSvgWidget_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QSvgWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QSvgWidget_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_SetVisible
func miqt_exec_callback_QSvgWidget_SetVisible(self *C.QSvgWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QSvgWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QSvgWidget) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QSvgWidget_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSvgWidget) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QSvgWidget_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_MinimumSizeHint
func miqt_exec_callback_QSvgWidget_MinimumSizeHint(self *C.QSvgWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSvgWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QSvgWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QSvgWidget_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSvgWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QSvgWidget_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_HeightForWidth
func miqt_exec_callback_QSvgWidget_HeightForWidth(self *C.QSvgWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QSvgWidget{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSvgWidget) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QSvgWidget_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QSvgWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QSvgWidget_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_HasHeightForWidth
func miqt_exec_callback_QSvgWidget_HasHeightForWidth(self *C.QSvgWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSvgWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QSvgWidget) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QSvgWidget_virtualbase_PaintEngine(unsafe.Pointer(this.h))))

}
func (this *QSvgWidget) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QSvgWidget_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_PaintEngine
func miqt_exec_callback_QSvgWidget_PaintEngine(self *C.QSvgWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSvgWidget{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QSvgWidget) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QSvgWidget_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSvgWidget) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QSvgWidget_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_Event
func miqt_exec_callback_QSvgWidget_Event(self *C.QSvgWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSvgWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSvgWidget) callVirtualBase_MousePressEvent(event *qt.QMouseEvent) {

	C.QSvgWidget_virtualbase_MousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnMousePressEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QSvgWidget_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_MousePressEvent
func miqt_exec_callback_QSvgWidget_MousePressEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_MouseReleaseEvent(event *qt.QMouseEvent) {

	C.QSvgWidget_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnMouseReleaseEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QSvgWidget_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_MouseReleaseEvent
func miqt_exec_callback_QSvgWidget_MouseReleaseEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QSvgWidget_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QSvgWidget_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_MouseDoubleClickEvent
func miqt_exec_callback_QSvgWidget_MouseDoubleClickEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_MouseMoveEvent(event *qt.QMouseEvent) {

	C.QSvgWidget_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnMouseMoveEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QSvgWidget_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_MouseMoveEvent
func miqt_exec_callback_QSvgWidget_MouseMoveEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.QSvgWidget_virtualbase_WheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	ok := C.QSvgWidget_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_WheelEvent
func miqt_exec_callback_QSvgWidget_WheelEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.QSvgWidget_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QSvgWidget_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_KeyPressEvent
func miqt_exec_callback_QSvgWidget_KeyPressEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QSvgWidget_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QSvgWidget_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_KeyReleaseEvent
func miqt_exec_callback_QSvgWidget_KeyReleaseEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QSvgWidget_virtualbase_FocusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QSvgWidget_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_FocusInEvent
func miqt_exec_callback_QSvgWidget_FocusInEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QSvgWidget_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QSvgWidget_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_FocusOutEvent
func miqt_exec_callback_QSvgWidget_FocusOutEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QSvgWidget_virtualbase_EnterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QSvgWidget_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_EnterEvent
func miqt_exec_callback_QSvgWidget_EnterEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QSvgWidget_virtualbase_LeaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QSvgWidget_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_LeaveEvent
func miqt_exec_callback_QSvgWidget_LeaveEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QSvgWidget_virtualbase_MoveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QSvgWidget_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_MoveEvent
func miqt_exec_callback_QSvgWidget_MoveEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_ResizeEvent(event *qt.QResizeEvent) {

	C.QSvgWidget_virtualbase_ResizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnResizeEvent(slot func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent)) {
	ok := C.QSvgWidget_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_ResizeEvent
func miqt_exec_callback_QSvgWidget_ResizeEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QSvgWidget_virtualbase_CloseEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QSvgWidget_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_CloseEvent
func miqt_exec_callback_QSvgWidget_CloseEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QSvgWidget_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QSvgWidget_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_ContextMenuEvent
func miqt_exec_callback_QSvgWidget_ContextMenuEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QSvgWidget_virtualbase_TabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QSvgWidget_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_TabletEvent
func miqt_exec_callback_QSvgWidget_TabletEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QSvgWidget_virtualbase_ActionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QSvgWidget_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_ActionEvent
func miqt_exec_callback_QSvgWidget_ActionEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QSvgWidget_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QSvgWidget_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_DragEnterEvent
func miqt_exec_callback_QSvgWidget_DragEnterEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QSvgWidget_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QSvgWidget_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_DragMoveEvent
func miqt_exec_callback_QSvgWidget_DragMoveEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QSvgWidget_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QSvgWidget_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_DragLeaveEvent
func miqt_exec_callback_QSvgWidget_DragLeaveEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QSvgWidget_virtualbase_DropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QSvgWidget_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_DropEvent
func miqt_exec_callback_QSvgWidget_DropEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QSvgWidget_virtualbase_ShowEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QSvgWidget_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_ShowEvent
func miqt_exec_callback_QSvgWidget_ShowEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QSvgWidget_virtualbase_HideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QSvgWidget_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_HideEvent
func miqt_exec_callback_QSvgWidget_HideEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QSvgWidget_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QSvgWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QSvgWidget_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_NativeEvent
func miqt_exec_callback_QSvgWidget_NativeEvent(self *C.QSvgWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QSvgWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSvgWidget) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QSvgWidget_virtualbase_ChangeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QSvgWidget) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QSvgWidget_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_ChangeEvent
func miqt_exec_callback_QSvgWidget_ChangeEvent(self *C.QSvgWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QSvgWidget_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSvgWidget) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QSvgWidget_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_Metric
func miqt_exec_callback_QSvgWidget_Metric(self *C.QSvgWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QSvgWidget{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSvgWidget) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QSvgWidget_virtualbase_InitPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QSvgWidget) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QSvgWidget_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_InitPainter
func miqt_exec_callback_QSvgWidget_InitPainter(self *C.QSvgWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QSvgWidget) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QSvgWidget_virtualbase_Redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QSvgWidget) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QSvgWidget_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_Redirected
func miqt_exec_callback_QSvgWidget_Redirected(self *C.QSvgWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QSvgWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QSvgWidget) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QSvgWidget_virtualbase_SharedPainter(unsafe.Pointer(this.h))))

}
func (this *QSvgWidget) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QSvgWidget_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_SharedPainter
func miqt_exec_callback_QSvgWidget_SharedPainter(self *C.QSvgWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSvgWidget{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QSvgWidget) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QSvgWidget_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QSvgWidget) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QSvgWidget_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_InputMethodEvent
func miqt_exec_callback_QSvgWidget_InputMethodEvent(self *C.QSvgWidget, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QSvgWidget_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSvgWidget) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QSvgWidget_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_InputMethodQuery
func miqt_exec_callback_QSvgWidget_InputMethodQuery(self *C.QSvgWidget, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QSvgWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QSvgWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QSvgWidget_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QSvgWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QSvgWidget_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_FocusNextPrevChild
func miqt_exec_callback_QSvgWidget_FocusNextPrevChild(self *C.QSvgWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QSvgWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSvgWidget) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QSvgWidget_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSvgWidget) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QSvgWidget_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_EventFilter
func miqt_exec_callback_QSvgWidget_EventFilter(self *C.QSvgWidget, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSvgWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSvgWidget) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QSvgWidget_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QSvgWidget_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_TimerEvent
func miqt_exec_callback_QSvgWidget_TimerEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QSvgWidget_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QSvgWidget_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_ChildEvent
func miqt_exec_callback_QSvgWidget_ChildEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QSvgWidget_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSvgWidget) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QSvgWidget_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_CustomEvent
func miqt_exec_callback_QSvgWidget_CustomEvent(self *C.QSvgWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSvgWidget) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QSvgWidget_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSvgWidget) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QSvgWidget_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_ConnectNotify
func miqt_exec_callback_QSvgWidget_ConnectNotify(self *C.QSvgWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSvgWidget) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QSvgWidget_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSvgWidget) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QSvgWidget_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSvgWidget_DisconnectNotify
func miqt_exec_callback_QSvgWidget_DisconnectNotify(self *C.QSvgWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSvgWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSvgWidget) Delete() {
	C.QSvgWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSvgWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QSvgWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
