package qt

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
	h *C.QToolBox
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
func newQToolBox(h *C.QToolBox) *QToolBox {
	if h == nil {
		return nil
	}
	var outptr_QFrame *C.QFrame = nil
	C.QToolBox_virtbase(h, &outptr_QFrame)

	return &QToolBox{h: h,
		QFrame: newQFrame(outptr_QFrame)}
}

// UnsafeNewQToolBox constructs the type using only unsafe pointers.
func UnsafeNewQToolBox(h unsafe.Pointer) *QToolBox {
	return newQToolBox((*C.QToolBox)(h))
}

// NewQToolBox constructs a new QToolBox object.
func NewQToolBox(parent *QWidget) *QToolBox {

	return newQToolBox(C.QToolBox_new(parent.cPointer()))
}

// NewQToolBox2 constructs a new QToolBox object.
func NewQToolBox2() *QToolBox {

	return newQToolBox(C.QToolBox_new2())
}

// NewQToolBox3 constructs a new QToolBox object.
func NewQToolBox3(parent *QWidget, f WindowType) *QToolBox {

	return newQToolBox(C.QToolBox_new3(parent.cPointer(), (C.int)(f)))
}

func (this *QToolBox) MetaObject() *QMetaObject {
	return newQMetaObject(C.QToolBox_metaObject(this.h))
}

func (this *QToolBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QToolBox_metacast(this.h, param1_Cstring))
}

func QToolBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QToolBox_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QToolBox_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QToolBox) AddItem(widget *QWidget, text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QToolBox_addItem(this.h, widget.cPointer(), text_ms))
}

func (this *QToolBox) AddItem2(widget *QWidget, icon *QIcon, text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QToolBox_addItem2(this.h, widget.cPointer(), icon.cPointer(), text_ms))
}

func (this *QToolBox) InsertItem(index int, widget *QWidget, text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QToolBox_insertItem(this.h, (C.int)(index), widget.cPointer(), text_ms))
}

func (this *QToolBox) InsertItem2(index int, widget *QWidget, icon *QIcon, text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QToolBox_insertItem2(this.h, (C.int)(index), widget.cPointer(), icon.cPointer(), text_ms))
}

func (this *QToolBox) RemoveItem(index int) {
	C.QToolBox_removeItem(this.h, (C.int)(index))
}

func (this *QToolBox) SetItemEnabled(index int, enabled bool) {
	C.QToolBox_setItemEnabled(this.h, (C.int)(index), (C.bool)(enabled))
}

func (this *QToolBox) IsItemEnabled(index int) bool {
	return (bool)(C.QToolBox_isItemEnabled(this.h, (C.int)(index)))
}

func (this *QToolBox) SetItemText(index int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QToolBox_setItemText(this.h, (C.int)(index), text_ms)
}

func (this *QToolBox) ItemText(index int) string {
	var _ms C.struct_miqt_string = C.QToolBox_itemText(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QToolBox) SetItemIcon(index int, icon *QIcon) {
	C.QToolBox_setItemIcon(this.h, (C.int)(index), icon.cPointer())
}

func (this *QToolBox) ItemIcon(index int) *QIcon {
	_goptr := newQIcon(C.QToolBox_itemIcon(this.h, (C.int)(index)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QToolBox) SetItemToolTip(index int, toolTip string) {
	toolTip_ms := C.struct_miqt_string{}
	toolTip_ms.data = C.CString(toolTip)
	toolTip_ms.len = C.size_t(len(toolTip))
	defer C.free(unsafe.Pointer(toolTip_ms.data))
	C.QToolBox_setItemToolTip(this.h, (C.int)(index), toolTip_ms)
}

func (this *QToolBox) ItemToolTip(index int) string {
	var _ms C.struct_miqt_string = C.QToolBox_itemToolTip(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QToolBox) CurrentIndex() int {
	return (int)(C.QToolBox_currentIndex(this.h))
}

func (this *QToolBox) CurrentWidget() *QWidget {
	return newQWidget(C.QToolBox_currentWidget(this.h))
}

func (this *QToolBox) Widget(index int) *QWidget {
	return newQWidget(C.QToolBox_widget(this.h, (C.int)(index)))
}

func (this *QToolBox) IndexOf(widget *QWidget) int {
	return (int)(C.QToolBox_indexOf(this.h, widget.cPointer()))
}

func (this *QToolBox) Count() int {
	return (int)(C.QToolBox_count(this.h))
}

func (this *QToolBox) SetCurrentIndex(index int) {
	C.QToolBox_setCurrentIndex(this.h, (C.int)(index))
}

func (this *QToolBox) SetCurrentWidget(widget *QWidget) {
	C.QToolBox_setCurrentWidget(this.h, widget.cPointer())
}

func (this *QToolBox) CurrentChanged(index int) {
	C.QToolBox_currentChanged(this.h, (C.int)(index))
}
func (this *QToolBox) OnCurrentChanged(slot func(index int)) {
	C.QToolBox_connect_currentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QToolBox_currentChanged
func miqt_exec_callback_QToolBox_currentChanged(cb C.intptr_t, index C.int) {
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
	var _ms C.struct_miqt_string = C.QToolBox_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QToolBox_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QToolBox_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QToolBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QToolBox_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QToolBox) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QToolBox_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QToolBox) Onevent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QToolBox_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_event
func miqt_exec_callback_QToolBox_event(self *C.QToolBox, cb C.intptr_t, e *C.QEvent) C.bool {
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

	C.QToolBox_virtualbase_itemInserted(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QToolBox) OnitemInserted(slot func(super func(index int), index int)) {
	ok := C.QToolBox_override_virtual_itemInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_itemInserted
func miqt_exec_callback_QToolBox_itemInserted(self *C.QToolBox, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QToolBox{h: self}).callVirtualBase_ItemInserted, slotval1)

}

func (this *QToolBox) callVirtualBase_ItemRemoved(index int) {

	C.QToolBox_virtualbase_itemRemoved(unsafe.Pointer(this.h), (C.int)(index))

}
func (this *QToolBox) OnitemRemoved(slot func(super func(index int), index int)) {
	ok := C.QToolBox_override_virtual_itemRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_itemRemoved
func miqt_exec_callback_QToolBox_itemRemoved(self *C.QToolBox, cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int), index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc((&QToolBox{h: self}).callVirtualBase_ItemRemoved, slotval1)

}

func (this *QToolBox) callVirtualBase_ShowEvent(e *QShowEvent) {

	C.QToolBox_virtualbase_showEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QToolBox) OnshowEvent(slot func(super func(e *QShowEvent), e *QShowEvent)) {
	ok := C.QToolBox_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_showEvent
func miqt_exec_callback_QToolBox_showEvent(self *C.QToolBox, cb C.intptr_t, e *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QShowEvent), e *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(e)

	gofunc((&QToolBox{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QToolBox_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolBox) OnchangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QToolBox_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_changeEvent
func miqt_exec_callback_QToolBox_changeEvent(self *C.QToolBox, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QToolBox{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QToolBox_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QToolBox) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QToolBox_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_sizeHint
func miqt_exec_callback_QToolBox_sizeHint(self *C.QToolBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBox{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QToolBox) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QToolBox_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolBox) OnpaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QToolBox_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_paintEvent
func miqt_exec_callback_QToolBox_paintEvent(self *C.QToolBox, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QToolBox{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_DevType() int {

	return (int)(C.QToolBox_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QToolBox) OndevType(slot func(super func() int) int) {
	ok := C.QToolBox_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_devType
func miqt_exec_callback_QToolBox_devType(self *C.QToolBox, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBox{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QToolBox) callVirtualBase_SetVisible(visible bool) {

	C.QToolBox_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QToolBox) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QToolBox_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_setVisible
func miqt_exec_callback_QToolBox_setVisible(self *C.QToolBox, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QToolBox{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QToolBox) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QToolBox_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QToolBox) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QToolBox_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_minimumSizeHint
func miqt_exec_callback_QToolBox_minimumSizeHint(self *C.QToolBox, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBox{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QToolBox) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QToolBox_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QToolBox) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QToolBox_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_heightForWidth
func miqt_exec_callback_QToolBox_heightForWidth(self *C.QToolBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QToolBox{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QToolBox) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QToolBox_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QToolBox) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QToolBox_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_hasHeightForWidth
func miqt_exec_callback_QToolBox_hasHeightForWidth(self *C.QToolBox, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBox{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QToolBox) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QToolBox_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QToolBox) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QToolBox_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_paintEngine
func miqt_exec_callback_QToolBox_paintEngine(self *C.QToolBox, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBox{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QToolBox) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QToolBox_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OnmousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QToolBox_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_mousePressEvent
func miqt_exec_callback_QToolBox_mousePressEvent(self *C.QToolBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QToolBox_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OnmouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QToolBox_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_mouseReleaseEvent
func miqt_exec_callback_QToolBox_mouseReleaseEvent(self *C.QToolBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QToolBox_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QToolBox_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_mouseDoubleClickEvent
func miqt_exec_callback_QToolBox_mouseDoubleClickEvent(self *C.QToolBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QToolBox_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OnmouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QToolBox_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_mouseMoveEvent
func miqt_exec_callback_QToolBox_mouseMoveEvent(self *C.QToolBox, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QToolBox_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QToolBox_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_wheelEvent
func miqt_exec_callback_QToolBox_wheelEvent(self *C.QToolBox, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QToolBox_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OnkeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QToolBox_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_keyPressEvent
func miqt_exec_callback_QToolBox_keyPressEvent(self *C.QToolBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QToolBox_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QToolBox_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_keyReleaseEvent
func miqt_exec_callback_QToolBox_keyReleaseEvent(self *C.QToolBox, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QToolBox_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QToolBox_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_focusInEvent
func miqt_exec_callback_QToolBox_focusInEvent(self *C.QToolBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QToolBox_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QToolBox_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_focusOutEvent
func miqt_exec_callback_QToolBox_focusOutEvent(self *C.QToolBox, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_EnterEvent(event *QEvent) {

	C.QToolBox_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OnenterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QToolBox_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_enterEvent
func miqt_exec_callback_QToolBox_enterEvent(self *C.QToolBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QToolBox_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QToolBox_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_leaveEvent
func miqt_exec_callback_QToolBox_leaveEvent(self *C.QToolBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QToolBox_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QToolBox_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_moveEvent
func miqt_exec_callback_QToolBox_moveEvent(self *C.QToolBox, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QToolBox_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OnresizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QToolBox_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_resizeEvent
func miqt_exec_callback_QToolBox_resizeEvent(self *C.QToolBox, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QToolBox_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OncloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QToolBox_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_closeEvent
func miqt_exec_callback_QToolBox_closeEvent(self *C.QToolBox, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QToolBox_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OncontextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QToolBox_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_contextMenuEvent
func miqt_exec_callback_QToolBox_contextMenuEvent(self *C.QToolBox, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QToolBox_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QToolBox_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_tabletEvent
func miqt_exec_callback_QToolBox_tabletEvent(self *C.QToolBox, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QToolBox_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QToolBox_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_actionEvent
func miqt_exec_callback_QToolBox_actionEvent(self *C.QToolBox, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QToolBox_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QToolBox_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_dragEnterEvent
func miqt_exec_callback_QToolBox_dragEnterEvent(self *C.QToolBox, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QToolBox_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QToolBox_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_dragMoveEvent
func miqt_exec_callback_QToolBox_dragMoveEvent(self *C.QToolBox, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QToolBox_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QToolBox_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_dragLeaveEvent
func miqt_exec_callback_QToolBox_dragLeaveEvent(self *C.QToolBox, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QToolBox_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QToolBox_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_dropEvent
func miqt_exec_callback_QToolBox_dropEvent(self *C.QToolBox, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QToolBox_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QToolBox_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_hideEvent
func miqt_exec_callback_QToolBox_hideEvent(self *C.QToolBox, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QToolBox_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QToolBox) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QToolBox_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_nativeEvent
func miqt_exec_callback_QToolBox_nativeEvent(self *C.QToolBox, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QToolBox{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QToolBox) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QToolBox_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QToolBox) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QToolBox_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_metric
func miqt_exec_callback_QToolBox_metric(self *C.QToolBox, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QToolBox{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QToolBox) callVirtualBase_InitPainter(painter *QPainter) {

	C.QToolBox_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QToolBox) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QToolBox_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_initPainter
func miqt_exec_callback_QToolBox_initPainter(self *C.QToolBox, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QToolBox{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QToolBox) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QToolBox_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QToolBox) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QToolBox_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_redirected
func miqt_exec_callback_QToolBox_redirected(self *C.QToolBox, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QToolBox{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QToolBox) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QToolBox_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QToolBox) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QToolBox_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_sharedPainter
func miqt_exec_callback_QToolBox_sharedPainter(self *C.QToolBox, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QToolBox{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QToolBox) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QToolBox_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QToolBox) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QToolBox_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_inputMethodEvent
func miqt_exec_callback_QToolBox_inputMethodEvent(self *C.QToolBox, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QToolBox{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QToolBox_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QToolBox) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QToolBox_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_inputMethodQuery
func miqt_exec_callback_QToolBox_inputMethodQuery(self *C.QToolBox, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QToolBox{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QToolBox) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QToolBox_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QToolBox) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QToolBox_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_focusNextPrevChild
func miqt_exec_callback_QToolBox_focusNextPrevChild(self *C.QToolBox, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QToolBox{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QToolBox) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QToolBox_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QToolBox) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QToolBox_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_eventFilter
func miqt_exec_callback_QToolBox_eventFilter(self *C.QToolBox, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QToolBox{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QToolBox) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QToolBox_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QToolBox_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_timerEvent
func miqt_exec_callback_QToolBox_timerEvent(self *C.QToolBox, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QToolBox_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QToolBox_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_childEvent
func miqt_exec_callback_QToolBox_childEvent(self *C.QToolBox, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_CustomEvent(event *QEvent) {

	C.QToolBox_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QToolBox) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QToolBox_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_customEvent
func miqt_exec_callback_QToolBox_customEvent(self *C.QToolBox, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QToolBox{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QToolBox) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QToolBox_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QToolBox) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QToolBox_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_connectNotify
func miqt_exec_callback_QToolBox_connectNotify(self *C.QToolBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QToolBox{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QToolBox) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QToolBox_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QToolBox) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QToolBox_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QToolBox_disconnectNotify
func miqt_exec_callback_QToolBox_disconnectNotify(self *C.QToolBox, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QToolBox{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QToolBox) Delete() {
	C.QToolBox_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QToolBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QToolBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
