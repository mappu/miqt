package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qlistwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
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
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QListWidgetItem_new2(text_Cstring, C.ulong(len(text)))
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem3 constructs a new QListWidgetItem object.
func NewQListWidgetItem3(icon *QIcon, text string) *QListWidgetItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QListWidgetItem_new3(icon.cPointer(), text_Cstring, C.ulong(len(text)))
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
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QListWidgetItem_new7(text_Cstring, C.ulong(len(text)), listview.cPointer())
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem8 constructs a new QListWidgetItem object.
func NewQListWidgetItem8(text string, listview *QListWidget, typeVal int) *QListWidgetItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QListWidgetItem_new8(text_Cstring, C.ulong(len(text)), listview.cPointer(), (C.int)(typeVal))
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem9 constructs a new QListWidgetItem object.
func NewQListWidgetItem9(icon *QIcon, text string, listview *QListWidget) *QListWidgetItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QListWidgetItem_new9(icon.cPointer(), text_Cstring, C.ulong(len(text)), listview.cPointer())
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem10 constructs a new QListWidgetItem object.
func NewQListWidgetItem10(icon *QIcon, text string, listview *QListWidget, typeVal int) *QListWidgetItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QListWidgetItem_new10(icon.cPointer(), text_Cstring, C.ulong(len(text)), listview.cPointer(), (C.int)(typeVal))
	return newQListWidgetItem(ret)
}

func (this *QListWidgetItem) Clone() *QListWidgetItem {
	ret := C.QListWidgetItem_Clone(this.h)
	return newQListWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QListWidgetItem) ListWidget() *QListWidget {
	ret := C.QListWidgetItem_ListWidget(this.h)
	return newQListWidget_U(unsafe.Pointer(ret))
}

func (this *QListWidgetItem) SetSelected(selectVal bool) {
	C.QListWidgetItem_SetSelected(this.h, (C.bool)(selectVal))
}

func (this *QListWidgetItem) IsSelected() bool {
	ret := C.QListWidgetItem_IsSelected(this.h)
	return (bool)(ret)
}

func (this *QListWidgetItem) SetHidden(hide bool) {
	C.QListWidgetItem_SetHidden(this.h, (C.bool)(hide))
}

func (this *QListWidgetItem) IsHidden() bool {
	ret := C.QListWidgetItem_IsHidden(this.h)
	return (bool)(ret)
}

func (this *QListWidgetItem) Flags() int {
	ret := C.QListWidgetItem_Flags(this.h)
	return (int)(ret)
}

func (this *QListWidgetItem) SetFlags(flags int) {
	C.QListWidgetItem_SetFlags(this.h, (C.int)(flags))
}

func (this *QListWidgetItem) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QListWidgetItem_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QListWidgetItem) SetText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QListWidgetItem_SetText(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QListWidgetItem) Icon() *QIcon {
	ret := C.QListWidgetItem_Icon(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QListWidgetItem) SetIcon(icon *QIcon) {
	C.QListWidgetItem_SetIcon(this.h, icon.cPointer())
}

func (this *QListWidgetItem) StatusTip() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QListWidgetItem_StatusTip(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QListWidgetItem) SetStatusTip(statusTip string) {
	statusTip_Cstring := C.CString(statusTip)
	defer C.free(unsafe.Pointer(statusTip_Cstring))
	C.QListWidgetItem_SetStatusTip(this.h, statusTip_Cstring, C.ulong(len(statusTip)))
}

func (this *QListWidgetItem) ToolTip() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QListWidgetItem_ToolTip(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QListWidgetItem) SetToolTip(toolTip string) {
	toolTip_Cstring := C.CString(toolTip)
	defer C.free(unsafe.Pointer(toolTip_Cstring))
	C.QListWidgetItem_SetToolTip(this.h, toolTip_Cstring, C.ulong(len(toolTip)))
}

func (this *QListWidgetItem) WhatsThis() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QListWidgetItem_WhatsThis(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QListWidgetItem) SetWhatsThis(whatsThis string) {
	whatsThis_Cstring := C.CString(whatsThis)
	defer C.free(unsafe.Pointer(whatsThis_Cstring))
	C.QListWidgetItem_SetWhatsThis(this.h, whatsThis_Cstring, C.ulong(len(whatsThis)))
}

func (this *QListWidgetItem) Font() *QFont {
	ret := C.QListWidgetItem_Font(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QListWidgetItem) SetFont(font *QFont) {
	C.QListWidgetItem_SetFont(this.h, font.cPointer())
}

func (this *QListWidgetItem) TextAlignment() int {
	ret := C.QListWidgetItem_TextAlignment(this.h)
	return (int)(ret)
}

func (this *QListWidgetItem) SetTextAlignment(alignment int) {
	C.QListWidgetItem_SetTextAlignment(this.h, (C.int)(alignment))
}

func (this *QListWidgetItem) BackgroundColor() *QColor {
	ret := C.QListWidgetItem_BackgroundColor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QListWidgetItem) SetBackgroundColor(color *QColor) {
	C.QListWidgetItem_SetBackgroundColor(this.h, color.cPointer())
}

func (this *QListWidgetItem) Background() *QBrush {
	ret := C.QListWidgetItem_Background(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QListWidgetItem) SetBackground(brush *QBrush) {
	C.QListWidgetItem_SetBackground(this.h, brush.cPointer())
}

func (this *QListWidgetItem) TextColor() *QColor {
	ret := C.QListWidgetItem_TextColor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QListWidgetItem) SetTextColor(color *QColor) {
	C.QListWidgetItem_SetTextColor(this.h, color.cPointer())
}

func (this *QListWidgetItem) Foreground() *QBrush {
	ret := C.QListWidgetItem_Foreground(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QListWidgetItem) SetForeground(brush *QBrush) {
	C.QListWidgetItem_SetForeground(this.h, brush.cPointer())
}

func (this *QListWidgetItem) CheckState() uintptr {
	ret := C.QListWidgetItem_CheckState(this.h)
	return (uintptr)(ret)
}

func (this *QListWidgetItem) SetCheckState(state uintptr) {
	C.QListWidgetItem_SetCheckState(this.h, (C.uintptr_t)(state))
}

func (this *QListWidgetItem) SizeHint() *QSize {
	ret := C.QListWidgetItem_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QListWidgetItem) SetSizeHint(size *QSize) {
	C.QListWidgetItem_SetSizeHint(this.h, size.cPointer())
}

func (this *QListWidgetItem) Data(role int) *QVariant {
	ret := C.QListWidgetItem_Data(this.h, (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QListWidgetItem) SetData(role int, value *QVariant) {
	C.QListWidgetItem_SetData(this.h, (C.int)(role), value.cPointer())
}

func (this *QListWidgetItem) OperatorLesser(other *QListWidgetItem) bool {
	ret := C.QListWidgetItem_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
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
	ret := C.QListWidgetItem_Type(this.h)
	return (int)(ret)
}

func (this *QListWidgetItem) Delete() {
	C.QListWidgetItem_Delete(this.h)
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
	ret := C.QListWidget_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QListWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QListWidget_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QListWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QListWidget_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QListWidget) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QListWidget_SetSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QListWidget) Item(row int) *QListWidgetItem {
	ret := C.QListWidget_Item(this.h, (C.int)(row))
	return newQListWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QListWidget) Row(item *QListWidgetItem) int {
	ret := C.QListWidget_Row(this.h, item.cPointer())
	return (int)(ret)
}

func (this *QListWidget) InsertItem(row int, item *QListWidgetItem) {
	C.QListWidget_InsertItem(this.h, (C.int)(row), item.cPointer())
}

func (this *QListWidget) InsertItem2(row int, label string) {
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	C.QListWidget_InsertItem2(this.h, (C.int)(row), label_Cstring, C.ulong(len(label)))
}

func (this *QListWidget) InsertItems(row int, labels []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	labels_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(labels))))
	labels_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(labels))))
	defer C.free(unsafe.Pointer(labels_CArray))
	defer C.free(unsafe.Pointer(labels_Lengths))
	for i := range labels {
		single_cstring := C.CString(labels[i])
		defer C.free(unsafe.Pointer(single_cstring))
		labels_CArray[i] = single_cstring
		labels_Lengths[i] = (C.size_t)(len(labels[i]))
	}
	C.QListWidget_InsertItems(this.h, (C.int)(row), &labels_CArray[0], &labels_Lengths[0], C.ulong(len(labels)))
}

func (this *QListWidget) AddItem(label string) {
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	C.QListWidget_AddItem(this.h, label_Cstring, C.ulong(len(label)))
}

func (this *QListWidget) AddItemWithItem(item *QListWidgetItem) {
	C.QListWidget_AddItemWithItem(this.h, item.cPointer())
}

func (this *QListWidget) AddItems(labels []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	labels_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(labels))))
	labels_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(labels))))
	defer C.free(unsafe.Pointer(labels_CArray))
	defer C.free(unsafe.Pointer(labels_Lengths))
	for i := range labels {
		single_cstring := C.CString(labels[i])
		defer C.free(unsafe.Pointer(single_cstring))
		labels_CArray[i] = single_cstring
		labels_Lengths[i] = (C.size_t)(len(labels[i]))
	}
	C.QListWidget_AddItems(this.h, &labels_CArray[0], &labels_Lengths[0], C.ulong(len(labels)))
}

func (this *QListWidget) TakeItem(row int) *QListWidgetItem {
	ret := C.QListWidget_TakeItem(this.h, (C.int)(row))
	return newQListWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QListWidget) Count() int {
	ret := C.QListWidget_Count(this.h)
	return (int)(ret)
}

func (this *QListWidget) CurrentItem() *QListWidgetItem {
	ret := C.QListWidget_CurrentItem(this.h)
	return newQListWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QListWidget) SetCurrentItem(item *QListWidgetItem) {
	C.QListWidget_SetCurrentItem(this.h, item.cPointer())
}

func (this *QListWidget) SetCurrentItem2(item *QListWidgetItem, command int) {
	C.QListWidget_SetCurrentItem2(this.h, item.cPointer(), (C.int)(command))
}

func (this *QListWidget) CurrentRow() int {
	ret := C.QListWidget_CurrentRow(this.h)
	return (int)(ret)
}

func (this *QListWidget) SetCurrentRow(row int) {
	C.QListWidget_SetCurrentRow(this.h, (C.int)(row))
}

func (this *QListWidget) SetCurrentRow2(row int, command int) {
	C.QListWidget_SetCurrentRow2(this.h, (C.int)(row), (C.int)(command))
}

func (this *QListWidget) ItemAt(p *QPoint) *QListWidgetItem {
	ret := C.QListWidget_ItemAt(this.h, p.cPointer())
	return newQListWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QListWidget) ItemAt2(x int, y int) *QListWidgetItem {
	ret := C.QListWidget_ItemAt2(this.h, (C.int)(x), (C.int)(y))
	return newQListWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QListWidget) VisualItemRect(item *QListWidgetItem) *QRect {
	ret := C.QListWidget_VisualItemRect(this.h, item.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QListWidget) SortItems() {
	C.QListWidget_SortItems(this.h)
}

func (this *QListWidget) SetSortingEnabled(enable bool) {
	C.QListWidget_SetSortingEnabled(this.h, (C.bool)(enable))
}

func (this *QListWidget) IsSortingEnabled() bool {
	ret := C.QListWidget_IsSortingEnabled(this.h)
	return (bool)(ret)
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
	ret := C.QListWidget_IsPersistentEditorOpen(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QListWidget) ItemWidget(item *QListWidgetItem) *QWidget {
	ret := C.QListWidget_ItemWidget(this.h, item.cPointer())
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QListWidget) SetItemWidget(item *QListWidgetItem, widget *QWidget) {
	C.QListWidget_SetItemWidget(this.h, item.cPointer(), widget.cPointer())
}

func (this *QListWidget) RemoveItemWidget(item *QListWidgetItem) {
	C.QListWidget_RemoveItemWidget(this.h, item.cPointer())
}

func (this *QListWidget) IsItemSelected(item *QListWidgetItem) bool {
	ret := C.QListWidget_IsItemSelected(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QListWidget) SetItemSelected(item *QListWidgetItem, selectVal bool) {
	C.QListWidget_SetItemSelected(this.h, item.cPointer(), (C.bool)(selectVal))
}

func (this *QListWidget) SelectedItems() []*QListWidgetItem {
	var _out **C.QListWidgetItem = nil
	var _out_len C.size_t = 0
	C.QListWidget_SelectedItems(this.h, &_out, &_out_len)
	ret := make([]*QListWidgetItem, int(_out_len))
	_outCast := (*[0xffff]*C.QListWidgetItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQListWidgetItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QListWidget) FindItems(text string, flags int) []*QListWidgetItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out **C.QListWidgetItem = nil
	var _out_len C.size_t = 0
	C.QListWidget_FindItems(this.h, text_Cstring, C.ulong(len(text)), (C.int)(flags), &_out, &_out_len)
	ret := make([]*QListWidgetItem, int(_out_len))
	_outCast := (*[0xffff]*C.QListWidgetItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQListWidgetItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QListWidget) IsItemHidden(item *QListWidgetItem) bool {
	ret := C.QListWidget_IsItemHidden(this.h, item.cPointer())
	return (bool)(ret)
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

func (this *QListWidget) OnItemPressed(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QListWidget_connect_ItemPressed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QListWidget) ItemClicked(item *QListWidgetItem) {
	C.QListWidget_ItemClicked(this.h, item.cPointer())
}

func (this *QListWidget) OnItemClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QListWidget_connect_ItemClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QListWidget) ItemDoubleClicked(item *QListWidgetItem) {
	C.QListWidget_ItemDoubleClicked(this.h, item.cPointer())
}

func (this *QListWidget) OnItemDoubleClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QListWidget_connect_ItemDoubleClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QListWidget) ItemActivated(item *QListWidgetItem) {
	C.QListWidget_ItemActivated(this.h, item.cPointer())
}

func (this *QListWidget) OnItemActivated(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QListWidget_connect_ItemActivated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QListWidget) ItemEntered(item *QListWidgetItem) {
	C.QListWidget_ItemEntered(this.h, item.cPointer())
}

func (this *QListWidget) OnItemEntered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QListWidget_connect_ItemEntered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QListWidget) ItemChanged(item *QListWidgetItem) {
	C.QListWidget_ItemChanged(this.h, item.cPointer())
}

func (this *QListWidget) OnItemChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QListWidget_connect_ItemChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QListWidget) CurrentItemChanged(current *QListWidgetItem, previous *QListWidgetItem) {
	C.QListWidget_CurrentItemChanged(this.h, current.cPointer(), previous.cPointer())
}

func (this *QListWidget) OnCurrentItemChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QListWidget_connect_CurrentItemChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QListWidget) CurrentTextChanged(currentText string) {
	currentText_Cstring := C.CString(currentText)
	defer C.free(unsafe.Pointer(currentText_Cstring))
	C.QListWidget_CurrentTextChanged(this.h, currentText_Cstring, C.ulong(len(currentText)))
}

func (this *QListWidget) OnCurrentTextChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QListWidget_connect_CurrentTextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QListWidget) CurrentRowChanged(currentRow int) {
	C.QListWidget_CurrentRowChanged(this.h, (C.int)(currentRow))
}

func (this *QListWidget) OnCurrentRowChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QListWidget_connect_CurrentRowChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QListWidget) ItemSelectionChanged() {
	C.QListWidget_ItemSelectionChanged(this.h)
}

func (this *QListWidget) OnItemSelectionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QListWidget_connect_ItemSelectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QListWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QListWidget_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QListWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QListWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QListWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QListWidget_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QListWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QListWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QListWidget) SortItems1(order uintptr) {
	C.QListWidget_SortItems1(this.h, (C.uintptr_t)(order))
}

func (this *QListWidget) ScrollToItem2(item *QListWidgetItem, hint uintptr) {
	C.QListWidget_ScrollToItem2(this.h, item.cPointer(), (C.uintptr_t)(hint))
}

func (this *QListWidget) Delete() {
	C.QListWidget_Delete(this.h)
}
