package qt6

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
	QAbstractItemView__NoSelection         QAbstractItemView__SelectionMode = 0
	QAbstractItemView__SingleSelection     QAbstractItemView__SelectionMode = 1
	QAbstractItemView__MultiSelection      QAbstractItemView__SelectionMode = 2
	QAbstractItemView__ExtendedSelection   QAbstractItemView__SelectionMode = 3
	QAbstractItemView__ContiguousSelection QAbstractItemView__SelectionMode = 4
)

type QAbstractItemView__SelectionBehavior int

const (
	QAbstractItemView__SelectItems   QAbstractItemView__SelectionBehavior = 0
	QAbstractItemView__SelectRows    QAbstractItemView__SelectionBehavior = 1
	QAbstractItemView__SelectColumns QAbstractItemView__SelectionBehavior = 2
)

type QAbstractItemView__ScrollHint int

const (
	QAbstractItemView__EnsureVisible    QAbstractItemView__ScrollHint = 0
	QAbstractItemView__PositionAtTop    QAbstractItemView__ScrollHint = 1
	QAbstractItemView__PositionAtBottom QAbstractItemView__ScrollHint = 2
	QAbstractItemView__PositionAtCenter QAbstractItemView__ScrollHint = 3
)

type QAbstractItemView__EditTrigger int

const (
	QAbstractItemView__NoEditTriggers  QAbstractItemView__EditTrigger = 0
	QAbstractItemView__CurrentChanged  QAbstractItemView__EditTrigger = 1
	QAbstractItemView__DoubleClicked   QAbstractItemView__EditTrigger = 2
	QAbstractItemView__SelectedClicked QAbstractItemView__EditTrigger = 4
	QAbstractItemView__EditKeyPressed  QAbstractItemView__EditTrigger = 8
	QAbstractItemView__AnyKeyPressed   QAbstractItemView__EditTrigger = 16
	QAbstractItemView__AllEditTriggers QAbstractItemView__EditTrigger = 31
)

type QAbstractItemView__ScrollMode int

const (
	QAbstractItemView__ScrollPerItem  QAbstractItemView__ScrollMode = 0
	QAbstractItemView__ScrollPerPixel QAbstractItemView__ScrollMode = 1
)

type QAbstractItemView__DragDropMode int

const (
	QAbstractItemView__NoDragDrop   QAbstractItemView__DragDropMode = 0
	QAbstractItemView__DragOnly     QAbstractItemView__DragDropMode = 1
	QAbstractItemView__DropOnly     QAbstractItemView__DragDropMode = 2
	QAbstractItemView__DragDrop     QAbstractItemView__DragDropMode = 3
	QAbstractItemView__InternalMove QAbstractItemView__DragDropMode = 4
)

type QAbstractItemView__CursorAction int

const (
	QAbstractItemView__MoveUp       QAbstractItemView__CursorAction = 0
	QAbstractItemView__MoveDown     QAbstractItemView__CursorAction = 1
	QAbstractItemView__MoveLeft     QAbstractItemView__CursorAction = 2
	QAbstractItemView__MoveRight    QAbstractItemView__CursorAction = 3
	QAbstractItemView__MoveHome     QAbstractItemView__CursorAction = 4
	QAbstractItemView__MoveEnd      QAbstractItemView__CursorAction = 5
	QAbstractItemView__MovePageUp   QAbstractItemView__CursorAction = 6
	QAbstractItemView__MovePageDown QAbstractItemView__CursorAction = 7
	QAbstractItemView__MoveNext     QAbstractItemView__CursorAction = 8
	QAbstractItemView__MovePrevious QAbstractItemView__CursorAction = 9
)

type QAbstractItemView__State int

const (
	QAbstractItemView__NoState            QAbstractItemView__State = 0
	QAbstractItemView__DraggingState      QAbstractItemView__State = 1
	QAbstractItemView__DragSelectingState QAbstractItemView__State = 2
	QAbstractItemView__EditingState       QAbstractItemView__State = 3
	QAbstractItemView__ExpandingState     QAbstractItemView__State = 4
	QAbstractItemView__CollapsingState    QAbstractItemView__State = 5
	QAbstractItemView__AnimatingState     QAbstractItemView__State = 6
)

type QAbstractItemView__DropIndicatorPosition int

const (
	QAbstractItemView__OnItem     QAbstractItemView__DropIndicatorPosition = 0
	QAbstractItemView__AboveItem  QAbstractItemView__DropIndicatorPosition = 1
	QAbstractItemView__BelowItem  QAbstractItemView__DropIndicatorPosition = 2
	QAbstractItemView__OnViewport QAbstractItemView__DropIndicatorPosition = 3
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

func (this *QAbstractItemView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractItemView constructs the type using only CGO pointers.
func newQAbstractItemView(h *C.QAbstractItemView) *QAbstractItemView {
	if h == nil {
		return nil
	}
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	C.QAbstractItemView_virtbase(h, &outptr_QAbstractScrollArea)

	return &QAbstractItemView{h: h,
		QAbstractScrollArea: newQAbstractScrollArea(outptr_QAbstractScrollArea)}
}

// UnsafeNewQAbstractItemView constructs the type using only unsafe pointers.
func UnsafeNewQAbstractItemView(h unsafe.Pointer) *QAbstractItemView {
	return newQAbstractItemView((*C.QAbstractItemView)(h))
}

// NewQAbstractItemView constructs a new QAbstractItemView object.
func NewQAbstractItemView(parent *QWidget) *QAbstractItemView {

	return newQAbstractItemView(C.QAbstractItemView_new(parent.cPointer()))
}

// NewQAbstractItemView2 constructs a new QAbstractItemView object.
func NewQAbstractItemView2() *QAbstractItemView {

	return newQAbstractItemView(C.QAbstractItemView_new2())
}

func (this *QAbstractItemView) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAbstractItemView_metaObject(this.h))
}

func (this *QAbstractItemView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractItemView_metacast(this.h, param1_Cstring))
}

func QAbstractItemView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemView_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractItemView) SetModel(model *QAbstractItemModel) {
	C.QAbstractItemView_setModel(this.h, model.cPointer())
}

func (this *QAbstractItemView) Model() *QAbstractItemModel {
	return newQAbstractItemModel(C.QAbstractItemView_model(this.h))
}

func (this *QAbstractItemView) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QAbstractItemView_setSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QAbstractItemView) SelectionModel() *QItemSelectionModel {
	return newQItemSelectionModel(C.QAbstractItemView_selectionModel(this.h))
}

func (this *QAbstractItemView) SetItemDelegate(delegate *QAbstractItemDelegate) {
	C.QAbstractItemView_setItemDelegate(this.h, delegate.cPointer())
}

func (this *QAbstractItemView) ItemDelegate() *QAbstractItemDelegate {
	return newQAbstractItemDelegate(C.QAbstractItemView_itemDelegate(this.h))
}

func (this *QAbstractItemView) SetSelectionMode(mode QAbstractItemView__SelectionMode) {
	C.QAbstractItemView_setSelectionMode(this.h, (C.int)(mode))
}

func (this *QAbstractItemView) SelectionMode() QAbstractItemView__SelectionMode {
	return (QAbstractItemView__SelectionMode)(C.QAbstractItemView_selectionMode(this.h))
}

func (this *QAbstractItemView) SetSelectionBehavior(behavior QAbstractItemView__SelectionBehavior) {
	C.QAbstractItemView_setSelectionBehavior(this.h, (C.int)(behavior))
}

func (this *QAbstractItemView) SelectionBehavior() QAbstractItemView__SelectionBehavior {
	return (QAbstractItemView__SelectionBehavior)(C.QAbstractItemView_selectionBehavior(this.h))
}

func (this *QAbstractItemView) CurrentIndex() *QModelIndex {
	_goptr := newQModelIndex(C.QAbstractItemView_currentIndex(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemView) RootIndex() *QModelIndex {
	_goptr := newQModelIndex(C.QAbstractItemView_rootIndex(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemView) SetEditTriggers(triggers QAbstractItemView__EditTrigger) {
	C.QAbstractItemView_setEditTriggers(this.h, (C.int)(triggers))
}

func (this *QAbstractItemView) EditTriggers() QAbstractItemView__EditTrigger {
	return (QAbstractItemView__EditTrigger)(C.QAbstractItemView_editTriggers(this.h))
}

func (this *QAbstractItemView) SetVerticalScrollMode(mode QAbstractItemView__ScrollMode) {
	C.QAbstractItemView_setVerticalScrollMode(this.h, (C.int)(mode))
}

func (this *QAbstractItemView) VerticalScrollMode() QAbstractItemView__ScrollMode {
	return (QAbstractItemView__ScrollMode)(C.QAbstractItemView_verticalScrollMode(this.h))
}

func (this *QAbstractItemView) ResetVerticalScrollMode() {
	C.QAbstractItemView_resetVerticalScrollMode(this.h)
}

func (this *QAbstractItemView) SetHorizontalScrollMode(mode QAbstractItemView__ScrollMode) {
	C.QAbstractItemView_setHorizontalScrollMode(this.h, (C.int)(mode))
}

func (this *QAbstractItemView) HorizontalScrollMode() QAbstractItemView__ScrollMode {
	return (QAbstractItemView__ScrollMode)(C.QAbstractItemView_horizontalScrollMode(this.h))
}

func (this *QAbstractItemView) ResetHorizontalScrollMode() {
	C.QAbstractItemView_resetHorizontalScrollMode(this.h)
}

func (this *QAbstractItemView) SetAutoScroll(enable bool) {
	C.QAbstractItemView_setAutoScroll(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) HasAutoScroll() bool {
	return (bool)(C.QAbstractItemView_hasAutoScroll(this.h))
}

func (this *QAbstractItemView) SetAutoScrollMargin(margin int) {
	C.QAbstractItemView_setAutoScrollMargin(this.h, (C.int)(margin))
}

func (this *QAbstractItemView) AutoScrollMargin() int {
	return (int)(C.QAbstractItemView_autoScrollMargin(this.h))
}

func (this *QAbstractItemView) SetTabKeyNavigation(enable bool) {
	C.QAbstractItemView_setTabKeyNavigation(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) TabKeyNavigation() bool {
	return (bool)(C.QAbstractItemView_tabKeyNavigation(this.h))
}

func (this *QAbstractItemView) SetDropIndicatorShown(enable bool) {
	C.QAbstractItemView_setDropIndicatorShown(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) ShowDropIndicator() bool {
	return (bool)(C.QAbstractItemView_showDropIndicator(this.h))
}

func (this *QAbstractItemView) SetDragEnabled(enable bool) {
	C.QAbstractItemView_setDragEnabled(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) DragEnabled() bool {
	return (bool)(C.QAbstractItemView_dragEnabled(this.h))
}

func (this *QAbstractItemView) SetDragDropOverwriteMode(overwrite bool) {
	C.QAbstractItemView_setDragDropOverwriteMode(this.h, (C.bool)(overwrite))
}

func (this *QAbstractItemView) DragDropOverwriteMode() bool {
	return (bool)(C.QAbstractItemView_dragDropOverwriteMode(this.h))
}

func (this *QAbstractItemView) SetDragDropMode(behavior QAbstractItemView__DragDropMode) {
	C.QAbstractItemView_setDragDropMode(this.h, (C.int)(behavior))
}

func (this *QAbstractItemView) DragDropMode() QAbstractItemView__DragDropMode {
	return (QAbstractItemView__DragDropMode)(C.QAbstractItemView_dragDropMode(this.h))
}

func (this *QAbstractItemView) SetDefaultDropAction(dropAction DropAction) {
	C.QAbstractItemView_setDefaultDropAction(this.h, (C.int)(dropAction))
}

func (this *QAbstractItemView) DefaultDropAction() DropAction {
	return (DropAction)(C.QAbstractItemView_defaultDropAction(this.h))
}

func (this *QAbstractItemView) SetAlternatingRowColors(enable bool) {
	C.QAbstractItemView_setAlternatingRowColors(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) AlternatingRowColors() bool {
	return (bool)(C.QAbstractItemView_alternatingRowColors(this.h))
}

func (this *QAbstractItemView) SetIconSize(size *QSize) {
	C.QAbstractItemView_setIconSize(this.h, size.cPointer())
}

func (this *QAbstractItemView) IconSize() *QSize {
	_goptr := newQSize(C.QAbstractItemView_iconSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemView) SetTextElideMode(mode TextElideMode) {
	C.QAbstractItemView_setTextElideMode(this.h, (C.int)(mode))
}

func (this *QAbstractItemView) TextElideMode() TextElideMode {
	return (TextElideMode)(C.QAbstractItemView_textElideMode(this.h))
}

func (this *QAbstractItemView) KeyboardSearch(search string) {
	search_ms := C.struct_miqt_string{}
	search_ms.data = C.CString(search)
	search_ms.len = C.size_t(len(search))
	defer C.free(unsafe.Pointer(search_ms.data))
	C.QAbstractItemView_keyboardSearch(this.h, search_ms)
}

func (this *QAbstractItemView) VisualRect(index *QModelIndex) *QRect {
	_goptr := newQRect(C.QAbstractItemView_visualRect(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemView) ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {
	C.QAbstractItemView_scrollTo(this.h, index.cPointer(), (C.int)(hint))
}

func (this *QAbstractItemView) IndexAt(point *QPoint) *QModelIndex {
	_goptr := newQModelIndex(C.QAbstractItemView_indexAt(this.h, point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemView) SizeHintForIndex(index *QModelIndex) *QSize {
	_goptr := newQSize(C.QAbstractItemView_sizeHintForIndex(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemView) SizeHintForRow(row int) int {
	return (int)(C.QAbstractItemView_sizeHintForRow(this.h, (C.int)(row)))
}

func (this *QAbstractItemView) SizeHintForColumn(column int) int {
	return (int)(C.QAbstractItemView_sizeHintForColumn(this.h, (C.int)(column)))
}

func (this *QAbstractItemView) OpenPersistentEditor(index *QModelIndex) {
	C.QAbstractItemView_openPersistentEditor(this.h, index.cPointer())
}

func (this *QAbstractItemView) ClosePersistentEditor(index *QModelIndex) {
	C.QAbstractItemView_closePersistentEditor(this.h, index.cPointer())
}

func (this *QAbstractItemView) IsPersistentEditorOpen(index *QModelIndex) bool {
	return (bool)(C.QAbstractItemView_isPersistentEditorOpen(this.h, index.cPointer()))
}

func (this *QAbstractItemView) SetIndexWidget(index *QModelIndex, widget *QWidget) {
	C.QAbstractItemView_setIndexWidget(this.h, index.cPointer(), widget.cPointer())
}

func (this *QAbstractItemView) IndexWidget(index *QModelIndex) *QWidget {
	return newQWidget(C.QAbstractItemView_indexWidget(this.h, index.cPointer()))
}

func (this *QAbstractItemView) SetItemDelegateForRow(row int, delegate *QAbstractItemDelegate) {
	C.QAbstractItemView_setItemDelegateForRow(this.h, (C.int)(row), delegate.cPointer())
}

func (this *QAbstractItemView) ItemDelegateForRow(row int) *QAbstractItemDelegate {
	return newQAbstractItemDelegate(C.QAbstractItemView_itemDelegateForRow(this.h, (C.int)(row)))
}

func (this *QAbstractItemView) SetItemDelegateForColumn(column int, delegate *QAbstractItemDelegate) {
	C.QAbstractItemView_setItemDelegateForColumn(this.h, (C.int)(column), delegate.cPointer())
}

func (this *QAbstractItemView) ItemDelegateForColumn(column int) *QAbstractItemDelegate {
	return newQAbstractItemDelegate(C.QAbstractItemView_itemDelegateForColumn(this.h, (C.int)(column)))
}

func (this *QAbstractItemView) ItemDelegateWithIndex(index *QModelIndex) *QAbstractItemDelegate {
	return newQAbstractItemDelegate(C.QAbstractItemView_itemDelegateWithIndex(this.h, index.cPointer()))
}

func (this *QAbstractItemView) ItemDelegateForIndex(index *QModelIndex) *QAbstractItemDelegate {
	return newQAbstractItemDelegate(C.QAbstractItemView_itemDelegateForIndex(this.h, index.cPointer()))
}

func (this *QAbstractItemView) InputMethodQuery(query InputMethodQuery) *QVariant {
	_goptr := newQVariant(C.QAbstractItemView_inputMethodQuery(this.h, (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemView) Reset() {
	C.QAbstractItemView_reset(this.h)
}

func (this *QAbstractItemView) SetRootIndex(index *QModelIndex) {
	C.QAbstractItemView_setRootIndex(this.h, index.cPointer())
}

func (this *QAbstractItemView) DoItemsLayout() {
	C.QAbstractItemView_doItemsLayout(this.h)
}

func (this *QAbstractItemView) SelectAll() {
	C.QAbstractItemView_selectAll(this.h)
}

func (this *QAbstractItemView) Edit(index *QModelIndex) {
	C.QAbstractItemView_edit(this.h, index.cPointer())
}

func (this *QAbstractItemView) ClearSelection() {
	C.QAbstractItemView_clearSelection(this.h)
}

func (this *QAbstractItemView) SetCurrentIndex(index *QModelIndex) {
	C.QAbstractItemView_setCurrentIndex(this.h, index.cPointer())
}

func (this *QAbstractItemView) ScrollToTop() {
	C.QAbstractItemView_scrollToTop(this.h)
}

func (this *QAbstractItemView) ScrollToBottom() {
	C.QAbstractItemView_scrollToBottom(this.h)
}

func (this *QAbstractItemView) Update(index *QModelIndex) {
	C.QAbstractItemView_update(this.h, index.cPointer())
}

func (this *QAbstractItemView) Pressed(index *QModelIndex) {
	C.QAbstractItemView_pressed(this.h, index.cPointer())
}
func (this *QAbstractItemView) OnPressed(slot func(index *QModelIndex)) {
	C.QAbstractItemView_connect_pressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_pressed
func miqt_exec_callback_QAbstractItemView_pressed(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc(slotval1)
}

func (this *QAbstractItemView) Clicked(index *QModelIndex) {
	C.QAbstractItemView_clicked(this.h, index.cPointer())
}
func (this *QAbstractItemView) OnClicked(slot func(index *QModelIndex)) {
	C.QAbstractItemView_connect_clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_clicked
func miqt_exec_callback_QAbstractItemView_clicked(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc(slotval1)
}

func (this *QAbstractItemView) DoubleClicked(index *QModelIndex) {
	C.QAbstractItemView_doubleClicked(this.h, index.cPointer())
}
func (this *QAbstractItemView) OnDoubleClicked(slot func(index *QModelIndex)) {
	C.QAbstractItemView_connect_doubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_doubleClicked
func miqt_exec_callback_QAbstractItemView_doubleClicked(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc(slotval1)
}

func (this *QAbstractItemView) Activated(index *QModelIndex) {
	C.QAbstractItemView_activated(this.h, index.cPointer())
}
func (this *QAbstractItemView) OnActivated(slot func(index *QModelIndex)) {
	C.QAbstractItemView_connect_activated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_activated
func miqt_exec_callback_QAbstractItemView_activated(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc(slotval1)
}

func (this *QAbstractItemView) Entered(index *QModelIndex) {
	C.QAbstractItemView_entered(this.h, index.cPointer())
}
func (this *QAbstractItemView) OnEntered(slot func(index *QModelIndex)) {
	C.QAbstractItemView_connect_entered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_entered
func miqt_exec_callback_QAbstractItemView_entered(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc(slotval1)
}

func (this *QAbstractItemView) ViewportEntered() {
	C.QAbstractItemView_viewportEntered(this.h)
}
func (this *QAbstractItemView) OnViewportEntered(slot func()) {
	C.QAbstractItemView_connect_viewportEntered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_viewportEntered
func miqt_exec_callback_QAbstractItemView_viewportEntered(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractItemView) IconSizeChanged(size *QSize) {
	C.QAbstractItemView_iconSizeChanged(this.h, size.cPointer())
}
func (this *QAbstractItemView) OnIconSizeChanged(slot func(size *QSize)) {
	C.QAbstractItemView_connect_iconSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_iconSizeChanged
func miqt_exec_callback_QAbstractItemView_iconSizeChanged(cb C.intptr_t, size *C.QSize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(size *QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSize(size)

	gofunc(slotval1)
}

func QAbstractItemView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemView_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractItemView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemView_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// State can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) State() QAbstractItemView__State {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (QAbstractItemView__State)(C.QAbstractItemView_protectedbase_state(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetState can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) SetState(state QAbstractItemView__State) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractItemView_protectedbase_setState(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(state))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ScheduleDelayedItemsLayout can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) ScheduleDelayedItemsLayout() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractItemView_protectedbase_scheduleDelayedItemsLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ExecuteDelayedItemsLayout can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) ExecuteDelayedItemsLayout() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractItemView_protectedbase_executeDelayedItemsLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetDirtyRegion can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) SetDirtyRegion(region *QRegion) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractItemView_protectedbase_setDirtyRegion(&_dynamic_cast_ok, unsafe.Pointer(this.h), region.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ScrollDirtyRegion can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) ScrollDirtyRegion(dx int, dy int) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractItemView_protectedbase_scrollDirtyRegion(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DirtyRegionOffset can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) DirtyRegionOffset() QPoint {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQPoint(C.QAbstractItemView_protectedbase_dirtyRegionOffset(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// StartAutoScroll can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) StartAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractItemView_protectedbase_startAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// StopAutoScroll can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) StopAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractItemView_protectedbase_stopAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DoAutoScroll can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) DoAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractItemView_protectedbase_doAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DropIndicatorPosition can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) DropIndicatorPosition() QAbstractItemView__DropIndicatorPosition {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (QAbstractItemView__DropIndicatorPosition)(C.QAbstractItemView_protectedbase_dropIndicatorPosition(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetViewportMargins can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) SetViewportMargins(left int, top int, right int, bottom int) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractItemView_protectedbase_setViewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ViewportMargins can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) ViewportMargins() QMargins {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQMargins(C.QAbstractItemView_protectedbase_viewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DrawFrame can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) DrawFrame(param1 *QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractItemView_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractItemView_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractItemView_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QAbstractItemView_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAbstractItemView_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAbstractItemView_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QAbstractItemView_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAbstractItemView_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAbstractItemView_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QAbstractItemView that was directly constructed.
func (this *QAbstractItemView) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAbstractItemView_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QAbstractItemView) callVirtualBase_SetModel(model *QAbstractItemModel) {

	C.QAbstractItemView_virtualbase_setModel(unsafe.Pointer(this.h), model.cPointer())

}
func (this *QAbstractItemView) OnSetModel(slot func(super func(model *QAbstractItemModel), model *QAbstractItemModel)) {
	ok := C.QAbstractItemView_override_virtual_setModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_setModel
func miqt_exec_callback_QAbstractItemView_setModel(self *C.QAbstractItemView, cb C.intptr_t, model *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(model *QAbstractItemModel), model *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractItemModel(model)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_SetModel, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_SetSelectionModel(selectionModel *QItemSelectionModel) {

	C.QAbstractItemView_virtualbase_setSelectionModel(unsafe.Pointer(this.h), selectionModel.cPointer())

}
func (this *QAbstractItemView) OnSetSelectionModel(slot func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel)) {
	ok := C.QAbstractItemView_override_virtual_setSelectionModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_setSelectionModel
func miqt_exec_callback_QAbstractItemView_setSelectionModel(self *C.QAbstractItemView, cb C.intptr_t, selectionModel *C.QItemSelectionModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelectionModel(selectionModel)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_SetSelectionModel, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_KeyboardSearch(search string) {
	search_ms := C.struct_miqt_string{}
	search_ms.data = C.CString(search)
	search_ms.len = C.size_t(len(search))
	defer C.free(unsafe.Pointer(search_ms.data))

	C.QAbstractItemView_virtualbase_keyboardSearch(unsafe.Pointer(this.h), search_ms)

}
func (this *QAbstractItemView) OnKeyboardSearch(slot func(super func(search string), search string)) {
	ok := C.QAbstractItemView_override_virtual_keyboardSearch(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_keyboardSearch
func miqt_exec_callback_QAbstractItemView_keyboardSearch(self *C.QAbstractItemView, cb C.intptr_t, search C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(search string), search string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var search_ms C.struct_miqt_string = search
	search_ret := C.GoStringN(search_ms.data, C.int(int64(search_ms.len)))
	C.free(unsafe.Pointer(search_ms.data))
	slotval1 := search_ret

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_KeyboardSearch, slotval1)

}
func (this *QAbstractItemView) OnVisualRect(slot func(index *QModelIndex) *QRect) {
	ok := C.QAbstractItemView_override_virtual_visualRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_visualRect
func miqt_exec_callback_QAbstractItemView_visualRect(self *C.QAbstractItemView, cb C.intptr_t, index *C.QModelIndex) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}
func (this *QAbstractItemView) OnScrollTo(slot func(index *QModelIndex, hint QAbstractItemView__ScrollHint)) {
	ok := C.QAbstractItemView_override_virtual_scrollTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_scrollTo
func miqt_exec_callback_QAbstractItemView_scrollTo(self *C.QAbstractItemView, cb C.intptr_t, index *C.QModelIndex, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex, hint QAbstractItemView__ScrollHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__ScrollHint)(hint)

	gofunc(slotval1, slotval2)

}
func (this *QAbstractItemView) OnIndexAt(slot func(point *QPoint) *QModelIndex) {
	ok := C.QAbstractItemView_override_virtual_indexAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_indexAt
func miqt_exec_callback_QAbstractItemView_indexAt(self *C.QAbstractItemView, cb C.intptr_t, point *C.QPoint) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(point *QPoint) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(point)

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemView) callVirtualBase_SizeHintForRow(row int) int {

	return (int)(C.QAbstractItemView_virtualbase_sizeHintForRow(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QAbstractItemView) OnSizeHintForRow(slot func(super func(row int) int, row int) int) {
	ok := C.QAbstractItemView_override_virtual_sizeHintForRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_sizeHintForRow
func miqt_exec_callback_QAbstractItemView_sizeHintForRow(self *C.QAbstractItemView, cb C.intptr_t, row C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int) int, row int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_SizeHintForRow, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QAbstractItemView) callVirtualBase_SizeHintForColumn(column int) int {

	return (int)(C.QAbstractItemView_virtualbase_sizeHintForColumn(unsafe.Pointer(this.h), (C.int)(column)))

}
func (this *QAbstractItemView) OnSizeHintForColumn(slot func(super func(column int) int, column int) int) {
	ok := C.QAbstractItemView_override_virtual_sizeHintForColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_sizeHintForColumn
func miqt_exec_callback_QAbstractItemView_sizeHintForColumn(self *C.QAbstractItemView, cb C.intptr_t, column C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int) int, column int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_SizeHintForColumn, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QAbstractItemView) callVirtualBase_ItemDelegateForIndex(index *QModelIndex) *QAbstractItemDelegate {

	return newQAbstractItemDelegate(C.QAbstractItemView_virtualbase_itemDelegateForIndex(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QAbstractItemView) OnItemDelegateForIndex(slot func(super func(index *QModelIndex) *QAbstractItemDelegate, index *QModelIndex) *QAbstractItemDelegate) {
	ok := C.QAbstractItemView_override_virtual_itemDelegateForIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_itemDelegateForIndex
func miqt_exec_callback_QAbstractItemView_itemDelegateForIndex(self *C.QAbstractItemView, cb C.intptr_t, index *C.QModelIndex) *C.QAbstractItemDelegate {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QAbstractItemDelegate, index *QModelIndex) *QAbstractItemDelegate)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_ItemDelegateForIndex, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemView) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QAbstractItemView_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractItemView) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QAbstractItemView_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_inputMethodQuery
func miqt_exec_callback_QAbstractItemView_inputMethodQuery(self *C.QAbstractItemView, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemView) callVirtualBase_Reset() {

	C.QAbstractItemView_virtualbase_reset(unsafe.Pointer(this.h))

}
func (this *QAbstractItemView) OnReset(slot func(super func())) {
	ok := C.QAbstractItemView_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_reset
func miqt_exec_callback_QAbstractItemView_reset(self *C.QAbstractItemView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_Reset)

}

func (this *QAbstractItemView) callVirtualBase_SetRootIndex(index *QModelIndex) {

	C.QAbstractItemView_virtualbase_setRootIndex(unsafe.Pointer(this.h), index.cPointer())

}
func (this *QAbstractItemView) OnSetRootIndex(slot func(super func(index *QModelIndex), index *QModelIndex)) {
	ok := C.QAbstractItemView_override_virtual_setRootIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_setRootIndex
func miqt_exec_callback_QAbstractItemView_setRootIndex(self *C.QAbstractItemView, cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex), index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_SetRootIndex, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_DoItemsLayout() {

	C.QAbstractItemView_virtualbase_doItemsLayout(unsafe.Pointer(this.h))

}
func (this *QAbstractItemView) OnDoItemsLayout(slot func(super func())) {
	ok := C.QAbstractItemView_override_virtual_doItemsLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_doItemsLayout
func miqt_exec_callback_QAbstractItemView_doItemsLayout(self *C.QAbstractItemView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_DoItemsLayout)

}

func (this *QAbstractItemView) callVirtualBase_SelectAll() {

	C.QAbstractItemView_virtualbase_selectAll(unsafe.Pointer(this.h))

}
func (this *QAbstractItemView) OnSelectAll(slot func(super func())) {
	ok := C.QAbstractItemView_override_virtual_selectAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_selectAll
func miqt_exec_callback_QAbstractItemView_selectAll(self *C.QAbstractItemView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_SelectAll)

}

func (this *QAbstractItemView) callVirtualBase_DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	roles_ma := C.struct_miqt_array{len: C.size_t(len(roles)), data: unsafe.Pointer(roles_CArray)}

	C.QAbstractItemView_virtualbase_dataChanged(unsafe.Pointer(this.h), topLeft.cPointer(), bottomRight.cPointer(), roles_ma)

}
func (this *QAbstractItemView) OnDataChanged(slot func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int)) {
	ok := C.QAbstractItemView_override_virtual_dataChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_dataChanged
func miqt_exec_callback_QAbstractItemView_dataChanged(self *C.QAbstractItemView, cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles C.struct_miqt_array) {
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

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_DataChanged, slotval1, slotval2, slotval3)

}

func (this *QAbstractItemView) callVirtualBase_RowsInserted(parent *QModelIndex, start int, end int) {

	C.QAbstractItemView_virtualbase_rowsInserted(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QAbstractItemView) OnRowsInserted(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QAbstractItemView_override_virtual_rowsInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_rowsInserted
func miqt_exec_callback_QAbstractItemView_rowsInserted(self *C.QAbstractItemView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_RowsInserted, slotval1, slotval2, slotval3)

}

func (this *QAbstractItemView) callVirtualBase_RowsAboutToBeRemoved(parent *QModelIndex, start int, end int) {

	C.QAbstractItemView_virtualbase_rowsAboutToBeRemoved(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QAbstractItemView) OnRowsAboutToBeRemoved(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QAbstractItemView_override_virtual_rowsAboutToBeRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_rowsAboutToBeRemoved
func miqt_exec_callback_QAbstractItemView_rowsAboutToBeRemoved(self *C.QAbstractItemView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_RowsAboutToBeRemoved, slotval1, slotval2, slotval3)

}

func (this *QAbstractItemView) callVirtualBase_SelectionChanged(selected *QItemSelection, deselected *QItemSelection) {

	C.QAbstractItemView_virtualbase_selectionChanged(unsafe.Pointer(this.h), selected.cPointer(), deselected.cPointer())

}
func (this *QAbstractItemView) OnSelectionChanged(slot func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection)) {
	ok := C.QAbstractItemView_override_virtual_selectionChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_selectionChanged
func miqt_exec_callback_QAbstractItemView_selectionChanged(self *C.QAbstractItemView, cb C.intptr_t, selected *C.QItemSelection, deselected *C.QItemSelection) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selected)

	slotval2 := newQItemSelection(deselected)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_SelectionChanged, slotval1, slotval2)

}

func (this *QAbstractItemView) callVirtualBase_CurrentChanged(current *QModelIndex, previous *QModelIndex) {

	C.QAbstractItemView_virtualbase_currentChanged(unsafe.Pointer(this.h), current.cPointer(), previous.cPointer())

}
func (this *QAbstractItemView) OnCurrentChanged(slot func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex)) {
	ok := C.QAbstractItemView_override_virtual_currentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_currentChanged
func miqt_exec_callback_QAbstractItemView_currentChanged(self *C.QAbstractItemView, cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(current)

	slotval2 := newQModelIndex(previous)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_CurrentChanged, slotval1, slotval2)

}

func (this *QAbstractItemView) callVirtualBase_UpdateEditorData() {

	C.QAbstractItemView_virtualbase_updateEditorData(unsafe.Pointer(this.h))

}
func (this *QAbstractItemView) OnUpdateEditorData(slot func(super func())) {
	ok := C.QAbstractItemView_override_virtual_updateEditorData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_updateEditorData
func miqt_exec_callback_QAbstractItemView_updateEditorData(self *C.QAbstractItemView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_UpdateEditorData)

}

func (this *QAbstractItemView) callVirtualBase_UpdateEditorGeometries() {

	C.QAbstractItemView_virtualbase_updateEditorGeometries(unsafe.Pointer(this.h))

}
func (this *QAbstractItemView) OnUpdateEditorGeometries(slot func(super func())) {
	ok := C.QAbstractItemView_override_virtual_updateEditorGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_updateEditorGeometries
func miqt_exec_callback_QAbstractItemView_updateEditorGeometries(self *C.QAbstractItemView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_UpdateEditorGeometries)

}

func (this *QAbstractItemView) callVirtualBase_UpdateGeometries() {

	C.QAbstractItemView_virtualbase_updateGeometries(unsafe.Pointer(this.h))

}
func (this *QAbstractItemView) OnUpdateGeometries(slot func(super func())) {
	ok := C.QAbstractItemView_override_virtual_updateGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_updateGeometries
func miqt_exec_callback_QAbstractItemView_updateGeometries(self *C.QAbstractItemView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_UpdateGeometries)

}

func (this *QAbstractItemView) callVirtualBase_VerticalScrollbarAction(action int) {

	C.QAbstractItemView_virtualbase_verticalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QAbstractItemView) OnVerticalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QAbstractItemView_override_virtual_verticalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_verticalScrollbarAction
func miqt_exec_callback_QAbstractItemView_verticalScrollbarAction(self *C.QAbstractItemView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_VerticalScrollbarAction, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_HorizontalScrollbarAction(action int) {

	C.QAbstractItemView_virtualbase_horizontalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QAbstractItemView) OnHorizontalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QAbstractItemView_override_virtual_horizontalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_horizontalScrollbarAction
func miqt_exec_callback_QAbstractItemView_horizontalScrollbarAction(self *C.QAbstractItemView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_HorizontalScrollbarAction, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_VerticalScrollbarValueChanged(value int) {

	C.QAbstractItemView_virtualbase_verticalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QAbstractItemView) OnVerticalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QAbstractItemView_override_virtual_verticalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_verticalScrollbarValueChanged
func miqt_exec_callback_QAbstractItemView_verticalScrollbarValueChanged(self *C.QAbstractItemView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_VerticalScrollbarValueChanged, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_HorizontalScrollbarValueChanged(value int) {

	C.QAbstractItemView_virtualbase_horizontalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QAbstractItemView) OnHorizontalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QAbstractItemView_override_virtual_horizontalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_horizontalScrollbarValueChanged
func miqt_exec_callback_QAbstractItemView_horizontalScrollbarValueChanged(self *C.QAbstractItemView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_HorizontalScrollbarValueChanged, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_CloseEditor(editor *QWidget, hint QAbstractItemDelegate__EndEditHint) {

	C.QAbstractItemView_virtualbase_closeEditor(unsafe.Pointer(this.h), editor.cPointer(), (C.int)(hint))

}
func (this *QAbstractItemView) OnCloseEditor(slot func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint)) {
	ok := C.QAbstractItemView_override_virtual_closeEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_closeEditor
func miqt_exec_callback_QAbstractItemView_closeEditor(self *C.QAbstractItemView, cb C.intptr_t, editor *C.QWidget, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := (QAbstractItemDelegate__EndEditHint)(hint)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_CloseEditor, slotval1, slotval2)

}

func (this *QAbstractItemView) callVirtualBase_CommitData(editor *QWidget) {

	C.QAbstractItemView_virtualbase_commitData(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QAbstractItemView) OnCommitData(slot func(super func(editor *QWidget), editor *QWidget)) {
	ok := C.QAbstractItemView_override_virtual_commitData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_commitData
func miqt_exec_callback_QAbstractItemView_commitData(self *C.QAbstractItemView, cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget), editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_CommitData, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_EditorDestroyed(editor *QObject) {

	C.QAbstractItemView_virtualbase_editorDestroyed(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QAbstractItemView) OnEditorDestroyed(slot func(super func(editor *QObject), editor *QObject)) {
	ok := C.QAbstractItemView_override_virtual_editorDestroyed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_editorDestroyed
func miqt_exec_callback_QAbstractItemView_editorDestroyed(self *C.QAbstractItemView, cb C.intptr_t, editor *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QObject), editor *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(editor)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_EditorDestroyed, slotval1)

}
func (this *QAbstractItemView) OnMoveCursor(slot func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex) {
	ok := C.QAbstractItemView_override_virtual_moveCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_moveCursor
func miqt_exec_callback_QAbstractItemView_moveCursor(self *C.QAbstractItemView, cb C.intptr_t, cursorAction C.int, modifiers C.int) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractItemView__CursorAction)(cursorAction)

	slotval2 := (KeyboardModifier)(modifiers)

	virtualReturn := gofunc(slotval1, slotval2)

	return virtualReturn.cPointer()

}
func (this *QAbstractItemView) OnHorizontalOffset(slot func() int) {
	ok := C.QAbstractItemView_override_virtual_horizontalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_horizontalOffset
func miqt_exec_callback_QAbstractItemView_horizontalOffset(self *C.QAbstractItemView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QAbstractItemView) OnVerticalOffset(slot func() int) {
	ok := C.QAbstractItemView_override_virtual_verticalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_verticalOffset
func miqt_exec_callback_QAbstractItemView_verticalOffset(self *C.QAbstractItemView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QAbstractItemView) OnIsIndexHidden(slot func(index *QModelIndex) bool) {
	ok := C.QAbstractItemView_override_virtual_isIndexHidden(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_isIndexHidden
func miqt_exec_callback_QAbstractItemView_isIndexHidden(self *C.QAbstractItemView, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QAbstractItemView) OnSetSelection(slot func(rect *QRect, command QItemSelectionModel__SelectionFlag)) {
	ok := C.QAbstractItemView_override_virtual_setSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_setSelection
func miqt_exec_callback_QAbstractItemView_setSelection(self *C.QAbstractItemView, cb C.intptr_t, rect *C.QRect, command C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rect *QRect, command QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(rect)

	slotval2 := (QItemSelectionModel__SelectionFlag)(command)

	gofunc(slotval1, slotval2)

}
func (this *QAbstractItemView) OnVisualRegionForSelection(slot func(selection *QItemSelection) *QRegion) {
	ok := C.QAbstractItemView_override_virtual_visualRegionForSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_visualRegionForSelection
func miqt_exec_callback_QAbstractItemView_visualRegionForSelection(self *C.QAbstractItemView, cb C.intptr_t, selection *C.QItemSelection) *C.QRegion {
	gofunc, ok := cgo.Handle(cb).Value().(func(selection *QItemSelection) *QRegion)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selection)

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemView) callVirtualBase_SelectedIndexes() []QModelIndex {

	var _ma C.struct_miqt_array = C.QAbstractItemView_virtualbase_selectedIndexes(unsafe.Pointer(this.h))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QAbstractItemView) OnSelectedIndexes(slot func(super func() []QModelIndex) []QModelIndex) {
	ok := C.QAbstractItemView_override_virtual_selectedIndexes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_selectedIndexes
func miqt_exec_callback_QAbstractItemView_selectedIndexes(self *C.QAbstractItemView, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []QModelIndex) []QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_SelectedIndexes)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QAbstractItemView) callVirtualBase_Edit2(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool {

	return (bool)(C.QAbstractItemView_virtualbase_edit2(unsafe.Pointer(this.h), index.cPointer(), (C.int)(trigger), event.cPointer()))

}
func (this *QAbstractItemView) OnEdit2(slot func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool) {
	ok := C.QAbstractItemView_override_virtual_edit2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_edit2
func miqt_exec_callback_QAbstractItemView_edit2(self *C.QAbstractItemView, cb C.intptr_t, index *C.QModelIndex, trigger C.int, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__EditTrigger)(trigger)

	slotval3 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_Edit2, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemView) callVirtualBase_SelectionCommand(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag {

	return (QItemSelectionModel__SelectionFlag)(C.QAbstractItemView_virtualbase_selectionCommand(unsafe.Pointer(this.h), index.cPointer(), event.cPointer()))

}
func (this *QAbstractItemView) OnSelectionCommand(slot func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag) {
	ok := C.QAbstractItemView_override_virtual_selectionCommand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_selectionCommand
func miqt_exec_callback_QAbstractItemView_selectionCommand(self *C.QAbstractItemView, cb C.intptr_t, index *C.QModelIndex, event *C.QEvent) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_SelectionCommand, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QAbstractItemView) callVirtualBase_StartDrag(supportedActions DropAction) {

	C.QAbstractItemView_virtualbase_startDrag(unsafe.Pointer(this.h), (C.int)(supportedActions))

}
func (this *QAbstractItemView) OnStartDrag(slot func(super func(supportedActions DropAction), supportedActions DropAction)) {
	ok := C.QAbstractItemView_override_virtual_startDrag(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_startDrag
func miqt_exec_callback_QAbstractItemView_startDrag(self *C.QAbstractItemView, cb C.intptr_t, supportedActions C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(supportedActions DropAction), supportedActions DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(supportedActions)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_StartDrag, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_InitViewItemOption(option *QStyleOptionViewItem) {

	C.QAbstractItemView_virtualbase_initViewItemOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QAbstractItemView) OnInitViewItemOption(slot func(super func(option *QStyleOptionViewItem), option *QStyleOptionViewItem)) {
	ok := C.QAbstractItemView_override_virtual_initViewItemOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_initViewItemOption
func miqt_exec_callback_QAbstractItemView_initViewItemOption(self *C.QAbstractItemView, cb C.intptr_t, option *C.QStyleOptionViewItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionViewItem), option *QStyleOptionViewItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionViewItem(option)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_InitViewItemOption, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QAbstractItemView_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QAbstractItemView) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QAbstractItemView_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_focusNextPrevChild
func miqt_exec_callback_QAbstractItemView_focusNextPrevChild(self *C.QAbstractItemView, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemView) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QAbstractItemView_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAbstractItemView) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QAbstractItemView_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_event
func miqt_exec_callback_QAbstractItemView_event(self *C.QAbstractItemView, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemView) callVirtualBase_ViewportEvent(event *QEvent) bool {

	return (bool)(C.QAbstractItemView_virtualbase_viewportEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAbstractItemView) OnViewportEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QAbstractItemView_override_virtual_viewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_viewportEvent
func miqt_exec_callback_QAbstractItemView_viewportEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemView) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QAbstractItemView_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QAbstractItemView_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_mousePressEvent
func miqt_exec_callback_QAbstractItemView_mousePressEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QAbstractItemView_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QAbstractItemView_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_mouseMoveEvent
func miqt_exec_callback_QAbstractItemView_mouseMoveEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QAbstractItemView_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QAbstractItemView_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_mouseReleaseEvent
func miqt_exec_callback_QAbstractItemView_mouseReleaseEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QAbstractItemView_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QAbstractItemView_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_mouseDoubleClickEvent
func miqt_exec_callback_QAbstractItemView_mouseDoubleClickEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QAbstractItemView_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QAbstractItemView_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_dragEnterEvent
func miqt_exec_callback_QAbstractItemView_dragEnterEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QAbstractItemView_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QAbstractItemView_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_dragMoveEvent
func miqt_exec_callback_QAbstractItemView_dragMoveEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QAbstractItemView_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QAbstractItemView_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_dragLeaveEvent
func miqt_exec_callback_QAbstractItemView_dragLeaveEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QAbstractItemView_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QAbstractItemView_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_dropEvent
func miqt_exec_callback_QAbstractItemView_dropEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QAbstractItemView_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QAbstractItemView_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_focusInEvent
func miqt_exec_callback_QAbstractItemView_focusInEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QAbstractItemView_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QAbstractItemView_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_focusOutEvent
func miqt_exec_callback_QAbstractItemView_focusOutEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QAbstractItemView_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QAbstractItemView_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_keyPressEvent
func miqt_exec_callback_QAbstractItemView_keyPressEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QAbstractItemView_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QAbstractItemView_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_resizeEvent
func miqt_exec_callback_QAbstractItemView_resizeEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QAbstractItemView_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QAbstractItemView_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_timerEvent
func miqt_exec_callback_QAbstractItemView_timerEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QAbstractItemView_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QAbstractItemView_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_inputMethodEvent
func miqt_exec_callback_QAbstractItemView_inputMethodEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QAbstractItemView_virtualbase_eventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QAbstractItemView) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QAbstractItemView_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_eventFilter
func miqt_exec_callback_QAbstractItemView_eventFilter(self *C.QAbstractItemView, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemView) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QAbstractItemView_virtualbase_viewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractItemView) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QAbstractItemView_override_virtual_viewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_viewportSizeHint
func miqt_exec_callback_QAbstractItemView_viewportSizeHint(self *C.QAbstractItemView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemView) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QAbstractItemView_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractItemView) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QAbstractItemView_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_minimumSizeHint
func miqt_exec_callback_QAbstractItemView_minimumSizeHint(self *C.QAbstractItemView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemView) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QAbstractItemView_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractItemView) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QAbstractItemView_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_sizeHint
func miqt_exec_callback_QAbstractItemView_sizeHint(self *C.QAbstractItemView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemView) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QAbstractItemView_virtualbase_setupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QAbstractItemView) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QAbstractItemView_override_virtual_setupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_setupViewport
func miqt_exec_callback_QAbstractItemView_setupViewport(self *C.QAbstractItemView, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QAbstractItemView_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractItemView) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QAbstractItemView_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_paintEvent
func miqt_exec_callback_QAbstractItemView_paintEvent(self *C.QAbstractItemView, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QAbstractItemView_virtualbase_wheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractItemView) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QAbstractItemView_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_wheelEvent
func miqt_exec_callback_QAbstractItemView_wheelEvent(self *C.QAbstractItemView, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QAbstractItemView_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractItemView) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QAbstractItemView_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_contextMenuEvent
func miqt_exec_callback_QAbstractItemView_contextMenuEvent(self *C.QAbstractItemView, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QAbstractItemView_virtualbase_scrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QAbstractItemView) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QAbstractItemView_override_virtual_scrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_scrollContentsBy
func miqt_exec_callback_QAbstractItemView_scrollContentsBy(self *C.QAbstractItemView, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QAbstractItemView) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QAbstractItemView_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractItemView) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QAbstractItemView_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_changeEvent
func miqt_exec_callback_QAbstractItemView_changeEvent(self *C.QAbstractItemView, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_InitStyleOption(option *QStyleOptionFrame) {

	C.QAbstractItemView_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QAbstractItemView) OnInitStyleOption(slot func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame)) {
	ok := C.QAbstractItemView_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_initStyleOption
func miqt_exec_callback_QAbstractItemView_initStyleOption(self *C.QAbstractItemView, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionFrame(option)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_DevType() int {

	return (int)(C.QAbstractItemView_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QAbstractItemView) OnDevType(slot func(super func() int) int) {
	ok := C.QAbstractItemView_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_devType
func miqt_exec_callback_QAbstractItemView_devType(self *C.QAbstractItemView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QAbstractItemView) callVirtualBase_SetVisible(visible bool) {

	C.QAbstractItemView_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QAbstractItemView) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QAbstractItemView_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_setVisible
func miqt_exec_callback_QAbstractItemView_setVisible(self *C.QAbstractItemView, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QAbstractItemView_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QAbstractItemView) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QAbstractItemView_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_heightForWidth
func miqt_exec_callback_QAbstractItemView_heightForWidth(self *C.QAbstractItemView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QAbstractItemView) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QAbstractItemView_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QAbstractItemView) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QAbstractItemView_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_hasHeightForWidth
func miqt_exec_callback_QAbstractItemView_hasHeightForWidth(self *C.QAbstractItemView, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemView) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QAbstractItemView_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QAbstractItemView) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QAbstractItemView_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_paintEngine
func miqt_exec_callback_QAbstractItemView_paintEngine(self *C.QAbstractItemView, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemView) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QAbstractItemView_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QAbstractItemView_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_keyReleaseEvent
func miqt_exec_callback_QAbstractItemView_keyReleaseEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QAbstractItemView_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QAbstractItemView_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_enterEvent
func miqt_exec_callback_QAbstractItemView_enterEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QAbstractItemView_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAbstractItemView_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_leaveEvent
func miqt_exec_callback_QAbstractItemView_leaveEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QAbstractItemView_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QAbstractItemView_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_moveEvent
func miqt_exec_callback_QAbstractItemView_moveEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QAbstractItemView_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QAbstractItemView_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_closeEvent
func miqt_exec_callback_QAbstractItemView_closeEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QAbstractItemView_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QAbstractItemView_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_tabletEvent
func miqt_exec_callback_QAbstractItemView_tabletEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QAbstractItemView_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QAbstractItemView_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_actionEvent
func miqt_exec_callback_QAbstractItemView_actionEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QAbstractItemView_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QAbstractItemView_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_showEvent
func miqt_exec_callback_QAbstractItemView_showEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QAbstractItemView_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QAbstractItemView_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_hideEvent
func miqt_exec_callback_QAbstractItemView_hideEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QAbstractItemView_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QAbstractItemView) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QAbstractItemView_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_nativeEvent
func miqt_exec_callback_QAbstractItemView_nativeEvent(self *C.QAbstractItemView, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemView) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QAbstractItemView_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QAbstractItemView) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QAbstractItemView_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_metric
func miqt_exec_callback_QAbstractItemView_metric(self *C.QAbstractItemView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QAbstractItemView) callVirtualBase_InitPainter(painter *QPainter) {

	C.QAbstractItemView_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QAbstractItemView) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QAbstractItemView_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_initPainter
func miqt_exec_callback_QAbstractItemView_initPainter(self *C.QAbstractItemView, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QAbstractItemView_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QAbstractItemView) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QAbstractItemView_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_redirected
func miqt_exec_callback_QAbstractItemView_redirected(self *C.QAbstractItemView, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemView) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QAbstractItemView_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QAbstractItemView) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QAbstractItemView_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_sharedPainter
func miqt_exec_callback_QAbstractItemView_sharedPainter(self *C.QAbstractItemView, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemView) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAbstractItemView_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QAbstractItemView_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_childEvent
func miqt_exec_callback_QAbstractItemView_childEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAbstractItemView_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAbstractItemView_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_customEvent
func miqt_exec_callback_QAbstractItemView_customEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAbstractItemView_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractItemView) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAbstractItemView_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_connectNotify
func miqt_exec_callback_QAbstractItemView_connectNotify(self *C.QAbstractItemView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAbstractItemView_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractItemView) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAbstractItemView_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemView_disconnectNotify
func miqt_exec_callback_QAbstractItemView_disconnectNotify(self *C.QAbstractItemView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAbstractItemView) Delete() {
	C.QAbstractItemView_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractItemView) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractItemView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
