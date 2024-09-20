package qt

/*

#include "gen_qformlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QFormLayout__FieldGrowthPolicy int

const (
	QFormLayout__FieldGrowthPolicy__FieldsStayAtSizeHint  QFormLayout__FieldGrowthPolicy = 0
	QFormLayout__FieldGrowthPolicy__ExpandingFieldsGrow   QFormLayout__FieldGrowthPolicy = 1
	QFormLayout__FieldGrowthPolicy__AllNonFixedFieldsGrow QFormLayout__FieldGrowthPolicy = 2
)

type QFormLayout__RowWrapPolicy int

const (
	QFormLayout__RowWrapPolicy__DontWrapRows QFormLayout__RowWrapPolicy = 0
	QFormLayout__RowWrapPolicy__WrapLongRows QFormLayout__RowWrapPolicy = 1
	QFormLayout__RowWrapPolicy__WrapAllRows  QFormLayout__RowWrapPolicy = 2
)

type QFormLayout__ItemRole int

const (
	QFormLayout__ItemRole__LabelRole    QFormLayout__ItemRole = 0
	QFormLayout__ItemRole__FieldRole    QFormLayout__ItemRole = 1
	QFormLayout__ItemRole__SpanningRole QFormLayout__ItemRole = 2
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

func newQFormLayout(h *C.QFormLayout) *QFormLayout {
	if h == nil {
		return nil
	}
	return &QFormLayout{h: h, QLayout: newQLayout_U(unsafe.Pointer(h))}
}

func newQFormLayout_U(h unsafe.Pointer) *QFormLayout {
	return newQFormLayout((*C.QFormLayout)(h))
}

// NewQFormLayout constructs a new QFormLayout object.
func NewQFormLayout() *QFormLayout {
	ret := C.QFormLayout_new()
	return newQFormLayout(ret)
}

// NewQFormLayout2 constructs a new QFormLayout object.
func NewQFormLayout2(parent *QWidget) *QFormLayout {
	ret := C.QFormLayout_new2(parent.cPointer())
	return newQFormLayout(ret)
}

func (this *QFormLayout) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QFormLayout_MetaObject(this.h)))
}

func QFormLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFormLayout_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFormLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QFormLayout_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QFormLayout) SetFieldGrowthPolicy(policy QFormLayout__FieldGrowthPolicy) {
	C.QFormLayout_SetFieldGrowthPolicy(this.h, (C.int)(policy))
}

func (this *QFormLayout) FieldGrowthPolicy() QFormLayout__FieldGrowthPolicy {
	return (QFormLayout__FieldGrowthPolicy)(C.QFormLayout_FieldGrowthPolicy(this.h))
}

func (this *QFormLayout) SetRowWrapPolicy(policy QFormLayout__RowWrapPolicy) {
	C.QFormLayout_SetRowWrapPolicy(this.h, (C.int)(policy))
}

func (this *QFormLayout) RowWrapPolicy() QFormLayout__RowWrapPolicy {
	return (QFormLayout__RowWrapPolicy)(C.QFormLayout_RowWrapPolicy(this.h))
}

func (this *QFormLayout) SetLabelAlignment(alignment AlignmentFlag) {
	C.QFormLayout_SetLabelAlignment(this.h, (C.int)(alignment))
}

func (this *QFormLayout) LabelAlignment() AlignmentFlag {
	return (AlignmentFlag)(C.QFormLayout_LabelAlignment(this.h))
}

func (this *QFormLayout) SetFormAlignment(alignment AlignmentFlag) {
	C.QFormLayout_SetFormAlignment(this.h, (C.int)(alignment))
}

func (this *QFormLayout) FormAlignment() AlignmentFlag {
	return (AlignmentFlag)(C.QFormLayout_FormAlignment(this.h))
}

func (this *QFormLayout) SetHorizontalSpacing(spacing int) {
	C.QFormLayout_SetHorizontalSpacing(this.h, (C.int)(spacing))
}

func (this *QFormLayout) HorizontalSpacing() int {
	return (int)(C.QFormLayout_HorizontalSpacing(this.h))
}

func (this *QFormLayout) SetVerticalSpacing(spacing int) {
	C.QFormLayout_SetVerticalSpacing(this.h, (C.int)(spacing))
}

func (this *QFormLayout) VerticalSpacing() int {
	return (int)(C.QFormLayout_VerticalSpacing(this.h))
}

func (this *QFormLayout) Spacing() int {
	return (int)(C.QFormLayout_Spacing(this.h))
}

func (this *QFormLayout) SetSpacing(spacing int) {
	C.QFormLayout_SetSpacing(this.h, (C.int)(spacing))
}

func (this *QFormLayout) AddRow(label *QWidget, field *QWidget) {
	C.QFormLayout_AddRow(this.h, label.cPointer(), field.cPointer())
}

func (this *QFormLayout) AddRow2(label *QWidget, field *QLayout) {
	C.QFormLayout_AddRow2(this.h, label.cPointer(), field.cPointer())
}

func (this *QFormLayout) AddRow3(labelText string, field *QWidget) {
	labelText_ms := miqt_strdupg(labelText)
	defer C.free(labelText_ms)
	C.QFormLayout_AddRow3(this.h, (*C.struct_miqt_string)(labelText_ms), field.cPointer())
}

func (this *QFormLayout) AddRow4(labelText string, field *QLayout) {
	labelText_ms := miqt_strdupg(labelText)
	defer C.free(labelText_ms)
	C.QFormLayout_AddRow4(this.h, (*C.struct_miqt_string)(labelText_ms), field.cPointer())
}

func (this *QFormLayout) AddRowWithWidget(widget *QWidget) {
	C.QFormLayout_AddRowWithWidget(this.h, widget.cPointer())
}

func (this *QFormLayout) AddRowWithLayout(layout *QLayout) {
	C.QFormLayout_AddRowWithLayout(this.h, layout.cPointer())
}

func (this *QFormLayout) InsertRow(row int, label *QWidget, field *QWidget) {
	C.QFormLayout_InsertRow(this.h, (C.int)(row), label.cPointer(), field.cPointer())
}

func (this *QFormLayout) InsertRow2(row int, label *QWidget, field *QLayout) {
	C.QFormLayout_InsertRow2(this.h, (C.int)(row), label.cPointer(), field.cPointer())
}

func (this *QFormLayout) InsertRow3(row int, labelText string, field *QWidget) {
	labelText_ms := miqt_strdupg(labelText)
	defer C.free(labelText_ms)
	C.QFormLayout_InsertRow3(this.h, (C.int)(row), (*C.struct_miqt_string)(labelText_ms), field.cPointer())
}

func (this *QFormLayout) InsertRow4(row int, labelText string, field *QLayout) {
	labelText_ms := miqt_strdupg(labelText)
	defer C.free(labelText_ms)
	C.QFormLayout_InsertRow4(this.h, (C.int)(row), (*C.struct_miqt_string)(labelText_ms), field.cPointer())
}

func (this *QFormLayout) InsertRow5(row int, widget *QWidget) {
	C.QFormLayout_InsertRow5(this.h, (C.int)(row), widget.cPointer())
}

func (this *QFormLayout) InsertRow6(row int, layout *QLayout) {
	C.QFormLayout_InsertRow6(this.h, (C.int)(row), layout.cPointer())
}

func (this *QFormLayout) RemoveRow(row int) {
	C.QFormLayout_RemoveRow(this.h, (C.int)(row))
}

func (this *QFormLayout) RemoveRowWithWidget(widget *QWidget) {
	C.QFormLayout_RemoveRowWithWidget(this.h, widget.cPointer())
}

func (this *QFormLayout) RemoveRowWithLayout(layout *QLayout) {
	C.QFormLayout_RemoveRowWithLayout(this.h, layout.cPointer())
}

func (this *QFormLayout) TakeRow(row int) *QFormLayout__TakeRowResult {
	_ret := C.QFormLayout_TakeRow(this.h, (C.int)(row))
	_goptr := newQFormLayout__TakeRowResult(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFormLayout) TakeRowWithWidget(widget *QWidget) *QFormLayout__TakeRowResult {
	_ret := C.QFormLayout_TakeRowWithWidget(this.h, widget.cPointer())
	_goptr := newQFormLayout__TakeRowResult(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFormLayout) TakeRowWithLayout(layout *QLayout) *QFormLayout__TakeRowResult {
	_ret := C.QFormLayout_TakeRowWithLayout(this.h, layout.cPointer())
	_goptr := newQFormLayout__TakeRowResult(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFormLayout) SetItem(row int, role QFormLayout__ItemRole, item *QLayoutItem) {
	C.QFormLayout_SetItem(this.h, (C.int)(row), (C.int)(role), item.cPointer())
}

func (this *QFormLayout) SetWidget(row int, role QFormLayout__ItemRole, widget *QWidget) {
	C.QFormLayout_SetWidget(this.h, (C.int)(row), (C.int)(role), widget.cPointer())
}

func (this *QFormLayout) SetLayout(row int, role QFormLayout__ItemRole, layout *QLayout) {
	C.QFormLayout_SetLayout(this.h, (C.int)(row), (C.int)(role), layout.cPointer())
}

func (this *QFormLayout) ItemAt(row int, role QFormLayout__ItemRole) *QLayoutItem {
	return newQLayoutItem_U(unsafe.Pointer(C.QFormLayout_ItemAt(this.h, (C.int)(row), (C.int)(role))))
}

func (this *QFormLayout) GetItemPosition(index int, rowPtr *int, rolePtr *QFormLayout__ItemRole) {
	C.QFormLayout_GetItemPosition(this.h, (C.int)(index), (*C.int)(unsafe.Pointer(rowPtr)), (*C.int)(unsafe.Pointer(rolePtr)))
}

func (this *QFormLayout) GetWidgetPosition(widget *QWidget, rowPtr *int, rolePtr *QFormLayout__ItemRole) {
	C.QFormLayout_GetWidgetPosition(this.h, widget.cPointer(), (*C.int)(unsafe.Pointer(rowPtr)), (*C.int)(unsafe.Pointer(rolePtr)))
}

func (this *QFormLayout) GetLayoutPosition(layout *QLayout, rowPtr *int, rolePtr *QFormLayout__ItemRole) {
	C.QFormLayout_GetLayoutPosition(this.h, layout.cPointer(), (*C.int)(unsafe.Pointer(rowPtr)), (*C.int)(unsafe.Pointer(rolePtr)))
}

func (this *QFormLayout) LabelForField(field *QWidget) *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QFormLayout_LabelForField(this.h, field.cPointer())))
}

func (this *QFormLayout) LabelForFieldWithField(field *QLayout) *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QFormLayout_LabelForFieldWithField(this.h, field.cPointer())))
}

func (this *QFormLayout) AddItem(item *QLayoutItem) {
	C.QFormLayout_AddItem(this.h, item.cPointer())
}

func (this *QFormLayout) ItemAtWithIndex(index int) *QLayoutItem {
	return newQLayoutItem_U(unsafe.Pointer(C.QFormLayout_ItemAtWithIndex(this.h, (C.int)(index))))
}

func (this *QFormLayout) TakeAt(index int) *QLayoutItem {
	return newQLayoutItem_U(unsafe.Pointer(C.QFormLayout_TakeAt(this.h, (C.int)(index))))
}

func (this *QFormLayout) SetGeometry(rect *QRect) {
	C.QFormLayout_SetGeometry(this.h, rect.cPointer())
}

func (this *QFormLayout) MinimumSize() *QSize {
	_ret := C.QFormLayout_MinimumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFormLayout) SizeHint() *QSize {
	_ret := C.QFormLayout_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFormLayout) Invalidate() {
	C.QFormLayout_Invalidate(this.h)
}

func (this *QFormLayout) HasHeightForWidth() bool {
	return (bool)(C.QFormLayout_HasHeightForWidth(this.h))
}

func (this *QFormLayout) HeightForWidth(width int) int {
	return (int)(C.QFormLayout_HeightForWidth(this.h, (C.int)(width)))
}

func (this *QFormLayout) ExpandingDirections() Orientation {
	return (Orientation)(C.QFormLayout_ExpandingDirections(this.h))
}

func (this *QFormLayout) Count() int {
	return (int)(C.QFormLayout_Count(this.h))
}

func (this *QFormLayout) RowCount() int {
	return (int)(C.QFormLayout_RowCount(this.h))
}

func QFormLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFormLayout_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFormLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFormLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFormLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFormLayout_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QFormLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QFormLayout_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QFormLayout) Delete() {
	C.QFormLayout_Delete(this.h)
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

func newQFormLayout__TakeRowResult(h *C.QFormLayout__TakeRowResult) *QFormLayout__TakeRowResult {
	if h == nil {
		return nil
	}
	return &QFormLayout__TakeRowResult{h: h}
}

func newQFormLayout__TakeRowResult_U(h unsafe.Pointer) *QFormLayout__TakeRowResult {
	return newQFormLayout__TakeRowResult((*C.QFormLayout__TakeRowResult)(h))
}

// Delete this object from C++ memory.
func (this *QFormLayout__TakeRowResult) Delete() {
	C.QFormLayout__TakeRowResult_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFormLayout__TakeRowResult) GoGC() {
	runtime.SetFinalizer(this, func(this *QFormLayout__TakeRowResult) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
