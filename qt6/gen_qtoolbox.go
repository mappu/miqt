package qt6

/*

#include "gen_qtoolbox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QToolBox struct {
	h          *C.QToolBox
	isSubclass bool
	*QFrame
}

func (this *QToolBox) cPointer() *C.QToolBox {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QToolBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQToolBox constructs the type using only CGO pointers.
func newQToolBox(h *C.QToolBox, h_QFrame *C.QFrame, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QToolBox {
	if h == nil {
		return nil
	}
	return &QToolBox{h: h,
		QFrame: newQFrame(h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQToolBox constructs the type using only unsafe pointers.
func UnsafeNewQToolBox(h unsafe.Pointer, h_QFrame unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QToolBox {
	if h == nil {
		return nil
	}

	return &QToolBox{h: (*C.QToolBox)(h),
		QFrame: UnsafeNewQFrame(h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQToolBox constructs a new QToolBox object.
func NewQToolBox(parent *QWidget) *QToolBox {
	var outptr_QToolBox *C.QToolBox = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QToolBox_new(parent.cPointer(), &outptr_QToolBox, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQToolBox(outptr_QToolBox, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQToolBox2 constructs a new QToolBox object.
func NewQToolBox2() *QToolBox {
	var outptr_QToolBox *C.QToolBox = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QToolBox_new2(&outptr_QToolBox, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQToolBox(outptr_QToolBox, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQToolBox3 constructs a new QToolBox object.
func NewQToolBox3(parent *QWidget, f WindowType) *QToolBox {
	var outptr_QToolBox *C.QToolBox = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QToolBox_new3(parent.cPointer(), (C.int)(f), &outptr_QToolBox, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQToolBox(outptr_QToolBox, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QToolBox) MetaObject() *QMetaObject {
	return newQMetaObject(C.QToolBox_MetaObject(this.h))
}

func (this *QToolBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QToolBox_Metacast(this.h, param1_Cstring))
}

func QToolBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QToolBox_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QToolBox) AddItem(widget *QWidget, text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QToolBox_AddItem(this.h, widget.cPointer(), text_ms))
}

func (this *QToolBox) AddItem2(widget *QWidget, icon *QIcon, text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QToolBox_AddItem2(this.h, widget.cPointer(), icon.cPointer(), text_ms))
}

func (this *QToolBox) InsertItem(index int, widget *QWidget, text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QToolBox_InsertItem(this.h, (C.int)(index), widget.cPointer(), text_ms))
}

func (this *QToolBox) InsertItem2(index int, widget *QWidget, icon *QIcon, text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QToolBox_InsertItem2(this.h, (C.int)(index), widget.cPointer(), icon.cPointer(), text_ms))
}

func (this *QToolBox) RemoveItem(index int) {
	C.QToolBox_RemoveItem(this.h, (C.int)(index))
}

func (this *QToolBox) SetItemEnabled(index int, enabled bool) {
	C.QToolBox_SetItemEnabled(this.h, (C.int)(index), (C.bool)(enabled))
}

func (this *QToolBox) IsItemEnabled(index int) bool {
	return (bool)(C.QToolBox_IsItemEnabled(this.h, (C.int)(index)))
}

func (this *QToolBox) SetItemText(index int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QToolBox_SetItemText(this.h, (C.int)(index), text_ms)
}

func (this *QToolBox) ItemText(index int) string {
	var _ms C.struct_miqt_string = C.QToolBox_ItemText(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QToolBox) SetItemIcon(index int, icon *QIcon) {
	C.QToolBox_SetItemIcon(this.h, (C.int)(index), icon.cPointer())
}

func (this *QToolBox) ItemIcon(index int) *QIcon {
	_goptr := newQIcon(C.QToolBox_ItemIcon(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QToolBox) SetItemToolTip(index int, toolTip string) {
	toolTip_ms := C.struct_miqt_string{}
	toolTip_ms.data = C.CString(toolTip)
	toolTip_ms.len = C.size_t(len(toolTip))
	defer C.free(unsafe.Pointer(toolTip_ms.data))
	C.QToolBox_SetItemToolTip(this.h, (C.int)(index), toolTip_ms)
}

func (this *QToolBox) ItemToolTip(index int) string {
	var _ms C.struct_miqt_string = C.QToolBox_ItemToolTip(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QToolBox) CurrentIndex() int {
	return (int)(C.QToolBox_CurrentIndex(this.h))
}

func (this *QToolBox) CurrentWidget() *QWidget {
	return newQWidget(C.QToolBox_CurrentWidget(this.h), nil, nil)
}

func (this *QToolBox) Widget(index int) *QWidget {
	return newQWidget(C.QToolBox_Widget(this.h, (C.int)(index)), nil, nil)
}

func (this *QToolBox) IndexOf(widget *QWidget) int {
	return (int)(C.QToolBox_IndexOf(this.h, widget.cPointer()))
}

func (this *QToolBox) Count() int {
	return (int)(C.QToolBox_Count(this.h))
}

func (this *QToolBox) SetCurrentIndex(index int) {
	C.QToolBox_SetCurrentIndex(this.h, (C.int)(index))
}

func (this *QToolBox) SetCurrentWidget(widget *QWidget) {
	C.QToolBox_SetCurrentWidget(this.h, widget.cPointer())
}

func (this *QToolBox) CurrentChanged(index int) {
	C.QToolBox_CurrentChanged(this.h, (C.int)(index))
}
func (this *QToolBox) OnCurrentChanged(slot func(index int)) {
	C.QToolBox_connect_CurrentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBox_CurrentChanged
func miqt_exec_callback_QToolBox_CurrentChanged(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func QToolBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QToolBox_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QToolBox_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QToolBox) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QToolBox_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QToolBox) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBox_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBox_Event
func miqt_exec_callback_QToolBox_Event(self *C.QToolBox, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QToolBox{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QToolBox) callVirtualBase_ItemInserted(index int) {

	C.QToolBox_virtualbase_ItemInserted(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QToolBox) OnItemInserted(slot func(super func(index int), index int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBox_override_virtual_ItemInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBox_ItemInserted
func miqt_exec_callback_QToolBox_ItemInserted(self *C.QToolBox, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QToolBox{h: self}).callVirtualBase_ItemInserted, slotval1)

}

func (this *QToolBox) callVirtualBase_ItemRemoved(index int) {

	C.QToolBox_virtualbase_ItemRemoved(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QToolBox) OnItemRemoved(slot func(super func(index int), index int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBox_override_virtual_ItemRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBox_ItemRemoved
func miqt_exec_callback_QToolBox_ItemRemoved(self *C.QToolBox, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QToolBox{h: self}).callVirtualBase_ItemRemoved, slotval1)

}

func (this *QToolBox) callVirtualBase_ShowEvent(e *QShowEvent) {

	C.QToolBox_virtualbase_ShowEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QToolBox) OnShowEvent(slot func(super func(e *QShowEvent), e *QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBox_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBox_ShowEvent
func miqt_exec_callback_QToolBox_ShowEvent(self *C.QToolBox, cb C.intptr_t, e *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QShowEvent), e *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(e, nil)

	gofunc((&QToolBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QToolBox_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolBox) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBox_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBox_ChangeEvent
func miqt_exec_callback_QToolBox_ChangeEvent(self *C.QToolBox, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QToolBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QToolBox_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QToolBox) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBox_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBox_SizeHint
func miqt_exec_callback_QToolBox_SizeHint(self *C.QToolBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBox{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QToolBox) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QToolBox_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolBox) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBox_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBox_PaintEvent
func miqt_exec_callback_QToolBox_PaintEvent(self *C.QToolBox, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1, nil)

	gofunc((&QToolBox{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_InitStyleOption(option *QStyleOptionFrame) {

	C.QToolBox_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QToolBox) OnInitStyleOption(slot func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QToolBox_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBox_InitStyleOption
func miqt_exec_callback_QToolBox_InitStyleOption(self *C.QToolBox, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionFrame(option, nil)

	gofunc((&QToolBox{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

// Delete this object from C++ memory.
func (this *QToolBox) Delete() {
	C.QToolBox_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QToolBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QToolBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
