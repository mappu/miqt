package qt

/*

#include "gen_qformlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QFormLayout__FieldGrowthPolicy int

const (
	QFormLayout__FieldsStayAtSizeHint  QFormLayout__FieldGrowthPolicy = 0
	QFormLayout__ExpandingFieldsGrow   QFormLayout__FieldGrowthPolicy = 1
	QFormLayout__AllNonFixedFieldsGrow QFormLayout__FieldGrowthPolicy = 2
)

type QFormLayout__RowWrapPolicy int

const (
	QFormLayout__DontWrapRows QFormLayout__RowWrapPolicy = 0
	QFormLayout__WrapLongRows QFormLayout__RowWrapPolicy = 1
	QFormLayout__WrapAllRows  QFormLayout__RowWrapPolicy = 2
)

type QFormLayout__ItemRole int

const (
	QFormLayout__LabelRole    QFormLayout__ItemRole = 0
	QFormLayout__FieldRole    QFormLayout__ItemRole = 1
	QFormLayout__SpanningRole QFormLayout__ItemRole = 2
)

type QFormLayout struct {
	h *C.QFormLayout
	*QLayout
}

func (this *QFormLayout) cPointer() *C.QFormLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFormLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFormLayout constructs the type using only CGO pointers.
func newQFormLayout(h *C.QFormLayout) *QFormLayout {
	if h == nil {
		return nil
	}
	var outptr_QLayout *C.QLayout = nil
	C.QFormLayout_virtbase(h, &outptr_QLayout)

	return &QFormLayout{h: h,
		QLayout: newQLayout(outptr_QLayout)}
}

// UnsafeNewQFormLayout constructs the type using only unsafe pointers.
func UnsafeNewQFormLayout(h unsafe.Pointer) *QFormLayout {
	return newQFormLayout((*C.QFormLayout)(h))
}

// NewQFormLayout constructs a new QFormLayout object.
func NewQFormLayout(parent *QWidget) *QFormLayout {

	return newQFormLayout(C.QFormLayout_new(parent.cPointer()))
}

// NewQFormLayout2 constructs a new QFormLayout object.
func NewQFormLayout2() *QFormLayout {

	return newQFormLayout(C.QFormLayout_new2())
}

func (this *QFormLayout) MetaObject() *QMetaObject {
	return newQMetaObject(C.QFormLayout_metaObject(this.h))
}

func (this *QFormLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QFormLayout_metacast(this.h, param1_Cstring))
}

func QFormLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFormLayout_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFormLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QFormLayout_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFormLayout) SetFieldGrowthPolicy(policy QFormLayout__FieldGrowthPolicy) {
	C.QFormLayout_setFieldGrowthPolicy(this.h, (C.int)(policy))
}

func (this *QFormLayout) FieldGrowthPolicy() QFormLayout__FieldGrowthPolicy {
	return (QFormLayout__FieldGrowthPolicy)(C.QFormLayout_fieldGrowthPolicy(this.h))
}

func (this *QFormLayout) SetRowWrapPolicy(policy QFormLayout__RowWrapPolicy) {
	C.QFormLayout_setRowWrapPolicy(this.h, (C.int)(policy))
}

func (this *QFormLayout) RowWrapPolicy() QFormLayout__RowWrapPolicy {
	return (QFormLayout__RowWrapPolicy)(C.QFormLayout_rowWrapPolicy(this.h))
}

func (this *QFormLayout) SetLabelAlignment(alignment AlignmentFlag) {
	C.QFormLayout_setLabelAlignment(this.h, (C.int)(alignment))
}

func (this *QFormLayout) LabelAlignment() AlignmentFlag {
	return (AlignmentFlag)(C.QFormLayout_labelAlignment(this.h))
}

func (this *QFormLayout) SetFormAlignment(alignment AlignmentFlag) {
	C.QFormLayout_setFormAlignment(this.h, (C.int)(alignment))
}

func (this *QFormLayout) FormAlignment() AlignmentFlag {
	return (AlignmentFlag)(C.QFormLayout_formAlignment(this.h))
}

func (this *QFormLayout) SetHorizontalSpacing(spacing int) {
	C.QFormLayout_setHorizontalSpacing(this.h, (C.int)(spacing))
}

func (this *QFormLayout) HorizontalSpacing() int {
	return (int)(C.QFormLayout_horizontalSpacing(this.h))
}

func (this *QFormLayout) SetVerticalSpacing(spacing int) {
	C.QFormLayout_setVerticalSpacing(this.h, (C.int)(spacing))
}

func (this *QFormLayout) VerticalSpacing() int {
	return (int)(C.QFormLayout_verticalSpacing(this.h))
}

func (this *QFormLayout) Spacing() int {
	return (int)(C.QFormLayout_spacing(this.h))
}

func (this *QFormLayout) SetSpacing(spacing int) {
	C.QFormLayout_setSpacing(this.h, (C.int)(spacing))
}

func (this *QFormLayout) AddRow(label *QWidget, field *QWidget) {
	C.QFormLayout_addRow(this.h, label.cPointer(), field.cPointer())
}

func (this *QFormLayout) AddRow2(label *QWidget, field *QLayout) {
	C.QFormLayout_addRow2(this.h, label.cPointer(), field.cPointer())
}

func (this *QFormLayout) AddRow3(labelText string, field *QWidget) {
	labelText_ms := C.struct_miqt_string{}
	labelText_ms.data = C.CString(labelText)
	labelText_ms.len = C.size_t(len(labelText))
	defer C.free(unsafe.Pointer(labelText_ms.data))
	C.QFormLayout_addRow3(this.h, labelText_ms, field.cPointer())
}

func (this *QFormLayout) AddRow4(labelText string, field *QLayout) {
	labelText_ms := C.struct_miqt_string{}
	labelText_ms.data = C.CString(labelText)
	labelText_ms.len = C.size_t(len(labelText))
	defer C.free(unsafe.Pointer(labelText_ms.data))
	C.QFormLayout_addRow4(this.h, labelText_ms, field.cPointer())
}

func (this *QFormLayout) AddRowWithWidget(widget *QWidget) {
	C.QFormLayout_addRowWithWidget(this.h, widget.cPointer())
}

func (this *QFormLayout) AddRowWithLayout(layout *QLayout) {
	C.QFormLayout_addRowWithLayout(this.h, layout.cPointer())
}

func (this *QFormLayout) InsertRow(row int, label *QWidget, field *QWidget) {
	C.QFormLayout_insertRow(this.h, (C.int)(row), label.cPointer(), field.cPointer())
}

func (this *QFormLayout) InsertRow2(row int, label *QWidget, field *QLayout) {
	C.QFormLayout_insertRow2(this.h, (C.int)(row), label.cPointer(), field.cPointer())
}

func (this *QFormLayout) InsertRow3(row int, labelText string, field *QWidget) {
	labelText_ms := C.struct_miqt_string{}
	labelText_ms.data = C.CString(labelText)
	labelText_ms.len = C.size_t(len(labelText))
	defer C.free(unsafe.Pointer(labelText_ms.data))
	C.QFormLayout_insertRow3(this.h, (C.int)(row), labelText_ms, field.cPointer())
}

func (this *QFormLayout) InsertRow4(row int, labelText string, field *QLayout) {
	labelText_ms := C.struct_miqt_string{}
	labelText_ms.data = C.CString(labelText)
	labelText_ms.len = C.size_t(len(labelText))
	defer C.free(unsafe.Pointer(labelText_ms.data))
	C.QFormLayout_insertRow4(this.h, (C.int)(row), labelText_ms, field.cPointer())
}

func (this *QFormLayout) InsertRow5(row int, widget *QWidget) {
	C.QFormLayout_insertRow5(this.h, (C.int)(row), widget.cPointer())
}

func (this *QFormLayout) InsertRow6(row int, layout *QLayout) {
	C.QFormLayout_insertRow6(this.h, (C.int)(row), layout.cPointer())
}

func (this *QFormLayout) RemoveRow(row int) {
	C.QFormLayout_removeRow(this.h, (C.int)(row))
}

func (this *QFormLayout) RemoveRowWithWidget(widget *QWidget) {
	C.QFormLayout_removeRowWithWidget(this.h, widget.cPointer())
}

func (this *QFormLayout) RemoveRowWithLayout(layout *QLayout) {
	C.QFormLayout_removeRowWithLayout(this.h, layout.cPointer())
}

func (this *QFormLayout) TakeRow(row int) *QFormLayout__TakeRowResult {
	_goptr := newQFormLayout__TakeRowResult(C.QFormLayout_takeRow(this.h, (C.int)(row)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFormLayout) TakeRowWithWidget(widget *QWidget) *QFormLayout__TakeRowResult {
	_goptr := newQFormLayout__TakeRowResult(C.QFormLayout_takeRowWithWidget(this.h, widget.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFormLayout) TakeRowWithLayout(layout *QLayout) *QFormLayout__TakeRowResult {
	_goptr := newQFormLayout__TakeRowResult(C.QFormLayout_takeRowWithLayout(this.h, layout.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFormLayout) SetItem(row int, role QFormLayout__ItemRole, item *QLayoutItem) {
	C.QFormLayout_setItem(this.h, (C.int)(row), (C.int)(role), item.cPointer())
}

func (this *QFormLayout) SetWidget(row int, role QFormLayout__ItemRole, widget *QWidget) {
	C.QFormLayout_setWidget(this.h, (C.int)(row), (C.int)(role), widget.cPointer())
}

func (this *QFormLayout) SetLayout(row int, role QFormLayout__ItemRole, layout *QLayout) {
	C.QFormLayout_setLayout(this.h, (C.int)(row), (C.int)(role), layout.cPointer())
}

func (this *QFormLayout) ItemAt(row int, role QFormLayout__ItemRole) *QLayoutItem {
	return newQLayoutItem(C.QFormLayout_itemAt(this.h, (C.int)(row), (C.int)(role)))
}

func (this *QFormLayout) LabelForField(field *QWidget) *QWidget {
	return newQWidget(C.QFormLayout_labelForField(this.h, field.cPointer()))
}

func (this *QFormLayout) LabelForFieldWithField(field *QLayout) *QWidget {
	return newQWidget(C.QFormLayout_labelForFieldWithField(this.h, field.cPointer()))
}

func (this *QFormLayout) AddItem(item *QLayoutItem) {
	C.QFormLayout_addItem(this.h, item.cPointer())
}

func (this *QFormLayout) ItemAtWithIndex(index int) *QLayoutItem {
	return newQLayoutItem(C.QFormLayout_itemAtWithIndex(this.h, (C.int)(index)))
}

func (this *QFormLayout) TakeAt(index int) *QLayoutItem {
	return newQLayoutItem(C.QFormLayout_takeAt(this.h, (C.int)(index)))
}

func (this *QFormLayout) SetGeometry(rect *QRect) {
	C.QFormLayout_setGeometry(this.h, rect.cPointer())
}

func (this *QFormLayout) MinimumSize() *QSize {
	_goptr := newQSize(C.QFormLayout_minimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFormLayout) SizeHint() *QSize {
	_goptr := newQSize(C.QFormLayout_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFormLayout) Invalidate() {
	C.QFormLayout_invalidate(this.h)
}

func (this *QFormLayout) HasHeightForWidth() bool {
	return (bool)(C.QFormLayout_hasHeightForWidth(this.h))
}

func (this *QFormLayout) HeightForWidth(width int) int {
	return (int)(C.QFormLayout_heightForWidth(this.h, (C.int)(width)))
}

func (this *QFormLayout) ExpandingDirections() Orientation {
	return (Orientation)(C.QFormLayout_expandingDirections(this.h))
}

func (this *QFormLayout) Count() int {
	return (int)(C.QFormLayout_count(this.h))
}

func (this *QFormLayout) RowCount() int {
	return (int)(C.QFormLayout_rowCount(this.h))
}

func QFormLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFormLayout_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFormLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFormLayout_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFormLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFormLayout_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QFormLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QFormLayout_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// WidgetEvent can only be called from a QFormLayout that was directly constructed.
func (this *QFormLayout) WidgetEvent(param1 *QEvent) {

	var _dynamic_cast_ok C.bool = false
	C.QFormLayout_protectedbase_widgetEvent(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddChildLayout can only be called from a QFormLayout that was directly constructed.
func (this *QFormLayout) AddChildLayout(l *QLayout) {

	var _dynamic_cast_ok C.bool = false
	C.QFormLayout_protectedbase_addChildLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h), l.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddChildWidget can only be called from a QFormLayout that was directly constructed.
func (this *QFormLayout) AddChildWidget(w *QWidget) {

	var _dynamic_cast_ok C.bool = false
	C.QFormLayout_protectedbase_addChildWidget(&_dynamic_cast_ok, unsafe.Pointer(this.h), w.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AdoptLayout can only be called from a QFormLayout that was directly constructed.
func (this *QFormLayout) AdoptLayout(layout *QLayout) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QFormLayout_protectedbase_adoptLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h), layout.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// AlignmentRect can only be called from a QFormLayout that was directly constructed.
func (this *QFormLayout) AlignmentRect(param1 *QRect) QRect {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQRect(C.QFormLayout_protectedbase_alignmentRect(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QFormLayout that was directly constructed.
func (this *QFormLayout) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QFormLayout_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QFormLayout that was directly constructed.
func (this *QFormLayout) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QFormLayout_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QFormLayout that was directly constructed.
func (this *QFormLayout) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QFormLayout_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QFormLayout that was directly constructed.
func (this *QFormLayout) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QFormLayout_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QFormLayout) callVirtualBase_AddItem(item *QLayoutItem) {

	C.QFormLayout_virtualbase_addItem(unsafe.Pointer(this.h), item.cPointer())

}
func (this *QFormLayout) OnAddItem(slot func(super func(item *QLayoutItem), item *QLayoutItem)) {
	ok := C.QFormLayout_override_virtual_addItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_addItem
func miqt_exec_callback_QFormLayout_addItem(self *C.QFormLayout, cb C.intptr_t, item *C.QLayoutItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QLayoutItem), item *QLayoutItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQLayoutItem(item)

	gofunc((&QFormLayout{h: self}).callVirtualBase_AddItem, slotval1)

}

func (this *QFormLayout) callVirtualBase_ItemAtWithIndex(index int) *QLayoutItem {

	return newQLayoutItem(C.QFormLayout_virtualbase_itemAtWithIndex(unsafe.Pointer(this.h), (C.int)(index)))

}
func (this *QFormLayout) OnItemAtWithIndex(slot func(super func(index int) *QLayoutItem, index int) *QLayoutItem) {
	ok := C.QFormLayout_override_virtual_itemAtWithIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_itemAtWithIndex
func miqt_exec_callback_QFormLayout_itemAtWithIndex(self *C.QFormLayout, cb C.intptr_t, index C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int) *QLayoutItem, index int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_ItemAtWithIndex, slotval1)

	return virtualReturn.cPointer()

}

func (this *QFormLayout) callVirtualBase_TakeAt(index int) *QLayoutItem {

	return newQLayoutItem(C.QFormLayout_virtualbase_takeAt(unsafe.Pointer(this.h), (C.int)(index)))

}
func (this *QFormLayout) OnTakeAt(slot func(super func(index int) *QLayoutItem, index int) *QLayoutItem) {
	ok := C.QFormLayout_override_virtual_takeAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_takeAt
func miqt_exec_callback_QFormLayout_takeAt(self *C.QFormLayout, cb C.intptr_t, index C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int) *QLayoutItem, index int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_TakeAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QFormLayout) callVirtualBase_SetGeometry(rect *QRect) {

	C.QFormLayout_virtualbase_setGeometry(unsafe.Pointer(this.h), rect.cPointer())

}
func (this *QFormLayout) OnSetGeometry(slot func(super func(rect *QRect), rect *QRect)) {
	ok := C.QFormLayout_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_setGeometry
func miqt_exec_callback_QFormLayout_setGeometry(self *C.QFormLayout, cb C.intptr_t, rect *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRect), rect *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(rect)

	gofunc((&QFormLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QFormLayout) callVirtualBase_MinimumSize() *QSize {

	_goptr := newQSize(C.QFormLayout_virtualbase_minimumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFormLayout) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QFormLayout_override_virtual_minimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_minimumSize
func miqt_exec_callback_QFormLayout_minimumSize(self *C.QFormLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QFormLayout) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QFormLayout_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFormLayout) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QFormLayout_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_sizeHint
func miqt_exec_callback_QFormLayout_sizeHint(self *C.QFormLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QFormLayout) callVirtualBase_Invalidate() {

	C.QFormLayout_virtualbase_invalidate(unsafe.Pointer(this.h))

}
func (this *QFormLayout) OnInvalidate(slot func(super func())) {
	ok := C.QFormLayout_override_virtual_invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_invalidate
func miqt_exec_callback_QFormLayout_invalidate(self *C.QFormLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QFormLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QFormLayout) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QFormLayout_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QFormLayout) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QFormLayout_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_hasHeightForWidth
func miqt_exec_callback_QFormLayout_hasHeightForWidth(self *C.QFormLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QFormLayout) callVirtualBase_HeightForWidth(width int) int {

	return (int)(C.QFormLayout_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(width)))

}
func (this *QFormLayout) OnHeightForWidth(slot func(super func(width int) int, width int) int) {
	ok := C.QFormLayout_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_heightForWidth
func miqt_exec_callback_QFormLayout_heightForWidth(self *C.QFormLayout, cb C.intptr_t, width C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(width int) int, width int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(width)

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QFormLayout) callVirtualBase_ExpandingDirections() Orientation {

	return (Orientation)(C.QFormLayout_virtualbase_expandingDirections(unsafe.Pointer(this.h)))

}
func (this *QFormLayout) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	ok := C.QFormLayout_override_virtual_expandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_expandingDirections
func miqt_exec_callback_QFormLayout_expandingDirections(self *C.QFormLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QFormLayout) callVirtualBase_Count() int {

	return (int)(C.QFormLayout_virtualbase_count(unsafe.Pointer(this.h)))

}
func (this *QFormLayout) OnCount(slot func(super func() int) int) {
	ok := C.QFormLayout_override_virtual_count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_count
func miqt_exec_callback_QFormLayout_count(self *C.QFormLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QFormLayout) callVirtualBase_Geometry() *QRect {

	_goptr := newQRect(C.QFormLayout_virtualbase_geometry(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFormLayout) OnGeometry(slot func(super func() *QRect) *QRect) {
	ok := C.QFormLayout_override_virtual_geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_geometry
func miqt_exec_callback_QFormLayout_geometry(self *C.QFormLayout, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_Geometry)

	return virtualReturn.cPointer()

}

func (this *QFormLayout) callVirtualBase_MaximumSize() *QSize {

	_goptr := newQSize(C.QFormLayout_virtualbase_maximumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QFormLayout) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QFormLayout_override_virtual_maximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_maximumSize
func miqt_exec_callback_QFormLayout_maximumSize(self *C.QFormLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QFormLayout) callVirtualBase_IndexOf(param1 *QWidget) int {

	return (int)(C.QFormLayout_virtualbase_indexOf(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QFormLayout) OnIndexOf(slot func(super func(param1 *QWidget) int, param1 *QWidget) int) {
	ok := C.QFormLayout_override_virtual_indexOf(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_indexOf
func miqt_exec_callback_QFormLayout_indexOf(self *C.QFormLayout, cb C.intptr_t, param1 *C.QWidget) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWidget) int, param1 *QWidget) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(param1)

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_IndexOf, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QFormLayout) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QFormLayout_virtualbase_isEmpty(unsafe.Pointer(this.h)))

}
func (this *QFormLayout) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QFormLayout_override_virtual_isEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_isEmpty
func miqt_exec_callback_QFormLayout_isEmpty(self *C.QFormLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QFormLayout) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QFormLayout_virtualbase_controlTypes(unsafe.Pointer(this.h)))

}
func (this *QFormLayout) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	ok := C.QFormLayout_override_virtual_controlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_controlTypes
func miqt_exec_callback_QFormLayout_controlTypes(self *C.QFormLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

func (this *QFormLayout) callVirtualBase_Layout() *QLayout {

	return newQLayout(C.QFormLayout_virtualbase_layout(unsafe.Pointer(this.h)))

}
func (this *QFormLayout) OnLayout(slot func(super func() *QLayout) *QLayout) {
	ok := C.QFormLayout_override_virtual_layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_layout
func miqt_exec_callback_QFormLayout_layout(self *C.QFormLayout, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLayout) *QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_Layout)

	return virtualReturn.cPointer()

}

func (this *QFormLayout) callVirtualBase_ChildEvent(e *QChildEvent) {

	C.QFormLayout_virtualbase_childEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QFormLayout) OnChildEvent(slot func(super func(e *QChildEvent), e *QChildEvent)) {
	ok := C.QFormLayout_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_childEvent
func miqt_exec_callback_QFormLayout_childEvent(self *C.QFormLayout, cb C.intptr_t, e *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QChildEvent), e *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(e)

	gofunc((&QFormLayout{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QFormLayout) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QFormLayout_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QFormLayout) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QFormLayout_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_event
func miqt_exec_callback_QFormLayout_event(self *C.QFormLayout, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QFormLayout) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QFormLayout_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QFormLayout) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QFormLayout_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_eventFilter
func miqt_exec_callback_QFormLayout_eventFilter(self *C.QFormLayout, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QFormLayout) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QFormLayout_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFormLayout) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QFormLayout_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_timerEvent
func miqt_exec_callback_QFormLayout_timerEvent(self *C.QFormLayout, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QFormLayout{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QFormLayout) callVirtualBase_CustomEvent(event *QEvent) {

	C.QFormLayout_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QFormLayout) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QFormLayout_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_customEvent
func miqt_exec_callback_QFormLayout_customEvent(self *C.QFormLayout, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QFormLayout{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QFormLayout) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QFormLayout_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFormLayout) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFormLayout_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_connectNotify
func miqt_exec_callback_QFormLayout_connectNotify(self *C.QFormLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFormLayout{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QFormLayout) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QFormLayout_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QFormLayout) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QFormLayout_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_disconnectNotify
func miqt_exec_callback_QFormLayout_disconnectNotify(self *C.QFormLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QFormLayout{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QFormLayout) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QFormLayout_virtualbase_minimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QFormLayout) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QFormLayout_override_virtual_minimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_minimumHeightForWidth
func miqt_exec_callback_QFormLayout_minimumHeightForWidth(self *C.QFormLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QFormLayout) callVirtualBase_Widget() *QWidget {

	return newQWidget(C.QFormLayout_virtualbase_widget(unsafe.Pointer(this.h)))

}
func (this *QFormLayout) OnWidget(slot func(super func() *QWidget) *QWidget) {
	ok := C.QFormLayout_override_virtual_widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_widget
func miqt_exec_callback_QFormLayout_widget(self *C.QFormLayout, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_Widget)

	return virtualReturn.cPointer()

}

func (this *QFormLayout) callVirtualBase_SpacerItem() *QSpacerItem {

	return newQSpacerItem(C.QFormLayout_virtualbase_spacerItem(unsafe.Pointer(this.h)))

}
func (this *QFormLayout) OnSpacerItem(slot func(super func() *QSpacerItem) *QSpacerItem) {
	ok := C.QFormLayout_override_virtual_spacerItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFormLayout_spacerItem
func miqt_exec_callback_QFormLayout_spacerItem(self *C.QFormLayout, cb C.intptr_t) *C.QSpacerItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSpacerItem) *QSpacerItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFormLayout{h: self}).callVirtualBase_SpacerItem)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QFormLayout) Delete() {
	C.QFormLayout_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFormLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QFormLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QFormLayout__TakeRowResult struct {
	h *C.QFormLayout__TakeRowResult
}

func (this *QFormLayout__TakeRowResult) cPointer() *C.QFormLayout__TakeRowResult {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFormLayout__TakeRowResult) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFormLayout__TakeRowResult constructs the type using only CGO pointers.
func newQFormLayout__TakeRowResult(h *C.QFormLayout__TakeRowResult) *QFormLayout__TakeRowResult {
	if h == nil {
		return nil
	}

	return &QFormLayout__TakeRowResult{h: h}
}

// UnsafeNewQFormLayout__TakeRowResult constructs the type using only unsafe pointers.
func UnsafeNewQFormLayout__TakeRowResult(h unsafe.Pointer) *QFormLayout__TakeRowResult {
	return newQFormLayout__TakeRowResult((*C.QFormLayout__TakeRowResult)(h))
}

// Delete this object from C++ memory.
func (this *QFormLayout__TakeRowResult) Delete() {
	C.QFormLayout__TakeRowResult_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFormLayout__TakeRowResult) GoGC() {
	runtime.SetFinalizer(this, func(this *QFormLayout__TakeRowResult) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
