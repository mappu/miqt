package qt

/*

#include "gen_qundoview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QUndoView struct {
	h *C.QUndoView
	*QListView
}

func (this *QUndoView) cPointer() *C.QUndoView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QUndoView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQUndoView constructs the type using only CGO pointers.
func newQUndoView(h *C.QUndoView) *QUndoView {
	if h == nil {
		return nil
	}
	var outptr_QListView *C.QListView = nil
	C.QUndoView_virtbase(h, &outptr_QListView)

	return &QUndoView{h: h,
		QListView: newQListView(outptr_QListView)}
}

// UnsafeNewQUndoView constructs the type using only unsafe pointers.
func UnsafeNewQUndoView(h unsafe.Pointer) *QUndoView {
	return newQUndoView((*C.QUndoView)(h))
}

// NewQUndoView constructs a new QUndoView object.
func NewQUndoView(parent *QWidget) *QUndoView {

	return newQUndoView(C.QUndoView_new(parent.cPointer()))
}

// NewQUndoView2 constructs a new QUndoView object.
func NewQUndoView2() *QUndoView {

	return newQUndoView(C.QUndoView_new2())
}

// NewQUndoView3 constructs a new QUndoView object.
func NewQUndoView3(stack *QUndoStack) *QUndoView {

	return newQUndoView(C.QUndoView_new3(stack.cPointer()))
}

// NewQUndoView4 constructs a new QUndoView object.
func NewQUndoView4(group *QUndoGroup) *QUndoView {

	return newQUndoView(C.QUndoView_new4(group.cPointer()))
}

// NewQUndoView5 constructs a new QUndoView object.
func NewQUndoView5(stack *QUndoStack, parent *QWidget) *QUndoView {

	return newQUndoView(C.QUndoView_new5(stack.cPointer(), parent.cPointer()))
}

// NewQUndoView6 constructs a new QUndoView object.
func NewQUndoView6(group *QUndoGroup, parent *QWidget) *QUndoView {

	return newQUndoView(C.QUndoView_new6(group.cPointer(), parent.cPointer()))
}

func (this *QUndoView) MetaObject() *QMetaObject {
	return newQMetaObject(C.QUndoView_MetaObject(this.h))
}

func (this *QUndoView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QUndoView_Metacast(this.h, param1_Cstring))
}

func QUndoView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QUndoView_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUndoView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QUndoView_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoView) Stack() *QUndoStack {
	return newQUndoStack(C.QUndoView_Stack(this.h))
}

func (this *QUndoView) Group() *QUndoGroup {
	return newQUndoGroup(C.QUndoView_Group(this.h))
}

func (this *QUndoView) SetEmptyLabel(label string) {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	C.QUndoView_SetEmptyLabel(this.h, label_ms)
}

func (this *QUndoView) EmptyLabel() string {
	var _ms C.struct_miqt_string = C.QUndoView_EmptyLabel(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoView) SetCleanIcon(icon *QIcon) {
	C.QUndoView_SetCleanIcon(this.h, icon.cPointer())
}

func (this *QUndoView) CleanIcon() *QIcon {
	_goptr := newQIcon(C.QUndoView_CleanIcon(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUndoView) SetStack(stack *QUndoStack) {
	C.QUndoView_SetStack(this.h, stack.cPointer())
}

func (this *QUndoView) SetGroup(group *QUndoGroup) {
	C.QUndoView_SetGroup(this.h, group.cPointer())
}

func QUndoView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoView_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUndoView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoView_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUndoView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoView_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUndoView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoView) callVirtualBase_VisualRect(index *QModelIndex) *QRect {

	_goptr := newQRect(C.QUndoView_virtualbase_VisualRect(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QUndoView) OnVisualRect(slot func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect) {
	ok := C.QUndoView_override_virtual_VisualRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_VisualRect
func miqt_exec_callback_QUndoView_VisualRect(self *C.QUndoView, cb C.intptr_t, index *C.QModelIndex) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_VisualRect, slotval1)

	return virtualReturn.cPointer()

}

func (this *QUndoView) callVirtualBase_ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {

	C.QUndoView_virtualbase_ScrollTo(unsafe.Pointer(this.h), index.cPointer(), (C.int)(hint))

}
func (this *QUndoView) OnScrollTo(slot func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint)) {
	ok := C.QUndoView_override_virtual_ScrollTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_ScrollTo
func miqt_exec_callback_QUndoView_ScrollTo(self *C.QUndoView, cb C.intptr_t, index *C.QModelIndex, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__ScrollHint)(hint)

	gofunc((&QUndoView{h: self}).callVirtualBase_ScrollTo, slotval1, slotval2)

}

func (this *QUndoView) callVirtualBase_IndexAt(p *QPoint) *QModelIndex {

	_goptr := newQModelIndex(C.QUndoView_virtualbase_IndexAt(unsafe.Pointer(this.h), p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QUndoView) OnIndexAt(slot func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex) {
	ok := C.QUndoView_override_virtual_IndexAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_IndexAt
func miqt_exec_callback_QUndoView_IndexAt(self *C.QUndoView, cb C.intptr_t, p *C.QPoint) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(p)

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_IndexAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QUndoView) callVirtualBase_DoItemsLayout() {

	C.QUndoView_virtualbase_DoItemsLayout(unsafe.Pointer(this.h))

}
func (this *QUndoView) OnDoItemsLayout(slot func(super func())) {
	ok := C.QUndoView_override_virtual_DoItemsLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_DoItemsLayout
func miqt_exec_callback_QUndoView_DoItemsLayout(self *C.QUndoView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUndoView{h: self}).callVirtualBase_DoItemsLayout)

}

func (this *QUndoView) callVirtualBase_Reset() {

	C.QUndoView_virtualbase_Reset(unsafe.Pointer(this.h))

}
func (this *QUndoView) OnReset(slot func(super func())) {
	ok := C.QUndoView_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_Reset
func miqt_exec_callback_QUndoView_Reset(self *C.QUndoView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUndoView{h: self}).callVirtualBase_Reset)

}

func (this *QUndoView) callVirtualBase_SetRootIndex(index *QModelIndex) {

	C.QUndoView_virtualbase_SetRootIndex(unsafe.Pointer(this.h), index.cPointer())

}
func (this *QUndoView) OnSetRootIndex(slot func(super func(index *QModelIndex), index *QModelIndex)) {
	ok := C.QUndoView_override_virtual_SetRootIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_SetRootIndex
func miqt_exec_callback_QUndoView_SetRootIndex(self *C.QUndoView, cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex), index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc((&QUndoView{h: self}).callVirtualBase_SetRootIndex, slotval1)

}

func (this *QUndoView) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QUndoView_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QUndoView) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QUndoView_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_Event
func miqt_exec_callback_QUndoView_Event(self *C.QUndoView, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QUndoView_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QUndoView) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QUndoView_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_ScrollContentsBy
func miqt_exec_callback_QUndoView_ScrollContentsBy(self *C.QUndoView, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QUndoView{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QUndoView) callVirtualBase_DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	roles_ma := C.struct_miqt_array{len: C.size_t(len(roles)), data: unsafe.Pointer(roles_CArray)}

	C.QUndoView_virtualbase_DataChanged(unsafe.Pointer(this.h), topLeft.cPointer(), bottomRight.cPointer(), roles_ma)

}
func (this *QUndoView) OnDataChanged(slot func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int)) {
	ok := C.QUndoView_override_virtual_DataChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_DataChanged
func miqt_exec_callback_QUndoView_DataChanged(self *C.QUndoView, cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(topLeft)

	slotval2 := newQModelIndex(bottomRight)

	var roles_ma C.struct_miqt_array = roles
	roles_ret := make([]int, int(roles_ma.len))
	roles_outCast := (*[0xffff]C.int)(unsafe.Pointer(roles_ma.data)) // hey ya
	for i := 0; i < int(roles_ma.len); i++ {
		roles_ret[i] = (int)(roles_outCast[i])
	}
	slotval3 := roles_ret

	gofunc((&QUndoView{h: self}).callVirtualBase_DataChanged, slotval1, slotval2, slotval3)

}

func (this *QUndoView) callVirtualBase_RowsInserted(parent *QModelIndex, start int, end int) {

	C.QUndoView_virtualbase_RowsInserted(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QUndoView) OnRowsInserted(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QUndoView_override_virtual_RowsInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_RowsInserted
func miqt_exec_callback_QUndoView_RowsInserted(self *C.QUndoView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QUndoView{h: self}).callVirtualBase_RowsInserted, slotval1, slotval2, slotval3)

}

func (this *QUndoView) callVirtualBase_RowsAboutToBeRemoved(parent *QModelIndex, start int, end int) {

	C.QUndoView_virtualbase_RowsAboutToBeRemoved(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QUndoView) OnRowsAboutToBeRemoved(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QUndoView_override_virtual_RowsAboutToBeRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_RowsAboutToBeRemoved
func miqt_exec_callback_QUndoView_RowsAboutToBeRemoved(self *C.QUndoView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QUndoView{h: self}).callVirtualBase_RowsAboutToBeRemoved, slotval1, slotval2, slotval3)

}

func (this *QUndoView) callVirtualBase_MouseMoveEvent(e *QMouseEvent) {

	C.QUndoView_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QUndoView) OnMouseMoveEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QUndoView_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_MouseMoveEvent
func miqt_exec_callback_QUndoView_MouseMoveEvent(self *C.QUndoView, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QUndoView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QUndoView_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QUndoView) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QUndoView_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_MouseReleaseEvent
func miqt_exec_callback_QUndoView_MouseReleaseEvent(self *C.QUndoView, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QUndoView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QUndoView_virtualbase_WheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QUndoView) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	ok := C.QUndoView_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_WheelEvent
func miqt_exec_callback_QUndoView_WheelEvent(self *C.QUndoView, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(e)

	gofunc((&QUndoView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_TimerEvent(e *QTimerEvent) {

	C.QUndoView_virtualbase_TimerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QUndoView) OnTimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	ok := C.QUndoView_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_TimerEvent
func miqt_exec_callback_QUndoView_TimerEvent(self *C.QUndoView, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(e)

	gofunc((&QUndoView{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_ResizeEvent(e *QResizeEvent) {

	C.QUndoView_virtualbase_ResizeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QUndoView) OnResizeEvent(slot func(super func(e *QResizeEvent), e *QResizeEvent)) {
	ok := C.QUndoView_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_ResizeEvent
func miqt_exec_callback_QUndoView_ResizeEvent(self *C.QUndoView, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QResizeEvent), e *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(e)

	gofunc((&QUndoView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_DragMoveEvent(e *QDragMoveEvent) {

	C.QUndoView_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QUndoView) OnDragMoveEvent(slot func(super func(e *QDragMoveEvent), e *QDragMoveEvent)) {
	ok := C.QUndoView_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_DragMoveEvent
func miqt_exec_callback_QUndoView_DragMoveEvent(self *C.QUndoView, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragMoveEvent), e *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(e)

	gofunc((&QUndoView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_DragLeaveEvent(e *QDragLeaveEvent) {

	C.QUndoView_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QUndoView) OnDragLeaveEvent(slot func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent)) {
	ok := C.QUndoView_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_DragLeaveEvent
func miqt_exec_callback_QUndoView_DragLeaveEvent(self *C.QUndoView, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(e)

	gofunc((&QUndoView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_DropEvent(e *QDropEvent) {

	C.QUndoView_virtualbase_DropEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QUndoView) OnDropEvent(slot func(super func(e *QDropEvent), e *QDropEvent)) {
	ok := C.QUndoView_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_DropEvent
func miqt_exec_callback_QUndoView_DropEvent(self *C.QUndoView, cb C.intptr_t, e *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDropEvent), e *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(e)

	gofunc((&QUndoView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_StartDrag(supportedActions DropAction) {

	C.QUndoView_virtualbase_StartDrag(unsafe.Pointer(this.h), (C.int)(supportedActions))

}
func (this *QUndoView) OnStartDrag(slot func(super func(supportedActions DropAction), supportedActions DropAction)) {
	ok := C.QUndoView_override_virtual_StartDrag(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_StartDrag
func miqt_exec_callback_QUndoView_StartDrag(self *C.QUndoView, cb C.intptr_t, supportedActions C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(supportedActions DropAction), supportedActions DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(supportedActions)

	gofunc((&QUndoView{h: self}).callVirtualBase_StartDrag, slotval1)

}

func (this *QUndoView) callVirtualBase_ViewOptions() *QStyleOptionViewItem {

	_goptr := newQStyleOptionViewItem(C.QUndoView_virtualbase_ViewOptions(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QUndoView) OnViewOptions(slot func(super func() *QStyleOptionViewItem) *QStyleOptionViewItem) {
	ok := C.QUndoView_override_virtual_ViewOptions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_ViewOptions
func miqt_exec_callback_QUndoView_ViewOptions(self *C.QUndoView, cb C.intptr_t) *C.QStyleOptionViewItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QStyleOptionViewItem) *QStyleOptionViewItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_ViewOptions)

	return virtualReturn.cPointer()

}

func (this *QUndoView) callVirtualBase_PaintEvent(e *QPaintEvent) {

	C.QUndoView_virtualbase_PaintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QUndoView) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	ok := C.QUndoView_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_PaintEvent
func miqt_exec_callback_QUndoView_PaintEvent(self *C.QUndoView, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(e)

	gofunc((&QUndoView{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_HorizontalOffset() int {

	return (int)(C.QUndoView_virtualbase_HorizontalOffset(unsafe.Pointer(this.h)))

}
func (this *QUndoView) OnHorizontalOffset(slot func(super func() int) int) {
	ok := C.QUndoView_override_virtual_HorizontalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_HorizontalOffset
func miqt_exec_callback_QUndoView_HorizontalOffset(self *C.QUndoView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_HorizontalOffset)

	return (C.int)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_VerticalOffset() int {

	return (int)(C.QUndoView_virtualbase_VerticalOffset(unsafe.Pointer(this.h)))

}
func (this *QUndoView) OnVerticalOffset(slot func(super func() int) int) {
	ok := C.QUndoView_override_virtual_VerticalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_VerticalOffset
func miqt_exec_callback_QUndoView_VerticalOffset(self *C.QUndoView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_VerticalOffset)

	return (C.int)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_MoveCursor(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex {

	_goptr := newQModelIndex(C.QUndoView_virtualbase_MoveCursor(unsafe.Pointer(this.h), (C.int)(cursorAction), (C.int)(modifiers)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QUndoView) OnMoveCursor(slot func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex) {
	ok := C.QUndoView_override_virtual_MoveCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_MoveCursor
func miqt_exec_callback_QUndoView_MoveCursor(self *C.QUndoView, cb C.intptr_t, cursorAction C.int, modifiers C.int) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractItemView__CursorAction)(cursorAction)

	slotval2 := (KeyboardModifier)(modifiers)

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_MoveCursor, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QUndoView) callVirtualBase_SetSelection(rect *QRect, command QItemSelectionModel__SelectionFlag) {

	C.QUndoView_virtualbase_SetSelection(unsafe.Pointer(this.h), rect.cPointer(), (C.int)(command))

}
func (this *QUndoView) OnSetSelection(slot func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag)) {
	ok := C.QUndoView_override_virtual_SetSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_SetSelection
func miqt_exec_callback_QUndoView_SetSelection(self *C.QUndoView, cb C.intptr_t, rect *C.QRect, command C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(rect)

	slotval2 := (QItemSelectionModel__SelectionFlag)(command)

	gofunc((&QUndoView{h: self}).callVirtualBase_SetSelection, slotval1, slotval2)

}

func (this *QUndoView) callVirtualBase_VisualRegionForSelection(selection *QItemSelection) *QRegion {

	_goptr := newQRegion(C.QUndoView_virtualbase_VisualRegionForSelection(unsafe.Pointer(this.h), selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QUndoView) OnVisualRegionForSelection(slot func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion) {
	ok := C.QUndoView_override_virtual_VisualRegionForSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_VisualRegionForSelection
func miqt_exec_callback_QUndoView_VisualRegionForSelection(self *C.QUndoView, cb C.intptr_t, selection *C.QItemSelection) *C.QRegion {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selection)

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_VisualRegionForSelection, slotval1)

	return virtualReturn.cPointer()

}

func (this *QUndoView) callVirtualBase_SelectedIndexes() []QModelIndex {

	var _ma C.struct_miqt_array = C.QUndoView_virtualbase_SelectedIndexes(unsafe.Pointer(this.h))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QUndoView) OnSelectedIndexes(slot func(super func() []QModelIndex) []QModelIndex) {
	ok := C.QUndoView_override_virtual_SelectedIndexes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_SelectedIndexes
func miqt_exec_callback_QUndoView_SelectedIndexes(self *C.QUndoView, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []QModelIndex) []QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_SelectedIndexes)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QUndoView) callVirtualBase_UpdateGeometries() {

	C.QUndoView_virtualbase_UpdateGeometries(unsafe.Pointer(this.h))

}
func (this *QUndoView) OnUpdateGeometries(slot func(super func())) {
	ok := C.QUndoView_override_virtual_UpdateGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_UpdateGeometries
func miqt_exec_callback_QUndoView_UpdateGeometries(self *C.QUndoView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUndoView{h: self}).callVirtualBase_UpdateGeometries)

}

func (this *QUndoView) callVirtualBase_IsIndexHidden(index *QModelIndex) bool {

	return (bool)(C.QUndoView_virtualbase_IsIndexHidden(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QUndoView) OnIsIndexHidden(slot func(super func(index *QModelIndex) bool, index *QModelIndex) bool) {
	ok := C.QUndoView_override_virtual_IsIndexHidden(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_IsIndexHidden
func miqt_exec_callback_QUndoView_IsIndexHidden(self *C.QUndoView, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) bool, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_IsIndexHidden, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_SelectionChanged(selected *QItemSelection, deselected *QItemSelection) {

	C.QUndoView_virtualbase_SelectionChanged(unsafe.Pointer(this.h), selected.cPointer(), deselected.cPointer())

}
func (this *QUndoView) OnSelectionChanged(slot func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection)) {
	ok := C.QUndoView_override_virtual_SelectionChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_SelectionChanged
func miqt_exec_callback_QUndoView_SelectionChanged(self *C.QUndoView, cb C.intptr_t, selected *C.QItemSelection, deselected *C.QItemSelection) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selected)

	slotval2 := newQItemSelection(deselected)

	gofunc((&QUndoView{h: self}).callVirtualBase_SelectionChanged, slotval1, slotval2)

}

func (this *QUndoView) callVirtualBase_CurrentChanged(current *QModelIndex, previous *QModelIndex) {

	C.QUndoView_virtualbase_CurrentChanged(unsafe.Pointer(this.h), current.cPointer(), previous.cPointer())

}
func (this *QUndoView) OnCurrentChanged(slot func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex)) {
	ok := C.QUndoView_override_virtual_CurrentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_CurrentChanged
func miqt_exec_callback_QUndoView_CurrentChanged(self *C.QUndoView, cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(current)

	slotval2 := newQModelIndex(previous)

	gofunc((&QUndoView{h: self}).callVirtualBase_CurrentChanged, slotval1, slotval2)

}

func (this *QUndoView) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QUndoView_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QUndoView) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QUndoView_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_ViewportSizeHint
func miqt_exec_callback_QUndoView_ViewportSizeHint(self *C.QUndoView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QUndoView) callVirtualBase_SetModel(model *QAbstractItemModel) {

	C.QUndoView_virtualbase_SetModel(unsafe.Pointer(this.h), model.cPointer())

}
func (this *QUndoView) OnSetModel(slot func(super func(model *QAbstractItemModel), model *QAbstractItemModel)) {
	ok := C.QUndoView_override_virtual_SetModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_SetModel
func miqt_exec_callback_QUndoView_SetModel(self *C.QUndoView, cb C.intptr_t, model *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(model *QAbstractItemModel), model *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractItemModel(model)

	gofunc((&QUndoView{h: self}).callVirtualBase_SetModel, slotval1)

}

func (this *QUndoView) callVirtualBase_SetSelectionModel(selectionModel *QItemSelectionModel) {

	C.QUndoView_virtualbase_SetSelectionModel(unsafe.Pointer(this.h), selectionModel.cPointer())

}
func (this *QUndoView) OnSetSelectionModel(slot func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel)) {
	ok := C.QUndoView_override_virtual_SetSelectionModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_SetSelectionModel
func miqt_exec_callback_QUndoView_SetSelectionModel(self *C.QUndoView, cb C.intptr_t, selectionModel *C.QItemSelectionModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelectionModel(selectionModel)

	gofunc((&QUndoView{h: self}).callVirtualBase_SetSelectionModel, slotval1)

}

func (this *QUndoView) callVirtualBase_KeyboardSearch(search string) {
	search_ms := C.struct_miqt_string{}
	search_ms.data = C.CString(search)
	search_ms.len = C.size_t(len(search))
	defer C.free(unsafe.Pointer(search_ms.data))

	C.QUndoView_virtualbase_KeyboardSearch(unsafe.Pointer(this.h), search_ms)

}
func (this *QUndoView) OnKeyboardSearch(slot func(super func(search string), search string)) {
	ok := C.QUndoView_override_virtual_KeyboardSearch(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_KeyboardSearch
func miqt_exec_callback_QUndoView_KeyboardSearch(self *C.QUndoView, cb C.intptr_t, search C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(search string), search string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var search_ms C.struct_miqt_string = search
	search_ret := C.GoStringN(search_ms.data, C.int(int64(search_ms.len)))
	C.free(unsafe.Pointer(search_ms.data))
	slotval1 := search_ret

	gofunc((&QUndoView{h: self}).callVirtualBase_KeyboardSearch, slotval1)

}

func (this *QUndoView) callVirtualBase_SizeHintForRow(row int) int {

	return (int)(C.QUndoView_virtualbase_SizeHintForRow(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QUndoView) OnSizeHintForRow(slot func(super func(row int) int, row int) int) {
	ok := C.QUndoView_override_virtual_SizeHintForRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_SizeHintForRow
func miqt_exec_callback_QUndoView_SizeHintForRow(self *C.QUndoView, cb C.intptr_t, row C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int) int, row int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_SizeHintForRow, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_SizeHintForColumn(column int) int {

	return (int)(C.QUndoView_virtualbase_SizeHintForColumn(unsafe.Pointer(this.h), (C.int)(column)))

}
func (this *QUndoView) OnSizeHintForColumn(slot func(super func(column int) int, column int) int) {
	ok := C.QUndoView_override_virtual_SizeHintForColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_SizeHintForColumn
func miqt_exec_callback_QUndoView_SizeHintForColumn(self *C.QUndoView, cb C.intptr_t, column C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int) int, column int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_SizeHintForColumn, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QUndoView_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QUndoView) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QUndoView_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_InputMethodQuery
func miqt_exec_callback_QUndoView_InputMethodQuery(self *C.QUndoView, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QUndoView) callVirtualBase_SelectAll() {

	C.QUndoView_virtualbase_SelectAll(unsafe.Pointer(this.h))

}
func (this *QUndoView) OnSelectAll(slot func(super func())) {
	ok := C.QUndoView_override_virtual_SelectAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_SelectAll
func miqt_exec_callback_QUndoView_SelectAll(self *C.QUndoView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUndoView{h: self}).callVirtualBase_SelectAll)

}

func (this *QUndoView) callVirtualBase_UpdateEditorData() {

	C.QUndoView_virtualbase_UpdateEditorData(unsafe.Pointer(this.h))

}
func (this *QUndoView) OnUpdateEditorData(slot func(super func())) {
	ok := C.QUndoView_override_virtual_UpdateEditorData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_UpdateEditorData
func miqt_exec_callback_QUndoView_UpdateEditorData(self *C.QUndoView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUndoView{h: self}).callVirtualBase_UpdateEditorData)

}

func (this *QUndoView) callVirtualBase_UpdateEditorGeometries() {

	C.QUndoView_virtualbase_UpdateEditorGeometries(unsafe.Pointer(this.h))

}
func (this *QUndoView) OnUpdateEditorGeometries(slot func(super func())) {
	ok := C.QUndoView_override_virtual_UpdateEditorGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_UpdateEditorGeometries
func miqt_exec_callback_QUndoView_UpdateEditorGeometries(self *C.QUndoView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUndoView{h: self}).callVirtualBase_UpdateEditorGeometries)

}

func (this *QUndoView) callVirtualBase_VerticalScrollbarAction(action int) {

	C.QUndoView_virtualbase_VerticalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QUndoView) OnVerticalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QUndoView_override_virtual_VerticalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_VerticalScrollbarAction
func miqt_exec_callback_QUndoView_VerticalScrollbarAction(self *C.QUndoView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QUndoView{h: self}).callVirtualBase_VerticalScrollbarAction, slotval1)

}

func (this *QUndoView) callVirtualBase_HorizontalScrollbarAction(action int) {

	C.QUndoView_virtualbase_HorizontalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QUndoView) OnHorizontalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QUndoView_override_virtual_HorizontalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_HorizontalScrollbarAction
func miqt_exec_callback_QUndoView_HorizontalScrollbarAction(self *C.QUndoView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QUndoView{h: self}).callVirtualBase_HorizontalScrollbarAction, slotval1)

}

func (this *QUndoView) callVirtualBase_VerticalScrollbarValueChanged(value int) {

	C.QUndoView_virtualbase_VerticalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QUndoView) OnVerticalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QUndoView_override_virtual_VerticalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_VerticalScrollbarValueChanged
func miqt_exec_callback_QUndoView_VerticalScrollbarValueChanged(self *C.QUndoView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QUndoView{h: self}).callVirtualBase_VerticalScrollbarValueChanged, slotval1)

}

func (this *QUndoView) callVirtualBase_HorizontalScrollbarValueChanged(value int) {

	C.QUndoView_virtualbase_HorizontalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QUndoView) OnHorizontalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QUndoView_override_virtual_HorizontalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_HorizontalScrollbarValueChanged
func miqt_exec_callback_QUndoView_HorizontalScrollbarValueChanged(self *C.QUndoView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QUndoView{h: self}).callVirtualBase_HorizontalScrollbarValueChanged, slotval1)

}

func (this *QUndoView) callVirtualBase_CloseEditor(editor *QWidget, hint QAbstractItemDelegate__EndEditHint) {

	C.QUndoView_virtualbase_CloseEditor(unsafe.Pointer(this.h), editor.cPointer(), (C.int)(hint))

}
func (this *QUndoView) OnCloseEditor(slot func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint)) {
	ok := C.QUndoView_override_virtual_CloseEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_CloseEditor
func miqt_exec_callback_QUndoView_CloseEditor(self *C.QUndoView, cb C.intptr_t, editor *C.QWidget, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := (QAbstractItemDelegate__EndEditHint)(hint)

	gofunc((&QUndoView{h: self}).callVirtualBase_CloseEditor, slotval1, slotval2)

}

func (this *QUndoView) callVirtualBase_CommitData(editor *QWidget) {

	C.QUndoView_virtualbase_CommitData(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QUndoView) OnCommitData(slot func(super func(editor *QWidget), editor *QWidget)) {
	ok := C.QUndoView_override_virtual_CommitData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_CommitData
func miqt_exec_callback_QUndoView_CommitData(self *C.QUndoView, cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget), editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	gofunc((&QUndoView{h: self}).callVirtualBase_CommitData, slotval1)

}

func (this *QUndoView) callVirtualBase_EditorDestroyed(editor *QObject) {

	C.QUndoView_virtualbase_EditorDestroyed(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QUndoView) OnEditorDestroyed(slot func(super func(editor *QObject), editor *QObject)) {
	ok := C.QUndoView_override_virtual_EditorDestroyed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_EditorDestroyed
func miqt_exec_callback_QUndoView_EditorDestroyed(self *C.QUndoView, cb C.intptr_t, editor *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QObject), editor *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(editor)

	gofunc((&QUndoView{h: self}).callVirtualBase_EditorDestroyed, slotval1)

}

func (this *QUndoView) callVirtualBase_Edit2(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool {

	return (bool)(C.QUndoView_virtualbase_Edit2(unsafe.Pointer(this.h), index.cPointer(), (C.int)(trigger), event.cPointer()))

}
func (this *QUndoView) OnEdit2(slot func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool) {
	ok := C.QUndoView_override_virtual_Edit2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_Edit2
func miqt_exec_callback_QUndoView_Edit2(self *C.QUndoView, cb C.intptr_t, index *C.QModelIndex, trigger C.int, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__EditTrigger)(trigger)

	slotval3 := newQEvent(event)

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_Edit2, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_SelectionCommand(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag {

	return (QItemSelectionModel__SelectionFlag)(C.QUndoView_virtualbase_SelectionCommand(unsafe.Pointer(this.h), index.cPointer(), event.cPointer()))

}
func (this *QUndoView) OnSelectionCommand(slot func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag) {
	ok := C.QUndoView_override_virtual_SelectionCommand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_SelectionCommand
func miqt_exec_callback_QUndoView_SelectionCommand(self *C.QUndoView, cb C.intptr_t, index *C.QModelIndex, event *C.QEvent) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_SelectionCommand, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QUndoView_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QUndoView) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QUndoView_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_FocusNextPrevChild
func miqt_exec_callback_QUndoView_FocusNextPrevChild(self *C.QUndoView, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_ViewportEvent(event *QEvent) bool {

	return (bool)(C.QUndoView_virtualbase_ViewportEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QUndoView) OnViewportEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QUndoView_override_virtual_ViewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_ViewportEvent
func miqt_exec_callback_QUndoView_ViewportEvent(self *C.QUndoView, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QUndoView_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoView) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QUndoView_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_MousePressEvent
func miqt_exec_callback_QUndoView_MousePressEvent(self *C.QUndoView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QUndoView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QUndoView_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoView) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QUndoView_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_MouseDoubleClickEvent
func miqt_exec_callback_QUndoView_MouseDoubleClickEvent(self *C.QUndoView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QUndoView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QUndoView_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoView) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QUndoView_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_DragEnterEvent
func miqt_exec_callback_QUndoView_DragEnterEvent(self *C.QUndoView, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QUndoView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QUndoView_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoView) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QUndoView_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_FocusInEvent
func miqt_exec_callback_QUndoView_FocusInEvent(self *C.QUndoView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QUndoView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QUndoView_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoView) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QUndoView_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_FocusOutEvent
func miqt_exec_callback_QUndoView_FocusOutEvent(self *C.QUndoView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QUndoView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QUndoView_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoView) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QUndoView_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_KeyPressEvent
func miqt_exec_callback_QUndoView_KeyPressEvent(self *C.QUndoView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QUndoView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QUndoView_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoView) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QUndoView_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_InputMethodEvent
func miqt_exec_callback_QUndoView_InputMethodEvent(self *C.QUndoView, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QUndoView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QUndoView_virtualbase_EventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QUndoView) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QUndoView_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_EventFilter
func miqt_exec_callback_QUndoView_EventFilter(self *C.QUndoView, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QUndoView_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QUndoView) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QUndoView_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_MinimumSizeHint
func miqt_exec_callback_QUndoView_MinimumSizeHint(self *C.QUndoView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QUndoView) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QUndoView_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QUndoView) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QUndoView_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_SizeHint
func miqt_exec_callback_QUndoView_SizeHint(self *C.QUndoView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QUndoView) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QUndoView_virtualbase_SetupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QUndoView) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QUndoView_override_virtual_SetupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_SetupViewport
func miqt_exec_callback_QUndoView_SetupViewport(self *C.QUndoView, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QUndoView{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QUndoView) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QUndoView_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QUndoView) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QUndoView_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_ContextMenuEvent
func miqt_exec_callback_QUndoView_ContextMenuEvent(self *C.QUndoView, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QUndoView{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QUndoView_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QUndoView) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QUndoView_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_ChangeEvent
func miqt_exec_callback_QUndoView_ChangeEvent(self *C.QUndoView, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QUndoView{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_DevType() int {

	return (int)(C.QUndoView_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QUndoView) OnDevType(slot func(super func() int) int) {
	ok := C.QUndoView_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_DevType
func miqt_exec_callback_QUndoView_DevType(self *C.QUndoView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_SetVisible(visible bool) {

	C.QUndoView_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QUndoView) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QUndoView_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_SetVisible
func miqt_exec_callback_QUndoView_SetVisible(self *C.QUndoView, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QUndoView{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QUndoView) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QUndoView_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QUndoView) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QUndoView_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_HeightForWidth
func miqt_exec_callback_QUndoView_HeightForWidth(self *C.QUndoView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QUndoView_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QUndoView) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QUndoView_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_HasHeightForWidth
func miqt_exec_callback_QUndoView_HasHeightForWidth(self *C.QUndoView, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QUndoView_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QUndoView) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QUndoView_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_PaintEngine
func miqt_exec_callback_QUndoView_PaintEngine(self *C.QUndoView, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QUndoView) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QUndoView_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoView) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QUndoView_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_KeyReleaseEvent
func miqt_exec_callback_QUndoView_KeyReleaseEvent(self *C.QUndoView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QUndoView{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_EnterEvent(event *QEvent) {

	C.QUndoView_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoView) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QUndoView_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_EnterEvent
func miqt_exec_callback_QUndoView_EnterEvent(self *C.QUndoView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QUndoView{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QUndoView_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoView) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QUndoView_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_LeaveEvent
func miqt_exec_callback_QUndoView_LeaveEvent(self *C.QUndoView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QUndoView{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QUndoView_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoView) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QUndoView_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_MoveEvent
func miqt_exec_callback_QUndoView_MoveEvent(self *C.QUndoView, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QUndoView{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QUndoView_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoView) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QUndoView_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_CloseEvent
func miqt_exec_callback_QUndoView_CloseEvent(self *C.QUndoView, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QUndoView{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QUndoView_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoView) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QUndoView_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_TabletEvent
func miqt_exec_callback_QUndoView_TabletEvent(self *C.QUndoView, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QUndoView{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QUndoView_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoView) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QUndoView_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_ActionEvent
func miqt_exec_callback_QUndoView_ActionEvent(self *C.QUndoView, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QUndoView{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QUndoView_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoView) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QUndoView_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_ShowEvent
func miqt_exec_callback_QUndoView_ShowEvent(self *C.QUndoView, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QUndoView{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QUndoView_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoView) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QUndoView_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_HideEvent
func miqt_exec_callback_QUndoView_HideEvent(self *C.QUndoView, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QUndoView{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QUndoView_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QUndoView) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QUndoView_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_NativeEvent
func miqt_exec_callback_QUndoView_NativeEvent(self *C.QUndoView, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QUndoView_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QUndoView) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QUndoView_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_Metric
func miqt_exec_callback_QUndoView_Metric(self *C.QUndoView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_InitPainter(painter *QPainter) {

	C.QUndoView_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QUndoView) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QUndoView_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_InitPainter
func miqt_exec_callback_QUndoView_InitPainter(self *C.QUndoView, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QUndoView{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QUndoView) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QUndoView_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QUndoView) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QUndoView_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_Redirected
func miqt_exec_callback_QUndoView_Redirected(self *C.QUndoView, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QUndoView) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QUndoView_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QUndoView) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QUndoView_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_SharedPainter
func miqt_exec_callback_QUndoView_SharedPainter(self *C.QUndoView, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QUndoView) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QUndoView_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoView) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QUndoView_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_ChildEvent
func miqt_exec_callback_QUndoView_ChildEvent(self *C.QUndoView, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QUndoView{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_CustomEvent(event *QEvent) {

	C.QUndoView_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoView) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QUndoView_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_CustomEvent
func miqt_exec_callback_QUndoView_CustomEvent(self *C.QUndoView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QUndoView{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QUndoView_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QUndoView) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QUndoView_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_ConnectNotify
func miqt_exec_callback_QUndoView_ConnectNotify(self *C.QUndoView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QUndoView{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QUndoView) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QUndoView_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QUndoView) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QUndoView_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoView_DisconnectNotify
func miqt_exec_callback_QUndoView_DisconnectNotify(self *C.QUndoView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QUndoView{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QUndoView) Delete() {
	C.QUndoView_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUndoView) GoGC() {
	runtime.SetFinalizer(this, func(this *QUndoView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
