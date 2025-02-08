package qt6

/*

#include "gen_qheaderview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QHeaderView__ResizeMode int

const (
	QHeaderView__Interactive      QHeaderView__ResizeMode = 0
	QHeaderView__Stretch          QHeaderView__ResizeMode = 1
	QHeaderView__Fixed            QHeaderView__ResizeMode = 2
	QHeaderView__ResizeToContents QHeaderView__ResizeMode = 3
	QHeaderView__Custom           QHeaderView__ResizeMode = 2
)

type QHeaderView struct {
	h *C.QHeaderView
	*QAbstractItemView
}

func (this *QHeaderView) cPointer() *C.QHeaderView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHeaderView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHeaderView constructs the type using only CGO pointers.
func newQHeaderView(h *C.QHeaderView) *QHeaderView {
	if h == nil {
		return nil
	}
	var outptr_QAbstractItemView *C.QAbstractItemView = nil
	C.QHeaderView_virtbase(h, &outptr_QAbstractItemView)

	return &QHeaderView{h: h,
		QAbstractItemView: newQAbstractItemView(outptr_QAbstractItemView)}
}

// UnsafeNewQHeaderView constructs the type using only unsafe pointers.
func UnsafeNewQHeaderView(h unsafe.Pointer) *QHeaderView {
	return newQHeaderView((*C.QHeaderView)(h))
}

// NewQHeaderView constructs a new QHeaderView object.
func NewQHeaderView(orientation Orientation) *QHeaderView {

	return newQHeaderView(C.QHeaderView_new((C.int)(orientation)))
}

// NewQHeaderView2 constructs a new QHeaderView object.
func NewQHeaderView2(orientation Orientation, parent *QWidget) *QHeaderView {

	return newQHeaderView(C.QHeaderView_new2((C.int)(orientation), parent.cPointer()))
}

func (this *QHeaderView) MetaObject() *QMetaObject {
	return newQMetaObject(C.QHeaderView_metaObject(this.h))
}

func (this *QHeaderView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QHeaderView_metacast(this.h, param1_Cstring))
}

func QHeaderView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHeaderView_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QHeaderView) SetModel(model *QAbstractItemModel) {
	C.QHeaderView_setModel(this.h, model.cPointer())
}

func (this *QHeaderView) Orientation() Orientation {
	return (Orientation)(C.QHeaderView_orientation(this.h))
}

func (this *QHeaderView) Offset() int {
	return (int)(C.QHeaderView_offset(this.h))
}

func (this *QHeaderView) Length() int {
	return (int)(C.QHeaderView_length(this.h))
}

func (this *QHeaderView) SizeHint() *QSize {
	_goptr := newQSize(C.QHeaderView_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHeaderView) SetVisible(v bool) {
	C.QHeaderView_setVisible(this.h, (C.bool)(v))
}

func (this *QHeaderView) SectionSizeHint(logicalIndex int) int {
	return (int)(C.QHeaderView_sectionSizeHint(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) VisualIndexAt(position int) int {
	return (int)(C.QHeaderView_visualIndexAt(this.h, (C.int)(position)))
}

func (this *QHeaderView) LogicalIndexAt(position int) int {
	return (int)(C.QHeaderView_logicalIndexAt(this.h, (C.int)(position)))
}

func (this *QHeaderView) LogicalIndexAt2(x int, y int) int {
	return (int)(C.QHeaderView_logicalIndexAt2(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QHeaderView) LogicalIndexAtWithPos(pos *QPoint) int {
	return (int)(C.QHeaderView_logicalIndexAtWithPos(this.h, pos.cPointer()))
}

func (this *QHeaderView) SectionSize(logicalIndex int) int {
	return (int)(C.QHeaderView_sectionSize(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) SectionPosition(logicalIndex int) int {
	return (int)(C.QHeaderView_sectionPosition(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) SectionViewportPosition(logicalIndex int) int {
	return (int)(C.QHeaderView_sectionViewportPosition(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) MoveSection(from int, to int) {
	C.QHeaderView_moveSection(this.h, (C.int)(from), (C.int)(to))
}

func (this *QHeaderView) SwapSections(first int, second int) {
	C.QHeaderView_swapSections(this.h, (C.int)(first), (C.int)(second))
}

func (this *QHeaderView) ResizeSection(logicalIndex int, size int) {
	C.QHeaderView_resizeSection(this.h, (C.int)(logicalIndex), (C.int)(size))
}

func (this *QHeaderView) ResizeSections(mode QHeaderView__ResizeMode) {
	C.QHeaderView_resizeSections(this.h, (C.int)(mode))
}

func (this *QHeaderView) IsSectionHidden(logicalIndex int) bool {
	return (bool)(C.QHeaderView_isSectionHidden(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) SetSectionHidden(logicalIndex int, hide bool) {
	C.QHeaderView_setSectionHidden(this.h, (C.int)(logicalIndex), (C.bool)(hide))
}

func (this *QHeaderView) HiddenSectionCount() int {
	return (int)(C.QHeaderView_hiddenSectionCount(this.h))
}

func (this *QHeaderView) HideSection(logicalIndex int) {
	C.QHeaderView_hideSection(this.h, (C.int)(logicalIndex))
}

func (this *QHeaderView) ShowSection(logicalIndex int) {
	C.QHeaderView_showSection(this.h, (C.int)(logicalIndex))
}

func (this *QHeaderView) Count() int {
	return (int)(C.QHeaderView_count(this.h))
}

func (this *QHeaderView) VisualIndex(logicalIndex int) int {
	return (int)(C.QHeaderView_visualIndex(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) LogicalIndex(visualIndex int) int {
	return (int)(C.QHeaderView_logicalIndex(this.h, (C.int)(visualIndex)))
}

func (this *QHeaderView) SetSectionsMovable(movable bool) {
	C.QHeaderView_setSectionsMovable(this.h, (C.bool)(movable))
}

func (this *QHeaderView) SectionsMovable() bool {
	return (bool)(C.QHeaderView_sectionsMovable(this.h))
}

func (this *QHeaderView) SetFirstSectionMovable(movable bool) {
	C.QHeaderView_setFirstSectionMovable(this.h, (C.bool)(movable))
}

func (this *QHeaderView) IsFirstSectionMovable() bool {
	return (bool)(C.QHeaderView_isFirstSectionMovable(this.h))
}

func (this *QHeaderView) SetSectionsClickable(clickable bool) {
	C.QHeaderView_setSectionsClickable(this.h, (C.bool)(clickable))
}

func (this *QHeaderView) SectionsClickable() bool {
	return (bool)(C.QHeaderView_sectionsClickable(this.h))
}

func (this *QHeaderView) SetHighlightSections(highlight bool) {
	C.QHeaderView_setHighlightSections(this.h, (C.bool)(highlight))
}

func (this *QHeaderView) HighlightSections() bool {
	return (bool)(C.QHeaderView_highlightSections(this.h))
}

func (this *QHeaderView) SectionResizeMode(logicalIndex int) QHeaderView__ResizeMode {
	return (QHeaderView__ResizeMode)(C.QHeaderView_sectionResizeMode(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) SetSectionResizeMode(mode QHeaderView__ResizeMode) {
	C.QHeaderView_setSectionResizeMode(this.h, (C.int)(mode))
}

func (this *QHeaderView) SetSectionResizeMode2(logicalIndex int, mode QHeaderView__ResizeMode) {
	C.QHeaderView_setSectionResizeMode2(this.h, (C.int)(logicalIndex), (C.int)(mode))
}

func (this *QHeaderView) SetResizeContentsPrecision(precision int) {
	C.QHeaderView_setResizeContentsPrecision(this.h, (C.int)(precision))
}

func (this *QHeaderView) ResizeContentsPrecision() int {
	return (int)(C.QHeaderView_resizeContentsPrecision(this.h))
}

func (this *QHeaderView) StretchSectionCount() int {
	return (int)(C.QHeaderView_stretchSectionCount(this.h))
}

func (this *QHeaderView) SetSortIndicatorShown(show bool) {
	C.QHeaderView_setSortIndicatorShown(this.h, (C.bool)(show))
}

func (this *QHeaderView) IsSortIndicatorShown() bool {
	return (bool)(C.QHeaderView_isSortIndicatorShown(this.h))
}

func (this *QHeaderView) SetSortIndicator(logicalIndex int, order SortOrder) {
	C.QHeaderView_setSortIndicator(this.h, (C.int)(logicalIndex), (C.int)(order))
}

func (this *QHeaderView) SortIndicatorSection() int {
	return (int)(C.QHeaderView_sortIndicatorSection(this.h))
}

func (this *QHeaderView) SortIndicatorOrder() SortOrder {
	return (SortOrder)(C.QHeaderView_sortIndicatorOrder(this.h))
}

func (this *QHeaderView) SetSortIndicatorClearable(clearable bool) {
	C.QHeaderView_setSortIndicatorClearable(this.h, (C.bool)(clearable))
}

func (this *QHeaderView) IsSortIndicatorClearable() bool {
	return (bool)(C.QHeaderView_isSortIndicatorClearable(this.h))
}

func (this *QHeaderView) StretchLastSection() bool {
	return (bool)(C.QHeaderView_stretchLastSection(this.h))
}

func (this *QHeaderView) SetStretchLastSection(stretch bool) {
	C.QHeaderView_setStretchLastSection(this.h, (C.bool)(stretch))
}

func (this *QHeaderView) CascadingSectionResizes() bool {
	return (bool)(C.QHeaderView_cascadingSectionResizes(this.h))
}

func (this *QHeaderView) SetCascadingSectionResizes(enable bool) {
	C.QHeaderView_setCascadingSectionResizes(this.h, (C.bool)(enable))
}

func (this *QHeaderView) DefaultSectionSize() int {
	return (int)(C.QHeaderView_defaultSectionSize(this.h))
}

func (this *QHeaderView) SetDefaultSectionSize(size int) {
	C.QHeaderView_setDefaultSectionSize(this.h, (C.int)(size))
}

func (this *QHeaderView) ResetDefaultSectionSize() {
	C.QHeaderView_resetDefaultSectionSize(this.h)
}

func (this *QHeaderView) MinimumSectionSize() int {
	return (int)(C.QHeaderView_minimumSectionSize(this.h))
}

func (this *QHeaderView) SetMinimumSectionSize(size int) {
	C.QHeaderView_setMinimumSectionSize(this.h, (C.int)(size))
}

func (this *QHeaderView) MaximumSectionSize() int {
	return (int)(C.QHeaderView_maximumSectionSize(this.h))
}

func (this *QHeaderView) SetMaximumSectionSize(size int) {
	C.QHeaderView_setMaximumSectionSize(this.h, (C.int)(size))
}

func (this *QHeaderView) DefaultAlignment() AlignmentFlag {
	return (AlignmentFlag)(C.QHeaderView_defaultAlignment(this.h))
}

func (this *QHeaderView) SetDefaultAlignment(alignment AlignmentFlag) {
	C.QHeaderView_setDefaultAlignment(this.h, (C.int)(alignment))
}

func (this *QHeaderView) DoItemsLayout() {
	C.QHeaderView_doItemsLayout(this.h)
}

func (this *QHeaderView) SectionsMoved() bool {
	return (bool)(C.QHeaderView_sectionsMoved(this.h))
}

func (this *QHeaderView) SectionsHidden() bool {
	return (bool)(C.QHeaderView_sectionsHidden(this.h))
}

func (this *QHeaderView) SaveState() []byte {
	var _bytearray C.struct_miqt_string = C.QHeaderView_saveState(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QHeaderView) RestoreState(state []byte) bool {
	state_alias := C.struct_miqt_string{}
	if len(state) > 0 {
		state_alias.data = (*C.char)(unsafe.Pointer(&state[0]))
	} else {
		state_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	state_alias.len = C.size_t(len(state))
	return (bool)(C.QHeaderView_restoreState(this.h, state_alias))
}

func (this *QHeaderView) Reset() {
	C.QHeaderView_reset(this.h)
}

func (this *QHeaderView) SetOffset(offset int) {
	C.QHeaderView_setOffset(this.h, (C.int)(offset))
}

func (this *QHeaderView) SetOffsetToSectionPosition(visualIndex int) {
	C.QHeaderView_setOffsetToSectionPosition(this.h, (C.int)(visualIndex))
}

func (this *QHeaderView) SetOffsetToLastSection() {
	C.QHeaderView_setOffsetToLastSection(this.h)
}

func (this *QHeaderView) HeaderDataChanged(orientation Orientation, logicalFirst int, logicalLast int) {
	C.QHeaderView_headerDataChanged(this.h, (C.int)(orientation), (C.int)(logicalFirst), (C.int)(logicalLast))
}

func (this *QHeaderView) SectionMoved(logicalIndex int, oldVisualIndex int, newVisualIndex int) {
	C.QHeaderView_sectionMoved(this.h, (C.int)(logicalIndex), (C.int)(oldVisualIndex), (C.int)(newVisualIndex))
}
func (this *QHeaderView) OnSectionMoved(slot func(logicalIndex int, oldVisualIndex int, newVisualIndex int)) {
	C.QHeaderView_connect_sectionMoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_sectionMoved
func miqt_exec_callback_QHeaderView_sectionMoved(cb C.intptr_t, logicalIndex C.int, oldVisualIndex C.int, newVisualIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int, oldVisualIndex int, newVisualIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	slotval2 := (int)(oldVisualIndex)

	slotval3 := (int)(newVisualIndex)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QHeaderView) SectionResized(logicalIndex int, oldSize int, newSize int) {
	C.QHeaderView_sectionResized(this.h, (C.int)(logicalIndex), (C.int)(oldSize), (C.int)(newSize))
}
func (this *QHeaderView) OnSectionResized(slot func(logicalIndex int, oldSize int, newSize int)) {
	C.QHeaderView_connect_sectionResized(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_sectionResized
func miqt_exec_callback_QHeaderView_sectionResized(cb C.intptr_t, logicalIndex C.int, oldSize C.int, newSize C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int, oldSize int, newSize int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	slotval2 := (int)(oldSize)

	slotval3 := (int)(newSize)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QHeaderView) SectionPressed(logicalIndex int) {
	C.QHeaderView_sectionPressed(this.h, (C.int)(logicalIndex))
}
func (this *QHeaderView) OnSectionPressed(slot func(logicalIndex int)) {
	C.QHeaderView_connect_sectionPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_sectionPressed
func miqt_exec_callback_QHeaderView_sectionPressed(cb C.intptr_t, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	gofunc(slotval1)
}

func (this *QHeaderView) SectionClicked(logicalIndex int) {
	C.QHeaderView_sectionClicked(this.h, (C.int)(logicalIndex))
}
func (this *QHeaderView) OnSectionClicked(slot func(logicalIndex int)) {
	C.QHeaderView_connect_sectionClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_sectionClicked
func miqt_exec_callback_QHeaderView_sectionClicked(cb C.intptr_t, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	gofunc(slotval1)
}

func (this *QHeaderView) SectionEntered(logicalIndex int) {
	C.QHeaderView_sectionEntered(this.h, (C.int)(logicalIndex))
}
func (this *QHeaderView) OnSectionEntered(slot func(logicalIndex int)) {
	C.QHeaderView_connect_sectionEntered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_sectionEntered
func miqt_exec_callback_QHeaderView_sectionEntered(cb C.intptr_t, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	gofunc(slotval1)
}

func (this *QHeaderView) SectionDoubleClicked(logicalIndex int) {
	C.QHeaderView_sectionDoubleClicked(this.h, (C.int)(logicalIndex))
}
func (this *QHeaderView) OnSectionDoubleClicked(slot func(logicalIndex int)) {
	C.QHeaderView_connect_sectionDoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_sectionDoubleClicked
func miqt_exec_callback_QHeaderView_sectionDoubleClicked(cb C.intptr_t, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	gofunc(slotval1)
}

func (this *QHeaderView) SectionCountChanged(oldCount int, newCount int) {
	C.QHeaderView_sectionCountChanged(this.h, (C.int)(oldCount), (C.int)(newCount))
}
func (this *QHeaderView) OnSectionCountChanged(slot func(oldCount int, newCount int)) {
	C.QHeaderView_connect_sectionCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_sectionCountChanged
func miqt_exec_callback_QHeaderView_sectionCountChanged(cb C.intptr_t, oldCount C.int, newCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(oldCount int, newCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(oldCount)

	slotval2 := (int)(newCount)

	gofunc(slotval1, slotval2)
}

func (this *QHeaderView) SectionHandleDoubleClicked(logicalIndex int) {
	C.QHeaderView_sectionHandleDoubleClicked(this.h, (C.int)(logicalIndex))
}
func (this *QHeaderView) OnSectionHandleDoubleClicked(slot func(logicalIndex int)) {
	C.QHeaderView_connect_sectionHandleDoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_sectionHandleDoubleClicked
func miqt_exec_callback_QHeaderView_sectionHandleDoubleClicked(cb C.intptr_t, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	gofunc(slotval1)
}

func (this *QHeaderView) GeometriesChanged() {
	C.QHeaderView_geometriesChanged(this.h)
}
func (this *QHeaderView) OnGeometriesChanged(slot func()) {
	C.QHeaderView_connect_geometriesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_geometriesChanged
func miqt_exec_callback_QHeaderView_geometriesChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHeaderView) SortIndicatorChanged(logicalIndex int, order SortOrder) {
	C.QHeaderView_sortIndicatorChanged(this.h, (C.int)(logicalIndex), (C.int)(order))
}
func (this *QHeaderView) OnSortIndicatorChanged(slot func(logicalIndex int, order SortOrder)) {
	C.QHeaderView_connect_sortIndicatorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_sortIndicatorChanged
func miqt_exec_callback_QHeaderView_sortIndicatorChanged(cb C.intptr_t, logicalIndex C.int, order C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int, order SortOrder))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	slotval2 := (SortOrder)(order)

	gofunc(slotval1, slotval2)
}

func (this *QHeaderView) SortIndicatorClearableChanged(clearable bool) {
	C.QHeaderView_sortIndicatorClearableChanged(this.h, (C.bool)(clearable))
}
func (this *QHeaderView) OnSortIndicatorClearableChanged(slot func(clearable bool)) {
	C.QHeaderView_connect_sortIndicatorClearableChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_sortIndicatorClearableChanged
func miqt_exec_callback_QHeaderView_sortIndicatorClearableChanged(cb C.intptr_t, clearable C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(clearable bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(clearable)

	gofunc(slotval1)
}

func QHeaderView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHeaderView_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHeaderView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHeaderView_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// UpdateSection can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) UpdateSection(logicalIndex int) {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_updateSection(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(logicalIndex))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ResizeSections2 can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) ResizeSections2() {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_resizeSections2(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SectionsInserted can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) SectionsInserted(parent *QModelIndex, logicalFirst int, logicalLast int) {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_sectionsInserted(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(logicalFirst), (C.int)(logicalLast))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SectionsAboutToBeRemoved can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) SectionsAboutToBeRemoved(parent *QModelIndex, logicalFirst int, logicalLast int) {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_sectionsAboutToBeRemoved(&_dynamic_cast_ok, unsafe.Pointer(this.h), parent.cPointer(), (C.int)(logicalFirst), (C.int)(logicalLast))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Initialize can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) Initialize() {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_initialize(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// InitializeSections can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) InitializeSections() {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_initializeSections(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// InitializeSections2 can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) InitializeSections2(start int, end int) {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_initializeSections2(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(start), (C.int)(end))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// State can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) State() QAbstractItemView__State {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (QAbstractItemView__State)(C.QHeaderView_protectedbase_state(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetState can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) SetState(state QAbstractItemView__State) {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_setState(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(state))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ScheduleDelayedItemsLayout can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) ScheduleDelayedItemsLayout() {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_scheduleDelayedItemsLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ExecuteDelayedItemsLayout can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) ExecuteDelayedItemsLayout() {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_executeDelayedItemsLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetDirtyRegion can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) SetDirtyRegion(region *QRegion) {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_setDirtyRegion(&_dynamic_cast_ok, unsafe.Pointer(this.h), region.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ScrollDirtyRegion can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) ScrollDirtyRegion(dx int, dy int) {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_scrollDirtyRegion(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DirtyRegionOffset can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) DirtyRegionOffset() QPoint {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQPoint(C.QHeaderView_protectedbase_dirtyRegionOffset(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// StartAutoScroll can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) StartAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_startAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// StopAutoScroll can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) StopAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_stopAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DoAutoScroll can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) DoAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_doAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DropIndicatorPosition can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) DropIndicatorPosition() QAbstractItemView__DropIndicatorPosition {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (QAbstractItemView__DropIndicatorPosition)(C.QHeaderView_protectedbase_dropIndicatorPosition(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetViewportMargins can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) SetViewportMargins(left int, top int, right int, bottom int) {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_setViewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ViewportMargins can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) ViewportMargins() QMargins {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQMargins(C.QHeaderView_protectedbase_viewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DrawFrame can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) DrawFrame(param1 *QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QHeaderView_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QHeaderView_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QHeaderView_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QHeaderView_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHeaderView_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QHeaderView_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QHeaderView that was directly constructed.
func (this *QHeaderView) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QHeaderView_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QHeaderView) callVirtualBase_SetModel(model *QAbstractItemModel) {

	C.QHeaderView_virtualbase_setModel(unsafe.Pointer(this.h), model.cPointer())

}
func (this *QHeaderView) OnSetModel(slot func(super func(model *QAbstractItemModel), model *QAbstractItemModel)) {
	ok := C.QHeaderView_override_virtual_setModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_setModel
func miqt_exec_callback_QHeaderView_setModel(self *C.QHeaderView, cb C.intptr_t, model *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(model *QAbstractItemModel), model *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractItemModel(model)

	gofunc((&QHeaderView{h: self}).callVirtualBase_SetModel, slotval1)

}

func (this *QHeaderView) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QHeaderView_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHeaderView) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QHeaderView_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_sizeHint
func miqt_exec_callback_QHeaderView_sizeHint(self *C.QHeaderView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_SetVisible(v bool) {

	C.QHeaderView_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(v))

}
func (this *QHeaderView) OnSetVisible(slot func(super func(v bool), v bool)) {
	ok := C.QHeaderView_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_setVisible
func miqt_exec_callback_QHeaderView_setVisible(self *C.QHeaderView, cb C.intptr_t, v C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(v bool), v bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(v)

	gofunc((&QHeaderView{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QHeaderView) callVirtualBase_DoItemsLayout() {

	C.QHeaderView_virtualbase_doItemsLayout(unsafe.Pointer(this.h))

}
func (this *QHeaderView) OnDoItemsLayout(slot func(super func())) {
	ok := C.QHeaderView_override_virtual_doItemsLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_doItemsLayout
func miqt_exec_callback_QHeaderView_doItemsLayout(self *C.QHeaderView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QHeaderView{h: self}).callVirtualBase_DoItemsLayout)

}

func (this *QHeaderView) callVirtualBase_Reset() {

	C.QHeaderView_virtualbase_reset(unsafe.Pointer(this.h))

}
func (this *QHeaderView) OnReset(slot func(super func())) {
	ok := C.QHeaderView_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_reset
func miqt_exec_callback_QHeaderView_reset(self *C.QHeaderView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QHeaderView{h: self}).callVirtualBase_Reset)

}

func (this *QHeaderView) callVirtualBase_CurrentChanged(current *QModelIndex, old *QModelIndex) {

	C.QHeaderView_virtualbase_currentChanged(unsafe.Pointer(this.h), current.cPointer(), old.cPointer())

}
func (this *QHeaderView) OnCurrentChanged(slot func(super func(current *QModelIndex, old *QModelIndex), current *QModelIndex, old *QModelIndex)) {
	ok := C.QHeaderView_override_virtual_currentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_currentChanged
func miqt_exec_callback_QHeaderView_currentChanged(self *C.QHeaderView, cb C.intptr_t, current *C.QModelIndex, old *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(current *QModelIndex, old *QModelIndex), current *QModelIndex, old *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(current)

	slotval2 := newQModelIndex(old)

	gofunc((&QHeaderView{h: self}).callVirtualBase_CurrentChanged, slotval1, slotval2)

}

func (this *QHeaderView) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QHeaderView_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QHeaderView) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QHeaderView_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_event
func miqt_exec_callback_QHeaderView_event(self *C.QHeaderView, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_PaintEvent(e *QPaintEvent) {

	C.QHeaderView_virtualbase_paintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QHeaderView) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	ok := C.QHeaderView_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_paintEvent
func miqt_exec_callback_QHeaderView_paintEvent(self *C.QHeaderView, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(e)

	gofunc((&QHeaderView{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_MousePressEvent(e *QMouseEvent) {

	C.QHeaderView_virtualbase_mousePressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QHeaderView) OnMousePressEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QHeaderView_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_mousePressEvent
func miqt_exec_callback_QHeaderView_mousePressEvent(self *C.QHeaderView, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QHeaderView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_MouseMoveEvent(e *QMouseEvent) {

	C.QHeaderView_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QHeaderView) OnMouseMoveEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QHeaderView_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_mouseMoveEvent
func miqt_exec_callback_QHeaderView_mouseMoveEvent(self *C.QHeaderView, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QHeaderView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QHeaderView_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QHeaderView) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QHeaderView_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_mouseReleaseEvent
func miqt_exec_callback_QHeaderView_mouseReleaseEvent(self *C.QHeaderView, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QHeaderView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_MouseDoubleClickEvent(e *QMouseEvent) {

	C.QHeaderView_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QHeaderView) OnMouseDoubleClickEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QHeaderView_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_mouseDoubleClickEvent
func miqt_exec_callback_QHeaderView_mouseDoubleClickEvent(self *C.QHeaderView, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QHeaderView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_ViewportEvent(e *QEvent) bool {

	return (bool)(C.QHeaderView_virtualbase_viewportEvent(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QHeaderView) OnViewportEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QHeaderView_override_virtual_viewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_viewportEvent
func miqt_exec_callback_QHeaderView_viewportEvent(self *C.QHeaderView, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_PaintSection(painter *QPainter, rect *QRect, logicalIndex int) {

	C.QHeaderView_virtualbase_paintSection(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer(), (C.int)(logicalIndex))

}
func (this *QHeaderView) OnPaintSection(slot func(super func(painter *QPainter, rect *QRect, logicalIndex int), painter *QPainter, rect *QRect, logicalIndex int)) {
	ok := C.QHeaderView_override_virtual_paintSection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_paintSection
func miqt_exec_callback_QHeaderView_paintSection(self *C.QHeaderView, cb C.intptr_t, painter *C.QPainter, rect *C.QRect, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect *QRect, logicalIndex int), painter *QPainter, rect *QRect, logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQRect(rect)

	slotval3 := (int)(logicalIndex)

	gofunc((&QHeaderView{h: self}).callVirtualBase_PaintSection, slotval1, slotval2, slotval3)

}

func (this *QHeaderView) callVirtualBase_SectionSizeFromContents(logicalIndex int) *QSize {

	_goptr := newQSize(C.QHeaderView_virtualbase_sectionSizeFromContents(unsafe.Pointer(this.h), (C.int)(logicalIndex)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHeaderView) OnSectionSizeFromContents(slot func(super func(logicalIndex int) *QSize, logicalIndex int) *QSize) {
	ok := C.QHeaderView_override_virtual_sectionSizeFromContents(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_sectionSizeFromContents
func miqt_exec_callback_QHeaderView_sectionSizeFromContents(self *C.QHeaderView, cb C.intptr_t, logicalIndex C.int) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(logicalIndex int) *QSize, logicalIndex int) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_SectionSizeFromContents, slotval1)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_HorizontalOffset() int {

	return (int)(C.QHeaderView_virtualbase_horizontalOffset(unsafe.Pointer(this.h)))

}
func (this *QHeaderView) OnHorizontalOffset(slot func(super func() int) int) {
	ok := C.QHeaderView_override_virtual_horizontalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_horizontalOffset
func miqt_exec_callback_QHeaderView_horizontalOffset(self *C.QHeaderView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_HorizontalOffset)

	return (C.int)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_VerticalOffset() int {

	return (int)(C.QHeaderView_virtualbase_verticalOffset(unsafe.Pointer(this.h)))

}
func (this *QHeaderView) OnVerticalOffset(slot func(super func() int) int) {
	ok := C.QHeaderView_override_virtual_verticalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_verticalOffset
func miqt_exec_callback_QHeaderView_verticalOffset(self *C.QHeaderView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_VerticalOffset)

	return (C.int)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_UpdateGeometries() {

	C.QHeaderView_virtualbase_updateGeometries(unsafe.Pointer(this.h))

}
func (this *QHeaderView) OnUpdateGeometries(slot func(super func())) {
	ok := C.QHeaderView_override_virtual_updateGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_updateGeometries
func miqt_exec_callback_QHeaderView_updateGeometries(self *C.QHeaderView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QHeaderView{h: self}).callVirtualBase_UpdateGeometries)

}

func (this *QHeaderView) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QHeaderView_virtualbase_scrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QHeaderView) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QHeaderView_override_virtual_scrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_scrollContentsBy
func miqt_exec_callback_QHeaderView_scrollContentsBy(self *C.QHeaderView, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QHeaderView{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QHeaderView) callVirtualBase_DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	roles_ma := C.struct_miqt_array{len: C.size_t(len(roles)), data: unsafe.Pointer(roles_CArray)}

	C.QHeaderView_virtualbase_dataChanged(unsafe.Pointer(this.h), topLeft.cPointer(), bottomRight.cPointer(), roles_ma)

}
func (this *QHeaderView) OnDataChanged(slot func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int)) {
	ok := C.QHeaderView_override_virtual_dataChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_dataChanged
func miqt_exec_callback_QHeaderView_dataChanged(self *C.QHeaderView, cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles C.struct_miqt_array) {
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

	gofunc((&QHeaderView{h: self}).callVirtualBase_DataChanged, slotval1, slotval2, slotval3)

}

func (this *QHeaderView) callVirtualBase_RowsInserted(parent *QModelIndex, start int, end int) {

	C.QHeaderView_virtualbase_rowsInserted(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QHeaderView) OnRowsInserted(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QHeaderView_override_virtual_rowsInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_rowsInserted
func miqt_exec_callback_QHeaderView_rowsInserted(self *C.QHeaderView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QHeaderView{h: self}).callVirtualBase_RowsInserted, slotval1, slotval2, slotval3)

}

func (this *QHeaderView) callVirtualBase_VisualRect(index *QModelIndex) *QRect {

	_goptr := newQRect(C.QHeaderView_virtualbase_visualRect(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHeaderView) OnVisualRect(slot func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect) {
	ok := C.QHeaderView_override_virtual_visualRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_visualRect
func miqt_exec_callback_QHeaderView_visualRect(self *C.QHeaderView, cb C.intptr_t, index *C.QModelIndex) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_VisualRect, slotval1)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {

	C.QHeaderView_virtualbase_scrollTo(unsafe.Pointer(this.h), index.cPointer(), (C.int)(hint))

}
func (this *QHeaderView) OnScrollTo(slot func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint)) {
	ok := C.QHeaderView_override_virtual_scrollTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_scrollTo
func miqt_exec_callback_QHeaderView_scrollTo(self *C.QHeaderView, cb C.intptr_t, index *C.QModelIndex, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__ScrollHint)(hint)

	gofunc((&QHeaderView{h: self}).callVirtualBase_ScrollTo, slotval1, slotval2)

}

func (this *QHeaderView) callVirtualBase_IndexAt(p *QPoint) *QModelIndex {

	_goptr := newQModelIndex(C.QHeaderView_virtualbase_indexAt(unsafe.Pointer(this.h), p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHeaderView) OnIndexAt(slot func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex) {
	ok := C.QHeaderView_override_virtual_indexAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_indexAt
func miqt_exec_callback_QHeaderView_indexAt(self *C.QHeaderView, cb C.intptr_t, p *C.QPoint) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(p)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_IndexAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_IsIndexHidden(index *QModelIndex) bool {

	return (bool)(C.QHeaderView_virtualbase_isIndexHidden(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QHeaderView) OnIsIndexHidden(slot func(super func(index *QModelIndex) bool, index *QModelIndex) bool) {
	ok := C.QHeaderView_override_virtual_isIndexHidden(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_isIndexHidden
func miqt_exec_callback_QHeaderView_isIndexHidden(self *C.QHeaderView, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) bool, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_IsIndexHidden, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_MoveCursor(param1 QAbstractItemView__CursorAction, param2 KeyboardModifier) *QModelIndex {

	_goptr := newQModelIndex(C.QHeaderView_virtualbase_moveCursor(unsafe.Pointer(this.h), (C.int)(param1), (C.int)(param2)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHeaderView) OnMoveCursor(slot func(super func(param1 QAbstractItemView__CursorAction, param2 KeyboardModifier) *QModelIndex, param1 QAbstractItemView__CursorAction, param2 KeyboardModifier) *QModelIndex) {
	ok := C.QHeaderView_override_virtual_moveCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_moveCursor
func miqt_exec_callback_QHeaderView_moveCursor(self *C.QHeaderView, cb C.intptr_t, param1 C.int, param2 C.int) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QAbstractItemView__CursorAction, param2 KeyboardModifier) *QModelIndex, param1 QAbstractItemView__CursorAction, param2 KeyboardModifier) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractItemView__CursorAction)(param1)

	slotval2 := (KeyboardModifier)(param2)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_MoveCursor, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_SetSelection(rect *QRect, flags QItemSelectionModel__SelectionFlag) {

	C.QHeaderView_virtualbase_setSelection(unsafe.Pointer(this.h), rect.cPointer(), (C.int)(flags))

}
func (this *QHeaderView) OnSetSelection(slot func(super func(rect *QRect, flags QItemSelectionModel__SelectionFlag), rect *QRect, flags QItemSelectionModel__SelectionFlag)) {
	ok := C.QHeaderView_override_virtual_setSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_setSelection
func miqt_exec_callback_QHeaderView_setSelection(self *C.QHeaderView, cb C.intptr_t, rect *C.QRect, flags C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRect, flags QItemSelectionModel__SelectionFlag), rect *QRect, flags QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(rect)

	slotval2 := (QItemSelectionModel__SelectionFlag)(flags)

	gofunc((&QHeaderView{h: self}).callVirtualBase_SetSelection, slotval1, slotval2)

}

func (this *QHeaderView) callVirtualBase_VisualRegionForSelection(selection *QItemSelection) *QRegion {

	_goptr := newQRegion(C.QHeaderView_virtualbase_visualRegionForSelection(unsafe.Pointer(this.h), selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHeaderView) OnVisualRegionForSelection(slot func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion) {
	ok := C.QHeaderView_override_virtual_visualRegionForSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_visualRegionForSelection
func miqt_exec_callback_QHeaderView_visualRegionForSelection(self *C.QHeaderView, cb C.intptr_t, selection *C.QItemSelection) *C.QRegion {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selection)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_VisualRegionForSelection, slotval1)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_InitStyleOptionForIndex(option *QStyleOptionHeader, logicalIndex int) {

	C.QHeaderView_virtualbase_initStyleOptionForIndex(unsafe.Pointer(this.h), option.cPointer(), (C.int)(logicalIndex))

}
func (this *QHeaderView) OnInitStyleOptionForIndex(slot func(super func(option *QStyleOptionHeader, logicalIndex int), option *QStyleOptionHeader, logicalIndex int)) {
	ok := C.QHeaderView_override_virtual_initStyleOptionForIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_initStyleOptionForIndex
func miqt_exec_callback_QHeaderView_initStyleOptionForIndex(self *C.QHeaderView, cb C.intptr_t, option *C.QStyleOptionHeader, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionHeader, logicalIndex int), option *QStyleOptionHeader, logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionHeader(option)

	slotval2 := (int)(logicalIndex)

	gofunc((&QHeaderView{h: self}).callVirtualBase_InitStyleOptionForIndex, slotval1, slotval2)

}

func (this *QHeaderView) callVirtualBase_InitStyleOption(option *QStyleOptionHeader) {

	C.QHeaderView_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QHeaderView) OnInitStyleOption(slot func(super func(option *QStyleOptionHeader), option *QStyleOptionHeader)) {
	ok := C.QHeaderView_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_initStyleOption
func miqt_exec_callback_QHeaderView_initStyleOption(self *C.QHeaderView, cb C.intptr_t, option *C.QStyleOptionHeader) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionHeader), option *QStyleOptionHeader))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionHeader(option)

	gofunc((&QHeaderView{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QHeaderView) callVirtualBase_SetSelectionModel(selectionModel *QItemSelectionModel) {

	C.QHeaderView_virtualbase_setSelectionModel(unsafe.Pointer(this.h), selectionModel.cPointer())

}
func (this *QHeaderView) OnSetSelectionModel(slot func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel)) {
	ok := C.QHeaderView_override_virtual_setSelectionModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_setSelectionModel
func miqt_exec_callback_QHeaderView_setSelectionModel(self *C.QHeaderView, cb C.intptr_t, selectionModel *C.QItemSelectionModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelectionModel(selectionModel)

	gofunc((&QHeaderView{h: self}).callVirtualBase_SetSelectionModel, slotval1)

}

func (this *QHeaderView) callVirtualBase_KeyboardSearch(search string) {
	search_ms := C.struct_miqt_string{}
	search_ms.data = C.CString(search)
	search_ms.len = C.size_t(len(search))
	defer C.free(unsafe.Pointer(search_ms.data))

	C.QHeaderView_virtualbase_keyboardSearch(unsafe.Pointer(this.h), search_ms)

}
func (this *QHeaderView) OnKeyboardSearch(slot func(super func(search string), search string)) {
	ok := C.QHeaderView_override_virtual_keyboardSearch(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_keyboardSearch
func miqt_exec_callback_QHeaderView_keyboardSearch(self *C.QHeaderView, cb C.intptr_t, search C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(search string), search string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var search_ms C.struct_miqt_string = search
	search_ret := C.GoStringN(search_ms.data, C.int(int64(search_ms.len)))
	C.free(unsafe.Pointer(search_ms.data))
	slotval1 := search_ret

	gofunc((&QHeaderView{h: self}).callVirtualBase_KeyboardSearch, slotval1)

}

func (this *QHeaderView) callVirtualBase_SizeHintForRow(row int) int {

	return (int)(C.QHeaderView_virtualbase_sizeHintForRow(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QHeaderView) OnSizeHintForRow(slot func(super func(row int) int, row int) int) {
	ok := C.QHeaderView_override_virtual_sizeHintForRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_sizeHintForRow
func miqt_exec_callback_QHeaderView_sizeHintForRow(self *C.QHeaderView, cb C.intptr_t, row C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int) int, row int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_SizeHintForRow, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_SizeHintForColumn(column int) int {

	return (int)(C.QHeaderView_virtualbase_sizeHintForColumn(unsafe.Pointer(this.h), (C.int)(column)))

}
func (this *QHeaderView) OnSizeHintForColumn(slot func(super func(column int) int, column int) int) {
	ok := C.QHeaderView_override_virtual_sizeHintForColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_sizeHintForColumn
func miqt_exec_callback_QHeaderView_sizeHintForColumn(self *C.QHeaderView, cb C.intptr_t, column C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int) int, column int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_SizeHintForColumn, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_ItemDelegateForIndex(index *QModelIndex) *QAbstractItemDelegate {

	return newQAbstractItemDelegate(C.QHeaderView_virtualbase_itemDelegateForIndex(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QHeaderView) OnItemDelegateForIndex(slot func(super func(index *QModelIndex) *QAbstractItemDelegate, index *QModelIndex) *QAbstractItemDelegate) {
	ok := C.QHeaderView_override_virtual_itemDelegateForIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_itemDelegateForIndex
func miqt_exec_callback_QHeaderView_itemDelegateForIndex(self *C.QHeaderView, cb C.intptr_t, index *C.QModelIndex) *C.QAbstractItemDelegate {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QAbstractItemDelegate, index *QModelIndex) *QAbstractItemDelegate)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_ItemDelegateForIndex, slotval1)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QHeaderView_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHeaderView) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QHeaderView_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_inputMethodQuery
func miqt_exec_callback_QHeaderView_inputMethodQuery(self *C.QHeaderView, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_SetRootIndex(index *QModelIndex) {

	C.QHeaderView_virtualbase_setRootIndex(unsafe.Pointer(this.h), index.cPointer())

}
func (this *QHeaderView) OnSetRootIndex(slot func(super func(index *QModelIndex), index *QModelIndex)) {
	ok := C.QHeaderView_override_virtual_setRootIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_setRootIndex
func miqt_exec_callback_QHeaderView_setRootIndex(self *C.QHeaderView, cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex), index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc((&QHeaderView{h: self}).callVirtualBase_SetRootIndex, slotval1)

}

func (this *QHeaderView) callVirtualBase_SelectAll() {

	C.QHeaderView_virtualbase_selectAll(unsafe.Pointer(this.h))

}
func (this *QHeaderView) OnSelectAll(slot func(super func())) {
	ok := C.QHeaderView_override_virtual_selectAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_selectAll
func miqt_exec_callback_QHeaderView_selectAll(self *C.QHeaderView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QHeaderView{h: self}).callVirtualBase_SelectAll)

}

func (this *QHeaderView) callVirtualBase_RowsAboutToBeRemoved(parent *QModelIndex, start int, end int) {

	C.QHeaderView_virtualbase_rowsAboutToBeRemoved(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QHeaderView) OnRowsAboutToBeRemoved(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QHeaderView_override_virtual_rowsAboutToBeRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_rowsAboutToBeRemoved
func miqt_exec_callback_QHeaderView_rowsAboutToBeRemoved(self *C.QHeaderView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QHeaderView{h: self}).callVirtualBase_RowsAboutToBeRemoved, slotval1, slotval2, slotval3)

}

func (this *QHeaderView) callVirtualBase_SelectionChanged(selected *QItemSelection, deselected *QItemSelection) {

	C.QHeaderView_virtualbase_selectionChanged(unsafe.Pointer(this.h), selected.cPointer(), deselected.cPointer())

}
func (this *QHeaderView) OnSelectionChanged(slot func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection)) {
	ok := C.QHeaderView_override_virtual_selectionChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_selectionChanged
func miqt_exec_callback_QHeaderView_selectionChanged(self *C.QHeaderView, cb C.intptr_t, selected *C.QItemSelection, deselected *C.QItemSelection) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selected)

	slotval2 := newQItemSelection(deselected)

	gofunc((&QHeaderView{h: self}).callVirtualBase_SelectionChanged, slotval1, slotval2)

}

func (this *QHeaderView) callVirtualBase_UpdateEditorData() {

	C.QHeaderView_virtualbase_updateEditorData(unsafe.Pointer(this.h))

}
func (this *QHeaderView) OnUpdateEditorData(slot func(super func())) {
	ok := C.QHeaderView_override_virtual_updateEditorData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_updateEditorData
func miqt_exec_callback_QHeaderView_updateEditorData(self *C.QHeaderView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QHeaderView{h: self}).callVirtualBase_UpdateEditorData)

}

func (this *QHeaderView) callVirtualBase_UpdateEditorGeometries() {

	C.QHeaderView_virtualbase_updateEditorGeometries(unsafe.Pointer(this.h))

}
func (this *QHeaderView) OnUpdateEditorGeometries(slot func(super func())) {
	ok := C.QHeaderView_override_virtual_updateEditorGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_updateEditorGeometries
func miqt_exec_callback_QHeaderView_updateEditorGeometries(self *C.QHeaderView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QHeaderView{h: self}).callVirtualBase_UpdateEditorGeometries)

}

func (this *QHeaderView) callVirtualBase_VerticalScrollbarAction(action int) {

	C.QHeaderView_virtualbase_verticalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QHeaderView) OnVerticalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QHeaderView_override_virtual_verticalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_verticalScrollbarAction
func miqt_exec_callback_QHeaderView_verticalScrollbarAction(self *C.QHeaderView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QHeaderView{h: self}).callVirtualBase_VerticalScrollbarAction, slotval1)

}

func (this *QHeaderView) callVirtualBase_HorizontalScrollbarAction(action int) {

	C.QHeaderView_virtualbase_horizontalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QHeaderView) OnHorizontalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QHeaderView_override_virtual_horizontalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_horizontalScrollbarAction
func miqt_exec_callback_QHeaderView_horizontalScrollbarAction(self *C.QHeaderView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QHeaderView{h: self}).callVirtualBase_HorizontalScrollbarAction, slotval1)

}

func (this *QHeaderView) callVirtualBase_VerticalScrollbarValueChanged(value int) {

	C.QHeaderView_virtualbase_verticalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QHeaderView) OnVerticalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QHeaderView_override_virtual_verticalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_verticalScrollbarValueChanged
func miqt_exec_callback_QHeaderView_verticalScrollbarValueChanged(self *C.QHeaderView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QHeaderView{h: self}).callVirtualBase_VerticalScrollbarValueChanged, slotval1)

}

func (this *QHeaderView) callVirtualBase_HorizontalScrollbarValueChanged(value int) {

	C.QHeaderView_virtualbase_horizontalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QHeaderView) OnHorizontalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QHeaderView_override_virtual_horizontalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_horizontalScrollbarValueChanged
func miqt_exec_callback_QHeaderView_horizontalScrollbarValueChanged(self *C.QHeaderView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QHeaderView{h: self}).callVirtualBase_HorizontalScrollbarValueChanged, slotval1)

}

func (this *QHeaderView) callVirtualBase_CloseEditor(editor *QWidget, hint QAbstractItemDelegate__EndEditHint) {

	C.QHeaderView_virtualbase_closeEditor(unsafe.Pointer(this.h), editor.cPointer(), (C.int)(hint))

}
func (this *QHeaderView) OnCloseEditor(slot func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint)) {
	ok := C.QHeaderView_override_virtual_closeEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_closeEditor
func miqt_exec_callback_QHeaderView_closeEditor(self *C.QHeaderView, cb C.intptr_t, editor *C.QWidget, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := (QAbstractItemDelegate__EndEditHint)(hint)

	gofunc((&QHeaderView{h: self}).callVirtualBase_CloseEditor, slotval1, slotval2)

}

func (this *QHeaderView) callVirtualBase_CommitData(editor *QWidget) {

	C.QHeaderView_virtualbase_commitData(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QHeaderView) OnCommitData(slot func(super func(editor *QWidget), editor *QWidget)) {
	ok := C.QHeaderView_override_virtual_commitData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_commitData
func miqt_exec_callback_QHeaderView_commitData(self *C.QHeaderView, cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget), editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	gofunc((&QHeaderView{h: self}).callVirtualBase_CommitData, slotval1)

}

func (this *QHeaderView) callVirtualBase_EditorDestroyed(editor *QObject) {

	C.QHeaderView_virtualbase_editorDestroyed(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QHeaderView) OnEditorDestroyed(slot func(super func(editor *QObject), editor *QObject)) {
	ok := C.QHeaderView_override_virtual_editorDestroyed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_editorDestroyed
func miqt_exec_callback_QHeaderView_editorDestroyed(self *C.QHeaderView, cb C.intptr_t, editor *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QObject), editor *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(editor)

	gofunc((&QHeaderView{h: self}).callVirtualBase_EditorDestroyed, slotval1)

}

func (this *QHeaderView) callVirtualBase_SelectedIndexes() []QModelIndex {

	var _ma C.struct_miqt_array = C.QHeaderView_virtualbase_selectedIndexes(unsafe.Pointer(this.h))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QHeaderView) OnSelectedIndexes(slot func(super func() []QModelIndex) []QModelIndex) {
	ok := C.QHeaderView_override_virtual_selectedIndexes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_selectedIndexes
func miqt_exec_callback_QHeaderView_selectedIndexes(self *C.QHeaderView, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []QModelIndex) []QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_SelectedIndexes)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QHeaderView) callVirtualBase_Edit2(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool {

	return (bool)(C.QHeaderView_virtualbase_edit2(unsafe.Pointer(this.h), index.cPointer(), (C.int)(trigger), event.cPointer()))

}
func (this *QHeaderView) OnEdit2(slot func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool) {
	ok := C.QHeaderView_override_virtual_edit2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_edit2
func miqt_exec_callback_QHeaderView_edit2(self *C.QHeaderView, cb C.intptr_t, index *C.QModelIndex, trigger C.int, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__EditTrigger)(trigger)

	slotval3 := newQEvent(event)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_Edit2, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_SelectionCommand(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag {

	return (QItemSelectionModel__SelectionFlag)(C.QHeaderView_virtualbase_selectionCommand(unsafe.Pointer(this.h), index.cPointer(), event.cPointer()))

}
func (this *QHeaderView) OnSelectionCommand(slot func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag) {
	ok := C.QHeaderView_override_virtual_selectionCommand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_selectionCommand
func miqt_exec_callback_QHeaderView_selectionCommand(self *C.QHeaderView, cb C.intptr_t, index *C.QModelIndex, event *C.QEvent) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_SelectionCommand, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_StartDrag(supportedActions DropAction) {

	C.QHeaderView_virtualbase_startDrag(unsafe.Pointer(this.h), (C.int)(supportedActions))

}
func (this *QHeaderView) OnStartDrag(slot func(super func(supportedActions DropAction), supportedActions DropAction)) {
	ok := C.QHeaderView_override_virtual_startDrag(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_startDrag
func miqt_exec_callback_QHeaderView_startDrag(self *C.QHeaderView, cb C.intptr_t, supportedActions C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(supportedActions DropAction), supportedActions DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(supportedActions)

	gofunc((&QHeaderView{h: self}).callVirtualBase_StartDrag, slotval1)

}

func (this *QHeaderView) callVirtualBase_InitViewItemOption(option *QStyleOptionViewItem) {

	C.QHeaderView_virtualbase_initViewItemOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QHeaderView) OnInitViewItemOption(slot func(super func(option *QStyleOptionViewItem), option *QStyleOptionViewItem)) {
	ok := C.QHeaderView_override_virtual_initViewItemOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_initViewItemOption
func miqt_exec_callback_QHeaderView_initViewItemOption(self *C.QHeaderView, cb C.intptr_t, option *C.QStyleOptionViewItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionViewItem), option *QStyleOptionViewItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionViewItem(option)

	gofunc((&QHeaderView{h: self}).callVirtualBase_InitViewItemOption, slotval1)

}

func (this *QHeaderView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QHeaderView_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QHeaderView) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QHeaderView_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_focusNextPrevChild
func miqt_exec_callback_QHeaderView_focusNextPrevChild(self *C.QHeaderView, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QHeaderView_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QHeaderView_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_dragEnterEvent
func miqt_exec_callback_QHeaderView_dragEnterEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QHeaderView_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QHeaderView_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_dragMoveEvent
func miqt_exec_callback_QHeaderView_dragMoveEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QHeaderView_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QHeaderView_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_dragLeaveEvent
func miqt_exec_callback_QHeaderView_dragLeaveEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QHeaderView_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QHeaderView_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_dropEvent
func miqt_exec_callback_QHeaderView_dropEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QHeaderView_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QHeaderView_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_focusInEvent
func miqt_exec_callback_QHeaderView_focusInEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QHeaderView_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QHeaderView_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_focusOutEvent
func miqt_exec_callback_QHeaderView_focusOutEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QHeaderView_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QHeaderView_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_keyPressEvent
func miqt_exec_callback_QHeaderView_keyPressEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QHeaderView_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QHeaderView_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_resizeEvent
func miqt_exec_callback_QHeaderView_resizeEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QHeaderView_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QHeaderView_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_timerEvent
func miqt_exec_callback_QHeaderView_timerEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QHeaderView_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QHeaderView_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_inputMethodEvent
func miqt_exec_callback_QHeaderView_inputMethodEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QHeaderView_virtualbase_eventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QHeaderView) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QHeaderView_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_eventFilter
func miqt_exec_callback_QHeaderView_eventFilter(self *C.QHeaderView, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QHeaderView_virtualbase_viewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHeaderView) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QHeaderView_override_virtual_viewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_viewportSizeHint
func miqt_exec_callback_QHeaderView_viewportSizeHint(self *C.QHeaderView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QHeaderView_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QHeaderView) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QHeaderView_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_minimumSizeHint
func miqt_exec_callback_QHeaderView_minimumSizeHint(self *C.QHeaderView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QHeaderView_virtualbase_setupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QHeaderView) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QHeaderView_override_virtual_setupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_setupViewport
func miqt_exec_callback_QHeaderView_setupViewport(self *C.QHeaderView, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QHeaderView{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QHeaderView) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QHeaderView_virtualbase_wheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QHeaderView) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QHeaderView_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_wheelEvent
func miqt_exec_callback_QHeaderView_wheelEvent(self *C.QHeaderView, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QHeaderView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QHeaderView_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QHeaderView) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QHeaderView_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_contextMenuEvent
func miqt_exec_callback_QHeaderView_contextMenuEvent(self *C.QHeaderView, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QHeaderView{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QHeaderView_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QHeaderView) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QHeaderView_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_changeEvent
func miqt_exec_callback_QHeaderView_changeEvent(self *C.QHeaderView, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QHeaderView{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_DevType() int {

	return (int)(C.QHeaderView_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QHeaderView) OnDevType(slot func(super func() int) int) {
	ok := C.QHeaderView_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_devType
func miqt_exec_callback_QHeaderView_devType(self *C.QHeaderView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QHeaderView_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QHeaderView) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QHeaderView_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_heightForWidth
func miqt_exec_callback_QHeaderView_heightForWidth(self *C.QHeaderView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QHeaderView_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QHeaderView) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QHeaderView_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_hasHeightForWidth
func miqt_exec_callback_QHeaderView_hasHeightForWidth(self *C.QHeaderView, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QHeaderView_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QHeaderView) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QHeaderView_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_paintEngine
func miqt_exec_callback_QHeaderView_paintEngine(self *C.QHeaderView, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QHeaderView_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QHeaderView_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_keyReleaseEvent
func miqt_exec_callback_QHeaderView_keyReleaseEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QHeaderView_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QHeaderView_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_enterEvent
func miqt_exec_callback_QHeaderView_enterEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QHeaderView_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QHeaderView_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_leaveEvent
func miqt_exec_callback_QHeaderView_leaveEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QHeaderView_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QHeaderView_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_moveEvent
func miqt_exec_callback_QHeaderView_moveEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QHeaderView_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QHeaderView_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_closeEvent
func miqt_exec_callback_QHeaderView_closeEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QHeaderView_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QHeaderView_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_tabletEvent
func miqt_exec_callback_QHeaderView_tabletEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QHeaderView_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QHeaderView_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_actionEvent
func miqt_exec_callback_QHeaderView_actionEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QHeaderView_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QHeaderView_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_showEvent
func miqt_exec_callback_QHeaderView_showEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QHeaderView_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QHeaderView_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_hideEvent
func miqt_exec_callback_QHeaderView_hideEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QHeaderView_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QHeaderView) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QHeaderView_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_nativeEvent
func miqt_exec_callback_QHeaderView_nativeEvent(self *C.QHeaderView, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QHeaderView_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QHeaderView) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QHeaderView_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_metric
func miqt_exec_callback_QHeaderView_metric(self *C.QHeaderView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QHeaderView) callVirtualBase_InitPainter(painter *QPainter) {

	C.QHeaderView_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QHeaderView) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QHeaderView_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_initPainter
func miqt_exec_callback_QHeaderView_initPainter(self *C.QHeaderView, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QHeaderView{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QHeaderView) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QHeaderView_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QHeaderView) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QHeaderView_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_redirected
func miqt_exec_callback_QHeaderView_redirected(self *C.QHeaderView, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QHeaderView_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QHeaderView) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QHeaderView_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_sharedPainter
func miqt_exec_callback_QHeaderView_sharedPainter(self *C.QHeaderView, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QHeaderView{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QHeaderView) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QHeaderView_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QHeaderView_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_childEvent
func miqt_exec_callback_QHeaderView_childEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_CustomEvent(event *QEvent) {

	C.QHeaderView_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QHeaderView) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QHeaderView_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_customEvent
func miqt_exec_callback_QHeaderView_customEvent(self *C.QHeaderView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QHeaderView{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QHeaderView) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QHeaderView_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QHeaderView) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QHeaderView_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_connectNotify
func miqt_exec_callback_QHeaderView_connectNotify(self *C.QHeaderView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QHeaderView{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QHeaderView) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QHeaderView_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QHeaderView) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QHeaderView_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QHeaderView_disconnectNotify
func miqt_exec_callback_QHeaderView_disconnectNotify(self *C.QHeaderView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QHeaderView{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QHeaderView) Delete() {
	C.QHeaderView_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHeaderView) GoGC() {
	runtime.SetFinalizer(this, func(this *QHeaderView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
