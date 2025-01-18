package qt6

/*

#include "gen_qlayoutitem.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QLayoutItem struct {
	h *C.QLayoutItem
}

func (this *QLayoutItem) cPointer() *C.QLayoutItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLayoutItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLayoutItem constructs the type using only CGO pointers.
func newQLayoutItem(h *C.QLayoutItem) *QLayoutItem {
	if h == nil {
		return nil
	}

	return &QLayoutItem{h: h}
}

// UnsafeNewQLayoutItem constructs the type using only unsafe pointers.
func UnsafeNewQLayoutItem(h unsafe.Pointer) *QLayoutItem {
	return newQLayoutItem((*C.QLayoutItem)(h))
}

// NewQLayoutItem constructs a new QLayoutItem object.
func NewQLayoutItem() *QLayoutItem {

	return newQLayoutItem(C.QLayoutItem_new())
}

// NewQLayoutItem2 constructs a new QLayoutItem object.
func NewQLayoutItem2(param1 *QLayoutItem) *QLayoutItem {

	return newQLayoutItem(C.QLayoutItem_new2(param1.cPointer()))
}

// NewQLayoutItem3 constructs a new QLayoutItem object.
func NewQLayoutItem3(alignment AlignmentFlag) *QLayoutItem {

	return newQLayoutItem(C.QLayoutItem_new3((C.int)(alignment)))
}

func (this *QLayoutItem) SizeHint() *QSize {
	_goptr := newQSize(C.QLayoutItem_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayoutItem) MinimumSize() *QSize {
	_goptr := newQSize(C.QLayoutItem_MinimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayoutItem) MaximumSize() *QSize {
	_goptr := newQSize(C.QLayoutItem_MaximumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayoutItem) ExpandingDirections() Orientation {
	return (Orientation)(C.QLayoutItem_ExpandingDirections(this.h))
}

func (this *QLayoutItem) SetGeometry(geometry *QRect) {
	C.QLayoutItem_SetGeometry(this.h, geometry.cPointer())
}

func (this *QLayoutItem) Geometry() *QRect {
	_goptr := newQRect(C.QLayoutItem_Geometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayoutItem) IsEmpty() bool {
	return (bool)(C.QLayoutItem_IsEmpty(this.h))
}

func (this *QLayoutItem) HasHeightForWidth() bool {
	return (bool)(C.QLayoutItem_HasHeightForWidth(this.h))
}

func (this *QLayoutItem) HeightForWidth(param1 int) int {
	return (int)(C.QLayoutItem_HeightForWidth(this.h, (C.int)(param1)))
}

func (this *QLayoutItem) MinimumHeightForWidth(param1 int) int {
	return (int)(C.QLayoutItem_MinimumHeightForWidth(this.h, (C.int)(param1)))
}

func (this *QLayoutItem) Invalidate() {
	C.QLayoutItem_Invalidate(this.h)
}

func (this *QLayoutItem) Widget() *QWidget {
	return newQWidget(C.QLayoutItem_Widget(this.h))
}

func (this *QLayoutItem) Layout() *QLayout {
	return newQLayout(C.QLayoutItem_Layout(this.h))
}

func (this *QLayoutItem) SpacerItem() *QSpacerItem {
	return newQSpacerItem(C.QLayoutItem_SpacerItem(this.h))
}

func (this *QLayoutItem) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QLayoutItem_Alignment(this.h))
}

func (this *QLayoutItem) SetAlignment(a AlignmentFlag) {
	C.QLayoutItem_SetAlignment(this.h, (C.int)(a))
}

func (this *QLayoutItem) ControlTypes() QSizePolicy__ControlType {
	return (QSizePolicy__ControlType)(C.QLayoutItem_ControlTypes(this.h))
}
func (this *QLayoutItem) OnSizeHint(slot func() *QSize) {
	ok := C.QLayoutItem_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_SizeHint
func miqt_exec_callback_QLayoutItem_SizeHint(self *C.QLayoutItem, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}
func (this *QLayoutItem) OnMinimumSize(slot func() *QSize) {
	ok := C.QLayoutItem_override_virtual_MinimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_MinimumSize
func miqt_exec_callback_QLayoutItem_MinimumSize(self *C.QLayoutItem, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}
func (this *QLayoutItem) OnMaximumSize(slot func() *QSize) {
	ok := C.QLayoutItem_override_virtual_MaximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_MaximumSize
func miqt_exec_callback_QLayoutItem_MaximumSize(self *C.QLayoutItem, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}
func (this *QLayoutItem) OnExpandingDirections(slot func() Orientation) {
	ok := C.QLayoutItem_override_virtual_ExpandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_ExpandingDirections
func miqt_exec_callback_QLayoutItem_ExpandingDirections(self *C.QLayoutItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QLayoutItem) OnSetGeometry(slot func(geometry *QRect)) {
	ok := C.QLayoutItem_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_SetGeometry
func miqt_exec_callback_QLayoutItem_SetGeometry(self *C.QLayoutItem, cb C.intptr_t, geometry *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(geometry)

	gofunc(slotval1)

}
func (this *QLayoutItem) OnGeometry(slot func() *QRect) {
	ok := C.QLayoutItem_override_virtual_Geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_Geometry
func miqt_exec_callback_QLayoutItem_Geometry(self *C.QLayoutItem, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}
func (this *QLayoutItem) OnIsEmpty(slot func() bool) {
	ok := C.QLayoutItem_override_virtual_IsEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_IsEmpty
func miqt_exec_callback_QLayoutItem_IsEmpty(self *C.QLayoutItem, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}

func (this *QLayoutItem) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QLayoutItem_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QLayoutItem) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QLayoutItem_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_HasHeightForWidth
func miqt_exec_callback_QLayoutItem_HasHeightForWidth(self *C.QLayoutItem, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayoutItem{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QLayoutItem) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QLayoutItem_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QLayoutItem) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QLayoutItem_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_HeightForWidth
func miqt_exec_callback_QLayoutItem_HeightForWidth(self *C.QLayoutItem, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QLayoutItem{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QLayoutItem) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QLayoutItem_virtualbase_MinimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QLayoutItem) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QLayoutItem_override_virtual_MinimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_MinimumHeightForWidth
func miqt_exec_callback_QLayoutItem_MinimumHeightForWidth(self *C.QLayoutItem, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QLayoutItem{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QLayoutItem) callVirtualBase_Invalidate() {

	C.QLayoutItem_virtualbase_Invalidate(unsafe.Pointer(this.h))

}
func (this *QLayoutItem) OnInvalidate(slot func(super func())) {
	ok := C.QLayoutItem_override_virtual_Invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_Invalidate
func miqt_exec_callback_QLayoutItem_Invalidate(self *C.QLayoutItem, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QLayoutItem{h: self}).callVirtualBase_Invalidate)

}

func (this *QLayoutItem) callVirtualBase_Widget() *QWidget {

	return newQWidget(C.QLayoutItem_virtualbase_Widget(unsafe.Pointer(this.h)))

}
func (this *QLayoutItem) OnWidget(slot func(super func() *QWidget) *QWidget) {
	ok := C.QLayoutItem_override_virtual_Widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_Widget
func miqt_exec_callback_QLayoutItem_Widget(self *C.QLayoutItem, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayoutItem{h: self}).callVirtualBase_Widget)

	return virtualReturn.cPointer()

}

func (this *QLayoutItem) callVirtualBase_Layout() *QLayout {

	return newQLayout(C.QLayoutItem_virtualbase_Layout(unsafe.Pointer(this.h)))

}
func (this *QLayoutItem) OnLayout(slot func(super func() *QLayout) *QLayout) {
	ok := C.QLayoutItem_override_virtual_Layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_Layout
func miqt_exec_callback_QLayoutItem_Layout(self *C.QLayoutItem, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLayout) *QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayoutItem{h: self}).callVirtualBase_Layout)

	return virtualReturn.cPointer()

}

func (this *QLayoutItem) callVirtualBase_SpacerItem() *QSpacerItem {

	return newQSpacerItem(C.QLayoutItem_virtualbase_SpacerItem(unsafe.Pointer(this.h)))

}
func (this *QLayoutItem) OnSpacerItem(slot func(super func() *QSpacerItem) *QSpacerItem) {
	ok := C.QLayoutItem_override_virtual_SpacerItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_SpacerItem
func miqt_exec_callback_QLayoutItem_SpacerItem(self *C.QLayoutItem, cb C.intptr_t) *C.QSpacerItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSpacerItem) *QSpacerItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayoutItem{h: self}).callVirtualBase_SpacerItem)

	return virtualReturn.cPointer()

}

func (this *QLayoutItem) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QLayoutItem_virtualbase_ControlTypes(unsafe.Pointer(this.h)))

}
func (this *QLayoutItem) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	ok := C.QLayoutItem_override_virtual_ControlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_ControlTypes
func miqt_exec_callback_QLayoutItem_ControlTypes(self *C.QLayoutItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayoutItem{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QLayoutItem) Delete() {
	C.QLayoutItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLayoutItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QLayoutItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QSpacerItem struct {
	h *C.QSpacerItem
	*QLayoutItem
}

func (this *QSpacerItem) cPointer() *C.QSpacerItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSpacerItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSpacerItem constructs the type using only CGO pointers.
func newQSpacerItem(h *C.QSpacerItem) *QSpacerItem {
	if h == nil {
		return nil
	}
	var outptr_QLayoutItem *C.QLayoutItem = nil
	C.QSpacerItem_virtbase(h, &outptr_QLayoutItem)

	return &QSpacerItem{h: h,
		QLayoutItem: newQLayoutItem(outptr_QLayoutItem)}
}

// UnsafeNewQSpacerItem constructs the type using only unsafe pointers.
func UnsafeNewQSpacerItem(h unsafe.Pointer) *QSpacerItem {
	return newQSpacerItem((*C.QSpacerItem)(h))
}

// NewQSpacerItem constructs a new QSpacerItem object.
func NewQSpacerItem(w int, h int) *QSpacerItem {

	return newQSpacerItem(C.QSpacerItem_new((C.int)(w), (C.int)(h)))
}

// NewQSpacerItem2 constructs a new QSpacerItem object.
func NewQSpacerItem2(param1 *QSpacerItem) *QSpacerItem {

	return newQSpacerItem(C.QSpacerItem_new2(param1.cPointer()))
}

// NewQSpacerItem3 constructs a new QSpacerItem object.
func NewQSpacerItem3(w int, h int, hData QSizePolicy__Policy) *QSpacerItem {

	return newQSpacerItem(C.QSpacerItem_new3((C.int)(w), (C.int)(h), (C.int)(hData)))
}

// NewQSpacerItem4 constructs a new QSpacerItem object.
func NewQSpacerItem4(w int, h int, hData QSizePolicy__Policy, vData QSizePolicy__Policy) *QSpacerItem {

	return newQSpacerItem(C.QSpacerItem_new4((C.int)(w), (C.int)(h), (C.int)(hData), (C.int)(vData)))
}

func (this *QSpacerItem) ChangeSize(w int, h int) {
	C.QSpacerItem_ChangeSize(this.h, (C.int)(w), (C.int)(h))
}

func (this *QSpacerItem) SizeHint() *QSize {
	_goptr := newQSize(C.QSpacerItem_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpacerItem) MinimumSize() *QSize {
	_goptr := newQSize(C.QSpacerItem_MinimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpacerItem) MaximumSize() *QSize {
	_goptr := newQSize(C.QSpacerItem_MaximumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpacerItem) ExpandingDirections() Orientation {
	return (Orientation)(C.QSpacerItem_ExpandingDirections(this.h))
}

func (this *QSpacerItem) IsEmpty() bool {
	return (bool)(C.QSpacerItem_IsEmpty(this.h))
}

func (this *QSpacerItem) SetGeometry(geometry *QRect) {
	C.QSpacerItem_SetGeometry(this.h, geometry.cPointer())
}

func (this *QSpacerItem) Geometry() *QRect {
	_goptr := newQRect(C.QSpacerItem_Geometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpacerItem) SpacerItem() *QSpacerItem {
	return newQSpacerItem(C.QSpacerItem_SpacerItem(this.h))
}

func (this *QSpacerItem) SizePolicy() *QSizePolicy {
	_goptr := newQSizePolicy(C.QSpacerItem_SizePolicy(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpacerItem) ChangeSize3(w int, h int, hData QSizePolicy__Policy) {
	C.QSpacerItem_ChangeSize3(this.h, (C.int)(w), (C.int)(h), (C.int)(hData))
}

func (this *QSpacerItem) ChangeSize4(w int, h int, hData QSizePolicy__Policy, vData QSizePolicy__Policy) {
	C.QSpacerItem_ChangeSize4(this.h, (C.int)(w), (C.int)(h), (C.int)(hData), (C.int)(vData))
}

func (this *QSpacerItem) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QSpacerItem_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSpacerItem) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSpacerItem_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_SizeHint
func miqt_exec_callback_QSpacerItem_SizeHint(self *C.QSpacerItem, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QSpacerItem) callVirtualBase_MinimumSize() *QSize {

	_goptr := newQSize(C.QSpacerItem_virtualbase_MinimumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSpacerItem) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QSpacerItem_override_virtual_MinimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_MinimumSize
func miqt_exec_callback_QSpacerItem_MinimumSize(self *C.QSpacerItem, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QSpacerItem) callVirtualBase_MaximumSize() *QSize {

	_goptr := newQSize(C.QSpacerItem_virtualbase_MaximumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSpacerItem) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QSpacerItem_override_virtual_MaximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_MaximumSize
func miqt_exec_callback_QSpacerItem_MaximumSize(self *C.QSpacerItem, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QSpacerItem) callVirtualBase_ExpandingDirections() Orientation {

	return (Orientation)(C.QSpacerItem_virtualbase_ExpandingDirections(unsafe.Pointer(this.h)))

}
func (this *QSpacerItem) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	ok := C.QSpacerItem_override_virtual_ExpandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_ExpandingDirections
func miqt_exec_callback_QSpacerItem_ExpandingDirections(self *C.QSpacerItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QSpacerItem) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QSpacerItem_virtualbase_IsEmpty(unsafe.Pointer(this.h)))

}
func (this *QSpacerItem) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QSpacerItem_override_virtual_IsEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_IsEmpty
func miqt_exec_callback_QSpacerItem_IsEmpty(self *C.QSpacerItem, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QSpacerItem) callVirtualBase_SetGeometry(geometry *QRect) {

	C.QSpacerItem_virtualbase_SetGeometry(unsafe.Pointer(this.h), geometry.cPointer())

}
func (this *QSpacerItem) OnSetGeometry(slot func(super func(geometry *QRect), geometry *QRect)) {
	ok := C.QSpacerItem_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_SetGeometry
func miqt_exec_callback_QSpacerItem_SetGeometry(self *C.QSpacerItem, cb C.intptr_t, geometry *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(geometry *QRect), geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(geometry)

	gofunc((&QSpacerItem{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QSpacerItem) callVirtualBase_Geometry() *QRect {

	_goptr := newQRect(C.QSpacerItem_virtualbase_Geometry(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSpacerItem) OnGeometry(slot func(super func() *QRect) *QRect) {
	ok := C.QSpacerItem_override_virtual_Geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_Geometry
func miqt_exec_callback_QSpacerItem_Geometry(self *C.QSpacerItem, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_Geometry)

	return virtualReturn.cPointer()

}

func (this *QSpacerItem) callVirtualBase_SpacerItem() *QSpacerItem {

	return newQSpacerItem(C.QSpacerItem_virtualbase_SpacerItem(unsafe.Pointer(this.h)))

}
func (this *QSpacerItem) OnSpacerItem(slot func(super func() *QSpacerItem) *QSpacerItem) {
	ok := C.QSpacerItem_override_virtual_SpacerItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_SpacerItem
func miqt_exec_callback_QSpacerItem_SpacerItem(self *C.QSpacerItem, cb C.intptr_t) *C.QSpacerItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSpacerItem) *QSpacerItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_SpacerItem)

	return virtualReturn.cPointer()

}

func (this *QSpacerItem) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QSpacerItem_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QSpacerItem) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QSpacerItem_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_HasHeightForWidth
func miqt_exec_callback_QSpacerItem_HasHeightForWidth(self *C.QSpacerItem, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QSpacerItem) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QSpacerItem_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSpacerItem) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QSpacerItem_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_HeightForWidth
func miqt_exec_callback_QSpacerItem_HeightForWidth(self *C.QSpacerItem, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSpacerItem) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QSpacerItem_virtualbase_MinimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSpacerItem) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QSpacerItem_override_virtual_MinimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_MinimumHeightForWidth
func miqt_exec_callback_QSpacerItem_MinimumHeightForWidth(self *C.QSpacerItem, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSpacerItem) callVirtualBase_Invalidate() {

	C.QSpacerItem_virtualbase_Invalidate(unsafe.Pointer(this.h))

}
func (this *QSpacerItem) OnInvalidate(slot func(super func())) {
	ok := C.QSpacerItem_override_virtual_Invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_Invalidate
func miqt_exec_callback_QSpacerItem_Invalidate(self *C.QSpacerItem, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSpacerItem{h: self}).callVirtualBase_Invalidate)

}

func (this *QSpacerItem) callVirtualBase_Widget() *QWidget {

	return newQWidget(C.QSpacerItem_virtualbase_Widget(unsafe.Pointer(this.h)))

}
func (this *QSpacerItem) OnWidget(slot func(super func() *QWidget) *QWidget) {
	ok := C.QSpacerItem_override_virtual_Widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_Widget
func miqt_exec_callback_QSpacerItem_Widget(self *C.QSpacerItem, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_Widget)

	return virtualReturn.cPointer()

}

func (this *QSpacerItem) callVirtualBase_Layout() *QLayout {

	return newQLayout(C.QSpacerItem_virtualbase_Layout(unsafe.Pointer(this.h)))

}
func (this *QSpacerItem) OnLayout(slot func(super func() *QLayout) *QLayout) {
	ok := C.QSpacerItem_override_virtual_Layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_Layout
func miqt_exec_callback_QSpacerItem_Layout(self *C.QSpacerItem, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLayout) *QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_Layout)

	return virtualReturn.cPointer()

}

func (this *QSpacerItem) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QSpacerItem_virtualbase_ControlTypes(unsafe.Pointer(this.h)))

}
func (this *QSpacerItem) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	ok := C.QSpacerItem_override_virtual_ControlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_ControlTypes
func miqt_exec_callback_QSpacerItem_ControlTypes(self *C.QSpacerItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QSpacerItem) Delete() {
	C.QSpacerItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSpacerItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QSpacerItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWidgetItem struct {
	h *C.QWidgetItem
	*QLayoutItem
}

func (this *QWidgetItem) cPointer() *C.QWidgetItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWidgetItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWidgetItem constructs the type using only CGO pointers.
func newQWidgetItem(h *C.QWidgetItem) *QWidgetItem {
	if h == nil {
		return nil
	}
	var outptr_QLayoutItem *C.QLayoutItem = nil
	C.QWidgetItem_virtbase(h, &outptr_QLayoutItem)

	return &QWidgetItem{h: h,
		QLayoutItem: newQLayoutItem(outptr_QLayoutItem)}
}

// UnsafeNewQWidgetItem constructs the type using only unsafe pointers.
func UnsafeNewQWidgetItem(h unsafe.Pointer) *QWidgetItem {
	return newQWidgetItem((*C.QWidgetItem)(h))
}

// NewQWidgetItem constructs a new QWidgetItem object.
func NewQWidgetItem(w *QWidget) *QWidgetItem {

	return newQWidgetItem(C.QWidgetItem_new(w.cPointer()))
}

func (this *QWidgetItem) SizeHint() *QSize {
	_goptr := newQSize(C.QWidgetItem_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItem) MinimumSize() *QSize {
	_goptr := newQSize(C.QWidgetItem_MinimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItem) MaximumSize() *QSize {
	_goptr := newQSize(C.QWidgetItem_MaximumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItem) ExpandingDirections() Orientation {
	return (Orientation)(C.QWidgetItem_ExpandingDirections(this.h))
}

func (this *QWidgetItem) IsEmpty() bool {
	return (bool)(C.QWidgetItem_IsEmpty(this.h))
}

func (this *QWidgetItem) SetGeometry(geometry *QRect) {
	C.QWidgetItem_SetGeometry(this.h, geometry.cPointer())
}

func (this *QWidgetItem) Geometry() *QRect {
	_goptr := newQRect(C.QWidgetItem_Geometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItem) Widget() *QWidget {
	return newQWidget(C.QWidgetItem_Widget(this.h))
}

func (this *QWidgetItem) HasHeightForWidth() bool {
	return (bool)(C.QWidgetItem_HasHeightForWidth(this.h))
}

func (this *QWidgetItem) HeightForWidth(param1 int) int {
	return (int)(C.QWidgetItem_HeightForWidth(this.h, (C.int)(param1)))
}

func (this *QWidgetItem) MinimumHeightForWidth(param1 int) int {
	return (int)(C.QWidgetItem_MinimumHeightForWidth(this.h, (C.int)(param1)))
}

func (this *QWidgetItem) ControlTypes() QSizePolicy__ControlType {
	return (QSizePolicy__ControlType)(C.QWidgetItem_ControlTypes(this.h))
}

func (this *QWidgetItem) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QWidgetItem_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidgetItem) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QWidgetItem_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_SizeHint
func miqt_exec_callback_QWidgetItem_SizeHint(self *C.QWidgetItem, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QWidgetItem) callVirtualBase_MinimumSize() *QSize {

	_goptr := newQSize(C.QWidgetItem_virtualbase_MinimumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidgetItem) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QWidgetItem_override_virtual_MinimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_MinimumSize
func miqt_exec_callback_QWidgetItem_MinimumSize(self *C.QWidgetItem, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QWidgetItem) callVirtualBase_MaximumSize() *QSize {

	_goptr := newQSize(C.QWidgetItem_virtualbase_MaximumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidgetItem) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QWidgetItem_override_virtual_MaximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_MaximumSize
func miqt_exec_callback_QWidgetItem_MaximumSize(self *C.QWidgetItem, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QWidgetItem) callVirtualBase_ExpandingDirections() Orientation {

	return (Orientation)(C.QWidgetItem_virtualbase_ExpandingDirections(unsafe.Pointer(this.h)))

}
func (this *QWidgetItem) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	ok := C.QWidgetItem_override_virtual_ExpandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_ExpandingDirections
func miqt_exec_callback_QWidgetItem_ExpandingDirections(self *C.QWidgetItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QWidgetItem) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QWidgetItem_virtualbase_IsEmpty(unsafe.Pointer(this.h)))

}
func (this *QWidgetItem) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QWidgetItem_override_virtual_IsEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_IsEmpty
func miqt_exec_callback_QWidgetItem_IsEmpty(self *C.QWidgetItem, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QWidgetItem) callVirtualBase_SetGeometry(geometry *QRect) {

	C.QWidgetItem_virtualbase_SetGeometry(unsafe.Pointer(this.h), geometry.cPointer())

}
func (this *QWidgetItem) OnSetGeometry(slot func(super func(geometry *QRect), geometry *QRect)) {
	ok := C.QWidgetItem_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_SetGeometry
func miqt_exec_callback_QWidgetItem_SetGeometry(self *C.QWidgetItem, cb C.intptr_t, geometry *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(geometry *QRect), geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(geometry)

	gofunc((&QWidgetItem{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QWidgetItem) callVirtualBase_Geometry() *QRect {

	_goptr := newQRect(C.QWidgetItem_virtualbase_Geometry(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidgetItem) OnGeometry(slot func(super func() *QRect) *QRect) {
	ok := C.QWidgetItem_override_virtual_Geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_Geometry
func miqt_exec_callback_QWidgetItem_Geometry(self *C.QWidgetItem, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_Geometry)

	return virtualReturn.cPointer()

}

func (this *QWidgetItem) callVirtualBase_Widget() *QWidget {

	return newQWidget(C.QWidgetItem_virtualbase_Widget(unsafe.Pointer(this.h)))

}
func (this *QWidgetItem) OnWidget(slot func(super func() *QWidget) *QWidget) {
	ok := C.QWidgetItem_override_virtual_Widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_Widget
func miqt_exec_callback_QWidgetItem_Widget(self *C.QWidgetItem, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_Widget)

	return virtualReturn.cPointer()

}

func (this *QWidgetItem) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QWidgetItem_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QWidgetItem) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QWidgetItem_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_HasHeightForWidth
func miqt_exec_callback_QWidgetItem_HasHeightForWidth(self *C.QWidgetItem, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QWidgetItem) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QWidgetItem_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWidgetItem) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QWidgetItem_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_HeightForWidth
func miqt_exec_callback_QWidgetItem_HeightForWidth(self *C.QWidgetItem, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWidgetItem) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QWidgetItem_virtualbase_MinimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWidgetItem) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QWidgetItem_override_virtual_MinimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_MinimumHeightForWidth
func miqt_exec_callback_QWidgetItem_MinimumHeightForWidth(self *C.QWidgetItem, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWidgetItem) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QWidgetItem_virtualbase_ControlTypes(unsafe.Pointer(this.h)))

}
func (this *QWidgetItem) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	ok := C.QWidgetItem_override_virtual_ControlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_ControlTypes
func miqt_exec_callback_QWidgetItem_ControlTypes(self *C.QWidgetItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

func (this *QWidgetItem) callVirtualBase_Invalidate() {

	C.QWidgetItem_virtualbase_Invalidate(unsafe.Pointer(this.h))

}
func (this *QWidgetItem) OnInvalidate(slot func(super func())) {
	ok := C.QWidgetItem_override_virtual_Invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_Invalidate
func miqt_exec_callback_QWidgetItem_Invalidate(self *C.QWidgetItem, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QWidgetItem{h: self}).callVirtualBase_Invalidate)

}

func (this *QWidgetItem) callVirtualBase_Layout() *QLayout {

	return newQLayout(C.QWidgetItem_virtualbase_Layout(unsafe.Pointer(this.h)))

}
func (this *QWidgetItem) OnLayout(slot func(super func() *QLayout) *QLayout) {
	ok := C.QWidgetItem_override_virtual_Layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_Layout
func miqt_exec_callback_QWidgetItem_Layout(self *C.QWidgetItem, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLayout) *QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_Layout)

	return virtualReturn.cPointer()

}

func (this *QWidgetItem) callVirtualBase_SpacerItem() *QSpacerItem {

	return newQSpacerItem(C.QWidgetItem_virtualbase_SpacerItem(unsafe.Pointer(this.h)))

}
func (this *QWidgetItem) OnSpacerItem(slot func(super func() *QSpacerItem) *QSpacerItem) {
	ok := C.QWidgetItem_override_virtual_SpacerItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_SpacerItem
func miqt_exec_callback_QWidgetItem_SpacerItem(self *C.QWidgetItem, cb C.intptr_t) *C.QSpacerItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSpacerItem) *QSpacerItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_SpacerItem)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QWidgetItem) Delete() {
	C.QWidgetItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWidgetItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QWidgetItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWidgetItemV2 struct {
	h *C.QWidgetItemV2
	*QWidgetItem
}

func (this *QWidgetItemV2) cPointer() *C.QWidgetItemV2 {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWidgetItemV2) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWidgetItemV2 constructs the type using only CGO pointers.
func newQWidgetItemV2(h *C.QWidgetItemV2) *QWidgetItemV2 {
	if h == nil {
		return nil
	}
	var outptr_QWidgetItem *C.QWidgetItem = nil
	C.QWidgetItemV2_virtbase(h, &outptr_QWidgetItem)

	return &QWidgetItemV2{h: h,
		QWidgetItem: newQWidgetItem(outptr_QWidgetItem)}
}

// UnsafeNewQWidgetItemV2 constructs the type using only unsafe pointers.
func UnsafeNewQWidgetItemV2(h unsafe.Pointer) *QWidgetItemV2 {
	return newQWidgetItemV2((*C.QWidgetItemV2)(h))
}

// NewQWidgetItemV2 constructs a new QWidgetItemV2 object.
func NewQWidgetItemV2(widget *QWidget) *QWidgetItemV2 {

	return newQWidgetItemV2(C.QWidgetItemV2_new(widget.cPointer()))
}

func (this *QWidgetItemV2) SizeHint() *QSize {
	_goptr := newQSize(C.QWidgetItemV2_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItemV2) MinimumSize() *QSize {
	_goptr := newQSize(C.QWidgetItemV2_MinimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItemV2) MaximumSize() *QSize {
	_goptr := newQSize(C.QWidgetItemV2_MaximumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItemV2) HeightForWidth(width int) int {
	return (int)(C.QWidgetItemV2_HeightForWidth(this.h, (C.int)(width)))
}

func (this *QWidgetItemV2) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QWidgetItemV2_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidgetItemV2) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QWidgetItemV2_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_SizeHint
func miqt_exec_callback_QWidgetItemV2_SizeHint(self *C.QWidgetItemV2, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QWidgetItemV2) callVirtualBase_MinimumSize() *QSize {

	_goptr := newQSize(C.QWidgetItemV2_virtualbase_MinimumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidgetItemV2) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QWidgetItemV2_override_virtual_MinimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_MinimumSize
func miqt_exec_callback_QWidgetItemV2_MinimumSize(self *C.QWidgetItemV2, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QWidgetItemV2) callVirtualBase_MaximumSize() *QSize {

	_goptr := newQSize(C.QWidgetItemV2_virtualbase_MaximumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidgetItemV2) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QWidgetItemV2_override_virtual_MaximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_MaximumSize
func miqt_exec_callback_QWidgetItemV2_MaximumSize(self *C.QWidgetItemV2, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QWidgetItemV2) callVirtualBase_HeightForWidth(width int) int {

	return (int)(C.QWidgetItemV2_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(width)))

}
func (this *QWidgetItemV2) OnHeightForWidth(slot func(super func(width int) int, width int) int) {
	ok := C.QWidgetItemV2_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_HeightForWidth
func miqt_exec_callback_QWidgetItemV2_HeightForWidth(self *C.QWidgetItemV2, cb C.intptr_t, width C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(width int) int, width int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(width)

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWidgetItemV2) callVirtualBase_ExpandingDirections() Orientation {

	return (Orientation)(C.QWidgetItemV2_virtualbase_ExpandingDirections(unsafe.Pointer(this.h)))

}
func (this *QWidgetItemV2) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	ok := C.QWidgetItemV2_override_virtual_ExpandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_ExpandingDirections
func miqt_exec_callback_QWidgetItemV2_ExpandingDirections(self *C.QWidgetItemV2, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QWidgetItemV2) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QWidgetItemV2_virtualbase_IsEmpty(unsafe.Pointer(this.h)))

}
func (this *QWidgetItemV2) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QWidgetItemV2_override_virtual_IsEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_IsEmpty
func miqt_exec_callback_QWidgetItemV2_IsEmpty(self *C.QWidgetItemV2, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QWidgetItemV2) callVirtualBase_SetGeometry(geometry *QRect) {

	C.QWidgetItemV2_virtualbase_SetGeometry(unsafe.Pointer(this.h), geometry.cPointer())

}
func (this *QWidgetItemV2) OnSetGeometry(slot func(super func(geometry *QRect), geometry *QRect)) {
	ok := C.QWidgetItemV2_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_SetGeometry
func miqt_exec_callback_QWidgetItemV2_SetGeometry(self *C.QWidgetItemV2, cb C.intptr_t, geometry *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(geometry *QRect), geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(geometry)

	gofunc((&QWidgetItemV2{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QWidgetItemV2) callVirtualBase_Geometry() *QRect {

	_goptr := newQRect(C.QWidgetItemV2_virtualbase_Geometry(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidgetItemV2) OnGeometry(slot func(super func() *QRect) *QRect) {
	ok := C.QWidgetItemV2_override_virtual_Geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_Geometry
func miqt_exec_callback_QWidgetItemV2_Geometry(self *C.QWidgetItemV2, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_Geometry)

	return virtualReturn.cPointer()

}

func (this *QWidgetItemV2) callVirtualBase_Widget() *QWidget {

	return newQWidget(C.QWidgetItemV2_virtualbase_Widget(unsafe.Pointer(this.h)))

}
func (this *QWidgetItemV2) OnWidget(slot func(super func() *QWidget) *QWidget) {
	ok := C.QWidgetItemV2_override_virtual_Widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_Widget
func miqt_exec_callback_QWidgetItemV2_Widget(self *C.QWidgetItemV2, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_Widget)

	return virtualReturn.cPointer()

}

func (this *QWidgetItemV2) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QWidgetItemV2_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QWidgetItemV2) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QWidgetItemV2_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_HasHeightForWidth
func miqt_exec_callback_QWidgetItemV2_HasHeightForWidth(self *C.QWidgetItemV2, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QWidgetItemV2) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QWidgetItemV2_virtualbase_MinimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWidgetItemV2) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QWidgetItemV2_override_virtual_MinimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_MinimumHeightForWidth
func miqt_exec_callback_QWidgetItemV2_MinimumHeightForWidth(self *C.QWidgetItemV2, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWidgetItemV2) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QWidgetItemV2_virtualbase_ControlTypes(unsafe.Pointer(this.h)))

}
func (this *QWidgetItemV2) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	ok := C.QWidgetItemV2_override_virtual_ControlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_ControlTypes
func miqt_exec_callback_QWidgetItemV2_ControlTypes(self *C.QWidgetItemV2, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QWidgetItemV2) Delete() {
	C.QWidgetItemV2_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWidgetItemV2) GoGC() {
	runtime.SetFinalizer(this, func(this *QWidgetItemV2) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
