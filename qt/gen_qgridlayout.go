package qt

/*

#include "gen_qgridlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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

func newQGridLayout(h *C.QGridLayout) *QGridLayout {
	if h == nil {
		return nil
	}
	return &QGridLayout{h: h, QLayout: newQLayout_U(unsafe.Pointer(h))}
}

func newQGridLayout_U(h unsafe.Pointer) *QGridLayout {
	return newQGridLayout((*C.QGridLayout)(h))
}

// NewQGridLayout constructs a new QGridLayout object.
func NewQGridLayout(parent *QWidget) *QGridLayout {
	ret := C.QGridLayout_new(parent.cPointer())
	return newQGridLayout(ret)
}

// NewQGridLayout2 constructs a new QGridLayout object.
func NewQGridLayout2() *QGridLayout {
	ret := C.QGridLayout_new2()
	return newQGridLayout(ret)
}

func (this *QGridLayout) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QGridLayout_MetaObject(this.h)))
}

func QGridLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGridLayout_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGridLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGridLayout_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGridLayout) SizeHint() *QSize {
	_ret := C.QGridLayout_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGridLayout) MinimumSize() *QSize {
	_ret := C.QGridLayout_MinimumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGridLayout) MaximumSize() *QSize {
	_ret := C.QGridLayout_MaximumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGridLayout) SetHorizontalSpacing(spacing int) {
	C.QGridLayout_SetHorizontalSpacing(this.h, (C.int)(spacing))
}

func (this *QGridLayout) HorizontalSpacing() int {
	return (int)(C.QGridLayout_HorizontalSpacing(this.h))
}

func (this *QGridLayout) SetVerticalSpacing(spacing int) {
	C.QGridLayout_SetVerticalSpacing(this.h, (C.int)(spacing))
}

func (this *QGridLayout) VerticalSpacing() int {
	return (int)(C.QGridLayout_VerticalSpacing(this.h))
}

func (this *QGridLayout) SetSpacing(spacing int) {
	C.QGridLayout_SetSpacing(this.h, (C.int)(spacing))
}

func (this *QGridLayout) Spacing() int {
	return (int)(C.QGridLayout_Spacing(this.h))
}

func (this *QGridLayout) SetRowStretch(row int, stretch int) {
	C.QGridLayout_SetRowStretch(this.h, (C.int)(row), (C.int)(stretch))
}

func (this *QGridLayout) SetColumnStretch(column int, stretch int) {
	C.QGridLayout_SetColumnStretch(this.h, (C.int)(column), (C.int)(stretch))
}

func (this *QGridLayout) RowStretch(row int) int {
	return (int)(C.QGridLayout_RowStretch(this.h, (C.int)(row)))
}

func (this *QGridLayout) ColumnStretch(column int) int {
	return (int)(C.QGridLayout_ColumnStretch(this.h, (C.int)(column)))
}

func (this *QGridLayout) SetRowMinimumHeight(row int, minSize int) {
	C.QGridLayout_SetRowMinimumHeight(this.h, (C.int)(row), (C.int)(minSize))
}

func (this *QGridLayout) SetColumnMinimumWidth(column int, minSize int) {
	C.QGridLayout_SetColumnMinimumWidth(this.h, (C.int)(column), (C.int)(minSize))
}

func (this *QGridLayout) RowMinimumHeight(row int) int {
	return (int)(C.QGridLayout_RowMinimumHeight(this.h, (C.int)(row)))
}

func (this *QGridLayout) ColumnMinimumWidth(column int) int {
	return (int)(C.QGridLayout_ColumnMinimumWidth(this.h, (C.int)(column)))
}

func (this *QGridLayout) ColumnCount() int {
	return (int)(C.QGridLayout_ColumnCount(this.h))
}

func (this *QGridLayout) RowCount() int {
	return (int)(C.QGridLayout_RowCount(this.h))
}

func (this *QGridLayout) CellRect(row int, column int) *QRect {
	_ret := C.QGridLayout_CellRect(this.h, (C.int)(row), (C.int)(column))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGridLayout) HasHeightForWidth() bool {
	return (bool)(C.QGridLayout_HasHeightForWidth(this.h))
}

func (this *QGridLayout) HeightForWidth(param1 int) int {
	return (int)(C.QGridLayout_HeightForWidth(this.h, (C.int)(param1)))
}

func (this *QGridLayout) MinimumHeightForWidth(param1 int) int {
	return (int)(C.QGridLayout_MinimumHeightForWidth(this.h, (C.int)(param1)))
}

func (this *QGridLayout) ExpandingDirections() Orientation {
	return (Orientation)(C.QGridLayout_ExpandingDirections(this.h))
}

func (this *QGridLayout) Invalidate() {
	C.QGridLayout_Invalidate(this.h)
}

func (this *QGridLayout) AddWidget(w *QWidget) {
	C.QGridLayout_AddWidget(this.h, w.cPointer())
}

func (this *QGridLayout) AddWidget2(param1 *QWidget, row int, column int) {
	C.QGridLayout_AddWidget2(this.h, param1.cPointer(), (C.int)(row), (C.int)(column))
}

func (this *QGridLayout) AddWidget3(param1 *QWidget, row int, column int, rowSpan int, columnSpan int) {
	C.QGridLayout_AddWidget3(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan))
}

func (this *QGridLayout) AddLayout(param1 *QLayout, row int, column int) {
	C.QGridLayout_AddLayout(this.h, param1.cPointer(), (C.int)(row), (C.int)(column))
}

func (this *QGridLayout) AddLayout2(param1 *QLayout, row int, column int, rowSpan int, columnSpan int) {
	C.QGridLayout_AddLayout2(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan))
}

func (this *QGridLayout) SetOriginCorner(originCorner Corner) {
	C.QGridLayout_SetOriginCorner(this.h, (C.int)(originCorner))
}

func (this *QGridLayout) OriginCorner() Corner {
	return (Corner)(C.QGridLayout_OriginCorner(this.h))
}

func (this *QGridLayout) ItemAt(index int) *QLayoutItem {
	return newQLayoutItem_U(unsafe.Pointer(C.QGridLayout_ItemAt(this.h, (C.int)(index))))
}

func (this *QGridLayout) ItemAtPosition(row int, column int) *QLayoutItem {
	return newQLayoutItem_U(unsafe.Pointer(C.QGridLayout_ItemAtPosition(this.h, (C.int)(row), (C.int)(column))))
}

func (this *QGridLayout) TakeAt(index int) *QLayoutItem {
	return newQLayoutItem_U(unsafe.Pointer(C.QGridLayout_TakeAt(this.h, (C.int)(index))))
}

func (this *QGridLayout) Count() int {
	return (int)(C.QGridLayout_Count(this.h))
}

func (this *QGridLayout) SetGeometry(geometry *QRect) {
	C.QGridLayout_SetGeometry(this.h, geometry.cPointer())
}

func (this *QGridLayout) AddItem(item *QLayoutItem, row int, column int) {
	C.QGridLayout_AddItem(this.h, item.cPointer(), (C.int)(row), (C.int)(column))
}

func (this *QGridLayout) SetDefaultPositioning(n int, orient Orientation) {
	C.QGridLayout_SetDefaultPositioning(this.h, (C.int)(n), (C.int)(orient))
}

func (this *QGridLayout) GetItemPosition(idx int, row *int, column *int, rowSpan *int, columnSpan *int) {
	C.QGridLayout_GetItemPosition(this.h, (C.int)(idx), (*C.int)(unsafe.Pointer(row)), (*C.int)(unsafe.Pointer(column)), (*C.int)(unsafe.Pointer(rowSpan)), (*C.int)(unsafe.Pointer(columnSpan)))
}

func QGridLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGridLayout_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGridLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGridLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGridLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGridLayout_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGridLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGridLayout_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGridLayout) AddWidget4(param1 *QWidget, row int, column int, param4 AlignmentFlag) {
	C.QGridLayout_AddWidget4(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(param4))
}

func (this *QGridLayout) AddWidget6(param1 *QWidget, row int, column int, rowSpan int, columnSpan int, param6 AlignmentFlag) {
	C.QGridLayout_AddWidget6(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan), (C.int)(param6))
}

func (this *QGridLayout) AddLayout4(param1 *QLayout, row int, column int, param4 AlignmentFlag) {
	C.QGridLayout_AddLayout4(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(param4))
}

func (this *QGridLayout) AddLayout6(param1 *QLayout, row int, column int, rowSpan int, columnSpan int, param6 AlignmentFlag) {
	C.QGridLayout_AddLayout6(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan), (C.int)(param6))
}

func (this *QGridLayout) AddItem4(item *QLayoutItem, row int, column int, rowSpan int) {
	C.QGridLayout_AddItem4(this.h, item.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan))
}

func (this *QGridLayout) AddItem5(item *QLayoutItem, row int, column int, rowSpan int, columnSpan int) {
	C.QGridLayout_AddItem5(this.h, item.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan))
}

func (this *QGridLayout) AddItem6(item *QLayoutItem, row int, column int, rowSpan int, columnSpan int, param6 AlignmentFlag) {
	C.QGridLayout_AddItem6(this.h, item.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan), (C.int)(param6))
}

// Delete this object from C++ memory.
func (this *QGridLayout) Delete() {
	C.QGridLayout_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGridLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QGridLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
