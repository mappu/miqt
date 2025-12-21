package designer

/*

#include "gen_abstractresourcebrowser.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerResourceBrowserInterface struct {
	h *C.QDesignerResourceBrowserInterface
	*qt6.QWidget
}

func (this *QDesignerResourceBrowserInterface) cPointer() *C.QDesignerResourceBrowserInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerResourceBrowserInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerResourceBrowserInterface constructs the type using only CGO pointers.
func newQDesignerResourceBrowserInterface(h *C.QDesignerResourceBrowserInterface) *QDesignerResourceBrowserInterface {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QDesignerResourceBrowserInterface_virtbase(h, &outptr_QWidget)

	return &QDesignerResourceBrowserInterface{h: h,
		QWidget: qt6.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewQDesignerResourceBrowserInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerResourceBrowserInterface(h unsafe.Pointer) *QDesignerResourceBrowserInterface {
	return newQDesignerResourceBrowserInterface((*C.QDesignerResourceBrowserInterface)(h))
}

// NewQDesignerResourceBrowserInterface constructs a new QDesignerResourceBrowserInterface object.
func NewQDesignerResourceBrowserInterface(parent *qt6.QWidget) *QDesignerResourceBrowserInterface {

	return newQDesignerResourceBrowserInterface(C.QDesignerResourceBrowserInterface_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQDesignerResourceBrowserInterface2 constructs a new QDesignerResourceBrowserInterface object.
func NewQDesignerResourceBrowserInterface2() *QDesignerResourceBrowserInterface {

	return newQDesignerResourceBrowserInterface(C.QDesignerResourceBrowserInterface_new2())
}

func (this *QDesignerResourceBrowserInterface) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QDesignerResourceBrowserInterface_metaObject(this.h)))
}

func (this *QDesignerResourceBrowserInterface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDesignerResourceBrowserInterface_metacast(this.h, param1_Cstring))
}

func QDesignerResourceBrowserInterface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerResourceBrowserInterface_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerResourceBrowserInterface) SetCurrentPath(filePath string) {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	C.QDesignerResourceBrowserInterface_setCurrentPath(this.h, filePath_ms)
}

func (this *QDesignerResourceBrowserInterface) CurrentPath() string {
	var _ms C.struct_miqt_string = C.QDesignerResourceBrowserInterface_currentPath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerResourceBrowserInterface) CurrentPathChanged(filePath string) {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	C.QDesignerResourceBrowserInterface_currentPathChanged(this.h, filePath_ms)
}
func (this *QDesignerResourceBrowserInterface) OnCurrentPathChanged(slot func(filePath string)) {
	C.QDesignerResourceBrowserInterface_connect_currentPathChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_currentPathChanged
func miqt_exec_callback_QDesignerResourceBrowserInterface_currentPathChanged(cb C.intptr_t, filePath C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(filePath string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var filePath_ms C.struct_miqt_string = filePath
	filePath_ret := C.GoStringN(filePath_ms.data, C.int(int64(filePath_ms.len)))
	C.free(unsafe.Pointer(filePath_ms.data))
	slotval1 := filePath_ret

	gofunc(slotval1)
}

func (this *QDesignerResourceBrowserInterface) PathActivated(filePath string) {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	C.QDesignerResourceBrowserInterface_pathActivated(this.h, filePath_ms)
}
func (this *QDesignerResourceBrowserInterface) OnPathActivated(slot func(filePath string)) {
	C.QDesignerResourceBrowserInterface_connect_pathActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_pathActivated
func miqt_exec_callback_QDesignerResourceBrowserInterface_pathActivated(cb C.intptr_t, filePath C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(filePath string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var filePath_ms C.struct_miqt_string = filePath
	filePath_ret := C.GoStringN(filePath_ms.data, C.int(int64(filePath_ms.len)))
	C.free(unsafe.Pointer(filePath_ms.data))
	slotval1 := filePath_ret

	gofunc(slotval1)
}

func QDesignerResourceBrowserInterface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerResourceBrowserInterface_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerResourceBrowserInterface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerResourceBrowserInterface_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// UpdateMicroFocus can only be called from a QDesignerResourceBrowserInterface that was directly constructed.
func (this *QDesignerResourceBrowserInterface) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QDesignerResourceBrowserInterface_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QDesignerResourceBrowserInterface that was directly constructed.
func (this *QDesignerResourceBrowserInterface) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QDesignerResourceBrowserInterface_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QDesignerResourceBrowserInterface that was directly constructed.
func (this *QDesignerResourceBrowserInterface) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QDesignerResourceBrowserInterface_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QDesignerResourceBrowserInterface that was directly constructed.
func (this *QDesignerResourceBrowserInterface) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerResourceBrowserInterface_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QDesignerResourceBrowserInterface that was directly constructed.
func (this *QDesignerResourceBrowserInterface) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerResourceBrowserInterface_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QDesignerResourceBrowserInterface that was directly constructed.
func (this *QDesignerResourceBrowserInterface) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QDesignerResourceBrowserInterface_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDesignerResourceBrowserInterface that was directly constructed.
func (this *QDesignerResourceBrowserInterface) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerResourceBrowserInterface_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDesignerResourceBrowserInterface that was directly constructed.
func (this *QDesignerResourceBrowserInterface) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerResourceBrowserInterface_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDesignerResourceBrowserInterface that was directly constructed.
func (this *QDesignerResourceBrowserInterface) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerResourceBrowserInterface_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QDesignerResourceBrowserInterface) OnSetCurrentPath(slot func(filePath string)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_setCurrentPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_setCurrentPath
func miqt_exec_callback_QDesignerResourceBrowserInterface_setCurrentPath(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, filePath C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(filePath string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var filePath_ms C.struct_miqt_string = filePath
	filePath_ret := C.GoStringN(filePath_ms.data, C.int(int64(filePath_ms.len)))
	C.free(unsafe.Pointer(filePath_ms.data))
	slotval1 := filePath_ret

	gofunc(slotval1)

}
func (this *QDesignerResourceBrowserInterface) OnCurrentPath(slot func() string) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_currentPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_currentPath
func miqt_exec_callback_QDesignerResourceBrowserInterface_currentPath(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_DevType() int {

	return (int)(C.QDesignerResourceBrowserInterface_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QDesignerResourceBrowserInterface) OnDevType(slot func(super func() int) int) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_devType
func miqt_exec_callback_QDesignerResourceBrowserInterface_devType(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_SetVisible(visible bool) {

	C.QDesignerResourceBrowserInterface_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QDesignerResourceBrowserInterface) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_setVisible
func miqt_exec_callback_QDesignerResourceBrowserInterface_setVisible(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_SizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QDesignerResourceBrowserInterface_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDesignerResourceBrowserInterface) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_sizeHint
func miqt_exec_callback_QDesignerResourceBrowserInterface_sizeHint(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(C.QDesignerResourceBrowserInterface_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDesignerResourceBrowserInterface) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_minimumSizeHint
func miqt_exec_callback_QDesignerResourceBrowserInterface_minimumSizeHint(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QDesignerResourceBrowserInterface_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDesignerResourceBrowserInterface) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_heightForWidth
func miqt_exec_callback_QDesignerResourceBrowserInterface_heightForWidth(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QDesignerResourceBrowserInterface_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QDesignerResourceBrowserInterface) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_hasHeightForWidth
func miqt_exec_callback_QDesignerResourceBrowserInterface_hasHeightForWidth(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_PaintEngine() *qt6.QPaintEngine {

	return qt6.UnsafeNewQPaintEngine(unsafe.Pointer(C.QDesignerResourceBrowserInterface_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QDesignerResourceBrowserInterface) OnPaintEngine(slot func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_paintEngine
func miqt_exec_callback_QDesignerResourceBrowserInterface_paintEngine(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPaintEngine) *qt6.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QDesignerResourceBrowserInterface_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerResourceBrowserInterface) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_event
func miqt_exec_callback_QDesignerResourceBrowserInterface_event(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_MousePressEvent(event *qt6.QMouseEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnMousePressEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_mousePressEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_mousePressEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_MouseReleaseEvent(event *qt6.QMouseEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnMouseReleaseEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_mouseReleaseEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_mouseReleaseEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_MouseDoubleClickEvent(event *qt6.QMouseEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_mouseDoubleClickEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_mouseDoubleClickEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_MouseMoveEvent(event *qt6.QMouseEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnMouseMoveEvent(slot func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_mouseMoveEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_mouseMoveEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMouseEvent), event *qt6.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_WheelEvent(event *qt6.QWheelEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnWheelEvent(slot func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_wheelEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_wheelEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QWheelEvent), event *qt6.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_KeyPressEvent(event *qt6.QKeyEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnKeyPressEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_keyPressEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_keyPressEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_keyReleaseEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_keyReleaseEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_focusInEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_focusInEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_focusOutEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_focusOutEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_EnterEvent(event *qt6.QEnterEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEnterEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnEnterEvent(slot func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_enterEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_enterEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEnterEvent), event *qt6.QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEnterEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_LeaveEvent(event *qt6.QEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnLeaveEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_leaveEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_leaveEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_PaintEvent(event *qt6.QPaintEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnPaintEvent(slot func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_paintEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_paintEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QPaintEvent), event *qt6.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPaintEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_MoveEvent(event *qt6.QMoveEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnMoveEvent(slot func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_moveEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_moveEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QMoveEvent), event *qt6.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_ResizeEvent(event *qt6.QResizeEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnResizeEvent(slot func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_resizeEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_resizeEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QResizeEvent), event *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_CloseEvent(event *qt6.QCloseEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnCloseEvent(slot func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_closeEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_closeEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QCloseEvent), event *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_ContextMenuEvent(event *qt6.QContextMenuEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnContextMenuEvent(slot func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_contextMenuEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_contextMenuEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QContextMenuEvent), event *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_TabletEvent(event *qt6.QTabletEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnTabletEvent(slot func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_tabletEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_tabletEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTabletEvent), event *qt6.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_ActionEvent(event *qt6.QActionEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnActionEvent(slot func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_actionEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_actionEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QActionEvent), event *qt6.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_DragEnterEvent(event *qt6.QDragEnterEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnDragEnterEvent(slot func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_dragEnterEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_dragEnterEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragEnterEvent), event *qt6.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_DragMoveEvent(event *qt6.QDragMoveEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnDragMoveEvent(slot func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_dragMoveEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_dragMoveEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragMoveEvent), event *qt6.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_DragLeaveEvent(event *qt6.QDragLeaveEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnDragLeaveEvent(slot func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_dragLeaveEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_dragLeaveEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDragLeaveEvent), event *qt6.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_DropEvent(event *qt6.QDropEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnDropEvent(slot func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_dropEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_dropEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QDropEvent), event *qt6.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_ShowEvent(event *qt6.QShowEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnShowEvent(slot func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_showEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_showEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QShowEvent), event *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_HideEvent(event *qt6.QHideEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnHideEvent(slot func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_hideEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_hideEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QHideEvent), event *qt6.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QDesignerResourceBrowserInterface_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QDesignerResourceBrowserInterface) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_nativeEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_nativeEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_ChangeEvent(param1 *qt6.QEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnChangeEvent(slot func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_changeEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_changeEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent), param1 *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_Metric(param1 qt6.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QDesignerResourceBrowserInterface_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDesignerResourceBrowserInterface) OnMetric(slot func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_metric
func miqt_exec_callback_QDesignerResourceBrowserInterface_metric(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.QPaintDevice__PaintDeviceMetric) int, param1 qt6.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_InitPainter(painter *qt6.QPainter) {

	C.QDesignerResourceBrowserInterface_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnInitPainter(slot func(super func(painter *qt6.QPainter), painter *qt6.QPainter)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_initPainter
func miqt_exec_callback_QDesignerResourceBrowserInterface_initPainter(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter), painter *qt6.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_Redirected(offset *qt6.QPoint) *qt6.QPaintDevice {

	return qt6.UnsafeNewQPaintDevice(unsafe.Pointer(C.QDesignerResourceBrowserInterface_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QDesignerResourceBrowserInterface) OnRedirected(slot func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_redirected
func miqt_exec_callback_QDesignerResourceBrowserInterface_redirected(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt6.QPoint) *qt6.QPaintDevice, offset *qt6.QPoint) *qt6.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_SharedPainter() *qt6.QPainter {

	return qt6.UnsafeNewQPainter(unsafe.Pointer(C.QDesignerResourceBrowserInterface_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QDesignerResourceBrowserInterface) OnSharedPainter(slot func(super func() *qt6.QPainter) *qt6.QPainter) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_sharedPainter
func miqt_exec_callback_QDesignerResourceBrowserInterface_sharedPainter(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainter) *qt6.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_InputMethodEvent(param1 *qt6.QInputMethodEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnInputMethodEvent(slot func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_inputMethodEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_inputMethodEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QInputMethodEvent), param1 *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_InputMethodQuery(param1 qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QDesignerResourceBrowserInterface_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDesignerResourceBrowserInterface) OnInputMethodQuery(slot func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_inputMethodQuery
func miqt_exec_callback_QDesignerResourceBrowserInterface_inputMethodQuery(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt6.InputMethodQuery) *qt6.QVariant, param1 qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QDesignerResourceBrowserInterface_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QDesignerResourceBrowserInterface) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_focusNextPrevChild
func miqt_exec_callback_QDesignerResourceBrowserInterface_focusNextPrevChild(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QDesignerResourceBrowserInterface_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerResourceBrowserInterface) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_eventFilter
func miqt_exec_callback_QDesignerResourceBrowserInterface_eventFilter(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_timerEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_timerEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_childEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_childEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QDesignerResourceBrowserInterface_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_customEvent
func miqt_exec_callback_QDesignerResourceBrowserInterface_customEvent(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QDesignerResourceBrowserInterface_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_connectNotify
func miqt_exec_callback_QDesignerResourceBrowserInterface_connectNotify(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDesignerResourceBrowserInterface) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QDesignerResourceBrowserInterface_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerResourceBrowserInterface) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDesignerResourceBrowserInterface_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerResourceBrowserInterface_disconnectNotify
func miqt_exec_callback_QDesignerResourceBrowserInterface_disconnectNotify(self *C.QDesignerResourceBrowserInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerResourceBrowserInterface{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDesignerResourceBrowserInterface) Delete() {
	C.QDesignerResourceBrowserInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerResourceBrowserInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerResourceBrowserInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
