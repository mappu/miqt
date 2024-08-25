package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qformlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
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
	ret := C.QFormLayout_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QFormLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFormLayout_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFormLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFormLayout_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFormLayout) SetHorizontalSpacing(spacing int) {
	C.QFormLayout_SetHorizontalSpacing(this.h, (C.int)(spacing))
}

func (this *QFormLayout) HorizontalSpacing() int {
	ret := C.QFormLayout_HorizontalSpacing(this.h)
	return (int)(ret)
}

func (this *QFormLayout) SetVerticalSpacing(spacing int) {
	C.QFormLayout_SetVerticalSpacing(this.h, (C.int)(spacing))
}

func (this *QFormLayout) VerticalSpacing() int {
	ret := C.QFormLayout_VerticalSpacing(this.h)
	return (int)(ret)
}

func (this *QFormLayout) Spacing() int {
	ret := C.QFormLayout_Spacing(this.h)
	return (int)(ret)
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
	labelText_Cstring := C.CString(labelText)
	defer C.free(unsafe.Pointer(labelText_Cstring))
	C.QFormLayout_AddRow3(this.h, labelText_Cstring, C.ulong(len(labelText)), field.cPointer())
}

func (this *QFormLayout) AddRow4(labelText string, field *QLayout) {
	labelText_Cstring := C.CString(labelText)
	defer C.free(unsafe.Pointer(labelText_Cstring))
	C.QFormLayout_AddRow4(this.h, labelText_Cstring, C.ulong(len(labelText)), field.cPointer())
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
	labelText_Cstring := C.CString(labelText)
	defer C.free(unsafe.Pointer(labelText_Cstring))
	C.QFormLayout_InsertRow3(this.h, (C.int)(row), labelText_Cstring, C.ulong(len(labelText)), field.cPointer())
}

func (this *QFormLayout) InsertRow4(row int, labelText string, field *QLayout) {
	labelText_Cstring := C.CString(labelText)
	defer C.free(unsafe.Pointer(labelText_Cstring))
	C.QFormLayout_InsertRow4(this.h, (C.int)(row), labelText_Cstring, C.ulong(len(labelText)), field.cPointer())
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

func (this *QFormLayout) LabelForField(field *QWidget) *QWidget {
	ret := C.QFormLayout_LabelForField(this.h, field.cPointer())
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QFormLayout) LabelForFieldWithField(field *QLayout) *QWidget {
	ret := C.QFormLayout_LabelForFieldWithField(this.h, field.cPointer())
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QFormLayout) AddItem(item *QLayoutItem) {
	C.QFormLayout_AddItem(this.h, item.cPointer())
}

func (this *QFormLayout) ItemAt(index int) *QLayoutItem {
	ret := C.QFormLayout_ItemAt(this.h, (C.int)(index))
	return newQLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QFormLayout) TakeAt(index int) *QLayoutItem {
	ret := C.QFormLayout_TakeAt(this.h, (C.int)(index))
	return newQLayoutItem_U(unsafe.Pointer(ret))
}

func (this *QFormLayout) SetGeometry(rect *QRect) {
	C.QFormLayout_SetGeometry(this.h, rect.cPointer())
}

func (this *QFormLayout) MinimumSize() *QSize {
	ret := C.QFormLayout_MinimumSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFormLayout) SizeHint() *QSize {
	ret := C.QFormLayout_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFormLayout) Invalidate() {
	C.QFormLayout_Invalidate(this.h)
}

func (this *QFormLayout) HasHeightForWidth() bool {
	ret := C.QFormLayout_HasHeightForWidth(this.h)
	return (bool)(ret)
}

func (this *QFormLayout) HeightForWidth(width int) int {
	ret := C.QFormLayout_HeightForWidth(this.h, (C.int)(width))
	return (int)(ret)
}

func (this *QFormLayout) Count() int {
	ret := C.QFormLayout_Count(this.h)
	return (int)(ret)
}

func (this *QFormLayout) RowCount() int {
	ret := C.QFormLayout_RowCount(this.h)
	return (int)(ret)
}

func QFormLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFormLayout_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFormLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFormLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFormLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFormLayout_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QFormLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFormLayout_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFormLayout) Delete() {
	C.QFormLayout_Delete(this.h)
}
