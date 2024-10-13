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

func newQStandardItem(h *C.QStandardItem) *QStandardItem {
	if h == nil {
		return nil
	}
	return &QStandardItem{h: h}
}

func newQStandardItem_U(h unsafe.Pointer) *QStandardItem {
	return newQStandardItem((*C.QStandardItem)(h))
}

// NewQStandardItem constructs a new QStandardItem object.
func NewQStandardItem() *QStandardItem {
	ret := C.QStandardItem_new()
	return newQStandardItem(ret)
}

// NewQStandardItem2 constructs a new QStandardItem object.
func NewQStandardItem2(text string) *QStandardItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QStandardItem_new2((*C.struct_miqt_string)(text_ms))
	return newQStandardItem(ret)
}

// NewQStandardItem3 constructs a new QStandardItem object.
func NewQStandardItem3(icon *QIcon, text string) *QStandardItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QStandardItem_new3(icon.cPointer(), (*C.struct_miqt_string)(text_ms))
	return newQStandardItem(ret)
}

// NewQStandardItem4 constructs a new QStandardItem object.
func NewQStandardItem4(rows int) *QStandardItem {
	ret := C.QStandardItem_new4((C.int)(rows))
	return newQStandardItem(ret)
}

// NewQStandardItem5 constructs a new QStandardItem object.
func NewQStandardItem5(rows int, columns int) *QStandardItem {
	ret := C.QStandardItem_new5((C.int)(rows), (C.int)(columns))
	return newQStandardItem(ret)
}

func (this *QStandardItem) Data() *QVariant {
	_ret := C.QStandardItem_Data(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItem) SetData(value *QVariant) {
	C.QStandardItem_SetData(this.h, value.cPointer())
}

func (this *QStandardItem) ClearData() {
	C.QStandardItem_ClearData(this.h)
}

func (this *QStandardItem) Text() string {
	var _ms *C.struct_miqt_string = C.QStandardItem_Text(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStandardItem) SetText(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QStandardItem_SetText(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QStandardItem) Icon() *QIcon {
	_ret := C.QStandardItem_Icon(this.h)
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItem) SetIcon(icon *QIcon) {
	C.QStandardItem_SetIcon(this.h, icon.cPointer())
}

func (this *QStandardItem) ToolTip() string {
	var _ms *C.struct_miqt_string = C.QStandardItem_ToolTip(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStandardItem) SetToolTip(toolTip string) {
	toolTip_ms := miqt_strdupg(toolTip)
	defer C.free(toolTip_ms)
	C.QStandardItem_SetToolTip(this.h, (*C.struct_miqt_string)(toolTip_ms))
}

func (this *QStandardItem) StatusTip() string {
	var _ms *C.struct_miqt_string = C.QStandardItem_StatusTip(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStandardItem) SetStatusTip(statusTip string) {
	statusTip_ms := miqt_strdupg(statusTip)
	defer C.free(statusTip_ms)
	C.QStandardItem_SetStatusTip(this.h, (*C.struct_miqt_string)(statusTip_ms))
}

func (this *QStandardItem) WhatsThis() string {
	var _ms *C.struct_miqt_string = C.QStandardItem_WhatsThis(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStandardItem) SetWhatsThis(whatsThis string) {
	whatsThis_ms := miqt_strdupg(whatsThis)
	defer C.free(whatsThis_ms)
	C.QStandardItem_SetWhatsThis(this.h, (*C.struct_miqt_string)(whatsThis_ms))
}

func (this *QStandardItem) SizeHint() *QSize {
	_ret := C.QStandardItem_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItem) SetSizeHint(sizeHint *QSize) {
	C.QStandardItem_SetSizeHint(this.h, sizeHint.cPointer())
}

func (this *QStandardItem) Font() *QFont {
	_ret := C.QStandardItem_Font(this.h)
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItem) SetFont(font *QFont) {
	C.QStandardItem_SetFont(this.h, font.cPointer())
}

func (this *QStandardItem) TextAlignment() AlignmentFlag {
	return (AlignmentFlag)(C.QStandardItem_TextAlignment(this.h))
}

func (this *QStandardItem) SetTextAlignment(textAlignment AlignmentFlag) {
	C.QStandardItem_SetTextAlignment(this.h, (C.int)(textAlignment))
}

func (this *QStandardItem) Background() *QBrush {
	_ret := C.QStandardItem_Background(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItem) SetBackground(brush *QBrush) {
	C.QStandardItem_SetBackground(this.h, brush.cPointer())
}

func (this *QStandardItem) Foreground() *QBrush {
	_ret := C.QStandardItem_Foreground(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItem) SetForeground(brush *QBrush) {
	C.QStandardItem_SetForeground(this.h, brush.cPointer())
}

func (this *QStandardItem) CheckState() CheckState {
	return (CheckState)(C.QStandardItem_CheckState(this.h))
}

func (this *QStandardItem) SetCheckState(checkState CheckState) {
	C.QStandardItem_SetCheckState(this.h, (C.int)(checkState))
}

func (this *QStandardItem) AccessibleText() string {
	var _ms *C.struct_miqt_string = C.QStandardItem_AccessibleText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStandardItem) SetAccessibleText(accessibleText string) {
	accessibleText_ms := miqt_strdupg(accessibleText)
	defer C.free(accessibleText_ms)
	C.QStandardItem_SetAccessibleText(this.h, (*C.struct_miqt_string)(accessibleText_ms))
}

func (this *QStandardItem) AccessibleDescription() string {
	var _ms *C.struct_miqt_string = C.QStandardItem_AccessibleDescription(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStandardItem) SetAccessibleDescription(accessibleDescription string) {
	accessibleDescription_ms := miqt_strdupg(accessibleDescription)
	defer C.free(accessibleDescription_ms)
	C.QStandardItem_SetAccessibleDescription(this.h, (*C.struct_miqt_string)(accessibleDescription_ms))
}

func (this *QStandardItem) Flags() ItemFlag {
	return (ItemFlag)(C.QStandardItem_Flags(this.h))
}

func (this *QStandardItem) SetFlags(flags ItemFlag) {
	C.QStandardItem_SetFlags(this.h, (C.int)(flags))
}

func (this *QStandardItem) IsEnabled() bool {
	return (bool)(C.QStandardItem_IsEnabled(this.h))
}

func (this *QStandardItem) SetEnabled(enabled bool) {
	C.QStandardItem_SetEnabled(this.h, (C.bool)(enabled))
}

func (this *QStandardItem) IsEditable() bool {
	return (bool)(C.QStandardItem_IsEditable(this.h))
}

func (this *QStandardItem) SetEditable(editable bool) {
	C.QStandardItem_SetEditable(this.h, (C.bool)(editable))
}

func (this *QStandardItem) IsSelectable() bool {
	return (bool)(C.QStandardItem_IsSelectable(this.h))
}

func (this *QStandardItem) SetSelectable(selectable bool) {
	C.QStandardItem_SetSelectable(this.h, (C.bool)(selectable))
}

func (this *QStandardItem) IsCheckable() bool {
	return (bool)(C.QStandardItem_IsCheckable(this.h))
}

func (this *QStandardItem) SetCheckable(checkable bool) {
	C.QStandardItem_SetCheckable(this.h, (C.bool)(checkable))
}

func (this *QStandardItem) IsAutoTristate() bool {
	return (bool)(C.QStandardItem_IsAutoTristate(this.h))
}

func (this *QStandardItem) SetAutoTristate(tristate bool) {
	C.QStandardItem_SetAutoTristate(this.h, (C.bool)(tristate))
}

func (this *QStandardItem) IsUserTristate() bool {
	return (bool)(C.QStandardItem_IsUserTristate(this.h))
}

func (this *QStandardItem) SetUserTristate(tristate bool) {
	C.QStandardItem_SetUserTristate(this.h, (C.bool)(tristate))
}

func (this *QStandardItem) IsTristate() bool {
	return (bool)(C.QStandardItem_IsTristate(this.h))
}

func (this *QStandardItem) SetTristate(tristate bool) {
	C.QStandardItem_SetTristate(this.h, (C.bool)(tristate))
}

func (this *QStandardItem) IsDragEnabled() bool {
	return (bool)(C.QStandardItem_IsDragEnabled(this.h))
}

func (this *QStandardItem) SetDragEnabled(dragEnabled bool) {
	C.QStandardItem_SetDragEnabled(this.h, (C.bool)(dragEnabled))
}

func (this *QStandardItem) IsDropEnabled() bool {
	return (bool)(C.QStandardItem_IsDropEnabled(this.h))
}

func (this *QStandardItem) SetDropEnabled(dropEnabled bool) {
	C.QStandardItem_SetDropEnabled(this.h, (C.bool)(dropEnabled))
}

func (this *QStandardItem) Parent() *QStandardItem {
	return newQStandardItem_U(unsafe.Pointer(C.QStandardItem_Parent(this.h)))
}

func (this *QStandardItem) Row() int {
	return (int)(C.QStandardItem_Row(this.h))
}

func (this *QStandardItem) Column() int {
	return (int)(C.QStandardItem_Column(this.h))
}

func (this *QStandardItem) Index() *QModelIndex {
	_ret := C.QStandardItem_Index(this.h)
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItem) Model() *QStandardItemModel {
	return newQStandardItemModel_U(unsafe.Pointer(C.QStandardItem_Model(this.h)))
}

func (this *QStandardItem) RowCount() int {
	return (int)(C.QStandardItem_RowCount(this.h))
}

func (this *QStandardItem) SetRowCount(rows int) {
	C.QStandardItem_SetRowCount(this.h, (C.int)(rows))
}

func (this *QStandardItem) ColumnCount() int {
	return (int)(C.QStandardItem_ColumnCount(this.h))
}

func (this *QStandardItem) SetColumnCount(columns int) {
	C.QStandardItem_SetColumnCount(this.h, (C.int)(columns))
}

func (this *QStandardItem) HasChildren() bool {
	return (bool)(C.QStandardItem_HasChildren(this.h))
}

func (this *QStandardItem) Child(row int) *QStandardItem {
	return newQStandardItem_U(unsafe.Pointer(C.QStandardItem_Child(this.h, (C.int)(row))))
}

func (this *QStandardItem) SetChild(row int, column int, item *QStandardItem) {
	C.QStandardItem_SetChild(this.h, (C.int)(row), (C.int)(column), item.cPointer())
}

func (this *QStandardItem) SetChild2(row int, item *QStandardItem) {
	C.QStandardItem_SetChild2(this.h, (C.int)(row), item.cPointer())
}

func (this *QStandardItem) InsertRow(row int, items []*QStandardItem) {
	// For the C ABI, malloc a C array of raw pointers
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := &C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(items_ma))
	C.QStandardItem_InsertRow(this.h, (C.int)(row), items_ma)
}

func (this *QStandardItem) InsertColumn(column int, items []*QStandardItem) {
	// For the C ABI, malloc a C array of raw pointers
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := &C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(items_ma))
	C.QStandardItem_InsertColumn(this.h, (C.int)(column), items_ma)
}

func (this *QStandardItem) InsertRows(row int, items []*QStandardItem) {
	// For the C ABI, malloc a C array of raw pointers
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := &C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(items_ma))
	C.QStandardItem_InsertRows(this.h, (C.int)(row), items_ma)
}

func (this *QStandardItem) InsertRows2(row int, count int) {
	C.QStandardItem_InsertRows2(this.h, (C.int)(row), (C.int)(count))
}

func (this *QStandardItem) InsertColumns(column int, count int) {
	C.QStandardItem_InsertColumns(this.h, (C.int)(column), (C.int)(count))
}

func (this *QStandardItem) RemoveRow(row int) {
	C.QStandardItem_RemoveRow(this.h, (C.int)(row))
}

func (this *QStandardItem) RemoveColumn(column int) {
	C.QStandardItem_RemoveColumn(this.h, (C.int)(column))
}

func (this *QStandardItem) RemoveRows(row int, count int) {
	C.QStandardItem_RemoveRows(this.h, (C.int)(row), (C.int)(count))
}

func (this *QStandardItem) RemoveColumns(column int, count int) {
	C.QStandardItem_RemoveColumns(this.h, (C.int)(column), (C.int)(count))
}

func (this *QStandardItem) AppendRow(items []*QStandardItem) {
	// For the C ABI, malloc a C array of raw pointers
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := &C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(items_ma))
	C.QStandardItem_AppendRow(this.h, items_ma)
}

func (this *QStandardItem) AppendRows(items []*QStandardItem) {
	// For the C ABI, malloc a C array of raw pointers
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := &C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(items_ma))
	C.QStandardItem_AppendRows(this.h, items_ma)
}

func (this *QStandardItem) AppendColumn(items []*QStandardItem) {
	// For the C ABI, malloc a C array of raw pointers
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := &C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(items_ma))
	C.QStandardItem_AppendColumn(this.h, items_ma)
}

func (this *QStandardItem) InsertRow2(row int, item *QStandardItem) {
	C.QStandardItem_InsertRow2(this.h, (C.int)(row), item.cPointer())
}

func (this *QStandardItem) AppendRowWithItem(item *QStandardItem) {
	C.QStandardItem_AppendRowWithItem(this.h, item.cPointer())
}

func (this *QStandardItem) TakeChild(row int) *QStandardItem {
	return newQStandardItem_U(unsafe.Pointer(C.QStandardItem_TakeChild(this.h, (C.int)(row))))
}

func (this *QStandardItem) TakeRow(row int) []*QStandardItem {
	var _ma *C.struct_miqt_array = C.QStandardItem_TakeRow(this.h, (C.int)(row))
	_ret := make([]*QStandardItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QStandardItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQStandardItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QStandardItem) TakeColumn(column int) []*QStandardItem {
	var _ma *C.struct_miqt_array = C.QStandardItem_TakeColumn(this.h, (C.int)(column))
	_ret := make([]*QStandardItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QStandardItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQStandardItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QStandardItem) SortChildren(column int) {
	C.QStandardItem_SortChildren(this.h, (C.int)(column))
}

func (this *QStandardItem) Clone() *QStandardItem {
	return newQStandardItem_U(unsafe.Pointer(C.QStandardItem_Clone(this.h)))
}

func (this *QStandardItem) Type() int {
	return (int)(C.QStandardItem_Type(this.h))
}

func (this *QStandardItem) Read(in *QDataStream) {
	C.QStandardItem_Read(this.h, in.cPointer())
}

func (this *QStandardItem) Write(out *QDataStream) {
	C.QStandardItem_Write(this.h, out.cPointer())
}

func (this *QStandardItem) OperatorLesser(other *QStandardItem) bool {
	return (bool)(C.QStandardItem_OperatorLesser(this.h, other.cPointer()))
}

func (this *QStandardItem) Data1(role int) *QVariant {
	_ret := C.QStandardItem_Data1(this.h, (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItem) SetData2(value *QVariant, role int) {
	C.QStandardItem_SetData2(this.h, value.cPointer(), (C.int)(role))
}

func (this *QStandardItem) Child2(row int, column int) *QStandardItem {
	return newQStandardItem_U(unsafe.Pointer(C.QStandardItem_Child2(this.h, (C.int)(row), (C.int)(column))))
}

func (this *QStandardItem) TakeChild2(row int, column int) *QStandardItem {
	return newQStandardItem_U(unsafe.Pointer(C.QStandardItem_TakeChild2(this.h, (C.int)(row), (C.int)(column))))
}

func (this *QStandardItem) SortChildren2(column int, order SortOrder) {
	C.QStandardItem_SortChildren2(this.h, (C.int)(column), (C.int)(order))
}

// Delete this object from C++ memory.
func (this *QStandardItem) Delete() {
	C.QStandardItem_Delete(this.h)
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

func newQStandardItemModel(h *C.QStandardItemModel) *QStandardItemModel {
	if h == nil {
		return nil
	}
	return &QStandardItemModel{h: h, QAbstractItemModel: newQAbstractItemModel_U(unsafe.Pointer(h))}
}

func newQStandardItemModel_U(h unsafe.Pointer) *QStandardItemModel {
	return newQStandardItemModel((*C.QStandardItemModel)(h))
}

// NewQStandardItemModel constructs a new QStandardItemModel object.
func NewQStandardItemModel() *QStandardItemModel {
	ret := C.QStandardItemModel_new()
	return newQStandardItemModel(ret)
}

// NewQStandardItemModel2 constructs a new QStandardItemModel object.
func NewQStandardItemModel2(rows int, columns int) *QStandardItemModel {
	ret := C.QStandardItemModel_new2((C.int)(rows), (C.int)(columns))
	return newQStandardItemModel(ret)
}

// NewQStandardItemModel3 constructs a new QStandardItemModel object.
func NewQStandardItemModel3(parent *QObject) *QStandardItemModel {
	ret := C.QStandardItemModel_new3(parent.cPointer())
	return newQStandardItemModel(ret)
}

// NewQStandardItemModel4 constructs a new QStandardItemModel object.
func NewQStandardItemModel4(rows int, columns int, parent *QObject) *QStandardItemModel {
	ret := C.QStandardItemModel_new4((C.int)(rows), (C.int)(columns), parent.cPointer())
	return newQStandardItemModel(ret)
}

func (this *QStandardItemModel) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QStandardItemModel_MetaObject(this.h)))
}

func (this *QStandardItemModel) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QStandardItemModel_Metacast(this.h, param1_Cstring)
}

func QStandardItemModel_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QStandardItemModel_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStandardItemModel_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QStandardItemModel_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStandardItemModel) Index(row int, column int) *QModelIndex {
	_ret := C.QStandardItemModel_Index(this.h, (C.int)(row), (C.int)(column))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItemModel) Parent(child *QModelIndex) *QModelIndex {
	_ret := C.QStandardItemModel_Parent(this.h, child.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItemModel) RowCount() int {
	return (int)(C.QStandardItemModel_RowCount(this.h))
}

func (this *QStandardItemModel) ColumnCount() int {
	return (int)(C.QStandardItemModel_ColumnCount(this.h))
}

func (this *QStandardItemModel) HasChildren() bool {
	return (bool)(C.QStandardItemModel_HasChildren(this.h))
}

func (this *QStandardItemModel) Sibling(row int, column int, idx *QModelIndex) *QModelIndex {
	_ret := C.QStandardItemModel_Sibling(this.h, (C.int)(row), (C.int)(column), idx.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItemModel) Data(index *QModelIndex) *QVariant {
	_ret := C.QStandardItemModel_Data(this.h, index.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItemModel) SetData(index *QModelIndex, value *QVariant) bool {
	return (bool)(C.QStandardItemModel_SetData(this.h, index.cPointer(), value.cPointer()))
}

func (this *QStandardItemModel) ClearItemData(index *QModelIndex) bool {
	return (bool)(C.QStandardItemModel_ClearItemData(this.h, index.cPointer()))
}

func (this *QStandardItemModel) HeaderData(section int, orientation Orientation) *QVariant {
	_ret := C.QStandardItemModel_HeaderData(this.h, (C.int)(section), (C.int)(orientation))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItemModel) SetHeaderData(section int, orientation Orientation, value *QVariant) bool {
	return (bool)(C.QStandardItemModel_SetHeaderData(this.h, (C.int)(section), (C.int)(orientation), value.cPointer()))
}

func (this *QStandardItemModel) InsertRows(row int, count int) bool {
	return (bool)(C.QStandardItemModel_InsertRows(this.h, (C.int)(row), (C.int)(count)))
}

func (this *QStandardItemModel) InsertColumns(column int, count int) bool {
	return (bool)(C.QStandardItemModel_InsertColumns(this.h, (C.int)(column), (C.int)(count)))
}

func (this *QStandardItemModel) RemoveRows(row int, count int) bool {
	return (bool)(C.QStandardItemModel_RemoveRows(this.h, (C.int)(row), (C.int)(count)))
}

func (this *QStandardItemModel) RemoveColumns(column int, count int) bool {
	return (bool)(C.QStandardItemModel_RemoveColumns(this.h, (C.int)(column), (C.int)(count)))
}

func (this *QStandardItemModel) Flags(index *QModelIndex) ItemFlag {
	return (ItemFlag)(C.QStandardItemModel_Flags(this.h, index.cPointer()))
}

func (this *QStandardItemModel) SupportedDropActions() DropAction {
	return (DropAction)(C.QStandardItemModel_SupportedDropActions(this.h))
}

func (this *QStandardItemModel) Clear() {
	C.QStandardItemModel_Clear(this.h)
}

func (this *QStandardItemModel) Sort(column int) {
	C.QStandardItemModel_Sort(this.h, (C.int)(column))
}

func (this *QStandardItemModel) ItemFromIndex(index *QModelIndex) *QStandardItem {
	return newQStandardItem_U(unsafe.Pointer(C.QStandardItemModel_ItemFromIndex(this.h, index.cPointer())))
}

func (this *QStandardItemModel) IndexFromItem(item *QStandardItem) *QModelIndex {
	_ret := C.QStandardItemModel_IndexFromItem(this.h, item.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItemModel) Item(row int) *QStandardItem {
	return newQStandardItem_U(unsafe.Pointer(C.QStandardItemModel_Item(this.h, (C.int)(row))))
}

func (this *QStandardItemModel) SetItem(row int, column int, item *QStandardItem) {
	C.QStandardItemModel_SetItem(this.h, (C.int)(row), (C.int)(column), item.cPointer())
}

func (this *QStandardItemModel) SetItem2(row int, item *QStandardItem) {
	C.QStandardItemModel_SetItem2(this.h, (C.int)(row), item.cPointer())
}

func (this *QStandardItemModel) InvisibleRootItem() *QStandardItem {
	return newQStandardItem_U(unsafe.Pointer(C.QStandardItemModel_InvisibleRootItem(this.h)))
}

func (this *QStandardItemModel) HorizontalHeaderItem(column int) *QStandardItem {
	return newQStandardItem_U(unsafe.Pointer(C.QStandardItemModel_HorizontalHeaderItem(this.h, (C.int)(column))))
}

func (this *QStandardItemModel) SetHorizontalHeaderItem(column int, item *QStandardItem) {
	C.QStandardItemModel_SetHorizontalHeaderItem(this.h, (C.int)(column), item.cPointer())
}

func (this *QStandardItemModel) VerticalHeaderItem(row int) *QStandardItem {
	return newQStandardItem_U(unsafe.Pointer(C.QStandardItemModel_VerticalHeaderItem(this.h, (C.int)(row))))
}

func (this *QStandardItemModel) SetVerticalHeaderItem(row int, item *QStandardItem) {
	C.QStandardItemModel_SetVerticalHeaderItem(this.h, (C.int)(row), item.cPointer())
}

func (this *QStandardItemModel) SetHorizontalHeaderLabels(labels []string) {
	// For the C ABI, malloc a C array of raw pointers
	labels_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(labels))))
	defer C.free(unsafe.Pointer(labels_CArray))
	for i := range labels {
		labels_i_ms := miqt_strdupg(labels[i])
		defer C.free(labels_i_ms)
		labels_CArray[i] = (*C.struct_miqt_string)(labels_i_ms)
	}
	labels_ma := &C.struct_miqt_array{len: C.size_t(len(labels)), data: unsafe.Pointer(labels_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(labels_ma))
	C.QStandardItemModel_SetHorizontalHeaderLabels(this.h, labels_ma)
}

func (this *QStandardItemModel) SetVerticalHeaderLabels(labels []string) {
	// For the C ABI, malloc a C array of raw pointers
	labels_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(labels))))
	defer C.free(unsafe.Pointer(labels_CArray))
	for i := range labels {
		labels_i_ms := miqt_strdupg(labels[i])
		defer C.free(labels_i_ms)
		labels_CArray[i] = (*C.struct_miqt_string)(labels_i_ms)
	}
	labels_ma := &C.struct_miqt_array{len: C.size_t(len(labels)), data: unsafe.Pointer(labels_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(labels_ma))
	C.QStandardItemModel_SetVerticalHeaderLabels(this.h, labels_ma)
}

func (this *QStandardItemModel) SetRowCount(rows int) {
	C.QStandardItemModel_SetRowCount(this.h, (C.int)(rows))
}

func (this *QStandardItemModel) SetColumnCount(columns int) {
	C.QStandardItemModel_SetColumnCount(this.h, (C.int)(columns))
}

func (this *QStandardItemModel) AppendRow(items []*QStandardItem) {
	// For the C ABI, malloc a C array of raw pointers
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := &C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(items_ma))
	C.QStandardItemModel_AppendRow(this.h, items_ma)
}

func (this *QStandardItemModel) AppendColumn(items []*QStandardItem) {
	// For the C ABI, malloc a C array of raw pointers
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := &C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(items_ma))
	C.QStandardItemModel_AppendColumn(this.h, items_ma)
}

func (this *QStandardItemModel) AppendRowWithItem(item *QStandardItem) {
	C.QStandardItemModel_AppendRowWithItem(this.h, item.cPointer())
}

func (this *QStandardItemModel) InsertRow(row int, items []*QStandardItem) {
	// For the C ABI, malloc a C array of raw pointers
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := &C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(items_ma))
	C.QStandardItemModel_InsertRow(this.h, (C.int)(row), items_ma)
}

func (this *QStandardItemModel) InsertColumn(column int, items []*QStandardItem) {
	// For the C ABI, malloc a C array of raw pointers
	items_CArray := (*[0xffff]*C.QStandardItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := &C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(items_ma))
	C.QStandardItemModel_InsertColumn(this.h, (C.int)(column), items_ma)
}

func (this *QStandardItemModel) InsertRow2(row int, item *QStandardItem) {
	C.QStandardItemModel_InsertRow2(this.h, (C.int)(row), item.cPointer())
}

func (this *QStandardItemModel) InsertRowWithRow(row int) bool {
	return (bool)(C.QStandardItemModel_InsertRowWithRow(this.h, (C.int)(row)))
}

func (this *QStandardItemModel) InsertColumnWithColumn(column int) bool {
	return (bool)(C.QStandardItemModel_InsertColumnWithColumn(this.h, (C.int)(column)))
}

func (this *QStandardItemModel) TakeItem(row int) *QStandardItem {
	return newQStandardItem_U(unsafe.Pointer(C.QStandardItemModel_TakeItem(this.h, (C.int)(row))))
}

func (this *QStandardItemModel) TakeRow(row int) []*QStandardItem {
	var _ma *C.struct_miqt_array = C.QStandardItemModel_TakeRow(this.h, (C.int)(row))
	_ret := make([]*QStandardItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QStandardItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQStandardItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QStandardItemModel) TakeColumn(column int) []*QStandardItem {
	var _ma *C.struct_miqt_array = C.QStandardItemModel_TakeColumn(this.h, (C.int)(column))
	_ret := make([]*QStandardItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QStandardItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQStandardItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QStandardItemModel) TakeHorizontalHeaderItem(column int) *QStandardItem {
	return newQStandardItem_U(unsafe.Pointer(C.QStandardItemModel_TakeHorizontalHeaderItem(this.h, (C.int)(column))))
}

func (this *QStandardItemModel) TakeVerticalHeaderItem(row int) *QStandardItem {
	return newQStandardItem_U(unsafe.Pointer(C.QStandardItemModel_TakeVerticalHeaderItem(this.h, (C.int)(row))))
}

func (this *QStandardItemModel) ItemPrototype() *QStandardItem {
	return newQStandardItem_U(unsafe.Pointer(C.QStandardItemModel_ItemPrototype(this.h)))
}

func (this *QStandardItemModel) SetItemPrototype(item *QStandardItem) {
	C.QStandardItemModel_SetItemPrototype(this.h, item.cPointer())
}

func (this *QStandardItemModel) FindItems(text string) []*QStandardItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	var _ma *C.struct_miqt_array = C.QStandardItemModel_FindItems(this.h, (*C.struct_miqt_string)(text_ms))
	_ret := make([]*QStandardItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QStandardItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQStandardItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QStandardItemModel) SortRole() int {
	return (int)(C.QStandardItemModel_SortRole(this.h))
}

func (this *QStandardItemModel) SetSortRole(role int) {
	C.QStandardItemModel_SetSortRole(this.h, (C.int)(role))
}

func (this *QStandardItemModel) MimeTypes() []string {
	var _ma *C.struct_miqt_array = C.QStandardItemModel_MimeTypes(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QStandardItemModel) MimeData(indexes []QModelIndex) *QMimeData {
	// For the C ABI, malloc a C array of raw pointers
	indexes_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(indexes))))
	defer C.free(unsafe.Pointer(indexes_CArray))
	for i := range indexes {
		indexes_CArray[i] = indexes[i].cPointer()
	}
	indexes_ma := &C.struct_miqt_array{len: C.size_t(len(indexes)), data: unsafe.Pointer(indexes_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(indexes_ma))
	return newQMimeData_U(unsafe.Pointer(C.QStandardItemModel_MimeData(this.h, indexes_ma)))
}

func (this *QStandardItemModel) DropMimeData(data *QMimeData, action DropAction, row int, column int, parent *QModelIndex) bool {
	return (bool)(C.QStandardItemModel_DropMimeData(this.h, data.cPointer(), (C.int)(action), (C.int)(row), (C.int)(column), parent.cPointer()))
}

func (this *QStandardItemModel) ItemChanged(item *QStandardItem) {
	C.QStandardItemModel_ItemChanged(this.h, item.cPointer())
}
func (this *QStandardItemModel) OnItemChanged(slot func(item *QStandardItem)) {
	C.QStandardItemModel_connect_ItemChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStandardItemModel_ItemChanged
func miqt_exec_callback_QStandardItemModel_ItemChanged(cb C.intptr_t, item *C.QStandardItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QStandardItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStandardItem_U(unsafe.Pointer(item))

	gofunc(slotval1)
}

func QStandardItemModel_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStandardItemModel_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStandardItemModel_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStandardItemModel_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStandardItemModel_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStandardItemModel_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStandardItemModel_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStandardItemModel_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStandardItemModel) Index3(row int, column int, parent *QModelIndex) *QModelIndex {
	_ret := C.QStandardItemModel_Index3(this.h, (C.int)(row), (C.int)(column), parent.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItemModel) RowCount1(parent *QModelIndex) int {
	return (int)(C.QStandardItemModel_RowCount1(this.h, parent.cPointer()))
}

func (this *QStandardItemModel) ColumnCount1(parent *QModelIndex) int {
	return (int)(C.QStandardItemModel_ColumnCount1(this.h, parent.cPointer()))
}

func (this *QStandardItemModel) HasChildren1(parent *QModelIndex) bool {
	return (bool)(C.QStandardItemModel_HasChildren1(this.h, parent.cPointer()))
}

func (this *QStandardItemModel) Data2(index *QModelIndex, role int) *QVariant {
	_ret := C.QStandardItemModel_Data2(this.h, index.cPointer(), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItemModel) SetData3(index *QModelIndex, value *QVariant, role int) bool {
	return (bool)(C.QStandardItemModel_SetData3(this.h, index.cPointer(), value.cPointer(), (C.int)(role)))
}

func (this *QStandardItemModel) HeaderData3(section int, orientation Orientation, role int) *QVariant {
	_ret := C.QStandardItemModel_HeaderData3(this.h, (C.int)(section), (C.int)(orientation), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStandardItemModel) SetHeaderData4(section int, orientation Orientation, value *QVariant, role int) bool {
	return (bool)(C.QStandardItemModel_SetHeaderData4(this.h, (C.int)(section), (C.int)(orientation), value.cPointer(), (C.int)(role)))
}

func (this *QStandardItemModel) InsertRows3(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QStandardItemModel_InsertRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QStandardItemModel) InsertColumns3(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QStandardItemModel_InsertColumns3(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QStandardItemModel) RemoveRows3(row int, count int, parent *QModelIndex) bool {
	return (bool)(C.QStandardItemModel_RemoveRows3(this.h, (C.int)(row), (C.int)(count), parent.cPointer()))
}

func (this *QStandardItemModel) RemoveColumns3(column int, count int, parent *QModelIndex) bool {
	return (bool)(C.QStandardItemModel_RemoveColumns3(this.h, (C.int)(column), (C.int)(count), parent.cPointer()))
}

func (this *QStandardItemModel) Sort2(column int, order SortOrder) {
	C.QStandardItemModel_Sort2(this.h, (C.int)(column), (C.int)(order))
}

func (this *QStandardItemModel) Item2(row int, column int) *QStandardItem {
	return newQStandardItem_U(unsafe.Pointer(C.QStandardItemModel_Item2(this.h, (C.int)(row), (C.int)(column))))
}

func (this *QStandardItemModel) InsertRow22(row int, parent *QModelIndex) bool {
	return (bool)(C.QStandardItemModel_InsertRow22(this.h, (C.int)(row), parent.cPointer()))
}

func (this *QStandardItemModel) InsertColumn2(column int, parent *QModelIndex) bool {
	return (bool)(C.QStandardItemModel_InsertColumn2(this.h, (C.int)(column), parent.cPointer()))
}

func (this *QStandardItemModel) TakeItem2(row int, column int) *QStandardItem {
	return newQStandardItem_U(unsafe.Pointer(C.QStandardItemModel_TakeItem2(this.h, (C.int)(row), (C.int)(column))))
}

func (this *QStandardItemModel) FindItems2(text string, flags MatchFlag) []*QStandardItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	var _ma *C.struct_miqt_array = C.QStandardItemModel_FindItems2(this.h, (*C.struct_miqt_string)(text_ms), (C.int)(flags))
	_ret := make([]*QStandardItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QStandardItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQStandardItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QStandardItemModel) FindItems3(text string, flags MatchFlag, column int) []*QStandardItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	var _ma *C.struct_miqt_array = C.QStandardItemModel_FindItems3(this.h, (*C.struct_miqt_string)(text_ms), (C.int)(flags), (C.int)(column))
	_ret := make([]*QStandardItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QStandardItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQStandardItem_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

// Delete this object from C++ memory.
func (this *QStandardItemModel) Delete() {
	C.QStandardItemModel_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStandardItemModel) GoGC() {
	runtime.SetFinalizer(this, func(this *QStandardItemModel) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
