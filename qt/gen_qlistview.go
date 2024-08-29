package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qlistview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
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
	ret := C.QListView_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QListView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QListView_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QListView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QListView_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QListView) SetMovement(movement uintptr) {
	C.QListView_SetMovement(this.h, (C.uintptr_t)(movement))
}

func (this *QListView) Movement() uintptr {
	ret := C.QListView_Movement(this.h)
	return (uintptr)(ret)
}

func (this *QListView) SetFlow(flow uintptr) {
	C.QListView_SetFlow(this.h, (C.uintptr_t)(flow))
}

func (this *QListView) Flow() uintptr {
	ret := C.QListView_Flow(this.h)
	return (uintptr)(ret)
}

func (this *QListView) SetWrapping(enable bool) {
	C.QListView_SetWrapping(this.h, (C.bool)(enable))
}

func (this *QListView) IsWrapping() bool {
	ret := C.QListView_IsWrapping(this.h)
	return (bool)(ret)
}

func (this *QListView) SetResizeMode(mode uintptr) {
	C.QListView_SetResizeMode(this.h, (C.uintptr_t)(mode))
}

func (this *QListView) ResizeMode() uintptr {
	ret := C.QListView_ResizeMode(this.h)
	return (uintptr)(ret)
}

func (this *QListView) SetLayoutMode(mode uintptr) {
	C.QListView_SetLayoutMode(this.h, (C.uintptr_t)(mode))
}

func (this *QListView) LayoutMode() uintptr {
	ret := C.QListView_LayoutMode(this.h)
	return (uintptr)(ret)
}

func (this *QListView) SetSpacing(space int) {
	C.QListView_SetSpacing(this.h, (C.int)(space))
}

func (this *QListView) Spacing() int {
	ret := C.QListView_Spacing(this.h)
	return (int)(ret)
}

func (this *QListView) SetBatchSize(batchSize int) {
	C.QListView_SetBatchSize(this.h, (C.int)(batchSize))
}

func (this *QListView) BatchSize() int {
	ret := C.QListView_BatchSize(this.h)
	return (int)(ret)
}

func (this *QListView) SetGridSize(size *QSize) {
	C.QListView_SetGridSize(this.h, size.cPointer())
}

func (this *QListView) GridSize() *QSize {
	ret := C.QListView_GridSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QListView) SetViewMode(mode uintptr) {
	C.QListView_SetViewMode(this.h, (C.uintptr_t)(mode))
}

func (this *QListView) ViewMode() uintptr {
	ret := C.QListView_ViewMode(this.h)
	return (uintptr)(ret)
}

func (this *QListView) ClearPropertyFlags() {
	C.QListView_ClearPropertyFlags(this.h)
}

func (this *QListView) IsRowHidden(row int) bool {
	ret := C.QListView_IsRowHidden(this.h, (C.int)(row))
	return (bool)(ret)
}

func (this *QListView) SetRowHidden(row int, hide bool) {
	C.QListView_SetRowHidden(this.h, (C.int)(row), (C.bool)(hide))
}

func (this *QListView) SetModelColumn(column int) {
	C.QListView_SetModelColumn(this.h, (C.int)(column))
}

func (this *QListView) ModelColumn() int {
	ret := C.QListView_ModelColumn(this.h)
	return (int)(ret)
}

func (this *QListView) SetUniformItemSizes(enable bool) {
	C.QListView_SetUniformItemSizes(this.h, (C.bool)(enable))
}

func (this *QListView) UniformItemSizes() bool {
	ret := C.QListView_UniformItemSizes(this.h)
	return (bool)(ret)
}

func (this *QListView) SetWordWrap(on bool) {
	C.QListView_SetWordWrap(this.h, (C.bool)(on))
}

func (this *QListView) WordWrap() bool {
	ret := C.QListView_WordWrap(this.h)
	return (bool)(ret)
}

func (this *QListView) SetSelectionRectVisible(show bool) {
	C.QListView_SetSelectionRectVisible(this.h, (C.bool)(show))
}

func (this *QListView) IsSelectionRectVisible() bool {
	ret := C.QListView_IsSelectionRectVisible(this.h)
	return (bool)(ret)
}

func (this *QListView) SetItemAlignment(alignment int) {
	C.QListView_SetItemAlignment(this.h, (C.int)(alignment))
}

func (this *QListView) ItemAlignment() int {
	ret := C.QListView_ItemAlignment(this.h)
	return (int)(ret)
}

func (this *QListView) VisualRect(index *QModelIndex) *QRect {
	ret := C.QListView_VisualRect(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QListView) ScrollTo(index *QModelIndex) {
	C.QListView_ScrollTo(this.h, index.cPointer())
}

func (this *QListView) IndexAt(p *QPoint) *QModelIndex {
	ret := C.QListView_IndexAt(this.h, p.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
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
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.ulong(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	C.QListView_IndexesMoved(this.h, &indexes_CArray[0], C.ulong(len(indexes)))
}

func (this *QListView) OnIndexesMoved(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QListView_connect_IndexesMoved(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QListView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QListView_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QListView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QListView_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QListView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QListView_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QListView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QListView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QListView) ScrollTo2(index *QModelIndex, hint uintptr) {
	C.QListView_ScrollTo2(this.h, index.cPointer(), (C.uintptr_t)(hint))
}

func (this *QListView) Delete() {
	C.QListView_Delete(this.h)
}
