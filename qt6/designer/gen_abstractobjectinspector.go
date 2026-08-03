package designer

/*

#include "gen_abstractobjectinspector.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerObjectInspectorInterface struct {
	h *C.QDesignerObjectInspectorInterface
	*qt6.QWidget
}

func (this *QDesignerObjectInspectorInterface) cPointer() *C.QDesignerObjectInspectorInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerObjectInspectorInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerObjectInspectorInterface constructs the type using only CGO pointers.
func newQDesignerObjectInspectorInterface(h *C.QDesignerObjectInspectorInterface) *QDesignerObjectInspectorInterface {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QDesignerObjectInspectorInterface_virtbase(h, &outptr_QWidget)

	return &QDesignerObjectInspectorInterface{h: h,
		QWidget: qt6.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewQDesignerObjectInspectorInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerObjectInspectorInterface(h unsafe.Pointer) *QDesignerObjectInspectorInterface {
	return newQDesignerObjectInspectorInterface((*C.QDesignerObjectInspectorInterface)(h))
}

// NewQDesignerObjectInspectorInterface constructs a new QDesignerObjectInspectorInterface object.
func NewQDesignerObjectInspectorInterface(parent *qt6.QWidget) *QDesignerObjectInspectorInterface {

	return newQDesignerObjectInspectorInterface(C.QDesignerObjectInspectorInterface_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQDesignerObjectInspectorInterface2 constructs a new QDesignerObjectInspectorInterface object.
func NewQDesignerObjectInspectorInterface2(parent *qt6.QWidget, flags qt6.WindowType) *QDesignerObjectInspectorInterface {

	return newQDesignerObjectInspectorInterface(C.QDesignerObjectInspectorInterface_new2((*C.QWidget)(parent.UnsafePointer()), (C.int)(flags)))
}

func (this *QDesignerObjectInspectorInterface) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QDesignerObjectInspectorInterface_metaObject(this.h)))
}

func (this *QDesignerObjectInspectorInterface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDesignerObjectInspectorInterface_metacast(this.h, param1_Cstring))
}

func QDesignerObjectInspectorInterface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerObjectInspectorInterface_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerObjectInspectorInterface) Core() *QDesignerFormEditorInterface {
	return newQDesignerFormEditorInterface(C.QDesignerObjectInspectorInterface_core(this.h))
}

func (this *QDesignerObjectInspectorInterface) SetFormWindow(formWindow *QDesignerFormWindowInterface) {
	C.QDesignerObjectInspectorInterface_setFormWindow(this.h, formWindow.cPointer())
}

func QDesignerObjectInspectorInterface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerObjectInspectorInterface_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerObjectInspectorInterface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerObjectInspectorInterface_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// UpdateMicroFocus can only be called from a QDesignerObjectInspectorInterface that was directly constructed.
func (this *QDesignerObjectInspectorInterface) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QDesignerObjectInspectorInterface_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QDesignerObjectInspectorInterface that was directly constructed.
func (this *QDesignerObjectInspectorInterface) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QDesignerObjectInspectorInterface_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QDesignerObjectInspectorInterface that was directly constructed.
func (this *QDesignerObjectInspectorInterface) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QDesignerObjectInspectorInterface_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QDesignerObjectInspectorInterface that was directly constructed.
func (this *QDesignerObjectInspectorInterface) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerObjectInspectorInterface_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QDesignerObjectInspectorInterface that was directly constructed.
func (this *QDesignerObjectInspectorInterface) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerObjectInspectorInterface_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QDesignerObjectInspectorInterface that was directly constructed.
func (this *QDesignerObjectInspectorInterface) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QDesignerObjectInspectorInterface_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDesignerObjectInspectorInterface that was directly constructed.
func (this *QDesignerObjectInspectorInterface) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerObjectInspectorInterface_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDesignerObjectInspectorInterface that was directly constructed.
func (this *QDesignerObjectInspectorInterface) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerObjectInspectorInterface_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDesignerObjectInspectorInterface that was directly constructed.
func (this *QDesignerObjectInspectorInterface) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerObjectInspectorInterface_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_Core() *QDesignerFormEditorInterface {

	return newQDesignerFormEditorInterface(C.QDesignerObjectInspectorInterface_virtualbase_core(unsafe.Pointer(this.h)))

}
func (this *QDesignerObjectInspectorInterface) OnCore(slot func(super func() *QDesignerFormEditorInterface) *QDesignerFormEditorInterface) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_core(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_core
func miqt_exec_callback_QDesignerObjectInspectorInterface_core(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t) *C.QDesignerFormEditorInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QDesignerFormEditorInterface) *QDesignerFormEditorInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_Core)

	return virtualReturn.cPointer()

}
func (this *QDesignerObjectInspectorInterface) OnSetFormWindow(slot func(formWindow *QDesignerFormWindowInterface)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_setFormWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_setFormWindow
func miqt_exec_callback_QDesignerObjectInspectorInterface_setFormWindow(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, formWindow *C.QDesignerFormWindowInterface) {
	gofunc, ok := cgo.Handle(cb).Value().(func(formWindow *QDesignerFormWindowInterface))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDesignerFormWindowInterface(formWindow)

	gofunc(slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_DevType() int {

	return (int)(C.QDesignerObjectInspectorInterface_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QDesignerObjectInspectorInterface) OnDevType(slot func(super func() int) int) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_devType
func miqt_exec_callback_QDesignerObjectInspectorInterface_devType(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_SetVisible(visible bool) {

	C.QDesignerObjectInspectorInterface_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QDesignerObjectInspectorInterface) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_setVisible
func miqt_exec_callback_QDesignerObjectInspectorInterface_setVisible(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_SizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QDesignerObjectInspectorInterface_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDesignerObjectInspectorInterface) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_sizeHint
func miqt_exec_callback_QDesignerObjectInspectorInterface_sizeHint(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QDesignerObjectInspectorInterface_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDesignerObjectInspectorInterface) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_minimumSizeHint
func miqt_exec_callback_QDesignerObjectInspectorInterface_minimumSizeHint(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QDesignerObjectInspectorInterface_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDesignerObjectInspectorInterface) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_heightForWidth
func miqt_exec_callback_QDesignerObjectInspectorInterface_heightForWidth(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QDesignerObjectInspectorInterface_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QDesignerObjectInspectorInterface) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_hasHeightForWidth
func miqt_exec_callback_QDesignerObjectInspectorInterface_hasHeightForWidth(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QDesignerObjectInspectorInterface_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QDesignerObjectInspectorInterface) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_paintEngine
func miqt_exec_callback_QDesignerObjectInspectorInterface_paintEngine(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QDesignerObjectInspectorInterface_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerObjectInspectorInterface) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_event
func miqt_exec_callback_QDesignerObjectInspectorInterface_event(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_MousePressEvent(event *qt6.QMouseEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnMousePressEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_mousePressEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_mousePressEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_MouseReleaseEvent(event *qt6.QMouseEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnMouseReleaseEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_mouseReleaseEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_mouseReleaseEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_MouseDoubleClickEvent(event *qt6.QMouseEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_mouseDoubleClickEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_mouseDoubleClickEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_MouseMoveEvent(event *qt6.QMouseEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnMouseMoveEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_mouseMoveEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_mouseMoveEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_WheelEvent(event *qt6.QWheelEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnWheelEvent(slot func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_wheelEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_wheelEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_KeyPressEvent(event *qt6.QKeyEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnKeyPressEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_keyPressEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_keyPressEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_keyReleaseEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_keyReleaseEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_focusInEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_focusInEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_focusOutEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_focusOutEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_EnterEvent(event *qt6.QEnterEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEnterEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnEnterEvent(slot func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_enterEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_enterEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEnterEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_LeaveEvent(event *qt6.QEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnLeaveEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_leaveEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_leaveEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_PaintEvent(event *qt6.QPaintEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnPaintEvent(slot func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_paintEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_paintEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_MoveEvent(event *qt6.QMoveEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnMoveEvent(slot func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_moveEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_moveEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_ResizeEvent(event *qt6.QResizeEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnResizeEvent(slot func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_resizeEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_resizeEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_CloseEvent(event *qt6.QCloseEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnCloseEvent(slot func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_closeEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_closeEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_ContextMenuEvent(event *qt6.QContextMenuEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnContextMenuEvent(slot func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_contextMenuEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_contextMenuEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_TabletEvent(event *qt6.QTabletEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnTabletEvent(slot func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_tabletEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_tabletEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_ActionEvent(event *qt6.QActionEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnActionEvent(slot func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_actionEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_actionEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_DragEnterEvent(event *qt6.QDragEnterEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnDragEnterEvent(slot func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_dragEnterEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_dragEnterEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_DragMoveEvent(event *qt6.QDragMoveEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnDragMoveEvent(slot func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_dragMoveEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_dragMoveEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_DragLeaveEvent(event *qt6.QDragLeaveEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnDragLeaveEvent(slot func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_dragLeaveEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_dragLeaveEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_DropEvent(event *qt6.QDropEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnDropEvent(slot func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_dropEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_dropEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_ShowEvent(event *qt6.QShowEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnShowEvent(slot func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_showEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_showEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_hideEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_hideEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QDesignerObjectInspectorInterface_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QDesignerObjectInspectorInterface) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_nativeEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_nativeEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_ChangeEvent(param1 *qt6.QEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnChangeEvent(slot func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_changeEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_changeEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_Metric(param1 qt6.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QDesignerObjectInspectorInterface_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDesignerObjectInspectorInterface) OnMetric(slot func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_metric
func miqt_exec_callback_QDesignerObjectInspectorInterface_metric(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.QDesignerObjectInspectorInterface_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_initPainter
func miqt_exec_callback_QDesignerObjectInspectorInterface_initPainter(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QDesignerObjectInspectorInterface_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QDesignerObjectInspectorInterface) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_redirected
func miqt_exec_callback_QDesignerObjectInspectorInterface_redirected(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QDesignerObjectInspectorInterface_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QDesignerObjectInspectorInterface) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_sharedPainter
func miqt_exec_callback_QDesignerObjectInspectorInterface_sharedPainter(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_InputMethodEvent(param1 *qt6.QInputMethodEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnInputMethodEvent(slot func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_inputMethodEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_inputMethodEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_InputMethodQuery(param1 qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QDesignerObjectInspectorInterface_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDesignerObjectInspectorInterface) OnInputMethodQuery(slot func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_inputMethodQuery
func miqt_exec_callback_QDesignerObjectInspectorInterface_inputMethodQuery(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QDesignerObjectInspectorInterface_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QDesignerObjectInspectorInterface) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_focusNextPrevChild
func miqt_exec_callback_QDesignerObjectInspectorInterface_focusNextPrevChild(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QDesignerObjectInspectorInterface_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerObjectInspectorInterface) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_eventFilter
func miqt_exec_callback_QDesignerObjectInspectorInterface_eventFilter(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_timerEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_timerEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_childEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_childEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QDesignerObjectInspectorInterface_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_customEvent
func miqt_exec_callback_QDesignerObjectInspectorInterface_customEvent(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QDesignerObjectInspectorInterface_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_connectNotify
func miqt_exec_callback_QDesignerObjectInspectorInterface_connectNotify(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDesignerObjectInspectorInterface) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QDesignerObjectInspectorInterface_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerObjectInspectorInterface) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDesignerObjectInspectorInterface_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerObjectInspectorInterface_disconnectNotify
func miqt_exec_callback_QDesignerObjectInspectorInterface_disconnectNotify(self *C.QDesignerObjectInspectorInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerObjectInspectorInterface{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDesignerObjectInspectorInterface) Delete() {
	C.QDesignerObjectInspectorInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerObjectInspectorInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerObjectInspectorInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
