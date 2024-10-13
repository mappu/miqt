package qt

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

func newQHeaderView(h *C.QHeaderView) *QHeaderView {
	if h == nil {
		return nil
	}
	return &QHeaderView{h: h, QAbstractItemView: newQAbstractItemView_U(unsafe.Pointer(h))}
}

func newQHeaderView_U(h unsafe.Pointer) *QHeaderView {
	return newQHeaderView((*C.QHeaderView)(h))
}

// NewQHeaderView constructs a new QHeaderView object.
func NewQHeaderView(orientation Orientation) *QHeaderView {
	ret := C.QHeaderView_new((C.int)(orientation))
	return newQHeaderView(ret)
}

// NewQHeaderView2 constructs a new QHeaderView object.
func NewQHeaderView2(orientation Orientation, parent *QWidget) *QHeaderView {
	ret := C.QHeaderView_new2((C.int)(orientation), parent.cPointer())
	return newQHeaderView(ret)
}

func (this *QHeaderView) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QHeaderView_MetaObject(this.h)))
}

func (this *QHeaderView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QHeaderView_Metacast(this.h, param1_Cstring)
}

func QHeaderView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QHeaderView_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QHeaderView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QHeaderView_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QHeaderView) SetModel(model *QAbstractItemModel) {
	C.QHeaderView_SetModel(this.h, model.cPointer())
}

func (this *QHeaderView) Orientation() Orientation {
	return (Orientation)(C.QHeaderView_Orientation(this.h))
}

func (this *QHeaderView) Offset() int {
	return (int)(C.QHeaderView_Offset(this.h))
}

func (this *QHeaderView) Length() int {
	return (int)(C.QHeaderView_Length(this.h))
}

func (this *QHeaderView) SizeHint() *QSize {
	_ret := C.QHeaderView_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHeaderView) SetVisible(v bool) {
	C.QHeaderView_SetVisible(this.h, (C.bool)(v))
}

func (this *QHeaderView) SectionSizeHint(logicalIndex int) int {
	return (int)(C.QHeaderView_SectionSizeHint(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) VisualIndexAt(position int) int {
	return (int)(C.QHeaderView_VisualIndexAt(this.h, (C.int)(position)))
}

func (this *QHeaderView) LogicalIndexAt(position int) int {
	return (int)(C.QHeaderView_LogicalIndexAt(this.h, (C.int)(position)))
}

func (this *QHeaderView) LogicalIndexAt2(x int, y int) int {
	return (int)(C.QHeaderView_LogicalIndexAt2(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QHeaderView) LogicalIndexAtWithPos(pos *QPoint) int {
	return (int)(C.QHeaderView_LogicalIndexAtWithPos(this.h, pos.cPointer()))
}

func (this *QHeaderView) SectionSize(logicalIndex int) int {
	return (int)(C.QHeaderView_SectionSize(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) SectionPosition(logicalIndex int) int {
	return (int)(C.QHeaderView_SectionPosition(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) SectionViewportPosition(logicalIndex int) int {
	return (int)(C.QHeaderView_SectionViewportPosition(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) MoveSection(from int, to int) {
	C.QHeaderView_MoveSection(this.h, (C.int)(from), (C.int)(to))
}

func (this *QHeaderView) SwapSections(first int, second int) {
	C.QHeaderView_SwapSections(this.h, (C.int)(first), (C.int)(second))
}

func (this *QHeaderView) ResizeSection(logicalIndex int, size int) {
	C.QHeaderView_ResizeSection(this.h, (C.int)(logicalIndex), (C.int)(size))
}

func (this *QHeaderView) ResizeSections(mode QHeaderView__ResizeMode) {
	C.QHeaderView_ResizeSections(this.h, (C.int)(mode))
}

func (this *QHeaderView) IsSectionHidden(logicalIndex int) bool {
	return (bool)(C.QHeaderView_IsSectionHidden(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) SetSectionHidden(logicalIndex int, hide bool) {
	C.QHeaderView_SetSectionHidden(this.h, (C.int)(logicalIndex), (C.bool)(hide))
}

func (this *QHeaderView) HiddenSectionCount() int {
	return (int)(C.QHeaderView_HiddenSectionCount(this.h))
}

func (this *QHeaderView) HideSection(logicalIndex int) {
	C.QHeaderView_HideSection(this.h, (C.int)(logicalIndex))
}

func (this *QHeaderView) ShowSection(logicalIndex int) {
	C.QHeaderView_ShowSection(this.h, (C.int)(logicalIndex))
}

func (this *QHeaderView) Count() int {
	return (int)(C.QHeaderView_Count(this.h))
}

func (this *QHeaderView) VisualIndex(logicalIndex int) int {
	return (int)(C.QHeaderView_VisualIndex(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) LogicalIndex(visualIndex int) int {
	return (int)(C.QHeaderView_LogicalIndex(this.h, (C.int)(visualIndex)))
}

func (this *QHeaderView) SetSectionsMovable(movable bool) {
	C.QHeaderView_SetSectionsMovable(this.h, (C.bool)(movable))
}

func (this *QHeaderView) SectionsMovable() bool {
	return (bool)(C.QHeaderView_SectionsMovable(this.h))
}

func (this *QHeaderView) SetFirstSectionMovable(movable bool) {
	C.QHeaderView_SetFirstSectionMovable(this.h, (C.bool)(movable))
}

func (this *QHeaderView) IsFirstSectionMovable() bool {
	return (bool)(C.QHeaderView_IsFirstSectionMovable(this.h))
}

func (this *QHeaderView) SetSectionsClickable(clickable bool) {
	C.QHeaderView_SetSectionsClickable(this.h, (C.bool)(clickable))
}

func (this *QHeaderView) SectionsClickable() bool {
	return (bool)(C.QHeaderView_SectionsClickable(this.h))
}

func (this *QHeaderView) SetHighlightSections(highlight bool) {
	C.QHeaderView_SetHighlightSections(this.h, (C.bool)(highlight))
}

func (this *QHeaderView) HighlightSections() bool {
	return (bool)(C.QHeaderView_HighlightSections(this.h))
}

func (this *QHeaderView) SectionResizeMode(logicalIndex int) QHeaderView__ResizeMode {
	return (QHeaderView__ResizeMode)(C.QHeaderView_SectionResizeMode(this.h, (C.int)(logicalIndex)))
}

func (this *QHeaderView) SetSectionResizeMode(mode QHeaderView__ResizeMode) {
	C.QHeaderView_SetSectionResizeMode(this.h, (C.int)(mode))
}

func (this *QHeaderView) SetSectionResizeMode2(logicalIndex int, mode QHeaderView__ResizeMode) {
	C.QHeaderView_SetSectionResizeMode2(this.h, (C.int)(logicalIndex), (C.int)(mode))
}

func (this *QHeaderView) SetResizeContentsPrecision(precision int) {
	C.QHeaderView_SetResizeContentsPrecision(this.h, (C.int)(precision))
}

func (this *QHeaderView) ResizeContentsPrecision() int {
	return (int)(C.QHeaderView_ResizeContentsPrecision(this.h))
}

func (this *QHeaderView) StretchSectionCount() int {
	return (int)(C.QHeaderView_StretchSectionCount(this.h))
}

func (this *QHeaderView) SetSortIndicatorShown(show bool) {
	C.QHeaderView_SetSortIndicatorShown(this.h, (C.bool)(show))
}

func (this *QHeaderView) IsSortIndicatorShown() bool {
	return (bool)(C.QHeaderView_IsSortIndicatorShown(this.h))
}

func (this *QHeaderView) SetSortIndicator(logicalIndex int, order SortOrder) {
	C.QHeaderView_SetSortIndicator(this.h, (C.int)(logicalIndex), (C.int)(order))
}

func (this *QHeaderView) SortIndicatorSection() int {
	return (int)(C.QHeaderView_SortIndicatorSection(this.h))
}

func (this *QHeaderView) SortIndicatorOrder() SortOrder {
	return (SortOrder)(C.QHeaderView_SortIndicatorOrder(this.h))
}

func (this *QHeaderView) StretchLastSection() bool {
	return (bool)(C.QHeaderView_StretchLastSection(this.h))
}

func (this *QHeaderView) SetStretchLastSection(stretch bool) {
	C.QHeaderView_SetStretchLastSection(this.h, (C.bool)(stretch))
}

func (this *QHeaderView) CascadingSectionResizes() bool {
	return (bool)(C.QHeaderView_CascadingSectionResizes(this.h))
}

func (this *QHeaderView) SetCascadingSectionResizes(enable bool) {
	C.QHeaderView_SetCascadingSectionResizes(this.h, (C.bool)(enable))
}

func (this *QHeaderView) DefaultSectionSize() int {
	return (int)(C.QHeaderView_DefaultSectionSize(this.h))
}

func (this *QHeaderView) SetDefaultSectionSize(size int) {
	C.QHeaderView_SetDefaultSectionSize(this.h, (C.int)(size))
}

func (this *QHeaderView) ResetDefaultSectionSize() {
	C.QHeaderView_ResetDefaultSectionSize(this.h)
}

func (this *QHeaderView) MinimumSectionSize() int {
	return (int)(C.QHeaderView_MinimumSectionSize(this.h))
}

func (this *QHeaderView) SetMinimumSectionSize(size int) {
	C.QHeaderView_SetMinimumSectionSize(this.h, (C.int)(size))
}

func (this *QHeaderView) MaximumSectionSize() int {
	return (int)(C.QHeaderView_MaximumSectionSize(this.h))
}

func (this *QHeaderView) SetMaximumSectionSize(size int) {
	C.QHeaderView_SetMaximumSectionSize(this.h, (C.int)(size))
}

func (this *QHeaderView) DefaultAlignment() AlignmentFlag {
	return (AlignmentFlag)(C.QHeaderView_DefaultAlignment(this.h))
}

func (this *QHeaderView) SetDefaultAlignment(alignment AlignmentFlag) {
	C.QHeaderView_SetDefaultAlignment(this.h, (C.int)(alignment))
}

func (this *QHeaderView) DoItemsLayout() {
	C.QHeaderView_DoItemsLayout(this.h)
}

func (this *QHeaderView) SectionsMoved() bool {
	return (bool)(C.QHeaderView_SectionsMoved(this.h))
}

func (this *QHeaderView) SectionsHidden() bool {
	return (bool)(C.QHeaderView_SectionsHidden(this.h))
}

func (this *QHeaderView) SaveState() *QByteArray {
	_ret := C.QHeaderView_SaveState(this.h)
	_goptr := newQByteArray(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHeaderView) RestoreState(state *QByteArray) bool {
	return (bool)(C.QHeaderView_RestoreState(this.h, state.cPointer()))
}

func (this *QHeaderView) Reset() {
	C.QHeaderView_Reset(this.h)
}

func (this *QHeaderView) SetOffset(offset int) {
	C.QHeaderView_SetOffset(this.h, (C.int)(offset))
}

func (this *QHeaderView) SetOffsetToSectionPosition(visualIndex int) {
	C.QHeaderView_SetOffsetToSectionPosition(this.h, (C.int)(visualIndex))
}

func (this *QHeaderView) SetOffsetToLastSection() {
	C.QHeaderView_SetOffsetToLastSection(this.h)
}

func (this *QHeaderView) HeaderDataChanged(orientation Orientation, logicalFirst int, logicalLast int) {
	C.QHeaderView_HeaderDataChanged(this.h, (C.int)(orientation), (C.int)(logicalFirst), (C.int)(logicalLast))
}

func (this *QHeaderView) SectionMoved(logicalIndex int, oldVisualIndex int, newVisualIndex int) {
	C.QHeaderView_SectionMoved(this.h, (C.int)(logicalIndex), (C.int)(oldVisualIndex), (C.int)(newVisualIndex))
}
func (this *QHeaderView) OnSectionMoved(slot func(logicalIndex int, oldVisualIndex int, newVisualIndex int)) {
	C.QHeaderView_connect_SectionMoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SectionMoved
func miqt_exec_callback_QHeaderView_SectionMoved(cb C.intptr_t, logicalIndex C.int, oldVisualIndex C.int, newVisualIndex C.int) {
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
	C.QHeaderView_SectionResized(this.h, (C.int)(logicalIndex), (C.int)(oldSize), (C.int)(newSize))
}
func (this *QHeaderView) OnSectionResized(slot func(logicalIndex int, oldSize int, newSize int)) {
	C.QHeaderView_connect_SectionResized(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SectionResized
func miqt_exec_callback_QHeaderView_SectionResized(cb C.intptr_t, logicalIndex C.int, oldSize C.int, newSize C.int) {
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
	C.QHeaderView_SectionPressed(this.h, (C.int)(logicalIndex))
}
func (this *QHeaderView) OnSectionPressed(slot func(logicalIndex int)) {
	C.QHeaderView_connect_SectionPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SectionPressed
func miqt_exec_callback_QHeaderView_SectionPressed(cb C.intptr_t, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	gofunc(slotval1)
}

func (this *QHeaderView) SectionClicked(logicalIndex int) {
	C.QHeaderView_SectionClicked(this.h, (C.int)(logicalIndex))
}
func (this *QHeaderView) OnSectionClicked(slot func(logicalIndex int)) {
	C.QHeaderView_connect_SectionClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SectionClicked
func miqt_exec_callback_QHeaderView_SectionClicked(cb C.intptr_t, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	gofunc(slotval1)
}

func (this *QHeaderView) SectionEntered(logicalIndex int) {
	C.QHeaderView_SectionEntered(this.h, (C.int)(logicalIndex))
}
func (this *QHeaderView) OnSectionEntered(slot func(logicalIndex int)) {
	C.QHeaderView_connect_SectionEntered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SectionEntered
func miqt_exec_callback_QHeaderView_SectionEntered(cb C.intptr_t, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	gofunc(slotval1)
}

func (this *QHeaderView) SectionDoubleClicked(logicalIndex int) {
	C.QHeaderView_SectionDoubleClicked(this.h, (C.int)(logicalIndex))
}
func (this *QHeaderView) OnSectionDoubleClicked(slot func(logicalIndex int)) {
	C.QHeaderView_connect_SectionDoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SectionDoubleClicked
func miqt_exec_callback_QHeaderView_SectionDoubleClicked(cb C.intptr_t, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	gofunc(slotval1)
}

func (this *QHeaderView) SectionCountChanged(oldCount int, newCount int) {
	C.QHeaderView_SectionCountChanged(this.h, (C.int)(oldCount), (C.int)(newCount))
}
func (this *QHeaderView) OnSectionCountChanged(slot func(oldCount int, newCount int)) {
	C.QHeaderView_connect_SectionCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SectionCountChanged
func miqt_exec_callback_QHeaderView_SectionCountChanged(cb C.intptr_t, oldCount C.int, newCount C.int) {
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
	C.QHeaderView_SectionHandleDoubleClicked(this.h, (C.int)(logicalIndex))
}
func (this *QHeaderView) OnSectionHandleDoubleClicked(slot func(logicalIndex int)) {
	C.QHeaderView_connect_SectionHandleDoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SectionHandleDoubleClicked
func miqt_exec_callback_QHeaderView_SectionHandleDoubleClicked(cb C.intptr_t, logicalIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	gofunc(slotval1)
}

func (this *QHeaderView) GeometriesChanged() {
	C.QHeaderView_GeometriesChanged(this.h)
}
func (this *QHeaderView) OnGeometriesChanged(slot func()) {
	C.QHeaderView_connect_GeometriesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_GeometriesChanged
func miqt_exec_callback_QHeaderView_GeometriesChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QHeaderView) SortIndicatorChanged(logicalIndex int, order SortOrder) {
	C.QHeaderView_SortIndicatorChanged(this.h, (C.int)(logicalIndex), (C.int)(order))
}
func (this *QHeaderView) OnSortIndicatorChanged(slot func(logicalIndex int, order SortOrder)) {
	C.QHeaderView_connect_SortIndicatorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QHeaderView_SortIndicatorChanged
func miqt_exec_callback_QHeaderView_SortIndicatorChanged(cb C.intptr_t, logicalIndex C.int, order C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(logicalIndex int, order SortOrder))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(logicalIndex)

	slotval2 := (SortOrder)(order)

	gofunc(slotval1, slotval2)
}

func QHeaderView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QHeaderView_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QHeaderView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QHeaderView_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QHeaderView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QHeaderView_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QHeaderView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QHeaderView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QHeaderView) Delete() {
	C.QHeaderView_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHeaderView) GoGC() {
	runtime.SetFinalizer(this, func(this *QHeaderView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
