package qt

/*

#include "gen_qabstractitemview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractItemView struct {
	h *C.QAbstractItemView
	*QAbstractScrollArea
}

func (this *QAbstractItemView) cPointer() *C.QAbstractItemView {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractItemView(h *C.QAbstractItemView) *QAbstractItemView {
	if h == nil {
		return nil
	}
	return &QAbstractItemView{h: h, QAbstractScrollArea: newQAbstractScrollArea_U(unsafe.Pointer(h))}
}

func newQAbstractItemView_U(h unsafe.Pointer) *QAbstractItemView {
	return newQAbstractItemView((*C.QAbstractItemView)(h))
}

func (this *QAbstractItemView) MetaObject() *QMetaObject {
	ret := C.QAbstractItemView_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QAbstractItemView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemView_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractItemView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemView_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractItemView) SetModel(model *QAbstractItemModel) {
	C.QAbstractItemView_SetModel(this.h, model.cPointer())
}

func (this *QAbstractItemView) Model() *QAbstractItemModel {
	ret := C.QAbstractItemView_Model(this.h)
	return newQAbstractItemModel_U(unsafe.Pointer(ret))
}

func (this *QAbstractItemView) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QAbstractItemView_SetSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QAbstractItemView) SelectionModel() *QItemSelectionModel {
	ret := C.QAbstractItemView_SelectionModel(this.h)
	return newQItemSelectionModel_U(unsafe.Pointer(ret))
}

func (this *QAbstractItemView) SetItemDelegate(delegate *QAbstractItemDelegate) {
	C.QAbstractItemView_SetItemDelegate(this.h, delegate.cPointer())
}

func (this *QAbstractItemView) ItemDelegate() *QAbstractItemDelegate {
	ret := C.QAbstractItemView_ItemDelegate(this.h)
	return newQAbstractItemDelegate_U(unsafe.Pointer(ret))
}

func (this *QAbstractItemView) SetSelectionMode(mode uintptr) {
	C.QAbstractItemView_SetSelectionMode(this.h, (C.uintptr_t)(mode))
}

func (this *QAbstractItemView) SelectionMode() uintptr {
	ret := C.QAbstractItemView_SelectionMode(this.h)
	return (uintptr)(ret)
}

func (this *QAbstractItemView) SetSelectionBehavior(behavior uintptr) {
	C.QAbstractItemView_SetSelectionBehavior(this.h, (C.uintptr_t)(behavior))
}

func (this *QAbstractItemView) SelectionBehavior() uintptr {
	ret := C.QAbstractItemView_SelectionBehavior(this.h)
	return (uintptr)(ret)
}

func (this *QAbstractItemView) CurrentIndex() *QModelIndex {
	ret := C.QAbstractItemView_CurrentIndex(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractItemView) RootIndex() *QModelIndex {
	ret := C.QAbstractItemView_RootIndex(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractItemView) SetEditTriggers(triggers int) {
	C.QAbstractItemView_SetEditTriggers(this.h, (C.int)(triggers))
}

func (this *QAbstractItemView) EditTriggers() int {
	ret := C.QAbstractItemView_EditTriggers(this.h)
	return (int)(ret)
}

func (this *QAbstractItemView) SetVerticalScrollMode(mode uintptr) {
	C.QAbstractItemView_SetVerticalScrollMode(this.h, (C.uintptr_t)(mode))
}

func (this *QAbstractItemView) VerticalScrollMode() uintptr {
	ret := C.QAbstractItemView_VerticalScrollMode(this.h)
	return (uintptr)(ret)
}

func (this *QAbstractItemView) ResetVerticalScrollMode() {
	C.QAbstractItemView_ResetVerticalScrollMode(this.h)
}

func (this *QAbstractItemView) SetHorizontalScrollMode(mode uintptr) {
	C.QAbstractItemView_SetHorizontalScrollMode(this.h, (C.uintptr_t)(mode))
}

func (this *QAbstractItemView) HorizontalScrollMode() uintptr {
	ret := C.QAbstractItemView_HorizontalScrollMode(this.h)
	return (uintptr)(ret)
}

func (this *QAbstractItemView) ResetHorizontalScrollMode() {
	C.QAbstractItemView_ResetHorizontalScrollMode(this.h)
}

func (this *QAbstractItemView) SetAutoScroll(enable bool) {
	C.QAbstractItemView_SetAutoScroll(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) HasAutoScroll() bool {
	ret := C.QAbstractItemView_HasAutoScroll(this.h)
	return (bool)(ret)
}

func (this *QAbstractItemView) SetAutoScrollMargin(margin int) {
	C.QAbstractItemView_SetAutoScrollMargin(this.h, (C.int)(margin))
}

func (this *QAbstractItemView) AutoScrollMargin() int {
	ret := C.QAbstractItemView_AutoScrollMargin(this.h)
	return (int)(ret)
}

func (this *QAbstractItemView) SetTabKeyNavigation(enable bool) {
	C.QAbstractItemView_SetTabKeyNavigation(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) TabKeyNavigation() bool {
	ret := C.QAbstractItemView_TabKeyNavigation(this.h)
	return (bool)(ret)
}

func (this *QAbstractItemView) SetDropIndicatorShown(enable bool) {
	C.QAbstractItemView_SetDropIndicatorShown(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) ShowDropIndicator() bool {
	ret := C.QAbstractItemView_ShowDropIndicator(this.h)
	return (bool)(ret)
}

func (this *QAbstractItemView) SetDragEnabled(enable bool) {
	C.QAbstractItemView_SetDragEnabled(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) DragEnabled() bool {
	ret := C.QAbstractItemView_DragEnabled(this.h)
	return (bool)(ret)
}

func (this *QAbstractItemView) SetDragDropOverwriteMode(overwrite bool) {
	C.QAbstractItemView_SetDragDropOverwriteMode(this.h, (C.bool)(overwrite))
}

func (this *QAbstractItemView) DragDropOverwriteMode() bool {
	ret := C.QAbstractItemView_DragDropOverwriteMode(this.h)
	return (bool)(ret)
}

func (this *QAbstractItemView) SetDragDropMode(behavior uintptr) {
	C.QAbstractItemView_SetDragDropMode(this.h, (C.uintptr_t)(behavior))
}

func (this *QAbstractItemView) DragDropMode() uintptr {
	ret := C.QAbstractItemView_DragDropMode(this.h)
	return (uintptr)(ret)
}

func (this *QAbstractItemView) SetDefaultDropAction(dropAction uintptr) {
	C.QAbstractItemView_SetDefaultDropAction(this.h, (C.uintptr_t)(dropAction))
}

func (this *QAbstractItemView) DefaultDropAction() uintptr {
	ret := C.QAbstractItemView_DefaultDropAction(this.h)
	return (uintptr)(ret)
}

func (this *QAbstractItemView) SetAlternatingRowColors(enable bool) {
	C.QAbstractItemView_SetAlternatingRowColors(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) AlternatingRowColors() bool {
	ret := C.QAbstractItemView_AlternatingRowColors(this.h)
	return (bool)(ret)
}

func (this *QAbstractItemView) SetIconSize(size *QSize) {
	C.QAbstractItemView_SetIconSize(this.h, size.cPointer())
}

func (this *QAbstractItemView) IconSize() *QSize {
	ret := C.QAbstractItemView_IconSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractItemView) SetTextElideMode(mode uintptr) {
	C.QAbstractItemView_SetTextElideMode(this.h, (C.uintptr_t)(mode))
}

func (this *QAbstractItemView) TextElideMode() uintptr {
	ret := C.QAbstractItemView_TextElideMode(this.h)
	return (uintptr)(ret)
}

func (this *QAbstractItemView) KeyboardSearch(search string) {
	search_Cstring := C.CString(search)
	defer C.free(unsafe.Pointer(search_Cstring))
	C.QAbstractItemView_KeyboardSearch(this.h, search_Cstring, C.ulong(len(search)))
}

func (this *QAbstractItemView) VisualRect(index *QModelIndex) *QRect {
	ret := C.QAbstractItemView_VisualRect(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractItemView) ScrollTo(index *QModelIndex) {
	C.QAbstractItemView_ScrollTo(this.h, index.cPointer())
}

func (this *QAbstractItemView) IndexAt(point *QPoint) *QModelIndex {
	ret := C.QAbstractItemView_IndexAt(this.h, point.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractItemView) SizeHintForIndex(index *QModelIndex) *QSize {
	ret := C.QAbstractItemView_SizeHintForIndex(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractItemView) SizeHintForRow(row int) int {
	ret := C.QAbstractItemView_SizeHintForRow(this.h, (C.int)(row))
	return (int)(ret)
}

func (this *QAbstractItemView) SizeHintForColumn(column int) int {
	ret := C.QAbstractItemView_SizeHintForColumn(this.h, (C.int)(column))
	return (int)(ret)
}

func (this *QAbstractItemView) OpenPersistentEditor(index *QModelIndex) {
	C.QAbstractItemView_OpenPersistentEditor(this.h, index.cPointer())
}

func (this *QAbstractItemView) ClosePersistentEditor(index *QModelIndex) {
	C.QAbstractItemView_ClosePersistentEditor(this.h, index.cPointer())
}

func (this *QAbstractItemView) IsPersistentEditorOpen(index *QModelIndex) bool {
	ret := C.QAbstractItemView_IsPersistentEditorOpen(this.h, index.cPointer())
	return (bool)(ret)
}

func (this *QAbstractItemView) SetIndexWidget(index *QModelIndex, widget *QWidget) {
	C.QAbstractItemView_SetIndexWidget(this.h, index.cPointer(), widget.cPointer())
}

func (this *QAbstractItemView) IndexWidget(index *QModelIndex) *QWidget {
	ret := C.QAbstractItemView_IndexWidget(this.h, index.cPointer())
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QAbstractItemView) SetItemDelegateForRow(row int, delegate *QAbstractItemDelegate) {
	C.QAbstractItemView_SetItemDelegateForRow(this.h, (C.int)(row), delegate.cPointer())
}

func (this *QAbstractItemView) ItemDelegateForRow(row int) *QAbstractItemDelegate {
	ret := C.QAbstractItemView_ItemDelegateForRow(this.h, (C.int)(row))
	return newQAbstractItemDelegate_U(unsafe.Pointer(ret))
}

func (this *QAbstractItemView) SetItemDelegateForColumn(column int, delegate *QAbstractItemDelegate) {
	C.QAbstractItemView_SetItemDelegateForColumn(this.h, (C.int)(column), delegate.cPointer())
}

func (this *QAbstractItemView) ItemDelegateForColumn(column int) *QAbstractItemDelegate {
	ret := C.QAbstractItemView_ItemDelegateForColumn(this.h, (C.int)(column))
	return newQAbstractItemDelegate_U(unsafe.Pointer(ret))
}

func (this *QAbstractItemView) ItemDelegateWithIndex(index *QModelIndex) *QAbstractItemDelegate {
	ret := C.QAbstractItemView_ItemDelegateWithIndex(this.h, index.cPointer())
	return newQAbstractItemDelegate_U(unsafe.Pointer(ret))
}

func (this *QAbstractItemView) InputMethodQuery(query uintptr) *QVariant {
	ret := C.QAbstractItemView_InputMethodQuery(this.h, (C.uintptr_t)(query))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractItemView) Reset() {
	C.QAbstractItemView_Reset(this.h)
}

func (this *QAbstractItemView) SetRootIndex(index *QModelIndex) {
	C.QAbstractItemView_SetRootIndex(this.h, index.cPointer())
}

func (this *QAbstractItemView) DoItemsLayout() {
	C.QAbstractItemView_DoItemsLayout(this.h)
}

func (this *QAbstractItemView) SelectAll() {
	C.QAbstractItemView_SelectAll(this.h)
}

func (this *QAbstractItemView) Edit(index *QModelIndex) {
	C.QAbstractItemView_Edit(this.h, index.cPointer())
}

func (this *QAbstractItemView) ClearSelection() {
	C.QAbstractItemView_ClearSelection(this.h)
}

func (this *QAbstractItemView) SetCurrentIndex(index *QModelIndex) {
	C.QAbstractItemView_SetCurrentIndex(this.h, index.cPointer())
}

func (this *QAbstractItemView) ScrollToTop() {
	C.QAbstractItemView_ScrollToTop(this.h)
}

func (this *QAbstractItemView) ScrollToBottom() {
	C.QAbstractItemView_ScrollToBottom(this.h)
}

func (this *QAbstractItemView) Update(index *QModelIndex) {
	C.QAbstractItemView_Update(this.h, index.cPointer())
}

func (this *QAbstractItemView) Pressed(index *QModelIndex) {
	C.QAbstractItemView_Pressed(this.h, index.cPointer())
}

func (this *QAbstractItemView) OnPressed(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractItemView_connect_Pressed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractItemView) Clicked(index *QModelIndex) {
	C.QAbstractItemView_Clicked(this.h, index.cPointer())
}

func (this *QAbstractItemView) OnClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractItemView_connect_Clicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractItemView) DoubleClicked(index *QModelIndex) {
	C.QAbstractItemView_DoubleClicked(this.h, index.cPointer())
}

func (this *QAbstractItemView) OnDoubleClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractItemView_connect_DoubleClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractItemView) Activated(index *QModelIndex) {
	C.QAbstractItemView_Activated(this.h, index.cPointer())
}

func (this *QAbstractItemView) OnActivated(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractItemView_connect_Activated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractItemView) Entered(index *QModelIndex) {
	C.QAbstractItemView_Entered(this.h, index.cPointer())
}

func (this *QAbstractItemView) OnEntered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractItemView_connect_Entered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractItemView) ViewportEntered() {
	C.QAbstractItemView_ViewportEntered(this.h)
}

func (this *QAbstractItemView) OnViewportEntered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractItemView_connect_ViewportEntered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractItemView) IconSizeChanged(size *QSize) {
	C.QAbstractItemView_IconSizeChanged(this.h, size.cPointer())
}

func (this *QAbstractItemView) OnIconSizeChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractItemView_connect_IconSizeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QAbstractItemView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemView_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractItemView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemView_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractItemView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemView_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractItemView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractItemView) ScrollTo2(index *QModelIndex, hint uintptr) {
	C.QAbstractItemView_ScrollTo2(this.h, index.cPointer(), (C.uintptr_t)(hint))
}

func (this *QAbstractItemView) Delete() {
	C.QAbstractItemView_Delete(this.h)
}
