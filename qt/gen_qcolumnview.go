package qt

/*

#include "gen_qcolumnview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QColumnView struct {
	h *C.QColumnView
	*QAbstractItemView
}

func (this *QColumnView) cPointer() *C.QColumnView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QColumnView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQColumnView constructs the type using only CGO pointers.
func newQColumnView(h *C.QColumnView) *QColumnView {
	if h == nil {
		return nil
	}
	var outptr_QAbstractItemView *C.QAbstractItemView = nil
	C.QColumnView_virtbase(h, &outptr_QAbstractItemView)

	return &QColumnView{h: h,
		QAbstractItemView: newQAbstractItemView(outptr_QAbstractItemView)}
}

// UnsafeNewQColumnView constructs the type using only unsafe pointers.
func UnsafeNewQColumnView(h unsafe.Pointer) *QColumnView {
	return newQColumnView((*C.QColumnView)(h))
}

// NewQColumnView constructs a new QColumnView object.
func NewQColumnView(parent *QWidget) *QColumnView {

	return newQColumnView(C.QColumnView_new(parent.cPointer()))
}

// NewQColumnView2 constructs a new QColumnView object.
func NewQColumnView2() *QColumnView {

	return newQColumnView(C.QColumnView_new2())
}

func (this *QColumnView) MetaObject() *QMetaObject {
	return newQMetaObject(C.QColumnView_metaObject(this.h))
}

func (this *QColumnView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QColumnView_metacast(this.h, param1_Cstring))
}

func QColumnView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QColumnView_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QColumnView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QColumnView_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QColumnView) UpdatePreviewWidget(index *QModelIndex) {
	C.QColumnView_updatePreviewWidget(this.h, index.cPointer())
}
func (this *QColumnView) OnUpdatePreviewWidget(slot func(index *QModelIndex)) {
	C.QColumnView_connect_updatePreviewWidget(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColumnView_updatePreviewWidget
func miqt_exec_callback_QColumnView_updatePreviewWidget(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc(slotval1)
}

func (this *QColumnView) IndexAt(point *QPoint) *QModelIndex {
	_goptr := newQModelIndex(C.QColumnView_indexAt(this.h, point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColumnView) ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {
	C.QColumnView_scrollTo(this.h, index.cPointer(), (C.int)(hint))
}

func (this *QColumnView) SizeHint() *QSize {
	_goptr := newQSize(C.QColumnView_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColumnView) VisualRect(index *QModelIndex) *QRect {
	_goptr := newQRect(C.QColumnView_visualRect(this.h, index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColumnView) SetModel(model *QAbstractItemModel) {
	C.QColumnView_setModel(this.h, model.cPointer())
}

func (this *QColumnView) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QColumnView_setSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QColumnView) SetRootIndex(index *QModelIndex) {
	C.QColumnView_setRootIndex(this.h, index.cPointer())
}

func (this *QColumnView) SelectAll() {
	C.QColumnView_selectAll(this.h)
}

func (this *QColumnView) SetResizeGripsVisible(visible bool) {
	C.QColumnView_setResizeGripsVisible(this.h, (C.bool)(visible))
}

func (this *QColumnView) ResizeGripsVisible() bool {
	return (bool)(C.QColumnView_resizeGripsVisible(this.h))
}

func (this *QColumnView) PreviewWidget() *QWidget {
	return newQWidget(C.QColumnView_previewWidget(this.h))
}

func (this *QColumnView) SetPreviewWidget(widget *QWidget) {
	C.QColumnView_setPreviewWidget(this.h, widget.cPointer())
}

func (this *QColumnView) SetColumnWidths(list []int) {
	list_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_CArray[i] = (C.int)(list[i])
	}
	list_ma := C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	C.QColumnView_setColumnWidths(this.h, list_ma)
}

func (this *QColumnView) ColumnWidths() []int {
	var _ma C.struct_miqt_array = C.QColumnView_columnWidths(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func QColumnView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QColumnView_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QColumnView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QColumnView_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QColumnView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QColumnView_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QColumnView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QColumnView_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// InitializeColumn can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) InitializeColumn(column *QAbstractItemView) {

	var _dynamic_cast_ok C.bool = false
	C.QColumnView_protectedbase_initializeColumn(&_dynamic_cast_ok, unsafe.Pointer(this.h), column.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetHorizontalStepsPerItem can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) SetHorizontalStepsPerItem(steps int) {

	var _dynamic_cast_ok C.bool = false
	C.QColumnView_protectedbase_setHorizontalStepsPerItem(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(steps))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// HorizontalStepsPerItem can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) HorizontalStepsPerItem() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QColumnView_protectedbase_horizontalStepsPerItem(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetVerticalStepsPerItem can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) SetVerticalStepsPerItem(steps int) {

	var _dynamic_cast_ok C.bool = false
	C.QColumnView_protectedbase_setVerticalStepsPerItem(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(steps))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// VerticalStepsPerItem can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) VerticalStepsPerItem() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QColumnView_protectedbase_verticalStepsPerItem(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// State can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) State() QAbstractItemView__State {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (QAbstractItemView__State)(C.QColumnView_protectedbase_state(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetState can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) SetState(state QAbstractItemView__State) {

	var _dynamic_cast_ok C.bool = false
	C.QColumnView_protectedbase_setState(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(state))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ScheduleDelayedItemsLayout can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) ScheduleDelayedItemsLayout() {

	var _dynamic_cast_ok C.bool = false
	C.QColumnView_protectedbase_scheduleDelayedItemsLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ExecuteDelayedItemsLayout can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) ExecuteDelayedItemsLayout() {

	var _dynamic_cast_ok C.bool = false
	C.QColumnView_protectedbase_executeDelayedItemsLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetDirtyRegion can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) SetDirtyRegion(region *QRegion) {

	var _dynamic_cast_ok C.bool = false
	C.QColumnView_protectedbase_setDirtyRegion(&_dynamic_cast_ok, unsafe.Pointer(this.h), region.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ScrollDirtyRegion can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) ScrollDirtyRegion(dx int, dy int) {

	var _dynamic_cast_ok C.bool = false
	C.QColumnView_protectedbase_scrollDirtyRegion(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DirtyRegionOffset can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) DirtyRegionOffset() QPoint {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQPoint(C.QColumnView_protectedbase_dirtyRegionOffset(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// StartAutoScroll can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) StartAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QColumnView_protectedbase_startAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// StopAutoScroll can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) StopAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QColumnView_protectedbase_stopAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DoAutoScroll can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) DoAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QColumnView_protectedbase_doAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DropIndicatorPosition can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) DropIndicatorPosition() QAbstractItemView__DropIndicatorPosition {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (QAbstractItemView__DropIndicatorPosition)(C.QColumnView_protectedbase_dropIndicatorPosition(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetViewportMargins can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) SetViewportMargins(left int, top int, right int, bottom int) {

	var _dynamic_cast_ok C.bool = false
	C.QColumnView_protectedbase_setViewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ViewportMargins can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) ViewportMargins() QMargins {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQMargins(C.QColumnView_protectedbase_viewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DrawFrame can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) DrawFrame(param1 *QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QColumnView_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// InitStyleOption can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) InitStyleOption(option *QStyleOptionFrame) {

	var _dynamic_cast_ok C.bool = false
	C.QColumnView_protectedbase_initStyleOption(&_dynamic_cast_ok, unsafe.Pointer(this.h), option.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QColumnView_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QColumnView_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QColumnView_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QColumnView_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QColumnView_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QColumnView_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QColumnView_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QColumnView_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QColumnView that was directly constructed.
func (this *QColumnView) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QColumnView_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QColumnView) callVirtualBase_IndexAt(point *QPoint) *QModelIndex {

	_goptr := newQModelIndex(C.QColumnView_virtualbase_indexAt(unsafe.Pointer(this.h), point.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QColumnView) OnIndexAt(slot func(super func(point *QPoint) *QModelIndex, point *QPoint) *QModelIndex) {
	ok := C.QColumnView_override_virtual_indexAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_indexAt
func miqt_exec_callback_QColumnView_indexAt(self *C.QColumnView, cb C.intptr_t, point *C.QPoint) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPoint) *QModelIndex, point *QPoint) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(point)

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_IndexAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QColumnView) callVirtualBase_ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {

	C.QColumnView_virtualbase_scrollTo(unsafe.Pointer(this.h), index.cPointer(), (C.int)(hint))

}
func (this *QColumnView) OnScrollTo(slot func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint)) {
	ok := C.QColumnView_override_virtual_scrollTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_scrollTo
func miqt_exec_callback_QColumnView_scrollTo(self *C.QColumnView, cb C.intptr_t, index *C.QModelIndex, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__ScrollHint)(hint)

	gofunc((&QColumnView{h: self}).callVirtualBase_ScrollTo, slotval1, slotval2)

}

func (this *QColumnView) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QColumnView_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QColumnView) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QColumnView_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_sizeHint
func miqt_exec_callback_QColumnView_sizeHint(self *C.QColumnView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QColumnView) callVirtualBase_VisualRect(index *QModelIndex) *QRect {

	_goptr := newQRect(C.QColumnView_virtualbase_visualRect(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QColumnView) OnVisualRect(slot func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect) {
	ok := C.QColumnView_override_virtual_visualRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_visualRect
func miqt_exec_callback_QColumnView_visualRect(self *C.QColumnView, cb C.intptr_t, index *C.QModelIndex) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_VisualRect, slotval1)

	return virtualReturn.cPointer()

}

func (this *QColumnView) callVirtualBase_SetModel(model *QAbstractItemModel) {

	C.QColumnView_virtualbase_setModel(unsafe.Pointer(this.h), model.cPointer())

}
func (this *QColumnView) OnSetModel(slot func(super func(model *QAbstractItemModel), model *QAbstractItemModel)) {
	ok := C.QColumnView_override_virtual_setModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_setModel
func miqt_exec_callback_QColumnView_setModel(self *C.QColumnView, cb C.intptr_t, model *C.QAbstractItemModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(model *QAbstractItemModel), model *QAbstractItemModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAbstractItemModel(model)

	gofunc((&QColumnView{h: self}).callVirtualBase_SetModel, slotval1)

}

func (this *QColumnView) callVirtualBase_SetSelectionModel(selectionModel *QItemSelectionModel) {

	C.QColumnView_virtualbase_setSelectionModel(unsafe.Pointer(this.h), selectionModel.cPointer())

}
func (this *QColumnView) OnSetSelectionModel(slot func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel)) {
	ok := C.QColumnView_override_virtual_setSelectionModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_setSelectionModel
func miqt_exec_callback_QColumnView_setSelectionModel(self *C.QColumnView, cb C.intptr_t, selectionModel *C.QItemSelectionModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelectionModel(selectionModel)

	gofunc((&QColumnView{h: self}).callVirtualBase_SetSelectionModel, slotval1)

}

func (this *QColumnView) callVirtualBase_SetRootIndex(index *QModelIndex) {

	C.QColumnView_virtualbase_setRootIndex(unsafe.Pointer(this.h), index.cPointer())

}
func (this *QColumnView) OnSetRootIndex(slot func(super func(index *QModelIndex), index *QModelIndex)) {
	ok := C.QColumnView_override_virtual_setRootIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_setRootIndex
func miqt_exec_callback_QColumnView_setRootIndex(self *C.QColumnView, cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex), index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc((&QColumnView{h: self}).callVirtualBase_SetRootIndex, slotval1)

}

func (this *QColumnView) callVirtualBase_SelectAll() {

	C.QColumnView_virtualbase_selectAll(unsafe.Pointer(this.h))

}
func (this *QColumnView) OnSelectAll(slot func(super func())) {
	ok := C.QColumnView_override_virtual_selectAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_selectAll
func miqt_exec_callback_QColumnView_selectAll(self *C.QColumnView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QColumnView{h: self}).callVirtualBase_SelectAll)

}

func (this *QColumnView) callVirtualBase_IsIndexHidden(index *QModelIndex) bool {

	return (bool)(C.QColumnView_virtualbase_isIndexHidden(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QColumnView) OnIsIndexHidden(slot func(super func(index *QModelIndex) bool, index *QModelIndex) bool) {
	ok := C.QColumnView_override_virtual_isIndexHidden(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_isIndexHidden
func miqt_exec_callback_QColumnView_isIndexHidden(self *C.QColumnView, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) bool, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_IsIndexHidden, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QColumnView) callVirtualBase_MoveCursor(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex {

	_goptr := newQModelIndex(C.QColumnView_virtualbase_moveCursor(unsafe.Pointer(this.h), (C.int)(cursorAction), (C.int)(modifiers)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QColumnView) OnMoveCursor(slot func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex) {
	ok := C.QColumnView_override_virtual_moveCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_moveCursor
func miqt_exec_callback_QColumnView_moveCursor(self *C.QColumnView, cb C.intptr_t, cursorAction C.int, modifiers C.int) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractItemView__CursorAction)(cursorAction)

	slotval2 := (KeyboardModifier)(modifiers)

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_MoveCursor, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QColumnView) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QColumnView_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QColumnView_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_resizeEvent
func miqt_exec_callback_QColumnView_resizeEvent(self *C.QColumnView, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_SetSelection(rect *QRect, command QItemSelectionModel__SelectionFlag) {

	C.QColumnView_virtualbase_setSelection(unsafe.Pointer(this.h), rect.cPointer(), (C.int)(command))

}
func (this *QColumnView) OnSetSelection(slot func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag)) {
	ok := C.QColumnView_override_virtual_setSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_setSelection
func miqt_exec_callback_QColumnView_setSelection(self *C.QColumnView, cb C.intptr_t, rect *C.QRect, command C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(rect)

	slotval2 := (QItemSelectionModel__SelectionFlag)(command)

	gofunc((&QColumnView{h: self}).callVirtualBase_SetSelection, slotval1, slotval2)

}

func (this *QColumnView) callVirtualBase_VisualRegionForSelection(selection *QItemSelection) *QRegion {

	_goptr := newQRegion(C.QColumnView_virtualbase_visualRegionForSelection(unsafe.Pointer(this.h), selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QColumnView) OnVisualRegionForSelection(slot func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion) {
	ok := C.QColumnView_override_virtual_visualRegionForSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_visualRegionForSelection
func miqt_exec_callback_QColumnView_visualRegionForSelection(self *C.QColumnView, cb C.intptr_t, selection *C.QItemSelection) *C.QRegion {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selection)

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_VisualRegionForSelection, slotval1)

	return virtualReturn.cPointer()

}

func (this *QColumnView) callVirtualBase_HorizontalOffset() int {

	return (int)(C.QColumnView_virtualbase_horizontalOffset(unsafe.Pointer(this.h)))

}
func (this *QColumnView) OnHorizontalOffset(slot func(super func() int) int) {
	ok := C.QColumnView_override_virtual_horizontalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_horizontalOffset
func miqt_exec_callback_QColumnView_horizontalOffset(self *C.QColumnView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_HorizontalOffset)

	return (C.int)(virtualReturn)

}

func (this *QColumnView) callVirtualBase_VerticalOffset() int {

	return (int)(C.QColumnView_virtualbase_verticalOffset(unsafe.Pointer(this.h)))

}
func (this *QColumnView) OnVerticalOffset(slot func(super func() int) int) {
	ok := C.QColumnView_override_virtual_verticalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_verticalOffset
func miqt_exec_callback_QColumnView_verticalOffset(self *C.QColumnView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_VerticalOffset)

	return (C.int)(virtualReturn)

}

func (this *QColumnView) callVirtualBase_RowsInserted(parent *QModelIndex, start int, end int) {

	C.QColumnView_virtualbase_rowsInserted(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QColumnView) OnRowsInserted(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QColumnView_override_virtual_rowsInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_rowsInserted
func miqt_exec_callback_QColumnView_rowsInserted(self *C.QColumnView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QColumnView{h: self}).callVirtualBase_RowsInserted, slotval1, slotval2, slotval3)

}

func (this *QColumnView) callVirtualBase_CurrentChanged(current *QModelIndex, previous *QModelIndex) {

	C.QColumnView_virtualbase_currentChanged(unsafe.Pointer(this.h), current.cPointer(), previous.cPointer())

}
func (this *QColumnView) OnCurrentChanged(slot func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex)) {
	ok := C.QColumnView_override_virtual_currentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_currentChanged
func miqt_exec_callback_QColumnView_currentChanged(self *C.QColumnView, cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(current)

	slotval2 := newQModelIndex(previous)

	gofunc((&QColumnView{h: self}).callVirtualBase_CurrentChanged, slotval1, slotval2)

}

func (this *QColumnView) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QColumnView_virtualbase_scrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QColumnView) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QColumnView_override_virtual_scrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_scrollContentsBy
func miqt_exec_callback_QColumnView_scrollContentsBy(self *C.QColumnView, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QColumnView{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QColumnView) callVirtualBase_CreateColumn(rootIndex *QModelIndex) *QAbstractItemView {

	return newQAbstractItemView(C.QColumnView_virtualbase_createColumn(unsafe.Pointer(this.h), rootIndex.cPointer()))

}
func (this *QColumnView) OnCreateColumn(slot func(super func(rootIndex *QModelIndex) *QAbstractItemView, rootIndex *QModelIndex) *QAbstractItemView) {
	ok := C.QColumnView_override_virtual_createColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_createColumn
func miqt_exec_callback_QColumnView_createColumn(self *C.QColumnView, cb C.intptr_t, rootIndex *C.QModelIndex) *C.QAbstractItemView {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rootIndex *QModelIndex) *QAbstractItemView, rootIndex *QModelIndex) *QAbstractItemView)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(rootIndex)

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_CreateColumn, slotval1)

	return virtualReturn.cPointer()

}

func (this *QColumnView) callVirtualBase_KeyboardSearch(search string) {
	search_ms := C.struct_miqt_string{}
	search_ms.data = C.CString(search)
	search_ms.len = C.size_t(len(search))
	defer C.free(unsafe.Pointer(search_ms.data))

	C.QColumnView_virtualbase_keyboardSearch(unsafe.Pointer(this.h), search_ms)

}
func (this *QColumnView) OnKeyboardSearch(slot func(super func(search string), search string)) {
	ok := C.QColumnView_override_virtual_keyboardSearch(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_keyboardSearch
func miqt_exec_callback_QColumnView_keyboardSearch(self *C.QColumnView, cb C.intptr_t, search C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(search string), search string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var search_ms C.struct_miqt_string = search
	search_ret := C.GoStringN(search_ms.data, C.int(int64(search_ms.len)))
	C.free(unsafe.Pointer(search_ms.data))
	slotval1 := search_ret

	gofunc((&QColumnView{h: self}).callVirtualBase_KeyboardSearch, slotval1)

}

func (this *QColumnView) callVirtualBase_SizeHintForRow(row int) int {

	return (int)(C.QColumnView_virtualbase_sizeHintForRow(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QColumnView) OnSizeHintForRow(slot func(super func(row int) int, row int) int) {
	ok := C.QColumnView_override_virtual_sizeHintForRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_sizeHintForRow
func miqt_exec_callback_QColumnView_sizeHintForRow(self *C.QColumnView, cb C.intptr_t, row C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int) int, row int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_SizeHintForRow, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QColumnView) callVirtualBase_SizeHintForColumn(column int) int {

	return (int)(C.QColumnView_virtualbase_sizeHintForColumn(unsafe.Pointer(this.h), (C.int)(column)))

}
func (this *QColumnView) OnSizeHintForColumn(slot func(super func(column int) int, column int) int) {
	ok := C.QColumnView_override_virtual_sizeHintForColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_sizeHintForColumn
func miqt_exec_callback_QColumnView_sizeHintForColumn(self *C.QColumnView, cb C.intptr_t, column C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int) int, column int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_SizeHintForColumn, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QColumnView) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QColumnView_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QColumnView) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QColumnView_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_inputMethodQuery
func miqt_exec_callback_QColumnView_inputMethodQuery(self *C.QColumnView, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QColumnView) callVirtualBase_Reset() {

	C.QColumnView_virtualbase_reset(unsafe.Pointer(this.h))

}
func (this *QColumnView) OnReset(slot func(super func())) {
	ok := C.QColumnView_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_reset
func miqt_exec_callback_QColumnView_reset(self *C.QColumnView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QColumnView{h: self}).callVirtualBase_Reset)

}

func (this *QColumnView) callVirtualBase_DoItemsLayout() {

	C.QColumnView_virtualbase_doItemsLayout(unsafe.Pointer(this.h))

}
func (this *QColumnView) OnDoItemsLayout(slot func(super func())) {
	ok := C.QColumnView_override_virtual_doItemsLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_doItemsLayout
func miqt_exec_callback_QColumnView_doItemsLayout(self *C.QColumnView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QColumnView{h: self}).callVirtualBase_DoItemsLayout)

}

func (this *QColumnView) callVirtualBase_DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	roles_ma := C.struct_miqt_array{len: C.size_t(len(roles)), data: unsafe.Pointer(roles_CArray)}

	C.QColumnView_virtualbase_dataChanged(unsafe.Pointer(this.h), topLeft.cPointer(), bottomRight.cPointer(), roles_ma)

}
func (this *QColumnView) OnDataChanged(slot func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int)) {
	ok := C.QColumnView_override_virtual_dataChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_dataChanged
func miqt_exec_callback_QColumnView_dataChanged(self *C.QColumnView, cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles C.struct_miqt_array) {
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

	gofunc((&QColumnView{h: self}).callVirtualBase_DataChanged, slotval1, slotval2, slotval3)

}

func (this *QColumnView) callVirtualBase_RowsAboutToBeRemoved(parent *QModelIndex, start int, end int) {

	C.QColumnView_virtualbase_rowsAboutToBeRemoved(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QColumnView) OnRowsAboutToBeRemoved(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QColumnView_override_virtual_rowsAboutToBeRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_rowsAboutToBeRemoved
func miqt_exec_callback_QColumnView_rowsAboutToBeRemoved(self *C.QColumnView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QColumnView{h: self}).callVirtualBase_RowsAboutToBeRemoved, slotval1, slotval2, slotval3)

}

func (this *QColumnView) callVirtualBase_SelectionChanged(selected *QItemSelection, deselected *QItemSelection) {

	C.QColumnView_virtualbase_selectionChanged(unsafe.Pointer(this.h), selected.cPointer(), deselected.cPointer())

}
func (this *QColumnView) OnSelectionChanged(slot func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection)) {
	ok := C.QColumnView_override_virtual_selectionChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_selectionChanged
func miqt_exec_callback_QColumnView_selectionChanged(self *C.QColumnView, cb C.intptr_t, selected *C.QItemSelection, deselected *C.QItemSelection) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selected)

	slotval2 := newQItemSelection(deselected)

	gofunc((&QColumnView{h: self}).callVirtualBase_SelectionChanged, slotval1, slotval2)

}

func (this *QColumnView) callVirtualBase_UpdateEditorData() {

	C.QColumnView_virtualbase_updateEditorData(unsafe.Pointer(this.h))

}
func (this *QColumnView) OnUpdateEditorData(slot func(super func())) {
	ok := C.QColumnView_override_virtual_updateEditorData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_updateEditorData
func miqt_exec_callback_QColumnView_updateEditorData(self *C.QColumnView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QColumnView{h: self}).callVirtualBase_UpdateEditorData)

}

func (this *QColumnView) callVirtualBase_UpdateEditorGeometries() {

	C.QColumnView_virtualbase_updateEditorGeometries(unsafe.Pointer(this.h))

}
func (this *QColumnView) OnUpdateEditorGeometries(slot func(super func())) {
	ok := C.QColumnView_override_virtual_updateEditorGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_updateEditorGeometries
func miqt_exec_callback_QColumnView_updateEditorGeometries(self *C.QColumnView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QColumnView{h: self}).callVirtualBase_UpdateEditorGeometries)

}

func (this *QColumnView) callVirtualBase_UpdateGeometries() {

	C.QColumnView_virtualbase_updateGeometries(unsafe.Pointer(this.h))

}
func (this *QColumnView) OnUpdateGeometries(slot func(super func())) {
	ok := C.QColumnView_override_virtual_updateGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_updateGeometries
func miqt_exec_callback_QColumnView_updateGeometries(self *C.QColumnView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QColumnView{h: self}).callVirtualBase_UpdateGeometries)

}

func (this *QColumnView) callVirtualBase_VerticalScrollbarAction(action int) {

	C.QColumnView_virtualbase_verticalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QColumnView) OnVerticalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QColumnView_override_virtual_verticalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_verticalScrollbarAction
func miqt_exec_callback_QColumnView_verticalScrollbarAction(self *C.QColumnView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QColumnView{h: self}).callVirtualBase_VerticalScrollbarAction, slotval1)

}

func (this *QColumnView) callVirtualBase_HorizontalScrollbarAction(action int) {

	C.QColumnView_virtualbase_horizontalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QColumnView) OnHorizontalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QColumnView_override_virtual_horizontalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_horizontalScrollbarAction
func miqt_exec_callback_QColumnView_horizontalScrollbarAction(self *C.QColumnView, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QColumnView{h: self}).callVirtualBase_HorizontalScrollbarAction, slotval1)

}

func (this *QColumnView) callVirtualBase_VerticalScrollbarValueChanged(value int) {

	C.QColumnView_virtualbase_verticalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QColumnView) OnVerticalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QColumnView_override_virtual_verticalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_verticalScrollbarValueChanged
func miqt_exec_callback_QColumnView_verticalScrollbarValueChanged(self *C.QColumnView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QColumnView{h: self}).callVirtualBase_VerticalScrollbarValueChanged, slotval1)

}

func (this *QColumnView) callVirtualBase_HorizontalScrollbarValueChanged(value int) {

	C.QColumnView_virtualbase_horizontalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QColumnView) OnHorizontalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QColumnView_override_virtual_horizontalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_horizontalScrollbarValueChanged
func miqt_exec_callback_QColumnView_horizontalScrollbarValueChanged(self *C.QColumnView, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QColumnView{h: self}).callVirtualBase_HorizontalScrollbarValueChanged, slotval1)

}

func (this *QColumnView) callVirtualBase_CloseEditor(editor *QWidget, hint QAbstractItemDelegate__EndEditHint) {

	C.QColumnView_virtualbase_closeEditor(unsafe.Pointer(this.h), editor.cPointer(), (C.int)(hint))

}
func (this *QColumnView) OnCloseEditor(slot func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint)) {
	ok := C.QColumnView_override_virtual_closeEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_closeEditor
func miqt_exec_callback_QColumnView_closeEditor(self *C.QColumnView, cb C.intptr_t, editor *C.QWidget, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := (QAbstractItemDelegate__EndEditHint)(hint)

	gofunc((&QColumnView{h: self}).callVirtualBase_CloseEditor, slotval1, slotval2)

}

func (this *QColumnView) callVirtualBase_CommitData(editor *QWidget) {

	C.QColumnView_virtualbase_commitData(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QColumnView) OnCommitData(slot func(super func(editor *QWidget), editor *QWidget)) {
	ok := C.QColumnView_override_virtual_commitData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_commitData
func miqt_exec_callback_QColumnView_commitData(self *C.QColumnView, cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget), editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	gofunc((&QColumnView{h: self}).callVirtualBase_CommitData, slotval1)

}

func (this *QColumnView) callVirtualBase_EditorDestroyed(editor *QObject) {

	C.QColumnView_virtualbase_editorDestroyed(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QColumnView) OnEditorDestroyed(slot func(super func(editor *QObject), editor *QObject)) {
	ok := C.QColumnView_override_virtual_editorDestroyed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_editorDestroyed
func miqt_exec_callback_QColumnView_editorDestroyed(self *C.QColumnView, cb C.intptr_t, editor *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QObject), editor *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(editor)

	gofunc((&QColumnView{h: self}).callVirtualBase_EditorDestroyed, slotval1)

}

func (this *QColumnView) callVirtualBase_SelectedIndexes() []QModelIndex {

	var _ma C.struct_miqt_array = C.QColumnView_virtualbase_selectedIndexes(unsafe.Pointer(this.h))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QColumnView) OnSelectedIndexes(slot func(super func() []QModelIndex) []QModelIndex) {
	ok := C.QColumnView_override_virtual_selectedIndexes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_selectedIndexes
func miqt_exec_callback_QColumnView_selectedIndexes(self *C.QColumnView, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []QModelIndex) []QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_SelectedIndexes)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QColumnView) callVirtualBase_Edit2(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool {

	return (bool)(C.QColumnView_virtualbase_edit2(unsafe.Pointer(this.h), index.cPointer(), (C.int)(trigger), event.cPointer()))

}
func (this *QColumnView) OnEdit2(slot func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool) {
	ok := C.QColumnView_override_virtual_edit2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_edit2
func miqt_exec_callback_QColumnView_edit2(self *C.QColumnView, cb C.intptr_t, index *C.QModelIndex, trigger C.int, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__EditTrigger)(trigger)

	slotval3 := newQEvent(event)

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_Edit2, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QColumnView) callVirtualBase_SelectionCommand(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag {

	return (QItemSelectionModel__SelectionFlag)(C.QColumnView_virtualbase_selectionCommand(unsafe.Pointer(this.h), index.cPointer(), event.cPointer()))

}
func (this *QColumnView) OnSelectionCommand(slot func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag) {
	ok := C.QColumnView_override_virtual_selectionCommand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_selectionCommand
func miqt_exec_callback_QColumnView_selectionCommand(self *C.QColumnView, cb C.intptr_t, index *C.QModelIndex, event *C.QEvent) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_SelectionCommand, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QColumnView) callVirtualBase_StartDrag(supportedActions DropAction) {

	C.QColumnView_virtualbase_startDrag(unsafe.Pointer(this.h), (C.int)(supportedActions))

}
func (this *QColumnView) OnStartDrag(slot func(super func(supportedActions DropAction), supportedActions DropAction)) {
	ok := C.QColumnView_override_virtual_startDrag(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_startDrag
func miqt_exec_callback_QColumnView_startDrag(self *C.QColumnView, cb C.intptr_t, supportedActions C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(supportedActions DropAction), supportedActions DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(supportedActions)

	gofunc((&QColumnView{h: self}).callVirtualBase_StartDrag, slotval1)

}

func (this *QColumnView) callVirtualBase_ViewOptions() *QStyleOptionViewItem {

	_goptr := newQStyleOptionViewItem(C.QColumnView_virtualbase_viewOptions(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QColumnView) OnViewOptions(slot func(super func() *QStyleOptionViewItem) *QStyleOptionViewItem) {
	ok := C.QColumnView_override_virtual_viewOptions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_viewOptions
func miqt_exec_callback_QColumnView_viewOptions(self *C.QColumnView, cb C.intptr_t) *C.QStyleOptionViewItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QStyleOptionViewItem) *QStyleOptionViewItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_ViewOptions)

	return virtualReturn.cPointer()

}

func (this *QColumnView) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QColumnView_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QColumnView) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QColumnView_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_focusNextPrevChild
func miqt_exec_callback_QColumnView_focusNextPrevChild(self *C.QColumnView, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QColumnView) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QColumnView_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QColumnView) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QColumnView_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_event
func miqt_exec_callback_QColumnView_event(self *C.QColumnView, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QColumnView) callVirtualBase_ViewportEvent(event *QEvent) bool {

	return (bool)(C.QColumnView_virtualbase_viewportEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QColumnView) OnViewportEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QColumnView_override_virtual_viewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_viewportEvent
func miqt_exec_callback_QColumnView_viewportEvent(self *C.QColumnView, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QColumnView) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QColumnView_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QColumnView_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_mousePressEvent
func miqt_exec_callback_QColumnView_mousePressEvent(self *C.QColumnView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QColumnView_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QColumnView_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_mouseMoveEvent
func miqt_exec_callback_QColumnView_mouseMoveEvent(self *C.QColumnView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QColumnView_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QColumnView_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_mouseReleaseEvent
func miqt_exec_callback_QColumnView_mouseReleaseEvent(self *C.QColumnView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QColumnView_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QColumnView_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_mouseDoubleClickEvent
func miqt_exec_callback_QColumnView_mouseDoubleClickEvent(self *C.QColumnView, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QColumnView_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QColumnView_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_dragEnterEvent
func miqt_exec_callback_QColumnView_dragEnterEvent(self *C.QColumnView, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QColumnView_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QColumnView_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_dragMoveEvent
func miqt_exec_callback_QColumnView_dragMoveEvent(self *C.QColumnView, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QColumnView_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QColumnView_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_dragLeaveEvent
func miqt_exec_callback_QColumnView_dragLeaveEvent(self *C.QColumnView, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QColumnView_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QColumnView_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_dropEvent
func miqt_exec_callback_QColumnView_dropEvent(self *C.QColumnView, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QColumnView_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QColumnView_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_focusInEvent
func miqt_exec_callback_QColumnView_focusInEvent(self *C.QColumnView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QColumnView_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QColumnView_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_focusOutEvent
func miqt_exec_callback_QColumnView_focusOutEvent(self *C.QColumnView, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QColumnView_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QColumnView_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_keyPressEvent
func miqt_exec_callback_QColumnView_keyPressEvent(self *C.QColumnView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QColumnView_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QColumnView_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_timerEvent
func miqt_exec_callback_QColumnView_timerEvent(self *C.QColumnView, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QColumnView_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QColumnView_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_inputMethodEvent
func miqt_exec_callback_QColumnView_inputMethodEvent(self *C.QColumnView, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QColumnView_virtualbase_eventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QColumnView) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QColumnView_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_eventFilter
func miqt_exec_callback_QColumnView_eventFilter(self *C.QColumnView, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QColumnView) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QColumnView_virtualbase_viewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QColumnView) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QColumnView_override_virtual_viewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_viewportSizeHint
func miqt_exec_callback_QColumnView_viewportSizeHint(self *C.QColumnView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QColumnView) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QColumnView_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QColumnView) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QColumnView_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_minimumSizeHint
func miqt_exec_callback_QColumnView_minimumSizeHint(self *C.QColumnView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QColumnView) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QColumnView_virtualbase_setupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QColumnView) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QColumnView_override_virtual_setupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_setupViewport
func miqt_exec_callback_QColumnView_setupViewport(self *C.QColumnView, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QColumnView{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QColumnView) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QColumnView_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QColumnView) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QColumnView_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_paintEvent
func miqt_exec_callback_QColumnView_paintEvent(self *C.QColumnView, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QColumnView{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QColumnView_virtualbase_wheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QColumnView) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QColumnView_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_wheelEvent
func miqt_exec_callback_QColumnView_wheelEvent(self *C.QColumnView, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QColumnView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QColumnView_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QColumnView) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QColumnView_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_contextMenuEvent
func miqt_exec_callback_QColumnView_contextMenuEvent(self *C.QColumnView, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QColumnView{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QColumnView_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QColumnView) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QColumnView_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_changeEvent
func miqt_exec_callback_QColumnView_changeEvent(self *C.QColumnView, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QColumnView{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_DevType() int {

	return (int)(C.QColumnView_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QColumnView) OnDevType(slot func(super func() int) int) {
	ok := C.QColumnView_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_devType
func miqt_exec_callback_QColumnView_devType(self *C.QColumnView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QColumnView) callVirtualBase_SetVisible(visible bool) {

	C.QColumnView_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QColumnView) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QColumnView_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_setVisible
func miqt_exec_callback_QColumnView_setVisible(self *C.QColumnView, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QColumnView{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QColumnView) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QColumnView_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QColumnView) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QColumnView_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_heightForWidth
func miqt_exec_callback_QColumnView_heightForWidth(self *C.QColumnView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QColumnView) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QColumnView_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QColumnView) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QColumnView_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_hasHeightForWidth
func miqt_exec_callback_QColumnView_hasHeightForWidth(self *C.QColumnView, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QColumnView) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QColumnView_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QColumnView) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QColumnView_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_paintEngine
func miqt_exec_callback_QColumnView_paintEngine(self *C.QColumnView, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QColumnView) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QColumnView_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QColumnView_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_keyReleaseEvent
func miqt_exec_callback_QColumnView_keyReleaseEvent(self *C.QColumnView, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_EnterEvent(event *QEvent) {

	C.QColumnView_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QColumnView_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_enterEvent
func miqt_exec_callback_QColumnView_enterEvent(self *C.QColumnView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QColumnView_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QColumnView_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_leaveEvent
func miqt_exec_callback_QColumnView_leaveEvent(self *C.QColumnView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QColumnView_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QColumnView_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_moveEvent
func miqt_exec_callback_QColumnView_moveEvent(self *C.QColumnView, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QColumnView_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QColumnView_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_closeEvent
func miqt_exec_callback_QColumnView_closeEvent(self *C.QColumnView, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QColumnView_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QColumnView_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_tabletEvent
func miqt_exec_callback_QColumnView_tabletEvent(self *C.QColumnView, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QColumnView_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QColumnView_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_actionEvent
func miqt_exec_callback_QColumnView_actionEvent(self *C.QColumnView, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QColumnView_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QColumnView_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_showEvent
func miqt_exec_callback_QColumnView_showEvent(self *C.QColumnView, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QColumnView_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QColumnView_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_hideEvent
func miqt_exec_callback_QColumnView_hideEvent(self *C.QColumnView, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QColumnView_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QColumnView) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QColumnView_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_nativeEvent
func miqt_exec_callback_QColumnView_nativeEvent(self *C.QColumnView, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QColumnView) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QColumnView_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QColumnView) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QColumnView_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_metric
func miqt_exec_callback_QColumnView_metric(self *C.QColumnView, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QColumnView) callVirtualBase_InitPainter(painter *QPainter) {

	C.QColumnView_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QColumnView) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QColumnView_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_initPainter
func miqt_exec_callback_QColumnView_initPainter(self *C.QColumnView, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QColumnView{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QColumnView) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QColumnView_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QColumnView) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QColumnView_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_redirected
func miqt_exec_callback_QColumnView_redirected(self *C.QColumnView, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QColumnView) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QColumnView_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QColumnView) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QColumnView_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_sharedPainter
func miqt_exec_callback_QColumnView_sharedPainter(self *C.QColumnView, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QColumnView{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QColumnView) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QColumnView_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QColumnView_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_childEvent
func miqt_exec_callback_QColumnView_childEvent(self *C.QColumnView, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_CustomEvent(event *QEvent) {

	C.QColumnView_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QColumnView) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QColumnView_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_customEvent
func miqt_exec_callback_QColumnView_customEvent(self *C.QColumnView, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QColumnView{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QColumnView) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QColumnView_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QColumnView) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QColumnView_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_connectNotify
func miqt_exec_callback_QColumnView_connectNotify(self *C.QColumnView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QColumnView{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QColumnView) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QColumnView_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QColumnView) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QColumnView_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QColumnView_disconnectNotify
func miqt_exec_callback_QColumnView_disconnectNotify(self *C.QColumnView, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QColumnView{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QColumnView) Delete() {
	C.QColumnView_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QColumnView) GoGC() {
	runtime.SetFinalizer(this, func(this *QColumnView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
