package qt

/*

#include "gen_qlistview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QListView__Movement int

const (
	QListView__Static QListView__Movement = 0
	QListView__Free   QListView__Movement = 1
	QListView__Snap   QListView__Movement = 2
)

type QListView__Flow int

const (
	QListView__LeftToRight QListView__Flow = 0
	QListView__TopToBottom QListView__Flow = 1
)

type QListView__ResizeMode int

const (
	QListView__Fixed  QListView__ResizeMode = 0
	QListView__Adjust QListView__ResizeMode = 1
)

type QListView__LayoutMode int

const (
	QListView__SinglePass QListView__LayoutMode = 0
	QListView__Batched    QListView__LayoutMode = 1
)

type QListView__ViewMode int

const (
	QListView__ListMode QListView__ViewMode = 0
	QListView__IconMode QListView__ViewMode = 1
)

type QListView struct {
	h          *C.QListView
	isSubclass bool
	*QAbstractItemView
}

func (this *QListView) cPointer() *C.QListView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QListView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQListView constructs the type using only CGO pointers.
func newQListView(h *C.QListView, h_QAbstractItemView *C.QAbstractItemView, h_QAbstractScrollArea *C.QAbstractScrollArea, h_QFrame *C.QFrame, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QListView {
	if h == nil {
		return nil
	}
	return &QListView{h: h,
		QAbstractItemView: newQAbstractItemView(h_QAbstractItemView, h_QAbstractScrollArea, h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQListView constructs the type using only unsafe pointers.
func UnsafeNewQListView(h unsafe.Pointer, h_QAbstractItemView unsafe.Pointer, h_QAbstractScrollArea unsafe.Pointer, h_QFrame unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QListView {
	if h == nil {
		return nil
	}

	return &QListView{h: (*C.QListView)(h),
		QAbstractItemView: UnsafeNewQAbstractItemView(h_QAbstractItemView, h_QAbstractScrollArea, h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQListView constructs a new QListView object.
func NewQListView(parent *QWidget) *QListView {
	var outptr_QListView *C.QListView = nil
	var outptr_QAbstractItemView *C.QAbstractItemView = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QListView_new(parent.cPointer(), &outptr_QListView, &outptr_QAbstractItemView, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQListView(outptr_QListView, outptr_QAbstractItemView, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQListView2 constructs a new QListView object.
func NewQListView2() *QListView {
	var outptr_QListView *C.QListView = nil
	var outptr_QAbstractItemView *C.QAbstractItemView = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QListView_new2(&outptr_QListView, &outptr_QAbstractItemView, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQListView(outptr_QListView, outptr_QAbstractItemView, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QListView) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QListView_MetaObject(this.h)))
}

func (this *QListView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QListView_Metacast(this.h, param1_Cstring))
}

func QListView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QListView_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QListView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QListView_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListView) SetMovement(movement QListView__Movement) {
	C.QListView_SetMovement(this.h, (C.int)(movement))
}

func (this *QListView) Movement() QListView__Movement {
	return (QListView__Movement)(C.QListView_Movement(this.h))
}

func (this *QListView) SetFlow(flow QListView__Flow) {
	C.QListView_SetFlow(this.h, (C.int)(flow))
}

func (this *QListView) Flow() QListView__Flow {
	return (QListView__Flow)(C.QListView_Flow(this.h))
}

func (this *QListView) SetWrapping(enable bool) {
	C.QListView_SetWrapping(this.h, (C.bool)(enable))
}

func (this *QListView) IsWrapping() bool {
	return (bool)(C.QListView_IsWrapping(this.h))
}

func (this *QListView) SetResizeMode(mode QListView__ResizeMode) {
	C.QListView_SetResizeMode(this.h, (C.int)(mode))
}

func (this *QListView) ResizeMode() QListView__ResizeMode {
	return (QListView__ResizeMode)(C.QListView_ResizeMode(this.h))
}

func (this *QListView) SetLayoutMode(mode QListView__LayoutMode) {
	C.QListView_SetLayoutMode(this.h, (C.int)(mode))
}

func (this *QListView) LayoutMode() QListView__LayoutMode {
	return (QListView__LayoutMode)(C.QListView_LayoutMode(this.h))
}

func (this *QListView) SetSpacing(space int) {
	C.QListView_SetSpacing(this.h, (C.int)(space))
}

func (this *QListView) Spacing() int {
	return (int)(C.QListView_Spacing(this.h))
}

func (this *QListView) SetBatchSize(batchSize int) {
	C.QListView_SetBatchSize(this.h, (C.int)(batchSize))
}

func (this *QListView) BatchSize() int {
	return (int)(C.QListView_BatchSize(this.h))
}

func (this *QListView) SetGridSize(size *QSize) {
	C.QListView_SetGridSize(this.h, size.cPointer())
}

func (this *QListView) GridSize() *QSize {
	_ret := C.QListView_GridSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListView) SetViewMode(mode QListView__ViewMode) {
	C.QListView_SetViewMode(this.h, (C.int)(mode))
}

func (this *QListView) ViewMode() QListView__ViewMode {
	return (QListView__ViewMode)(C.QListView_ViewMode(this.h))
}

func (this *QListView) ClearPropertyFlags() {
	C.QListView_ClearPropertyFlags(this.h)
}

func (this *QListView) IsRowHidden(row int) bool {
	return (bool)(C.QListView_IsRowHidden(this.h, (C.int)(row)))
}

func (this *QListView) SetRowHidden(row int, hide bool) {
	C.QListView_SetRowHidden(this.h, (C.int)(row), (C.bool)(hide))
}

func (this *QListView) SetModelColumn(column int) {
	C.QListView_SetModelColumn(this.h, (C.int)(column))
}

func (this *QListView) ModelColumn() int {
	return (int)(C.QListView_ModelColumn(this.h))
}

func (this *QListView) SetUniformItemSizes(enable bool) {
	C.QListView_SetUniformItemSizes(this.h, (C.bool)(enable))
}

func (this *QListView) UniformItemSizes() bool {
	return (bool)(C.QListView_UniformItemSizes(this.h))
}

func (this *QListView) SetWordWrap(on bool) {
	C.QListView_SetWordWrap(this.h, (C.bool)(on))
}

func (this *QListView) WordWrap() bool {
	return (bool)(C.QListView_WordWrap(this.h))
}

func (this *QListView) SetSelectionRectVisible(show bool) {
	C.QListView_SetSelectionRectVisible(this.h, (C.bool)(show))
}

func (this *QListView) IsSelectionRectVisible() bool {
	return (bool)(C.QListView_IsSelectionRectVisible(this.h))
}

func (this *QListView) SetItemAlignment(alignment AlignmentFlag) {
	C.QListView_SetItemAlignment(this.h, (C.int)(alignment))
}

func (this *QListView) ItemAlignment() AlignmentFlag {
	return (AlignmentFlag)(C.QListView_ItemAlignment(this.h))
}

func (this *QListView) VisualRect(index *QModelIndex) *QRect {
	_ret := C.QListView_VisualRect(this.h, index.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListView) ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {
	C.QListView_ScrollTo(this.h, index.cPointer(), (C.int)(hint))
}

func (this *QListView) IndexAt(p *QPoint) *QModelIndex {
	_ret := C.QListView_IndexAt(this.h, p.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListView) DoItemsLayout() {
	C.QListView_DoItemsLayout(this.h)
}

func (this *QListView) Reset() {
	C.QListView_Reset(this.h)
}

func (this *QListView) SetRootIndex(index *QModelIndex) {
	C.QListView_SetRootIndex(this.h, index.cPointer())
}

func (this *QListView) IndexesMoved(indexes []QModelIndex) {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	C.QListView_IndexesMoved(this.h, indexes_ma)
}
func (this *QListView) OnIndexesMoved(slot func(indexes []QModelIndex)) {
	C.QListView_connect_IndexesMoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_IndexesMoved
func miqt_exec_callback_QListView_IndexesMoved(cb C.intptr_t, indexes C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(indexes []QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var indexes_ma C.struct_miqt_array = indexes
	indexes_ret := make([]QModelIndex, int(indexes_ma.len))
	indexes_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(indexes_ma.data)) // hey ya
	for i := 0; i < int(indexes_ma.len); i++ {
		indexes_lv_ret := indexes_outCast[i]
		indexes_lv_goptr := newQModelIndex(indexes_lv_ret)
		indexes_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		indexes_ret[i] = *indexes_lv_goptr
	}
	slotval1 := indexes_ret

	gofunc(slotval1)
}

func QListView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QListView_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QListView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QListView_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QListView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QListView_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QListView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QListView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListView) callVirtualBase_VisualRect(index *QModelIndex) *QRect {

	_ret := C.QListView_virtualbase_VisualRect(unsafe.Pointer(this.h), index.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListView) OnVisualRect(slot func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect) {
	C.QListView_override_virtual_VisualRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_VisualRect
func miqt_exec_callback_QListView_VisualRect(self *C.QListView, cb C.intptr_t, index *C.QModelIndex) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QListView{h: self}).callVirtualBase_VisualRect, slotval1)

	return virtualReturn.cPointer()

}

func (this *QListView) callVirtualBase_ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {

	C.QListView_virtualbase_ScrollTo(unsafe.Pointer(this.h), index.cPointer(), (C.int)(hint))

}
func (this *QListView) OnScrollTo(slot func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint)) {
	C.QListView_override_virtual_ScrollTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_ScrollTo
func miqt_exec_callback_QListView_ScrollTo(self *C.QListView, cb C.intptr_t, index *C.QModelIndex, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))
	slotval2 := (QAbstractItemView__ScrollHint)(hint)

	gofunc((&QListView{h: self}).callVirtualBase_ScrollTo, slotval1, slotval2)

}

func (this *QListView) callVirtualBase_IndexAt(p *QPoint) *QModelIndex {

	_ret := C.QListView_virtualbase_IndexAt(unsafe.Pointer(this.h), p.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListView) OnIndexAt(slot func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex) {
	C.QListView_override_virtual_IndexAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_IndexAt
func miqt_exec_callback_QListView_IndexAt(self *C.QListView, cb C.intptr_t, p *C.QPoint) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPoint(unsafe.Pointer(p))

	virtualReturn := gofunc((&QListView{h: self}).callVirtualBase_IndexAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QListView) callVirtualBase_DoItemsLayout() {

	C.QListView_virtualbase_DoItemsLayout(unsafe.Pointer(this.h))

}
func (this *QListView) OnDoItemsLayout(slot func(super func())) {
	C.QListView_override_virtual_DoItemsLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_DoItemsLayout
func miqt_exec_callback_QListView_DoItemsLayout(self *C.QListView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QListView{h: self}).callVirtualBase_DoItemsLayout)

}

func (this *QListView) callVirtualBase_Reset() {

	C.QListView_virtualbase_Reset(unsafe.Pointer(this.h))

}
func (this *QListView) OnReset(slot func(super func())) {
	C.QListView_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_Reset
func miqt_exec_callback_QListView_Reset(self *C.QListView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QListView{h: self}).callVirtualBase_Reset)

}

func (this *QListView) callVirtualBase_SetRootIndex(index *QModelIndex) {

	C.QListView_virtualbase_SetRootIndex(unsafe.Pointer(this.h), index.cPointer())

}
func (this *QListView) OnSetRootIndex(slot func(super func(index *QModelIndex), index *QModelIndex)) {
	C.QListView_override_virtual_SetRootIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_SetRootIndex
func miqt_exec_callback_QListView_SetRootIndex(self *C.QListView, cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex), index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	gofunc((&QListView{h: self}).callVirtualBase_SetRootIndex, slotval1)

}

func (this *QListView) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QListView_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QListView) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	C.QListView_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_Event
func miqt_exec_callback_QListView_Event(self *C.QListView, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QListView{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QListView) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QListView_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QListView) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	C.QListView_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_ScrollContentsBy
func miqt_exec_callback_QListView_ScrollContentsBy(self *C.QListView, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QListView{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QListView) callVirtualBase_DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	roles_ma := C.struct_miqt_array{len: C.size_t(len(roles)), data: unsafe.Pointer(roles_CArray)}

	C.QListView_virtualbase_DataChanged(unsafe.Pointer(this.h), topLeft.cPointer(), bottomRight.cPointer(), roles_ma)

}
func (this *QListView) OnDataChanged(slot func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int)) {
	C.QListView_override_virtual_DataChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_DataChanged
func miqt_exec_callback_QListView_DataChanged(self *C.QListView, cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(topLeft))
	slotval2 := UnsafeNewQModelIndex(unsafe.Pointer(bottomRight))
	var roles_ma C.struct_miqt_array = roles
	roles_ret := make([]int, int(roles_ma.len))
	roles_outCast := (*[0xffff]C.int)(unsafe.Pointer(roles_ma.data)) // hey ya
	for i := 0; i < int(roles_ma.len); i++ {
		roles_ret[i] = (int)(roles_outCast[i])
	}
	slotval3 := roles_ret

	gofunc((&QListView{h: self}).callVirtualBase_DataChanged, slotval1, slotval2, slotval3)

}

func (this *QListView) callVirtualBase_RowsInserted(parent *QModelIndex, start int, end int) {

	C.QListView_virtualbase_RowsInserted(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QListView) OnRowsInserted(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	C.QListView_override_virtual_RowsInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_RowsInserted
func miqt_exec_callback_QListView_RowsInserted(self *C.QListView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(parent))
	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QListView{h: self}).callVirtualBase_RowsInserted, slotval1, slotval2, slotval3)

}

func (this *QListView) callVirtualBase_RowsAboutToBeRemoved(parent *QModelIndex, start int, end int) {

	C.QListView_virtualbase_RowsAboutToBeRemoved(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QListView) OnRowsAboutToBeRemoved(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	C.QListView_override_virtual_RowsAboutToBeRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_RowsAboutToBeRemoved
func miqt_exec_callback_QListView_RowsAboutToBeRemoved(self *C.QListView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(parent))
	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QListView{h: self}).callVirtualBase_RowsAboutToBeRemoved, slotval1, slotval2, slotval3)

}

func (this *QListView) callVirtualBase_MouseMoveEvent(e *QMouseEvent) {

	C.QListView_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListView) OnMouseMoveEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	C.QListView_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_MouseMoveEvent
func miqt_exec_callback_QListView_MouseMoveEvent(self *C.QListView, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QListView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QListView) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QListView_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListView) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	C.QListView_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_MouseReleaseEvent
func miqt_exec_callback_QListView_MouseReleaseEvent(self *C.QListView, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QListView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QListView) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QListView_virtualbase_WheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListView) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	C.QListView_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_WheelEvent
func miqt_exec_callback_QListView_WheelEvent(self *C.QListView, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QListView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QListView) callVirtualBase_TimerEvent(e *QTimerEvent) {

	C.QListView_virtualbase_TimerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListView) OnTimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	C.QListView_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_TimerEvent
func miqt_exec_callback_QListView_TimerEvent(self *C.QListView, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(e), nil)

	gofunc((&QListView{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QListView) callVirtualBase_ResizeEvent(e *QResizeEvent) {

	C.QListView_virtualbase_ResizeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListView) OnResizeEvent(slot func(super func(e *QResizeEvent), e *QResizeEvent)) {
	C.QListView_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_ResizeEvent
func miqt_exec_callback_QListView_ResizeEvent(self *C.QListView, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QResizeEvent), e *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(e), nil)

	gofunc((&QListView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QListView) callVirtualBase_DragMoveEvent(e *QDragMoveEvent) {

	C.QListView_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListView) OnDragMoveEvent(slot func(super func(e *QDragMoveEvent), e *QDragMoveEvent)) {
	C.QListView_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_DragMoveEvent
func miqt_exec_callback_QListView_DragMoveEvent(self *C.QListView, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragMoveEvent), e *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QListView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QListView) callVirtualBase_DragLeaveEvent(e *QDragLeaveEvent) {

	C.QListView_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListView) OnDragLeaveEvent(slot func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent)) {
	C.QListView_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_DragLeaveEvent
func miqt_exec_callback_QListView_DragLeaveEvent(self *C.QListView, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(e), nil)

	gofunc((&QListView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QListView) callVirtualBase_DropEvent(e *QDropEvent) {

	C.QListView_virtualbase_DropEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListView) OnDropEvent(slot func(super func(e *QDropEvent), e *QDropEvent)) {
	C.QListView_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_DropEvent
func miqt_exec_callback_QListView_DropEvent(self *C.QListView, cb C.intptr_t, e *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDropEvent), e *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(e), nil)

	gofunc((&QListView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QListView) callVirtualBase_StartDrag(supportedActions DropAction) {

	C.QListView_virtualbase_StartDrag(unsafe.Pointer(this.h), (C.int)(supportedActions))

}
func (this *QListView) OnStartDrag(slot func(super func(supportedActions DropAction), supportedActions DropAction)) {
	C.QListView_override_virtual_StartDrag(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_StartDrag
func miqt_exec_callback_QListView_StartDrag(self *C.QListView, cb C.intptr_t, supportedActions C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(supportedActions DropAction), supportedActions DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(supportedActions)

	gofunc((&QListView{h: self}).callVirtualBase_StartDrag, slotval1)

}

func (this *QListView) callVirtualBase_ViewOptions() *QStyleOptionViewItem {

	_ret := C.QListView_virtualbase_ViewOptions(unsafe.Pointer(this.h))
	_goptr := newQStyleOptionViewItem(_ret, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListView) OnViewOptions(slot func(super func() *QStyleOptionViewItem) *QStyleOptionViewItem) {
	C.QListView_override_virtual_ViewOptions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_ViewOptions
func miqt_exec_callback_QListView_ViewOptions(self *C.QListView, cb C.intptr_t) *C.QStyleOptionViewItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QStyleOptionViewItem) *QStyleOptionViewItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListView{h: self}).callVirtualBase_ViewOptions)

	return virtualReturn.cPointer()

}

func (this *QListView) callVirtualBase_PaintEvent(e *QPaintEvent) {

	C.QListView_virtualbase_PaintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListView) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	C.QListView_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_PaintEvent
func miqt_exec_callback_QListView_PaintEvent(self *C.QListView, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(e), nil)

	gofunc((&QListView{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QListView) callVirtualBase_HorizontalOffset() int {

	return (int)(C.QListView_virtualbase_HorizontalOffset(unsafe.Pointer(this.h)))

}
func (this *QListView) OnHorizontalOffset(slot func(super func() int) int) {
	C.QListView_override_virtual_HorizontalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_HorizontalOffset
func miqt_exec_callback_QListView_HorizontalOffset(self *C.QListView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListView{h: self}).callVirtualBase_HorizontalOffset)

	return (C.int)(virtualReturn)

}

func (this *QListView) callVirtualBase_VerticalOffset() int {

	return (int)(C.QListView_virtualbase_VerticalOffset(unsafe.Pointer(this.h)))

}
func (this *QListView) OnVerticalOffset(slot func(super func() int) int) {
	C.QListView_override_virtual_VerticalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_VerticalOffset
func miqt_exec_callback_QListView_VerticalOffset(self *C.QListView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListView{h: self}).callVirtualBase_VerticalOffset)

	return (C.int)(virtualReturn)

}

func (this *QListView) callVirtualBase_MoveCursor(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex {

	_ret := C.QListView_virtualbase_MoveCursor(unsafe.Pointer(this.h), (C.int)(cursorAction), (C.int)(modifiers))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListView) OnMoveCursor(slot func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex) {
	C.QListView_override_virtual_MoveCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_MoveCursor
func miqt_exec_callback_QListView_MoveCursor(self *C.QListView, cb C.intptr_t, cursorAction C.int, modifiers C.int) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractItemView__CursorAction)(cursorAction)

	slotval2 := (KeyboardModifier)(modifiers)

	virtualReturn := gofunc((&QListView{h: self}).callVirtualBase_MoveCursor, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QListView) callVirtualBase_SetSelection(rect *QRect, command QItemSelectionModel__SelectionFlag) {

	C.QListView_virtualbase_SetSelection(unsafe.Pointer(this.h), rect.cPointer(), (C.int)(command))

}
func (this *QListView) OnSetSelection(slot func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag)) {
	C.QListView_override_virtual_SetSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_SetSelection
func miqt_exec_callback_QListView_SetSelection(self *C.QListView, cb C.intptr_t, rect *C.QRect, command C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRect(unsafe.Pointer(rect))
	slotval2 := (QItemSelectionModel__SelectionFlag)(command)

	gofunc((&QListView{h: self}).callVirtualBase_SetSelection, slotval1, slotval2)

}

func (this *QListView) callVirtualBase_SelectedIndexes() []QModelIndex {

	var _ma C.struct_miqt_array = C.QListView_virtualbase_SelectedIndexes(unsafe.Pointer(this.h))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQModelIndex(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QListView) OnSelectedIndexes(slot func(super func() []QModelIndex) []QModelIndex) {
	C.QListView_override_virtual_SelectedIndexes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_SelectedIndexes
func miqt_exec_callback_QListView_SelectedIndexes(self *C.QListView, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []QModelIndex) []QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListView{h: self}).callVirtualBase_SelectedIndexes)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QListView) callVirtualBase_UpdateGeometries() {

	C.QListView_virtualbase_UpdateGeometries(unsafe.Pointer(this.h))

}
func (this *QListView) OnUpdateGeometries(slot func(super func())) {
	C.QListView_override_virtual_UpdateGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_UpdateGeometries
func miqt_exec_callback_QListView_UpdateGeometries(self *C.QListView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QListView{h: self}).callVirtualBase_UpdateGeometries)

}

func (this *QListView) callVirtualBase_IsIndexHidden(index *QModelIndex) bool {

	return (bool)(C.QListView_virtualbase_IsIndexHidden(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QListView) OnIsIndexHidden(slot func(super func(index *QModelIndex) bool, index *QModelIndex) bool) {
	C.QListView_override_virtual_IsIndexHidden(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_IsIndexHidden
func miqt_exec_callback_QListView_IsIndexHidden(self *C.QListView, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) bool, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QListView{h: self}).callVirtualBase_IsIndexHidden, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QListView) callVirtualBase_CurrentChanged(current *QModelIndex, previous *QModelIndex) {

	C.QListView_virtualbase_CurrentChanged(unsafe.Pointer(this.h), current.cPointer(), previous.cPointer())

}
func (this *QListView) OnCurrentChanged(slot func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex)) {
	C.QListView_override_virtual_CurrentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_CurrentChanged
func miqt_exec_callback_QListView_CurrentChanged(self *C.QListView, cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(current))
	slotval2 := UnsafeNewQModelIndex(unsafe.Pointer(previous))

	gofunc((&QListView{h: self}).callVirtualBase_CurrentChanged, slotval1, slotval2)

}

func (this *QListView) callVirtualBase_ViewportSizeHint() *QSize {

	_ret := C.QListView_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListView) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	C.QListView_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_ViewportSizeHint
func miqt_exec_callback_QListView_ViewportSizeHint(self *C.QListView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListView{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QListView) callVirtualBase_SetModel(model *QAbstractItemModel) {

	C.QListView_virtualbase_SetModel(unsafe.Pointer(this.h), model.cPointer())

}
func (this *QListView) OnSetModel(slot func(super func(model *QAbstractItemModel), model *QAbstractItemModel)) {
	C.QListView_override_virtual_SetModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_SetModel
func miqt_exec_callback_QListView_SetModel(self *C.QListView, cb C.intptr_t, model *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(model *QAbstractItemModel), model *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQAbstractItemModel(unsafe.Pointer(model), nil)

	gofunc((&QListView{h: self}).callVirtualBase_SetModel, slotval1)

}

func (this *QListView) callVirtualBase_SetSelectionModel(selectionModel *QItemSelectionModel) {

	C.QListView_virtualbase_SetSelectionModel(unsafe.Pointer(this.h), selectionModel.cPointer())

}
func (this *QListView) OnSetSelectionModel(slot func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel)) {
	C.QListView_override_virtual_SetSelectionModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_SetSelectionModel
func miqt_exec_callback_QListView_SetSelectionModel(self *C.QListView, cb C.intptr_t, selectionModel *C.QItemSelectionModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQItemSelectionModel(unsafe.Pointer(selectionModel), nil)

	gofunc((&QListView{h: self}).callVirtualBase_SetSelectionModel, slotval1)

}

func (this *QListView) callVirtualBase_KeyboardSearch(search string) {
	search_ms := C.struct_miqt_string{}
	search_ms.data = C.CString(search)
	search_ms.len = C.size_t(len(search))
	defer C.free(unsafe.Pointer(search_ms.data))

	C.QListView_virtualbase_KeyboardSearch(unsafe.Pointer(this.h), search_ms)

}
func (this *QListView) OnKeyboardSearch(slot func(super func(search string), search string)) {
	C.QListView_override_virtual_KeyboardSearch(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_KeyboardSearch
func miqt_exec_callback_QListView_KeyboardSearch(self *C.QListView, cb C.intptr_t, search C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(search string), search string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var search_ms C.struct_miqt_string = search
	search_ret := C.GoStringN(search_ms.data, C.int(int64(search_ms.len)))
	C.free(unsafe.Pointer(search_ms.data))
	slotval1 := search_ret

	gofunc((&QListView{h: self}).callVirtualBase_KeyboardSearch, slotval1)

}

func (this *QListView) callVirtualBase_SizeHintForRow(row int) int {

	return (int)(C.QListView_virtualbase_SizeHintForRow(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QListView) OnSizeHintForRow(slot func(super func(row int) int, row int) int) {
	C.QListView_override_virtual_SizeHintForRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_SizeHintForRow
func miqt_exec_callback_QListView_SizeHintForRow(self *C.QListView, cb C.intptr_t, row C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int) int, row int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	virtualReturn := gofunc((&QListView{h: self}).callVirtualBase_SizeHintForRow, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QListView) callVirtualBase_SizeHintForColumn(column int) int {

	return (int)(C.QListView_virtualbase_SizeHintForColumn(unsafe.Pointer(this.h), (C.int)(column)))

}
func (this *QListView) OnSizeHintForColumn(slot func(super func(column int) int, column int) int) {
	C.QListView_override_virtual_SizeHintForColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_SizeHintForColumn
func miqt_exec_callback_QListView_SizeHintForColumn(self *C.QListView, cb C.intptr_t, column C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int) int, column int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	virtualReturn := gofunc((&QListView{h: self}).callVirtualBase_SizeHintForColumn, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QListView) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_ret := C.QListView_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListView) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	C.QListView_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_InputMethodQuery
func miqt_exec_callback_QListView_InputMethodQuery(self *C.QListView, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QListView{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QListView) callVirtualBase_SelectAll() {

	C.QListView_virtualbase_SelectAll(unsafe.Pointer(this.h))

}
func (this *QListView) OnSelectAll(slot func(super func())) {
	C.QListView_override_virtual_SelectAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_SelectAll
func miqt_exec_callback_QListView_SelectAll(self *C.QListView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QListView{h: self}).callVirtualBase_SelectAll)

}

func (this *QListView) callVirtualBase_UpdateEditorData() {

	C.QListView_virtualbase_UpdateEditorData(unsafe.Pointer(this.h))

}
func (this *QListView) OnUpdateEditorData(slot func(super func())) {
	C.QListView_override_virtual_UpdateEditorData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_UpdateEditorData
func miqt_exec_callback_QListView_UpdateEditorData(self *C.QListView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QListView{h: self}).callVirtualBase_UpdateEditorData)

}

func (this *QListView) callVirtualBase_UpdateEditorGeometries() {

	C.QListView_virtualbase_UpdateEditorGeometries(unsafe.Pointer(this.h))

}
func (this *QListView) OnUpdateEditorGeometries(slot func(super func())) {
	C.QListView_override_virtual_UpdateEditorGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_UpdateEditorGeometries
func miqt_exec_callback_QListView_UpdateEditorGeometries(self *C.QListView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QListView{h: self}).callVirtualBase_UpdateEditorGeometries)

}

func (this *QListView) callVirtualBase_VerticalScrollbarAction(action int) {

	C.QListView_virtualbase_VerticalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QListView) OnVerticalScrollbarAction(slot func(super func(action int), action int)) {
	C.QListView_override_virtual_VerticalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_VerticalScrollbarAction
func miqt_exec_callback_QListView_VerticalScrollbarAction(self *C.QListView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QListView{h: self}).callVirtualBase_VerticalScrollbarAction, slotval1)

}

func (this *QListView) callVirtualBase_HorizontalScrollbarAction(action int) {

	C.QListView_virtualbase_HorizontalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QListView) OnHorizontalScrollbarAction(slot func(super func(action int), action int)) {
	C.QListView_override_virtual_HorizontalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_HorizontalScrollbarAction
func miqt_exec_callback_QListView_HorizontalScrollbarAction(self *C.QListView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QListView{h: self}).callVirtualBase_HorizontalScrollbarAction, slotval1)

}

func (this *QListView) callVirtualBase_VerticalScrollbarValueChanged(value int) {

	C.QListView_virtualbase_VerticalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QListView) OnVerticalScrollbarValueChanged(slot func(super func(value int), value int)) {
	C.QListView_override_virtual_VerticalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_VerticalScrollbarValueChanged
func miqt_exec_callback_QListView_VerticalScrollbarValueChanged(self *C.QListView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QListView{h: self}).callVirtualBase_VerticalScrollbarValueChanged, slotval1)

}

func (this *QListView) callVirtualBase_HorizontalScrollbarValueChanged(value int) {

	C.QListView_virtualbase_HorizontalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QListView) OnHorizontalScrollbarValueChanged(slot func(super func(value int), value int)) {
	C.QListView_override_virtual_HorizontalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_HorizontalScrollbarValueChanged
func miqt_exec_callback_QListView_HorizontalScrollbarValueChanged(self *C.QListView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QListView{h: self}).callVirtualBase_HorizontalScrollbarValueChanged, slotval1)

}

func (this *QListView) callVirtualBase_CloseEditor(editor *QWidget, hint QAbstractItemDelegate__EndEditHint) {

	C.QListView_virtualbase_CloseEditor(unsafe.Pointer(this.h), editor.cPointer(), (C.int)(hint))

}
func (this *QListView) OnCloseEditor(slot func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint)) {
	C.QListView_override_virtual_CloseEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_CloseEditor
func miqt_exec_callback_QListView_CloseEditor(self *C.QListView, cb C.intptr_t, editor *C.QWidget, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(editor), nil, nil)
	slotval2 := (QAbstractItemDelegate__EndEditHint)(hint)

	gofunc((&QListView{h: self}).callVirtualBase_CloseEditor, slotval1, slotval2)

}

func (this *QListView) callVirtualBase_CommitData(editor *QWidget) {

	C.QListView_virtualbase_CommitData(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QListView) OnCommitData(slot func(super func(editor *QWidget), editor *QWidget)) {
	C.QListView_override_virtual_CommitData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_CommitData
func miqt_exec_callback_QListView_CommitData(self *C.QListView, cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget), editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(editor), nil, nil)

	gofunc((&QListView{h: self}).callVirtualBase_CommitData, slotval1)

}

func (this *QListView) callVirtualBase_EditorDestroyed(editor *QObject) {

	C.QListView_virtualbase_EditorDestroyed(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QListView) OnEditorDestroyed(slot func(super func(editor *QObject), editor *QObject)) {
	C.QListView_override_virtual_EditorDestroyed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_EditorDestroyed
func miqt_exec_callback_QListView_EditorDestroyed(self *C.QListView, cb C.intptr_t, editor *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QObject), editor *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(editor))

	gofunc((&QListView{h: self}).callVirtualBase_EditorDestroyed, slotval1)

}

func (this *QListView) callVirtualBase_Edit2(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool {

	return (bool)(C.QListView_virtualbase_Edit2(unsafe.Pointer(this.h), index.cPointer(), (C.int)(trigger), event.cPointer()))

}
func (this *QListView) OnEdit2(slot func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool) {
	C.QListView_override_virtual_Edit2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_Edit2
func miqt_exec_callback_QListView_Edit2(self *C.QListView, cb C.intptr_t, index *C.QModelIndex, trigger C.int, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))
	slotval2 := (QAbstractItemView__EditTrigger)(trigger)

	slotval3 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QListView{h: self}).callVirtualBase_Edit2, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QListView) callVirtualBase_SelectionCommand(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag {

	return (QItemSelectionModel__SelectionFlag)(C.QListView_virtualbase_SelectionCommand(unsafe.Pointer(this.h), index.cPointer(), event.cPointer()))

}
func (this *QListView) OnSelectionCommand(slot func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag) {
	C.QListView_override_virtual_SelectionCommand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_SelectionCommand
func miqt_exec_callback_QListView_SelectionCommand(self *C.QListView, cb C.intptr_t, index *C.QModelIndex, event *C.QEvent) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QListView{h: self}).callVirtualBase_SelectionCommand, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QListView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QListView_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QListView) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	C.QListView_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_FocusNextPrevChild
func miqt_exec_callback_QListView_FocusNextPrevChild(self *C.QListView, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QListView{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QListView) callVirtualBase_ViewportEvent(event *QEvent) bool {

	return (bool)(C.QListView_virtualbase_ViewportEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QListView) OnViewportEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QListView_override_virtual_ViewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_ViewportEvent
func miqt_exec_callback_QListView_ViewportEvent(self *C.QListView, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QListView{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QListView) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QListView_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListView) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	C.QListView_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_MousePressEvent
func miqt_exec_callback_QListView_MousePressEvent(self *C.QListView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QListView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QListView) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QListView_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListView) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	C.QListView_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_MouseDoubleClickEvent
func miqt_exec_callback_QListView_MouseDoubleClickEvent(self *C.QListView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QListView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QListView) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QListView_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListView) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	C.QListView_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_DragEnterEvent
func miqt_exec_callback_QListView_DragEnterEvent(self *C.QListView, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragEnterEvent(unsafe.Pointer(event), nil, nil, nil)

	gofunc((&QListView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QListView) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QListView_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListView) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	C.QListView_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_FocusInEvent
func miqt_exec_callback_QListView_FocusInEvent(self *C.QListView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QListView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QListView) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QListView_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListView) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	C.QListView_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_FocusOutEvent
func miqt_exec_callback_QListView_FocusOutEvent(self *C.QListView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QListView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QListView) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QListView_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListView) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	C.QListView_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_KeyPressEvent
func miqt_exec_callback_QListView_KeyPressEvent(self *C.QListView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QListView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QListView) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QListView_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListView) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	C.QListView_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_InputMethodEvent
func miqt_exec_callback_QListView_InputMethodEvent(self *C.QListView, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(event), nil)

	gofunc((&QListView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QListView) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QListView_virtualbase_EventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QListView) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	C.QListView_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListView_EventFilter
func miqt_exec_callback_QListView_EventFilter(self *C.QListView, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(object))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QListView{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QListView) Delete() {
	C.QListView_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QListView) GoGC() {
	runtime.SetFinalizer(this, func(this *QListView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
