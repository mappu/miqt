package qt

/*

#include "gen_qlistwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QListWidgetItem__ItemType int

const (
	QListWidgetItem__ItemType__Type     QListWidgetItem__ItemType = 0
	QListWidgetItem__ItemType__UserType QListWidgetItem__ItemType = 1000
)

type QListWidgetItem struct {
	h *C.QListWidgetItem
}

func (this *QListWidgetItem) cPointer() *C.QListWidgetItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQListWidgetItem(h *C.QListWidgetItem) *QListWidgetItem {
	if h == nil {
		return nil
	}
	return &QListWidgetItem{h: h}
}

func newQListWidgetItem_U(h unsafe.Pointer) *QListWidgetItem {
	return newQListWidgetItem((*C.QListWidgetItem)(h))
}

// NewQListWidgetItem constructs a new QListWidgetItem object.
func NewQListWidgetItem() *QListWidgetItem {
	ret := C.QListWidgetItem_new()
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem2 constructs a new QListWidgetItem object.
func NewQListWidgetItem2(text string) *QListWidgetItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QListWidgetItem_new2((*C.struct_miqt_string)(text_ms))
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem3 constructs a new QListWidgetItem object.
func NewQListWidgetItem3(icon *QIcon, text string) *QListWidgetItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QListWidgetItem_new3(icon.cPointer(), (*C.struct_miqt_string)(text_ms))
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem4 constructs a new QListWidgetItem object.
func NewQListWidgetItem4(other *QListWidgetItem) *QListWidgetItem {
	ret := C.QListWidgetItem_new4(other.cPointer())
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem5 constructs a new QListWidgetItem object.
func NewQListWidgetItem5(listview *QListWidget) *QListWidgetItem {
	ret := C.QListWidgetItem_new5(listview.cPointer())
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem6 constructs a new QListWidgetItem object.
func NewQListWidgetItem6(listview *QListWidget, typeVal int) *QListWidgetItem {
	ret := C.QListWidgetItem_new6(listview.cPointer(), (C.int)(typeVal))
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem7 constructs a new QListWidgetItem object.
func NewQListWidgetItem7(text string, listview *QListWidget) *QListWidgetItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QListWidgetItem_new7((*C.struct_miqt_string)(text_ms), listview.cPointer())
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem8 constructs a new QListWidgetItem object.
func NewQListWidgetItem8(text string, listview *QListWidget, typeVal int) *QListWidgetItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QListWidgetItem_new8((*C.struct_miqt_string)(text_ms), listview.cPointer(), (C.int)(typeVal))
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem9 constructs a new QListWidgetItem object.
func NewQListWidgetItem9(icon *QIcon, text string, listview *QListWidget) *QListWidgetItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QListWidgetItem_new9(icon.cPointer(), (*C.struct_miqt_string)(text_ms), listview.cPointer())
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem10 constructs a new QListWidgetItem object.
func NewQListWidgetItem10(icon *QIcon, text string, listview *QListWidget, typeVal int) *QListWidgetItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QListWidgetItem_new10(icon.cPointer(), (*C.struct_miqt_string)(text_ms), listview.cPointer(), (C.int)(typeVal))
	return newQListWidgetItem(ret)
}

func (this *QListWidgetItem) Clone() *QListWidgetItem {
	_ret := C.QListWidgetItem_Clone(this.h)
	return newQListWidgetItem_U(unsafe.Pointer(_ret))
}

func (this *QListWidgetItem) ListWidget() *QListWidget {
	_ret := C.QListWidgetItem_ListWidget(this.h)
	return newQListWidget_U(unsafe.Pointer(_ret))
}

func (this *QListWidgetItem) SetSelected(selectVal bool) {
	C.QListWidgetItem_SetSelected(this.h, (C.bool)(selectVal))
}

func (this *QListWidgetItem) IsSelected() bool {
	_ret := C.QListWidgetItem_IsSelected(this.h)
	return (bool)(_ret)
}

func (this *QListWidgetItem) SetHidden(hide bool) {
	C.QListWidgetItem_SetHidden(this.h, (C.bool)(hide))
}

func (this *QListWidgetItem) IsHidden() bool {
	_ret := C.QListWidgetItem_IsHidden(this.h)
	return (bool)(_ret)
}

func (this *QListWidgetItem) Flags() int {
	_ret := C.QListWidgetItem_Flags(this.h)
	return (int)(_ret)
}

func (this *QListWidgetItem) SetFlags(flags int) {
	C.QListWidgetItem_SetFlags(this.h, (C.int)(flags))
}

func (this *QListWidgetItem) Text() string {
	var _ms *C.struct_miqt_string = C.QListWidgetItem_Text(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QListWidgetItem) SetText(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QListWidgetItem_SetText(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QListWidgetItem) Icon() *QIcon {
	_ret := C.QListWidgetItem_Icon(this.h)
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetIcon(icon *QIcon) {
	C.QListWidgetItem_SetIcon(this.h, icon.cPointer())
}

func (this *QListWidgetItem) StatusTip() string {
	var _ms *C.struct_miqt_string = C.QListWidgetItem_StatusTip(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QListWidgetItem) SetStatusTip(statusTip string) {
	statusTip_ms := miqt_strdupg(statusTip)
	defer C.free(statusTip_ms)
	C.QListWidgetItem_SetStatusTip(this.h, (*C.struct_miqt_string)(statusTip_ms))
}

func (this *QListWidgetItem) ToolTip() string {
	var _ms *C.struct_miqt_string = C.QListWidgetItem_ToolTip(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QListWidgetItem) SetToolTip(toolTip string) {
	toolTip_ms := miqt_strdupg(toolTip)
	defer C.free(toolTip_ms)
	C.QListWidgetItem_SetToolTip(this.h, (*C.struct_miqt_string)(toolTip_ms))
}

func (this *QListWidgetItem) WhatsThis() string {
	var _ms *C.struct_miqt_string = C.QListWidgetItem_WhatsThis(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QListWidgetItem) SetWhatsThis(whatsThis string) {
	whatsThis_ms := miqt_strdupg(whatsThis)
	defer C.free(whatsThis_ms)
	C.QListWidgetItem_SetWhatsThis(this.h, (*C.struct_miqt_string)(whatsThis_ms))
}

func (this *QListWidgetItem) Font() *QFont {
	_ret := C.QListWidgetItem_Font(this.h)
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetFont(font *QFont) {
	C.QListWidgetItem_SetFont(this.h, font.cPointer())
}

func (this *QListWidgetItem) TextAlignment() int {
	_ret := C.QListWidgetItem_TextAlignment(this.h)
	return (int)(_ret)
}

func (this *QListWidgetItem) SetTextAlignment(alignment int) {
	C.QListWidgetItem_SetTextAlignment(this.h, (C.int)(alignment))
}

func (this *QListWidgetItem) BackgroundColor() *QColor {
	_ret := C.QListWidgetItem_BackgroundColor(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetBackgroundColor(color *QColor) {
	C.QListWidgetItem_SetBackgroundColor(this.h, color.cPointer())
}

func (this *QListWidgetItem) Background() *QBrush {
	_ret := C.QListWidgetItem_Background(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetBackground(brush *QBrush) {
	C.QListWidgetItem_SetBackground(this.h, brush.cPointer())
}

func (this *QListWidgetItem) TextColor() *QColor {
	_ret := C.QListWidgetItem_TextColor(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetTextColor(color *QColor) {
	C.QListWidgetItem_SetTextColor(this.h, color.cPointer())
}

func (this *QListWidgetItem) Foreground() *QBrush {
	_ret := C.QListWidgetItem_Foreground(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetForeground(brush *QBrush) {
	C.QListWidgetItem_SetForeground(this.h, brush.cPointer())
}

func (this *QListWidgetItem) CheckState() CheckState {
	_ret := C.QListWidgetItem_CheckState(this.h)
	return (CheckState)(_ret)
}

func (this *QListWidgetItem) SetCheckState(state CheckState) {
	C.QListWidgetItem_SetCheckState(this.h, (C.uintptr_t)(state))
}

func (this *QListWidgetItem) SizeHint() *QSize {
	_ret := C.QListWidgetItem_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetSizeHint(size *QSize) {
	C.QListWidgetItem_SetSizeHint(this.h, size.cPointer())
}

func (this *QListWidgetItem) Data(role int) *QVariant {
	_ret := C.QListWidgetItem_Data(this.h, (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetData(role int, value *QVariant) {
	C.QListWidgetItem_SetData(this.h, (C.int)(role), value.cPointer())
}

func (this *QListWidgetItem) OperatorLesser(other *QListWidgetItem) bool {
	_ret := C.QListWidgetItem_OperatorLesser(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QListWidgetItem) Read(in *QDataStream) {
	C.QListWidgetItem_Read(this.h, in.cPointer())
}

func (this *QListWidgetItem) Write(out *QDataStream) {
	C.QListWidgetItem_Write(this.h, out.cPointer())
}

func (this *QListWidgetItem) OperatorAssign(other *QListWidgetItem) {
	C.QListWidgetItem_OperatorAssign(this.h, other.cPointer())
}

func (this *QListWidgetItem) Type() int {
	_ret := C.QListWidgetItem_Type(this.h)
	return (int)(_ret)
}

// Delete this object from C++ memory.
func (this *QListWidgetItem) Delete() {
	C.QListWidgetItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QListWidgetItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QListWidgetItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QListWidget struct {
	h *C.QListWidget
	*QListView
}

func (this *QListWidget) cPointer() *C.QListWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func newQListWidget(h *C.QListWidget) *QListWidget {
	if h == nil {
		return nil
	}
	return &QListWidget{h: h, QListView: newQListView_U(unsafe.Pointer(h))}
}

func newQListWidget_U(h unsafe.Pointer) *QListWidget {
	return newQListWidget((*C.QListWidget)(h))
}

// NewQListWidget constructs a new QListWidget object.
func NewQListWidget() *QListWidget {
	ret := C.QListWidget_new()
	return newQListWidget(ret)
}

// NewQListWidget2 constructs a new QListWidget object.
func NewQListWidget2(parent *QWidget) *QListWidget {
	ret := C.QListWidget_new2(parent.cPointer())
	return newQListWidget(ret)
}

func (this *QListWidget) MetaObject() *QMetaObject {
	_ret := C.QListWidget_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QListWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QListWidget_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QListWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QListWidget_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QListWidget) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QListWidget_SetSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QListWidget) Item(row int) *QListWidgetItem {
	_ret := C.QListWidget_Item(this.h, (C.int)(row))
	return newQListWidgetItem_U(unsafe.Pointer(_ret))
}

func (this *QListWidget) Row(item *QListWidgetItem) int {
	_ret := C.QListWidget_Row(this.h, item.cPointer())
	return (int)(_ret)
}

func (this *QListWidget) InsertItem(row int, item *QListWidgetItem) {
	C.QListWidget_InsertItem(this.h, (C.int)(row), item.cPointer())
}

func (this *QListWidget) InsertItem2(row int, label string) {
	label_ms := miqt_strdupg(label)
	defer C.free(label_ms)
	C.QListWidget_InsertItem2(this.h, (C.int)(row), (*C.struct_miqt_string)(label_ms))
}

func (this *QListWidget) InsertItems(row int, labels []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	labels_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(labels))))
	defer C.free(unsafe.Pointer(labels_CArray))
	for i := range labels {
		single_ms := miqt_strdupg(labels[i])
		defer C.free(single_ms)
		labels_CArray[i] = (*C.struct_miqt_string)(single_ms)
	}
	labels_ma := &C.struct_miqt_array{len: C.size_t(len(labels)), data: unsafe.Pointer(labels_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(labels_ma))
	C.QListWidget_InsertItems(this.h, (C.int)(row), labels_ma)
}

func (this *QListWidget) AddItem(label string) {
	label_ms := miqt_strdupg(label)
	defer C.free(label_ms)
	C.QListWidget_AddItem(this.h, (*C.struct_miqt_string)(label_ms))
}

func (this *QListWidget) AddItemWithItem(item *QListWidgetItem) {
	C.QListWidget_AddItemWithItem(this.h, item.cPointer())
}

func (this *QListWidget) AddItems(labels []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	labels_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(labels))))
	defer C.free(unsafe.Pointer(labels_CArray))
	for i := range labels {
		single_ms := miqt_strdupg(labels[i])
		defer C.free(single_ms)
		labels_CArray[i] = (*C.struct_miqt_string)(single_ms)
	}
	labels_ma := &C.struct_miqt_array{len: C.size_t(len(labels)), data: unsafe.Pointer(labels_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(labels_ma))
	C.QListWidget_AddItems(this.h, labels_ma)
}

func (this *QListWidget) TakeItem(row int) *QListWidgetItem {
	_ret := C.QListWidget_TakeItem(this.h, (C.int)(row))
	return newQListWidgetItem_U(unsafe.Pointer(_ret))
}

func (this *QListWidget) Count() int {
	_ret := C.QListWidget_Count(this.h)
	return (int)(_ret)
}

func (this *QListWidget) CurrentItem() *QListWidgetItem {
	_ret := C.QListWidget_CurrentItem(this.h)
	return newQListWidgetItem_U(unsafe.Pointer(_ret))
}

func (this *QListWidget) SetCurrentItem(item *QListWidgetItem) {
	C.QListWidget_SetCurrentItem(this.h, item.cPointer())
}

func (this *QListWidget) SetCurrentItem2(item *QListWidgetItem, command int) {
	C.QListWidget_SetCurrentItem2(this.h, item.cPointer(), (C.int)(command))
}

func (this *QListWidget) CurrentRow() int {
	_ret := C.QListWidget_CurrentRow(this.h)
	return (int)(_ret)
}

func (this *QListWidget) SetCurrentRow(row int) {
	C.QListWidget_SetCurrentRow(this.h, (C.int)(row))
}

func (this *QListWidget) SetCurrentRow2(row int, command int) {
	C.QListWidget_SetCurrentRow2(this.h, (C.int)(row), (C.int)(command))
}

func (this *QListWidget) ItemAt(p *QPoint) *QListWidgetItem {
	_ret := C.QListWidget_ItemAt(this.h, p.cPointer())
	return newQListWidgetItem_U(unsafe.Pointer(_ret))
}

func (this *QListWidget) ItemAt2(x int, y int) *QListWidgetItem {
	_ret := C.QListWidget_ItemAt2(this.h, (C.int)(x), (C.int)(y))
	return newQListWidgetItem_U(unsafe.Pointer(_ret))
}

func (this *QListWidget) VisualItemRect(item *QListWidgetItem) *QRect {
	_ret := C.QListWidget_VisualItemRect(this.h, item.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidget) SortItems() {
	C.QListWidget_SortItems(this.h)
}

func (this *QListWidget) SetSortingEnabled(enable bool) {
	C.QListWidget_SetSortingEnabled(this.h, (C.bool)(enable))
}

func (this *QListWidget) IsSortingEnabled() bool {
	_ret := C.QListWidget_IsSortingEnabled(this.h)
	return (bool)(_ret)
}

func (this *QListWidget) EditItem(item *QListWidgetItem) {
	C.QListWidget_EditItem(this.h, item.cPointer())
}

func (this *QListWidget) OpenPersistentEditor(item *QListWidgetItem) {
	C.QListWidget_OpenPersistentEditor(this.h, item.cPointer())
}

func (this *QListWidget) ClosePersistentEditor(item *QListWidgetItem) {
	C.QListWidget_ClosePersistentEditor(this.h, item.cPointer())
}

func (this *QListWidget) IsPersistentEditorOpen(item *QListWidgetItem) bool {
	_ret := C.QListWidget_IsPersistentEditorOpen(this.h, item.cPointer())
	return (bool)(_ret)
}

func (this *QListWidget) ItemWidget(item *QListWidgetItem) *QWidget {
	_ret := C.QListWidget_ItemWidget(this.h, item.cPointer())
	return newQWidget_U(unsafe.Pointer(_ret))
}

func (this *QListWidget) SetItemWidget(item *QListWidgetItem, widget *QWidget) {
	C.QListWidget_SetItemWidget(this.h, item.cPointer(), widget.cPointer())
}

func (this *QListWidget) RemoveItemWidget(item *QListWidgetItem) {
	C.QListWidget_RemoveItemWidget(this.h, item.cPointer())
}

func (this *QListWidget) IsItemSelected(item *QListWidgetItem) bool {
	_ret := C.QListWidget_IsItemSelected(this.h, item.cPointer())
	return (bool)(_ret)
}

func (this *QListWidget) SetItemSelected(item *QListWidgetItem, selectVal bool) {
	C.QListWidget_SetItemSelected(this.h, item.cPointer(), (C.bool)(selectVal))
}

func (this *QListWidget) SelectedItems() []*QListWidgetItem {
	var _ma *C.struct_miqt_array = C.QListWidget_SelectedItems(this.h)
	_ret := make([]*QListWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QListWidgetItem)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQListWidgetItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QListWidget) FindItems(text string, flags int) []*QListWidgetItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	var _ma *C.struct_miqt_array = C.QListWidget_FindItems(this.h, (*C.struct_miqt_string)(text_ms), (C.int)(flags))
	_ret := make([]*QListWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QListWidgetItem)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQListWidgetItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QListWidget) IsItemHidden(item *QListWidgetItem) bool {
	_ret := C.QListWidget_IsItemHidden(this.h, item.cPointer())
	return (bool)(_ret)
}

func (this *QListWidget) SetItemHidden(item *QListWidgetItem, hide bool) {
	C.QListWidget_SetItemHidden(this.h, item.cPointer(), (C.bool)(hide))
}

func (this *QListWidget) DropEvent(event *QDropEvent) {
	C.QListWidget_DropEvent(this.h, event.cPointer())
}

func (this *QListWidget) ScrollToItem(item *QListWidgetItem) {
	C.QListWidget_ScrollToItem(this.h, item.cPointer())
}

func (this *QListWidget) Clear() {
	C.QListWidget_Clear(this.h)
}

func (this *QListWidget) ItemPressed(item *QListWidgetItem) {
	C.QListWidget_ItemPressed(this.h, item.cPointer())
}
func (this *QListWidget) OnItemPressed(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_ItemPressed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QListWidget_ItemPressed
func miqt_exec_callback_QListWidget_ItemPressed(cb *C.void, item *C.QListWidgetItem) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	item_ret := item
	slotval1 := newQListWidgetItem_U(unsafe.Pointer(item_ret))

	gofunc(slotval1)
}

func (this *QListWidget) ItemClicked(item *QListWidgetItem) {
	C.QListWidget_ItemClicked(this.h, item.cPointer())
}
func (this *QListWidget) OnItemClicked(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_ItemClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QListWidget_ItemClicked
func miqt_exec_callback_QListWidget_ItemClicked(cb *C.void, item *C.QListWidgetItem) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	item_ret := item
	slotval1 := newQListWidgetItem_U(unsafe.Pointer(item_ret))

	gofunc(slotval1)
}

func (this *QListWidget) ItemDoubleClicked(item *QListWidgetItem) {
	C.QListWidget_ItemDoubleClicked(this.h, item.cPointer())
}
func (this *QListWidget) OnItemDoubleClicked(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_ItemDoubleClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QListWidget_ItemDoubleClicked
func miqt_exec_callback_QListWidget_ItemDoubleClicked(cb *C.void, item *C.QListWidgetItem) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	item_ret := item
	slotval1 := newQListWidgetItem_U(unsafe.Pointer(item_ret))

	gofunc(slotval1)
}

func (this *QListWidget) ItemActivated(item *QListWidgetItem) {
	C.QListWidget_ItemActivated(this.h, item.cPointer())
}
func (this *QListWidget) OnItemActivated(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_ItemActivated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QListWidget_ItemActivated
func miqt_exec_callback_QListWidget_ItemActivated(cb *C.void, item *C.QListWidgetItem) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	item_ret := item
	slotval1 := newQListWidgetItem_U(unsafe.Pointer(item_ret))

	gofunc(slotval1)
}

func (this *QListWidget) ItemEntered(item *QListWidgetItem) {
	C.QListWidget_ItemEntered(this.h, item.cPointer())
}
func (this *QListWidget) OnItemEntered(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_ItemEntered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QListWidget_ItemEntered
func miqt_exec_callback_QListWidget_ItemEntered(cb *C.void, item *C.QListWidgetItem) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	item_ret := item
	slotval1 := newQListWidgetItem_U(unsafe.Pointer(item_ret))

	gofunc(slotval1)
}

func (this *QListWidget) ItemChanged(item *QListWidgetItem) {
	C.QListWidget_ItemChanged(this.h, item.cPointer())
}
func (this *QListWidget) OnItemChanged(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_ItemChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QListWidget_ItemChanged
func miqt_exec_callback_QListWidget_ItemChanged(cb *C.void, item *C.QListWidgetItem) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	item_ret := item
	slotval1 := newQListWidgetItem_U(unsafe.Pointer(item_ret))

	gofunc(slotval1)
}

func (this *QListWidget) CurrentItemChanged(current *QListWidgetItem, previous *QListWidgetItem) {
	C.QListWidget_CurrentItemChanged(this.h, current.cPointer(), previous.cPointer())
}
func (this *QListWidget) OnCurrentItemChanged(slot func(current *QListWidgetItem, previous *QListWidgetItem)) {
	C.QListWidget_connect_CurrentItemChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QListWidget_CurrentItemChanged
func miqt_exec_callback_QListWidget_CurrentItemChanged(cb *C.void, current *C.QListWidgetItem, previous *C.QListWidgetItem) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(current *QListWidgetItem, previous *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	current_ret := current
	slotval1 := newQListWidgetItem_U(unsafe.Pointer(current_ret))
	previous_ret := previous
	slotval2 := newQListWidgetItem_U(unsafe.Pointer(previous_ret))

	gofunc(slotval1, slotval2)
}

func (this *QListWidget) CurrentTextChanged(currentText string) {
	currentText_ms := miqt_strdupg(currentText)
	defer C.free(currentText_ms)
	C.QListWidget_CurrentTextChanged(this.h, (*C.struct_miqt_string)(currentText_ms))
}
func (this *QListWidget) OnCurrentTextChanged(slot func(currentText string)) {
	C.QListWidget_connect_CurrentTextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QListWidget_CurrentTextChanged
func miqt_exec_callback_QListWidget_CurrentTextChanged(cb *C.void, currentText *C.struct_miqt_string) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(currentText string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var currentText_ms *C.struct_miqt_string = currentText
	currentText_ret := C.GoStringN(&currentText_ms.data, C.int(int64(currentText_ms.len)))
	C.free(unsafe.Pointer(currentText_ms))
	slotval1 := currentText_ret

	gofunc(slotval1)
}

func (this *QListWidget) CurrentRowChanged(currentRow int) {
	C.QListWidget_CurrentRowChanged(this.h, (C.int)(currentRow))
}
func (this *QListWidget) OnCurrentRowChanged(slot func(currentRow int)) {
	C.QListWidget_connect_CurrentRowChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QListWidget_CurrentRowChanged
func miqt_exec_callback_QListWidget_CurrentRowChanged(cb *C.void, currentRow C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(currentRow int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	currentRow_ret := currentRow
	slotval1 := (int)(currentRow_ret)

	gofunc(slotval1)
}

func (this *QListWidget) ItemSelectionChanged() {
	C.QListWidget_ItemSelectionChanged(this.h)
}
func (this *QListWidget) OnItemSelectionChanged(slot func()) {
	C.QListWidget_connect_ItemSelectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QListWidget_ItemSelectionChanged
func miqt_exec_callback_QListWidget_ItemSelectionChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QListWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QListWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QListWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QListWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QListWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QListWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QListWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QListWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QListWidget) SortItems1(order SortOrder) {
	C.QListWidget_SortItems1(this.h, (C.uintptr_t)(order))
}

func (this *QListWidget) ScrollToItem2(item *QListWidgetItem, hint QAbstractItemView__ScrollHint) {
	C.QListWidget_ScrollToItem2(this.h, item.cPointer(), (C.uintptr_t)(hint))
}

// Delete this object from C++ memory.
func (this *QListWidget) Delete() {
	C.QListWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QListWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QListWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
