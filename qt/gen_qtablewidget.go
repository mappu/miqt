package qt

/*

#include "gen_qtablewidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTableWidgetSelectionRange struct {
	h *C.QTableWidgetSelectionRange
}

func (this *QTableWidgetSelectionRange) cPointer() *C.QTableWidgetSelectionRange {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTableWidgetSelectionRange(h *C.QTableWidgetSelectionRange) *QTableWidgetSelectionRange {
	if h == nil {
		return nil
	}
	return &QTableWidgetSelectionRange{h: h}
}

func newQTableWidgetSelectionRange_U(h unsafe.Pointer) *QTableWidgetSelectionRange {
	return newQTableWidgetSelectionRange((*C.QTableWidgetSelectionRange)(h))
}

// NewQTableWidgetSelectionRange constructs a new QTableWidgetSelectionRange object.
func NewQTableWidgetSelectionRange() *QTableWidgetSelectionRange {
	ret := C.QTableWidgetSelectionRange_new()
	return newQTableWidgetSelectionRange(ret)
}

// NewQTableWidgetSelectionRange2 constructs a new QTableWidgetSelectionRange object.
func NewQTableWidgetSelectionRange2(top int, left int, bottom int, right int) *QTableWidgetSelectionRange {
	ret := C.QTableWidgetSelectionRange_new2((C.int)(top), (C.int)(left), (C.int)(bottom), (C.int)(right))
	return newQTableWidgetSelectionRange(ret)
}

// NewQTableWidgetSelectionRange3 constructs a new QTableWidgetSelectionRange object.
func NewQTableWidgetSelectionRange3(other *QTableWidgetSelectionRange) *QTableWidgetSelectionRange {
	ret := C.QTableWidgetSelectionRange_new3(other.cPointer())
	return newQTableWidgetSelectionRange(ret)
}

func (this *QTableWidgetSelectionRange) OperatorAssign(other *QTableWidgetSelectionRange) {
	C.QTableWidgetSelectionRange_OperatorAssign(this.h, other.cPointer())
}

func (this *QTableWidgetSelectionRange) TopRow() int {
	ret := C.QTableWidgetSelectionRange_TopRow(this.h)
	return (int)(ret)
}

func (this *QTableWidgetSelectionRange) BottomRow() int {
	ret := C.QTableWidgetSelectionRange_BottomRow(this.h)
	return (int)(ret)
}

func (this *QTableWidgetSelectionRange) LeftColumn() int {
	ret := C.QTableWidgetSelectionRange_LeftColumn(this.h)
	return (int)(ret)
}

func (this *QTableWidgetSelectionRange) RightColumn() int {
	ret := C.QTableWidgetSelectionRange_RightColumn(this.h)
	return (int)(ret)
}

func (this *QTableWidgetSelectionRange) RowCount() int {
	ret := C.QTableWidgetSelectionRange_RowCount(this.h)
	return (int)(ret)
}

func (this *QTableWidgetSelectionRange) ColumnCount() int {
	ret := C.QTableWidgetSelectionRange_ColumnCount(this.h)
	return (int)(ret)
}

func (this *QTableWidgetSelectionRange) Delete() {
	C.QTableWidgetSelectionRange_Delete(this.h)
}

type QTableWidgetItem struct {
	h *C.QTableWidgetItem
}

func (this *QTableWidgetItem) cPointer() *C.QTableWidgetItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTableWidgetItem(h *C.QTableWidgetItem) *QTableWidgetItem {
	if h == nil {
		return nil
	}
	return &QTableWidgetItem{h: h}
}

func newQTableWidgetItem_U(h unsafe.Pointer) *QTableWidgetItem {
	return newQTableWidgetItem((*C.QTableWidgetItem)(h))
}

// NewQTableWidgetItem constructs a new QTableWidgetItem object.
func NewQTableWidgetItem() *QTableWidgetItem {
	ret := C.QTableWidgetItem_new()
	return newQTableWidgetItem(ret)
}

// NewQTableWidgetItem2 constructs a new QTableWidgetItem object.
func NewQTableWidgetItem2(text string) *QTableWidgetItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QTableWidgetItem_new2(text_Cstring, C.ulong(len(text)))
	return newQTableWidgetItem(ret)
}

// NewQTableWidgetItem3 constructs a new QTableWidgetItem object.
func NewQTableWidgetItem3(icon *QIcon, text string) *QTableWidgetItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QTableWidgetItem_new3(icon.cPointer(), text_Cstring, C.ulong(len(text)))
	return newQTableWidgetItem(ret)
}

// NewQTableWidgetItem4 constructs a new QTableWidgetItem object.
func NewQTableWidgetItem4(other *QTableWidgetItem) *QTableWidgetItem {
	ret := C.QTableWidgetItem_new4(other.cPointer())
	return newQTableWidgetItem(ret)
}

// NewQTableWidgetItem5 constructs a new QTableWidgetItem object.
func NewQTableWidgetItem5(typeVal int) *QTableWidgetItem {
	ret := C.QTableWidgetItem_new5((C.int)(typeVal))
	return newQTableWidgetItem(ret)
}

// NewQTableWidgetItem6 constructs a new QTableWidgetItem object.
func NewQTableWidgetItem6(text string, typeVal int) *QTableWidgetItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QTableWidgetItem_new6(text_Cstring, C.ulong(len(text)), (C.int)(typeVal))
	return newQTableWidgetItem(ret)
}

// NewQTableWidgetItem7 constructs a new QTableWidgetItem object.
func NewQTableWidgetItem7(icon *QIcon, text string, typeVal int) *QTableWidgetItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QTableWidgetItem_new7(icon.cPointer(), text_Cstring, C.ulong(len(text)), (C.int)(typeVal))
	return newQTableWidgetItem(ret)
}

func (this *QTableWidgetItem) Clone() *QTableWidgetItem {
	ret := C.QTableWidgetItem_Clone(this.h)
	return newQTableWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTableWidgetItem) TableWidget() *QTableWidget {
	ret := C.QTableWidgetItem_TableWidget(this.h)
	return newQTableWidget_U(unsafe.Pointer(ret))
}

func (this *QTableWidgetItem) Row() int {
	ret := C.QTableWidgetItem_Row(this.h)
	return (int)(ret)
}

func (this *QTableWidgetItem) Column() int {
	ret := C.QTableWidgetItem_Column(this.h)
	return (int)(ret)
}

func (this *QTableWidgetItem) SetSelected(selectVal bool) {
	C.QTableWidgetItem_SetSelected(this.h, (C.bool)(selectVal))
}

func (this *QTableWidgetItem) IsSelected() bool {
	ret := C.QTableWidgetItem_IsSelected(this.h)
	return (bool)(ret)
}

func (this *QTableWidgetItem) Flags() int {
	ret := C.QTableWidgetItem_Flags(this.h)
	return (int)(ret)
}

func (this *QTableWidgetItem) SetFlags(flags int) {
	C.QTableWidgetItem_SetFlags(this.h, (C.int)(flags))
}

func (this *QTableWidgetItem) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTableWidgetItem_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTableWidgetItem) SetText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QTableWidgetItem_SetText(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QTableWidgetItem) Icon() *QIcon {
	ret := C.QTableWidgetItem_Icon(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTableWidgetItem) SetIcon(icon *QIcon) {
	C.QTableWidgetItem_SetIcon(this.h, icon.cPointer())
}

func (this *QTableWidgetItem) StatusTip() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTableWidgetItem_StatusTip(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTableWidgetItem) SetStatusTip(statusTip string) {
	statusTip_Cstring := C.CString(statusTip)
	defer C.free(unsafe.Pointer(statusTip_Cstring))
	C.QTableWidgetItem_SetStatusTip(this.h, statusTip_Cstring, C.ulong(len(statusTip)))
}

func (this *QTableWidgetItem) ToolTip() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTableWidgetItem_ToolTip(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTableWidgetItem) SetToolTip(toolTip string) {
	toolTip_Cstring := C.CString(toolTip)
	defer C.free(unsafe.Pointer(toolTip_Cstring))
	C.QTableWidgetItem_SetToolTip(this.h, toolTip_Cstring, C.ulong(len(toolTip)))
}

func (this *QTableWidgetItem) WhatsThis() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTableWidgetItem_WhatsThis(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTableWidgetItem) SetWhatsThis(whatsThis string) {
	whatsThis_Cstring := C.CString(whatsThis)
	defer C.free(unsafe.Pointer(whatsThis_Cstring))
	C.QTableWidgetItem_SetWhatsThis(this.h, whatsThis_Cstring, C.ulong(len(whatsThis)))
}

func (this *QTableWidgetItem) Font() *QFont {
	ret := C.QTableWidgetItem_Font(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTableWidgetItem) SetFont(font *QFont) {
	C.QTableWidgetItem_SetFont(this.h, font.cPointer())
}

func (this *QTableWidgetItem) TextAlignment() int {
	ret := C.QTableWidgetItem_TextAlignment(this.h)
	return (int)(ret)
}

func (this *QTableWidgetItem) SetTextAlignment(alignment int) {
	C.QTableWidgetItem_SetTextAlignment(this.h, (C.int)(alignment))
}

func (this *QTableWidgetItem) BackgroundColor() *QColor {
	ret := C.QTableWidgetItem_BackgroundColor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTableWidgetItem) SetBackgroundColor(color *QColor) {
	C.QTableWidgetItem_SetBackgroundColor(this.h, color.cPointer())
}

func (this *QTableWidgetItem) Background() *QBrush {
	ret := C.QTableWidgetItem_Background(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTableWidgetItem) SetBackground(brush *QBrush) {
	C.QTableWidgetItem_SetBackground(this.h, brush.cPointer())
}

func (this *QTableWidgetItem) TextColor() *QColor {
	ret := C.QTableWidgetItem_TextColor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTableWidgetItem) SetTextColor(color *QColor) {
	C.QTableWidgetItem_SetTextColor(this.h, color.cPointer())
}

func (this *QTableWidgetItem) Foreground() *QBrush {
	ret := C.QTableWidgetItem_Foreground(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTableWidgetItem) SetForeground(brush *QBrush) {
	C.QTableWidgetItem_SetForeground(this.h, brush.cPointer())
}

func (this *QTableWidgetItem) CheckState() uintptr {
	ret := C.QTableWidgetItem_CheckState(this.h)
	return (uintptr)(ret)
}

func (this *QTableWidgetItem) SetCheckState(state uintptr) {
	C.QTableWidgetItem_SetCheckState(this.h, (C.uintptr_t)(state))
}

func (this *QTableWidgetItem) SizeHint() *QSize {
	ret := C.QTableWidgetItem_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTableWidgetItem) SetSizeHint(size *QSize) {
	C.QTableWidgetItem_SetSizeHint(this.h, size.cPointer())
}

func (this *QTableWidgetItem) Data(role int) *QVariant {
	ret := C.QTableWidgetItem_Data(this.h, (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTableWidgetItem) SetData(role int, value *QVariant) {
	C.QTableWidgetItem_SetData(this.h, (C.int)(role), value.cPointer())
}

func (this *QTableWidgetItem) OperatorLesser(other *QTableWidgetItem) bool {
	ret := C.QTableWidgetItem_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QTableWidgetItem) Read(in *QDataStream) {
	C.QTableWidgetItem_Read(this.h, in.cPointer())
}

func (this *QTableWidgetItem) Write(out *QDataStream) {
	C.QTableWidgetItem_Write(this.h, out.cPointer())
}

func (this *QTableWidgetItem) OperatorAssign(other *QTableWidgetItem) {
	C.QTableWidgetItem_OperatorAssign(this.h, other.cPointer())
}

func (this *QTableWidgetItem) Type() int {
	ret := C.QTableWidgetItem_Type(this.h)
	return (int)(ret)
}

func (this *QTableWidgetItem) Delete() {
	C.QTableWidgetItem_Delete(this.h)
}

type QTableWidget struct {
	h *C.QTableWidget
	*QTableView
}

func (this *QTableWidget) cPointer() *C.QTableWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTableWidget(h *C.QTableWidget) *QTableWidget {
	if h == nil {
		return nil
	}
	return &QTableWidget{h: h, QTableView: newQTableView_U(unsafe.Pointer(h))}
}

func newQTableWidget_U(h unsafe.Pointer) *QTableWidget {
	return newQTableWidget((*C.QTableWidget)(h))
}

// NewQTableWidget constructs a new QTableWidget object.
func NewQTableWidget() *QTableWidget {
	ret := C.QTableWidget_new()
	return newQTableWidget(ret)
}

// NewQTableWidget2 constructs a new QTableWidget object.
func NewQTableWidget2(rows int, columns int) *QTableWidget {
	ret := C.QTableWidget_new2((C.int)(rows), (C.int)(columns))
	return newQTableWidget(ret)
}

// NewQTableWidget3 constructs a new QTableWidget object.
func NewQTableWidget3(parent *QWidget) *QTableWidget {
	ret := C.QTableWidget_new3(parent.cPointer())
	return newQTableWidget(ret)
}

// NewQTableWidget4 constructs a new QTableWidget object.
func NewQTableWidget4(rows int, columns int, parent *QWidget) *QTableWidget {
	ret := C.QTableWidget_new4((C.int)(rows), (C.int)(columns), parent.cPointer())
	return newQTableWidget(ret)
}

func (this *QTableWidget) MetaObject() *QMetaObject {
	ret := C.QTableWidget_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTableWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTableWidget_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTableWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTableWidget_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTableWidget) SetRowCount(rows int) {
	C.QTableWidget_SetRowCount(this.h, (C.int)(rows))
}

func (this *QTableWidget) RowCount() int {
	ret := C.QTableWidget_RowCount(this.h)
	return (int)(ret)
}

func (this *QTableWidget) SetColumnCount(columns int) {
	C.QTableWidget_SetColumnCount(this.h, (C.int)(columns))
}

func (this *QTableWidget) ColumnCount() int {
	ret := C.QTableWidget_ColumnCount(this.h)
	return (int)(ret)
}

func (this *QTableWidget) Row(item *QTableWidgetItem) int {
	ret := C.QTableWidget_Row(this.h, item.cPointer())
	return (int)(ret)
}

func (this *QTableWidget) Column(item *QTableWidgetItem) int {
	ret := C.QTableWidget_Column(this.h, item.cPointer())
	return (int)(ret)
}

func (this *QTableWidget) Item(row int, column int) *QTableWidgetItem {
	ret := C.QTableWidget_Item(this.h, (C.int)(row), (C.int)(column))
	return newQTableWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTableWidget) SetItem(row int, column int, item *QTableWidgetItem) {
	C.QTableWidget_SetItem(this.h, (C.int)(row), (C.int)(column), item.cPointer())
}

func (this *QTableWidget) TakeItem(row int, column int) *QTableWidgetItem {
	ret := C.QTableWidget_TakeItem(this.h, (C.int)(row), (C.int)(column))
	return newQTableWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTableWidget) VerticalHeaderItem(row int) *QTableWidgetItem {
	ret := C.QTableWidget_VerticalHeaderItem(this.h, (C.int)(row))
	return newQTableWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTableWidget) SetVerticalHeaderItem(row int, item *QTableWidgetItem) {
	C.QTableWidget_SetVerticalHeaderItem(this.h, (C.int)(row), item.cPointer())
}

func (this *QTableWidget) TakeVerticalHeaderItem(row int) *QTableWidgetItem {
	ret := C.QTableWidget_TakeVerticalHeaderItem(this.h, (C.int)(row))
	return newQTableWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTableWidget) HorizontalHeaderItem(column int) *QTableWidgetItem {
	ret := C.QTableWidget_HorizontalHeaderItem(this.h, (C.int)(column))
	return newQTableWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTableWidget) SetHorizontalHeaderItem(column int, item *QTableWidgetItem) {
	C.QTableWidget_SetHorizontalHeaderItem(this.h, (C.int)(column), item.cPointer())
}

func (this *QTableWidget) TakeHorizontalHeaderItem(column int) *QTableWidgetItem {
	ret := C.QTableWidget_TakeHorizontalHeaderItem(this.h, (C.int)(column))
	return newQTableWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTableWidget) SetVerticalHeaderLabels(labels []string) {
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
	C.QTableWidget_SetVerticalHeaderLabels(this.h, &labels_CArray[0], &labels_Lengths[0], C.ulong(len(labels)))
}

func (this *QTableWidget) SetHorizontalHeaderLabels(labels []string) {
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
	C.QTableWidget_SetHorizontalHeaderLabels(this.h, &labels_CArray[0], &labels_Lengths[0], C.ulong(len(labels)))
}

func (this *QTableWidget) CurrentRow() int {
	ret := C.QTableWidget_CurrentRow(this.h)
	return (int)(ret)
}

func (this *QTableWidget) CurrentColumn() int {
	ret := C.QTableWidget_CurrentColumn(this.h)
	return (int)(ret)
}

func (this *QTableWidget) CurrentItem() *QTableWidgetItem {
	ret := C.QTableWidget_CurrentItem(this.h)
	return newQTableWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTableWidget) SetCurrentItem(item *QTableWidgetItem) {
	C.QTableWidget_SetCurrentItem(this.h, item.cPointer())
}

func (this *QTableWidget) SetCurrentItem2(item *QTableWidgetItem, command int) {
	C.QTableWidget_SetCurrentItem2(this.h, item.cPointer(), (C.int)(command))
}

func (this *QTableWidget) SetCurrentCell(row int, column int) {
	C.QTableWidget_SetCurrentCell(this.h, (C.int)(row), (C.int)(column))
}

func (this *QTableWidget) SetCurrentCell2(row int, column int, command int) {
	C.QTableWidget_SetCurrentCell2(this.h, (C.int)(row), (C.int)(column), (C.int)(command))
}

func (this *QTableWidget) SortItems(column int) {
	C.QTableWidget_SortItems(this.h, (C.int)(column))
}

func (this *QTableWidget) SetSortingEnabled(enable bool) {
	C.QTableWidget_SetSortingEnabled(this.h, (C.bool)(enable))
}

func (this *QTableWidget) IsSortingEnabled() bool {
	ret := C.QTableWidget_IsSortingEnabled(this.h)
	return (bool)(ret)
}

func (this *QTableWidget) EditItem(item *QTableWidgetItem) {
	C.QTableWidget_EditItem(this.h, item.cPointer())
}

func (this *QTableWidget) OpenPersistentEditor(item *QTableWidgetItem) {
	C.QTableWidget_OpenPersistentEditor(this.h, item.cPointer())
}

func (this *QTableWidget) ClosePersistentEditor(item *QTableWidgetItem) {
	C.QTableWidget_ClosePersistentEditor(this.h, item.cPointer())
}

func (this *QTableWidget) IsPersistentEditorOpen(item *QTableWidgetItem) bool {
	ret := C.QTableWidget_IsPersistentEditorOpen(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QTableWidget) CellWidget(row int, column int) *QWidget {
	ret := C.QTableWidget_CellWidget(this.h, (C.int)(row), (C.int)(column))
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QTableWidget) SetCellWidget(row int, column int, widget *QWidget) {
	C.QTableWidget_SetCellWidget(this.h, (C.int)(row), (C.int)(column), widget.cPointer())
}

func (this *QTableWidget) RemoveCellWidget(row int, column int) {
	C.QTableWidget_RemoveCellWidget(this.h, (C.int)(row), (C.int)(column))
}

func (this *QTableWidget) IsItemSelected(item *QTableWidgetItem) bool {
	ret := C.QTableWidget_IsItemSelected(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QTableWidget) SetItemSelected(item *QTableWidgetItem, selectVal bool) {
	C.QTableWidget_SetItemSelected(this.h, item.cPointer(), (C.bool)(selectVal))
}

func (this *QTableWidget) SetRangeSelected(rangeVal *QTableWidgetSelectionRange, selectVal bool) {
	C.QTableWidget_SetRangeSelected(this.h, rangeVal.cPointer(), (C.bool)(selectVal))
}

func (this *QTableWidget) SelectedRanges() []QTableWidgetSelectionRange {
	var _out **C.QTableWidgetSelectionRange = nil
	var _out_len C.size_t = 0
	C.QTableWidget_SelectedRanges(this.h, &_out, &_out_len)
	ret := make([]QTableWidgetSelectionRange, int(_out_len))
	_outCast := (*[0xffff]*C.QTableWidgetSelectionRange)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQTableWidgetSelectionRange(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTableWidget) SelectedItems() []*QTableWidgetItem {
	var _out **C.QTableWidgetItem = nil
	var _out_len C.size_t = 0
	C.QTableWidget_SelectedItems(this.h, &_out, &_out_len)
	ret := make([]*QTableWidgetItem, int(_out_len))
	_outCast := (*[0xffff]*C.QTableWidgetItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQTableWidgetItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTableWidget) FindItems(text string, flags int) []*QTableWidgetItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out **C.QTableWidgetItem = nil
	var _out_len C.size_t = 0
	C.QTableWidget_FindItems(this.h, text_Cstring, C.ulong(len(text)), (C.int)(flags), &_out, &_out_len)
	ret := make([]*QTableWidgetItem, int(_out_len))
	_outCast := (*[0xffff]*C.QTableWidgetItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQTableWidgetItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTableWidget) VisualRow(logicalRow int) int {
	ret := C.QTableWidget_VisualRow(this.h, (C.int)(logicalRow))
	return (int)(ret)
}

func (this *QTableWidget) VisualColumn(logicalColumn int) int {
	ret := C.QTableWidget_VisualColumn(this.h, (C.int)(logicalColumn))
	return (int)(ret)
}

func (this *QTableWidget) ItemAt(p *QPoint) *QTableWidgetItem {
	ret := C.QTableWidget_ItemAt(this.h, p.cPointer())
	return newQTableWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTableWidget) ItemAt2(x int, y int) *QTableWidgetItem {
	ret := C.QTableWidget_ItemAt2(this.h, (C.int)(x), (C.int)(y))
	return newQTableWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTableWidget) VisualItemRect(item *QTableWidgetItem) *QRect {
	ret := C.QTableWidget_VisualItemRect(this.h, item.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTableWidget) ItemPrototype() *QTableWidgetItem {
	ret := C.QTableWidget_ItemPrototype(this.h)
	return newQTableWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTableWidget) SetItemPrototype(item *QTableWidgetItem) {
	C.QTableWidget_SetItemPrototype(this.h, item.cPointer())
}

func (this *QTableWidget) ScrollToItem(item *QTableWidgetItem) {
	C.QTableWidget_ScrollToItem(this.h, item.cPointer())
}

func (this *QTableWidget) InsertRow(row int) {
	C.QTableWidget_InsertRow(this.h, (C.int)(row))
}

func (this *QTableWidget) InsertColumn(column int) {
	C.QTableWidget_InsertColumn(this.h, (C.int)(column))
}

func (this *QTableWidget) RemoveRow(row int) {
	C.QTableWidget_RemoveRow(this.h, (C.int)(row))
}

func (this *QTableWidget) RemoveColumn(column int) {
	C.QTableWidget_RemoveColumn(this.h, (C.int)(column))
}

func (this *QTableWidget) Clear() {
	C.QTableWidget_Clear(this.h)
}

func (this *QTableWidget) ClearContents() {
	C.QTableWidget_ClearContents(this.h)
}

func (this *QTableWidget) ItemPressed(item *QTableWidgetItem) {
	C.QTableWidget_ItemPressed(this.h, item.cPointer())
}

func (this *QTableWidget) OnItemPressed(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTableWidget_connect_ItemPressed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTableWidget) ItemClicked(item *QTableWidgetItem) {
	C.QTableWidget_ItemClicked(this.h, item.cPointer())
}

func (this *QTableWidget) OnItemClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTableWidget_connect_ItemClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTableWidget) ItemDoubleClicked(item *QTableWidgetItem) {
	C.QTableWidget_ItemDoubleClicked(this.h, item.cPointer())
}

func (this *QTableWidget) OnItemDoubleClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTableWidget_connect_ItemDoubleClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTableWidget) ItemActivated(item *QTableWidgetItem) {
	C.QTableWidget_ItemActivated(this.h, item.cPointer())
}

func (this *QTableWidget) OnItemActivated(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTableWidget_connect_ItemActivated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTableWidget) ItemEntered(item *QTableWidgetItem) {
	C.QTableWidget_ItemEntered(this.h, item.cPointer())
}

func (this *QTableWidget) OnItemEntered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTableWidget_connect_ItemEntered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTableWidget) ItemChanged(item *QTableWidgetItem) {
	C.QTableWidget_ItemChanged(this.h, item.cPointer())
}

func (this *QTableWidget) OnItemChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTableWidget_connect_ItemChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTableWidget) CurrentItemChanged(current *QTableWidgetItem, previous *QTableWidgetItem) {
	C.QTableWidget_CurrentItemChanged(this.h, current.cPointer(), previous.cPointer())
}

func (this *QTableWidget) OnCurrentItemChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTableWidget_connect_CurrentItemChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTableWidget) ItemSelectionChanged() {
	C.QTableWidget_ItemSelectionChanged(this.h)
}

func (this *QTableWidget) OnItemSelectionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTableWidget_connect_ItemSelectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTableWidget) CellPressed(row int, column int) {
	C.QTableWidget_CellPressed(this.h, (C.int)(row), (C.int)(column))
}

func (this *QTableWidget) OnCellPressed(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTableWidget_connect_CellPressed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTableWidget) CellClicked(row int, column int) {
	C.QTableWidget_CellClicked(this.h, (C.int)(row), (C.int)(column))
}

func (this *QTableWidget) OnCellClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTableWidget_connect_CellClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTableWidget) CellDoubleClicked(row int, column int) {
	C.QTableWidget_CellDoubleClicked(this.h, (C.int)(row), (C.int)(column))
}

func (this *QTableWidget) OnCellDoubleClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTableWidget_connect_CellDoubleClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTableWidget) CellActivated(row int, column int) {
	C.QTableWidget_CellActivated(this.h, (C.int)(row), (C.int)(column))
}

func (this *QTableWidget) OnCellActivated(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTableWidget_connect_CellActivated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTableWidget) CellEntered(row int, column int) {
	C.QTableWidget_CellEntered(this.h, (C.int)(row), (C.int)(column))
}

func (this *QTableWidget) OnCellEntered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTableWidget_connect_CellEntered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTableWidget) CellChanged(row int, column int) {
	C.QTableWidget_CellChanged(this.h, (C.int)(row), (C.int)(column))
}

func (this *QTableWidget) OnCellChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTableWidget_connect_CellChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTableWidget) CurrentCellChanged(currentRow int, currentColumn int, previousRow int, previousColumn int) {
	C.QTableWidget_CurrentCellChanged(this.h, (C.int)(currentRow), (C.int)(currentColumn), (C.int)(previousRow), (C.int)(previousColumn))
}

func (this *QTableWidget) OnCurrentCellChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTableWidget_connect_CurrentCellChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QTableWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTableWidget_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTableWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTableWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTableWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTableWidget_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTableWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTableWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTableWidget) SortItems2(column int, order uintptr) {
	C.QTableWidget_SortItems2(this.h, (C.int)(column), (C.uintptr_t)(order))
}

func (this *QTableWidget) ScrollToItem2(item *QTableWidgetItem, hint uintptr) {
	C.QTableWidget_ScrollToItem2(this.h, item.cPointer(), (C.uintptr_t)(hint))
}

func (this *QTableWidget) Delete() {
	C.QTableWidget_Delete(this.h)
}
