package qt

/*

#include "gen_qstandarditemmodel.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QStandardItem__ItemType int

const (
	QStandardItem__Type     QStandardItem__ItemType = 0
	QStandardItem__UserType QStandardItem__ItemType = 1000
)

type QStandardItem struct {
	h *C.QStandardItem
}

func (this *QStandardItem) cPointer() *C.QStandardItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStandardItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStandardItem constructs the type using only CGO pointers.
func newQStandardItem(h *C.QStandardItem) *QStandardItem {
	if h == nil {
		return nil
	}

	return &QStandardItem{h: h}
}

// UnsafeNewQStandardItem constructs the type using only unsafe pointers.
func UnsafeNewQStandardItem(h unsafe.Pointer) *QStandardItem {
	return newQStandardItem((*C.QStandardItem)(h))
}

// NewQStandardItem constructs a new QStandardItem object.
func NewQStandardItem() *QStandardItem {

	return newQStandardItem(C.QStandardItem_new())
}

// NewQStandardItem2 constructs a new QStandardItem object.
func NewQStandardItem2(text string) *QStandardItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQStandardItem(C.QStandardItem_new2(text_ms))
}

// NewQStandardItem3 constructs a new QStandardItem object.
func NewQStandardItem3(icon *QIcon, text string) *QStandardItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQStandardItem(C.QStandardItem_new3(icon.cPointer(), text_ms))
}

// NewQStandardItem4 constructs a new QStandardItem object.
func NewQStandardItem4(rows int) *QStandardItem {

	return newQStandardItem(C.QStandardItem_new4((C.int)(rows)))
}

// NewQStandardItem5 constructs a new QStandardItem object.
func NewQStandardItem5(rows int, columns int) *QStandardItem {

	return newQStandardItem(C.QStandardItem_new5((C.int)(rows), (C.int)(columns)))
}

func (this *QStandardItem) Data(role int) *QVariant {
	_goptr := newQVariant(C.QStandardItem_data(this.h, (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItem) SetData(value *QVariant, role int) {
	C.QStandardItem_setData(this.h, value.cPointer(), (C.int)(role))
}

func (this *QStandardItem) ClearData() {
	C.QStandardItem_clearData(this.h)
}

func (this *QStandardItem) Text() string {
	var _ms C.struct_miqt_string = C.QStandardItem_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStandardItem) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QStandardItem_setText(this.h, text_ms)
}

func (this *QStandardItem) Icon() *QIcon {
	_goptr := newQIcon(C.QStandardItem_icon(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItem) SetIcon(icon *QIcon) {
	C.QStandardItem_setIcon(this.h, icon.cPointer())
}

func (this *QStandardItem) ToolTip() string {
	var _ms C.struct_miqt_string = C.QStandardItem_toolTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStandardItem) SetToolTip(toolTip string) {
	toolTip_ms := C.struct_miqt_string{}
	toolTip_ms.data = C.CString(toolTip)
	toolTip_ms.len = C.size_t(len(toolTip))
	defer C.free(unsafe.Pointer(toolTip_ms.data))
	C.QStandardItem_setToolTip(this.h, toolTip_ms)
}

func (this *QStandardItem) StatusTip() string {
	var _ms C.struct_miqt_string = C.QStandardItem_statusTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStandardItem) SetStatusTip(statusTip string) {
	statusTip_ms := C.struct_miqt_string{}
	statusTip_ms.data = C.CString(statusTip)
	statusTip_ms.len = C.size_t(len(statusTip))
	defer C.free(unsafe.Pointer(statusTip_ms.data))
	C.QStandardItem_setStatusTip(this.h, statusTip_ms)
}

func (this *QStandardItem) WhatsThis() string {
	var _ms C.struct_miqt_string = C.QStandardItem_whatsThis(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStandardItem) SetWhatsThis(whatsThis string) {
	whatsThis_ms := C.struct_miqt_string{}
	whatsThis_ms.data = C.CString(whatsThis)
	whatsThis_ms.len = C.size_t(len(whatsThis))
	defer C.free(unsafe.Pointer(whatsThis_ms.data))
	C.QStandardItem_setWhatsThis(this.h, whatsThis_ms)
}

func (this *QStandardItem) SizeHint() *QSize {
	_goptr := newQSize(C.QStandardItem_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItem) SetSizeHint(sizeHint *QSize) {
	C.QStandardItem_setSizeHint(this.h, sizeHint.cPointer())
}

func (this *QStandardItem) Font() *QFont {
	_goptr := newQFont(C.QStandardItem_font(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItem) SetFont(font *QFont) {
	C.QStandardItem_setFont(this.h, font.cPointer())
}

func (this *QStandardItem) TextAlignment() AlignmentFlag {
	return (AlignmentFlag)(C.QStandardItem_textAlignment(this.h))
}

func (this *QStandardItem) SetTextAlignment(textAlignment AlignmentFlag) {
	C.QStandardItem_setTextAlignment(this.h, (C.int)(textAlignment))
}

func (this *QStandardItem) Background() *QBrush {
	_goptr := newQBrush(C.QStandardItem_background(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItem) SetBackground(brush *QBrush) {
	C.QStandardItem_setBackground(this.h, brush.cPointer())
}

func (this *QStandardItem) Foreground() *QBrush {
	_goptr := newQBrush(C.QStandardItem_foreground(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItem) SetForeground(brush *QBrush) {
	C.QStandardItem_setForeground(this.h, brush.cPointer())
}

func (this *QStandardItem) CheckState() CheckState {
	return (CheckState)(C.QStandardItem_checkState(this.h))
}

func (this *QStandardItem) SetCheckState(checkState CheckState) {
	C.QStandardItem_setCheckState(this.h, (C.int)(checkState))
}

func (this *QStandardItem) AccessibleText() string {
	var _ms C.struct_miqt_string = C.QStandardItem_accessibleText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStandardItem) SetAccessibleText(accessibleText string) {
	accessibleText_ms := C.struct_miqt_string{}
	accessibleText_ms.data = C.CString(accessibleText)
	accessibleText_ms.len = C.size_t(len(accessibleText))
	defer C.free(unsafe.Pointer(accessibleText_ms.data))
	C.QStandardItem_setAccessibleText(this.h, accessibleText_ms)
}

func (this *QStandardItem) AccessibleDescription() string {
	var _ms C.struct_miqt_string = C.QStandardItem_accessibleDescription(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStandardItem) SetAccessibleDescription(accessibleDescription string) {
	accessibleDescription_ms := C.struct_miqt_string{}
	accessibleDescription_ms.data = C.CString(accessibleDescription)
	accessibleDescription_ms.len = C.size_t(len(accessibleDescription))
	defer C.free(unsafe.Pointer(accessibleDescription_ms.data))
	C.QStandardItem_setAccessibleDescription(this.h, accessibleDescription_ms)
}

func (this *QStandardItem) Flags() ItemFlag {
	return (ItemFlag)(C.QStandardItem_flags(this.h))
}

func (this *QStandardItem) SetFlags(flags ItemFlag) {
	C.QStandardItem_setFlags(this.h, (C.int)(flags))
}

func (this *QStandardItem) IsEnabled() bool {
	return (bool)(C.QStandardItem_isEnabled(this.h))
}

func (this *QStandardItem) SetEnabled(enabled bool) {
	C.QStandardItem_setEnabled(this.h, (C.bool)(enabled))
}

func (this *QStandardItem) IsEditable() bool {
	return (bool)(C.QStandardItem_isEditable(this.h))
}

func (this *QStandardItem) SetEditable(editable bool) {
	C.QStandardItem_setEditable(this.h, (C.bool)(editable))
}

func (this *QStandardItem) IsSelectable() bool {
	return (bool)(C.QStandardItem_isSelectable(this.h))
}

func (this *QStandardItem) SetSelectable(selectable bool) {
	C.QStandardItem_setSelectable(this.h, (C.bool)(selectable))
}

func (this *QStandardItem) IsCheckable() bool {
	return (bool)(C.QStandardItem_isCheckable(this.h))
}

func (this *QStandardItem) SetCheckable(checkable bool) {
	C.QStandardItem_setCheckable(this.h, (C.bool)(checkable))
}

func (this *QStandardItem) IsAutoTristate() bool {
	return (bool)(C.QStandardItem_isAutoTristate(this.h))
}

func (this *QStandardItem) SetAutoTristate(tristate bool) {
	C.QStandardItem_setAutoTristate(this.h, (C.bool)(tristate))
}

func (this *QStandardItem) IsUserTristate() bool {
	return (bool)(C.QStandardItem_isUserTristate(this.h))
}

func (this *QStandardItem) SetUserTristate(tristate bool) {
	C.QStandardItem_setUserTristate(this.h, (C.bool)(tristate))
}

func (this *QStandardItem) IsTristate() bool {
	return (bool)(C.QStandardItem_isTristate(this.h))
}

func (this *QStandardItem) SetTristate(tristate bool) {
	C.QStandardItem_setTristate(this.h, (C.bool)(tristate))
}

func (this *QStandardItem) IsDragEnabled() bool {
	return (bool)(C.QStandardItem_isDragEnabled(this.h))
}

func (this *QStandardItem) SetDragEnabled(dragEnabled bool) {
	C.QStandardItem_setDragEnabled(this.h, (C.bool)(dragEnabled))
}

func (this *QStandardItem) IsDropEnabled() bool {
	return (bool)(C.QStandardItem_isDropEnabled(this.h))
}

func (this *QStandardItem) SetDropEnabled(dropEnabled bool) {
	C.QStandardItem_setDropEnabled(this.h, (C.bool)(dropEnabled))
}

func (this *QStandardItem) Parent() *QStandardItem {
	return newQStandardItem(C.QStandardItem_parent(this.h))
}

func (this *QStandardItem) Row() int {
	return (int)(C.QStandardItem_row(this.h))
}

func (this *QStandardItem) Column() int {
	return (int)(C.QStandardItem_column(this.h))
}

func (this *QStandardItem) Index() *QModelIndex {
	_goptr := newQModelIndex(C.QStandardItem_index(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItem) Model() *QStandardItemModel {
	return newQStandardItemModel(C.QStandardItem_model(this.h))
}

func (this *QStandardItem) RowCount() int {
	return (int)(C.QStandardItem_rowCount(this.h))
}

func (this *QStandardItem) SetRowCount(rows int) {
	C.QStandardItem_setRowCount(this.h, (C.int)(rows))
}

func (this *QStandardItem) ColumnCount() int {
	return (int)(C.QStandardItem_columnCount(this.h))
}

func (this *QStandardItem) SetColumnCount(columns int) {
	C.QStandardItem_setColumnCount(this.h, (C.int)(columns))
}

func (this *QStandardItem) HasChildren() bool {
	return (bool)(C.QStandardItem_hasChildren(this.h))
}

func (this *QStandardItem) Child(row int) *QStandardItem {
	return newQStandardItem(C.QStandardItem_child(this.h, (C.int)(row)))
}

func (this *QStandardItem) SetChild(row int, column int, item *QStandardItem) {
	C.QStandardItem_setChild(this.h, (C.int)(row), (C.int)(column), item.cPointer())
}

func (this *QStandardItem) SetChild2(row int, item *QStandardItem) {
	C.QStandardItem_setChild2(this.h, (C.int)(row), item.cPointer())
}

func (this *QStandardItem) InsertRow(row int, items []*QStandardItem) {
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	C.QStandardItem_insertRow(this.h, (C.int)(row), items_ma)
}

func (this *QStandardItem) InsertColumn(column int, items []*QStandardItem) {
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	C.QStandardItem_insertColumn(this.h, (C.int)(column), items_ma)
}

func (this *QStandardItem) InsertRows(row int, items []*QStandardItem) {
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	C.QStandardItem_insertRows(this.h, (C.int)(row), items_ma)
}

func (this *QStandardItem) InsertRows2(row int, count int) {
	C.QStandardItem_insertRows2(this.h, (C.int)(row), (C.int)(count))
}

func (this *QStandardItem) InsertColumns(column int, count int) {
	C.QStandardItem_insertColumns(this.h, (C.int)(column), (C.int)(count))
}

func (this *QStandardItem) RemoveRow(row int) {
	C.QStandardItem_removeRow(this.h, (C.int)(row))
}

func (this *QStandardItem) RemoveColumn(column int) {
	C.QStandardItem_removeColumn(this.h, (C.int)(column))
}

func (this *QStandardItem) RemoveRows(row int, count int) {
	C.QStandardItem_removeRows(this.h, (C.int)(row), (C.int)(count))
}

func (this *QStandardItem) RemoveColumns(column int, count int) {
	C.QStandardItem_removeColumns(this.h, (C.int)(column), (C.int)(count))
}

func (this *QStandardItem) AppendRow(items []*QStandardItem) {
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	C.QStandardItem_appendRow(this.h, items_ma)
}

func (this *QStandardItem) AppendRows(items []*QStandardItem) {
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	C.QStandardItem_appendRows(this.h, items_ma)
}

func (this *QStandardItem) AppendColumn(items []*QStandardItem) {
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	C.QStandardItem_appendColumn(this.h, items_ma)
}

func (this *QStandardItem) InsertRow2(row int, item *QStandardItem) {
	C.QStandardItem_insertRow2(this.h, (C.int)(row), item.cPointer())
}

func (this *QStandardItem) AppendRowWithItem(item *QStandardItem) {
	C.QStandardItem_appendRowWithItem(this.h, item.cPointer())
}

func (this *QStandardItem) TakeChild(row int) *QStandardItem {
	return newQStandardItem(C.QStandardItem_takeChild(this.h, (C.int)(row)))
}

func (this *QStandardItem) TakeRow(row int) []*QStandardItem {
	var _ma C.struct_miqt_array = C.QStandardItem_takeRow(this.h, (C.int)(row))
	_ret := make([]*QStandardItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QStandardItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQStandardItem(_outCast[i])
	}
	return _ret
}

func (this *QStandardItem) TakeColumn(column int) []*QStandardItem {
	var _ma C.struct_miqt_array = C.QStandardItem_takeColumn(this.h, (C.int)(column))
	_ret := make([]*QStandardItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QStandardItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQStandardItem(_outCast[i])
	}
	return _ret
}

func (this *QStandardItem) SortChildren(column int) {
	C.QStandardItem_sortChildren(this.h, (C.int)(column))
}

func (this *QStandardItem) Clone() *QStandardItem {
	return newQStandardItem(C.QStandardItem_clone(this.h))
}

func (this *QStandardItem) Type() int {
	return (int)(C.QStandardItem_type(this.h))
}

func (this *QStandardItem) Read(in *QDataStream) {
	C.QStandardItem_read(this.h, in.cPointer())
}

func (this *QStandardItem) Write(out *QDataStream) {
	C.QStandardItem_write(this.h, out.cPointer())
}

func (this *QStandardItem) OperatorLesser(other *QStandardItem) bool {
	return (bool)(C.QStandardItem_operatorLesser(this.h, other.cPointer()))
}

func (this *QStandardItem) Child2(row int, column int) *QStandardItem {
	return newQStandardItem(C.QStandardItem_child2(this.h, (C.int)(row), (C.int)(column)))
}

func (this *QStandardItem) TakeChild2(row int, column int) *QStandardItem {
	return newQStandardItem(C.QStandardItem_takeChild2(this.h, (C.int)(row), (C.int)(column)))
}

func (this *QStandardItem) SortChildren2(column int, order SortOrder) {
	C.QStandardItem_sortChildren2(this.h, (C.int)(column), (C.int)(order))
}

func (this *QStandardItem) callVirtualBase_Data(role int) *QVariant {

	_goptr := newQVariant(C.QStandardItem_virtualbase_data(unsafe.Pointer(this.h), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStandardItem) Ondata(slot func(super func(role int) *QVariant, role int) *QVariant) {
	ok := C.QStandardItem_override_virtual_data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItem_data
func miqt_exec_callback_QStandardItem_data(self *C.QStandardItem, cb C.intptr_t, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(role int) *QVariant, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(role)

	virtualReturn := gofunc((&QStandardItem{h: self}).callVirtualBase_Data, slotval1)

	return virtualReturn.cPointer()

}

func (this *QStandardItem) callVirtualBase_SetData(value *QVariant, role int) {

	C.QStandardItem_virtualbase_setData(unsafe.Pointer(this.h), value.cPointer(), (C.int)(role))

}
func (this *QStandardItem) OnsetData(slot func(super func(value *QVariant, role int), value *QVariant, role int)) {
	ok := C.QStandardItem_override_virtual_setData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItem_setData
func miqt_exec_callback_QStandardItem_setData(self *C.QStandardItem, cb C.intptr_t, value *C.QVariant, role C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value *QVariant, role int), value *QVariant, role int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(value)

	slotval2 := (int)(role)

	gofunc((&QStandardItem{h: self}).callVirtualBase_SetData, slotval1, slotval2)

}

func (this *QStandardItem) callVirtualBase_Clone() *QStandardItem {

	return newQStandardItem(C.QStandardItem_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QStandardItem) Onclone(slot func(super func() *QStandardItem) *QStandardItem) {
	ok := C.QStandardItem_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItem_clone
func miqt_exec_callback_QStandardItem_clone(self *C.QStandardItem, cb C.intptr_t) *C.QStandardItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QStandardItem) *QStandardItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStandardItem{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QStandardItem) callVirtualBase_Type() int {

	return (int)(C.QStandardItem_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QStandardItem) Ontype(slot func(super func() int) int) {
	ok := C.QStandardItem_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItem_type
func miqt_exec_callback_QStandardItem_type(self *C.QStandardItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStandardItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QStandardItem) callVirtualBase_Read(in *QDataStream) {

	C.QStandardItem_virtualbase_read(unsafe.Pointer(this.h), in.cPointer())

}
func (this *QStandardItem) Onread(slot func(super func(in *QDataStream), in *QDataStream)) {
	ok := C.QStandardItem_override_virtual_read(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItem_read
func miqt_exec_callback_QStandardItem_read(self *C.QStandardItem, cb C.intptr_t, in *C.QDataStream) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(in *QDataStream), in *QDataStream))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDataStream(in)

	gofunc((&QStandardItem{h: self}).callVirtualBase_Read, slotval1)

}

func (this *QStandardItem) callVirtualBase_Write(out *QDataStream) {

	C.QStandardItem_virtualbase_write(unsafe.Pointer(this.h), out.cPointer())

}
func (this *QStandardItem) Onwrite(slot func(super func(out *QDataStream), out *QDataStream)) {
	ok := C.QStandardItem_override_virtual_write(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItem_write
func miqt_exec_callback_QStandardItem_write(self *C.QStandardItem, cb C.intptr_t, out *C.QDataStream) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(out *QDataStream), out *QDataStream))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDataStream(out)

	gofunc((&QStandardItem{h: self}).callVirtualBase_Write, slotval1)

}

func (this *QStandardItem) callVirtualBase_OperatorLesser(other *QStandardItem) bool {

	return (bool)(C.QStandardItem_virtualbase_operatorLesser(unsafe.Pointer(this.h), other.cPointer()))

}
func (this *QStandardItem) OnoperatorLesser(slot func(super func(other *QStandardItem) bool, other *QStandardItem) bool) {
	ok := C.QStandardItem_override_virtual_operatorLesser(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItem_operatorLesser
func miqt_exec_callback_QStandardItem_operatorLesser(self *C.QStandardItem, cb C.intptr_t, other *C.QStandardItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QStandardItem) bool, other *QStandardItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStandardItem(other)

	virtualReturn := gofunc((&QStandardItem{h: self}).callVirtualBase_OperatorLesser, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QStandardItem) Delete() {
	C.QStandardItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStandardItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QStandardItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStandardItemModel struct {
	h *C.QStandardItemModel
	*QAbstractItemModel
}

func (this *QStandardItemModel) cPointer() *C.QStandardItemModel {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStandardItemModel) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStandardItemModel constructs the type using only CGO pointers.
func newQStandardItemModel(h *C.QStandardItemModel) *QStandardItemModel {
	if h == nil {
		return nil
	}
	var outptr_QAbstractItemModel *C.QAbstractItemModel = nil
	C.QStandardItemModel_virtbase(h, &outptr_QAbstractItemModel)

	return &QStandardItemModel{h: h,
		QAbstractItemModel: newQAbstractItemModel(outptr_QAbstractItemModel)}
}

// UnsafeNewQStandardItemModel constructs the type using only unsafe pointers.
func UnsafeNewQStandardItemModel(h unsafe.Pointer) *QStandardItemModel {
	return newQStandardItemModel((*C.QStandardItemModel)(h))
}

// NewQStandardItemModel constructs a new QStandardItemModel object.
func NewQStandardItemModel() *QStandardItemModel {

	return newQStandardItemModel(C.QStandardItemModel_new())
}

// NewQStandardItemModel2 constructs a new QStandardItemModel object.
func NewQStandardItemModel2(rows int, columns int) *QStandardItemModel {

	return newQStandardItemModel(C.QStandardItemModel_new2((C.int)(rows), (C.int)(columns)))
}

// NewQStandardItemModel3 constructs a new QStandardItemModel object.
func NewQStandardItemModel3(parent *QObject) *QStandardItemModel {

	return newQStandardItemModel(C.QStandardItemModel_new3(parent.cPointer()))
}

// NewQStandardItemModel4 constructs a new QStandardItemModel object.
func NewQStandardItemModel4(rows int, columns int, parent *QObject) *QStandardItemModel {

	return newQStandardItemModel(C.QStandardItemModel_new4((C.int)(rows), (C.int)(columns), parent.cPointer()))
}

func (this *QStandardItemModel) MetaObject() *QMetaObject {
	return newQMetaObject(C.QStandardItemModel_metaObject(this.h))
}

func (this *QStandardItemModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QStandardItemModel_metacast(this.h, param1_Cstring))
}

func QStandardItemModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStandardItemModel_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStandardItemModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStandardItemModel_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStandardItemModel) SetItemRoleNames(roleNames map[int][]byte) {
	roleNames_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roleNames))))
	defer C.free(unsafe.Pointer(roleNames_Keys_CArray))
	roleNames_Values_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(roleNames))))
	defer C.free(unsafe.Pointer(roleNames_Values_CArray))
	roleNames_ctr := 0
	for roleNames_k, roleNames_v := range roleNames {
		roleNames_Keys_CArray[roleNames_ctr] = (C.int)(roleNames_k)
		roleNames_v_alias := C.struct_miqt_string{}
		if len(roleNames_v) > 0 {
			roleNames_v_alias.data = (*C.char)(unsafe.Pointer(&roleNames_v[0]))
		} else {
			roleNames_v_alias.data = (*C.char)(unsafe.Pointer(nil))
		}
		roleNames_v_alias.len = C.size_t(len(roleNames_v))
		roleNames_Values_CArray[roleNames_ctr] = roleNames_v_alias
		roleNames_ctr++
	}
	roleNames_mm := C.struct_miqt_map{
		len:    C.size_t(len(roleNames)),
		keys:   unsafe.Pointer(roleNames_Keys_CArray),
		values: unsafe.Pointer(roleNames_Values_CArray),
	}
	C.QStandardItemModel_setItemRoleNames(this.h, roleNames_mm)
}

func (this *QStandardItemModel) Index(row int, column int, parent *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QStandardItemModel_index(this.h, (C.int)(row), (C.int)(column), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItemModel) Parent(child *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QStandardItemModel_parent(this.h, child.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItemModel) RowCount(parent *QModelIndex) int {
	return (int)(C.QStandardItemModel_rowCount(this.h, parent.cPointer()))
}

func (this *QStandardItemModel) ColumnCount(parent *QModelIndex) int {
	return (int)(C.QStandardItemModel_columnCount(this.h, parent.cPointer()))
}

func (this *QStandardItemModel) HasChildren(parent *QModelIndex) bool {
	return (bool)(C.QStandardItemModel_hasChildren(this.h, parent.cPointer()))
}

func (this *QStandardItemModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	_goptr := newQModelIndex(C.QStandardItemModel_sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItemModel) Data(index *QModelIndex, role int) *QVariant {
	_goptr := newQVariant(C.QStandardItemModel_data(this.h, index.cPointer(), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItemModel) SetData(index *QModelIndex, value *QVariant, role int) bool {
	return (bool)(C.QStandardItemModel_setData(this.h, index.cPointer(), value.cPointer(), (C.int)(role)))
}

func (this *QStandardItemModel) ClearItemData(index *QModelIndex) bool {
	return (bool)(C.QStandardItemModel_clearItemData(this.h, index.cPointer()))
}

func (this *QStandardItemModel) HeaderData(section int, orientation Orientation, role int) *QVariant {
	_goptr := newQVariant(C.QStandardItemModel_headerData(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItemModel) SetHeaderData(section int, orientation Orientation, value *QVariant, role int) bool {
	return (bool)(C.QStandardItemModel_setHeaderData(this.h, (C.int)(section), (C.int)(orientation), value.cPointer(), (C.int)(role)))
}

func (this *QStandardItemModel) InsertRows(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QStandardItemModel_insertRows(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QStandardItemModel) InsertColumns(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QStandardItemModel_insertColumns(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QStandardItemModel) RemoveRows(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QStandardItemModel_removeRows(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QStandardItemModel) RemoveColumns(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QStandardItemModel_removeColumns(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QStandardItemModel) Flags(index *QModelIndex) ItemFlag {
	return (ItemFlag)(C.QStandardItemModel_flags(this.h, index.cPointer()))
}

func (this *QStandardItemModel) SupportedDropActions() DropAction {
	return (DropAction)(C.QStandardItemModel_supportedDropActions(this.h))
}

func (this *QStandardItemModel) ItemData(index *QModelIndex) map[int]QVariant {
	var _mm C.struct_miqt_map = C.QStandardItemModel_itemData(this.h, index.cPointer())
	_ret := make(map[int]QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		_mapval_goptr := newQVariant(_Values[i])
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret
}

func (this *QStandardItemModel) SetItemData(index *QModelIndex, roles map[int]QVariant) bool {
	roles_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_Keys_CArray))
	roles_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_Values_CArray))
	roles_ctr := 0
	for roles_k, roles_v := range roles {
		roles_Keys_CArray[roles_ctr] = (C.int)(roles_k)
		roles_Values_CArray[roles_ctr] = roles_v.cPointer()
		roles_ctr++
	}
	roles_mm := C.struct_miqt_map{
		len:    C.size_t(len(roles)),
		keys:   unsafe.Pointer(roles_Keys_CArray),
		values: unsafe.Pointer(roles_Values_CArray),
	}
	return (bool)(C.QStandardItemModel_setItemData(this.h, index.cPointer(), roles_mm))
}

func (this *QStandardItemModel) Clear() {
	C.QStandardItemModel_clear(this.h)
}

func (this *QStandardItemModel) Sort(column int, order SortOrder) {
	C.QStandardItemModel_sort(this.h, (C.int)(column), (C.int)(order))
}

func (this *QStandardItemModel) ItemFromIndex(index *QModelIndex) *QStandardItem {
	return newQStandardItem(C.QStandardItemModel_itemFromIndex(this.h, index.cPointer()))
}

func (this *QStandardItemModel) IndexFromItem(item *QStandardItem) *QModelIndex {
	_goptr := newQModelIndex(C.QStandardItemModel_indexFromItem(this.h, item.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItemModel) Item(row int) *QStandardItem {
	return newQStandardItem(C.QStandardItemModel_item(this.h, (C.int)(row)))
}

func (this *QStandardItemModel) SetItem(row int, column int, item *QStandardItem) {
	C.QStandardItemModel_setItem(this.h, (C.int)(row), (C.int)(column), item.cPointer())
}

func (this *QStandardItemModel) SetItem2(row int, item *QStandardItem) {
	C.QStandardItemModel_setItem2(this.h, (C.int)(row), item.cPointer())
}

func (this *QStandardItemModel) InvisibleRootItem() *QStandardItem {
	return newQStandardItem(C.QStandardItemModel_invisibleRootItem(this.h))
}

func (this *QStandardItemModel) HorizontalHeaderItem(column int) *QStandardItem {
	return newQStandardItem(C.QStandardItemModel_horizontalHeaderItem(this.h, (C.int)(column)))
}

func (this *QStandardItemModel) SetHorizontalHeaderItem(column int, item *QStandardItem) {
	C.QStandardItemModel_setHorizontalHeaderItem(this.h, (C.int)(column), item.cPointer())
}

func (this *QStandardItemModel) VerticalHeaderItem(row int) *QStandardItem {
	return newQStandardItem(C.QStandardItemModel_verticalHeaderItem(this.h, (C.int)(row)))
}

func (this *QStandardItemModel) SetVerticalHeaderItem(row int, item *QStandardItem) {
	C.QStandardItemModel_setVerticalHeaderItem(this.h, (C.int)(row), item.cPointer())
}

func (this *QStandardItemModel) SetHorizontalHeaderLabels(labels []string) {
	labels_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(labels))))
	defer C.free(unsafe.Pointer(labels_CArray))
	for i := range labels {
		labels_i_ms := C.struct_miqt_string{}
		labels_i_ms.data = C.CString(labels[i])
		labels_i_ms.len = C.size_t(len(labels[i]))
		defer C.free(unsafe.Pointer(labels_i_ms.data))
		labels_CArray[i] = labels_i_ms
	}
	labels_ma := C.struct_miqt_array{len: C.size_t(len(labels)), data: unsafe.Pointer(labels_CArray)}
	C.QStandardItemModel_setHorizontalHeaderLabels(this.h, labels_ma)
}

func (this *QStandardItemModel) SetVerticalHeaderLabels(labels []string) {
	labels_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(labels))))
	defer C.free(unsafe.Pointer(labels_CArray))
	for i := range labels {
		labels_i_ms := C.struct_miqt_string{}
		labels_i_ms.data = C.CString(labels[i])
		labels_i_ms.len = C.size_t(len(labels[i]))
		defer C.free(unsafe.Pointer(labels_i_ms.data))
		labels_CArray[i] = labels_i_ms
	}
	labels_ma := C.struct_miqt_array{len: C.size_t(len(labels)), data: unsafe.Pointer(labels_CArray)}
	C.QStandardItemModel_setVerticalHeaderLabels(this.h, labels_ma)
}

func (this *QStandardItemModel) SetRowCount(rows int) {
	C.QStandardItemModel_setRowCount(this.h, (C.int)(rows))
}

func (this *QStandardItemModel) SetColumnCount(columns int) {
	C.QStandardItemModel_setColumnCount(this.h, (C.int)(columns))
}

func (this *QStandardItemModel) AppendRow(items []*QStandardItem) {
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	C.QStandardItemModel_appendRow(this.h, items_ma)
}

func (this *QStandardItemModel) AppendColumn(items []*QStandardItem) {
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	C.QStandardItemModel_appendColumn(this.h, items_ma)
}

func (this *QStandardItemModel) AppendRowWithItem(item *QStandardItem) {
	C.QStandardItemModel_appendRowWithItem(this.h, item.cPointer())
}

func (this *QStandardItemModel) InsertRow(row int, items []*QStandardItem) {
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	C.QStandardItemModel_insertRow(this.h, (C.int)(row), items_ma)
}

func (this *QStandardItemModel) InsertColumn(column int, items []*QStandardItem) {
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	C.QStandardItemModel_insertColumn(this.h, (C.int)(column), items_ma)
}

func (this *QStandardItemModel) InsertRow2(row int, item *QStandardItem) {
	C.QStandardItemModel_insertRow2(this.h, (C.int)(row), item.cPointer())
}

func (this *QStandardItemModel) InsertRowWithRow(row int) bool {
	return (bool)(C.QStandardItemModel_insertRowWithRow(this.h, (C.int)(row)))
}

func (this *QStandardItemModel) InsertColumnWithColumn(column int) bool {
	return (bool)(C.QStandardItemModel_insertColumnWithColumn(this.h, (C.int)(column)))
}

func (this *QStandardItemModel) TakeItem(row int) *QStandardItem {
	return newQStandardItem(C.QStandardItemModel_takeItem(this.h, (C.int)(row)))
}

func (this *QStandardItemModel) TakeRow(row int) []*QStandardItem {
	var _ma C.struct_miqt_array = C.QStandardItemModel_takeRow(this.h, (C.int)(row))
	_ret := make([]*QStandardItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QStandardItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQStandardItem(_outCast[i])
	}
	return _ret
}

func (this *QStandardItemModel) TakeColumn(column int) []*QStandardItem {
	var _ma C.struct_miqt_array = C.QStandardItemModel_takeColumn(this.h, (C.int)(column))
	_ret := make([]*QStandardItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QStandardItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQStandardItem(_outCast[i])
	}
	return _ret
}

func (this *QStandardItemModel) TakeHorizontalHeaderItem(column int) *QStandardItem {
	return newQStandardItem(C.QStandardItemModel_takeHorizontalHeaderItem(this.h, (C.int)(column)))
}

func (this *QStandardItemModel) TakeVerticalHeaderItem(row int) *QStandardItem {
	return newQStandardItem(C.QStandardItemModel_takeVerticalHeaderItem(this.h, (C.int)(row)))
}

func (this *QStandardItemModel) ItemPrototype() *QStandardItem {
	return newQStandardItem(C.QStandardItemModel_itemPrototype(this.h))
}

func (this *QStandardItemModel) SetItemPrototype(item *QStandardItem) {
	C.QStandardItemModel_setItemPrototype(this.h, item.cPointer())
}

func (this *QStandardItemModel) FindItems(text string) []*QStandardItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ma C.struct_miqt_array = C.QStandardItemModel_findItems(this.h, text_ms)
	_ret := make([]*QStandardItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QStandardItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQStandardItem(_outCast[i])
	}
	return _ret
}

func (this *QStandardItemModel) SortRole() int {
	return (int)(C.QStandardItemModel_sortRole(this.h))
}

func (this *QStandardItemModel) SetSortRole(role int) {
	C.QStandardItemModel_setSortRole(this.h, (C.int)(role))
}

func (this *QStandardItemModel) MimeTypes() []string {
	var _ma C.struct_miqt_array = C.QStandardItemModel_mimeTypes(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QStandardItemModel) MimeData(indexes []QModelIndex) *QMimeData {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	return newQMimeData(C.QStandardItemModel_mimeData(this.h, indexes_ma))
}

func (this *QStandardItemModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QStandardItemModel_dropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QStandardItemModel) ItemChanged(item *QStandardItem) {
	C.QStandardItemModel_itemChanged(this.h, item.cPointer())
}
func (this *QStandardItemModel) OnItemChanged(slot func(item *QStandardItem)) {
	C.QStandardItemModel_connect_itemChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStandardItemModel_itemChanged
func miqt_exec_callback_QStandardItemModel_itemChanged(cb C.intptr_t, item *C.QStandardItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QStandardItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStandardItem(item)

	gofunc(slotval1)
}

func QStandardItemModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStandardItemModel_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStandardItemModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStandardItemModel_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStandardItemModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStandardItemModel_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStandardItemModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStandardItemModel_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStandardItemModel) Item2(row int, column int) *QStandardItem {
	return newQStandardItem(C.QStandardItemModel_item2(this.h, (C.int)(row), (C.int)(column)))
}

func (this *QStandardItemModel) InsertRow22(row int, parent *QModelIndex) bool {
	return (bool)(C.QStandardItemModel_insertRow22(this.h, (C.int)(row), parent.cPointer()))
}

func (this *QStandardItemModel) InsertColumn2(column int, parent *QModelIndex) bool {
	return (bool)(C.QStandardItemModel_insertColumn2(this.h, (C.int)(column), parent.cPointer()))
}

func (this *QStandardItemModel) TakeItem2(row int, column int) *QStandardItem {
	return newQStandardItem(C.QStandardItemModel_takeItem2(this.h, (C.int)(row), (C.int)(column)))
}

func (this *QStandardItemModel) FindItems2(text string, flags MatchFlag) []*QStandardItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ma C.struct_miqt_array = C.QStandardItemModel_findItems2(this.h, text_ms, (C.int)(flags))
	_ret := make([]*QStandardItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QStandardItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQStandardItem(_outCast[i])
	}
	return _ret
}

func (this *QStandardItemModel) FindItems3(text string, flags MatchFlag, column int) []*QStandardItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ma C.struct_miqt_array = C.QStandardItemModel_findItems3(this.h, text_ms, (C.int)(flags), (C.int)(column))
	_ret := make([]*QStandardItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QStandardItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQStandardItem(_outCast[i])
	}
	return _ret
}

func (this *QStandardItemModel) callVirtualBase_Index(row int, column int, parent *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QStandardItemModel_virtualbase_index(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), parent.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStandardItemModel) Onindex(slot func(super func(row int, column int, parent *QModelIndex) *QModelIndex, row int, column int, parent *QModelIndex) *QModelIndex) {
	ok := C.QStandardItemModel_override_virtual_index(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_index
func miqt_exec_callback_QStandardItemModel_index(self *C.QStandardItemModel, cb C.intptr_t, row C.int, column C.int, parent *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, parent *QModelIndex) *QModelIndex, row int, column int, parent *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_Index, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QStandardItemModel) callVirtualBase_Parent(child *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QStandardItemModel_virtualbase_parent(unsafe.Pointer(this.h), child.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStandardItemModel) Onparent(slot func(super func(child *QModelIndex) *QModelIndex, child *QModelIndex) *QModelIndex) {
	ok := C.QStandardItemModel_override_virtual_parent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_parent
func miqt_exec_callback_QStandardItemModel_parent(self *C.QStandardItemModel, cb C.intptr_t, child *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(child *QModelIndex) *QModelIndex, child *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(child)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_Parent, slotval1)

	return virtualReturn.cPointer()

}

func (this *QStandardItemModel) callVirtualBase_RowCount(parent *QModelIndex) int {

	return (int)(C.QStandardItemModel_virtualbase_rowCount(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QStandardItemModel) OnrowCount(slot func(super func(parent *QModelIndex) int, parent *QModelIndex) int) {
	ok := C.QStandardItemModel_override_virtual_rowCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_rowCount
func miqt_exec_callback_QStandardItemModel_rowCount(self *C.QStandardItemModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) int, parent *QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_RowCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_ColumnCount(parent *QModelIndex) int {

	return (int)(C.QStandardItemModel_virtualbase_columnCount(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QStandardItemModel) OncolumnCount(slot func(super func(parent *QModelIndex) int, parent *QModelIndex) int) {
	ok := C.QStandardItemModel_override_virtual_columnCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_columnCount
func miqt_exec_callback_QStandardItemModel_columnCount(self *C.QStandardItemModel, cb C.intptr_t, parent *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) int, parent *QModelIndex) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_ColumnCount, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_HasChildren(parent *QModelIndex) bool {

	return (bool)(C.QStandardItemModel_virtualbase_hasChildren(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QStandardItemModel) OnhasChildren(slot func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool) {
	ok := C.QStandardItemModel_override_virtual_hasChildren(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_hasChildren
func miqt_exec_callback_QStandardItemModel_hasChildren(self *C.QStandardItemModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_HasChildren, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_Sibling(row int, column int, idx *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QStandardItemModel_virtualbase_sibling(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), idx.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStandardItemModel) Onsibling(slot func(super func(row int, column int, idx *QModelIndex) *QModelIndex, row int, column int, idx *QModelIndex) *QModelIndex) {
	ok := C.QStandardItemModel_override_virtual_sibling(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_sibling
func miqt_exec_callback_QStandardItemModel_sibling(self *C.QStandardItemModel, cb C.intptr_t, row C.int, column C.int, idx *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, idx *QModelIndex) *QModelIndex, row int, column int, idx *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := newQModelIndex(idx)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_Sibling, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QStandardItemModel) callVirtualBase_Data(index *QModelIndex, role int) *QVariant {

	_goptr := newQVariant(C.QStandardItemModel_virtualbase_data(unsafe.Pointer(this.h), index.cPointer(), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStandardItemModel) Ondata(slot func(super func(index *QModelIndex, role int) *QVariant, index *QModelIndex, role int) *QVariant) {
	ok := C.QStandardItemModel_override_virtual_data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_data
func miqt_exec_callback_QStandardItemModel_data(self *C.QStandardItemModel, cb C.intptr_t, index *C.QModelIndex, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, role int) *QVariant, index *QModelIndex, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (int)(role)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_Data, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QStandardItemModel) callVirtualBase_SetData(index *QModelIndex, value *QVariant, role int) bool {

	return (bool)(C.QStandardItemModel_virtualbase_setData(unsafe.Pointer(this.h), index.cPointer(), value.cPointer(), (C.int)(role)))

}
func (this *QStandardItemModel) OnsetData(slot func(super func(index *QModelIndex, value *QVariant, role int) bool, index *QModelIndex, value *QVariant, role int) bool) {
	ok := C.QStandardItemModel_override_virtual_setData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_setData
func miqt_exec_callback_QStandardItemModel_setData(self *C.QStandardItemModel, cb C.intptr_t, index *C.QModelIndex, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, value *QVariant, role int) bool, index *QModelIndex, value *QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := newQVariant(value)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_SetData, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_HeaderData(section int, orientation Orientation, role int) *QVariant {

	_goptr := newQVariant(C.QStandardItemModel_virtualbase_headerData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStandardItemModel) OnheaderData(slot func(super func(section int, orientation Orientation, role int) *QVariant, section int, orientation Orientation, role int) *QVariant) {
	ok := C.QStandardItemModel_override_virtual_headerData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_headerData
func miqt_exec_callback_QStandardItemModel_headerData(self *C.QStandardItemModel, cb C.intptr_t, section C.int, orientation C.int, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation Orientation, role int) *QVariant, section int, orientation Orientation, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (Orientation)(orientation)

	slotval3 := (int)(role)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_HeaderData, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QStandardItemModel) callVirtualBase_SetHeaderData(section int, orientation Orientation, value *QVariant, role int) bool {

	return (bool)(C.QStandardItemModel_virtualbase_setHeaderData(unsafe.Pointer(this.h), (C.int)(section), (C.int)(orientation), value.cPointer(), (C.int)(role)))

}
func (this *QStandardItemModel) OnsetHeaderData(slot func(super func(section int, orientation Orientation, value *QVariant, role int) bool, section int, orientation Orientation, value *QVariant, role int) bool) {
	ok := C.QStandardItemModel_override_virtual_setHeaderData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_setHeaderData
func miqt_exec_callback_QStandardItemModel_setHeaderData(self *C.QStandardItemModel, cb C.intptr_t, section C.int, orientation C.int, value *C.QVariant, role C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(section int, orientation Orientation, value *QVariant, role int) bool, section int, orientation Orientation, value *QVariant, role int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(section)

	slotval2 := (Orientation)(orientation)

	slotval3 := newQVariant(value)

	slotval4 := (int)(role)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_SetHeaderData, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_InsertRows(row int, count int, parent *QModelIndex) bool {

	return (bool)(C.QStandardItemModel_virtualbase_insertRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), parent.cPointer()))

}
func (this *QStandardItemModel) OninsertRows(slot func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool) {
	ok := C.QStandardItemModel_override_virtual_insertRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_insertRows
func miqt_exec_callback_QStandardItemModel_insertRows(self *C.QStandardItemModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_InsertRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_InsertColumns(column int, count int, parent *QModelIndex) bool {

	return (bool)(C.QStandardItemModel_virtualbase_insertColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), parent.cPointer()))

}
func (this *QStandardItemModel) OninsertColumns(slot func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool) {
	ok := C.QStandardItemModel_override_virtual_insertColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_insertColumns
func miqt_exec_callback_QStandardItemModel_insertColumns(self *C.QStandardItemModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_InsertColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_RemoveRows(row int, count int, parent *QModelIndex) bool {

	return (bool)(C.QStandardItemModel_virtualbase_removeRows(unsafe.Pointer(this.h), (C.int)(row), (C.int)(count), parent.cPointer()))

}
func (this *QStandardItemModel) OnremoveRows(slot func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool) {
	ok := C.QStandardItemModel_override_virtual_removeRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_removeRows
func miqt_exec_callback_QStandardItemModel_removeRows(self *C.QStandardItemModel, cb C.intptr_t, row C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, count int, parent *QModelIndex) bool, row int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_RemoveRows, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_RemoveColumns(column int, count int, parent *QModelIndex) bool {

	return (bool)(C.QStandardItemModel_virtualbase_removeColumns(unsafe.Pointer(this.h), (C.int)(column), (C.int)(count), parent.cPointer()))

}
func (this *QStandardItemModel) OnremoveColumns(slot func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool) {
	ok := C.QStandardItemModel_override_virtual_removeColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_removeColumns
func miqt_exec_callback_QStandardItemModel_removeColumns(self *C.QStandardItemModel, cb C.intptr_t, column C.int, count C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, count int, parent *QModelIndex) bool, column int, count int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(count)

	slotval3 := newQModelIndex(parent)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_RemoveColumns, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_Flags(index *QModelIndex) ItemFlag {

	return (ItemFlag)(C.QStandardItemModel_virtualbase_flags(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QStandardItemModel) Onflags(slot func(super func(index *QModelIndex) ItemFlag, index *QModelIndex) ItemFlag) {
	ok := C.QStandardItemModel_override_virtual_flags(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_flags
func miqt_exec_callback_QStandardItemModel_flags(self *C.QStandardItemModel, cb C.intptr_t, index *C.QModelIndex) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) ItemFlag, index *QModelIndex) ItemFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_Flags, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_SupportedDropActions() DropAction {

	return (DropAction)(C.QStandardItemModel_virtualbase_supportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QStandardItemModel) OnsupportedDropActions(slot func(super func() DropAction) DropAction) {
	ok := C.QStandardItemModel_override_virtual_supportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_supportedDropActions
func miqt_exec_callback_QStandardItemModel_supportedDropActions(self *C.QStandardItemModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_SupportedDropActions)

	return (C.int)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_ItemData(index *QModelIndex) map[int]QVariant {

	var _mm C.struct_miqt_map = C.QStandardItemModel_virtualbase_itemData(unsafe.Pointer(this.h), index.cPointer())
	_ret := make(map[int]QVariant, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		_mapval_goptr := newQVariant(_Values[i])
		_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_entry_Value := *_mapval_goptr

		_ret[_entry_Key] = _entry_Value
	}
	return _ret

}
func (this *QStandardItemModel) OnitemData(slot func(super func(index *QModelIndex) map[int]QVariant, index *QModelIndex) map[int]QVariant) {
	ok := C.QStandardItemModel_override_virtual_itemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_itemData
func miqt_exec_callback_QStandardItemModel_itemData(self *C.QStandardItemModel, cb C.intptr_t, index *C.QModelIndex) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) map[int]QVariant, index *QModelIndex) map[int]QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_ItemData, slotval1)
	virtualReturn_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Keys_CArray))
	virtualReturn_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Values_CArray))
	virtualReturn_ctr := 0
	for virtualReturn_k, virtualReturn_v := range virtualReturn {
		virtualReturn_Keys_CArray[virtualReturn_ctr] = (C.int)(virtualReturn_k)
		virtualReturn_Values_CArray[virtualReturn_ctr] = virtualReturn_v.cPointer()
		virtualReturn_ctr++
	}
	virtualReturn_mm := C.struct_miqt_map{
		len:    C.size_t(len(virtualReturn)),
		keys:   unsafe.Pointer(virtualReturn_Keys_CArray),
		values: unsafe.Pointer(virtualReturn_Values_CArray),
	}

	return virtualReturn_mm

}

func (this *QStandardItemModel) callVirtualBase_SetItemData(index *QModelIndex, roles map[int]QVariant) bool {
	roles_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_Keys_CArray))
	roles_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_Values_CArray))
	roles_ctr := 0
	for roles_k, roles_v := range roles {
		roles_Keys_CArray[roles_ctr] = (C.int)(roles_k)
		roles_Values_CArray[roles_ctr] = roles_v.cPointer()
		roles_ctr++
	}
	roles_mm := C.struct_miqt_map{
		len:    C.size_t(len(roles)),
		keys:   unsafe.Pointer(roles_Keys_CArray),
		values: unsafe.Pointer(roles_Values_CArray),
	}

	return (bool)(C.QStandardItemModel_virtualbase_setItemData(unsafe.Pointer(this.h), index.cPointer(), roles_mm))

}
func (this *QStandardItemModel) OnsetItemData(slot func(super func(index *QModelIndex, roles map[int]QVariant) bool, index *QModelIndex, roles map[int]QVariant) bool) {
	ok := C.QStandardItemModel_override_virtual_setItemData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_setItemData
func miqt_exec_callback_QStandardItemModel_setItemData(self *C.QStandardItemModel, cb C.intptr_t, index *C.QModelIndex, roles C.struct_miqt_map) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, roles map[int]QVariant) bool, index *QModelIndex, roles map[int]QVariant) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	var roles_mm C.struct_miqt_map = roles
	roles_ret := make(map[int]QVariant, int(roles_mm.len))
	roles_Keys := (*[0xffff]C.int)(unsafe.Pointer(roles_mm.keys))
	roles_Values := (*[0xffff]*C.QVariant)(unsafe.Pointer(roles_mm.values))
	for i := 0; i < int(roles_mm.len); i++ {
		roles_entry_Key := (int)(roles_Keys[i])

		roles_mapval_goptr := newQVariant(roles_Values[i])
		roles_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		roles_entry_Value := *roles_mapval_goptr

		roles_ret[roles_entry_Key] = roles_entry_Value
	}
	slotval2 := roles_ret

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_SetItemData, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_Sort(column int, order SortOrder) {

	C.QStandardItemModel_virtualbase_sort(unsafe.Pointer(this.h), (C.int)(column), (C.int)(order))

}
func (this *QStandardItemModel) Onsort(slot func(super func(column int, order SortOrder), column int, order SortOrder)) {
	ok := C.QStandardItemModel_override_virtual_sort(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_sort
func miqt_exec_callback_QStandardItemModel_sort(self *C.QStandardItemModel, cb C.intptr_t, column C.int, order C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, order SortOrder), column int, order SortOrder))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (SortOrder)(order)

	gofunc((&QStandardItemModel{h: self}).callVirtualBase_Sort, slotval1, slotval2)

}

func (this *QStandardItemModel) callVirtualBase_MimeTypes() []string {

	var _ma C.struct_miqt_array = C.QStandardItemModel_virtualbase_mimeTypes(unsafe.Pointer(this.h))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret

}
func (this *QStandardItemModel) OnmimeTypes(slot func(super func() []string) []string) {
	ok := C.QStandardItemModel_override_virtual_mimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_mimeTypes
func miqt_exec_callback_QStandardItemModel_mimeTypes(self *C.QStandardItemModel, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_MimeTypes)
	virtualReturn_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_i_ms := C.struct_miqt_string{}
		virtualReturn_i_ms.data = C.CString(virtualReturn[i])
		virtualReturn_i_ms.len = C.size_t(len(virtualReturn[i]))
		defer C.free(unsafe.Pointer(virtualReturn_i_ms.data))
		virtualReturn_CArray[i] = virtualReturn_i_ms
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QStandardItemModel) callVirtualBase_MimeData(indexes []QModelIndex) *QMimeData {
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}

	return newQMimeData(C.QStandardItemModel_virtualbase_mimeData(unsafe.Pointer(this.h), indexes_ma))

}
func (this *QStandardItemModel) OnmimeData(slot func(super func(indexes []QModelIndex) *QMimeData, indexes []QModelIndex) *QMimeData) {
	ok := C.QStandardItemModel_override_virtual_mimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_mimeData
func miqt_exec_callback_QStandardItemModel_mimeData(self *C.QStandardItemModel, cb C.intptr_t, indexes C.struct_miqt_array) *C.QMimeData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(indexes []QModelIndex) *QMimeData, indexes []QModelIndex) *QMimeData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var indexes_ma C.struct_miqt_array = indexes
	indexes_ret := make([]QModelIndex, int(indexes_ma.len))
	indexes_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(indexes_ma.data)) // hey ya
	for i := 0; i < int(indexes_ma.len); i++ {
		indexes_lv_goptr := newQModelIndex(indexes_outCast[i])
		indexes_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		indexes_ret[i] = *indexes_lv_goptr
	}
	slotval1 := indexes_ret

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_MimeData, slotval1)

	return virtualReturn.cPointer()

}

func (this *QStandardItemModel) callVirtualBase_DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {

	return (bool)(C.QStandardItemModel_virtualbase_dropMimeData(unsafe.Pointer(this.h), data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))

}
func (this *QStandardItemModel) OndropMimeData(slot func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool) {
	ok := C.QStandardItemModel_override_virtual_dropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_dropMimeData
func miqt_exec_callback_QStandardItemModel_dropMimeData(self *C.QStandardItemModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMimeData(data)

	slotval2 := (DropAction)(action)

	slotval3 := (int)(row)

	slotval4 := (int)(column)

	slotval5 := newQModelIndex(parent)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_DropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_CanDropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {

	return (bool)(C.QStandardItemModel_virtualbase_canDropMimeData(unsafe.Pointer(this.h), data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))

}
func (this *QStandardItemModel) OncanDropMimeData(slot func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool) {
	ok := C.QStandardItemModel_override_virtual_canDropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_canDropMimeData
func miqt_exec_callback_QStandardItemModel_canDropMimeData(self *C.QStandardItemModel, cb C.intptr_t, data *C.QMimeData, action C.int, row C.int, column C.int, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool, data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMimeData(data)

	slotval2 := (DropAction)(action)

	slotval3 := (int)(row)

	slotval4 := (int)(column)

	slotval5 := newQModelIndex(parent)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_CanDropMimeData, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_SupportedDragActions() DropAction {

	return (DropAction)(C.QStandardItemModel_virtualbase_supportedDragActions(unsafe.Pointer(this.h)))

}
func (this *QStandardItemModel) OnsupportedDragActions(slot func(super func() DropAction) DropAction) {
	ok := C.QStandardItemModel_override_virtual_supportedDragActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_supportedDragActions
func miqt_exec_callback_QStandardItemModel_supportedDragActions(self *C.QStandardItemModel, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_SupportedDragActions)

	return (C.int)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_MoveRows(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool {

	return (bool)(C.QStandardItemModel_virtualbase_moveRows(unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceRow), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))

}
func (this *QStandardItemModel) OnmoveRows(slot func(super func(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool) {
	ok := C.QStandardItemModel_override_virtual_moveRows(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_moveRows
func miqt_exec_callback_QStandardItemModel_moveRows(self *C.QStandardItemModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceRow C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceRow int, count int, destinationParent *QModelIndex, destinationChild int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(sourceParent)

	slotval2 := (int)(sourceRow)

	slotval3 := (int)(count)

	slotval4 := newQModelIndex(destinationParent)

	slotval5 := (int)(destinationChild)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_MoveRows, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_MoveColumns(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool {

	return (bool)(C.QStandardItemModel_virtualbase_moveColumns(unsafe.Pointer(this.h), sourceParent.cPointer(), (C.int)(sourceColumn), (C.int)(count), destinationParent.cPointer(), (C.int)(destinationChild)))

}
func (this *QStandardItemModel) OnmoveColumns(slot func(super func(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool) {
	ok := C.QStandardItemModel_override_virtual_moveColumns(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_moveColumns
func miqt_exec_callback_QStandardItemModel_moveColumns(self *C.QStandardItemModel, cb C.intptr_t, sourceParent *C.QModelIndex, sourceColumn C.int, count C.int, destinationParent *C.QModelIndex, destinationChild C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool, sourceParent *QModelIndex, sourceColumn int, count int, destinationParent *QModelIndex, destinationChild int) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(sourceParent)

	slotval2 := (int)(sourceColumn)

	slotval3 := (int)(count)

	slotval4 := newQModelIndex(destinationParent)

	slotval5 := (int)(destinationChild)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_MoveColumns, slotval1, slotval2, slotval3, slotval4, slotval5)

	return (C.bool)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_FetchMore(parent *QModelIndex) {

	C.QStandardItemModel_virtualbase_fetchMore(unsafe.Pointer(this.h), parent.cPointer())

}
func (this *QStandardItemModel) OnfetchMore(slot func(super func(parent *QModelIndex), parent *QModelIndex)) {
	ok := C.QStandardItemModel_override_virtual_fetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_fetchMore
func miqt_exec_callback_QStandardItemModel_fetchMore(self *C.QStandardItemModel, cb C.intptr_t, parent *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex), parent *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	gofunc((&QStandardItemModel{h: self}).callVirtualBase_FetchMore, slotval1)

}

func (this *QStandardItemModel) callVirtualBase_CanFetchMore(parent *QModelIndex) bool {

	return (bool)(C.QStandardItemModel_virtualbase_canFetchMore(unsafe.Pointer(this.h), parent.cPointer()))

}
func (this *QStandardItemModel) OncanFetchMore(slot func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool) {
	ok := C.QStandardItemModel_override_virtual_canFetchMore(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_canFetchMore
func miqt_exec_callback_QStandardItemModel_canFetchMore(self *C.QStandardItemModel, cb C.intptr_t, parent *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex) bool, parent *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_CanFetchMore, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_Buddy(index *QModelIndex) *QModelIndex {

	_goptr := newQModelIndex(C.QStandardItemModel_virtualbase_buddy(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStandardItemModel) Onbuddy(slot func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex) {
	ok := C.QStandardItemModel_override_virtual_buddy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_buddy
func miqt_exec_callback_QStandardItemModel_buddy(self *C.QStandardItemModel, cb C.intptr_t, index *C.QModelIndex) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QModelIndex, index *QModelIndex) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_Buddy, slotval1)

	return virtualReturn.cPointer()

}

func (this *QStandardItemModel) callVirtualBase_Match(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex {

	var _ma C.struct_miqt_array = C.QStandardItemModel_virtualbase_match(unsafe.Pointer(this.h), start.cPointer(), (C.int)(role), value.cPointer(), (C.int)(hits), (C.int)(flags))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QStandardItemModel) Onmatch(slot func(super func(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex, start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex) {
	ok := C.QStandardItemModel_override_virtual_match(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_match
func miqt_exec_callback_QStandardItemModel_match(self *C.QStandardItemModel, cb C.intptr_t, start *C.QModelIndex, role C.int, value *C.QVariant, hits C.int, flags C.int) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex, start *QModelIndex, role int, value *QVariant, hits int, flags MatchFlag) []QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(start)

	slotval2 := (int)(role)

	slotval3 := newQVariant(value)

	slotval4 := (int)(hits)

	slotval5 := (MatchFlag)(flags)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_Match, slotval1, slotval2, slotval3, slotval4, slotval5)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QStandardItemModel) callVirtualBase_Span(index *QModelIndex) *QSize {

	_goptr := newQSize(C.QStandardItemModel_virtualbase_span(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStandardItemModel) Onspan(slot func(super func(index *QModelIndex) *QSize, index *QModelIndex) *QSize) {
	ok := C.QStandardItemModel_override_virtual_span(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_span
func miqt_exec_callback_QStandardItemModel_span(self *C.QStandardItemModel, cb C.intptr_t, index *C.QModelIndex) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QSize, index *QModelIndex) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_Span, slotval1)

	return virtualReturn.cPointer()

}

func (this *QStandardItemModel) callVirtualBase_RoleNames() map[int][]byte {

	var _mm C.struct_miqt_map = C.QStandardItemModel_virtualbase_roleNames(unsafe.Pointer(this.h))
	_ret := make(map[int][]byte, int(_mm.len))
	_Keys := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Values := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_mm.values))
	for i := 0; i < int(_mm.len); i++ {
		_entry_Key := (int)(_Keys[i])

		var _hashval_bytearray C.struct_miqt_string = _Values[i]
		_hashval_ret := C.GoBytes(unsafe.Pointer(_hashval_bytearray.data), C.int(int64(_hashval_bytearray.len)))
		C.free(unsafe.Pointer(_hashval_bytearray.data))
		_entry_Value := _hashval_ret
		_ret[_entry_Key] = _entry_Value
	}
	return _ret

}
func (this *QStandardItemModel) OnroleNames(slot func(super func() map[int][]byte) map[int][]byte) {
	ok := C.QStandardItemModel_override_virtual_roleNames(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_roleNames
func miqt_exec_callback_QStandardItemModel_roleNames(self *C.QStandardItemModel, cb C.intptr_t) C.struct_miqt_map {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() map[int][]byte) map[int][]byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_RoleNames)
	virtualReturn_Keys_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Keys_CArray))
	virtualReturn_Values_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_Values_CArray))
	virtualReturn_ctr := 0
	for virtualReturn_k, virtualReturn_v := range virtualReturn {
		virtualReturn_Keys_CArray[virtualReturn_ctr] = (C.int)(virtualReturn_k)
		virtualReturn_v_alias := C.struct_miqt_string{}
		if len(virtualReturn_v) > 0 {
			virtualReturn_v_alias.data = (*C.char)(unsafe.Pointer(&virtualReturn_v[0]))
		} else {
			virtualReturn_v_alias.data = (*C.char)(unsafe.Pointer(nil))
		}
		virtualReturn_v_alias.len = C.size_t(len(virtualReturn_v))
		virtualReturn_Values_CArray[virtualReturn_ctr] = virtualReturn_v_alias
		virtualReturn_ctr++
	}
	virtualReturn_mm := C.struct_miqt_map{
		len:    C.size_t(len(virtualReturn)),
		keys:   unsafe.Pointer(virtualReturn_Keys_CArray),
		values: unsafe.Pointer(virtualReturn_Values_CArray),
	}

	return virtualReturn_mm

}

func (this *QStandardItemModel) callVirtualBase_Submit() bool {

	return (bool)(C.QStandardItemModel_virtualbase_submit(unsafe.Pointer(this.h)))

}
func (this *QStandardItemModel) Onsubmit(slot func(super func() bool) bool) {
	ok := C.QStandardItemModel_override_virtual_submit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_submit
func miqt_exec_callback_QStandardItemModel_submit(self *C.QStandardItemModel, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_Submit)

	return (C.bool)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_Revert() {

	C.QStandardItemModel_virtualbase_revert(unsafe.Pointer(this.h))

}
func (this *QStandardItemModel) Onrevert(slot func(super func())) {
	ok := C.QStandardItemModel_override_virtual_revert(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_revert
func miqt_exec_callback_QStandardItemModel_revert(self *C.QStandardItemModel, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QStandardItemModel{h: self}).callVirtualBase_Revert)

}

func (this *QStandardItemModel) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QStandardItemModel_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QStandardItemModel) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QStandardItemModel_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_event
func miqt_exec_callback_QStandardItemModel_event(self *C.QStandardItemModel, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QStandardItemModel_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QStandardItemModel) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QStandardItemModel_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_eventFilter
func miqt_exec_callback_QStandardItemModel_eventFilter(self *C.QStandardItemModel, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QStandardItemModel{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QStandardItemModel) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QStandardItemModel_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStandardItemModel) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QStandardItemModel_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_timerEvent
func miqt_exec_callback_QStandardItemModel_timerEvent(self *C.QStandardItemModel, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QStandardItemModel{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QStandardItemModel) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QStandardItemModel_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStandardItemModel) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QStandardItemModel_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_childEvent
func miqt_exec_callback_QStandardItemModel_childEvent(self *C.QStandardItemModel, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QStandardItemModel{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QStandardItemModel) callVirtualBase_CustomEvent(event *QEvent) {

	C.QStandardItemModel_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStandardItemModel) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QStandardItemModel_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_customEvent
func miqt_exec_callback_QStandardItemModel_customEvent(self *C.QStandardItemModel, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QStandardItemModel{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QStandardItemModel) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QStandardItemModel_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QStandardItemModel) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QStandardItemModel_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_connectNotify
func miqt_exec_callback_QStandardItemModel_connectNotify(self *C.QStandardItemModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QStandardItemModel{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QStandardItemModel) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QStandardItemModel_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QStandardItemModel) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QStandardItemModel_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStandardItemModel_disconnectNotify
func miqt_exec_callback_QStandardItemModel_disconnectNotify(self *C.QStandardItemModel, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QStandardItemModel{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QStandardItemModel) Delete() {
	C.QStandardItemModel_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStandardItemModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QStandardItemModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
