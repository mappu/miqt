package qt

/*

#include "gen_qkeysequenceedit.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QKeySequenceEdit struct {
	h *C.QKeySequenceEdit
	*QWidget
}

func (this *QKeySequenceEdit) cPointer() *C.QKeySequenceEdit {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QKeySequenceEdit) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQKeySequenceEdit constructs the type using only CGO pointers.
func newQKeySequenceEdit(h *C.QKeySequenceEdit) *QKeySequenceEdit {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QKeySequenceEdit_virtbase(h, &outptr_QWidget)

	return &QKeySequenceEdit{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQKeySequenceEdit constructs the type using only unsafe pointers.
func UnsafeNewQKeySequenceEdit(h unsafe.Pointer) *QKeySequenceEdit {
	return newQKeySequenceEdit((*C.QKeySequenceEdit)(h))
}

// NewQKeySequenceEdit constructs a new QKeySequenceEdit object.
func NewQKeySequenceEdit(parent *QWidget) *QKeySequenceEdit {

	return newQKeySequenceEdit(C.QKeySequenceEdit_new(parent.cPointer()))
}

// NewQKeySequenceEdit2 constructs a new QKeySequenceEdit object.
func NewQKeySequenceEdit2() *QKeySequenceEdit {

	return newQKeySequenceEdit(C.QKeySequenceEdit_new2())
}

// NewQKeySequenceEdit3 constructs a new QKeySequenceEdit object.
func NewQKeySequenceEdit3(keySequence *QKeySequence) *QKeySequenceEdit {

	return newQKeySequenceEdit(C.QKeySequenceEdit_new3(keySequence.cPointer()))
}

// NewQKeySequenceEdit4 constructs a new QKeySequenceEdit object.
func NewQKeySequenceEdit4(keySequence *QKeySequence, parent *QWidget) *QKeySequenceEdit {

	return newQKeySequenceEdit(C.QKeySequenceEdit_new4(keySequence.cPointer(), parent.cPointer()))
}

func (this *QKeySequenceEdit) MetaObject() *QMetaObject {
	return newQMetaObject(C.QKeySequenceEdit_metaObject(this.h))
}

func (this *QKeySequenceEdit) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QKeySequenceEdit_metacast(this.h, param1_Cstring))
}

func QKeySequenceEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QKeySequenceEdit_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QKeySequenceEdit_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QKeySequenceEdit_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QKeySequenceEdit) KeySequence() *QKeySequence {
	_goptr := newQKeySequence(C.QKeySequenceEdit_keySequence(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QKeySequenceEdit) SetKeySequence(keySequence *QKeySequence) {
	C.QKeySequenceEdit_setKeySequence(this.h, keySequence.cPointer())
}

func (this *QKeySequenceEdit) Clear() {
	C.QKeySequenceEdit_clear(this.h)
}

func (this *QKeySequenceEdit) EditingFinished() {
	C.QKeySequenceEdit_editingFinished(this.h)
}
func (this *QKeySequenceEdit) OnEditingFinished(slot func()) {
	C.QKeySequenceEdit_connect_editingFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_editingFinished
func miqt_exec_callback_QKeySequenceEdit_editingFinished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QKeySequenceEdit) KeySequenceChanged(keySequence *QKeySequence) {
	C.QKeySequenceEdit_keySequenceChanged(this.h, keySequence.cPointer())
}
func (this *QKeySequenceEdit) OnKeySequenceChanged(slot func(keySequence *QKeySequence)) {
	C.QKeySequenceEdit_connect_keySequenceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_keySequenceChanged
func miqt_exec_callback_QKeySequenceEdit_keySequenceChanged(cb C.intptr_t, keySequence *C.QKeySequence) {
	gofunc, ok := cgo.Handle(cb).Value().(func(keySequence *QKeySequence))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeySequence(keySequence)

	gofunc(slotval1)
}

func QKeySequenceEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QKeySequenceEdit_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QKeySequenceEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QKeySequenceEdit_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QKeySequenceEdit_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QKeySequenceEdit_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QKeySequenceEdit_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QKeySequenceEdit_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QKeySequenceEdit) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QKeySequenceEdit_virtualbase_event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QKeySequenceEdit) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QKeySequenceEdit_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_event
func miqt_exec_callback_QKeySequenceEdit_event(self *C.QKeySequenceEdit, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QKeySequenceEdit) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QKeySequenceEdit_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QKeySequenceEdit) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_keyPressEvent
func miqt_exec_callback_QKeySequenceEdit_keyPressEvent(self *C.QKeySequenceEdit, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_KeyReleaseEvent(param1 *QKeyEvent) {

	C.QKeySequenceEdit_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QKeySequenceEdit) OnKeyReleaseEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_keyReleaseEvent
func miqt_exec_callback_QKeySequenceEdit_keyReleaseEvent(self *C.QKeySequenceEdit, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QKeySequenceEdit_virtualbase_timerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QKeySequenceEdit) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_timerEvent
func miqt_exec_callback_QKeySequenceEdit_timerEvent(self *C.QKeySequenceEdit, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(param1)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_DevType() int {

	return (int)(C.QKeySequenceEdit_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QKeySequenceEdit) OnDevType(slot func(super func() int) int) {
	ok := C.QKeySequenceEdit_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_devType
func miqt_exec_callback_QKeySequenceEdit_devType(self *C.QKeySequenceEdit, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QKeySequenceEdit) callVirtualBase_SetVisible(visible bool) {

	C.QKeySequenceEdit_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QKeySequenceEdit) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QKeySequenceEdit_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_setVisible
func miqt_exec_callback_QKeySequenceEdit_setVisible(self *C.QKeySequenceEdit, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QKeySequenceEdit_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QKeySequenceEdit) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QKeySequenceEdit_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_sizeHint
func miqt_exec_callback_QKeySequenceEdit_sizeHint(self *C.QKeySequenceEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QKeySequenceEdit) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QKeySequenceEdit_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QKeySequenceEdit) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QKeySequenceEdit_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_minimumSizeHint
func miqt_exec_callback_QKeySequenceEdit_minimumSizeHint(self *C.QKeySequenceEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QKeySequenceEdit) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QKeySequenceEdit_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QKeySequenceEdit) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QKeySequenceEdit_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_heightForWidth
func miqt_exec_callback_QKeySequenceEdit_heightForWidth(self *C.QKeySequenceEdit, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QKeySequenceEdit) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QKeySequenceEdit_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QKeySequenceEdit) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QKeySequenceEdit_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_hasHeightForWidth
func miqt_exec_callback_QKeySequenceEdit_hasHeightForWidth(self *C.QKeySequenceEdit, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QKeySequenceEdit) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QKeySequenceEdit_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QKeySequenceEdit) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QKeySequenceEdit_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_paintEngine
func miqt_exec_callback_QKeySequenceEdit_paintEngine(self *C.QKeySequenceEdit, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QKeySequenceEdit) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QKeySequenceEdit_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_mousePressEvent
func miqt_exec_callback_QKeySequenceEdit_mousePressEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QKeySequenceEdit_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_mouseReleaseEvent
func miqt_exec_callback_QKeySequenceEdit_mouseReleaseEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QKeySequenceEdit_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_mouseDoubleClickEvent
func miqt_exec_callback_QKeySequenceEdit_mouseDoubleClickEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QKeySequenceEdit_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_mouseMoveEvent
func miqt_exec_callback_QKeySequenceEdit_mouseMoveEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QKeySequenceEdit_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_wheelEvent
func miqt_exec_callback_QKeySequenceEdit_wheelEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QKeySequenceEdit_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_focusInEvent
func miqt_exec_callback_QKeySequenceEdit_focusInEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QKeySequenceEdit_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_focusOutEvent
func miqt_exec_callback_QKeySequenceEdit_focusOutEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_EnterEvent(event *QEvent) {

	C.QKeySequenceEdit_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_enterEvent
func miqt_exec_callback_QKeySequenceEdit_enterEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QKeySequenceEdit_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_leaveEvent
func miqt_exec_callback_QKeySequenceEdit_leaveEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QKeySequenceEdit_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_paintEvent
func miqt_exec_callback_QKeySequenceEdit_paintEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QKeySequenceEdit_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_moveEvent
func miqt_exec_callback_QKeySequenceEdit_moveEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QKeySequenceEdit_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_resizeEvent
func miqt_exec_callback_QKeySequenceEdit_resizeEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QKeySequenceEdit_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_closeEvent
func miqt_exec_callback_QKeySequenceEdit_closeEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QKeySequenceEdit_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_contextMenuEvent
func miqt_exec_callback_QKeySequenceEdit_contextMenuEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QKeySequenceEdit_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_tabletEvent
func miqt_exec_callback_QKeySequenceEdit_tabletEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QKeySequenceEdit_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_actionEvent
func miqt_exec_callback_QKeySequenceEdit_actionEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QKeySequenceEdit_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_dragEnterEvent
func miqt_exec_callback_QKeySequenceEdit_dragEnterEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QKeySequenceEdit_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_dragMoveEvent
func miqt_exec_callback_QKeySequenceEdit_dragMoveEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QKeySequenceEdit_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_dragLeaveEvent
func miqt_exec_callback_QKeySequenceEdit_dragLeaveEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QKeySequenceEdit_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_dropEvent
func miqt_exec_callback_QKeySequenceEdit_dropEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QKeySequenceEdit_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_showEvent
func miqt_exec_callback_QKeySequenceEdit_showEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QKeySequenceEdit_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_hideEvent
func miqt_exec_callback_QKeySequenceEdit_hideEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QKeySequenceEdit_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QKeySequenceEdit) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QKeySequenceEdit_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_nativeEvent
func miqt_exec_callback_QKeySequenceEdit_nativeEvent(self *C.QKeySequenceEdit, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QKeySequenceEdit) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QKeySequenceEdit_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QKeySequenceEdit) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_changeEvent
func miqt_exec_callback_QKeySequenceEdit_changeEvent(self *C.QKeySequenceEdit, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QKeySequenceEdit_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QKeySequenceEdit) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QKeySequenceEdit_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_metric
func miqt_exec_callback_QKeySequenceEdit_metric(self *C.QKeySequenceEdit, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QKeySequenceEdit) callVirtualBase_InitPainter(painter *QPainter) {

	C.QKeySequenceEdit_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QKeySequenceEdit) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QKeySequenceEdit_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_initPainter
func miqt_exec_callback_QKeySequenceEdit_initPainter(self *C.QKeySequenceEdit, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QKeySequenceEdit_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QKeySequenceEdit) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QKeySequenceEdit_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_redirected
func miqt_exec_callback_QKeySequenceEdit_redirected(self *C.QKeySequenceEdit, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QKeySequenceEdit) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QKeySequenceEdit_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QKeySequenceEdit) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QKeySequenceEdit_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_sharedPainter
func miqt_exec_callback_QKeySequenceEdit_sharedPainter(self *C.QKeySequenceEdit, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QKeySequenceEdit) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QKeySequenceEdit_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QKeySequenceEdit) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_inputMethodEvent
func miqt_exec_callback_QKeySequenceEdit_inputMethodEvent(self *C.QKeySequenceEdit, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QKeySequenceEdit_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QKeySequenceEdit) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QKeySequenceEdit_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_inputMethodQuery
func miqt_exec_callback_QKeySequenceEdit_inputMethodQuery(self *C.QKeySequenceEdit, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QKeySequenceEdit) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QKeySequenceEdit_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QKeySequenceEdit) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QKeySequenceEdit_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_focusNextPrevChild
func miqt_exec_callback_QKeySequenceEdit_focusNextPrevChild(self *C.QKeySequenceEdit, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QKeySequenceEdit) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QKeySequenceEdit_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QKeySequenceEdit) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QKeySequenceEdit_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_eventFilter
func miqt_exec_callback_QKeySequenceEdit_eventFilter(self *C.QKeySequenceEdit, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QKeySequenceEdit) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QKeySequenceEdit_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_childEvent
func miqt_exec_callback_QKeySequenceEdit_childEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_CustomEvent(event *QEvent) {

	C.QKeySequenceEdit_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QKeySequenceEdit_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_customEvent
func miqt_exec_callback_QKeySequenceEdit_customEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QKeySequenceEdit_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QKeySequenceEdit) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QKeySequenceEdit_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_connectNotify
func miqt_exec_callback_QKeySequenceEdit_connectNotify(self *C.QKeySequenceEdit, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QKeySequenceEdit_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QKeySequenceEdit) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QKeySequenceEdit_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QKeySequenceEdit_disconnectNotify
func miqt_exec_callback_QKeySequenceEdit_disconnectNotify(self *C.QKeySequenceEdit, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QKeySequenceEdit) Delete() {
	C.QKeySequenceEdit_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QKeySequenceEdit) GoGC() {
	runtime.SetFinalizer(this, func(this *QKeySequenceEdit) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
