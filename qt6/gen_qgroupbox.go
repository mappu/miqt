package qt6

/*

#include "gen_qgroupbox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGroupBox struct {
	h          *C.QGroupBox
	isSubclass bool
	*QWidget
}

func (this *QGroupBox) cPointer() *C.QGroupBox {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGroupBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGroupBox constructs the type using only CGO pointers.
func newQGroupBox(h *C.QGroupBox, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QGroupBox {
	if h == nil {
		return nil
	}
	return &QGroupBox{h: h,
		QWidget: newQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQGroupBox constructs the type using only unsafe pointers.
func UnsafeNewQGroupBox(h unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QGroupBox {
	if h == nil {
		return nil
	}

	return &QGroupBox{h: (*C.QGroupBox)(h),
		QWidget: UnsafeNewQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQGroupBox constructs a new QGroupBox object.
func NewQGroupBox(parent *QWidget) *QGroupBox {
	var outptr_QGroupBox *C.QGroupBox = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QGroupBox_new(parent.cPointer(), &outptr_QGroupBox, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQGroupBox(outptr_QGroupBox, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQGroupBox2 constructs a new QGroupBox object.
func NewQGroupBox2() *QGroupBox {
	var outptr_QGroupBox *C.QGroupBox = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QGroupBox_new2(&outptr_QGroupBox, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQGroupBox(outptr_QGroupBox, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQGroupBox3 constructs a new QGroupBox object.
func NewQGroupBox3(title string) *QGroupBox {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	var outptr_QGroupBox *C.QGroupBox = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QGroupBox_new3(title_ms, &outptr_QGroupBox, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQGroupBox(outptr_QGroupBox, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQGroupBox4 constructs a new QGroupBox object.
func NewQGroupBox4(title string, parent *QWidget) *QGroupBox {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	var outptr_QGroupBox *C.QGroupBox = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QGroupBox_new4(title_ms, parent.cPointer(), &outptr_QGroupBox, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQGroupBox(outptr_QGroupBox, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QGroupBox) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QGroupBox_MetaObject(this.h)))
}

func (this *QGroupBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGroupBox_Metacast(this.h, param1_Cstring))
}

func QGroupBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGroupBox_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGroupBox) Title() string {
	var _ms C.struct_miqt_string = C.QGroupBox_Title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGroupBox) SetTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QGroupBox_SetTitle(this.h, title_ms)
}

func (this *QGroupBox) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QGroupBox_Alignment(this.h))
}

func (this *QGroupBox) SetAlignment(alignment int) {
	C.QGroupBox_SetAlignment(this.h, (C.int)(alignment))
}

func (this *QGroupBox) MinimumSizeHint() *QSize {
	_ret := C.QGroupBox_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGroupBox) IsFlat() bool {
	return (bool)(C.QGroupBox_IsFlat(this.h))
}

func (this *QGroupBox) SetFlat(flat bool) {
	C.QGroupBox_SetFlat(this.h, (C.bool)(flat))
}

func (this *QGroupBox) IsCheckable() bool {
	return (bool)(C.QGroupBox_IsCheckable(this.h))
}

func (this *QGroupBox) SetCheckable(checkable bool) {
	C.QGroupBox_SetCheckable(this.h, (C.bool)(checkable))
}

func (this *QGroupBox) IsChecked() bool {
	return (bool)(C.QGroupBox_IsChecked(this.h))
}

func (this *QGroupBox) SetChecked(checked bool) {
	C.QGroupBox_SetChecked(this.h, (C.bool)(checked))
}

func (this *QGroupBox) Clicked() {
	C.QGroupBox_Clicked(this.h)
}
func (this *QGroupBox) OnClicked(slot func()) {
	C.QGroupBox_connect_Clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_Clicked
func miqt_exec_callback_QGroupBox_Clicked(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QGroupBox) Toggled(param1 bool) {
	C.QGroupBox_Toggled(this.h, (C.bool)(param1))
}
func (this *QGroupBox) OnToggled(slot func(param1 bool)) {
	C.QGroupBox_connect_Toggled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_Toggled
func miqt_exec_callback_QGroupBox_Toggled(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func QGroupBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGroupBox_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGroupBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGroupBox_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGroupBox) Clicked1(checked bool) {
	C.QGroupBox_Clicked1(this.h, (C.bool)(checked))
}
func (this *QGroupBox) OnClicked1(slot func(checked bool)) {
	C.QGroupBox_connect_Clicked1(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_Clicked1
func miqt_exec_callback_QGroupBox_Clicked1(cb C.intptr_t, checked C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(checked bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(checked)

	gofunc(slotval1)
}

func (this *QGroupBox) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QGroupBox_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGroupBox) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	C.QGroupBox_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_MinimumSizeHint
func miqt_exec_callback_QGroupBox_MinimumSizeHint(self *C.QGroupBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QGroupBox) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGroupBox_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGroupBox) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QGroupBox_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_Event
func miqt_exec_callback_QGroupBox_Event(self *C.QGroupBox, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGroupBox) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGroupBox_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	C.QGroupBox_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_ChildEvent
func miqt_exec_callback_QGroupBox_ChildEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QGroupBox_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	C.QGroupBox_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_ResizeEvent
func miqt_exec_callback_QGroupBox_ResizeEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(event), nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QGroupBox_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	C.QGroupBox_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_PaintEvent
func miqt_exec_callback_QGroupBox_PaintEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(event), nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGroupBox_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	C.QGroupBox_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_FocusInEvent
func miqt_exec_callback_QGroupBox_FocusInEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QGroupBox_virtualbase_ChangeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QGroupBox_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_ChangeEvent
func miqt_exec_callback_QGroupBox_ChangeEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGroupBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QGroupBox_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	C.QGroupBox_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_MousePressEvent
func miqt_exec_callback_QGroupBox_MousePressEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QGroupBox_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	C.QGroupBox_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_MouseMoveEvent
func miqt_exec_callback_QGroupBox_MouseMoveEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QGroupBox_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	C.QGroupBox_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_MouseReleaseEvent
func miqt_exec_callback_QGroupBox_MouseReleaseEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_InitStyleOption(option *QStyleOptionGroupBox) {

	C.QGroupBox_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QGroupBox) OnInitStyleOption(slot func(super func(option *QStyleOptionGroupBox), option *QStyleOptionGroupBox)) {
	C.QGroupBox_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_InitStyleOption
func miqt_exec_callback_QGroupBox_InitStyleOption(self *C.QGroupBox, cb C.intptr_t, option *C.QStyleOptionGroupBox) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionGroupBox), option *QStyleOptionGroupBox))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQStyleOptionGroupBox(unsafe.Pointer(option), nil, nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QGroupBox) callVirtualBase_DevType() int {

	return (int)(C.QGroupBox_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QGroupBox) OnDevType(slot func(super func() int) int) {
	C.QGroupBox_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_DevType
func miqt_exec_callback_QGroupBox_DevType(self *C.QGroupBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QGroupBox) callVirtualBase_SetVisible(visible bool) {

	C.QGroupBox_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QGroupBox) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	C.QGroupBox_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_SetVisible
func miqt_exec_callback_QGroupBox_SetVisible(self *C.QGroupBox, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QGroupBox{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QGroupBox) callVirtualBase_SizeHint() *QSize {

	_ret := C.QGroupBox_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGroupBox) OnSizeHint(slot func(super func() *QSize) *QSize) {
	C.QGroupBox_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_SizeHint
func miqt_exec_callback_QGroupBox_SizeHint(self *C.QGroupBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QGroupBox) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QGroupBox_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QGroupBox) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	C.QGroupBox_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_HeightForWidth
func miqt_exec_callback_QGroupBox_HeightForWidth(self *C.QGroupBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGroupBox) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QGroupBox_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QGroupBox) OnHasHeightForWidth(slot func(super func() bool) bool) {
	C.QGroupBox_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_HasHeightForWidth
func miqt_exec_callback_QGroupBox_HasHeightForWidth(self *C.QGroupBox, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QGroupBox) callVirtualBase_PaintEngine() *QPaintEngine {

	return UnsafeNewQPaintEngine(unsafe.Pointer(C.QGroupBox_virtualbase_PaintEngine(unsafe.Pointer(this.h))))
}
func (this *QGroupBox) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	C.QGroupBox_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_PaintEngine
func miqt_exec_callback_QGroupBox_PaintEngine(self *C.QGroupBox, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QGroupBox) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QGroupBox_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	C.QGroupBox_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_MouseDoubleClickEvent
func miqt_exec_callback_QGroupBox_MouseDoubleClickEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QGroupBox_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	C.QGroupBox_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_WheelEvent
func miqt_exec_callback_QGroupBox_WheelEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGroupBox_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	C.QGroupBox_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_KeyPressEvent
func miqt_exec_callback_QGroupBox_KeyPressEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGroupBox_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	C.QGroupBox_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_KeyReleaseEvent
func miqt_exec_callback_QGroupBox_KeyReleaseEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGroupBox_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	C.QGroupBox_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_FocusOutEvent
func miqt_exec_callback_QGroupBox_FocusOutEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QGroupBox_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	C.QGroupBox_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_EnterEvent
func miqt_exec_callback_QGroupBox_EnterEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEnterEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QGroupBox_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QGroupBox_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_LeaveEvent
func miqt_exec_callback_QGroupBox_LeaveEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGroupBox{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QGroupBox_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	C.QGroupBox_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_MoveEvent
func miqt_exec_callback_QGroupBox_MoveEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMoveEvent(unsafe.Pointer(event), nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QGroupBox_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	C.QGroupBox_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_CloseEvent
func miqt_exec_callback_QGroupBox_CloseEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQCloseEvent(unsafe.Pointer(event), nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QGroupBox_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	C.QGroupBox_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_ContextMenuEvent
func miqt_exec_callback_QGroupBox_ContextMenuEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QGroupBox_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	C.QGroupBox_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_TabletEvent
func miqt_exec_callback_QGroupBox_TabletEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTabletEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QGroupBox_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	C.QGroupBox_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_ActionEvent
func miqt_exec_callback_QGroupBox_ActionEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQActionEvent(unsafe.Pointer(event), nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QGroupBox_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	C.QGroupBox_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_DragEnterEvent
func miqt_exec_callback_QGroupBox_DragEnterEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragEnterEvent(unsafe.Pointer(event), nil, nil, nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QGroupBox_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	C.QGroupBox_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_DragMoveEvent
func miqt_exec_callback_QGroupBox_DragMoveEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QGroupBox_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	C.QGroupBox_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_DragLeaveEvent
func miqt_exec_callback_QGroupBox_DragLeaveEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(event), nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QGroupBox_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	C.QGroupBox_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_DropEvent
func miqt_exec_callback_QGroupBox_DropEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(event), nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QGroupBox_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	C.QGroupBox_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_ShowEvent
func miqt_exec_callback_QGroupBox_ShowEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQShowEvent(unsafe.Pointer(event), nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QGroupBox_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGroupBox) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	C.QGroupBox_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_HideEvent
func miqt_exec_callback_QGroupBox_HideEvent(self *C.QGroupBox, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQHideEvent(unsafe.Pointer(event), nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QGroupBox_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QGroupBox) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	C.QGroupBox_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_NativeEvent
func miqt_exec_callback_QGroupBox_NativeEvent(self *C.QGroupBox, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QGroupBox) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QGroupBox_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QGroupBox) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	C.QGroupBox_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_Metric
func miqt_exec_callback_QGroupBox_Metric(self *C.QGroupBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGroupBox) callVirtualBase_InitPainter(painter *QPainter) {

	C.QGroupBox_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QGroupBox) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	C.QGroupBox_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_InitPainter
func miqt_exec_callback_QGroupBox_InitPainter(self *C.QGroupBox, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QGroupBox{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QGroupBox) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return UnsafeNewQPaintDevice(unsafe.Pointer(C.QGroupBox_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer())))
}
func (this *QGroupBox) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	C.QGroupBox_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_Redirected
func miqt_exec_callback_QGroupBox_Redirected(self *C.QGroupBox, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGroupBox) callVirtualBase_SharedPainter() *QPainter {

	return UnsafeNewQPainter(unsafe.Pointer(C.QGroupBox_virtualbase_SharedPainter(unsafe.Pointer(this.h))))
}
func (this *QGroupBox) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	C.QGroupBox_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_SharedPainter
func miqt_exec_callback_QGroupBox_SharedPainter(self *C.QGroupBox, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QGroupBox) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QGroupBox_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QGroupBox) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	C.QGroupBox_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_InputMethodEvent
func miqt_exec_callback_QGroupBox_InputMethodEvent(self *C.QGroupBox, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(param1), nil)

	gofunc((&QGroupBox{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGroupBox) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_ret := C.QGroupBox_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGroupBox) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	C.QGroupBox_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_InputMethodQuery
func miqt_exec_callback_QGroupBox_InputMethodQuery(self *C.QGroupBox, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGroupBox) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QGroupBox_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QGroupBox) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	C.QGroupBox_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGroupBox_FocusNextPrevChild
func miqt_exec_callback_QGroupBox_FocusNextPrevChild(self *C.QGroupBox, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QGroupBox{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QGroupBox) Delete() {
	C.QGroupBox_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGroupBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QGroupBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
