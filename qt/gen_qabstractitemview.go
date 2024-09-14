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

type QAbstractItemView__SelectionMode int

const (
	QAbstractItemView__SelectionMode__NoSelection         QAbstractItemView__SelectionMode = 0
	QAbstractItemView__SelectionMode__SingleSelection     QAbstractItemView__SelectionMode = 1
	QAbstractItemView__SelectionMode__MultiSelection      QAbstractItemView__SelectionMode = 2
	QAbstractItemView__SelectionMode__ExtendedSelection   QAbstractItemView__SelectionMode = 3
	QAbstractItemView__SelectionMode__ContiguousSelection QAbstractItemView__SelectionMode = 4
)

type QAbstractItemView__SelectionBehavior int

const (
	QAbstractItemView__SelectionBehavior__SelectItems   QAbstractItemView__SelectionBehavior = 0
	QAbstractItemView__SelectionBehavior__SelectRows    QAbstractItemView__SelectionBehavior = 1
	QAbstractItemView__SelectionBehavior__SelectColumns QAbstractItemView__SelectionBehavior = 2
)

type QAbstractItemView__ScrollHint int

const (
	QAbstractItemView__ScrollHint__EnsureVisible    QAbstractItemView__ScrollHint = 0
	QAbstractItemView__ScrollHint__PositionAtTop    QAbstractItemView__ScrollHint = 1
	QAbstractItemView__ScrollHint__PositionAtBottom QAbstractItemView__ScrollHint = 2
	QAbstractItemView__ScrollHint__PositionAtCenter QAbstractItemView__ScrollHint = 3
)

type QAbstractItemView__EditTrigger int

const (
	QAbstractItemView__EditTrigger__NoEditTriggers  QAbstractItemView__EditTrigger = 0
	QAbstractItemView__EditTrigger__CurrentChanged  QAbstractItemView__EditTrigger = 1
	QAbstractItemView__EditTrigger__DoubleClicked   QAbstractItemView__EditTrigger = 2
	QAbstractItemView__EditTrigger__SelectedClicked QAbstractItemView__EditTrigger = 4
	QAbstractItemView__EditTrigger__EditKeyPressed  QAbstractItemView__EditTrigger = 8
	QAbstractItemView__EditTrigger__AnyKeyPressed   QAbstractItemView__EditTrigger = 16
	QAbstractItemView__EditTrigger__AllEditTriggers QAbstractItemView__EditTrigger = 31
)

type QAbstractItemView__ScrollMode int

const (
	QAbstractItemView__ScrollMode__ScrollPerItem  QAbstractItemView__ScrollMode = 0
	QAbstractItemView__ScrollMode__ScrollPerPixel QAbstractItemView__ScrollMode = 1
)

type QAbstractItemView__DragDropMode int

const (
	QAbstractItemView__DragDropMode__NoDragDrop   QAbstractItemView__DragDropMode = 0
	QAbstractItemView__DragDropMode__DragOnly     QAbstractItemView__DragDropMode = 1
	QAbstractItemView__DragDropMode__DropOnly     QAbstractItemView__DragDropMode = 2
	QAbstractItemView__DragDropMode__DragDrop     QAbstractItemView__DragDropMode = 3
	QAbstractItemView__DragDropMode__InternalMove QAbstractItemView__DragDropMode = 4
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
	_ret := C.QAbstractItemView_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QAbstractItemView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractItemView_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractItemView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractItemView_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractItemView) SetModel(model *QAbstractItemModel) {
	C.QAbstractItemView_SetModel(this.h, model.cPointer())
}

func (this *QAbstractItemView) Model() *QAbstractItemModel {
	_ret := C.QAbstractItemView_Model(this.h)
	return newQAbstractItemModel_U(unsafe.Pointer(_ret))
}

func (this *QAbstractItemView) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QAbstractItemView_SetSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QAbstractItemView) SelectionModel() *QItemSelectionModel {
	_ret := C.QAbstractItemView_SelectionModel(this.h)
	return newQItemSelectionModel_U(unsafe.Pointer(_ret))
}

func (this *QAbstractItemView) SetItemDelegate(delegate *QAbstractItemDelegate) {
	C.QAbstractItemView_SetItemDelegate(this.h, delegate.cPointer())
}

func (this *QAbstractItemView) ItemDelegate() *QAbstractItemDelegate {
	_ret := C.QAbstractItemView_ItemDelegate(this.h)
	return newQAbstractItemDelegate_U(unsafe.Pointer(_ret))
}

func (this *QAbstractItemView) SetSelectionMode(mode QAbstractItemView__SelectionMode) {
	C.QAbstractItemView_SetSelectionMode(this.h, (C.uintptr_t)(mode))
}

func (this *QAbstractItemView) SelectionMode() QAbstractItemView__SelectionMode {
	_ret := C.QAbstractItemView_SelectionMode(this.h)
	return (QAbstractItemView__SelectionMode)(_ret)
}

func (this *QAbstractItemView) SetSelectionBehavior(behavior QAbstractItemView__SelectionBehavior) {
	C.QAbstractItemView_SetSelectionBehavior(this.h, (C.uintptr_t)(behavior))
}

func (this *QAbstractItemView) SelectionBehavior() QAbstractItemView__SelectionBehavior {
	_ret := C.QAbstractItemView_SelectionBehavior(this.h)
	return (QAbstractItemView__SelectionBehavior)(_ret)
}

func (this *QAbstractItemView) CurrentIndex() *QModelIndex {
	_ret := C.QAbstractItemView_CurrentIndex(this.h)
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemView) RootIndex() *QModelIndex {
	_ret := C.QAbstractItemView_RootIndex(this.h)
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemView) SetEditTriggers(triggers int) {
	C.QAbstractItemView_SetEditTriggers(this.h, (C.int)(triggers))
}

func (this *QAbstractItemView) EditTriggers() int {
	_ret := C.QAbstractItemView_EditTriggers(this.h)
	return (int)(_ret)
}

func (this *QAbstractItemView) SetVerticalScrollMode(mode QAbstractItemView__ScrollMode) {
	C.QAbstractItemView_SetVerticalScrollMode(this.h, (C.uintptr_t)(mode))
}

func (this *QAbstractItemView) VerticalScrollMode() QAbstractItemView__ScrollMode {
	_ret := C.QAbstractItemView_VerticalScrollMode(this.h)
	return (QAbstractItemView__ScrollMode)(_ret)
}

func (this *QAbstractItemView) ResetVerticalScrollMode() {
	C.QAbstractItemView_ResetVerticalScrollMode(this.h)
}

func (this *QAbstractItemView) SetHorizontalScrollMode(mode QAbstractItemView__ScrollMode) {
	C.QAbstractItemView_SetHorizontalScrollMode(this.h, (C.uintptr_t)(mode))
}

func (this *QAbstractItemView) HorizontalScrollMode() QAbstractItemView__ScrollMode {
	_ret := C.QAbstractItemView_HorizontalScrollMode(this.h)
	return (QAbstractItemView__ScrollMode)(_ret)
}

func (this *QAbstractItemView) ResetHorizontalScrollMode() {
	C.QAbstractItemView_ResetHorizontalScrollMode(this.h)
}

func (this *QAbstractItemView) SetAutoScroll(enable bool) {
	C.QAbstractItemView_SetAutoScroll(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) HasAutoScroll() bool {
	_ret := C.QAbstractItemView_HasAutoScroll(this.h)
	return (bool)(_ret)
}

func (this *QAbstractItemView) SetAutoScrollMargin(margin int) {
	C.QAbstractItemView_SetAutoScrollMargin(this.h, (C.int)(margin))
}

func (this *QAbstractItemView) AutoScrollMargin() int {
	_ret := C.QAbstractItemView_AutoScrollMargin(this.h)
	return (int)(_ret)
}

func (this *QAbstractItemView) SetTabKeyNavigation(enable bool) {
	C.QAbstractItemView_SetTabKeyNavigation(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) TabKeyNavigation() bool {
	_ret := C.QAbstractItemView_TabKeyNavigation(this.h)
	return (bool)(_ret)
}

func (this *QAbstractItemView) SetDropIndicatorShown(enable bool) {
	C.QAbstractItemView_SetDropIndicatorShown(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) ShowDropIndicator() bool {
	_ret := C.QAbstractItemView_ShowDropIndicator(this.h)
	return (bool)(_ret)
}

func (this *QAbstractItemView) SetDragEnabled(enable bool) {
	C.QAbstractItemView_SetDragEnabled(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) DragEnabled() bool {
	_ret := C.QAbstractItemView_DragEnabled(this.h)
	return (bool)(_ret)
}

func (this *QAbstractItemView) SetDragDropOverwriteMode(overwrite bool) {
	C.QAbstractItemView_SetDragDropOverwriteMode(this.h, (C.bool)(overwrite))
}

func (this *QAbstractItemView) DragDropOverwriteMode() bool {
	_ret := C.QAbstractItemView_DragDropOverwriteMode(this.h)
	return (bool)(_ret)
}

func (this *QAbstractItemView) SetDragDropMode(behavior QAbstractItemView__DragDropMode) {
	C.QAbstractItemView_SetDragDropMode(this.h, (C.uintptr_t)(behavior))
}

func (this *QAbstractItemView) DragDropMode() QAbstractItemView__DragDropMode {
	_ret := C.QAbstractItemView_DragDropMode(this.h)
	return (QAbstractItemView__DragDropMode)(_ret)
}

func (this *QAbstractItemView) SetDefaultDropAction(dropAction DropAction) {
	C.QAbstractItemView_SetDefaultDropAction(this.h, (C.uintptr_t)(dropAction))
}

func (this *QAbstractItemView) DefaultDropAction() DropAction {
	_ret := C.QAbstractItemView_DefaultDropAction(this.h)
	return (DropAction)(_ret)
}

func (this *QAbstractItemView) SetAlternatingRowColors(enable bool) {
	C.QAbstractItemView_SetAlternatingRowColors(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) AlternatingRowColors() bool {
	_ret := C.QAbstractItemView_AlternatingRowColors(this.h)
	return (bool)(_ret)
}

func (this *QAbstractItemView) SetIconSize(size *QSize) {
	C.QAbstractItemView_SetIconSize(this.h, size.cPointer())
}

func (this *QAbstractItemView) IconSize() *QSize {
	_ret := C.QAbstractItemView_IconSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemView) SetTextElideMode(mode TextElideMode) {
	C.QAbstractItemView_SetTextElideMode(this.h, (C.uintptr_t)(mode))
}

func (this *QAbstractItemView) TextElideMode() TextElideMode {
	_ret := C.QAbstractItemView_TextElideMode(this.h)
	return (TextElideMode)(_ret)
}

func (this *QAbstractItemView) KeyboardSearch(search string) {
	search_ms := miqt_strdupg(search)
	defer C.free(search_ms)
	C.QAbstractItemView_KeyboardSearch(this.h, (*C.struct_miqt_string)(search_ms))
}

func (this *QAbstractItemView) VisualRect(index *QModelIndex) *QRect {
	_ret := C.QAbstractItemView_VisualRect(this.h, index.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemView) ScrollTo(index *QModelIndex) {
	C.QAbstractItemView_ScrollTo(this.h, index.cPointer())
}

func (this *QAbstractItemView) IndexAt(point *QPoint) *QModelIndex {
	_ret := C.QAbstractItemView_IndexAt(this.h, point.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemView) SizeHintForIndex(index *QModelIndex) *QSize {
	_ret := C.QAbstractItemView_SizeHintForIndex(this.h, index.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemView) SizeHintForRow(row int) int {
	_ret := C.QAbstractItemView_SizeHintForRow(this.h, (C.int)(row))
	return (int)(_ret)
}

func (this *QAbstractItemView) SizeHintForColumn(column int) int {
	_ret := C.QAbstractItemView_SizeHintForColumn(this.h, (C.int)(column))
	return (int)(_ret)
}

func (this *QAbstractItemView) OpenPersistentEditor(index *QModelIndex) {
	C.QAbstractItemView_OpenPersistentEditor(this.h, index.cPointer())
}

func (this *QAbstractItemView) ClosePersistentEditor(index *QModelIndex) {
	C.QAbstractItemView_ClosePersistentEditor(this.h, index.cPointer())
}

func (this *QAbstractItemView) IsPersistentEditorOpen(index *QModelIndex) bool {
	_ret := C.QAbstractItemView_IsPersistentEditorOpen(this.h, index.cPointer())
	return (bool)(_ret)
}

func (this *QAbstractItemView) SetIndexWidget(index *QModelIndex, widget *QWidget) {
	C.QAbstractItemView_SetIndexWidget(this.h, index.cPointer(), widget.cPointer())
}

func (this *QAbstractItemView) IndexWidget(index *QModelIndex) *QWidget {
	_ret := C.QAbstractItemView_IndexWidget(this.h, index.cPointer())
	return newQWidget_U(unsafe.Pointer(_ret))
}

func (this *QAbstractItemView) SetItemDelegateForRow(row int, delegate *QAbstractItemDelegate) {
	C.QAbstractItemView_SetItemDelegateForRow(this.h, (C.int)(row), delegate.cPointer())
}

func (this *QAbstractItemView) ItemDelegateForRow(row int) *QAbstractItemDelegate {
	_ret := C.QAbstractItemView_ItemDelegateForRow(this.h, (C.int)(row))
	return newQAbstractItemDelegate_U(unsafe.Pointer(_ret))
}

func (this *QAbstractItemView) SetItemDelegateForColumn(column int, delegate *QAbstractItemDelegate) {
	C.QAbstractItemView_SetItemDelegateForColumn(this.h, (C.int)(column), delegate.cPointer())
}

func (this *QAbstractItemView) ItemDelegateForColumn(column int) *QAbstractItemDelegate {
	_ret := C.QAbstractItemView_ItemDelegateForColumn(this.h, (C.int)(column))
	return newQAbstractItemDelegate_U(unsafe.Pointer(_ret))
}

func (this *QAbstractItemView) ItemDelegateWithIndex(index *QModelIndex) *QAbstractItemDelegate {
	_ret := C.QAbstractItemView_ItemDelegateWithIndex(this.h, index.cPointer())
	return newQAbstractItemDelegate_U(unsafe.Pointer(_ret))
}

func (this *QAbstractItemView) InputMethodQuery(query InputMethodQuery) *QVariant {
	_ret := C.QAbstractItemView_InputMethodQuery(this.h, (C.uintptr_t)(query))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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
func (this *QAbstractItemView) OnPressed(slot func(index *QModelIndex)) {
	C.QAbstractItemView_connect_Pressed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractItemView_Pressed
func miqt_exec_callback_QAbstractItemView_Pressed(cb *C.void, index *C.QModelIndex) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	index_ret := index
	slotval1 := newQModelIndex_U(unsafe.Pointer(index_ret))

	gofunc(slotval1)
}

func (this *QAbstractItemView) Clicked(index *QModelIndex) {
	C.QAbstractItemView_Clicked(this.h, index.cPointer())
}
func (this *QAbstractItemView) OnClicked(slot func(index *QModelIndex)) {
	C.QAbstractItemView_connect_Clicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractItemView_Clicked
func miqt_exec_callback_QAbstractItemView_Clicked(cb *C.void, index *C.QModelIndex) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	index_ret := index
	slotval1 := newQModelIndex_U(unsafe.Pointer(index_ret))

	gofunc(slotval1)
}

func (this *QAbstractItemView) DoubleClicked(index *QModelIndex) {
	C.QAbstractItemView_DoubleClicked(this.h, index.cPointer())
}
func (this *QAbstractItemView) OnDoubleClicked(slot func(index *QModelIndex)) {
	C.QAbstractItemView_connect_DoubleClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractItemView_DoubleClicked
func miqt_exec_callback_QAbstractItemView_DoubleClicked(cb *C.void, index *C.QModelIndex) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	index_ret := index
	slotval1 := newQModelIndex_U(unsafe.Pointer(index_ret))

	gofunc(slotval1)
}

func (this *QAbstractItemView) Activated(index *QModelIndex) {
	C.QAbstractItemView_Activated(this.h, index.cPointer())
}
func (this *QAbstractItemView) OnActivated(slot func(index *QModelIndex)) {
	C.QAbstractItemView_connect_Activated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractItemView_Activated
func miqt_exec_callback_QAbstractItemView_Activated(cb *C.void, index *C.QModelIndex) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	index_ret := index
	slotval1 := newQModelIndex_U(unsafe.Pointer(index_ret))

	gofunc(slotval1)
}

func (this *QAbstractItemView) Entered(index *QModelIndex) {
	C.QAbstractItemView_Entered(this.h, index.cPointer())
}
func (this *QAbstractItemView) OnEntered(slot func(index *QModelIndex)) {
	C.QAbstractItemView_connect_Entered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractItemView_Entered
func miqt_exec_callback_QAbstractItemView_Entered(cb *C.void, index *C.QModelIndex) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	index_ret := index
	slotval1 := newQModelIndex_U(unsafe.Pointer(index_ret))

	gofunc(slotval1)
}

func (this *QAbstractItemView) ViewportEntered() {
	C.QAbstractItemView_ViewportEntered(this.h)
}
func (this *QAbstractItemView) OnViewportEntered(slot func()) {
	C.QAbstractItemView_connect_ViewportEntered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractItemView_ViewportEntered
func miqt_exec_callback_QAbstractItemView_ViewportEntered(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractItemView) IconSizeChanged(size *QSize) {
	C.QAbstractItemView_IconSizeChanged(this.h, size.cPointer())
}
func (this *QAbstractItemView) OnIconSizeChanged(slot func(size *QSize)) {
	C.QAbstractItemView_connect_IconSizeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QAbstractItemView_IconSizeChanged
func miqt_exec_callback_QAbstractItemView_IconSizeChanged(cb *C.void, size *C.QSize) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(size *QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	size_ret := size
	slotval1 := newQSize_U(unsafe.Pointer(size_ret))

	gofunc(slotval1)
}

func QAbstractItemView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractItemView_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractItemView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractItemView_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractItemView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractItemView_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractItemView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractItemView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractItemView) ScrollTo2(index *QModelIndex, hint QAbstractItemView__ScrollHint) {
	C.QAbstractItemView_ScrollTo2(this.h, index.cPointer(), (C.uintptr_t)(hint))
}

// Delete this object from C++ memory.
func (this *QAbstractItemView) Delete() {
	C.QAbstractItemView_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractItemView) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractItemView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
