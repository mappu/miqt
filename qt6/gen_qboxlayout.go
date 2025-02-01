package qt6

/*

#include "gen_qboxlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QBoxLayout__Direction int

const (
	QBoxLayout__LeftToRight QBoxLayout__Direction = 0
	QBoxLayout__RightToLeft QBoxLayout__Direction = 1
	QBoxLayout__TopToBottom QBoxLayout__Direction = 2
	QBoxLayout__BottomToTop QBoxLayout__Direction = 3
	QBoxLayout__Down        QBoxLayout__Direction = 2
	QBoxLayout__Up          QBoxLayout__Direction = 3
)

type QBoxLayout struct {
	h *C.QBoxLayout
	*QLayout
}

func (this *QBoxLayout) cPointer() *C.QBoxLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBoxLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQBoxLayout constructs the type using only CGO pointers.
func newQBoxLayout(h *C.QBoxLayout) *QBoxLayout {
	if h == nil {
		return nil
	}
	var outptr_QLayout *C.QLayout = nil
	C.QBoxLayout_virtbase(h, &outptr_QLayout)

	return &QBoxLayout{h: h,
		QLayout: newQLayout(outptr_QLayout)}
}

// UnsafeNewQBoxLayout constructs the type using only unsafe pointers.
func UnsafeNewQBoxLayout(h unsafe.Pointer) *QBoxLayout {
	return newQBoxLayout((*C.QBoxLayout)(h))
}

// NewQBoxLayout constructs a new QBoxLayout object.
func NewQBoxLayout(param1 QBoxLayout__Direction) *QBoxLayout {

	return newQBoxLayout(C.QBoxLayout_new((C.int)(param1)))
}

// NewQBoxLayout2 constructs a new QBoxLayout object.
func NewQBoxLayout2(param1 QBoxLayout__Direction, parent *QWidget) *QBoxLayout {

	return newQBoxLayout(C.QBoxLayout_new2((C.int)(param1), parent.cPointer()))
}

func (this *QBoxLayout) MetaObject() *QMetaObject {
	return newQMetaObject(C.QBoxLayout_metaObject(this.h))
}

func (this *QBoxLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QBoxLayout_metacast(this.h, param1_Cstring))
}

func QBoxLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QBoxLayout_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBoxLayout) Direction() QBoxLayout__Direction {
	return (QBoxLayout__Direction)(C.QBoxLayout_direction(this.h))
}

func (this *QBoxLayout) SetDirection(direction QBoxLayout__Direction) {
	C.QBoxLayout_setDirection(this.h, (C.int)(direction))
}

func (this *QBoxLayout) AddSpacing(size int) {
	C.QBoxLayout_addSpacing(this.h, (C.int)(size))
}

func (this *QBoxLayout) AddStretch() {
	C.QBoxLayout_addStretch(this.h)
}

func (this *QBoxLayout) AddSpacerItem(spacerItem *QSpacerItem) {
	C.QBoxLayout_addSpacerItem(this.h, spacerItem.cPointer())
}

func (this *QBoxLayout) AddWidget(param1 *QWidget) {
	C.QBoxLayout_addWidget(this.h, param1.cPointer())
}

func (this *QBoxLayout) AddLayout(layout *QLayout) {
	C.QBoxLayout_addLayout(this.h, layout.cPointer())
}

func (this *QBoxLayout) AddStrut(param1 int) {
	C.QBoxLayout_addStrut(this.h, (C.int)(param1))
}

func (this *QBoxLayout) AddItem(param1 *QLayoutItem) {
	C.QBoxLayout_addItem(this.h, param1.cPointer())
}

func (this *QBoxLayout) InsertSpacing(index int, size int) {
	C.QBoxLayout_insertSpacing(this.h, (C.int)(index), (C.int)(size))
}

func (this *QBoxLayout) InsertStretch(index int) {
	C.QBoxLayout_insertStretch(this.h, (C.int)(index))
}

func (this *QBoxLayout) InsertSpacerItem(index int, spacerItem *QSpacerItem) {
	C.QBoxLayout_insertSpacerItem(this.h, (C.int)(index), spacerItem.cPointer())
}

func (this *QBoxLayout) InsertWidget(index int, widget *QWidget) {
	C.QBoxLayout_insertWidget(this.h, (C.int)(index), widget.cPointer())
}

func (this *QBoxLayout) InsertLayout(index int, layout *QLayout) {
	C.QBoxLayout_insertLayout(this.h, (C.int)(index), layout.cPointer())
}

func (this *QBoxLayout) InsertItem(index int, param2 *QLayoutItem) {
	C.QBoxLayout_insertItem(this.h, (C.int)(index), param2.cPointer())
}

func (this *QBoxLayout) Spacing() int {
	return (int)(C.QBoxLayout_spacing(this.h))
}

func (this *QBoxLayout) SetSpacing(spacing int) {
	C.QBoxLayout_setSpacing(this.h, (C.int)(spacing))
}

func (this *QBoxLayout) SetStretchFactor(w *QWidget, stretch int) bool {
	return (bool)(C.QBoxLayout_setStretchFactor(this.h, w.cPointer(), (C.int)(stretch)))
}

func (this *QBoxLayout) SetStretchFactor2(l *QLayout, stretch int) bool {
	return (bool)(C.QBoxLayout_setStretchFactor2(this.h, l.cPointer(), (C.int)(stretch)))
}

func (this *QBoxLayout) SetStretch(index int, stretch int) {
	C.QBoxLayout_setStretch(this.h, (C.int)(index), (C.int)(stretch))
}

func (this *QBoxLayout) Stretch(index int) int {
	return (int)(C.QBoxLayout_stretch(this.h, (C.int)(index)))
}

func (this *QBoxLayout) SizeHint() *QSize {
	_goptr := newQSize(C.QBoxLayout_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBoxLayout) MinimumSize() *QSize {
	_goptr := newQSize(C.QBoxLayout_minimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBoxLayout) MaximumSize() *QSize {
	_goptr := newQSize(C.QBoxLayout_maximumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBoxLayout) HasHeightForWidth() bool {
	return (bool)(C.QBoxLayout_hasHeightForWidth(this.h))
}

func (this *QBoxLayout) HeightForWidth(param1 int) int {
	return (int)(C.QBoxLayout_heightForWidth(this.h, (C.int)(param1)))
}

func (this *QBoxLayout) MinimumHeightForWidth(param1 int) int {
	return (int)(C.QBoxLayout_minimumHeightForWidth(this.h, (C.int)(param1)))
}

func (this *QBoxLayout) ExpandingDirections() Orientation {
	return (Orientation)(C.QBoxLayout_expandingDirections(this.h))
}

func (this *QBoxLayout) Invalidate() {
	C.QBoxLayout_invalidate(this.h)
}

func (this *QBoxLayout) ItemAt(param1 int) *QLayoutItem {
	return newQLayoutItem(C.QBoxLayout_itemAt(this.h, (C.int)(param1)))
}

func (this *QBoxLayout) TakeAt(param1 int) *QLayoutItem {
	return newQLayoutItem(C.QBoxLayout_takeAt(this.h, (C.int)(param1)))
}

func (this *QBoxLayout) Count() int {
	return (int)(C.QBoxLayout_count(this.h))
}

func (this *QBoxLayout) SetGeometry(geometry *QRect) {
	C.QBoxLayout_setGeometry(this.h, geometry.cPointer())
}

func QBoxLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBoxLayout_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBoxLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBoxLayout_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBoxLayout) AddStretch1(stretch int) {
	C.QBoxLayout_addStretch1(this.h, (C.int)(stretch))
}

func (this *QBoxLayout) AddWidget2(param1 *QWidget, stretch int) {
	C.QBoxLayout_addWidget2(this.h, param1.cPointer(), (C.int)(stretch))
}

func (this *QBoxLayout) AddWidget3(param1 *QWidget, stretch int, alignment AlignmentFlag) {
	C.QBoxLayout_addWidget3(this.h, param1.cPointer(), (C.int)(stretch), (C.int)(alignment))
}

func (this *QBoxLayout) AddLayout2(layout *QLayout, stretch int) {
	C.QBoxLayout_addLayout2(this.h, layout.cPointer(), (C.int)(stretch))
}

func (this *QBoxLayout) InsertStretch2(index int, stretch int) {
	C.QBoxLayout_insertStretch2(this.h, (C.int)(index), (C.int)(stretch))
}

func (this *QBoxLayout) InsertWidget3(index int, widget *QWidget, stretch int) {
	C.QBoxLayout_insertWidget3(this.h, (C.int)(index), widget.cPointer(), (C.int)(stretch))
}

func (this *QBoxLayout) InsertWidget4(index int, widget *QWidget, stretch int, alignment AlignmentFlag) {
	C.QBoxLayout_insertWidget4(this.h, (C.int)(index), widget.cPointer(), (C.int)(stretch), (C.int)(alignment))
}

func (this *QBoxLayout) InsertLayout3(index int, layout *QLayout, stretch int) {
	C.QBoxLayout_insertLayout3(this.h, (C.int)(index), layout.cPointer(), (C.int)(stretch))
}

func (this *QBoxLayout) callVirtualBase_AddItem(param1 *QLayoutItem) {

	C.QBoxLayout_virtualbase_addItem(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QBoxLayout) OnAddItem(slot func(super func(param1 *QLayoutItem), param1 *QLayoutItem)) {
	ok := C.QBoxLayout_override_virtual_addItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_addItem
func miqt_exec_callback_QBoxLayout_addItem(self *C.QBoxLayout, cb C.intptr_t, param1 *C.QLayoutItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QLayoutItem), param1 *QLayoutItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQLayoutItem(param1)

	gofunc((&QBoxLayout{h: self}).callVirtualBase_AddItem, slotval1)

}

func (this *QBoxLayout) callVirtualBase_Spacing() int {

	return (int)(C.QBoxLayout_virtualbase_spacing(unsafe.Pointer(this.h)))

}
func (this *QBoxLayout) OnSpacing(slot func(super func() int) int) {
	ok := C.QBoxLayout_override_virtual_spacing(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_spacing
func miqt_exec_callback_QBoxLayout_spacing(self *C.QBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_Spacing)

	return (C.int)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_SetSpacing(spacing int) {

	C.QBoxLayout_virtualbase_setSpacing(unsafe.Pointer(this.h), (C.int)(spacing))

}
func (this *QBoxLayout) OnSetSpacing(slot func(super func(spacing int), spacing int)) {
	ok := C.QBoxLayout_override_virtual_setSpacing(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_setSpacing
func miqt_exec_callback_QBoxLayout_setSpacing(self *C.QBoxLayout, cb C.intptr_t, spacing C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(spacing int), spacing int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(spacing)

	gofunc((&QBoxLayout{h: self}).callVirtualBase_SetSpacing, slotval1)

}

func (this *QBoxLayout) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QBoxLayout_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QBoxLayout) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QBoxLayout_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_sizeHint
func miqt_exec_callback_QBoxLayout_sizeHint(self *C.QBoxLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QBoxLayout) callVirtualBase_MinimumSize() *QSize {

	_goptr := newQSize(C.QBoxLayout_virtualbase_minimumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QBoxLayout) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QBoxLayout_override_virtual_minimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_minimumSize
func miqt_exec_callback_QBoxLayout_minimumSize(self *C.QBoxLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QBoxLayout) callVirtualBase_MaximumSize() *QSize {

	_goptr := newQSize(C.QBoxLayout_virtualbase_maximumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QBoxLayout) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QBoxLayout_override_virtual_maximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_maximumSize
func miqt_exec_callback_QBoxLayout_maximumSize(self *C.QBoxLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QBoxLayout) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QBoxLayout_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QBoxLayout) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QBoxLayout_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_hasHeightForWidth
func miqt_exec_callback_QBoxLayout_hasHeightForWidth(self *C.QBoxLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QBoxLayout_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QBoxLayout) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QBoxLayout_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_heightForWidth
func miqt_exec_callback_QBoxLayout_heightForWidth(self *C.QBoxLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QBoxLayout_virtualbase_minimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QBoxLayout) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QBoxLayout_override_virtual_minimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_minimumHeightForWidth
func miqt_exec_callback_QBoxLayout_minimumHeightForWidth(self *C.QBoxLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_ExpandingDirections() Orientation {

	return (Orientation)(C.QBoxLayout_virtualbase_expandingDirections(unsafe.Pointer(this.h)))

}
func (this *QBoxLayout) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	ok := C.QBoxLayout_override_virtual_expandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_expandingDirections
func miqt_exec_callback_QBoxLayout_expandingDirections(self *C.QBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_Invalidate() {

	C.QBoxLayout_virtualbase_invalidate(unsafe.Pointer(this.h))

}
func (this *QBoxLayout) OnInvalidate(slot func(super func())) {
	ok := C.QBoxLayout_override_virtual_invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_invalidate
func miqt_exec_callback_QBoxLayout_invalidate(self *C.QBoxLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QBoxLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QBoxLayout) callVirtualBase_ItemAt(param1 int) *QLayoutItem {

	return newQLayoutItem(C.QBoxLayout_virtualbase_itemAt(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QBoxLayout) OnItemAt(slot func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem) {
	ok := C.QBoxLayout_override_virtual_itemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_itemAt
func miqt_exec_callback_QBoxLayout_itemAt(self *C.QBoxLayout, cb C.intptr_t, param1 C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_ItemAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QBoxLayout) callVirtualBase_TakeAt(param1 int) *QLayoutItem {

	return newQLayoutItem(C.QBoxLayout_virtualbase_takeAt(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QBoxLayout) OnTakeAt(slot func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem) {
	ok := C.QBoxLayout_override_virtual_takeAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_takeAt
func miqt_exec_callback_QBoxLayout_takeAt(self *C.QBoxLayout, cb C.intptr_t, param1 C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_TakeAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QBoxLayout) callVirtualBase_Count() int {

	return (int)(C.QBoxLayout_virtualbase_count(unsafe.Pointer(this.h)))

}
func (this *QBoxLayout) OnCount(slot func(super func() int) int) {
	ok := C.QBoxLayout_override_virtual_count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_count
func miqt_exec_callback_QBoxLayout_count(self *C.QBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_SetGeometry(geometry *QRect) {

	C.QBoxLayout_virtualbase_setGeometry(unsafe.Pointer(this.h), geometry.cPointer())

}
func (this *QBoxLayout) OnSetGeometry(slot func(super func(geometry *QRect), geometry *QRect)) {
	ok := C.QBoxLayout_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_setGeometry
func miqt_exec_callback_QBoxLayout_setGeometry(self *C.QBoxLayout, cb C.intptr_t, geometry *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(geometry *QRect), geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(geometry)

	gofunc((&QBoxLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QBoxLayout) callVirtualBase_Geometry() *QRect {

	_goptr := newQRect(C.QBoxLayout_virtualbase_geometry(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QBoxLayout) OnGeometry(slot func(super func() *QRect) *QRect) {
	ok := C.QBoxLayout_override_virtual_geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_geometry
func miqt_exec_callback_QBoxLayout_geometry(self *C.QBoxLayout, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_Geometry)

	return virtualReturn.cPointer()

}

func (this *QBoxLayout) callVirtualBase_IndexOf(param1 *QWidget) int {

	return (int)(C.QBoxLayout_virtualbase_indexOf(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QBoxLayout) OnIndexOf(slot func(super func(param1 *QWidget) int, param1 *QWidget) int) {
	ok := C.QBoxLayout_override_virtual_indexOf(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_indexOf
func miqt_exec_callback_QBoxLayout_indexOf(self *C.QBoxLayout, cb C.intptr_t, param1 *C.QWidget) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWidget) int, param1 *QWidget) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(param1)

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_IndexOf, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QBoxLayout_virtualbase_isEmpty(unsafe.Pointer(this.h)))

}
func (this *QBoxLayout) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QBoxLayout_override_virtual_isEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_isEmpty
func miqt_exec_callback_QBoxLayout_isEmpty(self *C.QBoxLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QBoxLayout_virtualbase_controlTypes(unsafe.Pointer(this.h)))

}
func (this *QBoxLayout) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	ok := C.QBoxLayout_override_virtual_controlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_controlTypes
func miqt_exec_callback_QBoxLayout_controlTypes(self *C.QBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_ReplaceWidget(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem {

	return newQLayoutItem(C.QBoxLayout_virtualbase_replaceWidget(unsafe.Pointer(this.h), from.cPointer(), to.cPointer(), (C.int)(options)))

}
func (this *QBoxLayout) OnReplaceWidget(slot func(super func(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem, from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem) {
	ok := C.QBoxLayout_override_virtual_replaceWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_replaceWidget
func miqt_exec_callback_QBoxLayout_replaceWidget(self *C.QBoxLayout, cb C.intptr_t, from *C.QWidget, to *C.QWidget, options C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem, from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(from)

	slotval2 := newQWidget(to)

	slotval3 := (FindChildOption)(options)

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_ReplaceWidget, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QBoxLayout) callVirtualBase_Layout() *QLayout {

	return newQLayout(C.QBoxLayout_virtualbase_layout(unsafe.Pointer(this.h)))

}
func (this *QBoxLayout) OnLayout(slot func(super func() *QLayout) *QLayout) {
	ok := C.QBoxLayout_override_virtual_layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_layout
func miqt_exec_callback_QBoxLayout_layout(self *C.QBoxLayout, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLayout) *QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_Layout)

	return virtualReturn.cPointer()

}

func (this *QBoxLayout) callVirtualBase_ChildEvent(e *QChildEvent) {

	C.QBoxLayout_virtualbase_childEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QBoxLayout) OnChildEvent(slot func(super func(e *QChildEvent), e *QChildEvent)) {
	ok := C.QBoxLayout_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_childEvent
func miqt_exec_callback_QBoxLayout_childEvent(self *C.QBoxLayout, cb C.intptr_t, e *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QChildEvent), e *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(e)

	gofunc((&QBoxLayout{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QBoxLayout) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QBoxLayout_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QBoxLayout) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QBoxLayout_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_event
func miqt_exec_callback_QBoxLayout_event(self *C.QBoxLayout, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QBoxLayout_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QBoxLayout) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QBoxLayout_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_eventFilter
func miqt_exec_callback_QBoxLayout_eventFilter(self *C.QBoxLayout, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QBoxLayout) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QBoxLayout_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QBoxLayout) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QBoxLayout_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_timerEvent
func miqt_exec_callback_QBoxLayout_timerEvent(self *C.QBoxLayout, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QBoxLayout{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QBoxLayout) callVirtualBase_CustomEvent(event *QEvent) {

	C.QBoxLayout_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QBoxLayout) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QBoxLayout_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_customEvent
func miqt_exec_callback_QBoxLayout_customEvent(self *C.QBoxLayout, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QBoxLayout{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QBoxLayout) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QBoxLayout_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QBoxLayout) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QBoxLayout_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_connectNotify
func miqt_exec_callback_QBoxLayout_connectNotify(self *C.QBoxLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QBoxLayout{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QBoxLayout) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QBoxLayout_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QBoxLayout) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QBoxLayout_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_disconnectNotify
func miqt_exec_callback_QBoxLayout_disconnectNotify(self *C.QBoxLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QBoxLayout{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QBoxLayout) callVirtualBase_Widget() *QWidget {

	return newQWidget(C.QBoxLayout_virtualbase_widget(unsafe.Pointer(this.h)))

}
func (this *QBoxLayout) OnWidget(slot func(super func() *QWidget) *QWidget) {
	ok := C.QBoxLayout_override_virtual_widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_widget
func miqt_exec_callback_QBoxLayout_widget(self *C.QBoxLayout, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_Widget)

	return virtualReturn.cPointer()

}

func (this *QBoxLayout) callVirtualBase_SpacerItem() *QSpacerItem {

	return newQSpacerItem(C.QBoxLayout_virtualbase_spacerItem(unsafe.Pointer(this.h)))

}
func (this *QBoxLayout) OnSpacerItem(slot func(super func() *QSpacerItem) *QSpacerItem) {
	ok := C.QBoxLayout_override_virtual_spacerItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QBoxLayout_spacerItem
func miqt_exec_callback_QBoxLayout_spacerItem(self *C.QBoxLayout, cb C.intptr_t) *C.QSpacerItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSpacerItem) *QSpacerItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QBoxLayout{h: self}).callVirtualBase_SpacerItem)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QBoxLayout) Delete() {
	C.QBoxLayout_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBoxLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QBoxLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QHBoxLayout struct {
	h *C.QHBoxLayout
	*QBoxLayout
}

func (this *QHBoxLayout) cPointer() *C.QHBoxLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHBoxLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHBoxLayout constructs the type using only CGO pointers.
func newQHBoxLayout(h *C.QHBoxLayout) *QHBoxLayout {
	if h == nil {
		return nil
	}
	var outptr_QBoxLayout *C.QBoxLayout = nil
	C.QHBoxLayout_virtbase(h, &outptr_QBoxLayout)

	return &QHBoxLayout{h: h,
		QBoxLayout: newQBoxLayout(outptr_QBoxLayout)}
}

// UnsafeNewQHBoxLayout constructs the type using only unsafe pointers.
func UnsafeNewQHBoxLayout(h unsafe.Pointer) *QHBoxLayout {
	return newQHBoxLayout((*C.QHBoxLayout)(h))
}

// NewQHBoxLayout constructs a new QHBoxLayout object.
func NewQHBoxLayout(parent *QWidget) *QHBoxLayout {

	return newQHBoxLayout(C.QHBoxLayout_new(parent.cPointer()))
}

// NewQHBoxLayout2 constructs a new QHBoxLayout object.
func NewQHBoxLayout2() *QHBoxLayout {

	return newQHBoxLayout(C.QHBoxLayout_new2())
}

func (this *QHBoxLayout) MetaObject() *QMetaObject {
	return newQMetaObject(C.QHBoxLayout_metaObject(this.h))
}

func (this *QHBoxLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QHBoxLayout_metacast(this.h, param1_Cstring))
}

func QHBoxLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHBoxLayout_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHBoxLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHBoxLayout_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHBoxLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHBoxLayout_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHBoxLayout) callVirtualBase_AddItem(param1 *QLayoutItem) {

	C.QHBoxLayout_virtualbase_addItem(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QHBoxLayout) OnAddItem(slot func(super func(param1 *QLayoutItem), param1 *QLayoutItem)) {
	ok := C.QHBoxLayout_override_virtual_addItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_addItem
func miqt_exec_callback_QHBoxLayout_addItem(self *C.QHBoxLayout, cb C.intptr_t, param1 *C.QLayoutItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QLayoutItem), param1 *QLayoutItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQLayoutItem(param1)

	gofunc((&QHBoxLayout{h: self}).callVirtualBase_AddItem, slotval1)

}

func (this *QHBoxLayout) callVirtualBase_Spacing() int {

	return (int)(C.QHBoxLayout_virtualbase_spacing(unsafe.Pointer(this.h)))

}
func (this *QHBoxLayout) OnSpacing(slot func(super func() int) int) {
	ok := C.QHBoxLayout_override_virtual_spacing(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_spacing
func miqt_exec_callback_QHBoxLayout_spacing(self *C.QHBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_Spacing)

	return (C.int)(virtualReturn)

}

func (this *QHBoxLayout) callVirtualBase_SetSpacing(spacing int) {

	C.QHBoxLayout_virtualbase_setSpacing(unsafe.Pointer(this.h), (C.int)(spacing))

}
func (this *QHBoxLayout) OnSetSpacing(slot func(super func(spacing int), spacing int)) {
	ok := C.QHBoxLayout_override_virtual_setSpacing(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_setSpacing
func miqt_exec_callback_QHBoxLayout_setSpacing(self *C.QHBoxLayout, cb C.intptr_t, spacing C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(spacing int), spacing int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(spacing)

	gofunc((&QHBoxLayout{h: self}).callVirtualBase_SetSpacing, slotval1)

}

func (this *QHBoxLayout) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QHBoxLayout_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHBoxLayout) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QHBoxLayout_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_sizeHint
func miqt_exec_callback_QHBoxLayout_sizeHint(self *C.QHBoxLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QHBoxLayout) callVirtualBase_MinimumSize() *QSize {

	_goptr := newQSize(C.QHBoxLayout_virtualbase_minimumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHBoxLayout) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QHBoxLayout_override_virtual_minimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_minimumSize
func miqt_exec_callback_QHBoxLayout_minimumSize(self *C.QHBoxLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QHBoxLayout) callVirtualBase_MaximumSize() *QSize {

	_goptr := newQSize(C.QHBoxLayout_virtualbase_maximumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHBoxLayout) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QHBoxLayout_override_virtual_maximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_maximumSize
func miqt_exec_callback_QHBoxLayout_maximumSize(self *C.QHBoxLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QHBoxLayout) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QHBoxLayout_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QHBoxLayout) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QHBoxLayout_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_hasHeightForWidth
func miqt_exec_callback_QHBoxLayout_hasHeightForWidth(self *C.QHBoxLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QHBoxLayout) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QHBoxLayout_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QHBoxLayout) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QHBoxLayout_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_heightForWidth
func miqt_exec_callback_QHBoxLayout_heightForWidth(self *C.QHBoxLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QHBoxLayout) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QHBoxLayout_virtualbase_minimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QHBoxLayout) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QHBoxLayout_override_virtual_minimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_minimumHeightForWidth
func miqt_exec_callback_QHBoxLayout_minimumHeightForWidth(self *C.QHBoxLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QHBoxLayout) callVirtualBase_ExpandingDirections() Orientation {

	return (Orientation)(C.QHBoxLayout_virtualbase_expandingDirections(unsafe.Pointer(this.h)))

}
func (this *QHBoxLayout) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	ok := C.QHBoxLayout_override_virtual_expandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_expandingDirections
func miqt_exec_callback_QHBoxLayout_expandingDirections(self *C.QHBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QHBoxLayout) callVirtualBase_Invalidate() {

	C.QHBoxLayout_virtualbase_invalidate(unsafe.Pointer(this.h))

}
func (this *QHBoxLayout) OnInvalidate(slot func(super func())) {
	ok := C.QHBoxLayout_override_virtual_invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_invalidate
func miqt_exec_callback_QHBoxLayout_invalidate(self *C.QHBoxLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QHBoxLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QHBoxLayout) callVirtualBase_ItemAt(param1 int) *QLayoutItem {

	return newQLayoutItem(C.QHBoxLayout_virtualbase_itemAt(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QHBoxLayout) OnItemAt(slot func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem) {
	ok := C.QHBoxLayout_override_virtual_itemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_itemAt
func miqt_exec_callback_QHBoxLayout_itemAt(self *C.QHBoxLayout, cb C.intptr_t, param1 C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_ItemAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QHBoxLayout) callVirtualBase_TakeAt(param1 int) *QLayoutItem {

	return newQLayoutItem(C.QHBoxLayout_virtualbase_takeAt(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QHBoxLayout) OnTakeAt(slot func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem) {
	ok := C.QHBoxLayout_override_virtual_takeAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_takeAt
func miqt_exec_callback_QHBoxLayout_takeAt(self *C.QHBoxLayout, cb C.intptr_t, param1 C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_TakeAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QHBoxLayout) callVirtualBase_Count() int {

	return (int)(C.QHBoxLayout_virtualbase_count(unsafe.Pointer(this.h)))

}
func (this *QHBoxLayout) OnCount(slot func(super func() int) int) {
	ok := C.QHBoxLayout_override_virtual_count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_count
func miqt_exec_callback_QHBoxLayout_count(self *C.QHBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QHBoxLayout) callVirtualBase_SetGeometry(geometry *QRect) {

	C.QHBoxLayout_virtualbase_setGeometry(unsafe.Pointer(this.h), geometry.cPointer())

}
func (this *QHBoxLayout) OnSetGeometry(slot func(super func(geometry *QRect), geometry *QRect)) {
	ok := C.QHBoxLayout_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_setGeometry
func miqt_exec_callback_QHBoxLayout_setGeometry(self *C.QHBoxLayout, cb C.intptr_t, geometry *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(geometry *QRect), geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(geometry)

	gofunc((&QHBoxLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QHBoxLayout) callVirtualBase_Geometry() *QRect {

	_goptr := newQRect(C.QHBoxLayout_virtualbase_geometry(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHBoxLayout) OnGeometry(slot func(super func() *QRect) *QRect) {
	ok := C.QHBoxLayout_override_virtual_geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_geometry
func miqt_exec_callback_QHBoxLayout_geometry(self *C.QHBoxLayout, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_Geometry)

	return virtualReturn.cPointer()

}

func (this *QHBoxLayout) callVirtualBase_IndexOf(param1 *QWidget) int {

	return (int)(C.QHBoxLayout_virtualbase_indexOf(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QHBoxLayout) OnIndexOf(slot func(super func(param1 *QWidget) int, param1 *QWidget) int) {
	ok := C.QHBoxLayout_override_virtual_indexOf(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_indexOf
func miqt_exec_callback_QHBoxLayout_indexOf(self *C.QHBoxLayout, cb C.intptr_t, param1 *C.QWidget) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWidget) int, param1 *QWidget) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(param1)

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_IndexOf, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QHBoxLayout) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QHBoxLayout_virtualbase_isEmpty(unsafe.Pointer(this.h)))

}
func (this *QHBoxLayout) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QHBoxLayout_override_virtual_isEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_isEmpty
func miqt_exec_callback_QHBoxLayout_isEmpty(self *C.QHBoxLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QHBoxLayout) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QHBoxLayout_virtualbase_controlTypes(unsafe.Pointer(this.h)))

}
func (this *QHBoxLayout) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	ok := C.QHBoxLayout_override_virtual_controlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_controlTypes
func miqt_exec_callback_QHBoxLayout_controlTypes(self *C.QHBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

func (this *QHBoxLayout) callVirtualBase_ReplaceWidget(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem {

	return newQLayoutItem(C.QHBoxLayout_virtualbase_replaceWidget(unsafe.Pointer(this.h), from.cPointer(), to.cPointer(), (C.int)(options)))

}
func (this *QHBoxLayout) OnReplaceWidget(slot func(super func(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem, from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem) {
	ok := C.QHBoxLayout_override_virtual_replaceWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_replaceWidget
func miqt_exec_callback_QHBoxLayout_replaceWidget(self *C.QHBoxLayout, cb C.intptr_t, from *C.QWidget, to *C.QWidget, options C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem, from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(from)

	slotval2 := newQWidget(to)

	slotval3 := (FindChildOption)(options)

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_ReplaceWidget, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QHBoxLayout) callVirtualBase_Layout() *QLayout {

	return newQLayout(C.QHBoxLayout_virtualbase_layout(unsafe.Pointer(this.h)))

}
func (this *QHBoxLayout) OnLayout(slot func(super func() *QLayout) *QLayout) {
	ok := C.QHBoxLayout_override_virtual_layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_layout
func miqt_exec_callback_QHBoxLayout_layout(self *C.QHBoxLayout, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLayout) *QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_Layout)

	return virtualReturn.cPointer()

}

func (this *QHBoxLayout) callVirtualBase_ChildEvent(e *QChildEvent) {

	C.QHBoxLayout_virtualbase_childEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QHBoxLayout) OnChildEvent(slot func(super func(e *QChildEvent), e *QChildEvent)) {
	ok := C.QHBoxLayout_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_childEvent
func miqt_exec_callback_QHBoxLayout_childEvent(self *C.QHBoxLayout, cb C.intptr_t, e *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QChildEvent), e *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(e)

	gofunc((&QHBoxLayout{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QHBoxLayout) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QHBoxLayout_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QHBoxLayout) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QHBoxLayout_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_event
func miqt_exec_callback_QHBoxLayout_event(self *C.QHBoxLayout, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHBoxLayout) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QHBoxLayout_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QHBoxLayout) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QHBoxLayout_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_eventFilter
func miqt_exec_callback_QHBoxLayout_eventFilter(self *C.QHBoxLayout, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QHBoxLayout) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QHBoxLayout_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHBoxLayout) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QHBoxLayout_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_timerEvent
func miqt_exec_callback_QHBoxLayout_timerEvent(self *C.QHBoxLayout, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QHBoxLayout{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QHBoxLayout) callVirtualBase_CustomEvent(event *QEvent) {

	C.QHBoxLayout_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHBoxLayout) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QHBoxLayout_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_customEvent
func miqt_exec_callback_QHBoxLayout_customEvent(self *C.QHBoxLayout, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QHBoxLayout{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QHBoxLayout) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QHBoxLayout_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QHBoxLayout) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QHBoxLayout_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_connectNotify
func miqt_exec_callback_QHBoxLayout_connectNotify(self *C.QHBoxLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QHBoxLayout{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QHBoxLayout) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QHBoxLayout_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QHBoxLayout) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QHBoxLayout_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_disconnectNotify
func miqt_exec_callback_QHBoxLayout_disconnectNotify(self *C.QHBoxLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QHBoxLayout{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QHBoxLayout) callVirtualBase_Widget() *QWidget {

	return newQWidget(C.QHBoxLayout_virtualbase_widget(unsafe.Pointer(this.h)))

}
func (this *QHBoxLayout) OnWidget(slot func(super func() *QWidget) *QWidget) {
	ok := C.QHBoxLayout_override_virtual_widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_widget
func miqt_exec_callback_QHBoxLayout_widget(self *C.QHBoxLayout, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_Widget)

	return virtualReturn.cPointer()

}

func (this *QHBoxLayout) callVirtualBase_SpacerItem() *QSpacerItem {

	return newQSpacerItem(C.QHBoxLayout_virtualbase_spacerItem(unsafe.Pointer(this.h)))

}
func (this *QHBoxLayout) OnSpacerItem(slot func(super func() *QSpacerItem) *QSpacerItem) {
	ok := C.QHBoxLayout_override_virtual_spacerItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHBoxLayout_spacerItem
func miqt_exec_callback_QHBoxLayout_spacerItem(self *C.QHBoxLayout, cb C.intptr_t) *C.QSpacerItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSpacerItem) *QSpacerItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHBoxLayout{h: self}).callVirtualBase_SpacerItem)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QHBoxLayout) Delete() {
	C.QHBoxLayout_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHBoxLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QHBoxLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QVBoxLayout struct {
	h *C.QVBoxLayout
	*QBoxLayout
}

func (this *QVBoxLayout) cPointer() *C.QVBoxLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVBoxLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQVBoxLayout constructs the type using only CGO pointers.
func newQVBoxLayout(h *C.QVBoxLayout) *QVBoxLayout {
	if h == nil {
		return nil
	}
	var outptr_QBoxLayout *C.QBoxLayout = nil
	C.QVBoxLayout_virtbase(h, &outptr_QBoxLayout)

	return &QVBoxLayout{h: h,
		QBoxLayout: newQBoxLayout(outptr_QBoxLayout)}
}

// UnsafeNewQVBoxLayout constructs the type using only unsafe pointers.
func UnsafeNewQVBoxLayout(h unsafe.Pointer) *QVBoxLayout {
	return newQVBoxLayout((*C.QVBoxLayout)(h))
}

// NewQVBoxLayout constructs a new QVBoxLayout object.
func NewQVBoxLayout(parent *QWidget) *QVBoxLayout {

	return newQVBoxLayout(C.QVBoxLayout_new(parent.cPointer()))
}

// NewQVBoxLayout2 constructs a new QVBoxLayout object.
func NewQVBoxLayout2() *QVBoxLayout {

	return newQVBoxLayout(C.QVBoxLayout_new2())
}

func (this *QVBoxLayout) MetaObject() *QMetaObject {
	return newQMetaObject(C.QVBoxLayout_metaObject(this.h))
}

func (this *QVBoxLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVBoxLayout_metacast(this.h, param1_Cstring))
}

func QVBoxLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVBoxLayout_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVBoxLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVBoxLayout_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVBoxLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVBoxLayout_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QVBoxLayout) callVirtualBase_AddItem(param1 *QLayoutItem) {

	C.QVBoxLayout_virtualbase_addItem(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QVBoxLayout) OnAddItem(slot func(super func(param1 *QLayoutItem), param1 *QLayoutItem)) {
	ok := C.QVBoxLayout_override_virtual_addItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_addItem
func miqt_exec_callback_QVBoxLayout_addItem(self *C.QVBoxLayout, cb C.intptr_t, param1 *C.QLayoutItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QLayoutItem), param1 *QLayoutItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQLayoutItem(param1)

	gofunc((&QVBoxLayout{h: self}).callVirtualBase_AddItem, slotval1)

}

func (this *QVBoxLayout) callVirtualBase_Spacing() int {

	return (int)(C.QVBoxLayout_virtualbase_spacing(unsafe.Pointer(this.h)))

}
func (this *QVBoxLayout) OnSpacing(slot func(super func() int) int) {
	ok := C.QVBoxLayout_override_virtual_spacing(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_spacing
func miqt_exec_callback_QVBoxLayout_spacing(self *C.QVBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_Spacing)

	return (C.int)(virtualReturn)

}

func (this *QVBoxLayout) callVirtualBase_SetSpacing(spacing int) {

	C.QVBoxLayout_virtualbase_setSpacing(unsafe.Pointer(this.h), (C.int)(spacing))

}
func (this *QVBoxLayout) OnSetSpacing(slot func(super func(spacing int), spacing int)) {
	ok := C.QVBoxLayout_override_virtual_setSpacing(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_setSpacing
func miqt_exec_callback_QVBoxLayout_setSpacing(self *C.QVBoxLayout, cb C.intptr_t, spacing C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(spacing int), spacing int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(spacing)

	gofunc((&QVBoxLayout{h: self}).callVirtualBase_SetSpacing, slotval1)

}

func (this *QVBoxLayout) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QVBoxLayout_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QVBoxLayout) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QVBoxLayout_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_sizeHint
func miqt_exec_callback_QVBoxLayout_sizeHint(self *C.QVBoxLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QVBoxLayout) callVirtualBase_MinimumSize() *QSize {

	_goptr := newQSize(C.QVBoxLayout_virtualbase_minimumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QVBoxLayout) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QVBoxLayout_override_virtual_minimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_minimumSize
func miqt_exec_callback_QVBoxLayout_minimumSize(self *C.QVBoxLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QVBoxLayout) callVirtualBase_MaximumSize() *QSize {

	_goptr := newQSize(C.QVBoxLayout_virtualbase_maximumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QVBoxLayout) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QVBoxLayout_override_virtual_maximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_maximumSize
func miqt_exec_callback_QVBoxLayout_maximumSize(self *C.QVBoxLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QVBoxLayout) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QVBoxLayout_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QVBoxLayout) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QVBoxLayout_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_hasHeightForWidth
func miqt_exec_callback_QVBoxLayout_hasHeightForWidth(self *C.QVBoxLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QVBoxLayout) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QVBoxLayout_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QVBoxLayout) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QVBoxLayout_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_heightForWidth
func miqt_exec_callback_QVBoxLayout_heightForWidth(self *C.QVBoxLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QVBoxLayout) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QVBoxLayout_virtualbase_minimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QVBoxLayout) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QVBoxLayout_override_virtual_minimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_minimumHeightForWidth
func miqt_exec_callback_QVBoxLayout_minimumHeightForWidth(self *C.QVBoxLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QVBoxLayout) callVirtualBase_ExpandingDirections() Orientation {

	return (Orientation)(C.QVBoxLayout_virtualbase_expandingDirections(unsafe.Pointer(this.h)))

}
func (this *QVBoxLayout) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	ok := C.QVBoxLayout_override_virtual_expandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_expandingDirections
func miqt_exec_callback_QVBoxLayout_expandingDirections(self *C.QVBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QVBoxLayout) callVirtualBase_Invalidate() {

	C.QVBoxLayout_virtualbase_invalidate(unsafe.Pointer(this.h))

}
func (this *QVBoxLayout) OnInvalidate(slot func(super func())) {
	ok := C.QVBoxLayout_override_virtual_invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_invalidate
func miqt_exec_callback_QVBoxLayout_invalidate(self *C.QVBoxLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QVBoxLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QVBoxLayout) callVirtualBase_ItemAt(param1 int) *QLayoutItem {

	return newQLayoutItem(C.QVBoxLayout_virtualbase_itemAt(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QVBoxLayout) OnItemAt(slot func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem) {
	ok := C.QVBoxLayout_override_virtual_itemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_itemAt
func miqt_exec_callback_QVBoxLayout_itemAt(self *C.QVBoxLayout, cb C.intptr_t, param1 C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_ItemAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QVBoxLayout) callVirtualBase_TakeAt(param1 int) *QLayoutItem {

	return newQLayoutItem(C.QVBoxLayout_virtualbase_takeAt(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QVBoxLayout) OnTakeAt(slot func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem) {
	ok := C.QVBoxLayout_override_virtual_takeAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_takeAt
func miqt_exec_callback_QVBoxLayout_takeAt(self *C.QVBoxLayout, cb C.intptr_t, param1 C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_TakeAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QVBoxLayout) callVirtualBase_Count() int {

	return (int)(C.QVBoxLayout_virtualbase_count(unsafe.Pointer(this.h)))

}
func (this *QVBoxLayout) OnCount(slot func(super func() int) int) {
	ok := C.QVBoxLayout_override_virtual_count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_count
func miqt_exec_callback_QVBoxLayout_count(self *C.QVBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QVBoxLayout) callVirtualBase_SetGeometry(geometry *QRect) {

	C.QVBoxLayout_virtualbase_setGeometry(unsafe.Pointer(this.h), geometry.cPointer())

}
func (this *QVBoxLayout) OnSetGeometry(slot func(super func(geometry *QRect), geometry *QRect)) {
	ok := C.QVBoxLayout_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_setGeometry
func miqt_exec_callback_QVBoxLayout_setGeometry(self *C.QVBoxLayout, cb C.intptr_t, geometry *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(geometry *QRect), geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(geometry)

	gofunc((&QVBoxLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QVBoxLayout) callVirtualBase_Geometry() *QRect {

	_goptr := newQRect(C.QVBoxLayout_virtualbase_geometry(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QVBoxLayout) OnGeometry(slot func(super func() *QRect) *QRect) {
	ok := C.QVBoxLayout_override_virtual_geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_geometry
func miqt_exec_callback_QVBoxLayout_geometry(self *C.QVBoxLayout, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_Geometry)

	return virtualReturn.cPointer()

}

func (this *QVBoxLayout) callVirtualBase_IndexOf(param1 *QWidget) int {

	return (int)(C.QVBoxLayout_virtualbase_indexOf(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QVBoxLayout) OnIndexOf(slot func(super func(param1 *QWidget) int, param1 *QWidget) int) {
	ok := C.QVBoxLayout_override_virtual_indexOf(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_indexOf
func miqt_exec_callback_QVBoxLayout_indexOf(self *C.QVBoxLayout, cb C.intptr_t, param1 *C.QWidget) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWidget) int, param1 *QWidget) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(param1)

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_IndexOf, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QVBoxLayout) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QVBoxLayout_virtualbase_isEmpty(unsafe.Pointer(this.h)))

}
func (this *QVBoxLayout) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QVBoxLayout_override_virtual_isEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_isEmpty
func miqt_exec_callback_QVBoxLayout_isEmpty(self *C.QVBoxLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QVBoxLayout) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QVBoxLayout_virtualbase_controlTypes(unsafe.Pointer(this.h)))

}
func (this *QVBoxLayout) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	ok := C.QVBoxLayout_override_virtual_controlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_controlTypes
func miqt_exec_callback_QVBoxLayout_controlTypes(self *C.QVBoxLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

func (this *QVBoxLayout) callVirtualBase_ReplaceWidget(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem {

	return newQLayoutItem(C.QVBoxLayout_virtualbase_replaceWidget(unsafe.Pointer(this.h), from.cPointer(), to.cPointer(), (C.int)(options)))

}
func (this *QVBoxLayout) OnReplaceWidget(slot func(super func(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem, from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem) {
	ok := C.QVBoxLayout_override_virtual_replaceWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_replaceWidget
func miqt_exec_callback_QVBoxLayout_replaceWidget(self *C.QVBoxLayout, cb C.intptr_t, from *C.QWidget, to *C.QWidget, options C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem, from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(from)

	slotval2 := newQWidget(to)

	slotval3 := (FindChildOption)(options)

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_ReplaceWidget, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QVBoxLayout) callVirtualBase_Layout() *QLayout {

	return newQLayout(C.QVBoxLayout_virtualbase_layout(unsafe.Pointer(this.h)))

}
func (this *QVBoxLayout) OnLayout(slot func(super func() *QLayout) *QLayout) {
	ok := C.QVBoxLayout_override_virtual_layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_layout
func miqt_exec_callback_QVBoxLayout_layout(self *C.QVBoxLayout, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLayout) *QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_Layout)

	return virtualReturn.cPointer()

}

func (this *QVBoxLayout) callVirtualBase_ChildEvent(e *QChildEvent) {

	C.QVBoxLayout_virtualbase_childEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QVBoxLayout) OnChildEvent(slot func(super func(e *QChildEvent), e *QChildEvent)) {
	ok := C.QVBoxLayout_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_childEvent
func miqt_exec_callback_QVBoxLayout_childEvent(self *C.QVBoxLayout, cb C.intptr_t, e *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QChildEvent), e *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(e)

	gofunc((&QVBoxLayout{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QVBoxLayout) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QVBoxLayout_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QVBoxLayout) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QVBoxLayout_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_event
func miqt_exec_callback_QVBoxLayout_event(self *C.QVBoxLayout, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QVBoxLayout) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QVBoxLayout_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QVBoxLayout) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QVBoxLayout_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_eventFilter
func miqt_exec_callback_QVBoxLayout_eventFilter(self *C.QVBoxLayout, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QVBoxLayout) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QVBoxLayout_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QVBoxLayout) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QVBoxLayout_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_timerEvent
func miqt_exec_callback_QVBoxLayout_timerEvent(self *C.QVBoxLayout, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QVBoxLayout{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QVBoxLayout) callVirtualBase_CustomEvent(event *QEvent) {

	C.QVBoxLayout_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QVBoxLayout) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QVBoxLayout_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_customEvent
func miqt_exec_callback_QVBoxLayout_customEvent(self *C.QVBoxLayout, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QVBoxLayout{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QVBoxLayout) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QVBoxLayout_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QVBoxLayout) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QVBoxLayout_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_connectNotify
func miqt_exec_callback_QVBoxLayout_connectNotify(self *C.QVBoxLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QVBoxLayout{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QVBoxLayout) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QVBoxLayout_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QVBoxLayout) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QVBoxLayout_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_disconnectNotify
func miqt_exec_callback_QVBoxLayout_disconnectNotify(self *C.QVBoxLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QVBoxLayout{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QVBoxLayout) callVirtualBase_Widget() *QWidget {

	return newQWidget(C.QVBoxLayout_virtualbase_widget(unsafe.Pointer(this.h)))

}
func (this *QVBoxLayout) OnWidget(slot func(super func() *QWidget) *QWidget) {
	ok := C.QVBoxLayout_override_virtual_widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_widget
func miqt_exec_callback_QVBoxLayout_widget(self *C.QVBoxLayout, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_Widget)

	return virtualReturn.cPointer()

}

func (this *QVBoxLayout) callVirtualBase_SpacerItem() *QSpacerItem {

	return newQSpacerItem(C.QVBoxLayout_virtualbase_spacerItem(unsafe.Pointer(this.h)))

}
func (this *QVBoxLayout) OnSpacerItem(slot func(super func() *QSpacerItem) *QSpacerItem) {
	ok := C.QVBoxLayout_override_virtual_spacerItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QVBoxLayout_spacerItem
func miqt_exec_callback_QVBoxLayout_spacerItem(self *C.QVBoxLayout, cb C.intptr_t) *C.QSpacerItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSpacerItem) *QSpacerItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QVBoxLayout{h: self}).callVirtualBase_SpacerItem)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QVBoxLayout) Delete() {
	C.QVBoxLayout_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVBoxLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QVBoxLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
