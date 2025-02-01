package qt

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
	_goptr := newQSize(C.QLayoutItem_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayoutItem) MinimumSize() *QSize {
	_goptr := newQSize(C.QLayoutItem_minimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayoutItem) MaximumSize() *QSize {
	_goptr := newQSize(C.QLayoutItem_maximumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayoutItem) ExpandingDirections() Orientation {
	return (Orientation)(C.QLayoutItem_expandingDirections(this.h))
}

func (this *QLayoutItem) SetGeometry(geometry *QRect) {
	C.QLayoutItem_setGeometry(this.h, geometry.cPointer())
}

func (this *QLayoutItem) Geometry() *QRect {
	_goptr := newQRect(C.QLayoutItem_geometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayoutItem) IsEmpty() bool {
	return (bool)(C.QLayoutItem_isEmpty(this.h))
}

func (this *QLayoutItem) HasHeightForWidth() bool {
	return (bool)(C.QLayoutItem_hasHeightForWidth(this.h))
}

func (this *QLayoutItem) HeightForWidth(param1 int) int {
	return (int)(C.QLayoutItem_heightForWidth(this.h, (C.int)(param1)))
}

func (this *QLayoutItem) MinimumHeightForWidth(param1 int) int {
	return (int)(C.QLayoutItem_minimumHeightForWidth(this.h, (C.int)(param1)))
}

func (this *QLayoutItem) Invalidate() {
	C.QLayoutItem_invalidate(this.h)
}

func (this *QLayoutItem) Widget() *QWidget {
	return newQWidget(C.QLayoutItem_widget(this.h))
}

func (this *QLayoutItem) Layout() *QLayout {
	return newQLayout(C.QLayoutItem_layout(this.h))
}

func (this *QLayoutItem) SpacerItem() *QSpacerItem {
	return newQSpacerItem(C.QLayoutItem_spacerItem(this.h))
}

func (this *QLayoutItem) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QLayoutItem_alignment(this.h))
}

func (this *QLayoutItem) SetAlignment(a AlignmentFlag) {
	C.QLayoutItem_setAlignment(this.h, (C.int)(a))
}

func (this *QLayoutItem) ControlTypes() QSizePolicy__ControlType {
	return (QSizePolicy__ControlType)(C.QLayoutItem_controlTypes(this.h))
}
func (this *QLayoutItem) OnSizeHint(slot func() *QSize) {
	ok := C.QLayoutItem_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_sizeHint
func miqt_exec_callback_QLayoutItem_sizeHint(self *C.QLayoutItem, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}
func (this *QLayoutItem) OnMinimumSize(slot func() *QSize) {
	ok := C.QLayoutItem_override_virtual_minimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_minimumSize
func miqt_exec_callback_QLayoutItem_minimumSize(self *C.QLayoutItem, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}
func (this *QLayoutItem) OnMaximumSize(slot func() *QSize) {
	ok := C.QLayoutItem_override_virtual_maximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_maximumSize
func miqt_exec_callback_QLayoutItem_maximumSize(self *C.QLayoutItem, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}
func (this *QLayoutItem) OnExpandingDirections(slot func() Orientation) {
	ok := C.QLayoutItem_override_virtual_expandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_expandingDirections
func miqt_exec_callback_QLayoutItem_expandingDirections(self *C.QLayoutItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QLayoutItem) OnSetGeometry(slot func(geometry *QRect)) {
	ok := C.QLayoutItem_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_setGeometry
func miqt_exec_callback_QLayoutItem_setGeometry(self *C.QLayoutItem, cb C.intptr_t, geometry *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(geometry)

	gofunc(slotval1)

}
func (this *QLayoutItem) OnGeometry(slot func() *QRect) {
	ok := C.QLayoutItem_override_virtual_geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_geometry
func miqt_exec_callback_QLayoutItem_geometry(self *C.QLayoutItem, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}
func (this *QLayoutItem) OnIsEmpty(slot func() bool) {
	ok := C.QLayoutItem_override_virtual_isEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_isEmpty
func miqt_exec_callback_QLayoutItem_isEmpty(self *C.QLayoutItem, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}

func (this *QLayoutItem) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QLayoutItem_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QLayoutItem) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QLayoutItem_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_hasHeightForWidth
func miqt_exec_callback_QLayoutItem_hasHeightForWidth(self *C.QLayoutItem, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayoutItem{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QLayoutItem) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QLayoutItem_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QLayoutItem) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QLayoutItem_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_heightForWidth
func miqt_exec_callback_QLayoutItem_heightForWidth(self *C.QLayoutItem, cb C.intptr_t, param1 C.int) C.int {
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

	return (int)(C.QLayoutItem_virtualbase_minimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QLayoutItem) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QLayoutItem_override_virtual_minimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_minimumHeightForWidth
func miqt_exec_callback_QLayoutItem_minimumHeightForWidth(self *C.QLayoutItem, cb C.intptr_t, param1 C.int) C.int {
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

	C.QLayoutItem_virtualbase_invalidate(unsafe.Pointer(this.h))

}
func (this *QLayoutItem) OnInvalidate(slot func(super func())) {
	ok := C.QLayoutItem_override_virtual_invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_invalidate
func miqt_exec_callback_QLayoutItem_invalidate(self *C.QLayoutItem, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QLayoutItem{h: self}).callVirtualBase_Invalidate)

}

func (this *QLayoutItem) callVirtualBase_Widget() *QWidget {

	return newQWidget(C.QLayoutItem_virtualbase_widget(unsafe.Pointer(this.h)))

}
func (this *QLayoutItem) OnWidget(slot func(super func() *QWidget) *QWidget) {
	ok := C.QLayoutItem_override_virtual_widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_widget
func miqt_exec_callback_QLayoutItem_widget(self *C.QLayoutItem, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayoutItem{h: self}).callVirtualBase_Widget)

	return virtualReturn.cPointer()

}

func (this *QLayoutItem) callVirtualBase_Layout() *QLayout {

	return newQLayout(C.QLayoutItem_virtualbase_layout(unsafe.Pointer(this.h)))

}
func (this *QLayoutItem) OnLayout(slot func(super func() *QLayout) *QLayout) {
	ok := C.QLayoutItem_override_virtual_layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_layout
func miqt_exec_callback_QLayoutItem_layout(self *C.QLayoutItem, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLayout) *QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayoutItem{h: self}).callVirtualBase_Layout)

	return virtualReturn.cPointer()

}

func (this *QLayoutItem) callVirtualBase_SpacerItem() *QSpacerItem {

	return newQSpacerItem(C.QLayoutItem_virtualbase_spacerItem(unsafe.Pointer(this.h)))

}
func (this *QLayoutItem) OnSpacerItem(slot func(super func() *QSpacerItem) *QSpacerItem) {
	ok := C.QLayoutItem_override_virtual_spacerItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_spacerItem
func miqt_exec_callback_QLayoutItem_spacerItem(self *C.QLayoutItem, cb C.intptr_t) *C.QSpacerItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSpacerItem) *QSpacerItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayoutItem{h: self}).callVirtualBase_SpacerItem)

	return virtualReturn.cPointer()

}

func (this *QLayoutItem) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QLayoutItem_virtualbase_controlTypes(unsafe.Pointer(this.h)))

}
func (this *QLayoutItem) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	ok := C.QLayoutItem_override_virtual_controlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayoutItem_controlTypes
func miqt_exec_callback_QLayoutItem_controlTypes(self *C.QLayoutItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayoutItem{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QLayoutItem) Delete() {
	C.QLayoutItem_delete(this.h)
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
	C.QSpacerItem_changeSize(this.h, (C.int)(w), (C.int)(h))
}

func (this *QSpacerItem) SizeHint() *QSize {
	_goptr := newQSize(C.QSpacerItem_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpacerItem) MinimumSize() *QSize {
	_goptr := newQSize(C.QSpacerItem_minimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpacerItem) MaximumSize() *QSize {
	_goptr := newQSize(C.QSpacerItem_maximumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpacerItem) ExpandingDirections() Orientation {
	return (Orientation)(C.QSpacerItem_expandingDirections(this.h))
}

func (this *QSpacerItem) IsEmpty() bool {
	return (bool)(C.QSpacerItem_isEmpty(this.h))
}

func (this *QSpacerItem) SetGeometry(geometry *QRect) {
	C.QSpacerItem_setGeometry(this.h, geometry.cPointer())
}

func (this *QSpacerItem) Geometry() *QRect {
	_goptr := newQRect(C.QSpacerItem_geometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpacerItem) SpacerItem() *QSpacerItem {
	return newQSpacerItem(C.QSpacerItem_spacerItem(this.h))
}

func (this *QSpacerItem) SizePolicy() *QSizePolicy {
	_goptr := newQSizePolicy(C.QSpacerItem_sizePolicy(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSpacerItem) ChangeSize3(w int, h int, hData QSizePolicy__Policy) {
	C.QSpacerItem_changeSize3(this.h, (C.int)(w), (C.int)(h), (C.int)(hData))
}

func (this *QSpacerItem) ChangeSize4(w int, h int, hData QSizePolicy__Policy, vData QSizePolicy__Policy) {
	C.QSpacerItem_changeSize4(this.h, (C.int)(w), (C.int)(h), (C.int)(hData), (C.int)(vData))
}

func (this *QSpacerItem) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QSpacerItem_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSpacerItem) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSpacerItem_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_sizeHint
func miqt_exec_callback_QSpacerItem_sizeHint(self *C.QSpacerItem, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QSpacerItem) callVirtualBase_MinimumSize() *QSize {

	_goptr := newQSize(C.QSpacerItem_virtualbase_minimumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSpacerItem) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QSpacerItem_override_virtual_minimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_minimumSize
func miqt_exec_callback_QSpacerItem_minimumSize(self *C.QSpacerItem, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QSpacerItem) callVirtualBase_MaximumSize() *QSize {

	_goptr := newQSize(C.QSpacerItem_virtualbase_maximumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSpacerItem) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QSpacerItem_override_virtual_maximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_maximumSize
func miqt_exec_callback_QSpacerItem_maximumSize(self *C.QSpacerItem, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QSpacerItem) callVirtualBase_ExpandingDirections() Orientation {

	return (Orientation)(C.QSpacerItem_virtualbase_expandingDirections(unsafe.Pointer(this.h)))

}
func (this *QSpacerItem) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	ok := C.QSpacerItem_override_virtual_expandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_expandingDirections
func miqt_exec_callback_QSpacerItem_expandingDirections(self *C.QSpacerItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QSpacerItem) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QSpacerItem_virtualbase_isEmpty(unsafe.Pointer(this.h)))

}
func (this *QSpacerItem) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QSpacerItem_override_virtual_isEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_isEmpty
func miqt_exec_callback_QSpacerItem_isEmpty(self *C.QSpacerItem, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QSpacerItem) callVirtualBase_SetGeometry(geometry *QRect) {

	C.QSpacerItem_virtualbase_setGeometry(unsafe.Pointer(this.h), geometry.cPointer())

}
func (this *QSpacerItem) OnSetGeometry(slot func(super func(geometry *QRect), geometry *QRect)) {
	ok := C.QSpacerItem_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_setGeometry
func miqt_exec_callback_QSpacerItem_setGeometry(self *C.QSpacerItem, cb C.intptr_t, geometry *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(geometry *QRect), geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(geometry)

	gofunc((&QSpacerItem{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QSpacerItem) callVirtualBase_Geometry() *QRect {

	_goptr := newQRect(C.QSpacerItem_virtualbase_geometry(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSpacerItem) OnGeometry(slot func(super func() *QRect) *QRect) {
	ok := C.QSpacerItem_override_virtual_geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_geometry
func miqt_exec_callback_QSpacerItem_geometry(self *C.QSpacerItem, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_Geometry)

	return virtualReturn.cPointer()

}

func (this *QSpacerItem) callVirtualBase_SpacerItem() *QSpacerItem {

	return newQSpacerItem(C.QSpacerItem_virtualbase_spacerItem(unsafe.Pointer(this.h)))

}
func (this *QSpacerItem) OnSpacerItem(slot func(super func() *QSpacerItem) *QSpacerItem) {
	ok := C.QSpacerItem_override_virtual_spacerItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_spacerItem
func miqt_exec_callback_QSpacerItem_spacerItem(self *C.QSpacerItem, cb C.intptr_t) *C.QSpacerItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSpacerItem) *QSpacerItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_SpacerItem)

	return virtualReturn.cPointer()

}

func (this *QSpacerItem) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QSpacerItem_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QSpacerItem) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QSpacerItem_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_hasHeightForWidth
func miqt_exec_callback_QSpacerItem_hasHeightForWidth(self *C.QSpacerItem, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QSpacerItem) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QSpacerItem_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSpacerItem) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QSpacerItem_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_heightForWidth
func miqt_exec_callback_QSpacerItem_heightForWidth(self *C.QSpacerItem, cb C.intptr_t, param1 C.int) C.int {
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

	return (int)(C.QSpacerItem_virtualbase_minimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSpacerItem) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QSpacerItem_override_virtual_minimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_minimumHeightForWidth
func miqt_exec_callback_QSpacerItem_minimumHeightForWidth(self *C.QSpacerItem, cb C.intptr_t, param1 C.int) C.int {
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

	C.QSpacerItem_virtualbase_invalidate(unsafe.Pointer(this.h))

}
func (this *QSpacerItem) OnInvalidate(slot func(super func())) {
	ok := C.QSpacerItem_override_virtual_invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_invalidate
func miqt_exec_callback_QSpacerItem_invalidate(self *C.QSpacerItem, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QSpacerItem{h: self}).callVirtualBase_Invalidate)

}

func (this *QSpacerItem) callVirtualBase_Widget() *QWidget {

	return newQWidget(C.QSpacerItem_virtualbase_widget(unsafe.Pointer(this.h)))

}
func (this *QSpacerItem) OnWidget(slot func(super func() *QWidget) *QWidget) {
	ok := C.QSpacerItem_override_virtual_widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_widget
func miqt_exec_callback_QSpacerItem_widget(self *C.QSpacerItem, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_Widget)

	return virtualReturn.cPointer()

}

func (this *QSpacerItem) callVirtualBase_Layout() *QLayout {

	return newQLayout(C.QSpacerItem_virtualbase_layout(unsafe.Pointer(this.h)))

}
func (this *QSpacerItem) OnLayout(slot func(super func() *QLayout) *QLayout) {
	ok := C.QSpacerItem_override_virtual_layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_layout
func miqt_exec_callback_QSpacerItem_layout(self *C.QSpacerItem, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLayout) *QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_Layout)

	return virtualReturn.cPointer()

}

func (this *QSpacerItem) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QSpacerItem_virtualbase_controlTypes(unsafe.Pointer(this.h)))

}
func (this *QSpacerItem) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	ok := C.QSpacerItem_override_virtual_controlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSpacerItem_controlTypes
func miqt_exec_callback_QSpacerItem_controlTypes(self *C.QSpacerItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSpacerItem{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QSpacerItem) Delete() {
	C.QSpacerItem_delete(this.h)
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
	_goptr := newQSize(C.QWidgetItem_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItem) MinimumSize() *QSize {
	_goptr := newQSize(C.QWidgetItem_minimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItem) MaximumSize() *QSize {
	_goptr := newQSize(C.QWidgetItem_maximumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItem) ExpandingDirections() Orientation {
	return (Orientation)(C.QWidgetItem_expandingDirections(this.h))
}

func (this *QWidgetItem) IsEmpty() bool {
	return (bool)(C.QWidgetItem_isEmpty(this.h))
}

func (this *QWidgetItem) SetGeometry(geometry *QRect) {
	C.QWidgetItem_setGeometry(this.h, geometry.cPointer())
}

func (this *QWidgetItem) Geometry() *QRect {
	_goptr := newQRect(C.QWidgetItem_geometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItem) Widget() *QWidget {
	return newQWidget(C.QWidgetItem_widget(this.h))
}

func (this *QWidgetItem) HasHeightForWidth() bool {
	return (bool)(C.QWidgetItem_hasHeightForWidth(this.h))
}

func (this *QWidgetItem) HeightForWidth(param1 int) int {
	return (int)(C.QWidgetItem_heightForWidth(this.h, (C.int)(param1)))
}

func (this *QWidgetItem) ControlTypes() QSizePolicy__ControlType {
	return (QSizePolicy__ControlType)(C.QWidgetItem_controlTypes(this.h))
}

func (this *QWidgetItem) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QWidgetItem_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidgetItem) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QWidgetItem_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_sizeHint
func miqt_exec_callback_QWidgetItem_sizeHint(self *C.QWidgetItem, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QWidgetItem) callVirtualBase_MinimumSize() *QSize {

	_goptr := newQSize(C.QWidgetItem_virtualbase_minimumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidgetItem) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QWidgetItem_override_virtual_minimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_minimumSize
func miqt_exec_callback_QWidgetItem_minimumSize(self *C.QWidgetItem, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QWidgetItem) callVirtualBase_MaximumSize() *QSize {

	_goptr := newQSize(C.QWidgetItem_virtualbase_maximumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidgetItem) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QWidgetItem_override_virtual_maximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_maximumSize
func miqt_exec_callback_QWidgetItem_maximumSize(self *C.QWidgetItem, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QWidgetItem) callVirtualBase_ExpandingDirections() Orientation {

	return (Orientation)(C.QWidgetItem_virtualbase_expandingDirections(unsafe.Pointer(this.h)))

}
func (this *QWidgetItem) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	ok := C.QWidgetItem_override_virtual_expandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_expandingDirections
func miqt_exec_callback_QWidgetItem_expandingDirections(self *C.QWidgetItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QWidgetItem) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QWidgetItem_virtualbase_isEmpty(unsafe.Pointer(this.h)))

}
func (this *QWidgetItem) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QWidgetItem_override_virtual_isEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_isEmpty
func miqt_exec_callback_QWidgetItem_isEmpty(self *C.QWidgetItem, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QWidgetItem) callVirtualBase_SetGeometry(geometry *QRect) {

	C.QWidgetItem_virtualbase_setGeometry(unsafe.Pointer(this.h), geometry.cPointer())

}
func (this *QWidgetItem) OnSetGeometry(slot func(super func(geometry *QRect), geometry *QRect)) {
	ok := C.QWidgetItem_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_setGeometry
func miqt_exec_callback_QWidgetItem_setGeometry(self *C.QWidgetItem, cb C.intptr_t, geometry *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(geometry *QRect), geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(geometry)

	gofunc((&QWidgetItem{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QWidgetItem) callVirtualBase_Geometry() *QRect {

	_goptr := newQRect(C.QWidgetItem_virtualbase_geometry(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidgetItem) OnGeometry(slot func(super func() *QRect) *QRect) {
	ok := C.QWidgetItem_override_virtual_geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_geometry
func miqt_exec_callback_QWidgetItem_geometry(self *C.QWidgetItem, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_Geometry)

	return virtualReturn.cPointer()

}

func (this *QWidgetItem) callVirtualBase_Widget() *QWidget {

	return newQWidget(C.QWidgetItem_virtualbase_widget(unsafe.Pointer(this.h)))

}
func (this *QWidgetItem) OnWidget(slot func(super func() *QWidget) *QWidget) {
	ok := C.QWidgetItem_override_virtual_widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_widget
func miqt_exec_callback_QWidgetItem_widget(self *C.QWidgetItem, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_Widget)

	return virtualReturn.cPointer()

}

func (this *QWidgetItem) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QWidgetItem_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QWidgetItem) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QWidgetItem_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_hasHeightForWidth
func miqt_exec_callback_QWidgetItem_hasHeightForWidth(self *C.QWidgetItem, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QWidgetItem) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QWidgetItem_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWidgetItem) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QWidgetItem_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_heightForWidth
func miqt_exec_callback_QWidgetItem_heightForWidth(self *C.QWidgetItem, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWidgetItem) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QWidgetItem_virtualbase_controlTypes(unsafe.Pointer(this.h)))

}
func (this *QWidgetItem) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	ok := C.QWidgetItem_override_virtual_controlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_controlTypes
func miqt_exec_callback_QWidgetItem_controlTypes(self *C.QWidgetItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

func (this *QWidgetItem) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QWidgetItem_virtualbase_minimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWidgetItem) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QWidgetItem_override_virtual_minimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_minimumHeightForWidth
func miqt_exec_callback_QWidgetItem_minimumHeightForWidth(self *C.QWidgetItem, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWidgetItem) callVirtualBase_Invalidate() {

	C.QWidgetItem_virtualbase_invalidate(unsafe.Pointer(this.h))

}
func (this *QWidgetItem) OnInvalidate(slot func(super func())) {
	ok := C.QWidgetItem_override_virtual_invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_invalidate
func miqt_exec_callback_QWidgetItem_invalidate(self *C.QWidgetItem, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QWidgetItem{h: self}).callVirtualBase_Invalidate)

}

func (this *QWidgetItem) callVirtualBase_Layout() *QLayout {

	return newQLayout(C.QWidgetItem_virtualbase_layout(unsafe.Pointer(this.h)))

}
func (this *QWidgetItem) OnLayout(slot func(super func() *QLayout) *QLayout) {
	ok := C.QWidgetItem_override_virtual_layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_layout
func miqt_exec_callback_QWidgetItem_layout(self *C.QWidgetItem, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLayout) *QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_Layout)

	return virtualReturn.cPointer()

}

func (this *QWidgetItem) callVirtualBase_SpacerItem() *QSpacerItem {

	return newQSpacerItem(C.QWidgetItem_virtualbase_spacerItem(unsafe.Pointer(this.h)))

}
func (this *QWidgetItem) OnSpacerItem(slot func(super func() *QSpacerItem) *QSpacerItem) {
	ok := C.QWidgetItem_override_virtual_spacerItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItem_spacerItem
func miqt_exec_callback_QWidgetItem_spacerItem(self *C.QWidgetItem, cb C.intptr_t) *C.QSpacerItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSpacerItem) *QSpacerItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItem{h: self}).callVirtualBase_SpacerItem)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QWidgetItem) Delete() {
	C.QWidgetItem_delete(this.h)
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
	_goptr := newQSize(C.QWidgetItemV2_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItemV2) MinimumSize() *QSize {
	_goptr := newQSize(C.QWidgetItemV2_minimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItemV2) MaximumSize() *QSize {
	_goptr := newQSize(C.QWidgetItemV2_maximumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWidgetItemV2) HeightForWidth(width int) int {
	return (int)(C.QWidgetItemV2_heightForWidth(this.h, (C.int)(width)))
}

func (this *QWidgetItemV2) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QWidgetItemV2_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidgetItemV2) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QWidgetItemV2_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_sizeHint
func miqt_exec_callback_QWidgetItemV2_sizeHint(self *C.QWidgetItemV2, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QWidgetItemV2) callVirtualBase_MinimumSize() *QSize {

	_goptr := newQSize(C.QWidgetItemV2_virtualbase_minimumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidgetItemV2) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QWidgetItemV2_override_virtual_minimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_minimumSize
func miqt_exec_callback_QWidgetItemV2_minimumSize(self *C.QWidgetItemV2, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QWidgetItemV2) callVirtualBase_MaximumSize() *QSize {

	_goptr := newQSize(C.QWidgetItemV2_virtualbase_maximumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidgetItemV2) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QWidgetItemV2_override_virtual_maximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_maximumSize
func miqt_exec_callback_QWidgetItemV2_maximumSize(self *C.QWidgetItemV2, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QWidgetItemV2) callVirtualBase_HeightForWidth(width int) int {

	return (int)(C.QWidgetItemV2_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(width)))

}
func (this *QWidgetItemV2) OnHeightForWidth(slot func(super func(width int) int, width int) int) {
	ok := C.QWidgetItemV2_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_heightForWidth
func miqt_exec_callback_QWidgetItemV2_heightForWidth(self *C.QWidgetItemV2, cb C.intptr_t, width C.int) C.int {
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

	return (Orientation)(C.QWidgetItemV2_virtualbase_expandingDirections(unsafe.Pointer(this.h)))

}
func (this *QWidgetItemV2) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	ok := C.QWidgetItemV2_override_virtual_expandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_expandingDirections
func miqt_exec_callback_QWidgetItemV2_expandingDirections(self *C.QWidgetItemV2, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QWidgetItemV2) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QWidgetItemV2_virtualbase_isEmpty(unsafe.Pointer(this.h)))

}
func (this *QWidgetItemV2) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QWidgetItemV2_override_virtual_isEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_isEmpty
func miqt_exec_callback_QWidgetItemV2_isEmpty(self *C.QWidgetItemV2, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QWidgetItemV2) callVirtualBase_SetGeometry(geometry *QRect) {

	C.QWidgetItemV2_virtualbase_setGeometry(unsafe.Pointer(this.h), geometry.cPointer())

}
func (this *QWidgetItemV2) OnSetGeometry(slot func(super func(geometry *QRect), geometry *QRect)) {
	ok := C.QWidgetItemV2_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_setGeometry
func miqt_exec_callback_QWidgetItemV2_setGeometry(self *C.QWidgetItemV2, cb C.intptr_t, geometry *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(geometry *QRect), geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(geometry)

	gofunc((&QWidgetItemV2{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QWidgetItemV2) callVirtualBase_Geometry() *QRect {

	_goptr := newQRect(C.QWidgetItemV2_virtualbase_geometry(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QWidgetItemV2) OnGeometry(slot func(super func() *QRect) *QRect) {
	ok := C.QWidgetItemV2_override_virtual_geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_geometry
func miqt_exec_callback_QWidgetItemV2_geometry(self *C.QWidgetItemV2, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_Geometry)

	return virtualReturn.cPointer()

}

func (this *QWidgetItemV2) callVirtualBase_Widget() *QWidget {

	return newQWidget(C.QWidgetItemV2_virtualbase_widget(unsafe.Pointer(this.h)))

}
func (this *QWidgetItemV2) OnWidget(slot func(super func() *QWidget) *QWidget) {
	ok := C.QWidgetItemV2_override_virtual_widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_widget
func miqt_exec_callback_QWidgetItemV2_widget(self *C.QWidgetItemV2, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_Widget)

	return virtualReturn.cPointer()

}

func (this *QWidgetItemV2) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QWidgetItemV2_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QWidgetItemV2) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QWidgetItemV2_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_hasHeightForWidth
func miqt_exec_callback_QWidgetItemV2_hasHeightForWidth(self *C.QWidgetItemV2, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QWidgetItemV2) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QWidgetItemV2_virtualbase_controlTypes(unsafe.Pointer(this.h)))

}
func (this *QWidgetItemV2) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	ok := C.QWidgetItemV2_override_virtual_controlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_controlTypes
func miqt_exec_callback_QWidgetItemV2_controlTypes(self *C.QWidgetItemV2, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

func (this *QWidgetItemV2) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QWidgetItemV2_virtualbase_minimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QWidgetItemV2) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QWidgetItemV2_override_virtual_minimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_minimumHeightForWidth
func miqt_exec_callback_QWidgetItemV2_minimumHeightForWidth(self *C.QWidgetItemV2, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QWidgetItemV2) callVirtualBase_Invalidate() {

	C.QWidgetItemV2_virtualbase_invalidate(unsafe.Pointer(this.h))

}
func (this *QWidgetItemV2) OnInvalidate(slot func(super func())) {
	ok := C.QWidgetItemV2_override_virtual_invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_invalidate
func miqt_exec_callback_QWidgetItemV2_invalidate(self *C.QWidgetItemV2, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QWidgetItemV2{h: self}).callVirtualBase_Invalidate)

}

func (this *QWidgetItemV2) callVirtualBase_Layout() *QLayout {

	return newQLayout(C.QWidgetItemV2_virtualbase_layout(unsafe.Pointer(this.h)))

}
func (this *QWidgetItemV2) OnLayout(slot func(super func() *QLayout) *QLayout) {
	ok := C.QWidgetItemV2_override_virtual_layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_layout
func miqt_exec_callback_QWidgetItemV2_layout(self *C.QWidgetItemV2, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLayout) *QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_Layout)

	return virtualReturn.cPointer()

}

func (this *QWidgetItemV2) callVirtualBase_SpacerItem() *QSpacerItem {

	return newQSpacerItem(C.QWidgetItemV2_virtualbase_spacerItem(unsafe.Pointer(this.h)))

}
func (this *QWidgetItemV2) OnSpacerItem(slot func(super func() *QSpacerItem) *QSpacerItem) {
	ok := C.QWidgetItemV2_override_virtual_spacerItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QWidgetItemV2_spacerItem
func miqt_exec_callback_QWidgetItemV2_spacerItem(self *C.QWidgetItemV2, cb C.intptr_t) *C.QSpacerItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSpacerItem) *QSpacerItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QWidgetItemV2{h: self}).callVirtualBase_SpacerItem)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QWidgetItemV2) Delete() {
	C.QWidgetItemV2_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWidgetItemV2) GoGC() {
	runtime.SetFinalizer(this, func(this *QWidgetItemV2) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
