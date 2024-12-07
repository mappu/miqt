package qt

/*

#include "gen_qcommandlinkbutton.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCommandLinkButton struct {
	h          *C.QCommandLinkButton
	isSubclass bool
	*QPushButton
}

func (this *QCommandLinkButton) cPointer() *C.QCommandLinkButton {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCommandLinkButton) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCommandLinkButton constructs the type using only CGO pointers.
func newQCommandLinkButton(h *C.QCommandLinkButton, h_QPushButton *C.QPushButton, h_QAbstractButton *C.QAbstractButton, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QCommandLinkButton {
	if h == nil {
		return nil
	}
	return &QCommandLinkButton{h: h,
		QPushButton: newQPushButton(h_QPushButton, h_QAbstractButton, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQCommandLinkButton constructs the type using only unsafe pointers.
func UnsafeNewQCommandLinkButton(h unsafe.Pointer, h_QPushButton unsafe.Pointer, h_QAbstractButton unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QCommandLinkButton {
	if h == nil {
		return nil
	}

	return &QCommandLinkButton{h: (*C.QCommandLinkButton)(h),
		QPushButton: UnsafeNewQPushButton(h_QPushButton, h_QAbstractButton, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQCommandLinkButton constructs a new QCommandLinkButton object.
func NewQCommandLinkButton(parent *QWidget) *QCommandLinkButton {
	var outptr_QCommandLinkButton *C.QCommandLinkButton = nil
	var outptr_QPushButton *C.QPushButton = nil
	var outptr_QAbstractButton *C.QAbstractButton = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QCommandLinkButton_new(parent.cPointer(), &outptr_QCommandLinkButton, &outptr_QPushButton, &outptr_QAbstractButton, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQCommandLinkButton(outptr_QCommandLinkButton, outptr_QPushButton, outptr_QAbstractButton, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQCommandLinkButton2 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton2() *QCommandLinkButton {
	var outptr_QCommandLinkButton *C.QCommandLinkButton = nil
	var outptr_QPushButton *C.QPushButton = nil
	var outptr_QAbstractButton *C.QAbstractButton = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QCommandLinkButton_new2(&outptr_QCommandLinkButton, &outptr_QPushButton, &outptr_QAbstractButton, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQCommandLinkButton(outptr_QCommandLinkButton, outptr_QPushButton, outptr_QAbstractButton, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQCommandLinkButton3 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton3(text string) *QCommandLinkButton {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QCommandLinkButton *C.QCommandLinkButton = nil
	var outptr_QPushButton *C.QPushButton = nil
	var outptr_QAbstractButton *C.QAbstractButton = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QCommandLinkButton_new3(text_ms, &outptr_QCommandLinkButton, &outptr_QPushButton, &outptr_QAbstractButton, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQCommandLinkButton(outptr_QCommandLinkButton, outptr_QPushButton, outptr_QAbstractButton, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQCommandLinkButton4 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton4(text string, description string) *QCommandLinkButton {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	var outptr_QCommandLinkButton *C.QCommandLinkButton = nil
	var outptr_QPushButton *C.QPushButton = nil
	var outptr_QAbstractButton *C.QAbstractButton = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QCommandLinkButton_new4(text_ms, description_ms, &outptr_QCommandLinkButton, &outptr_QPushButton, &outptr_QAbstractButton, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQCommandLinkButton(outptr_QCommandLinkButton, outptr_QPushButton, outptr_QAbstractButton, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQCommandLinkButton5 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton5(text string, parent *QWidget) *QCommandLinkButton {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QCommandLinkButton *C.QCommandLinkButton = nil
	var outptr_QPushButton *C.QPushButton = nil
	var outptr_QAbstractButton *C.QAbstractButton = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QCommandLinkButton_new5(text_ms, parent.cPointer(), &outptr_QCommandLinkButton, &outptr_QPushButton, &outptr_QAbstractButton, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQCommandLinkButton(outptr_QCommandLinkButton, outptr_QPushButton, outptr_QAbstractButton, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQCommandLinkButton6 constructs a new QCommandLinkButton object.
func NewQCommandLinkButton6(text string, description string, parent *QWidget) *QCommandLinkButton {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	var outptr_QCommandLinkButton *C.QCommandLinkButton = nil
	var outptr_QPushButton *C.QPushButton = nil
	var outptr_QAbstractButton *C.QAbstractButton = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QCommandLinkButton_new6(text_ms, description_ms, parent.cPointer(), &outptr_QCommandLinkButton, &outptr_QPushButton, &outptr_QAbstractButton, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQCommandLinkButton(outptr_QCommandLinkButton, outptr_QPushButton, outptr_QAbstractButton, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QCommandLinkButton) MetaObject() *QMetaObject {
	return newQMetaObject(C.QCommandLinkButton_MetaObject(this.h))
}

func (this *QCommandLinkButton) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCommandLinkButton_Metacast(this.h, param1_Cstring))
}

func QCommandLinkButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCommandLinkButton_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCommandLinkButton_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCommandLinkButton_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCommandLinkButton) Description() string {
	var _ms C.struct_miqt_string = C.QCommandLinkButton_Description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCommandLinkButton) SetDescription(description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QCommandLinkButton_SetDescription(this.h, description_ms)
}

func QCommandLinkButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCommandLinkButton_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCommandLinkButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCommandLinkButton_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCommandLinkButton_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCommandLinkButton_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCommandLinkButton_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCommandLinkButton_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCommandLinkButton) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QCommandLinkButton_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCommandLinkButton) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCommandLinkButton_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCommandLinkButton_SizeHint
func miqt_exec_callback_QCommandLinkButton_SizeHint(self *C.QCommandLinkButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QCommandLinkButton) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QCommandLinkButton_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QCommandLinkButton) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCommandLinkButton_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCommandLinkButton_HeightForWidth
func miqt_exec_callback_QCommandLinkButton_HeightForWidth(self *C.QCommandLinkButton, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QCommandLinkButton) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QCommandLinkButton_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QCommandLinkButton) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCommandLinkButton_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCommandLinkButton_MinimumSizeHint
func miqt_exec_callback_QCommandLinkButton_MinimumSizeHint(self *C.QCommandLinkButton, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QCommandLinkButton) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QCommandLinkButton_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QCommandLinkButton) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCommandLinkButton_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCommandLinkButton_Event
func miqt_exec_callback_QCommandLinkButton_Event(self *C.QCommandLinkButton, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QCommandLinkButton) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QCommandLinkButton_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCommandLinkButton) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCommandLinkButton_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCommandLinkButton_PaintEvent
func miqt_exec_callback_QCommandLinkButton_PaintEvent(self *C.QCommandLinkButton, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1, nil)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QCommandLinkButton_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCommandLinkButton) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCommandLinkButton_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCommandLinkButton_KeyPressEvent
func miqt_exec_callback_QCommandLinkButton_KeyPressEvent(self *C.QCommandLinkButton, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1, nil, nil)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_FocusInEvent(param1 *QFocusEvent) {

	C.QCommandLinkButton_virtualbase_FocusInEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCommandLinkButton) OnFocusInEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCommandLinkButton_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCommandLinkButton_FocusInEvent
func miqt_exec_callback_QCommandLinkButton_FocusInEvent(self *C.QCommandLinkButton, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1, nil)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_FocusOutEvent(param1 *QFocusEvent) {

	C.QCommandLinkButton_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QCommandLinkButton) OnFocusOutEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCommandLinkButton_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCommandLinkButton_FocusOutEvent
func miqt_exec_callback_QCommandLinkButton_FocusOutEvent(self *C.QCommandLinkButton, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1, nil)

	gofunc((&QCommandLinkButton{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QCommandLinkButton) callVirtualBase_HitButton(pos *QPoint) bool {

	return (bool)(C.QCommandLinkButton_virtualbase_HitButton(unsafe.Pointer(this.h), pos.cPointer()))

}
func (this *QCommandLinkButton) OnHitButton(slot func(super func(pos *QPoint) bool, pos *QPoint) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QCommandLinkButton_override_virtual_HitButton(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCommandLinkButton_HitButton
func miqt_exec_callback_QCommandLinkButton_HitButton(self *C.QCommandLinkButton, cb C.intptr_t, pos *C.QPoint) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos *QPoint) bool, pos *QPoint) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(pos)

	virtualReturn := gofunc((&QCommandLinkButton{h: self}).callVirtualBase_HitButton, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QCommandLinkButton) Delete() {
	C.QCommandLinkButton_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCommandLinkButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QCommandLinkButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
