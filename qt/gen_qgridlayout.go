package qt

/*

#include "gen_qgridlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGridLayout struct {
	h *C.QGridLayout
	*QLayout
}

func (this *QGridLayout) cPointer() *C.QGridLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGridLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGridLayout constructs the type using only CGO pointers.
func newQGridLayout(h *C.QGridLayout) *QGridLayout {
	if h == nil {
		return nil
	}
	var outptr_QLayout *C.QLayout = nil
	C.QGridLayout_virtbase(h, &outptr_QLayout)

	return &QGridLayout{h: h,
		QLayout: newQLayout(outptr_QLayout)}
}

// UnsafeNewQGridLayout constructs the type using only unsafe pointers.
func UnsafeNewQGridLayout(h unsafe.Pointer) *QGridLayout {
	return newQGridLayout((*C.QGridLayout)(h))
}

// NewQGridLayout constructs a new QGridLayout object.
func NewQGridLayout(parent *QWidget) *QGridLayout {

	return newQGridLayout(C.QGridLayout_new(parent.cPointer()))
}

// NewQGridLayout2 constructs a new QGridLayout object.
func NewQGridLayout2() *QGridLayout {

	return newQGridLayout(C.QGridLayout_new2())
}

func (this *QGridLayout) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGridLayout_metaObject(this.h))
}

func (this *QGridLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGridLayout_metacast(this.h, param1_Cstring))
}

func QGridLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGridLayout_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGridLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGridLayout_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGridLayout) SizeHint() *QSize {
	_goptr := newQSize(C.QGridLayout_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGridLayout) MinimumSize() *QSize {
	_goptr := newQSize(C.QGridLayout_minimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGridLayout) MaximumSize() *QSize {
	_goptr := newQSize(C.QGridLayout_maximumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGridLayout) SetHorizontalSpacing(spacing int) {
	C.QGridLayout_setHorizontalSpacing(this.h, (C.int)(spacing))
}

func (this *QGridLayout) HorizontalSpacing() int {
	return (int)(C.QGridLayout_horizontalSpacing(this.h))
}

func (this *QGridLayout) SetVerticalSpacing(spacing int) {
	C.QGridLayout_setVerticalSpacing(this.h, (C.int)(spacing))
}

func (this *QGridLayout) VerticalSpacing() int {
	return (int)(C.QGridLayout_verticalSpacing(this.h))
}

func (this *QGridLayout) SetSpacing(spacing int) {
	C.QGridLayout_setSpacing(this.h, (C.int)(spacing))
}

func (this *QGridLayout) Spacing() int {
	return (int)(C.QGridLayout_spacing(this.h))
}

func (this *QGridLayout) SetRowStretch(row int, stretch int) {
	C.QGridLayout_setRowStretch(this.h, (C.int)(row), (C.int)(stretch))
}

func (this *QGridLayout) SetColumnStretch(column int, stretch int) {
	C.QGridLayout_setColumnStretch(this.h, (C.int)(column), (C.int)(stretch))
}

func (this *QGridLayout) RowStretch(row int) int {
	return (int)(C.QGridLayout_rowStretch(this.h, (C.int)(row)))
}

func (this *QGridLayout) ColumnStretch(column int) int {
	return (int)(C.QGridLayout_columnStretch(this.h, (C.int)(column)))
}

func (this *QGridLayout) SetRowMinimumHeight(row int, minSize int) {
	C.QGridLayout_setRowMinimumHeight(this.h, (C.int)(row), (C.int)(minSize))
}

func (this *QGridLayout) SetColumnMinimumWidth(column int, minSize int) {
	C.QGridLayout_setColumnMinimumWidth(this.h, (C.int)(column), (C.int)(minSize))
}

func (this *QGridLayout) RowMinimumHeight(row int) int {
	return (int)(C.QGridLayout_rowMinimumHeight(this.h, (C.int)(row)))
}

func (this *QGridLayout) ColumnMinimumWidth(column int) int {
	return (int)(C.QGridLayout_columnMinimumWidth(this.h, (C.int)(column)))
}

func (this *QGridLayout) ColumnCount() int {
	return (int)(C.QGridLayout_columnCount(this.h))
}

func (this *QGridLayout) RowCount() int {
	return (int)(C.QGridLayout_rowCount(this.h))
}

func (this *QGridLayout) CellRect(row int, column int) *QRect {
	_goptr := newQRect(C.QGridLayout_cellRect(this.h, (C.int)(row), (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGridLayout) HasHeightForWidth() bool {
	return (bool)(C.QGridLayout_hasHeightForWidth(this.h))
}

func (this *QGridLayout) HeightForWidth(param1 int) int {
	return (int)(C.QGridLayout_heightForWidth(this.h, (C.int)(param1)))
}

func (this *QGridLayout) MinimumHeightForWidth(param1 int) int {
	return (int)(C.QGridLayout_minimumHeightForWidth(this.h, (C.int)(param1)))
}

func (this *QGridLayout) ExpandingDirections() Orientation {
	return (Orientation)(C.QGridLayout_expandingDirections(this.h))
}

func (this *QGridLayout) Invalidate() {
	C.QGridLayout_invalidate(this.h)
}

func (this *QGridLayout) AddWidget(w *QWidget) {
	C.QGridLayout_addWidget(this.h, w.cPointer())
}

func (this *QGridLayout) AddWidget2(param1 *QWidget, row int, column int) {
	C.QGridLayout_addWidget2(this.h, param1.cPointer(), (C.int)(row), (C.int)(column))
}

func (this *QGridLayout) AddWidget3(param1 *QWidget, row int, column int, rowSpan int, columnSpan int) {
	C.QGridLayout_addWidget3(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan))
}

func (this *QGridLayout) AddLayout(param1 *QLayout, row int, column int) {
	C.QGridLayout_addLayout(this.h, param1.cPointer(), (C.int)(row), (C.int)(column))
}

func (this *QGridLayout) AddLayout2(param1 *QLayout, row int, column int, rowSpan int, columnSpan int) {
	C.QGridLayout_addLayout2(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan))
}

func (this *QGridLayout) SetOriginCorner(originCorner Corner) {
	C.QGridLayout_setOriginCorner(this.h, (C.int)(originCorner))
}

func (this *QGridLayout) OriginCorner() Corner {
	return (Corner)(C.QGridLayout_originCorner(this.h))
}

func (this *QGridLayout) ItemAt(index int) *QLayoutItem {
	return newQLayoutItem(C.QGridLayout_itemAt(this.h, (C.int)(index)))
}

func (this *QGridLayout) ItemAtPosition(row int, column int) *QLayoutItem {
	return newQLayoutItem(C.QGridLayout_itemAtPosition(this.h, (C.int)(row), (C.int)(column)))
}

func (this *QGridLayout) TakeAt(index int) *QLayoutItem {
	return newQLayoutItem(C.QGridLayout_takeAt(this.h, (C.int)(index)))
}

func (this *QGridLayout) Count() int {
	return (int)(C.QGridLayout_count(this.h))
}

func (this *QGridLayout) SetGeometry(geometry *QRect) {
	C.QGridLayout_setGeometry(this.h, geometry.cPointer())
}

func (this *QGridLayout) AddItem(item *QLayoutItem, row int, column int) {
	C.QGridLayout_addItem(this.h, item.cPointer(), (C.int)(row), (C.int)(column))
}

func (this *QGridLayout) SetDefaultPositioning(n int, orient Orientation) {
	C.QGridLayout_setDefaultPositioning(this.h, (C.int)(n), (C.int)(orient))
}

func (this *QGridLayout) GetItemPosition(idx int, row *int, column *int, rowSpan *int, columnSpan *int) {
	C.QGridLayout_getItemPosition(this.h, (C.int)(idx), (*C.int)(unsafe.Pointer(row)), (*C.int)(unsafe.Pointer(column)), (*C.int)(unsafe.Pointer(rowSpan)), (*C.int)(unsafe.Pointer(columnSpan)))
}

func QGridLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGridLayout_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGridLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGridLayout_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGridLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGridLayout_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGridLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGridLayout_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGridLayout) AddWidget4(param1 *QWidget, row int, column int, param4 AlignmentFlag) {
	C.QGridLayout_addWidget4(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(param4))
}

func (this *QGridLayout) AddWidget6(param1 *QWidget, row int, column int, rowSpan int, columnSpan int, param6 AlignmentFlag) {
	C.QGridLayout_addWidget6(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan), (C.int)(param6))
}

func (this *QGridLayout) AddLayout4(param1 *QLayout, row int, column int, param4 AlignmentFlag) {
	C.QGridLayout_addLayout4(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(param4))
}

func (this *QGridLayout) AddLayout6(param1 *QLayout, row int, column int, rowSpan int, columnSpan int, param6 AlignmentFlag) {
	C.QGridLayout_addLayout6(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan), (C.int)(param6))
}

func (this *QGridLayout) AddItem4(item *QLayoutItem, row int, column int, rowSpan int) {
	C.QGridLayout_addItem4(this.h, item.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan))
}

func (this *QGridLayout) AddItem5(item *QLayoutItem, row int, column int, rowSpan int, columnSpan int) {
	C.QGridLayout_addItem5(this.h, item.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan))
}

func (this *QGridLayout) AddItem6(item *QLayoutItem, row int, column int, rowSpan int, columnSpan int, param6 AlignmentFlag) {
	C.QGridLayout_addItem6(this.h, item.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan), (C.int)(param6))
}

// WidgetEvent can only be called from a QGridLayout that was directly constructed.
func (this *QGridLayout) WidgetEvent(param1 *QEvent) {

	var _dynamic_cast_ok C.bool = false
	C.QGridLayout_protectedbase_widgetEvent(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddChildLayout can only be called from a QGridLayout that was directly constructed.
func (this *QGridLayout) AddChildLayout(l *QLayout) {

	var _dynamic_cast_ok C.bool = false
	C.QGridLayout_protectedbase_addChildLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h), l.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddChildWidget can only be called from a QGridLayout that was directly constructed.
func (this *QGridLayout) AddChildWidget(w *QWidget) {

	var _dynamic_cast_ok C.bool = false
	C.QGridLayout_protectedbase_addChildWidget(&_dynamic_cast_ok, unsafe.Pointer(this.h), w.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AdoptLayout can only be called from a QGridLayout that was directly constructed.
func (this *QGridLayout) AdoptLayout(layout *QLayout) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGridLayout_protectedbase_adoptLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h), layout.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// AlignmentRect can only be called from a QGridLayout that was directly constructed.
func (this *QGridLayout) AlignmentRect(param1 *QRect) QRect {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQRect(C.QGridLayout_protectedbase_alignmentRect(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QGridLayout that was directly constructed.
func (this *QGridLayout) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QGridLayout_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGridLayout that was directly constructed.
func (this *QGridLayout) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGridLayout_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGridLayout that was directly constructed.
func (this *QGridLayout) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGridLayout_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGridLayout that was directly constructed.
func (this *QGridLayout) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGridLayout_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QGridLayout) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QGridLayout_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGridLayout) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QGridLayout_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_sizeHint
func miqt_exec_callback_QGridLayout_sizeHint(self *C.QGridLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QGridLayout) callVirtualBase_MinimumSize() *QSize {

	_goptr := newQSize(C.QGridLayout_virtualbase_minimumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGridLayout) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QGridLayout_override_virtual_minimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_minimumSize
func miqt_exec_callback_QGridLayout_minimumSize(self *C.QGridLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QGridLayout) callVirtualBase_MaximumSize() *QSize {

	_goptr := newQSize(C.QGridLayout_virtualbase_maximumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGridLayout) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QGridLayout_override_virtual_maximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_maximumSize
func miqt_exec_callback_QGridLayout_maximumSize(self *C.QGridLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QGridLayout) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QGridLayout_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QGridLayout) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QGridLayout_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_hasHeightForWidth
func miqt_exec_callback_QGridLayout_hasHeightForWidth(self *C.QGridLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QGridLayout_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QGridLayout) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QGridLayout_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_heightForWidth
func miqt_exec_callback_QGridLayout_heightForWidth(self *C.QGridLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QGridLayout_virtualbase_minimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QGridLayout) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QGridLayout_override_virtual_minimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_minimumHeightForWidth
func miqt_exec_callback_QGridLayout_minimumHeightForWidth(self *C.QGridLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_ExpandingDirections() Orientation {

	return (Orientation)(C.QGridLayout_virtualbase_expandingDirections(unsafe.Pointer(this.h)))

}
func (this *QGridLayout) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	ok := C.QGridLayout_override_virtual_expandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_expandingDirections
func miqt_exec_callback_QGridLayout_expandingDirections(self *C.QGridLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_Invalidate() {

	C.QGridLayout_virtualbase_invalidate(unsafe.Pointer(this.h))

}
func (this *QGridLayout) OnInvalidate(slot func(super func())) {
	ok := C.QGridLayout_override_virtual_invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_invalidate
func miqt_exec_callback_QGridLayout_invalidate(self *C.QGridLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGridLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QGridLayout) callVirtualBase_ItemAt(index int) *QLayoutItem {

	return newQLayoutItem(C.QGridLayout_virtualbase_itemAt(unsafe.Pointer(this.h), (C.int)(index)))

}
func (this *QGridLayout) OnItemAt(slot func(super func(index int) *QLayoutItem, index int) *QLayoutItem) {
	ok := C.QGridLayout_override_virtual_itemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_itemAt
func miqt_exec_callback_QGridLayout_itemAt(self *C.QGridLayout, cb C.intptr_t, index C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int) *QLayoutItem, index int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_ItemAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGridLayout) callVirtualBase_TakeAt(index int) *QLayoutItem {

	return newQLayoutItem(C.QGridLayout_virtualbase_takeAt(unsafe.Pointer(this.h), (C.int)(index)))

}
func (this *QGridLayout) OnTakeAt(slot func(super func(index int) *QLayoutItem, index int) *QLayoutItem) {
	ok := C.QGridLayout_override_virtual_takeAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_takeAt
func miqt_exec_callback_QGridLayout_takeAt(self *C.QGridLayout, cb C.intptr_t, index C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int) *QLayoutItem, index int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_TakeAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGridLayout) callVirtualBase_Count() int {

	return (int)(C.QGridLayout_virtualbase_count(unsafe.Pointer(this.h)))

}
func (this *QGridLayout) OnCount(slot func(super func() int) int) {
	ok := C.QGridLayout_override_virtual_count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_count
func miqt_exec_callback_QGridLayout_count(self *C.QGridLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_SetGeometry(geometry *QRect) {

	C.QGridLayout_virtualbase_setGeometry(unsafe.Pointer(this.h), geometry.cPointer())

}
func (this *QGridLayout) OnSetGeometry(slot func(super func(geometry *QRect), geometry *QRect)) {
	ok := C.QGridLayout_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_setGeometry
func miqt_exec_callback_QGridLayout_setGeometry(self *C.QGridLayout, cb C.intptr_t, geometry *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(geometry *QRect), geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(geometry)

	gofunc((&QGridLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGridLayout) callVirtualBase_AddItemWithQLayoutItem(param1 *QLayoutItem) {

	C.QGridLayout_virtualbase_addItemWithQLayoutItem(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QGridLayout) OnAddItemWithQLayoutItem(slot func(super func(param1 *QLayoutItem), param1 *QLayoutItem)) {
	ok := C.QGridLayout_override_virtual_addItemWithQLayoutItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_addItemWithQLayoutItem
func miqt_exec_callback_QGridLayout_addItemWithQLayoutItem(self *C.QGridLayout, cb C.intptr_t, param1 *C.QLayoutItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QLayoutItem), param1 *QLayoutItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQLayoutItem(param1)

	gofunc((&QGridLayout{h: self}).callVirtualBase_AddItemWithQLayoutItem, slotval1)

}

func (this *QGridLayout) callVirtualBase_Geometry() *QRect {

	_goptr := newQRect(C.QGridLayout_virtualbase_geometry(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGridLayout) OnGeometry(slot func(super func() *QRect) *QRect) {
	ok := C.QGridLayout_override_virtual_geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_geometry
func miqt_exec_callback_QGridLayout_geometry(self *C.QGridLayout, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_Geometry)

	return virtualReturn.cPointer()

}

func (this *QGridLayout) callVirtualBase_IndexOf(param1 *QWidget) int {

	return (int)(C.QGridLayout_virtualbase_indexOf(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QGridLayout) OnIndexOf(slot func(super func(param1 *QWidget) int, param1 *QWidget) int) {
	ok := C.QGridLayout_override_virtual_indexOf(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_indexOf
func miqt_exec_callback_QGridLayout_indexOf(self *C.QGridLayout, cb C.intptr_t, param1 *C.QWidget) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWidget) int, param1 *QWidget) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(param1)

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_IndexOf, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QGridLayout_virtualbase_isEmpty(unsafe.Pointer(this.h)))

}
func (this *QGridLayout) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QGridLayout_override_virtual_isEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_isEmpty
func miqt_exec_callback_QGridLayout_isEmpty(self *C.QGridLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QGridLayout_virtualbase_controlTypes(unsafe.Pointer(this.h)))

}
func (this *QGridLayout) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	ok := C.QGridLayout_override_virtual_controlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_controlTypes
func miqt_exec_callback_QGridLayout_controlTypes(self *C.QGridLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_Layout() *QLayout {

	return newQLayout(C.QGridLayout_virtualbase_layout(unsafe.Pointer(this.h)))

}
func (this *QGridLayout) OnLayout(slot func(super func() *QLayout) *QLayout) {
	ok := C.QGridLayout_override_virtual_layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_layout
func miqt_exec_callback_QGridLayout_layout(self *C.QGridLayout, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLayout) *QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_Layout)

	return virtualReturn.cPointer()

}

func (this *QGridLayout) callVirtualBase_ChildEvent(e *QChildEvent) {

	C.QGridLayout_virtualbase_childEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QGridLayout) OnChildEvent(slot func(super func(e *QChildEvent), e *QChildEvent)) {
	ok := C.QGridLayout_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_childEvent
func miqt_exec_callback_QGridLayout_childEvent(self *C.QGridLayout, cb C.intptr_t, e *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QChildEvent), e *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(e)

	gofunc((&QGridLayout{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGridLayout) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGridLayout_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGridLayout) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGridLayout_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_event
func miqt_exec_callback_QGridLayout_event(self *C.QGridLayout, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QGridLayout_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGridLayout) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGridLayout_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_eventFilter
func miqt_exec_callback_QGridLayout_eventFilter(self *C.QGridLayout, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGridLayout) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGridLayout_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGridLayout) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGridLayout_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_timerEvent
func miqt_exec_callback_QGridLayout_timerEvent(self *C.QGridLayout, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGridLayout{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGridLayout) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGridLayout_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGridLayout) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGridLayout_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_customEvent
func miqt_exec_callback_QGridLayout_customEvent(self *C.QGridLayout, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGridLayout{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGridLayout) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGridLayout_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGridLayout) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGridLayout_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_connectNotify
func miqt_exec_callback_QGridLayout_connectNotify(self *C.QGridLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGridLayout{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGridLayout) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGridLayout_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGridLayout) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGridLayout_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_disconnectNotify
func miqt_exec_callback_QGridLayout_disconnectNotify(self *C.QGridLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGridLayout{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QGridLayout) callVirtualBase_Widget() *QWidget {

	return newQWidget(C.QGridLayout_virtualbase_widget(unsafe.Pointer(this.h)))

}
func (this *QGridLayout) OnWidget(slot func(super func() *QWidget) *QWidget) {
	ok := C.QGridLayout_override_virtual_widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_widget
func miqt_exec_callback_QGridLayout_widget(self *C.QGridLayout, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_Widget)

	return virtualReturn.cPointer()

}

func (this *QGridLayout) callVirtualBase_SpacerItem() *QSpacerItem {

	return newQSpacerItem(C.QGridLayout_virtualbase_spacerItem(unsafe.Pointer(this.h)))

}
func (this *QGridLayout) OnSpacerItem(slot func(super func() *QSpacerItem) *QSpacerItem) {
	ok := C.QGridLayout_override_virtual_spacerItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGridLayout_spacerItem
func miqt_exec_callback_QGridLayout_spacerItem(self *C.QGridLayout, cb C.intptr_t) *C.QSpacerItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSpacerItem) *QSpacerItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGridLayout{h: self}).callVirtualBase_SpacerItem)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGridLayout) Delete() {
	C.QGridLayout_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGridLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QGridLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
