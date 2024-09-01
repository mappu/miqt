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
func NewQHeaderView(orientation uintptr) *QHeaderView {
	ret := C.QHeaderView_new((C.uintptr_t)(orientation))
	return newQHeaderView(ret)
}

// NewQHeaderView2 constructs a new QHeaderView object.
func NewQHeaderView2(orientation uintptr, parent *QWidget) *QHeaderView {
	ret := C.QHeaderView_new2((C.uintptr_t)(orientation), parent.cPointer())
	return newQHeaderView(ret)
}

func (this *QHeaderView) MetaObject() *QMetaObject {
	ret := C.QHeaderView_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QHeaderView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QHeaderView_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QHeaderView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QHeaderView_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QHeaderView) SetModel(model *QAbstractItemModel) {
	C.QHeaderView_SetModel(this.h, model.cPointer())
}

func (this *QHeaderView) Orientation() uintptr {
	ret := C.QHeaderView_Orientation(this.h)
	return (uintptr)(ret)
}

func (this *QHeaderView) Offset() int {
	ret := C.QHeaderView_Offset(this.h)
	return (int)(ret)
}

func (this *QHeaderView) Length() int {
	ret := C.QHeaderView_Length(this.h)
	return (int)(ret)
}

func (this *QHeaderView) SizeHint() *QSize {
	ret := C.QHeaderView_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QHeaderView) SetVisible(v bool) {
	C.QHeaderView_SetVisible(this.h, (C.bool)(v))
}

func (this *QHeaderView) SectionSizeHint(logicalIndex int) int {
	ret := C.QHeaderView_SectionSizeHint(this.h, (C.int)(logicalIndex))
	return (int)(ret)
}

func (this *QHeaderView) VisualIndexAt(position int) int {
	ret := C.QHeaderView_VisualIndexAt(this.h, (C.int)(position))
	return (int)(ret)
}

func (this *QHeaderView) LogicalIndexAt(position int) int {
	ret := C.QHeaderView_LogicalIndexAt(this.h, (C.int)(position))
	return (int)(ret)
}

func (this *QHeaderView) LogicalIndexAt2(x int, y int) int {
	ret := C.QHeaderView_LogicalIndexAt2(this.h, (C.int)(x), (C.int)(y))
	return (int)(ret)
}

func (this *QHeaderView) LogicalIndexAtWithPos(pos *QPoint) int {
	ret := C.QHeaderView_LogicalIndexAtWithPos(this.h, pos.cPointer())
	return (int)(ret)
}

func (this *QHeaderView) SectionSize(logicalIndex int) int {
	ret := C.QHeaderView_SectionSize(this.h, (C.int)(logicalIndex))
	return (int)(ret)
}

func (this *QHeaderView) SectionPosition(logicalIndex int) int {
	ret := C.QHeaderView_SectionPosition(this.h, (C.int)(logicalIndex))
	return (int)(ret)
}

func (this *QHeaderView) SectionViewportPosition(logicalIndex int) int {
	ret := C.QHeaderView_SectionViewportPosition(this.h, (C.int)(logicalIndex))
	return (int)(ret)
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

func (this *QHeaderView) ResizeSections(mode uintptr) {
	C.QHeaderView_ResizeSections(this.h, (C.uintptr_t)(mode))
}

func (this *QHeaderView) IsSectionHidden(logicalIndex int) bool {
	ret := C.QHeaderView_IsSectionHidden(this.h, (C.int)(logicalIndex))
	return (bool)(ret)
}

func (this *QHeaderView) SetSectionHidden(logicalIndex int, hide bool) {
	C.QHeaderView_SetSectionHidden(this.h, (C.int)(logicalIndex), (C.bool)(hide))
}

func (this *QHeaderView) HiddenSectionCount() int {
	ret := C.QHeaderView_HiddenSectionCount(this.h)
	return (int)(ret)
}

func (this *QHeaderView) HideSection(logicalIndex int) {
	C.QHeaderView_HideSection(this.h, (C.int)(logicalIndex))
}

func (this *QHeaderView) ShowSection(logicalIndex int) {
	C.QHeaderView_ShowSection(this.h, (C.int)(logicalIndex))
}

func (this *QHeaderView) Count() int {
	ret := C.QHeaderView_Count(this.h)
	return (int)(ret)
}

func (this *QHeaderView) VisualIndex(logicalIndex int) int {
	ret := C.QHeaderView_VisualIndex(this.h, (C.int)(logicalIndex))
	return (int)(ret)
}

func (this *QHeaderView) LogicalIndex(visualIndex int) int {
	ret := C.QHeaderView_LogicalIndex(this.h, (C.int)(visualIndex))
	return (int)(ret)
}

func (this *QHeaderView) SetSectionsMovable(movable bool) {
	C.QHeaderView_SetSectionsMovable(this.h, (C.bool)(movable))
}

func (this *QHeaderView) SectionsMovable() bool {
	ret := C.QHeaderView_SectionsMovable(this.h)
	return (bool)(ret)
}

func (this *QHeaderView) SetFirstSectionMovable(movable bool) {
	C.QHeaderView_SetFirstSectionMovable(this.h, (C.bool)(movable))
}

func (this *QHeaderView) IsFirstSectionMovable() bool {
	ret := C.QHeaderView_IsFirstSectionMovable(this.h)
	return (bool)(ret)
}

func (this *QHeaderView) SetSectionsClickable(clickable bool) {
	C.QHeaderView_SetSectionsClickable(this.h, (C.bool)(clickable))
}

func (this *QHeaderView) SectionsClickable() bool {
	ret := C.QHeaderView_SectionsClickable(this.h)
	return (bool)(ret)
}

func (this *QHeaderView) SetHighlightSections(highlight bool) {
	C.QHeaderView_SetHighlightSections(this.h, (C.bool)(highlight))
}

func (this *QHeaderView) HighlightSections() bool {
	ret := C.QHeaderView_HighlightSections(this.h)
	return (bool)(ret)
}

func (this *QHeaderView) SectionResizeMode(logicalIndex int) uintptr {
	ret := C.QHeaderView_SectionResizeMode(this.h, (C.int)(logicalIndex))
	return (uintptr)(ret)
}

func (this *QHeaderView) SetSectionResizeMode(mode uintptr) {
	C.QHeaderView_SetSectionResizeMode(this.h, (C.uintptr_t)(mode))
}

func (this *QHeaderView) SetSectionResizeMode2(logicalIndex int, mode uintptr) {
	C.QHeaderView_SetSectionResizeMode2(this.h, (C.int)(logicalIndex), (C.uintptr_t)(mode))
}

func (this *QHeaderView) SetResizeContentsPrecision(precision int) {
	C.QHeaderView_SetResizeContentsPrecision(this.h, (C.int)(precision))
}

func (this *QHeaderView) ResizeContentsPrecision() int {
	ret := C.QHeaderView_ResizeContentsPrecision(this.h)
	return (int)(ret)
}

func (this *QHeaderView) StretchSectionCount() int {
	ret := C.QHeaderView_StretchSectionCount(this.h)
	return (int)(ret)
}

func (this *QHeaderView) SetSortIndicatorShown(show bool) {
	C.QHeaderView_SetSortIndicatorShown(this.h, (C.bool)(show))
}

func (this *QHeaderView) IsSortIndicatorShown() bool {
	ret := C.QHeaderView_IsSortIndicatorShown(this.h)
	return (bool)(ret)
}

func (this *QHeaderView) SetSortIndicator(logicalIndex int, order uintptr) {
	C.QHeaderView_SetSortIndicator(this.h, (C.int)(logicalIndex), (C.uintptr_t)(order))
}

func (this *QHeaderView) SortIndicatorSection() int {
	ret := C.QHeaderView_SortIndicatorSection(this.h)
	return (int)(ret)
}

func (this *QHeaderView) SortIndicatorOrder() uintptr {
	ret := C.QHeaderView_SortIndicatorOrder(this.h)
	return (uintptr)(ret)
}

func (this *QHeaderView) StretchLastSection() bool {
	ret := C.QHeaderView_StretchLastSection(this.h)
	return (bool)(ret)
}

func (this *QHeaderView) SetStretchLastSection(stretch bool) {
	C.QHeaderView_SetStretchLastSection(this.h, (C.bool)(stretch))
}

func (this *QHeaderView) CascadingSectionResizes() bool {
	ret := C.QHeaderView_CascadingSectionResizes(this.h)
	return (bool)(ret)
}

func (this *QHeaderView) SetCascadingSectionResizes(enable bool) {
	C.QHeaderView_SetCascadingSectionResizes(this.h, (C.bool)(enable))
}

func (this *QHeaderView) DefaultSectionSize() int {
	ret := C.QHeaderView_DefaultSectionSize(this.h)
	return (int)(ret)
}

func (this *QHeaderView) SetDefaultSectionSize(size int) {
	C.QHeaderView_SetDefaultSectionSize(this.h, (C.int)(size))
}

func (this *QHeaderView) ResetDefaultSectionSize() {
	C.QHeaderView_ResetDefaultSectionSize(this.h)
}

func (this *QHeaderView) MinimumSectionSize() int {
	ret := C.QHeaderView_MinimumSectionSize(this.h)
	return (int)(ret)
}

func (this *QHeaderView) SetMinimumSectionSize(size int) {
	C.QHeaderView_SetMinimumSectionSize(this.h, (C.int)(size))
}

func (this *QHeaderView) MaximumSectionSize() int {
	ret := C.QHeaderView_MaximumSectionSize(this.h)
	return (int)(ret)
}

func (this *QHeaderView) SetMaximumSectionSize(size int) {
	C.QHeaderView_SetMaximumSectionSize(this.h, (C.int)(size))
}

func (this *QHeaderView) DefaultAlignment() int {
	ret := C.QHeaderView_DefaultAlignment(this.h)
	return (int)(ret)
}

func (this *QHeaderView) SetDefaultAlignment(alignment int) {
	C.QHeaderView_SetDefaultAlignment(this.h, (C.int)(alignment))
}

func (this *QHeaderView) DoItemsLayout() {
	C.QHeaderView_DoItemsLayout(this.h)
}

func (this *QHeaderView) SectionsMoved() bool {
	ret := C.QHeaderView_SectionsMoved(this.h)
	return (bool)(ret)
}

func (this *QHeaderView) SectionsHidden() bool {
	ret := C.QHeaderView_SectionsHidden(this.h)
	return (bool)(ret)
}

func (this *QHeaderView) SaveState() *QByteArray {
	ret := C.QHeaderView_SaveState(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QHeaderView) RestoreState(state *QByteArray) bool {
	ret := C.QHeaderView_RestoreState(this.h, state.cPointer())
	return (bool)(ret)
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

func (this *QHeaderView) HeaderDataChanged(orientation uintptr, logicalFirst int, logicalLast int) {
	C.QHeaderView_HeaderDataChanged(this.h, (C.uintptr_t)(orientation), (C.int)(logicalFirst), (C.int)(logicalLast))
}

func (this *QHeaderView) SectionMoved(logicalIndex int, oldVisualIndex int, newVisualIndex int) {
	C.QHeaderView_SectionMoved(this.h, (C.int)(logicalIndex), (C.int)(oldVisualIndex), (C.int)(newVisualIndex))
}

func (this *QHeaderView) OnSectionMoved(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QHeaderView_connect_SectionMoved(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QHeaderView) SectionResized(logicalIndex int, oldSize int, newSize int) {
	C.QHeaderView_SectionResized(this.h, (C.int)(logicalIndex), (C.int)(oldSize), (C.int)(newSize))
}

func (this *QHeaderView) OnSectionResized(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QHeaderView_connect_SectionResized(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QHeaderView) SectionPressed(logicalIndex int) {
	C.QHeaderView_SectionPressed(this.h, (C.int)(logicalIndex))
}

func (this *QHeaderView) OnSectionPressed(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QHeaderView_connect_SectionPressed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QHeaderView) SectionClicked(logicalIndex int) {
	C.QHeaderView_SectionClicked(this.h, (C.int)(logicalIndex))
}

func (this *QHeaderView) OnSectionClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QHeaderView_connect_SectionClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QHeaderView) SectionEntered(logicalIndex int) {
	C.QHeaderView_SectionEntered(this.h, (C.int)(logicalIndex))
}

func (this *QHeaderView) OnSectionEntered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QHeaderView_connect_SectionEntered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QHeaderView) SectionDoubleClicked(logicalIndex int) {
	C.QHeaderView_SectionDoubleClicked(this.h, (C.int)(logicalIndex))
}

func (this *QHeaderView) OnSectionDoubleClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QHeaderView_connect_SectionDoubleClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QHeaderView) SectionCountChanged(oldCount int, newCount int) {
	C.QHeaderView_SectionCountChanged(this.h, (C.int)(oldCount), (C.int)(newCount))
}

func (this *QHeaderView) OnSectionCountChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QHeaderView_connect_SectionCountChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QHeaderView) SectionHandleDoubleClicked(logicalIndex int) {
	C.QHeaderView_SectionHandleDoubleClicked(this.h, (C.int)(logicalIndex))
}

func (this *QHeaderView) OnSectionHandleDoubleClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QHeaderView_connect_SectionHandleDoubleClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QHeaderView) GeometriesChanged() {
	C.QHeaderView_GeometriesChanged(this.h)
}

func (this *QHeaderView) OnGeometriesChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QHeaderView_connect_GeometriesChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QHeaderView) SortIndicatorChanged(logicalIndex int, order uintptr) {
	C.QHeaderView_SortIndicatorChanged(this.h, (C.int)(logicalIndex), (C.uintptr_t)(order))
}

func (this *QHeaderView) OnSortIndicatorChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QHeaderView_connect_SortIndicatorChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QHeaderView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QHeaderView_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QHeaderView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QHeaderView_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QHeaderView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QHeaderView_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QHeaderView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QHeaderView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QHeaderView) Delete() {
	C.QHeaderView_Delete(this.h)
}
