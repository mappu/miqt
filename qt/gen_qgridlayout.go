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
	ret := C.QGridLayout_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGridLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGridLayout_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGridLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGridLayout_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGridLayout) SizeHint() *QSize {
	ret := C.QGridLayout_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGridLayout) MinimumSize() *QSize {
	ret := C.QGridLayout_MinimumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGridLayout) MaximumSize() *QSize {
	ret := C.QGridLayout_MaximumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGridLayout) SetHorizontalSpacing(spacing int) {
	C.QGridLayout_SetHorizontalSpacing(this.h, (C.int)(spacing))
}

func (this *QGridLayout) HorizontalSpacing() int {
	ret := C.QGridLayout_HorizontalSpacing(this.h)
	return (int)(ret)
}

func (this *QGridLayout) SetVerticalSpacing(spacing int) {
	C.QGridLayout_SetVerticalSpacing(this.h, (C.int)(spacing))
}

func (this *QGridLayout) VerticalSpacing() int {
	ret := C.QGridLayout_VerticalSpacing(this.h)
	return (int)(ret)
}

func (this *QGridLayout) SetSpacing(spacing int) {
	C.QGridLayout_SetSpacing(this.h, (C.int)(spacing))
}

func (this *QGridLayout) Spacing() int {
	ret := C.QGridLayout_Spacing(this.h)
	return (int)(ret)
}

func (this *QGridLayout) SetRowStretch(row int, stretch int) {
	C.QGridLayout_SetRowStretch(this.h, (C.int)(row), (C.int)(stretch))
}

func (this *QGridLayout) SetColumnStretch(column int, stretch int) {
	C.QGridLayout_SetColumnStretch(this.h, (C.int)(column), (C.int)(stretch))
}

func (this *QGridLayout) RowStretch(row int) int {
	ret := C.QGridLayout_RowStretch(this.h, (C.int)(row))
	return (int)(ret)
}

func (this *QGridLayout) ColumnStretch(column int) int {
	ret := C.QGridLayout_ColumnStretch(this.h, (C.int)(column))
	return (int)(ret)
}

func (this *QGridLayout) SetRowMinimumHeight(row int, minSize int) {
	C.QGridLayout_SetRowMinimumHeight(this.h, (C.int)(row), (C.int)(minSize))
}

func (this *QGridLayout) SetColumnMinimumWidth(column int, minSize int) {
	C.QGridLayout_SetColumnMinimumWidth(this.h, (C.int)(column), (C.int)(minSize))
}

func (this *QGridLayout) RowMinimumHeight(row int) int {
	ret := C.QGridLayout_RowMinimumHeight(this.h, (C.int)(row))
	return (int)(ret)
}

func (this *QGridLayout) ColumnMinimumWidth(column int) int {
	ret := C.QGridLayout_ColumnMinimumWidth(this.h, (C.int)(column))
	return (int)(ret)
}

func (this *QGridLayout) ColumnCount() int {
	ret := C.QGridLayout_ColumnCount(this.h)
	return (int)(ret)
}

func (this *QGridLayout) RowCount() int {
	ret := C.QGridLayout_RowCount(this.h)
	return (int)(ret)
}

func (this *QGridLayout) CellRect(row int, column int) *QRect {
	ret := C.QGridLayout_CellRect(this.h, (C.int)(row), (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGridLayout) HasHeightForWidth() bool {
	ret := C.QGridLayout_HasHeightForWidth(this.h)
	return (bool)(ret)
}

func (this *QGridLayout) HeightForWidth(param1 int) int {
	ret := C.QGridLayout_HeightForWidth(this.h, (C.int)(param1))
	return (int)(ret)
}

func (this *QGridLayout) MinimumHeightForWidth(param1 int) int {
	ret := C.QGridLayout_MinimumHeightForWidth(this.h, (C.int)(param1))
	return (int)(ret)
}

func (this *QGridLayout) ExpandingDirections() int {
	ret := C.QGridLayout_ExpandingDirections(this.h)
	return (int)(ret)
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
	C.QGridLayout_SetOriginCorner(this.h, (C.uintptr_t)(originCorner))
}

func (this *QGridLayout) OriginCorner() Corner {
	ret := C.QGridLayout_OriginCorner(this.h)
	return (Corner)(ret)
}

func (this *QGridLayout) ItemAt(index int) *QLayoutItem {
	ret := C.QGridLayout_ItemAt(this.h, (C.int)(index))
	return newQLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QGridLayout) ItemAtPosition(row int, column int) *QLayoutItem {
	ret := C.QGridLayout_ItemAtPosition(this.h, (C.int)(row), (C.int)(column))
	return newQLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QGridLayout) TakeAt(index int) *QLayoutItem {
	ret := C.QGridLayout_TakeAt(this.h, (C.int)(index))
	return newQLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QGridLayout) Count() int {
	ret := C.QGridLayout_Count(this.h)
	return (int)(ret)
}

func (this *QGridLayout) SetGeometry(geometry *QRect) {
	C.QGridLayout_SetGeometry(this.h, geometry.cPointer())
}

func (this *QGridLayout) AddItem(item *QLayoutItem, row int, column int) {
	C.QGridLayout_AddItem(this.h, item.cPointer(), (C.int)(row), (C.int)(column))
}

func (this *QGridLayout) SetDefaultPositioning(n int, orient Orientation) {
	C.QGridLayout_SetDefaultPositioning(this.h, (C.int)(n), (C.uintptr_t)(orient))
}

func (this *QGridLayout) GetItemPosition(idx int, row *int, column *int, rowSpan *int, columnSpan *int) {
	C.QGridLayout_GetItemPosition(this.h, (C.int)(idx), (*C.int)(unsafe.Pointer(row)), (*C.int)(unsafe.Pointer(column)), (*C.int)(unsafe.Pointer(rowSpan)), (*C.int)(unsafe.Pointer(columnSpan)))
}

func QGridLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGridLayout_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGridLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGridLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGridLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGridLayout_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGridLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGridLayout_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGridLayout) AddWidget4(param1 *QWidget, row int, column int, param4 int) {
	C.QGridLayout_AddWidget4(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(param4))
}

func (this *QGridLayout) AddWidget6(param1 *QWidget, row int, column int, rowSpan int, columnSpan int, param6 int) {
	C.QGridLayout_AddWidget6(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan), (C.int)(param6))
}

func (this *QGridLayout) AddLayout4(param1 *QLayout, row int, column int, param4 int) {
	C.QGridLayout_AddLayout4(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(param4))
}

func (this *QGridLayout) AddLayout6(param1 *QLayout, row int, column int, rowSpan int, columnSpan int, param6 int) {
	C.QGridLayout_AddLayout6(this.h, param1.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan), (C.int)(param6))
}

func (this *QGridLayout) AddItem4(item *QLayoutItem, row int, column int, rowSpan int) {
	C.QGridLayout_AddItem4(this.h, item.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan))
}

func (this *QGridLayout) AddItem5(item *QLayoutItem, row int, column int, rowSpan int, columnSpan int) {
	C.QGridLayout_AddItem5(this.h, item.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan))
}

func (this *QGridLayout) AddItem6(item *QLayoutItem, row int, column int, rowSpan int, columnSpan int, param6 int) {
	C.QGridLayout_AddItem6(this.h, item.cPointer(), (C.int)(row), (C.int)(column), (C.int)(rowSpan), (C.int)(columnSpan), (C.int)(param6))
}

func (this *QGridLayout) Delete() {
	C.QGridLayout_Delete(this.h)
}
