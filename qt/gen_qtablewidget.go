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

type QTableWidgetItem__ItemType int

const (
	QTableWidgetItem__ItemType__Type     QTableWidgetItem__ItemType = 0
	QTableWidgetItem__ItemType__UserType QTableWidgetItem__ItemType = 1000
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
	_ret := C.QTableWidgetSelectionRange_TopRow(this.h)
	return (int)(_ret)
}

func (this *QTableWidgetSelectionRange) BottomRow() int {
	_ret := C.QTableWidgetSelectionRange_BottomRow(this.h)
	return (int)(_ret)
}

func (this *QTableWidgetSelectionRange) LeftColumn() int {
	_ret := C.QTableWidgetSelectionRange_LeftColumn(this.h)
	return (int)(_ret)
}

func (this *QTableWidgetSelectionRange) RightColumn() int {
	_ret := C.QTableWidgetSelectionRange_RightColumn(this.h)
	return (int)(_ret)
}

func (this *QTableWidgetSelectionRange) RowCount() int {
	_ret := C.QTableWidgetSelectionRange_RowCount(this.h)
	return (int)(_ret)
}

func (this *QTableWidgetSelectionRange) ColumnCount() int {
	_ret := C.QTableWidgetSelectionRange_ColumnCount(this.h)
	return (int)(_ret)
}

// Delete this object from C++ memory.
func (this *QTableWidgetSelectionRange) Delete() {
	C.QTableWidgetSelectionRange_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTableWidgetSelectionRange) GoGC() {
	runtime.SetFinalizer(this, func(this *QTableWidgetSelectionRange) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QTableWidgetItem_new2((*C.struct_miqt_string)(text_ms))
	return newQTableWidgetItem(ret)
}

// NewQTableWidgetItem3 constructs a new QTableWidgetItem object.
func NewQTableWidgetItem3(icon *QIcon, text string) *QTableWidgetItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QTableWidgetItem_new3(icon.cPointer(), (*C.struct_miqt_string)(text_ms))
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
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QTableWidgetItem_new6((*C.struct_miqt_string)(text_ms), (C.int)(typeVal))
	return newQTableWidgetItem(ret)
}

// NewQTableWidgetItem7 constructs a new QTableWidgetItem object.
func NewQTableWidgetItem7(icon *QIcon, text string, typeVal int) *QTableWidgetItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QTableWidgetItem_new7(icon.cPointer(), (*C.struct_miqt_string)(text_ms), (C.int)(typeVal))
	return newQTableWidgetItem(ret)
}

func (this *QTableWidgetItem) Clone() *QTableWidgetItem {
	_ret := C.QTableWidgetItem_Clone(this.h)
	return newQTableWidgetItem_U(unsafe.Pointer(_ret))
}

func (this *QTableWidgetItem) TableWidget() *QTableWidget {
	_ret := C.QTableWidgetItem_TableWidget(this.h)
	return newQTableWidget_U(unsafe.Pointer(_ret))
}

func (this *QTableWidgetItem) Row() int {
	_ret := C.QTableWidgetItem_Row(this.h)
	return (int)(_ret)
}

func (this *QTableWidgetItem) Column() int {
	_ret := C.QTableWidgetItem_Column(this.h)
	return (int)(_ret)
}

func (this *QTableWidgetItem) SetSelected(selectVal bool) {
	C.QTableWidgetItem_SetSelected(this.h, (C.bool)(selectVal))
}

func (this *QTableWidgetItem) IsSelected() bool {
	_ret := C.QTableWidgetItem_IsSelected(this.h)
	return (bool)(_ret)
}

func (this *QTableWidgetItem) Flags() int {
	_ret := C.QTableWidgetItem_Flags(this.h)
	return (int)(_ret)
}

func (this *QTableWidgetItem) SetFlags(flags int) {
	C.QTableWidgetItem_SetFlags(this.h, (C.int)(flags))
}

func (this *QTableWidgetItem) Text() string {
	var _ms *C.struct_miqt_string = C.QTableWidgetItem_Text(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTableWidgetItem) SetText(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QTableWidgetItem_SetText(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QTableWidgetItem) Icon() *QIcon {
	_ret := C.QTableWidgetItem_Icon(this.h)
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableWidgetItem) SetIcon(icon *QIcon) {
	C.QTableWidgetItem_SetIcon(this.h, icon.cPointer())
}

func (this *QTableWidgetItem) StatusTip() string {
	var _ms *C.struct_miqt_string = C.QTableWidgetItem_StatusTip(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTableWidgetItem) SetStatusTip(statusTip string) {
	statusTip_ms := miqt_strdupg(statusTip)
	defer C.free(statusTip_ms)
	C.QTableWidgetItem_SetStatusTip(this.h, (*C.struct_miqt_string)(statusTip_ms))
}

func (this *QTableWidgetItem) ToolTip() string {
	var _ms *C.struct_miqt_string = C.QTableWidgetItem_ToolTip(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTableWidgetItem) SetToolTip(toolTip string) {
	toolTip_ms := miqt_strdupg(toolTip)
	defer C.free(toolTip_ms)
	C.QTableWidgetItem_SetToolTip(this.h, (*C.struct_miqt_string)(toolTip_ms))
}

func (this *QTableWidgetItem) WhatsThis() string {
	var _ms *C.struct_miqt_string = C.QTableWidgetItem_WhatsThis(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTableWidgetItem) SetWhatsThis(whatsThis string) {
	whatsThis_ms := miqt_strdupg(whatsThis)
	defer C.free(whatsThis_ms)
	C.QTableWidgetItem_SetWhatsThis(this.h, (*C.struct_miqt_string)(whatsThis_ms))
}

func (this *QTableWidgetItem) Font() *QFont {
	_ret := C.QTableWidgetItem_Font(this.h)
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableWidgetItem) SetFont(font *QFont) {
	C.QTableWidgetItem_SetFont(this.h, font.cPointer())
}

func (this *QTableWidgetItem) TextAlignment() int {
	_ret := C.QTableWidgetItem_TextAlignment(this.h)
	return (int)(_ret)
}

func (this *QTableWidgetItem) SetTextAlignment(alignment int) {
	C.QTableWidgetItem_SetTextAlignment(this.h, (C.int)(alignment))
}

func (this *QTableWidgetItem) BackgroundColor() *QColor {
	_ret := C.QTableWidgetItem_BackgroundColor(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableWidgetItem) SetBackgroundColor(color *QColor) {
	C.QTableWidgetItem_SetBackgroundColor(this.h, color.cPointer())
}

func (this *QTableWidgetItem) Background() *QBrush {
	_ret := C.QTableWidgetItem_Background(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableWidgetItem) SetBackground(brush *QBrush) {
	C.QTableWidgetItem_SetBackground(this.h, brush.cPointer())
}

func (this *QTableWidgetItem) TextColor() *QColor {
	_ret := C.QTableWidgetItem_TextColor(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableWidgetItem) SetTextColor(color *QColor) {
	C.QTableWidgetItem_SetTextColor(this.h, color.cPointer())
}

func (this *QTableWidgetItem) Foreground() *QBrush {
	_ret := C.QTableWidgetItem_Foreground(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableWidgetItem) SetForeground(brush *QBrush) {
	C.QTableWidgetItem_SetForeground(this.h, brush.cPointer())
}

func (this *QTableWidgetItem) CheckState() CheckState {
	_ret := C.QTableWidgetItem_CheckState(this.h)
	return (CheckState)(_ret)
}

func (this *QTableWidgetItem) SetCheckState(state CheckState) {
	C.QTableWidgetItem_SetCheckState(this.h, (C.uintptr_t)(state))
}

func (this *QTableWidgetItem) SizeHint() *QSize {
	_ret := C.QTableWidgetItem_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableWidgetItem) SetSizeHint(size *QSize) {
	C.QTableWidgetItem_SetSizeHint(this.h, size.cPointer())
}

func (this *QTableWidgetItem) Data(role int) *QVariant {
	_ret := C.QTableWidgetItem_Data(this.h, (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableWidgetItem) SetData(role int, value *QVariant) {
	C.QTableWidgetItem_SetData(this.h, (C.int)(role), value.cPointer())
}

func (this *QTableWidgetItem) OperatorLesser(other *QTableWidgetItem) bool {
	_ret := C.QTableWidgetItem_OperatorLesser(this.h, other.cPointer())
	return (bool)(_ret)
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
	_ret := C.QTableWidgetItem_Type(this.h)
	return (int)(_ret)
}

// Delete this object from C++ memory.
func (this *QTableWidgetItem) Delete() {
	C.QTableWidgetItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTableWidgetItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QTableWidgetItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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
	_ret := C.QTableWidget_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QTableWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QTableWidget_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTableWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QTableWidget_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTableWidget) SetRowCount(rows int) {
	C.QTableWidget_SetRowCount(this.h, (C.int)(rows))
}

func (this *QTableWidget) RowCount() int {
	_ret := C.QTableWidget_RowCount(this.h)
	return (int)(_ret)
}

func (this *QTableWidget) SetColumnCount(columns int) {
	C.QTableWidget_SetColumnCount(this.h, (C.int)(columns))
}

func (this *QTableWidget) ColumnCount() int {
	_ret := C.QTableWidget_ColumnCount(this.h)
	return (int)(_ret)
}

func (this *QTableWidget) Row(item *QTableWidgetItem) int {
	_ret := C.QTableWidget_Row(this.h, item.cPointer())
	return (int)(_ret)
}

func (this *QTableWidget) Column(item *QTableWidgetItem) int {
	_ret := C.QTableWidget_Column(this.h, item.cPointer())
	return (int)(_ret)
}

func (this *QTableWidget) Item(row int, column int) *QTableWidgetItem {
	_ret := C.QTableWidget_Item(this.h, (C.int)(row), (C.int)(column))
	return newQTableWidgetItem_U(unsafe.Pointer(_ret))
}

func (this *QTableWidget) SetItem(row int, column int, item *QTableWidgetItem) {
	C.QTableWidget_SetItem(this.h, (C.int)(row), (C.int)(column), item.cPointer())
}

func (this *QTableWidget) TakeItem(row int, column int) *QTableWidgetItem {
	_ret := C.QTableWidget_TakeItem(this.h, (C.int)(row), (C.int)(column))
	return newQTableWidgetItem_U(unsafe.Pointer(_ret))
}

func (this *QTableWidget) VerticalHeaderItem(row int) *QTableWidgetItem {
	_ret := C.QTableWidget_VerticalHeaderItem(this.h, (C.int)(row))
	return newQTableWidgetItem_U(unsafe.Pointer(_ret))
}

func (this *QTableWidget) SetVerticalHeaderItem(row int, item *QTableWidgetItem) {
	C.QTableWidget_SetVerticalHeaderItem(this.h, (C.int)(row), item.cPointer())
}

func (this *QTableWidget) TakeVerticalHeaderItem(row int) *QTableWidgetItem {
	_ret := C.QTableWidget_TakeVerticalHeaderItem(this.h, (C.int)(row))
	return newQTableWidgetItem_U(unsafe.Pointer(_ret))
}

func (this *QTableWidget) HorizontalHeaderItem(column int) *QTableWidgetItem {
	_ret := C.QTableWidget_HorizontalHeaderItem(this.h, (C.int)(column))
	return newQTableWidgetItem_U(unsafe.Pointer(_ret))
}

func (this *QTableWidget) SetHorizontalHeaderItem(column int, item *QTableWidgetItem) {
	C.QTableWidget_SetHorizontalHeaderItem(this.h, (C.int)(column), item.cPointer())
}

func (this *QTableWidget) TakeHorizontalHeaderItem(column int) *QTableWidgetItem {
	_ret := C.QTableWidget_TakeHorizontalHeaderItem(this.h, (C.int)(column))
	return newQTableWidgetItem_U(unsafe.Pointer(_ret))
}

func (this *QTableWidget) SetVerticalHeaderLabels(labels []string) {
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
	C.QTableWidget_SetVerticalHeaderLabels(this.h, labels_ma)
}

func (this *QTableWidget) SetHorizontalHeaderLabels(labels []string) {
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
	C.QTableWidget_SetHorizontalHeaderLabels(this.h, labels_ma)
}

func (this *QTableWidget) CurrentRow() int {
	_ret := C.QTableWidget_CurrentRow(this.h)
	return (int)(_ret)
}

func (this *QTableWidget) CurrentColumn() int {
	_ret := C.QTableWidget_CurrentColumn(this.h)
	return (int)(_ret)
}

func (this *QTableWidget) CurrentItem() *QTableWidgetItem {
	_ret := C.QTableWidget_CurrentItem(this.h)
	return newQTableWidgetItem_U(unsafe.Pointer(_ret))
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
	_ret := C.QTableWidget_IsSortingEnabled(this.h)
	return (bool)(_ret)
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
	_ret := C.QTableWidget_IsPersistentEditorOpen(this.h, item.cPointer())
	return (bool)(_ret)
}

func (this *QTableWidget) CellWidget(row int, column int) *QWidget {
	_ret := C.QTableWidget_CellWidget(this.h, (C.int)(row), (C.int)(column))
	return newQWidget_U(unsafe.Pointer(_ret))
}

func (this *QTableWidget) SetCellWidget(row int, column int, widget *QWidget) {
	C.QTableWidget_SetCellWidget(this.h, (C.int)(row), (C.int)(column), widget.cPointer())
}

func (this *QTableWidget) RemoveCellWidget(row int, column int) {
	C.QTableWidget_RemoveCellWidget(this.h, (C.int)(row), (C.int)(column))
}

func (this *QTableWidget) IsItemSelected(item *QTableWidgetItem) bool {
	_ret := C.QTableWidget_IsItemSelected(this.h, item.cPointer())
	return (bool)(_ret)
}

func (this *QTableWidget) SetItemSelected(item *QTableWidgetItem, selectVal bool) {
	C.QTableWidget_SetItemSelected(this.h, item.cPointer(), (C.bool)(selectVal))
}

func (this *QTableWidget) SetRangeSelected(rangeVal *QTableWidgetSelectionRange, selectVal bool) {
	C.QTableWidget_SetRangeSelected(this.h, rangeVal.cPointer(), (C.bool)(selectVal))
}

func (this *QTableWidget) SelectedRanges() []QTableWidgetSelectionRange {
	var _ma *C.struct_miqt_array = C.QTableWidget_SelectedRanges(this.h)
	_ret := make([]QTableWidgetSelectionRange, int(_ma.len))
	_outCast := (*[0xffff]*C.QTableWidgetSelectionRange)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = *newQTableWidgetSelectionRange(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTableWidget) SelectedItems() []*QTableWidgetItem {
	var _ma *C.struct_miqt_array = C.QTableWidget_SelectedItems(this.h)
	_ret := make([]*QTableWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QTableWidgetItem)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQTableWidgetItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTableWidget) FindItems(text string, flags int) []*QTableWidgetItem {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	var _ma *C.struct_miqt_array = C.QTableWidget_FindItems(this.h, (*C.struct_miqt_string)(text_ms), (C.int)(flags))
	_ret := make([]*QTableWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QTableWidgetItem)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQTableWidgetItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTableWidget) VisualRow(logicalRow int) int {
	_ret := C.QTableWidget_VisualRow(this.h, (C.int)(logicalRow))
	return (int)(_ret)
}

func (this *QTableWidget) VisualColumn(logicalColumn int) int {
	_ret := C.QTableWidget_VisualColumn(this.h, (C.int)(logicalColumn))
	return (int)(_ret)
}

func (this *QTableWidget) ItemAt(p *QPoint) *QTableWidgetItem {
	_ret := C.QTableWidget_ItemAt(this.h, p.cPointer())
	return newQTableWidgetItem_U(unsafe.Pointer(_ret))
}

func (this *QTableWidget) ItemAt2(x int, y int) *QTableWidgetItem {
	_ret := C.QTableWidget_ItemAt2(this.h, (C.int)(x), (C.int)(y))
	return newQTableWidgetItem_U(unsafe.Pointer(_ret))
}

func (this *QTableWidget) VisualItemRect(item *QTableWidgetItem) *QRect {
	_ret := C.QTableWidget_VisualItemRect(this.h, item.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableWidget) ItemPrototype() *QTableWidgetItem {
	_ret := C.QTableWidget_ItemPrototype(this.h)
	return newQTableWidgetItem_U(unsafe.Pointer(_ret))
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
func (this *QTableWidget) OnItemPressed(slot func(item *QTableWidgetItem)) {
	C.QTableWidget_connect_ItemPressed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTableWidget_ItemPressed
func miqt_exec_callback_QTableWidget_ItemPressed(cb *C.void, item *C.QTableWidgetItem) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(item *QTableWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	item_ret := item
	slotval1 := newQTableWidgetItem_U(unsafe.Pointer(item_ret))

	gofunc(slotval1)
}

func (this *QTableWidget) ItemClicked(item *QTableWidgetItem) {
	C.QTableWidget_ItemClicked(this.h, item.cPointer())
}
func (this *QTableWidget) OnItemClicked(slot func(item *QTableWidgetItem)) {
	C.QTableWidget_connect_ItemClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTableWidget_ItemClicked
func miqt_exec_callback_QTableWidget_ItemClicked(cb *C.void, item *C.QTableWidgetItem) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(item *QTableWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	item_ret := item
	slotval1 := newQTableWidgetItem_U(unsafe.Pointer(item_ret))

	gofunc(slotval1)
}

func (this *QTableWidget) ItemDoubleClicked(item *QTableWidgetItem) {
	C.QTableWidget_ItemDoubleClicked(this.h, item.cPointer())
}
func (this *QTableWidget) OnItemDoubleClicked(slot func(item *QTableWidgetItem)) {
	C.QTableWidget_connect_ItemDoubleClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTableWidget_ItemDoubleClicked
func miqt_exec_callback_QTableWidget_ItemDoubleClicked(cb *C.void, item *C.QTableWidgetItem) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(item *QTableWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	item_ret := item
	slotval1 := newQTableWidgetItem_U(unsafe.Pointer(item_ret))

	gofunc(slotval1)
}

func (this *QTableWidget) ItemActivated(item *QTableWidgetItem) {
	C.QTableWidget_ItemActivated(this.h, item.cPointer())
}
func (this *QTableWidget) OnItemActivated(slot func(item *QTableWidgetItem)) {
	C.QTableWidget_connect_ItemActivated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTableWidget_ItemActivated
func miqt_exec_callback_QTableWidget_ItemActivated(cb *C.void, item *C.QTableWidgetItem) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(item *QTableWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	item_ret := item
	slotval1 := newQTableWidgetItem_U(unsafe.Pointer(item_ret))

	gofunc(slotval1)
}

func (this *QTableWidget) ItemEntered(item *QTableWidgetItem) {
	C.QTableWidget_ItemEntered(this.h, item.cPointer())
}
func (this *QTableWidget) OnItemEntered(slot func(item *QTableWidgetItem)) {
	C.QTableWidget_connect_ItemEntered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTableWidget_ItemEntered
func miqt_exec_callback_QTableWidget_ItemEntered(cb *C.void, item *C.QTableWidgetItem) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(item *QTableWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	item_ret := item
	slotval1 := newQTableWidgetItem_U(unsafe.Pointer(item_ret))

	gofunc(slotval1)
}

func (this *QTableWidget) ItemChanged(item *QTableWidgetItem) {
	C.QTableWidget_ItemChanged(this.h, item.cPointer())
}
func (this *QTableWidget) OnItemChanged(slot func(item *QTableWidgetItem)) {
	C.QTableWidget_connect_ItemChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTableWidget_ItemChanged
func miqt_exec_callback_QTableWidget_ItemChanged(cb *C.void, item *C.QTableWidgetItem) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(item *QTableWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	item_ret := item
	slotval1 := newQTableWidgetItem_U(unsafe.Pointer(item_ret))

	gofunc(slotval1)
}

func (this *QTableWidget) CurrentItemChanged(current *QTableWidgetItem, previous *QTableWidgetItem) {
	C.QTableWidget_CurrentItemChanged(this.h, current.cPointer(), previous.cPointer())
}
func (this *QTableWidget) OnCurrentItemChanged(slot func(current *QTableWidgetItem, previous *QTableWidgetItem)) {
	C.QTableWidget_connect_CurrentItemChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTableWidget_CurrentItemChanged
func miqt_exec_callback_QTableWidget_CurrentItemChanged(cb *C.void, current *C.QTableWidgetItem, previous *C.QTableWidgetItem) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(current *QTableWidgetItem, previous *QTableWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	current_ret := current
	slotval1 := newQTableWidgetItem_U(unsafe.Pointer(current_ret))
	previous_ret := previous
	slotval2 := newQTableWidgetItem_U(unsafe.Pointer(previous_ret))

	gofunc(slotval1, slotval2)
}

func (this *QTableWidget) ItemSelectionChanged() {
	C.QTableWidget_ItemSelectionChanged(this.h)
}
func (this *QTableWidget) OnItemSelectionChanged(slot func()) {
	C.QTableWidget_connect_ItemSelectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTableWidget_ItemSelectionChanged
func miqt_exec_callback_QTableWidget_ItemSelectionChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTableWidget) CellPressed(row int, column int) {
	C.QTableWidget_CellPressed(this.h, (C.int)(row), (C.int)(column))
}
func (this *QTableWidget) OnCellPressed(slot func(row int, column int)) {
	C.QTableWidget_connect_CellPressed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTableWidget_CellPressed
func miqt_exec_callback_QTableWidget_CellPressed(cb *C.void, row C.int, column C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(row int, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	row_ret := row
	slotval1 := (int)(row_ret)

	column_ret := column
	slotval2 := (int)(column_ret)

	gofunc(slotval1, slotval2)
}

func (this *QTableWidget) CellClicked(row int, column int) {
	C.QTableWidget_CellClicked(this.h, (C.int)(row), (C.int)(column))
}
func (this *QTableWidget) OnCellClicked(slot func(row int, column int)) {
	C.QTableWidget_connect_CellClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTableWidget_CellClicked
func miqt_exec_callback_QTableWidget_CellClicked(cb *C.void, row C.int, column C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(row int, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	row_ret := row
	slotval1 := (int)(row_ret)

	column_ret := column
	slotval2 := (int)(column_ret)

	gofunc(slotval1, slotval2)
}

func (this *QTableWidget) CellDoubleClicked(row int, column int) {
	C.QTableWidget_CellDoubleClicked(this.h, (C.int)(row), (C.int)(column))
}
func (this *QTableWidget) OnCellDoubleClicked(slot func(row int, column int)) {
	C.QTableWidget_connect_CellDoubleClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTableWidget_CellDoubleClicked
func miqt_exec_callback_QTableWidget_CellDoubleClicked(cb *C.void, row C.int, column C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(row int, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	row_ret := row
	slotval1 := (int)(row_ret)

	column_ret := column
	slotval2 := (int)(column_ret)

	gofunc(slotval1, slotval2)
}

func (this *QTableWidget) CellActivated(row int, column int) {
	C.QTableWidget_CellActivated(this.h, (C.int)(row), (C.int)(column))
}
func (this *QTableWidget) OnCellActivated(slot func(row int, column int)) {
	C.QTableWidget_connect_CellActivated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTableWidget_CellActivated
func miqt_exec_callback_QTableWidget_CellActivated(cb *C.void, row C.int, column C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(row int, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	row_ret := row
	slotval1 := (int)(row_ret)

	column_ret := column
	slotval2 := (int)(column_ret)

	gofunc(slotval1, slotval2)
}

func (this *QTableWidget) CellEntered(row int, column int) {
	C.QTableWidget_CellEntered(this.h, (C.int)(row), (C.int)(column))
}
func (this *QTableWidget) OnCellEntered(slot func(row int, column int)) {
	C.QTableWidget_connect_CellEntered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTableWidget_CellEntered
func miqt_exec_callback_QTableWidget_CellEntered(cb *C.void, row C.int, column C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(row int, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	row_ret := row
	slotval1 := (int)(row_ret)

	column_ret := column
	slotval2 := (int)(column_ret)

	gofunc(slotval1, slotval2)
}

func (this *QTableWidget) CellChanged(row int, column int) {
	C.QTableWidget_CellChanged(this.h, (C.int)(row), (C.int)(column))
}
func (this *QTableWidget) OnCellChanged(slot func(row int, column int)) {
	C.QTableWidget_connect_CellChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTableWidget_CellChanged
func miqt_exec_callback_QTableWidget_CellChanged(cb *C.void, row C.int, column C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(row int, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	row_ret := row
	slotval1 := (int)(row_ret)

	column_ret := column
	slotval2 := (int)(column_ret)

	gofunc(slotval1, slotval2)
}

func (this *QTableWidget) CurrentCellChanged(currentRow int, currentColumn int, previousRow int, previousColumn int) {
	C.QTableWidget_CurrentCellChanged(this.h, (C.int)(currentRow), (C.int)(currentColumn), (C.int)(previousRow), (C.int)(previousColumn))
}
func (this *QTableWidget) OnCurrentCellChanged(slot func(currentRow int, currentColumn int, previousRow int, previousColumn int)) {
	C.QTableWidget_connect_CurrentCellChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTableWidget_CurrentCellChanged
func miqt_exec_callback_QTableWidget_CurrentCellChanged(cb *C.void, currentRow C.int, currentColumn C.int, previousRow C.int, previousColumn C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(currentRow int, currentColumn int, previousRow int, previousColumn int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	currentRow_ret := currentRow
	slotval1 := (int)(currentRow_ret)

	currentColumn_ret := currentColumn
	slotval2 := (int)(currentColumn_ret)

	previousRow_ret := previousRow
	slotval3 := (int)(previousRow_ret)

	previousColumn_ret := previousColumn
	slotval4 := (int)(previousColumn_ret)

	gofunc(slotval1, slotval2, slotval3, slotval4)
}

func QTableWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTableWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTableWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTableWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTableWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTableWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTableWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTableWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTableWidget) SortItems2(column int, order SortOrder) {
	C.QTableWidget_SortItems2(this.h, (C.int)(column), (C.uintptr_t)(order))
}

func (this *QTableWidget) ScrollToItem2(item *QTableWidgetItem, hint QAbstractItemView__ScrollHint) {
	C.QTableWidget_ScrollToItem2(this.h, item.cPointer(), (C.uintptr_t)(hint))
}

// Delete this object from C++ memory.
func (this *QTableWidget) Delete() {
	C.QTableWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTableWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QTableWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
