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
	h          *C.QAbstractItemView
	isSubclass bool
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
func newQAbstractItemView(h *C.QAbstractItemView, h_QAbstractScrollArea *C.QAbstractScrollArea, h_QFrame *C.QFrame, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QAbstractItemView {
	if h == nil {
		return nil
	}
	return &QAbstractItemView{h: h,
		QAbstractScrollArea: newQAbstractScrollArea(h_QAbstractScrollArea, h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQAbstractItemView constructs the type using only unsafe pointers.
func UnsafeNewQAbstractItemView(h unsafe.Pointer, h_QAbstractScrollArea unsafe.Pointer, h_QFrame unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QAbstractItemView {
	if h == nil {
		return nil
	}

	return &QAbstractItemView{h: (*C.QAbstractItemView)(h),
		QAbstractScrollArea: UnsafeNewQAbstractScrollArea(h_QAbstractScrollArea, h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQAbstractItemView constructs a new QAbstractItemView object.
func NewQAbstractItemView(parent *QWidget) *QAbstractItemView {
	var outptr_QAbstractItemView *C.QAbstractItemView = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QAbstractItemView_new(parent.cPointer(), &outptr_QAbstractItemView, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQAbstractItemView(outptr_QAbstractItemView, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQAbstractItemView2 constructs a new QAbstractItemView object.
func NewQAbstractItemView2() *QAbstractItemView {
	var outptr_QAbstractItemView *C.QAbstractItemView = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QAbstractItemView_new2(&outptr_QAbstractItemView, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQAbstractItemView(outptr_QAbstractItemView, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QAbstractItemView) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractItemView_MetaObject(this.h)))
}

func (this *QAbstractItemView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractItemView_Metacast(this.h, param1_Cstring))
}

func QAbstractItemView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemView_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractItemView) SetModel(model *QAbstractItemModel) {
	C.QAbstractItemView_SetModel(this.h, model.cPointer())
}

func (this *QAbstractItemView) Model() *QAbstractItemModel {
	return UnsafeNewQAbstractItemModel(unsafe.Pointer(C.QAbstractItemView_Model(this.h)), nil)
}

func (this *QAbstractItemView) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QAbstractItemView_SetSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QAbstractItemView) SelectionModel() *QItemSelectionModel {
	return UnsafeNewQItemSelectionModel(unsafe.Pointer(C.QAbstractItemView_SelectionModel(this.h)), nil)
}

func (this *QAbstractItemView) SetItemDelegate(delegate *QAbstractItemDelegate) {
	C.QAbstractItemView_SetItemDelegate(this.h, delegate.cPointer())
}

func (this *QAbstractItemView) ItemDelegate() *QAbstractItemDelegate {
	return UnsafeNewQAbstractItemDelegate(unsafe.Pointer(C.QAbstractItemView_ItemDelegate(this.h)), nil)
}

func (this *QAbstractItemView) SetSelectionMode(mode QAbstractItemView__SelectionMode) {
	C.QAbstractItemView_SetSelectionMode(this.h, (C.int)(mode))
}

func (this *QAbstractItemView) SelectionMode() QAbstractItemView__SelectionMode {
	return (QAbstractItemView__SelectionMode)(C.QAbstractItemView_SelectionMode(this.h))
}

func (this *QAbstractItemView) SetSelectionBehavior(behavior QAbstractItemView__SelectionBehavior) {
	C.QAbstractItemView_SetSelectionBehavior(this.h, (C.int)(behavior))
}

func (this *QAbstractItemView) SelectionBehavior() QAbstractItemView__SelectionBehavior {
	return (QAbstractItemView__SelectionBehavior)(C.QAbstractItemView_SelectionBehavior(this.h))
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

func (this *QAbstractItemView) SetEditTriggers(triggers QAbstractItemView__EditTrigger) {
	C.QAbstractItemView_SetEditTriggers(this.h, (C.int)(triggers))
}

func (this *QAbstractItemView) EditTriggers() QAbstractItemView__EditTrigger {
	return (QAbstractItemView__EditTrigger)(C.QAbstractItemView_EditTriggers(this.h))
}

func (this *QAbstractItemView) SetVerticalScrollMode(mode QAbstractItemView__ScrollMode) {
	C.QAbstractItemView_SetVerticalScrollMode(this.h, (C.int)(mode))
}

func (this *QAbstractItemView) VerticalScrollMode() QAbstractItemView__ScrollMode {
	return (QAbstractItemView__ScrollMode)(C.QAbstractItemView_VerticalScrollMode(this.h))
}

func (this *QAbstractItemView) ResetVerticalScrollMode() {
	C.QAbstractItemView_ResetVerticalScrollMode(this.h)
}

func (this *QAbstractItemView) SetHorizontalScrollMode(mode QAbstractItemView__ScrollMode) {
	C.QAbstractItemView_SetHorizontalScrollMode(this.h, (C.int)(mode))
}

func (this *QAbstractItemView) HorizontalScrollMode() QAbstractItemView__ScrollMode {
	return (QAbstractItemView__ScrollMode)(C.QAbstractItemView_HorizontalScrollMode(this.h))
}

func (this *QAbstractItemView) ResetHorizontalScrollMode() {
	C.QAbstractItemView_ResetHorizontalScrollMode(this.h)
}

func (this *QAbstractItemView) SetAutoScroll(enable bool) {
	C.QAbstractItemView_SetAutoScroll(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) HasAutoScroll() bool {
	return (bool)(C.QAbstractItemView_HasAutoScroll(this.h))
}

func (this *QAbstractItemView) SetAutoScrollMargin(margin int) {
	C.QAbstractItemView_SetAutoScrollMargin(this.h, (C.int)(margin))
}

func (this *QAbstractItemView) AutoScrollMargin() int {
	return (int)(C.QAbstractItemView_AutoScrollMargin(this.h))
}

func (this *QAbstractItemView) SetTabKeyNavigation(enable bool) {
	C.QAbstractItemView_SetTabKeyNavigation(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) TabKeyNavigation() bool {
	return (bool)(C.QAbstractItemView_TabKeyNavigation(this.h))
}

func (this *QAbstractItemView) SetDropIndicatorShown(enable bool) {
	C.QAbstractItemView_SetDropIndicatorShown(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) ShowDropIndicator() bool {
	return (bool)(C.QAbstractItemView_ShowDropIndicator(this.h))
}

func (this *QAbstractItemView) SetDragEnabled(enable bool) {
	C.QAbstractItemView_SetDragEnabled(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) DragEnabled() bool {
	return (bool)(C.QAbstractItemView_DragEnabled(this.h))
}

func (this *QAbstractItemView) SetDragDropOverwriteMode(overwrite bool) {
	C.QAbstractItemView_SetDragDropOverwriteMode(this.h, (C.bool)(overwrite))
}

func (this *QAbstractItemView) DragDropOverwriteMode() bool {
	return (bool)(C.QAbstractItemView_DragDropOverwriteMode(this.h))
}

func (this *QAbstractItemView) SetDragDropMode(behavior QAbstractItemView__DragDropMode) {
	C.QAbstractItemView_SetDragDropMode(this.h, (C.int)(behavior))
}

func (this *QAbstractItemView) DragDropMode() QAbstractItemView__DragDropMode {
	return (QAbstractItemView__DragDropMode)(C.QAbstractItemView_DragDropMode(this.h))
}

func (this *QAbstractItemView) SetDefaultDropAction(dropAction DropAction) {
	C.QAbstractItemView_SetDefaultDropAction(this.h, (C.int)(dropAction))
}

func (this *QAbstractItemView) DefaultDropAction() DropAction {
	return (DropAction)(C.QAbstractItemView_DefaultDropAction(this.h))
}

func (this *QAbstractItemView) SetAlternatingRowColors(enable bool) {
	C.QAbstractItemView_SetAlternatingRowColors(this.h, (C.bool)(enable))
}

func (this *QAbstractItemView) AlternatingRowColors() bool {
	return (bool)(C.QAbstractItemView_AlternatingRowColors(this.h))
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
	C.QAbstractItemView_SetTextElideMode(this.h, (C.int)(mode))
}

func (this *QAbstractItemView) TextElideMode() TextElideMode {
	return (TextElideMode)(C.QAbstractItemView_TextElideMode(this.h))
}

func (this *QAbstractItemView) KeyboardSearch(search string) {
	search_ms := C.struct_miqt_string{}
	search_ms.data = C.CString(search)
	search_ms.len = C.size_t(len(search))
	defer C.free(unsafe.Pointer(search_ms.data))
	C.QAbstractItemView_KeyboardSearch(this.h, search_ms)
}

func (this *QAbstractItemView) VisualRect(index *QModelIndex) *QRect {
	_ret := C.QAbstractItemView_VisualRect(this.h, index.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemView) ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {
	C.QAbstractItemView_ScrollTo(this.h, index.cPointer(), (C.int)(hint))
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
	return (int)(C.QAbstractItemView_SizeHintForRow(this.h, (C.int)(row)))
}

func (this *QAbstractItemView) SizeHintForColumn(column int) int {
	return (int)(C.QAbstractItemView_SizeHintForColumn(this.h, (C.int)(column)))
}

func (this *QAbstractItemView) OpenPersistentEditor(index *QModelIndex) {
	C.QAbstractItemView_OpenPersistentEditor(this.h, index.cPointer())
}

func (this *QAbstractItemView) ClosePersistentEditor(index *QModelIndex) {
	C.QAbstractItemView_ClosePersistentEditor(this.h, index.cPointer())
}

func (this *QAbstractItemView) IsPersistentEditorOpen(index *QModelIndex) bool {
	return (bool)(C.QAbstractItemView_IsPersistentEditorOpen(this.h, index.cPointer()))
}

func (this *QAbstractItemView) SetIndexWidget(index *QModelIndex, widget *QWidget) {
	C.QAbstractItemView_SetIndexWidget(this.h, index.cPointer(), widget.cPointer())
}

func (this *QAbstractItemView) IndexWidget(index *QModelIndex) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QAbstractItemView_IndexWidget(this.h, index.cPointer())), nil, nil)
}

func (this *QAbstractItemView) SetItemDelegateForRow(row int, delegate *QAbstractItemDelegate) {
	C.QAbstractItemView_SetItemDelegateForRow(this.h, (C.int)(row), delegate.cPointer())
}

func (this *QAbstractItemView) ItemDelegateForRow(row int) *QAbstractItemDelegate {
	return UnsafeNewQAbstractItemDelegate(unsafe.Pointer(C.QAbstractItemView_ItemDelegateForRow(this.h, (C.int)(row))), nil)
}

func (this *QAbstractItemView) SetItemDelegateForColumn(column int, delegate *QAbstractItemDelegate) {
	C.QAbstractItemView_SetItemDelegateForColumn(this.h, (C.int)(column), delegate.cPointer())
}

func (this *QAbstractItemView) ItemDelegateForColumn(column int) *QAbstractItemDelegate {
	return UnsafeNewQAbstractItemDelegate(unsafe.Pointer(C.QAbstractItemView_ItemDelegateForColumn(this.h, (C.int)(column))), nil)
}

func (this *QAbstractItemView) ItemDelegateWithIndex(index *QModelIndex) *QAbstractItemDelegate {
	return UnsafeNewQAbstractItemDelegate(unsafe.Pointer(C.QAbstractItemView_ItemDelegateWithIndex(this.h, index.cPointer())), nil)
}

func (this *QAbstractItemView) ItemDelegateForIndex(index *QModelIndex) *QAbstractItemDelegate {
	return UnsafeNewQAbstractItemDelegate(unsafe.Pointer(C.QAbstractItemView_ItemDelegateForIndex(this.h, index.cPointer())), nil)
}

func (this *QAbstractItemView) InputMethodQuery(query InputMethodQuery) *QVariant {
	_ret := C.QAbstractItemView_InputMethodQuery(this.h, (C.int)(query))
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
	C.QAbstractItemView_connect_Pressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_Pressed
func miqt_exec_callback_QAbstractItemView_Pressed(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	gofunc(slotval1)
}

func (this *QAbstractItemView) Clicked(index *QModelIndex) {
	C.QAbstractItemView_Clicked(this.h, index.cPointer())
}
func (this *QAbstractItemView) OnClicked(slot func(index *QModelIndex)) {
	C.QAbstractItemView_connect_Clicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_Clicked
func miqt_exec_callback_QAbstractItemView_Clicked(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	gofunc(slotval1)
}

func (this *QAbstractItemView) DoubleClicked(index *QModelIndex) {
	C.QAbstractItemView_DoubleClicked(this.h, index.cPointer())
}
func (this *QAbstractItemView) OnDoubleClicked(slot func(index *QModelIndex)) {
	C.QAbstractItemView_connect_DoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_DoubleClicked
func miqt_exec_callback_QAbstractItemView_DoubleClicked(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	gofunc(slotval1)
}

func (this *QAbstractItemView) Activated(index *QModelIndex) {
	C.QAbstractItemView_Activated(this.h, index.cPointer())
}
func (this *QAbstractItemView) OnActivated(slot func(index *QModelIndex)) {
	C.QAbstractItemView_connect_Activated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_Activated
func miqt_exec_callback_QAbstractItemView_Activated(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	gofunc(slotval1)
}

func (this *QAbstractItemView) Entered(index *QModelIndex) {
	C.QAbstractItemView_Entered(this.h, index.cPointer())
}
func (this *QAbstractItemView) OnEntered(slot func(index *QModelIndex)) {
	C.QAbstractItemView_connect_Entered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_Entered
func miqt_exec_callback_QAbstractItemView_Entered(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	gofunc(slotval1)
}

func (this *QAbstractItemView) ViewportEntered() {
	C.QAbstractItemView_ViewportEntered(this.h)
}
func (this *QAbstractItemView) OnViewportEntered(slot func()) {
	C.QAbstractItemView_connect_ViewportEntered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_ViewportEntered
func miqt_exec_callback_QAbstractItemView_ViewportEntered(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QAbstractItemView) IconSizeChanged(size *QSize) {
	C.QAbstractItemView_IconSizeChanged(this.h, size.cPointer())
}
func (this *QAbstractItemView) OnIconSizeChanged(slot func(size *QSize)) {
	C.QAbstractItemView_connect_IconSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_IconSizeChanged
func miqt_exec_callback_QAbstractItemView_IconSizeChanged(cb C.intptr_t, size *C.QSize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(size *QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQSize(unsafe.Pointer(size))

	gofunc(slotval1)
}

func QAbstractItemView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemView_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractItemView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemView_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractItemView) callVirtualBase_SetModel(model *QAbstractItemModel) {

	C.QAbstractItemView_virtualbase_SetModel(unsafe.Pointer(this.h), model.cPointer())

}
func (this *QAbstractItemView) OnSetModel(slot func(super func(model *QAbstractItemModel), model *QAbstractItemModel)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_SetModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_SetModel
func miqt_exec_callback_QAbstractItemView_SetModel(self *C.QAbstractItemView, cb C.intptr_t, model *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(model *QAbstractItemModel), model *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQAbstractItemModel(unsafe.Pointer(model), nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_SetModel, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_SetSelectionModel(selectionModel *QItemSelectionModel) {

	C.QAbstractItemView_virtualbase_SetSelectionModel(unsafe.Pointer(this.h), selectionModel.cPointer())

}
func (this *QAbstractItemView) OnSetSelectionModel(slot func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_SetSelectionModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_SetSelectionModel
func miqt_exec_callback_QAbstractItemView_SetSelectionModel(self *C.QAbstractItemView, cb C.intptr_t, selectionModel *C.QItemSelectionModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQItemSelectionModel(unsafe.Pointer(selectionModel), nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_SetSelectionModel, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_KeyboardSearch(search string) {
	search_ms := C.struct_miqt_string{}
	search_ms.data = C.CString(search)
	search_ms.len = C.size_t(len(search))
	defer C.free(unsafe.Pointer(search_ms.data))

	C.QAbstractItemView_virtualbase_KeyboardSearch(unsafe.Pointer(this.h), search_ms)

}
func (this *QAbstractItemView) OnKeyboardSearch(slot func(super func(search string), search string)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_KeyboardSearch(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_KeyboardSearch
func miqt_exec_callback_QAbstractItemView_KeyboardSearch(self *C.QAbstractItemView, cb C.intptr_t, search C.struct_miqt_string) {
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_VisualRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_VisualRect
func miqt_exec_callback_QAbstractItemView_VisualRect(self *C.QAbstractItemView, cb C.intptr_t, index *C.QModelIndex) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}
func (this *QAbstractItemView) OnScrollTo(slot func(index *QModelIndex, hint QAbstractItemView__ScrollHint)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_ScrollTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_ScrollTo
func miqt_exec_callback_QAbstractItemView_ScrollTo(self *C.QAbstractItemView, cb C.intptr_t, index *C.QModelIndex, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex, hint QAbstractItemView__ScrollHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))
	slotval2 := (QAbstractItemView__ScrollHint)(hint)

	gofunc(slotval1, slotval2)

}
func (this *QAbstractItemView) OnIndexAt(slot func(point *QPoint) *QModelIndex) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_IndexAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_IndexAt
func miqt_exec_callback_QAbstractItemView_IndexAt(self *C.QAbstractItemView, cb C.intptr_t, point *C.QPoint) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(point *QPoint) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPoint(unsafe.Pointer(point))

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemView) callVirtualBase_SizeHintForRow(row int) int {

	return (int)(C.QAbstractItemView_virtualbase_SizeHintForRow(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QAbstractItemView) OnSizeHintForRow(slot func(super func(row int) int, row int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_SizeHintForRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_SizeHintForRow
func miqt_exec_callback_QAbstractItemView_SizeHintForRow(self *C.QAbstractItemView, cb C.intptr_t, row C.int) C.int {
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

	return (int)(C.QAbstractItemView_virtualbase_SizeHintForColumn(unsafe.Pointer(this.h), (C.int)(column)))

}
func (this *QAbstractItemView) OnSizeHintForColumn(slot func(super func(column int) int, column int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_SizeHintForColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_SizeHintForColumn
func miqt_exec_callback_QAbstractItemView_SizeHintForColumn(self *C.QAbstractItemView, cb C.intptr_t, column C.int) C.int {
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

	return UnsafeNewQAbstractItemDelegate(unsafe.Pointer(C.QAbstractItemView_virtualbase_ItemDelegateForIndex(unsafe.Pointer(this.h), index.cPointer())), nil)
}
func (this *QAbstractItemView) OnItemDelegateForIndex(slot func(super func(index *QModelIndex) *QAbstractItemDelegate, index *QModelIndex) *QAbstractItemDelegate) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_ItemDelegateForIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_ItemDelegateForIndex
func miqt_exec_callback_QAbstractItemView_ItemDelegateForIndex(self *C.QAbstractItemView, cb C.intptr_t, index *C.QModelIndex) *C.QAbstractItemDelegate {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QAbstractItemDelegate, index *QModelIndex) *QAbstractItemDelegate)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_ItemDelegateForIndex, slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemView) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_ret := C.QAbstractItemView_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractItemView) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_InputMethodQuery
func miqt_exec_callback_QAbstractItemView_InputMethodQuery(self *C.QAbstractItemView, cb C.intptr_t, query C.int) *C.QVariant {
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

	C.QAbstractItemView_virtualbase_Reset(unsafe.Pointer(this.h))

}
func (this *QAbstractItemView) OnReset(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_Reset
func miqt_exec_callback_QAbstractItemView_Reset(self *C.QAbstractItemView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_Reset)

}

func (this *QAbstractItemView) callVirtualBase_SetRootIndex(index *QModelIndex) {

	C.QAbstractItemView_virtualbase_SetRootIndex(unsafe.Pointer(this.h), index.cPointer())

}
func (this *QAbstractItemView) OnSetRootIndex(slot func(super func(index *QModelIndex), index *QModelIndex)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_SetRootIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_SetRootIndex
func miqt_exec_callback_QAbstractItemView_SetRootIndex(self *C.QAbstractItemView, cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex), index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_SetRootIndex, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_DoItemsLayout() {

	C.QAbstractItemView_virtualbase_DoItemsLayout(unsafe.Pointer(this.h))

}
func (this *QAbstractItemView) OnDoItemsLayout(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_DoItemsLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_DoItemsLayout
func miqt_exec_callback_QAbstractItemView_DoItemsLayout(self *C.QAbstractItemView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_DoItemsLayout)

}

func (this *QAbstractItemView) callVirtualBase_SelectAll() {

	C.QAbstractItemView_virtualbase_SelectAll(unsafe.Pointer(this.h))

}
func (this *QAbstractItemView) OnSelectAll(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_SelectAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_SelectAll
func miqt_exec_callback_QAbstractItemView_SelectAll(self *C.QAbstractItemView, cb C.intptr_t) {
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

	C.QAbstractItemView_virtualbase_DataChanged(unsafe.Pointer(this.h), topLeft.cPointer(), bottomRight.cPointer(), roles_ma)

}
func (this *QAbstractItemView) OnDataChanged(slot func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_DataChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_DataChanged
func miqt_exec_callback_QAbstractItemView_DataChanged(self *C.QAbstractItemView, cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles C.struct_miqt_array) {
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

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_DataChanged, slotval1, slotval2, slotval3)

}

func (this *QAbstractItemView) callVirtualBase_RowsInserted(parent *QModelIndex, start int, end int) {

	C.QAbstractItemView_virtualbase_RowsInserted(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QAbstractItemView) OnRowsInserted(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_RowsInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_RowsInserted
func miqt_exec_callback_QAbstractItemView_RowsInserted(self *C.QAbstractItemView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(parent))
	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_RowsInserted, slotval1, slotval2, slotval3)

}

func (this *QAbstractItemView) callVirtualBase_RowsAboutToBeRemoved(parent *QModelIndex, start int, end int) {

	C.QAbstractItemView_virtualbase_RowsAboutToBeRemoved(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QAbstractItemView) OnRowsAboutToBeRemoved(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_RowsAboutToBeRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_RowsAboutToBeRemoved
func miqt_exec_callback_QAbstractItemView_RowsAboutToBeRemoved(self *C.QAbstractItemView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(parent))
	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_RowsAboutToBeRemoved, slotval1, slotval2, slotval3)

}

func (this *QAbstractItemView) callVirtualBase_SelectionChanged(selected *QItemSelection, deselected *QItemSelection) {

	C.QAbstractItemView_virtualbase_SelectionChanged(unsafe.Pointer(this.h), selected.cPointer(), deselected.cPointer())

}
func (this *QAbstractItemView) OnSelectionChanged(slot func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_SelectionChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_SelectionChanged
func miqt_exec_callback_QAbstractItemView_SelectionChanged(self *C.QAbstractItemView, cb C.intptr_t, selected *C.QItemSelection, deselected *C.QItemSelection) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQItemSelection(unsafe.Pointer(selected))
	slotval2 := UnsafeNewQItemSelection(unsafe.Pointer(deselected))

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_SelectionChanged, slotval1, slotval2)

}

func (this *QAbstractItemView) callVirtualBase_CurrentChanged(current *QModelIndex, previous *QModelIndex) {

	C.QAbstractItemView_virtualbase_CurrentChanged(unsafe.Pointer(this.h), current.cPointer(), previous.cPointer())

}
func (this *QAbstractItemView) OnCurrentChanged(slot func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_CurrentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_CurrentChanged
func miqt_exec_callback_QAbstractItemView_CurrentChanged(self *C.QAbstractItemView, cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(current))
	slotval2 := UnsafeNewQModelIndex(unsafe.Pointer(previous))

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_CurrentChanged, slotval1, slotval2)

}

func (this *QAbstractItemView) callVirtualBase_UpdateEditorData() {

	C.QAbstractItemView_virtualbase_UpdateEditorData(unsafe.Pointer(this.h))

}
func (this *QAbstractItemView) OnUpdateEditorData(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_UpdateEditorData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_UpdateEditorData
func miqt_exec_callback_QAbstractItemView_UpdateEditorData(self *C.QAbstractItemView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_UpdateEditorData)

}

func (this *QAbstractItemView) callVirtualBase_UpdateEditorGeometries() {

	C.QAbstractItemView_virtualbase_UpdateEditorGeometries(unsafe.Pointer(this.h))

}
func (this *QAbstractItemView) OnUpdateEditorGeometries(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_UpdateEditorGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_UpdateEditorGeometries
func miqt_exec_callback_QAbstractItemView_UpdateEditorGeometries(self *C.QAbstractItemView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_UpdateEditorGeometries)

}

func (this *QAbstractItemView) callVirtualBase_UpdateGeometries() {

	C.QAbstractItemView_virtualbase_UpdateGeometries(unsafe.Pointer(this.h))

}
func (this *QAbstractItemView) OnUpdateGeometries(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_UpdateGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_UpdateGeometries
func miqt_exec_callback_QAbstractItemView_UpdateGeometries(self *C.QAbstractItemView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_UpdateGeometries)

}

func (this *QAbstractItemView) callVirtualBase_VerticalScrollbarAction(action int) {

	C.QAbstractItemView_virtualbase_VerticalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QAbstractItemView) OnVerticalScrollbarAction(slot func(super func(action int), action int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_VerticalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_VerticalScrollbarAction
func miqt_exec_callback_QAbstractItemView_VerticalScrollbarAction(self *C.QAbstractItemView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_VerticalScrollbarAction, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_HorizontalScrollbarAction(action int) {

	C.QAbstractItemView_virtualbase_HorizontalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QAbstractItemView) OnHorizontalScrollbarAction(slot func(super func(action int), action int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_HorizontalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_HorizontalScrollbarAction
func miqt_exec_callback_QAbstractItemView_HorizontalScrollbarAction(self *C.QAbstractItemView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_HorizontalScrollbarAction, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_VerticalScrollbarValueChanged(value int) {

	C.QAbstractItemView_virtualbase_VerticalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QAbstractItemView) OnVerticalScrollbarValueChanged(slot func(super func(value int), value int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_VerticalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_VerticalScrollbarValueChanged
func miqt_exec_callback_QAbstractItemView_VerticalScrollbarValueChanged(self *C.QAbstractItemView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_VerticalScrollbarValueChanged, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_HorizontalScrollbarValueChanged(value int) {

	C.QAbstractItemView_virtualbase_HorizontalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QAbstractItemView) OnHorizontalScrollbarValueChanged(slot func(super func(value int), value int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_HorizontalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_HorizontalScrollbarValueChanged
func miqt_exec_callback_QAbstractItemView_HorizontalScrollbarValueChanged(self *C.QAbstractItemView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_HorizontalScrollbarValueChanged, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_CloseEditor(editor *QWidget, hint QAbstractItemDelegate__EndEditHint) {

	C.QAbstractItemView_virtualbase_CloseEditor(unsafe.Pointer(this.h), editor.cPointer(), (C.int)(hint))

}
func (this *QAbstractItemView) OnCloseEditor(slot func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_CloseEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_CloseEditor
func miqt_exec_callback_QAbstractItemView_CloseEditor(self *C.QAbstractItemView, cb C.intptr_t, editor *C.QWidget, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(editor), nil, nil)
	slotval2 := (QAbstractItemDelegate__EndEditHint)(hint)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_CloseEditor, slotval1, slotval2)

}

func (this *QAbstractItemView) callVirtualBase_CommitData(editor *QWidget) {

	C.QAbstractItemView_virtualbase_CommitData(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QAbstractItemView) OnCommitData(slot func(super func(editor *QWidget), editor *QWidget)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_CommitData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_CommitData
func miqt_exec_callback_QAbstractItemView_CommitData(self *C.QAbstractItemView, cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget), editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(editor), nil, nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_CommitData, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_EditorDestroyed(editor *QObject) {

	C.QAbstractItemView_virtualbase_EditorDestroyed(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QAbstractItemView) OnEditorDestroyed(slot func(super func(editor *QObject), editor *QObject)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_EditorDestroyed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_EditorDestroyed
func miqt_exec_callback_QAbstractItemView_EditorDestroyed(self *C.QAbstractItemView, cb C.intptr_t, editor *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QObject), editor *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(editor))

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_EditorDestroyed, slotval1)

}
func (this *QAbstractItemView) OnMoveCursor(slot func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_MoveCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_MoveCursor
func miqt_exec_callback_QAbstractItemView_MoveCursor(self *C.QAbstractItemView, cb C.intptr_t, cursorAction C.int, modifiers C.int) *C.QModelIndex {
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_HorizontalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_HorizontalOffset
func miqt_exec_callback_QAbstractItemView_HorizontalOffset(self *C.QAbstractItemView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QAbstractItemView) OnVerticalOffset(slot func() int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_VerticalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_VerticalOffset
func miqt_exec_callback_QAbstractItemView_VerticalOffset(self *C.QAbstractItemView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QAbstractItemView) OnIsIndexHidden(slot func(index *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_IsIndexHidden(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_IsIndexHidden
func miqt_exec_callback_QAbstractItemView_IsIndexHidden(self *C.QAbstractItemView, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QAbstractItemView) OnSetSelection(slot func(rect *QRect, command QItemSelectionModel__SelectionFlag)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_SetSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_SetSelection
func miqt_exec_callback_QAbstractItemView_SetSelection(self *C.QAbstractItemView, cb C.intptr_t, rect *C.QRect, command C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rect *QRect, command QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRect(unsafe.Pointer(rect))
	slotval2 := (QItemSelectionModel__SelectionFlag)(command)

	gofunc(slotval1, slotval2)

}
func (this *QAbstractItemView) OnVisualRegionForSelection(slot func(selection *QItemSelection) *QRegion) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_VisualRegionForSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_VisualRegionForSelection
func miqt_exec_callback_QAbstractItemView_VisualRegionForSelection(self *C.QAbstractItemView, cb C.intptr_t, selection *C.QItemSelection) *C.QRegion {
	gofunc, ok := cgo.Handle(cb).Value().(func(selection *QItemSelection) *QRegion)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQItemSelection(unsafe.Pointer(selection))

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemView) callVirtualBase_SelectedIndexes() []QModelIndex {

	var _ma C.struct_miqt_array = C.QAbstractItemView_virtualbase_SelectedIndexes(unsafe.Pointer(this.h))
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
func (this *QAbstractItemView) OnSelectedIndexes(slot func(super func() []QModelIndex) []QModelIndex) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_SelectedIndexes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_SelectedIndexes
func miqt_exec_callback_QAbstractItemView_SelectedIndexes(self *C.QAbstractItemView, cb C.intptr_t) C.struct_miqt_array {
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

	return (bool)(C.QAbstractItemView_virtualbase_Edit2(unsafe.Pointer(this.h), index.cPointer(), (C.int)(trigger), event.cPointer()))

}
func (this *QAbstractItemView) OnEdit2(slot func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_Edit2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_Edit2
func miqt_exec_callback_QAbstractItemView_Edit2(self *C.QAbstractItemView, cb C.intptr_t, index *C.QModelIndex, trigger C.int, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))
	slotval2 := (QAbstractItemView__EditTrigger)(trigger)

	slotval3 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_Edit2, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemView) callVirtualBase_SelectionCommand(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag {

	return (QItemSelectionModel__SelectionFlag)(C.QAbstractItemView_virtualbase_SelectionCommand(unsafe.Pointer(this.h), index.cPointer(), event.cPointer()))

}
func (this *QAbstractItemView) OnSelectionCommand(slot func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_SelectionCommand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_SelectionCommand
func miqt_exec_callback_QAbstractItemView_SelectionCommand(self *C.QAbstractItemView, cb C.intptr_t, index *C.QModelIndex, event *C.QEvent) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_SelectionCommand, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QAbstractItemView) callVirtualBase_StartDrag(supportedActions DropAction) {

	C.QAbstractItemView_virtualbase_StartDrag(unsafe.Pointer(this.h), (C.int)(supportedActions))

}
func (this *QAbstractItemView) OnStartDrag(slot func(super func(supportedActions DropAction), supportedActions DropAction)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_StartDrag(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_StartDrag
func miqt_exec_callback_QAbstractItemView_StartDrag(self *C.QAbstractItemView, cb C.intptr_t, supportedActions C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(supportedActions DropAction), supportedActions DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(supportedActions)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_StartDrag, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_InitViewItemOption(option *QStyleOptionViewItem) {

	C.QAbstractItemView_virtualbase_InitViewItemOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QAbstractItemView) OnInitViewItemOption(slot func(super func(option *QStyleOptionViewItem), option *QStyleOptionViewItem)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_InitViewItemOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_InitViewItemOption
func miqt_exec_callback_QAbstractItemView_InitViewItemOption(self *C.QAbstractItemView, cb C.intptr_t, option *C.QStyleOptionViewItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionViewItem), option *QStyleOptionViewItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQStyleOptionViewItem(unsafe.Pointer(option), nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_InitViewItemOption, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QAbstractItemView_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QAbstractItemView) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_FocusNextPrevChild
func miqt_exec_callback_QAbstractItemView_FocusNextPrevChild(self *C.QAbstractItemView, cb C.intptr_t, next C.bool) C.bool {
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

	return (bool)(C.QAbstractItemView_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAbstractItemView) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_Event
func miqt_exec_callback_QAbstractItemView_Event(self *C.QAbstractItemView, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemView) callVirtualBase_ViewportEvent(event *QEvent) bool {

	return (bool)(C.QAbstractItemView_virtualbase_ViewportEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAbstractItemView) OnViewportEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_ViewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_ViewportEvent
func miqt_exec_callback_QAbstractItemView_ViewportEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemView) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QAbstractItemView_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_MousePressEvent
func miqt_exec_callback_QAbstractItemView_MousePressEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QAbstractItemView_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_MouseMoveEvent
func miqt_exec_callback_QAbstractItemView_MouseMoveEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QAbstractItemView_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_MouseReleaseEvent
func miqt_exec_callback_QAbstractItemView_MouseReleaseEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QAbstractItemView_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_MouseDoubleClickEvent
func miqt_exec_callback_QAbstractItemView_MouseDoubleClickEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(event), nil, nil, nil, nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QAbstractItemView_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_DragEnterEvent
func miqt_exec_callback_QAbstractItemView_DragEnterEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragEnterEvent(unsafe.Pointer(event), nil, nil, nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QAbstractItemView_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_DragMoveEvent
func miqt_exec_callback_QAbstractItemView_DragMoveEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QAbstractItemView_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_DragLeaveEvent
func miqt_exec_callback_QAbstractItemView_DragLeaveEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QAbstractItemView_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_DropEvent
func miqt_exec_callback_QAbstractItemView_DropEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QAbstractItemView_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_FocusInEvent
func miqt_exec_callback_QAbstractItemView_FocusInEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QAbstractItemView_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_FocusOutEvent
func miqt_exec_callback_QAbstractItemView_FocusOutEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QAbstractItemView_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_KeyPressEvent
func miqt_exec_callback_QAbstractItemView_KeyPressEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QAbstractItemView_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_ResizeEvent
func miqt_exec_callback_QAbstractItemView_ResizeEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QAbstractItemView_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_TimerEvent
func miqt_exec_callback_QAbstractItemView_TimerEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QAbstractItemView_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemView) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_InputMethodEvent
func miqt_exec_callback_QAbstractItemView_InputMethodEvent(self *C.QAbstractItemView, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QAbstractItemView_virtualbase_EventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QAbstractItemView) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_EventFilter
func miqt_exec_callback_QAbstractItemView_EventFilter(self *C.QAbstractItemView, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(object))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemView) callVirtualBase_ViewportSizeHint() *QSize {

	_ret := C.QAbstractItemView_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractItemView) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_ViewportSizeHint
func miqt_exec_callback_QAbstractItemView_ViewportSizeHint(self *C.QAbstractItemView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemView) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QAbstractItemView_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractItemView) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_MinimumSizeHint
func miqt_exec_callback_QAbstractItemView_MinimumSizeHint(self *C.QAbstractItemView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemView) callVirtualBase_SizeHint() *QSize {

	_ret := C.QAbstractItemView_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QAbstractItemView) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_SizeHint
func miqt_exec_callback_QAbstractItemView_SizeHint(self *C.QAbstractItemView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractItemView{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemView) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QAbstractItemView_virtualbase_SetupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QAbstractItemView) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_SetupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_SetupViewport
func miqt_exec_callback_QAbstractItemView_SetupViewport(self *C.QAbstractItemView, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(viewport), nil, nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QAbstractItemView_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractItemView) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_PaintEvent
func miqt_exec_callback_QAbstractItemView_PaintEvent(self *C.QAbstractItemView, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(param1), nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QAbstractItemView_virtualbase_WheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractItemView) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_WheelEvent
func miqt_exec_callback_QAbstractItemView_WheelEvent(self *C.QAbstractItemView, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(param1), nil, nil, nil, nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QAbstractItemView_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QAbstractItemView) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_ContextMenuEvent
func miqt_exec_callback_QAbstractItemView_ContextMenuEvent(self *C.QAbstractItemView, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QAbstractItemView) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QAbstractItemView_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QAbstractItemView) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QAbstractItemView_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemView_ScrollContentsBy
func miqt_exec_callback_QAbstractItemView_ScrollContentsBy(self *C.QAbstractItemView, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QAbstractItemView{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

// Delete this object from C++ memory.
func (this *QAbstractItemView) Delete() {
	C.QAbstractItemView_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractItemView) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractItemView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
