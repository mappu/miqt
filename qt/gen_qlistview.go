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
	QListView__Movement__Static QListView__Movement = 0
	QListView__Movement__Free   QListView__Movement = 1
	QListView__Movement__Snap   QListView__Movement = 2
)

type QListView__Flow int

const (
	QListView__Flow__LeftToRight QListView__Flow = 0
	QListView__Flow__TopToBottom QListView__Flow = 1
)

type QListView__ResizeMode int

const (
	QListView__ResizeMode__Fixed  QListView__ResizeMode = 0
	QListView__ResizeMode__Adjust QListView__ResizeMode = 1
)

type QListView__LayoutMode int

const (
	QListView__LayoutMode__SinglePass QListView__LayoutMode = 0
	QListView__LayoutMode__Batched    QListView__LayoutMode = 1
)

type QListView__ViewMode int

const (
	QListView__ViewMode__ListMode QListView__ViewMode = 0
	QListView__ViewMode__IconMode QListView__ViewMode = 1
)

type QListView struct {
	h *C.QListView
	*QAbstractItemView
}

func (this *QListView) cPointer() *C.QListView {
	if this == nil {
		return nil
	}
	return this.h
}

func newQListView(h *C.QListView) *QListView {
	if h == nil {
		return nil
	}
	return &QListView{h: h, QAbstractItemView: newQAbstractItemView_U(unsafe.Pointer(h))}
}

func newQListView_U(h unsafe.Pointer) *QListView {
	return newQListView((*C.QListView)(h))
}

// NewQListView constructs a new QListView object.
func NewQListView() *QListView {
	ret := C.QListView_new()
	return newQListView(ret)
}

// NewQListView2 constructs a new QListView object.
func NewQListView2(parent *QWidget) *QListView {
	ret := C.QListView_new2(parent.cPointer())
	return newQListView(ret)
}

func (this *QListView) MetaObject() *QMetaObject {
	_ret := C.QListView_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QListView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QListView_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QListView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QListView_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QListView) SetMovement(movement QListView__Movement) {
	C.QListView_SetMovement(this.h, (C.uintptr_t)(movement))
}

func (this *QListView) Movement() QListView__Movement {
	_ret := C.QListView_Movement(this.h)
	return (QListView__Movement)(_ret)
}

func (this *QListView) SetFlow(flow QListView__Flow) {
	C.QListView_SetFlow(this.h, (C.uintptr_t)(flow))
}

func (this *QListView) Flow() QListView__Flow {
	_ret := C.QListView_Flow(this.h)
	return (QListView__Flow)(_ret)
}

func (this *QListView) SetWrapping(enable bool) {
	C.QListView_SetWrapping(this.h, (C.bool)(enable))
}

func (this *QListView) IsWrapping() bool {
	_ret := C.QListView_IsWrapping(this.h)
	return (bool)(_ret)
}

func (this *QListView) SetResizeMode(mode QListView__ResizeMode) {
	C.QListView_SetResizeMode(this.h, (C.uintptr_t)(mode))
}

func (this *QListView) ResizeMode() QListView__ResizeMode {
	_ret := C.QListView_ResizeMode(this.h)
	return (QListView__ResizeMode)(_ret)
}

func (this *QListView) SetLayoutMode(mode QListView__LayoutMode) {
	C.QListView_SetLayoutMode(this.h, (C.uintptr_t)(mode))
}

func (this *QListView) LayoutMode() QListView__LayoutMode {
	_ret := C.QListView_LayoutMode(this.h)
	return (QListView__LayoutMode)(_ret)
}

func (this *QListView) SetSpacing(space int) {
	C.QListView_SetSpacing(this.h, (C.int)(space))
}

func (this *QListView) Spacing() int {
	_ret := C.QListView_Spacing(this.h)
	return (int)(_ret)
}

func (this *QListView) SetBatchSize(batchSize int) {
	C.QListView_SetBatchSize(this.h, (C.int)(batchSize))
}

func (this *QListView) BatchSize() int {
	_ret := C.QListView_BatchSize(this.h)
	return (int)(_ret)
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
	C.QListView_SetViewMode(this.h, (C.uintptr_t)(mode))
}

func (this *QListView) ViewMode() QListView__ViewMode {
	_ret := C.QListView_ViewMode(this.h)
	return (QListView__ViewMode)(_ret)
}

func (this *QListView) ClearPropertyFlags() {
	C.QListView_ClearPropertyFlags(this.h)
}

func (this *QListView) IsRowHidden(row int) bool {
	_ret := C.QListView_IsRowHidden(this.h, (C.int)(row))
	return (bool)(_ret)
}

func (this *QListView) SetRowHidden(row int, hide bool) {
	C.QListView_SetRowHidden(this.h, (C.int)(row), (C.bool)(hide))
}

func (this *QListView) SetModelColumn(column int) {
	C.QListView_SetModelColumn(this.h, (C.int)(column))
}

func (this *QListView) ModelColumn() int {
	_ret := C.QListView_ModelColumn(this.h)
	return (int)(_ret)
}

func (this *QListView) SetUniformItemSizes(enable bool) {
	C.QListView_SetUniformItemSizes(this.h, (C.bool)(enable))
}

func (this *QListView) UniformItemSizes() bool {
	_ret := C.QListView_UniformItemSizes(this.h)
	return (bool)(_ret)
}

func (this *QListView) SetWordWrap(on bool) {
	C.QListView_SetWordWrap(this.h, (C.bool)(on))
}

func (this *QListView) WordWrap() bool {
	_ret := C.QListView_WordWrap(this.h)
	return (bool)(_ret)
}

func (this *QListView) SetSelectionRectVisible(show bool) {
	C.QListView_SetSelectionRectVisible(this.h, (C.bool)(show))
}

func (this *QListView) IsSelectionRectVisible() bool {
	_ret := C.QListView_IsSelectionRectVisible(this.h)
	return (bool)(_ret)
}

func (this *QListView) SetItemAlignment(alignment int) {
	C.QListView_SetItemAlignment(this.h, (C.int)(alignment))
}

func (this *QListView) ItemAlignment() int {
	_ret := C.QListView_ItemAlignment(this.h)
	return (int)(_ret)
}

func (this *QListView) VisualRect(index *QModelIndex) *QRect {
	_ret := C.QListView_VisualRect(this.h, index.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListView) ScrollTo(index *QModelIndex) {
	C.QListView_ScrollTo(this.h, index.cPointer())
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
	// For the C ABI, malloc a C array of raw pointers
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := &C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(indexes_ma))
	C.QListView_IndexesMoved(this.h, indexes_ma)
}
func (this *QListView) OnIndexesMoved(slot func(indexes []QModelIndex)) {
	C.QListView_connect_IndexesMoved(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QListView_IndexesMoved
func miqt_exec_callback_QListView_IndexesMoved(cb *C.void, indexes *C.struct_miqt_array) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(indexes []QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var indexes_ma *C.struct_miqt_array = indexes
	indexes_ret := make([]QModelIndex, int(indexes_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(indexes_ma.data)) // mrs jackson
	for i := 0; i < int(indexes_ma.len); i++ {
		indexes_ret[i] = *newQModelIndex(_outCast[i])
	}
	C.free(unsafe.Pointer(indexes_ma))
	slotval1 := indexes_ret

	gofunc(slotval1)
}

func QListView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QListView_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QListView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QListView_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QListView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QListView_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QListView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QListView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QListView) ScrollTo2(index *QModelIndex, hint QAbstractItemView__ScrollHint) {
	C.QListView_ScrollTo2(this.h, index.cPointer(), (C.uintptr_t)(hint))
}

// Delete this object from C++ memory.
func (this *QListView) Delete() {
	C.QListView_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QListView) GoGC() {
	runtime.SetFinalizer(this, func(this *QListView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
