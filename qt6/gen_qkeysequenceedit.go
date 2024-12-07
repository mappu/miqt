package qt6

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
	h          *C.QKeySequenceEdit
	isSubclass bool
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
func newQKeySequenceEdit(h *C.QKeySequenceEdit, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QKeySequenceEdit {
	if h == nil {
		return nil
	}
	return &QKeySequenceEdit{h: h,
		QWidget: newQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQKeySequenceEdit constructs the type using only unsafe pointers.
func UnsafeNewQKeySequenceEdit(h unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QKeySequenceEdit {
	if h == nil {
		return nil
	}

	return &QKeySequenceEdit{h: (*C.QKeySequenceEdit)(h),
		QWidget: UnsafeNewQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQKeySequenceEdit constructs a new QKeySequenceEdit object.
func NewQKeySequenceEdit(parent *QWidget) *QKeySequenceEdit {
	var outptr_QKeySequenceEdit *C.QKeySequenceEdit = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QKeySequenceEdit_new(parent.cPointer(), &outptr_QKeySequenceEdit, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQKeySequenceEdit(outptr_QKeySequenceEdit, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQKeySequenceEdit2 constructs a new QKeySequenceEdit object.
func NewQKeySequenceEdit2() *QKeySequenceEdit {
	var outptr_QKeySequenceEdit *C.QKeySequenceEdit = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QKeySequenceEdit_new2(&outptr_QKeySequenceEdit, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQKeySequenceEdit(outptr_QKeySequenceEdit, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQKeySequenceEdit3 constructs a new QKeySequenceEdit object.
func NewQKeySequenceEdit3(keySequence *QKeySequence) *QKeySequenceEdit {
	var outptr_QKeySequenceEdit *C.QKeySequenceEdit = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QKeySequenceEdit_new3(keySequence.cPointer(), &outptr_QKeySequenceEdit, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQKeySequenceEdit(outptr_QKeySequenceEdit, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQKeySequenceEdit4 constructs a new QKeySequenceEdit object.
func NewQKeySequenceEdit4(keySequence *QKeySequence, parent *QWidget) *QKeySequenceEdit {
	var outptr_QKeySequenceEdit *C.QKeySequenceEdit = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QKeySequenceEdit_new4(keySequence.cPointer(), parent.cPointer(), &outptr_QKeySequenceEdit, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQKeySequenceEdit(outptr_QKeySequenceEdit, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QKeySequenceEdit) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QKeySequenceEdit_MetaObject(this.h)))
}

func (this *QKeySequenceEdit) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QKeySequenceEdit_Metacast(this.h, param1_Cstring))
}

func QKeySequenceEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QKeySequenceEdit_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QKeySequenceEdit) KeySequence() *QKeySequence {
	_ret := C.QKeySequenceEdit_KeySequence(this.h)
	_goptr := newQKeySequence(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QKeySequenceEdit) SetClearButtonEnabled(enable bool) {
	C.QKeySequenceEdit_SetClearButtonEnabled(this.h, (C.bool)(enable))
}

func (this *QKeySequenceEdit) IsClearButtonEnabled() bool {
	return (bool)(C.QKeySequenceEdit_IsClearButtonEnabled(this.h))
}

func (this *QKeySequenceEdit) SetKeySequence(keySequence *QKeySequence) {
	C.QKeySequenceEdit_SetKeySequence(this.h, keySequence.cPointer())
}

func (this *QKeySequenceEdit) Clear() {
	C.QKeySequenceEdit_Clear(this.h)
}

func (this *QKeySequenceEdit) EditingFinished() {
	C.QKeySequenceEdit_EditingFinished(this.h)
}
func (this *QKeySequenceEdit) OnEditingFinished(slot func()) {
	C.QKeySequenceEdit_connect_EditingFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_EditingFinished
func miqt_exec_callback_QKeySequenceEdit_EditingFinished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QKeySequenceEdit) KeySequenceChanged(keySequence *QKeySequence) {
	C.QKeySequenceEdit_KeySequenceChanged(this.h, keySequence.cPointer())
}
func (this *QKeySequenceEdit) OnKeySequenceChanged(slot func(keySequence *QKeySequence)) {
	C.QKeySequenceEdit_connect_KeySequenceChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_KeySequenceChanged
func miqt_exec_callback_QKeySequenceEdit_KeySequenceChanged(cb C.intptr_t, keySequence *C.QKeySequence) {
	gofunc, ok := cgo.Handle(cb).Value().(func(keySequence *QKeySequence))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeySequence(unsafe.Pointer(keySequence))

	gofunc(slotval1)
}

func QKeySequenceEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QKeySequenceEdit_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QKeySequenceEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QKeySequenceEdit_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QKeySequenceEdit) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QKeySequenceEdit_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QKeySequenceEdit) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_Event
func miqt_exec_callback_QKeySequenceEdit_Event(self *C.QKeySequenceEdit, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QKeySequenceEdit) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QKeySequenceEdit_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QKeySequenceEdit) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_KeyPressEvent
func miqt_exec_callback_QKeySequenceEdit_KeyPressEvent(self *C.QKeySequenceEdit, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_KeyReleaseEvent(param1 *QKeyEvent) {

	C.QKeySequenceEdit_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QKeySequenceEdit) OnKeyReleaseEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_KeyReleaseEvent
func miqt_exec_callback_QKeySequenceEdit_KeyReleaseEvent(self *C.QKeySequenceEdit, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_TimerEvent(param1 *QTimerEvent) {

	C.QKeySequenceEdit_virtualbase_TimerEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QKeySequenceEdit) OnTimerEvent(slot func(super func(param1 *QTimerEvent), param1 *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_TimerEvent
func miqt_exec_callback_QKeySequenceEdit_TimerEvent(self *C.QKeySequenceEdit, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QTimerEvent), param1 *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(param1), nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_FocusOutEvent(param1 *QFocusEvent) {

	C.QKeySequenceEdit_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QKeySequenceEdit) OnFocusOutEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_FocusOutEvent
func miqt_exec_callback_QKeySequenceEdit_FocusOutEvent(self *C.QKeySequenceEdit, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(param1), nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_DevType() int {

	return (int)(C.QKeySequenceEdit_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QKeySequenceEdit) OnDevType(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_DevType
func miqt_exec_callback_QKeySequenceEdit_DevType(self *C.QKeySequenceEdit, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QKeySequenceEdit) callVirtualBase_SetVisible(visible bool) {

	C.QKeySequenceEdit_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QKeySequenceEdit) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_SetVisible
func miqt_exec_callback_QKeySequenceEdit_SetVisible(self *C.QKeySequenceEdit, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_SizeHint() *QSize {

	_ret := C.QKeySequenceEdit_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QKeySequenceEdit) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_SizeHint
func miqt_exec_callback_QKeySequenceEdit_SizeHint(self *C.QKeySequenceEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QKeySequenceEdit) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QKeySequenceEdit_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QKeySequenceEdit) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_MinimumSizeHint
func miqt_exec_callback_QKeySequenceEdit_MinimumSizeHint(self *C.QKeySequenceEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QKeySequenceEdit) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QKeySequenceEdit_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QKeySequenceEdit) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_HeightForWidth
func miqt_exec_callback_QKeySequenceEdit_HeightForWidth(self *C.QKeySequenceEdit, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QKeySequenceEdit_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QKeySequenceEdit) OnHasHeightForWidth(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_HasHeightForWidth
func miqt_exec_callback_QKeySequenceEdit_HasHeightForWidth(self *C.QKeySequenceEdit, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QKeySequenceEdit) callVirtualBase_PaintEngine() *QPaintEngine {

	return UnsafeNewQPaintEngine(unsafe.Pointer(C.QKeySequenceEdit_virtualbase_PaintEngine(unsafe.Pointer(this.h))))
}
func (this *QKeySequenceEdit) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_PaintEngine
func miqt_exec_callback_QKeySequenceEdit_PaintEngine(self *C.QKeySequenceEdit, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QKeySequenceEdit) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QKeySequenceEdit_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_MousePressEvent
func miqt_exec_callback_QKeySequenceEdit_MousePressEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QKeySequenceEdit_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_MouseReleaseEvent
func miqt_exec_callback_QKeySequenceEdit_MouseReleaseEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QKeySequenceEdit_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_MouseDoubleClickEvent
func miqt_exec_callback_QKeySequenceEdit_MouseDoubleClickEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QKeySequenceEdit_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_MouseMoveEvent
func miqt_exec_callback_QKeySequenceEdit_MouseMoveEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QKeySequenceEdit_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_WheelEvent
func miqt_exec_callback_QKeySequenceEdit_WheelEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QKeySequenceEdit_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_FocusInEvent
func miqt_exec_callback_QKeySequenceEdit_FocusInEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QKeySequenceEdit_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_EnterEvent
func miqt_exec_callback_QKeySequenceEdit_EnterEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEnterEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QKeySequenceEdit_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_LeaveEvent
func miqt_exec_callback_QKeySequenceEdit_LeaveEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QKeySequenceEdit_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_PaintEvent
func miqt_exec_callback_QKeySequenceEdit_PaintEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(event), nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QKeySequenceEdit_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_MoveEvent
func miqt_exec_callback_QKeySequenceEdit_MoveEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMoveEvent(unsafe.Pointer(event), nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QKeySequenceEdit_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_ResizeEvent
func miqt_exec_callback_QKeySequenceEdit_ResizeEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(event), nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QKeySequenceEdit_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_CloseEvent
func miqt_exec_callback_QKeySequenceEdit_CloseEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQCloseEvent(unsafe.Pointer(event), nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QKeySequenceEdit_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_ContextMenuEvent
func miqt_exec_callback_QKeySequenceEdit_ContextMenuEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QKeySequenceEdit_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_TabletEvent
func miqt_exec_callback_QKeySequenceEdit_TabletEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTabletEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QKeySequenceEdit_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_ActionEvent
func miqt_exec_callback_QKeySequenceEdit_ActionEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQActionEvent(unsafe.Pointer(event), nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QKeySequenceEdit_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_DragEnterEvent
func miqt_exec_callback_QKeySequenceEdit_DragEnterEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragEnterEvent(unsafe.Pointer(event), nil, nil, nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QKeySequenceEdit_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_DragMoveEvent
func miqt_exec_callback_QKeySequenceEdit_DragMoveEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QKeySequenceEdit_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_DragLeaveEvent
func miqt_exec_callback_QKeySequenceEdit_DragLeaveEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(event), nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QKeySequenceEdit_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_DropEvent
func miqt_exec_callback_QKeySequenceEdit_DropEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(event), nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QKeySequenceEdit_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_ShowEvent
func miqt_exec_callback_QKeySequenceEdit_ShowEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQShowEvent(unsafe.Pointer(event), nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QKeySequenceEdit_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QKeySequenceEdit) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_HideEvent
func miqt_exec_callback_QKeySequenceEdit_HideEvent(self *C.QKeySequenceEdit, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQHideEvent(unsafe.Pointer(event), nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QKeySequenceEdit_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QKeySequenceEdit) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_NativeEvent
func miqt_exec_callback_QKeySequenceEdit_NativeEvent(self *C.QKeySequenceEdit, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QKeySequenceEdit) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QKeySequenceEdit_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QKeySequenceEdit) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_ChangeEvent
func miqt_exec_callback_QKeySequenceEdit_ChangeEvent(self *C.QKeySequenceEdit, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QKeySequenceEdit_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QKeySequenceEdit) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_Metric
func miqt_exec_callback_QKeySequenceEdit_Metric(self *C.QKeySequenceEdit, cb C.intptr_t, param1 C.int) C.int {
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

	C.QKeySequenceEdit_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QKeySequenceEdit) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_InitPainter
func miqt_exec_callback_QKeySequenceEdit_InitPainter(self *C.QKeySequenceEdit, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return UnsafeNewQPaintDevice(unsafe.Pointer(C.QKeySequenceEdit_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer())))
}
func (this *QKeySequenceEdit) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_Redirected
func miqt_exec_callback_QKeySequenceEdit_Redirected(self *C.QKeySequenceEdit, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QKeySequenceEdit) callVirtualBase_SharedPainter() *QPainter {

	return UnsafeNewQPainter(unsafe.Pointer(C.QKeySequenceEdit_virtualbase_SharedPainter(unsafe.Pointer(this.h))))
}
func (this *QKeySequenceEdit) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_SharedPainter
func miqt_exec_callback_QKeySequenceEdit_SharedPainter(self *C.QKeySequenceEdit, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QKeySequenceEdit) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QKeySequenceEdit_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QKeySequenceEdit) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_InputMethodEvent
func miqt_exec_callback_QKeySequenceEdit_InputMethodEvent(self *C.QKeySequenceEdit, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(param1), nil)

	gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QKeySequenceEdit) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_ret := C.QKeySequenceEdit_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QKeySequenceEdit) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_InputMethodQuery
func miqt_exec_callback_QKeySequenceEdit_InputMethodQuery(self *C.QKeySequenceEdit, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QKeySequenceEdit_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QKeySequenceEdit) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QKeySequenceEdit_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QKeySequenceEdit_FocusNextPrevChild
func miqt_exec_callback_QKeySequenceEdit_FocusNextPrevChild(self *C.QKeySequenceEdit, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QKeySequenceEdit{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QKeySequenceEdit) Delete() {
	C.QKeySequenceEdit_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QKeySequenceEdit) GoGC() {
	runtime.SetFinalizer(this, func(this *QKeySequenceEdit) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
