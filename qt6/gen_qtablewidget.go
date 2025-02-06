package qt6

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
	QTableWidgetItem__Type     QTableWidgetItem__ItemType = 0
	QTableWidgetItem__UserType QTableWidgetItem__ItemType = 1000
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

func (this *QTableWidgetSelectionRange) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTableWidgetSelectionRange constructs the type using only CGO pointers.
func newQTableWidgetSelectionRange(h *C.QTableWidgetSelectionRange) *QTableWidgetSelectionRange {
	if h == nil {
		return nil
	}

	return &QTableWidgetSelectionRange{h: h}
}

// UnsafeNewQTableWidgetSelectionRange constructs the type using only unsafe pointers.
func UnsafeNewQTableWidgetSelectionRange(h unsafe.Pointer) *QTableWidgetSelectionRange {
	return newQTableWidgetSelectionRange((*C.QTableWidgetSelectionRange)(h))
}

// NewQTableWidgetSelectionRange constructs a new QTableWidgetSelectionRange object.
func NewQTableWidgetSelectionRange() *QTableWidgetSelectionRange {

	return newQTableWidgetSelectionRange(C.QTableWidgetSelectionRange_new())
}

// NewQTableWidgetSelectionRange2 constructs a new QTableWidgetSelectionRange object.
func NewQTableWidgetSelectionRange2(top int, left int, bottom int, right int) *QTableWidgetSelectionRange {

	return newQTableWidgetSelectionRange(C.QTableWidgetSelectionRange_new2((C.int)(top), (C.int)(left), (C.int)(bottom), (C.int)(right)))
}

func (this *QTableWidgetSelectionRange) TopRow() int {
	return (int)(C.QTableWidgetSelectionRange_topRow(this.h))
}

func (this *QTableWidgetSelectionRange) BottomRow() int {
	return (int)(C.QTableWidgetSelectionRange_bottomRow(this.h))
}

func (this *QTableWidgetSelectionRange) LeftColumn() int {
	return (int)(C.QTableWidgetSelectionRange_leftColumn(this.h))
}

func (this *QTableWidgetSelectionRange) RightColumn() int {
	return (int)(C.QTableWidgetSelectionRange_rightColumn(this.h))
}

func (this *QTableWidgetSelectionRange) RowCount() int {
	return (int)(C.QTableWidgetSelectionRange_rowCount(this.h))
}

func (this *QTableWidgetSelectionRange) ColumnCount() int {
	return (int)(C.QTableWidgetSelectionRange_columnCount(this.h))
}

// Delete this object from C++ memory.
func (this *QTableWidgetSelectionRange) Delete() {
	C.QTableWidgetSelectionRange_delete(this.h)
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

func (this *QTableWidgetItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTableWidgetItem constructs the type using only CGO pointers.
func newQTableWidgetItem(h *C.QTableWidgetItem) *QTableWidgetItem {
	if h == nil {
		return nil
	}

	return &QTableWidgetItem{h: h}
}

// UnsafeNewQTableWidgetItem constructs the type using only unsafe pointers.
func UnsafeNewQTableWidgetItem(h unsafe.Pointer) *QTableWidgetItem {
	return newQTableWidgetItem((*C.QTableWidgetItem)(h))
}

// NewQTableWidgetItem constructs a new QTableWidgetItem object.
func NewQTableWidgetItem() *QTableWidgetItem {

	return newQTableWidgetItem(C.QTableWidgetItem_new())
}

// NewQTableWidgetItem2 constructs a new QTableWidgetItem object.
func NewQTableWidgetItem2(text string) *QTableWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQTableWidgetItem(C.QTableWidgetItem_new2(text_ms))
}

// NewQTableWidgetItem3 constructs a new QTableWidgetItem object.
func NewQTableWidgetItem3(icon *QIcon, text string) *QTableWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQTableWidgetItem(C.QTableWidgetItem_new3(icon.cPointer(), text_ms))
}

// NewQTableWidgetItem4 constructs a new QTableWidgetItem object.
func NewQTableWidgetItem4(other *QTableWidgetItem) *QTableWidgetItem {

	return newQTableWidgetItem(C.QTableWidgetItem_new4(other.cPointer()))
}

// NewQTableWidgetItem5 constructs a new QTableWidgetItem object.
func NewQTableWidgetItem5(typeVal int) *QTableWidgetItem {

	return newQTableWidgetItem(C.QTableWidgetItem_new5((C.int)(typeVal)))
}

// NewQTableWidgetItem6 constructs a new QTableWidgetItem object.
func NewQTableWidgetItem6(text string, typeVal int) *QTableWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQTableWidgetItem(C.QTableWidgetItem_new6(text_ms, (C.int)(typeVal)))
}

// NewQTableWidgetItem7 constructs a new QTableWidgetItem object.
func NewQTableWidgetItem7(icon *QIcon, text string, typeVal int) *QTableWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQTableWidgetItem(C.QTableWidgetItem_new7(icon.cPointer(), text_ms, (C.int)(typeVal)))
}

func (this *QTableWidgetItem) Clone() *QTableWidgetItem {
	return newQTableWidgetItem(C.QTableWidgetItem_clone(this.h))
}

func (this *QTableWidgetItem) TableWidget() *QTableWidget {
	return newQTableWidget(C.QTableWidgetItem_tableWidget(this.h))
}

func (this *QTableWidgetItem) Row() int {
	return (int)(C.QTableWidgetItem_row(this.h))
}

func (this *QTableWidgetItem) Column() int {
	return (int)(C.QTableWidgetItem_column(this.h))
}

func (this *QTableWidgetItem) SetSelected(selectVal bool) {
	C.QTableWidgetItem_setSelected(this.h, (C.bool)(selectVal))
}

func (this *QTableWidgetItem) IsSelected() bool {
	return (bool)(C.QTableWidgetItem_isSelected(this.h))
}

func (this *QTableWidgetItem) Flags() ItemFlag {
	return (ItemFlag)(C.QTableWidgetItem_flags(this.h))
}

func (this *QTableWidgetItem) SetFlags(flags ItemFlag) {
	C.QTableWidgetItem_setFlags(this.h, (C.int)(flags))
}

func (this *QTableWidgetItem) Text() string {
	var _ms C.struct_miqt_string = C.QTableWidgetItem_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTableWidgetItem) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTableWidgetItem_setText(this.h, text_ms)
}

func (this *QTableWidgetItem) Icon() *QIcon {
	_goptr := newQIcon(C.QTableWidgetItem_icon(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableWidgetItem) SetIcon(icon *QIcon) {
	C.QTableWidgetItem_setIcon(this.h, icon.cPointer())
}

func (this *QTableWidgetItem) StatusTip() string {
	var _ms C.struct_miqt_string = C.QTableWidgetItem_statusTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTableWidgetItem) SetStatusTip(statusTip string) {
	statusTip_ms := C.struct_miqt_string{}
	statusTip_ms.data = C.CString(statusTip)
	statusTip_ms.len = C.size_t(len(statusTip))
	defer C.free(unsafe.Pointer(statusTip_ms.data))
	C.QTableWidgetItem_setStatusTip(this.h, statusTip_ms)
}

func (this *QTableWidgetItem) ToolTip() string {
	var _ms C.struct_miqt_string = C.QTableWidgetItem_toolTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTableWidgetItem) SetToolTip(toolTip string) {
	toolTip_ms := C.struct_miqt_string{}
	toolTip_ms.data = C.CString(toolTip)
	toolTip_ms.len = C.size_t(len(toolTip))
	defer C.free(unsafe.Pointer(toolTip_ms.data))
	C.QTableWidgetItem_setToolTip(this.h, toolTip_ms)
}

func (this *QTableWidgetItem) WhatsThis() string {
	var _ms C.struct_miqt_string = C.QTableWidgetItem_whatsThis(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTableWidgetItem) SetWhatsThis(whatsThis string) {
	whatsThis_ms := C.struct_miqt_string{}
	whatsThis_ms.data = C.CString(whatsThis)
	whatsThis_ms.len = C.size_t(len(whatsThis))
	defer C.free(unsafe.Pointer(whatsThis_ms.data))
	C.QTableWidgetItem_setWhatsThis(this.h, whatsThis_ms)
}

func (this *QTableWidgetItem) Font() *QFont {
	_goptr := newQFont(C.QTableWidgetItem_font(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableWidgetItem) SetFont(font *QFont) {
	C.QTableWidgetItem_setFont(this.h, font.cPointer())
}

func (this *QTableWidgetItem) TextAlignment() int {
	return (int)(C.QTableWidgetItem_textAlignment(this.h))
}

func (this *QTableWidgetItem) SetTextAlignment(alignment int) {
	C.QTableWidgetItem_setTextAlignment(this.h, (C.int)(alignment))
}

func (this *QTableWidgetItem) SetTextAlignmentWithAlignment(alignment AlignmentFlag) {
	C.QTableWidgetItem_setTextAlignmentWithAlignment(this.h, (C.int)(alignment))
}

func (this *QTableWidgetItem) SetTextAlignment2(alignment AlignmentFlag) {
	C.QTableWidgetItem_setTextAlignment2(this.h, (C.int)(alignment))
}

func (this *QTableWidgetItem) Background() *QBrush {
	_goptr := newQBrush(C.QTableWidgetItem_background(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableWidgetItem) SetBackground(brush *QBrush) {
	C.QTableWidgetItem_setBackground(this.h, brush.cPointer())
}

func (this *QTableWidgetItem) Foreground() *QBrush {
	_goptr := newQBrush(C.QTableWidgetItem_foreground(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableWidgetItem) SetForeground(brush *QBrush) {
	C.QTableWidgetItem_setForeground(this.h, brush.cPointer())
}

func (this *QTableWidgetItem) CheckState() CheckState {
	return (CheckState)(C.QTableWidgetItem_checkState(this.h))
}

func (this *QTableWidgetItem) SetCheckState(state CheckState) {
	C.QTableWidgetItem_setCheckState(this.h, (C.int)(state))
}

func (this *QTableWidgetItem) SizeHint() *QSize {
	_goptr := newQSize(C.QTableWidgetItem_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableWidgetItem) SetSizeHint(size *QSize) {
	C.QTableWidgetItem_setSizeHint(this.h, size.cPointer())
}

func (this *QTableWidgetItem) Data(role int) *QVariant {
	_goptr := newQVariant(C.QTableWidgetItem_data(this.h, (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableWidgetItem) SetData(role int, value *QVariant) {
	C.QTableWidgetItem_setData(this.h, (C.int)(role), value.cPointer())
}

func (this *QTableWidgetItem) OperatorLesser(other *QTableWidgetItem) bool {
	return (bool)(C.QTableWidgetItem_operatorLesser(this.h, other.cPointer()))
}

func (this *QTableWidgetItem) Read(in *QDataStream) {
	C.QTableWidgetItem_read(this.h, in.cPointer())
}

func (this *QTableWidgetItem) Write(out *QDataStream) {
	C.QTableWidgetItem_write(this.h, out.cPointer())
}

func (this *QTableWidgetItem) OperatorAssign(other *QTableWidgetItem) {
	C.QTableWidgetItem_operatorAssign(this.h, other.cPointer())
}

func (this *QTableWidgetItem) Type() int {
	return (int)(C.QTableWidgetItem_type(this.h))
}

func (this *QTableWidgetItem) callVirtualBase_Clone() *QTableWidgetItem {

	return newQTableWidgetItem(C.QTableWidgetItem_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QTableWidgetItem) OnClone(slot func(super func() *QTableWidgetItem) *QTableWidgetItem) {
	ok := C.QTableWidgetItem_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidgetItem_clone
func miqt_exec_callback_QTableWidgetItem_clone(self *C.QTableWidgetItem, cb C.intptr_t) *C.QTableWidgetItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QTableWidgetItem) *QTableWidgetItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableWidgetItem{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QTableWidgetItem) callVirtualBase_Data(role int) *QVariant {

	_goptr := newQVariant(C.QTableWidgetItem_virtualbase_data(unsafe.Pointer(this.h), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTableWidgetItem) OnData(slot func(super func(role int) *QVariant, role int) *QVariant) {
	ok := C.QTableWidgetItem_override_virtual_data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidgetItem_data
func miqt_exec_callback_QTableWidgetItem_data(self *C.QTableWidgetItem, cb C.intptr_t, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(role int) *QVariant, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(role)

	virtualReturn := gofunc((&QTableWidgetItem{h: self}).callVirtualBase_Data, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTableWidgetItem) callVirtualBase_SetData(role int, value *QVariant) {

	C.QTableWidgetItem_virtualbase_setData(unsafe.Pointer(this.h), (C.int)(role), value.cPointer())

}
func (this *QTableWidgetItem) OnSetData(slot func(super func(role int, value *QVariant), role int, value *QVariant)) {
	ok := C.QTableWidgetItem_override_virtual_setData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidgetItem_setData
func miqt_exec_callback_QTableWidgetItem_setData(self *C.QTableWidgetItem, cb C.intptr_t, role C.int, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(role int, value *QVariant), role int, value *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(role)

	slotval2 := newQVariant(value)

	gofunc((&QTableWidgetItem{h: self}).callVirtualBase_SetData, slotval1, slotval2)

}

func (this *QTableWidgetItem) callVirtualBase_OperatorLesser(other *QTableWidgetItem) bool {

	return (bool)(C.QTableWidgetItem_virtualbase_operatorLesser(unsafe.Pointer(this.h), other.cPointer()))

}
func (this *QTableWidgetItem) OnOperatorLesser(slot func(super func(other *QTableWidgetItem) bool, other *QTableWidgetItem) bool) {
	ok := C.QTableWidgetItem_override_virtual_operatorLesser(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidgetItem_operatorLesser
func miqt_exec_callback_QTableWidgetItem_operatorLesser(self *C.QTableWidgetItem, cb C.intptr_t, other *C.QTableWidgetItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QTableWidgetItem) bool, other *QTableWidgetItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTableWidgetItem(other)

	virtualReturn := gofunc((&QTableWidgetItem{h: self}).callVirtualBase_OperatorLesser, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTableWidgetItem) callVirtualBase_Read(in *QDataStream) {

	C.QTableWidgetItem_virtualbase_read(unsafe.Pointer(this.h), in.cPointer())

}
func (this *QTableWidgetItem) OnRead(slot func(super func(in *QDataStream), in *QDataStream)) {
	ok := C.QTableWidgetItem_override_virtual_read(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidgetItem_read
func miqt_exec_callback_QTableWidgetItem_read(self *C.QTableWidgetItem, cb C.intptr_t, in *C.QDataStream) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(in *QDataStream), in *QDataStream))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDataStream(in)

	gofunc((&QTableWidgetItem{h: self}).callVirtualBase_Read, slotval1)

}

func (this *QTableWidgetItem) callVirtualBase_Write(out *QDataStream) {

	C.QTableWidgetItem_virtualbase_write(unsafe.Pointer(this.h), out.cPointer())

}
func (this *QTableWidgetItem) OnWrite(slot func(super func(out *QDataStream), out *QDataStream)) {
	ok := C.QTableWidgetItem_override_virtual_write(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidgetItem_write
func miqt_exec_callback_QTableWidgetItem_write(self *C.QTableWidgetItem, cb C.intptr_t, out *C.QDataStream) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(out *QDataStream), out *QDataStream))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDataStream(out)

	gofunc((&QTableWidgetItem{h: self}).callVirtualBase_Write, slotval1)

}

// Delete this object from C++ memory.
func (this *QTableWidgetItem) Delete() {
	C.QTableWidgetItem_delete(this.h)
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

func (this *QTableWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTableWidget constructs the type using only CGO pointers.
func newQTableWidget(h *C.QTableWidget) *QTableWidget {
	if h == nil {
		return nil
	}
	var outptr_QTableView *C.QTableView = nil
	C.QTableWidget_virtbase(h, &outptr_QTableView)

	return &QTableWidget{h: h,
		QTableView: newQTableView(outptr_QTableView)}
}

// UnsafeNewQTableWidget constructs the type using only unsafe pointers.
func UnsafeNewQTableWidget(h unsafe.Pointer) *QTableWidget {
	return newQTableWidget((*C.QTableWidget)(h))
}

// NewQTableWidget constructs a new QTableWidget object.
func NewQTableWidget(parent *QWidget) *QTableWidget {

	return newQTableWidget(C.QTableWidget_new(parent.cPointer()))
}

// NewQTableWidget2 constructs a new QTableWidget object.
func NewQTableWidget2() *QTableWidget {

	return newQTableWidget(C.QTableWidget_new2())
}

// NewQTableWidget3 constructs a new QTableWidget object.
func NewQTableWidget3(rows int, columns int) *QTableWidget {

	return newQTableWidget(C.QTableWidget_new3((C.int)(rows), (C.int)(columns)))
}

// NewQTableWidget4 constructs a new QTableWidget object.
func NewQTableWidget4(rows int, columns int, parent *QWidget) *QTableWidget {

	return newQTableWidget(C.QTableWidget_new4((C.int)(rows), (C.int)(columns), parent.cPointer()))
}

func (this *QTableWidget) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTableWidget_metaObject(this.h))
}

func (this *QTableWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTableWidget_metacast(this.h, param1_Cstring))
}

func QTableWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTableWidget_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTableWidget) SetRowCount(rows int) {
	C.QTableWidget_setRowCount(this.h, (C.int)(rows))
}

func (this *QTableWidget) RowCount() int {
	return (int)(C.QTableWidget_rowCount(this.h))
}

func (this *QTableWidget) SetColumnCount(columns int) {
	C.QTableWidget_setColumnCount(this.h, (C.int)(columns))
}

func (this *QTableWidget) ColumnCount() int {
	return (int)(C.QTableWidget_columnCount(this.h))
}

func (this *QTableWidget) Row(item *QTableWidgetItem) int {
	return (int)(C.QTableWidget_row(this.h, item.cPointer()))
}

func (this *QTableWidget) Column(item *QTableWidgetItem) int {
	return (int)(C.QTableWidget_column(this.h, item.cPointer()))
}

func (this *QTableWidget) Item(row int, column int) *QTableWidgetItem {
	return newQTableWidgetItem(C.QTableWidget_item(this.h, (C.int)(row), (C.int)(column)))
}

func (this *QTableWidget) SetItem(row int, column int, item *QTableWidgetItem) {
	C.QTableWidget_setItem(this.h, (C.int)(row), (C.int)(column), item.cPointer())
}

func (this *QTableWidget) TakeItem(row int, column int) *QTableWidgetItem {
	return newQTableWidgetItem(C.QTableWidget_takeItem(this.h, (C.int)(row), (C.int)(column)))
}

func (this *QTableWidget) Items(data *QMimeData) []*QTableWidgetItem {
	var _ma C.struct_miqt_array = C.QTableWidget_items(this.h, data.cPointer())
	_ret := make([]*QTableWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QTableWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQTableWidgetItem(_outCast[i])
	}
	return _ret
}

func (this *QTableWidget) IndexFromItem(item *QTableWidgetItem) *QModelIndex {
	_goptr := newQModelIndex(C.QTableWidget_indexFromItem(this.h, item.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableWidget) ItemFromIndex(index *QModelIndex) *QTableWidgetItem {
	return newQTableWidgetItem(C.QTableWidget_itemFromIndex(this.h, index.cPointer()))
}

func (this *QTableWidget) VerticalHeaderItem(row int) *QTableWidgetItem {
	return newQTableWidgetItem(C.QTableWidget_verticalHeaderItem(this.h, (C.int)(row)))
}

func (this *QTableWidget) SetVerticalHeaderItem(row int, item *QTableWidgetItem) {
	C.QTableWidget_setVerticalHeaderItem(this.h, (C.int)(row), item.cPointer())
}

func (this *QTableWidget) TakeVerticalHeaderItem(row int) *QTableWidgetItem {
	return newQTableWidgetItem(C.QTableWidget_takeVerticalHeaderItem(this.h, (C.int)(row)))
}

func (this *QTableWidget) HorizontalHeaderItem(column int) *QTableWidgetItem {
	return newQTableWidgetItem(C.QTableWidget_horizontalHeaderItem(this.h, (C.int)(column)))
}

func (this *QTableWidget) SetHorizontalHeaderItem(column int, item *QTableWidgetItem) {
	C.QTableWidget_setHorizontalHeaderItem(this.h, (C.int)(column), item.cPointer())
}

func (this *QTableWidget) TakeHorizontalHeaderItem(column int) *QTableWidgetItem {
	return newQTableWidgetItem(C.QTableWidget_takeHorizontalHeaderItem(this.h, (C.int)(column)))
}

func (this *QTableWidget) SetVerticalHeaderLabels(labels []string) {
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
	C.QTableWidget_setVerticalHeaderLabels(this.h, labels_ma)
}

func (this *QTableWidget) SetHorizontalHeaderLabels(labels []string) {
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
	C.QTableWidget_setHorizontalHeaderLabels(this.h, labels_ma)
}

func (this *QTableWidget) CurrentRow() int {
	return (int)(C.QTableWidget_currentRow(this.h))
}

func (this *QTableWidget) CurrentColumn() int {
	return (int)(C.QTableWidget_currentColumn(this.h))
}

func (this *QTableWidget) CurrentItem() *QTableWidgetItem {
	return newQTableWidgetItem(C.QTableWidget_currentItem(this.h))
}

func (this *QTableWidget) SetCurrentItem(item *QTableWidgetItem) {
	C.QTableWidget_setCurrentItem(this.h, item.cPointer())
}

func (this *QTableWidget) SetCurrentItem2(item *QTableWidgetItem, command QItemSelectionModel__SelectionFlag) {
	C.QTableWidget_setCurrentItem2(this.h, item.cPointer(), (C.int)(command))
}

func (this *QTableWidget) SetCurrentCell(row int, column int) {
	C.QTableWidget_setCurrentCell(this.h, (C.int)(row), (C.int)(column))
}

func (this *QTableWidget) SetCurrentCell2(row int, column int, command QItemSelectionModel__SelectionFlag) {
	C.QTableWidget_setCurrentCell2(this.h, (C.int)(row), (C.int)(column), (C.int)(command))
}

func (this *QTableWidget) SortItems(column int) {
	C.QTableWidget_sortItems(this.h, (C.int)(column))
}

func (this *QTableWidget) SetSortingEnabled(enable bool) {
	C.QTableWidget_setSortingEnabled(this.h, (C.bool)(enable))
}

func (this *QTableWidget) IsSortingEnabled() bool {
	return (bool)(C.QTableWidget_isSortingEnabled(this.h))
}

func (this *QTableWidget) EditItem(item *QTableWidgetItem) {
	C.QTableWidget_editItem(this.h, item.cPointer())
}

func (this *QTableWidget) OpenPersistentEditor(item *QTableWidgetItem) {
	C.QTableWidget_openPersistentEditor(this.h, item.cPointer())
}

func (this *QTableWidget) ClosePersistentEditor(item *QTableWidgetItem) {
	C.QTableWidget_closePersistentEditor(this.h, item.cPointer())
}

func (this *QTableWidget) IsPersistentEditorOpen(item *QTableWidgetItem) bool {
	return (bool)(C.QTableWidget_isPersistentEditorOpen(this.h, item.cPointer()))
}

func (this *QTableWidget) CellWidget(row int, column int) *QWidget {
	return newQWidget(C.QTableWidget_cellWidget(this.h, (C.int)(row), (C.int)(column)))
}

func (this *QTableWidget) SetCellWidget(row int, column int, widget *QWidget) {
	C.QTableWidget_setCellWidget(this.h, (C.int)(row), (C.int)(column), widget.cPointer())
}

func (this *QTableWidget) RemoveCellWidget(row int, column int) {
	C.QTableWidget_removeCellWidget(this.h, (C.int)(row), (C.int)(column))
}

func (this *QTableWidget) SetRangeSelected(rangeVal *QTableWidgetSelectionRange, selectVal bool) {
	C.QTableWidget_setRangeSelected(this.h, rangeVal.cPointer(), (C.bool)(selectVal))
}

func (this *QTableWidget) SelectedRanges() []QTableWidgetSelectionRange {
	var _ma C.struct_miqt_array = C.QTableWidget_selectedRanges(this.h)
	_ret := make([]QTableWidgetSelectionRange, int(_ma.len))
	_outCast := (*[0xffff]*C.QTableWidgetSelectionRange)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQTableWidgetSelectionRange(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QTableWidget) SelectedItems() []*QTableWidgetItem {
	var _ma C.struct_miqt_array = C.QTableWidget_selectedItems(this.h)
	_ret := make([]*QTableWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QTableWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQTableWidgetItem(_outCast[i])
	}
	return _ret
}

func (this *QTableWidget) FindItems(text string, flags MatchFlag) []*QTableWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ma C.struct_miqt_array = C.QTableWidget_findItems(this.h, text_ms, (C.int)(flags))
	_ret := make([]*QTableWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QTableWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQTableWidgetItem(_outCast[i])
	}
	return _ret
}

func (this *QTableWidget) VisualRow(logicalRow int) int {
	return (int)(C.QTableWidget_visualRow(this.h, (C.int)(logicalRow)))
}

func (this *QTableWidget) VisualColumn(logicalColumn int) int {
	return (int)(C.QTableWidget_visualColumn(this.h, (C.int)(logicalColumn)))
}

func (this *QTableWidget) ItemAt(p *QPoint) *QTableWidgetItem {
	return newQTableWidgetItem(C.QTableWidget_itemAt(this.h, p.cPointer()))
}

func (this *QTableWidget) ItemAt2(x int, y int) *QTableWidgetItem {
	return newQTableWidgetItem(C.QTableWidget_itemAt2(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QTableWidget) VisualItemRect(item *QTableWidgetItem) *QRect {
	_goptr := newQRect(C.QTableWidget_visualItemRect(this.h, item.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTableWidget) ItemPrototype() *QTableWidgetItem {
	return newQTableWidgetItem(C.QTableWidget_itemPrototype(this.h))
}

func (this *QTableWidget) SetItemPrototype(item *QTableWidgetItem) {
	C.QTableWidget_setItemPrototype(this.h, item.cPointer())
}

func (this *QTableWidget) ScrollToItem(item *QTableWidgetItem) {
	C.QTableWidget_scrollToItem(this.h, item.cPointer())
}

func (this *QTableWidget) InsertRow(row int) {
	C.QTableWidget_insertRow(this.h, (C.int)(row))
}

func (this *QTableWidget) InsertColumn(column int) {
	C.QTableWidget_insertColumn(this.h, (C.int)(column))
}

func (this *QTableWidget) RemoveRow(row int) {
	C.QTableWidget_removeRow(this.h, (C.int)(row))
}

func (this *QTableWidget) RemoveColumn(column int) {
	C.QTableWidget_removeColumn(this.h, (C.int)(column))
}

func (this *QTableWidget) Clear() {
	C.QTableWidget_clear(this.h)
}

func (this *QTableWidget) ClearContents() {
	C.QTableWidget_clearContents(this.h)
}

func (this *QTableWidget) ItemPressed(item *QTableWidgetItem) {
	C.QTableWidget_itemPressed(this.h, item.cPointer())
}
func (this *QTableWidget) OnItemPressed(slot func(item *QTableWidgetItem)) {
	C.QTableWidget_connect_itemPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTableWidget_itemPressed
func miqt_exec_callback_QTableWidget_itemPressed(cb C.intptr_t, item *C.QTableWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTableWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTableWidgetItem(item)

	gofunc(slotval1)
}

func (this *QTableWidget) ItemClicked(item *QTableWidgetItem) {
	C.QTableWidget_itemClicked(this.h, item.cPointer())
}
func (this *QTableWidget) OnItemClicked(slot func(item *QTableWidgetItem)) {
	C.QTableWidget_connect_itemClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTableWidget_itemClicked
func miqt_exec_callback_QTableWidget_itemClicked(cb C.intptr_t, item *C.QTableWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTableWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTableWidgetItem(item)

	gofunc(slotval1)
}

func (this *QTableWidget) ItemDoubleClicked(item *QTableWidgetItem) {
	C.QTableWidget_itemDoubleClicked(this.h, item.cPointer())
}
func (this *QTableWidget) OnItemDoubleClicked(slot func(item *QTableWidgetItem)) {
	C.QTableWidget_connect_itemDoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTableWidget_itemDoubleClicked
func miqt_exec_callback_QTableWidget_itemDoubleClicked(cb C.intptr_t, item *C.QTableWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTableWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTableWidgetItem(item)

	gofunc(slotval1)
}

func (this *QTableWidget) ItemActivated(item *QTableWidgetItem) {
	C.QTableWidget_itemActivated(this.h, item.cPointer())
}
func (this *QTableWidget) OnItemActivated(slot func(item *QTableWidgetItem)) {
	C.QTableWidget_connect_itemActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTableWidget_itemActivated
func miqt_exec_callback_QTableWidget_itemActivated(cb C.intptr_t, item *C.QTableWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTableWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTableWidgetItem(item)

	gofunc(slotval1)
}

func (this *QTableWidget) ItemEntered(item *QTableWidgetItem) {
	C.QTableWidget_itemEntered(this.h, item.cPointer())
}
func (this *QTableWidget) OnItemEntered(slot func(item *QTableWidgetItem)) {
	C.QTableWidget_connect_itemEntered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTableWidget_itemEntered
func miqt_exec_callback_QTableWidget_itemEntered(cb C.intptr_t, item *C.QTableWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTableWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTableWidgetItem(item)

	gofunc(slotval1)
}

func (this *QTableWidget) ItemChanged(item *QTableWidgetItem) {
	C.QTableWidget_itemChanged(this.h, item.cPointer())
}
func (this *QTableWidget) OnItemChanged(slot func(item *QTableWidgetItem)) {
	C.QTableWidget_connect_itemChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTableWidget_itemChanged
func miqt_exec_callback_QTableWidget_itemChanged(cb C.intptr_t, item *C.QTableWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTableWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTableWidgetItem(item)

	gofunc(slotval1)
}

func (this *QTableWidget) CurrentItemChanged(current *QTableWidgetItem, previous *QTableWidgetItem) {
	C.QTableWidget_currentItemChanged(this.h, current.cPointer(), previous.cPointer())
}
func (this *QTableWidget) OnCurrentItemChanged(slot func(current *QTableWidgetItem, previous *QTableWidgetItem)) {
	C.QTableWidget_connect_currentItemChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTableWidget_currentItemChanged
func miqt_exec_callback_QTableWidget_currentItemChanged(cb C.intptr_t, current *C.QTableWidgetItem, previous *C.QTableWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(current *QTableWidgetItem, previous *QTableWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTableWidgetItem(current)

	slotval2 := newQTableWidgetItem(previous)

	gofunc(slotval1, slotval2)
}

func (this *QTableWidget) ItemSelectionChanged() {
	C.QTableWidget_itemSelectionChanged(this.h)
}
func (this *QTableWidget) OnItemSelectionChanged(slot func()) {
	C.QTableWidget_connect_itemSelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTableWidget_itemSelectionChanged
func miqt_exec_callback_QTableWidget_itemSelectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTableWidget) CellPressed(row int, column int) {
	C.QTableWidget_cellPressed(this.h, (C.int)(row), (C.int)(column))
}
func (this *QTableWidget) OnCellPressed(slot func(row int, column int)) {
	C.QTableWidget_connect_cellPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTableWidget_cellPressed
func miqt_exec_callback_QTableWidget_cellPressed(cb C.intptr_t, row C.int, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(row int, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	gofunc(slotval1, slotval2)
}

func (this *QTableWidget) CellClicked(row int, column int) {
	C.QTableWidget_cellClicked(this.h, (C.int)(row), (C.int)(column))
}
func (this *QTableWidget) OnCellClicked(slot func(row int, column int)) {
	C.QTableWidget_connect_cellClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTableWidget_cellClicked
func miqt_exec_callback_QTableWidget_cellClicked(cb C.intptr_t, row C.int, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(row int, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	gofunc(slotval1, slotval2)
}

func (this *QTableWidget) CellDoubleClicked(row int, column int) {
	C.QTableWidget_cellDoubleClicked(this.h, (C.int)(row), (C.int)(column))
}
func (this *QTableWidget) OnCellDoubleClicked(slot func(row int, column int)) {
	C.QTableWidget_connect_cellDoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTableWidget_cellDoubleClicked
func miqt_exec_callback_QTableWidget_cellDoubleClicked(cb C.intptr_t, row C.int, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(row int, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	gofunc(slotval1, slotval2)
}

func (this *QTableWidget) CellActivated(row int, column int) {
	C.QTableWidget_cellActivated(this.h, (C.int)(row), (C.int)(column))
}
func (this *QTableWidget) OnCellActivated(slot func(row int, column int)) {
	C.QTableWidget_connect_cellActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTableWidget_cellActivated
func miqt_exec_callback_QTableWidget_cellActivated(cb C.intptr_t, row C.int, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(row int, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	gofunc(slotval1, slotval2)
}

func (this *QTableWidget) CellEntered(row int, column int) {
	C.QTableWidget_cellEntered(this.h, (C.int)(row), (C.int)(column))
}
func (this *QTableWidget) OnCellEntered(slot func(row int, column int)) {
	C.QTableWidget_connect_cellEntered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTableWidget_cellEntered
func miqt_exec_callback_QTableWidget_cellEntered(cb C.intptr_t, row C.int, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(row int, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	gofunc(slotval1, slotval2)
}

func (this *QTableWidget) CellChanged(row int, column int) {
	C.QTableWidget_cellChanged(this.h, (C.int)(row), (C.int)(column))
}
func (this *QTableWidget) OnCellChanged(slot func(row int, column int)) {
	C.QTableWidget_connect_cellChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTableWidget_cellChanged
func miqt_exec_callback_QTableWidget_cellChanged(cb C.intptr_t, row C.int, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(row int, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	gofunc(slotval1, slotval2)
}

func (this *QTableWidget) CurrentCellChanged(currentRow int, currentColumn int, previousRow int, previousColumn int) {
	C.QTableWidget_currentCellChanged(this.h, (C.int)(currentRow), (C.int)(currentColumn), (C.int)(previousRow), (C.int)(previousColumn))
}
func (this *QTableWidget) OnCurrentCellChanged(slot func(currentRow int, currentColumn int, previousRow int, previousColumn int)) {
	C.QTableWidget_connect_currentCellChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTableWidget_currentCellChanged
func miqt_exec_callback_QTableWidget_currentCellChanged(cb C.intptr_t, currentRow C.int, currentColumn C.int, previousRow C.int, previousColumn C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(currentRow int, currentColumn int, previousRow int, previousColumn int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(currentRow)

	slotval2 := (int)(currentColumn)

	slotval3 := (int)(previousRow)

	slotval4 := (int)(previousColumn)

	gofunc(slotval1, slotval2, slotval3, slotval4)
}

func QTableWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTableWidget_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTableWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTableWidget_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTableWidget) SortItems2(column int, order SortOrder) {
	C.QTableWidget_sortItems2(this.h, (C.int)(column), (C.int)(order))
}

func (this *QTableWidget) ScrollToItem2(item *QTableWidgetItem, hint QAbstractItemView__ScrollHint) {
	C.QTableWidget_scrollToItem2(this.h, item.cPointer(), (C.int)(hint))
}

// RowMoved can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) RowMoved(row int, oldIndex int, newIndex int) {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_rowMoved(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(oldIndex), (C.int)(newIndex))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ColumnMoved can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) ColumnMoved(column int, oldIndex int, newIndex int) {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_columnMoved(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(column), (C.int)(oldIndex), (C.int)(newIndex))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RowResized can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) RowResized(row int, oldHeight int, newHeight int) {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_rowResized(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(row), (C.int)(oldHeight), (C.int)(newHeight))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ColumnResized can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) ColumnResized(column int, oldWidth int, newWidth int) {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_columnResized(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(column), (C.int)(oldWidth), (C.int)(newWidth))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RowCountChanged can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) RowCountChanged(oldCount int, newCount int) {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_rowCountChanged(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(oldCount), (C.int)(newCount))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ColumnCountChanged can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) ColumnCountChanged(oldCount int, newCount int) {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_columnCountChanged(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(oldCount), (C.int)(newCount))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// State can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) State() QAbstractItemView__State {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (QAbstractItemView__State)(C.QTableWidget_protectedbase_state(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetState can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) SetState(state QAbstractItemView__State) {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_setState(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(state))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ScheduleDelayedItemsLayout can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) ScheduleDelayedItemsLayout() {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_scheduleDelayedItemsLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ExecuteDelayedItemsLayout can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) ExecuteDelayedItemsLayout() {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_executeDelayedItemsLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetDirtyRegion can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) SetDirtyRegion(region *QRegion) {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_setDirtyRegion(&_dynamic_cast_ok, unsafe.Pointer(this.h), region.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ScrollDirtyRegion can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) ScrollDirtyRegion(dx int, dy int) {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_scrollDirtyRegion(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DirtyRegionOffset can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) DirtyRegionOffset() QPoint {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQPoint(C.QTableWidget_protectedbase_dirtyRegionOffset(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// StartAutoScroll can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) StartAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_startAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// StopAutoScroll can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) StopAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_stopAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DoAutoScroll can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) DoAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_doAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DropIndicatorPosition can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) DropIndicatorPosition() QAbstractItemView__DropIndicatorPosition {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (QAbstractItemView__DropIndicatorPosition)(C.QTableWidget_protectedbase_dropIndicatorPosition(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetViewportMargins can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) SetViewportMargins(left int, top int, right int, bottom int) {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_setViewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ViewportMargins can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) ViewportMargins() QMargins {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQMargins(C.QTableWidget_protectedbase_viewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DrawFrame can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) DrawFrame(param1 *QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QTableWidget_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTableWidget_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTableWidget_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QTableWidget_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTableWidget_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTableWidget_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QTableWidget that was directly constructed.
func (this *QTableWidget) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTableWidget_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QTableWidget) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QTableWidget_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QTableWidget) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QTableWidget_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_event
func miqt_exec_callback_QTableWidget_event(self *C.QTableWidget, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTableWidget) callVirtualBase_MimeTypes() []string {

	var _ma C.struct_miqt_array = C.QTableWidget_virtualbase_mimeTypes(unsafe.Pointer(this.h))
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
func (this *QTableWidget) OnMimeTypes(slot func(super func() []string) []string) {
	ok := C.QTableWidget_override_virtual_mimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_mimeTypes
func miqt_exec_callback_QTableWidget_mimeTypes(self *C.QTableWidget, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_MimeTypes)
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

func (this *QTableWidget) callVirtualBase_MimeData(items []*QTableWidgetItem) *QMimeData {
	items_CArray := (*[0xffff]*C.QTableWidgetItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}

	return newQMimeData(C.QTableWidget_virtualbase_mimeData(unsafe.Pointer(this.h), items_ma))

}
func (this *QTableWidget) OnMimeData(slot func(super func(items []*QTableWidgetItem) *QMimeData, items []*QTableWidgetItem) *QMimeData) {
	ok := C.QTableWidget_override_virtual_mimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_mimeData
func miqt_exec_callback_QTableWidget_mimeData(self *C.QTableWidget, cb C.intptr_t, items C.struct_miqt_array) *C.QMimeData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(items []*QTableWidgetItem) *QMimeData, items []*QTableWidgetItem) *QMimeData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var items_ma C.struct_miqt_array = items
	items_ret := make([]*QTableWidgetItem, int(items_ma.len))
	items_outCast := (*[0xffff]*C.QTableWidgetItem)(unsafe.Pointer(items_ma.data)) // hey ya
	for i := 0; i < int(items_ma.len); i++ {
		items_ret[i] = newQTableWidgetItem(items_outCast[i])
	}
	slotval1 := items_ret

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_MimeData, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTableWidget) callVirtualBase_DropMimeData(row int, column int, data *QMimeData, action DropAction) bool {

	return (bool)(C.QTableWidget_virtualbase_dropMimeData(unsafe.Pointer(this.h), (C.int)(row), (C.int)(column), data.cPointer(), (C.int)(action)))

}
func (this *QTableWidget) OnDropMimeData(slot func(super func(row int, column int, data *QMimeData, action DropAction) bool, row int, column int, data *QMimeData, action DropAction) bool) {
	ok := C.QTableWidget_override_virtual_dropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_dropMimeData
func miqt_exec_callback_QTableWidget_dropMimeData(self *C.QTableWidget, cb C.intptr_t, row C.int, column C.int, data *C.QMimeData, action C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int, column int, data *QMimeData, action DropAction) bool, row int, column int, data *QMimeData, action DropAction) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	slotval2 := (int)(column)

	slotval3 := newQMimeData(data)

	slotval4 := (DropAction)(action)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_DropMimeData, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QTableWidget) callVirtualBase_SupportedDropActions() DropAction {

	return (DropAction)(C.QTableWidget_virtualbase_supportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QTableWidget) OnSupportedDropActions(slot func(super func() DropAction) DropAction) {
	ok := C.QTableWidget_override_virtual_supportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_supportedDropActions
func miqt_exec_callback_QTableWidget_supportedDropActions(self *C.QTableWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_SupportedDropActions)

	return (C.int)(virtualReturn)

}

func (this *QTableWidget) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QTableWidget_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QTableWidget_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_dropEvent
func miqt_exec_callback_QTableWidget_dropEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_SetRootIndex(index *QModelIndex) {

	C.QTableWidget_virtualbase_setRootIndex(unsafe.Pointer(this.h), index.cPointer())

}
func (this *QTableWidget) OnSetRootIndex(slot func(super func(index *QModelIndex), index *QModelIndex)) {
	ok := C.QTableWidget_override_virtual_setRootIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_setRootIndex
func miqt_exec_callback_QTableWidget_setRootIndex(self *C.QTableWidget, cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex), index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc((&QTableWidget{h: self}).callVirtualBase_SetRootIndex, slotval1)

}

func (this *QTableWidget) callVirtualBase_SetSelectionModel(selectionModel *QItemSelectionModel) {

	C.QTableWidget_virtualbase_setSelectionModel(unsafe.Pointer(this.h), selectionModel.cPointer())

}
func (this *QTableWidget) OnSetSelectionModel(slot func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel)) {
	ok := C.QTableWidget_override_virtual_setSelectionModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_setSelectionModel
func miqt_exec_callback_QTableWidget_setSelectionModel(self *C.QTableWidget, cb C.intptr_t, selectionModel *C.QItemSelectionModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelectionModel(selectionModel)

	gofunc((&QTableWidget{h: self}).callVirtualBase_SetSelectionModel, slotval1)

}

func (this *QTableWidget) callVirtualBase_DoItemsLayout() {

	C.QTableWidget_virtualbase_doItemsLayout(unsafe.Pointer(this.h))

}
func (this *QTableWidget) OnDoItemsLayout(slot func(super func())) {
	ok := C.QTableWidget_override_virtual_doItemsLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_doItemsLayout
func miqt_exec_callback_QTableWidget_doItemsLayout(self *C.QTableWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTableWidget{h: self}).callVirtualBase_DoItemsLayout)

}

func (this *QTableWidget) callVirtualBase_VisualRect(index *QModelIndex) *QRect {

	_goptr := newQRect(C.QTableWidget_virtualbase_visualRect(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTableWidget) OnVisualRect(slot func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect) {
	ok := C.QTableWidget_override_virtual_visualRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_visualRect
func miqt_exec_callback_QTableWidget_visualRect(self *C.QTableWidget, cb C.intptr_t, index *C.QModelIndex) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_VisualRect, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTableWidget) callVirtualBase_ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {

	C.QTableWidget_virtualbase_scrollTo(unsafe.Pointer(this.h), index.cPointer(), (C.int)(hint))

}
func (this *QTableWidget) OnScrollTo(slot func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint)) {
	ok := C.QTableWidget_override_virtual_scrollTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_scrollTo
func miqt_exec_callback_QTableWidget_scrollTo(self *C.QTableWidget, cb C.intptr_t, index *C.QModelIndex, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__ScrollHint)(hint)

	gofunc((&QTableWidget{h: self}).callVirtualBase_ScrollTo, slotval1, slotval2)

}

func (this *QTableWidget) callVirtualBase_IndexAt(p *QPoint) *QModelIndex {

	_goptr := newQModelIndex(C.QTableWidget_virtualbase_indexAt(unsafe.Pointer(this.h), p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTableWidget) OnIndexAt(slot func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex) {
	ok := C.QTableWidget_override_virtual_indexAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_indexAt
func miqt_exec_callback_QTableWidget_indexAt(self *C.QTableWidget, cb C.intptr_t, p *C.QPoint) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(p)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_IndexAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTableWidget) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QTableWidget_virtualbase_scrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QTableWidget) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QTableWidget_override_virtual_scrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_scrollContentsBy
func miqt_exec_callback_QTableWidget_scrollContentsBy(self *C.QTableWidget, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QTableWidget{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QTableWidget) callVirtualBase_InitViewItemOption(option *QStyleOptionViewItem) {

	C.QTableWidget_virtualbase_initViewItemOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QTableWidget) OnInitViewItemOption(slot func(super func(option *QStyleOptionViewItem), option *QStyleOptionViewItem)) {
	ok := C.QTableWidget_override_virtual_initViewItemOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_initViewItemOption
func miqt_exec_callback_QTableWidget_initViewItemOption(self *C.QTableWidget, cb C.intptr_t, option *C.QStyleOptionViewItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionViewItem), option *QStyleOptionViewItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionViewItem(option)

	gofunc((&QTableWidget{h: self}).callVirtualBase_InitViewItemOption, slotval1)

}

func (this *QTableWidget) callVirtualBase_PaintEvent(e *QPaintEvent) {

	C.QTableWidget_virtualbase_paintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTableWidget) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	ok := C.QTableWidget_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_paintEvent
func miqt_exec_callback_QTableWidget_paintEvent(self *C.QTableWidget, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(e)

	gofunc((&QTableWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTableWidget_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTableWidget_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_timerEvent
func miqt_exec_callback_QTableWidget_timerEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_HorizontalOffset() int {

	return (int)(C.QTableWidget_virtualbase_horizontalOffset(unsafe.Pointer(this.h)))

}
func (this *QTableWidget) OnHorizontalOffset(slot func(super func() int) int) {
	ok := C.QTableWidget_override_virtual_horizontalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_horizontalOffset
func miqt_exec_callback_QTableWidget_horizontalOffset(self *C.QTableWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_HorizontalOffset)

	return (C.int)(virtualReturn)

}

func (this *QTableWidget) callVirtualBase_VerticalOffset() int {

	return (int)(C.QTableWidget_virtualbase_verticalOffset(unsafe.Pointer(this.h)))

}
func (this *QTableWidget) OnVerticalOffset(slot func(super func() int) int) {
	ok := C.QTableWidget_override_virtual_verticalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_verticalOffset
func miqt_exec_callback_QTableWidget_verticalOffset(self *C.QTableWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_VerticalOffset)

	return (C.int)(virtualReturn)

}

func (this *QTableWidget) callVirtualBase_MoveCursor(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex {

	_goptr := newQModelIndex(C.QTableWidget_virtualbase_moveCursor(unsafe.Pointer(this.h), (C.int)(cursorAction), (C.int)(modifiers)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTableWidget) OnMoveCursor(slot func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex) {
	ok := C.QTableWidget_override_virtual_moveCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_moveCursor
func miqt_exec_callback_QTableWidget_moveCursor(self *C.QTableWidget, cb C.intptr_t, cursorAction C.int, modifiers C.int) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractItemView__CursorAction)(cursorAction)

	slotval2 := (KeyboardModifier)(modifiers)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_MoveCursor, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QTableWidget) callVirtualBase_SetSelection(rect *QRect, command QItemSelectionModel__SelectionFlag) {

	C.QTableWidget_virtualbase_setSelection(unsafe.Pointer(this.h), rect.cPointer(), (C.int)(command))

}
func (this *QTableWidget) OnSetSelection(slot func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag)) {
	ok := C.QTableWidget_override_virtual_setSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_setSelection
func miqt_exec_callback_QTableWidget_setSelection(self *C.QTableWidget, cb C.intptr_t, rect *C.QRect, command C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(rect)

	slotval2 := (QItemSelectionModel__SelectionFlag)(command)

	gofunc((&QTableWidget{h: self}).callVirtualBase_SetSelection, slotval1, slotval2)

}

func (this *QTableWidget) callVirtualBase_VisualRegionForSelection(selection *QItemSelection) *QRegion {

	_goptr := newQRegion(C.QTableWidget_virtualbase_visualRegionForSelection(unsafe.Pointer(this.h), selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTableWidget) OnVisualRegionForSelection(slot func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion) {
	ok := C.QTableWidget_override_virtual_visualRegionForSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_visualRegionForSelection
func miqt_exec_callback_QTableWidget_visualRegionForSelection(self *C.QTableWidget, cb C.intptr_t, selection *C.QItemSelection) *C.QRegion {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selection)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_VisualRegionForSelection, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTableWidget) callVirtualBase_SelectedIndexes() []QModelIndex {

	var _ma C.struct_miqt_array = C.QTableWidget_virtualbase_selectedIndexes(unsafe.Pointer(this.h))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QTableWidget) OnSelectedIndexes(slot func(super func() []QModelIndex) []QModelIndex) {
	ok := C.QTableWidget_override_virtual_selectedIndexes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_selectedIndexes
func miqt_exec_callback_QTableWidget_selectedIndexes(self *C.QTableWidget, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []QModelIndex) []QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_SelectedIndexes)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QTableWidget) callVirtualBase_UpdateGeometries() {

	C.QTableWidget_virtualbase_updateGeometries(unsafe.Pointer(this.h))

}
func (this *QTableWidget) OnUpdateGeometries(slot func(super func())) {
	ok := C.QTableWidget_override_virtual_updateGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_updateGeometries
func miqt_exec_callback_QTableWidget_updateGeometries(self *C.QTableWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTableWidget{h: self}).callVirtualBase_UpdateGeometries)

}

func (this *QTableWidget) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QTableWidget_virtualbase_viewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTableWidget) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTableWidget_override_virtual_viewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_viewportSizeHint
func miqt_exec_callback_QTableWidget_viewportSizeHint(self *C.QTableWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTableWidget) callVirtualBase_SizeHintForRow(row int) int {

	return (int)(C.QTableWidget_virtualbase_sizeHintForRow(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QTableWidget) OnSizeHintForRow(slot func(super func(row int) int, row int) int) {
	ok := C.QTableWidget_override_virtual_sizeHintForRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_sizeHintForRow
func miqt_exec_callback_QTableWidget_sizeHintForRow(self *C.QTableWidget, cb C.intptr_t, row C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int) int, row int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_SizeHintForRow, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTableWidget) callVirtualBase_SizeHintForColumn(column int) int {

	return (int)(C.QTableWidget_virtualbase_sizeHintForColumn(unsafe.Pointer(this.h), (C.int)(column)))

}
func (this *QTableWidget) OnSizeHintForColumn(slot func(super func(column int) int, column int) int) {
	ok := C.QTableWidget_override_virtual_sizeHintForColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_sizeHintForColumn
func miqt_exec_callback_QTableWidget_sizeHintForColumn(self *C.QTableWidget, cb C.intptr_t, column C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int) int, column int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_SizeHintForColumn, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTableWidget) callVirtualBase_VerticalScrollbarAction(action int) {

	C.QTableWidget_virtualbase_verticalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QTableWidget) OnVerticalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QTableWidget_override_virtual_verticalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_verticalScrollbarAction
func miqt_exec_callback_QTableWidget_verticalScrollbarAction(self *C.QTableWidget, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QTableWidget{h: self}).callVirtualBase_VerticalScrollbarAction, slotval1)

}

func (this *QTableWidget) callVirtualBase_HorizontalScrollbarAction(action int) {

	C.QTableWidget_virtualbase_horizontalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QTableWidget) OnHorizontalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QTableWidget_override_virtual_horizontalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_horizontalScrollbarAction
func miqt_exec_callback_QTableWidget_horizontalScrollbarAction(self *C.QTableWidget, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QTableWidget{h: self}).callVirtualBase_HorizontalScrollbarAction, slotval1)

}

func (this *QTableWidget) callVirtualBase_IsIndexHidden(index *QModelIndex) bool {

	return (bool)(C.QTableWidget_virtualbase_isIndexHidden(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QTableWidget) OnIsIndexHidden(slot func(super func(index *QModelIndex) bool, index *QModelIndex) bool) {
	ok := C.QTableWidget_override_virtual_isIndexHidden(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_isIndexHidden
func miqt_exec_callback_QTableWidget_isIndexHidden(self *C.QTableWidget, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) bool, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_IsIndexHidden, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTableWidget) callVirtualBase_SelectionChanged(selected *QItemSelection, deselected *QItemSelection) {

	C.QTableWidget_virtualbase_selectionChanged(unsafe.Pointer(this.h), selected.cPointer(), deselected.cPointer())

}
func (this *QTableWidget) OnSelectionChanged(slot func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection)) {
	ok := C.QTableWidget_override_virtual_selectionChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_selectionChanged
func miqt_exec_callback_QTableWidget_selectionChanged(self *C.QTableWidget, cb C.intptr_t, selected *C.QItemSelection, deselected *C.QItemSelection) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selected)

	slotval2 := newQItemSelection(deselected)

	gofunc((&QTableWidget{h: self}).callVirtualBase_SelectionChanged, slotval1, slotval2)

}

func (this *QTableWidget) callVirtualBase_CurrentChanged(current *QModelIndex, previous *QModelIndex) {

	C.QTableWidget_virtualbase_currentChanged(unsafe.Pointer(this.h), current.cPointer(), previous.cPointer())

}
func (this *QTableWidget) OnCurrentChanged(slot func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex)) {
	ok := C.QTableWidget_override_virtual_currentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_currentChanged
func miqt_exec_callback_QTableWidget_currentChanged(self *C.QTableWidget, cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(current)

	slotval2 := newQModelIndex(previous)

	gofunc((&QTableWidget{h: self}).callVirtualBase_CurrentChanged, slotval1, slotval2)

}

func (this *QTableWidget) callVirtualBase_KeyboardSearch(search string) {
	search_ms := C.struct_miqt_string{}
	search_ms.data = C.CString(search)
	search_ms.len = C.size_t(len(search))
	defer C.free(unsafe.Pointer(search_ms.data))

	C.QTableWidget_virtualbase_keyboardSearch(unsafe.Pointer(this.h), search_ms)

}
func (this *QTableWidget) OnKeyboardSearch(slot func(super func(search string), search string)) {
	ok := C.QTableWidget_override_virtual_keyboardSearch(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_keyboardSearch
func miqt_exec_callback_QTableWidget_keyboardSearch(self *C.QTableWidget, cb C.intptr_t, search C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(search string), search string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var search_ms C.struct_miqt_string = search
	search_ret := C.GoStringN(search_ms.data, C.int(int64(search_ms.len)))
	C.free(unsafe.Pointer(search_ms.data))
	slotval1 := search_ret

	gofunc((&QTableWidget{h: self}).callVirtualBase_KeyboardSearch, slotval1)

}

func (this *QTableWidget) callVirtualBase_ItemDelegateForIndex(index *QModelIndex) *QAbstractItemDelegate {

	return newQAbstractItemDelegate(C.QTableWidget_virtualbase_itemDelegateForIndex(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QTableWidget) OnItemDelegateForIndex(slot func(super func(index *QModelIndex) *QAbstractItemDelegate, index *QModelIndex) *QAbstractItemDelegate) {
	ok := C.QTableWidget_override_virtual_itemDelegateForIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_itemDelegateForIndex
func miqt_exec_callback_QTableWidget_itemDelegateForIndex(self *C.QTableWidget, cb C.intptr_t, index *C.QModelIndex) *C.QAbstractItemDelegate {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QAbstractItemDelegate, index *QModelIndex) *QAbstractItemDelegate)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_ItemDelegateForIndex, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTableWidget) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QTableWidget_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTableWidget) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QTableWidget_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_inputMethodQuery
func miqt_exec_callback_QTableWidget_inputMethodQuery(self *C.QTableWidget, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTableWidget) callVirtualBase_Reset() {

	C.QTableWidget_virtualbase_reset(unsafe.Pointer(this.h))

}
func (this *QTableWidget) OnReset(slot func(super func())) {
	ok := C.QTableWidget_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_reset
func miqt_exec_callback_QTableWidget_reset(self *C.QTableWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTableWidget{h: self}).callVirtualBase_Reset)

}

func (this *QTableWidget) callVirtualBase_SelectAll() {

	C.QTableWidget_virtualbase_selectAll(unsafe.Pointer(this.h))

}
func (this *QTableWidget) OnSelectAll(slot func(super func())) {
	ok := C.QTableWidget_override_virtual_selectAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_selectAll
func miqt_exec_callback_QTableWidget_selectAll(self *C.QTableWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTableWidget{h: self}).callVirtualBase_SelectAll)

}

func (this *QTableWidget) callVirtualBase_DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	roles_ma := C.struct_miqt_array{len: C.size_t(len(roles)), data: unsafe.Pointer(roles_CArray)}

	C.QTableWidget_virtualbase_dataChanged(unsafe.Pointer(this.h), topLeft.cPointer(), bottomRight.cPointer(), roles_ma)

}
func (this *QTableWidget) OnDataChanged(slot func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int)) {
	ok := C.QTableWidget_override_virtual_dataChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_dataChanged
func miqt_exec_callback_QTableWidget_dataChanged(self *C.QTableWidget, cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(topLeft)

	slotval2 := newQModelIndex(bottomRight)

	var roles_ma C.struct_miqt_array = roles
	roles_ret := make([]int, int(roles_ma.len))
	roles_outCast := (*[0xffff]C.int)(unsafe.Pointer(roles_ma.data)) // hey ya
	for i := 0; i < int(roles_ma.len); i++ {
		roles_ret[i] = (int)(roles_outCast[i])
	}
	slotval3 := roles_ret

	gofunc((&QTableWidget{h: self}).callVirtualBase_DataChanged, slotval1, slotval2, slotval3)

}

func (this *QTableWidget) callVirtualBase_RowsInserted(parent *QModelIndex, start int, end int) {

	C.QTableWidget_virtualbase_rowsInserted(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QTableWidget) OnRowsInserted(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QTableWidget_override_virtual_rowsInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_rowsInserted
func miqt_exec_callback_QTableWidget_rowsInserted(self *C.QTableWidget, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QTableWidget{h: self}).callVirtualBase_RowsInserted, slotval1, slotval2, slotval3)

}

func (this *QTableWidget) callVirtualBase_RowsAboutToBeRemoved(parent *QModelIndex, start int, end int) {

	C.QTableWidget_virtualbase_rowsAboutToBeRemoved(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QTableWidget) OnRowsAboutToBeRemoved(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QTableWidget_override_virtual_rowsAboutToBeRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_rowsAboutToBeRemoved
func miqt_exec_callback_QTableWidget_rowsAboutToBeRemoved(self *C.QTableWidget, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QTableWidget{h: self}).callVirtualBase_RowsAboutToBeRemoved, slotval1, slotval2, slotval3)

}

func (this *QTableWidget) callVirtualBase_UpdateEditorData() {

	C.QTableWidget_virtualbase_updateEditorData(unsafe.Pointer(this.h))

}
func (this *QTableWidget) OnUpdateEditorData(slot func(super func())) {
	ok := C.QTableWidget_override_virtual_updateEditorData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_updateEditorData
func miqt_exec_callback_QTableWidget_updateEditorData(self *C.QTableWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTableWidget{h: self}).callVirtualBase_UpdateEditorData)

}

func (this *QTableWidget) callVirtualBase_UpdateEditorGeometries() {

	C.QTableWidget_virtualbase_updateEditorGeometries(unsafe.Pointer(this.h))

}
func (this *QTableWidget) OnUpdateEditorGeometries(slot func(super func())) {
	ok := C.QTableWidget_override_virtual_updateEditorGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_updateEditorGeometries
func miqt_exec_callback_QTableWidget_updateEditorGeometries(self *C.QTableWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTableWidget{h: self}).callVirtualBase_UpdateEditorGeometries)

}

func (this *QTableWidget) callVirtualBase_VerticalScrollbarValueChanged(value int) {

	C.QTableWidget_virtualbase_verticalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QTableWidget) OnVerticalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QTableWidget_override_virtual_verticalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_verticalScrollbarValueChanged
func miqt_exec_callback_QTableWidget_verticalScrollbarValueChanged(self *C.QTableWidget, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QTableWidget{h: self}).callVirtualBase_VerticalScrollbarValueChanged, slotval1)

}

func (this *QTableWidget) callVirtualBase_HorizontalScrollbarValueChanged(value int) {

	C.QTableWidget_virtualbase_horizontalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QTableWidget) OnHorizontalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QTableWidget_override_virtual_horizontalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_horizontalScrollbarValueChanged
func miqt_exec_callback_QTableWidget_horizontalScrollbarValueChanged(self *C.QTableWidget, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QTableWidget{h: self}).callVirtualBase_HorizontalScrollbarValueChanged, slotval1)

}

func (this *QTableWidget) callVirtualBase_CloseEditor(editor *QWidget, hint QAbstractItemDelegate__EndEditHint) {

	C.QTableWidget_virtualbase_closeEditor(unsafe.Pointer(this.h), editor.cPointer(), (C.int)(hint))

}
func (this *QTableWidget) OnCloseEditor(slot func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint)) {
	ok := C.QTableWidget_override_virtual_closeEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_closeEditor
func miqt_exec_callback_QTableWidget_closeEditor(self *C.QTableWidget, cb C.intptr_t, editor *C.QWidget, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := (QAbstractItemDelegate__EndEditHint)(hint)

	gofunc((&QTableWidget{h: self}).callVirtualBase_CloseEditor, slotval1, slotval2)

}

func (this *QTableWidget) callVirtualBase_CommitData(editor *QWidget) {

	C.QTableWidget_virtualbase_commitData(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QTableWidget) OnCommitData(slot func(super func(editor *QWidget), editor *QWidget)) {
	ok := C.QTableWidget_override_virtual_commitData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_commitData
func miqt_exec_callback_QTableWidget_commitData(self *C.QTableWidget, cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget), editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	gofunc((&QTableWidget{h: self}).callVirtualBase_CommitData, slotval1)

}

func (this *QTableWidget) callVirtualBase_EditorDestroyed(editor *QObject) {

	C.QTableWidget_virtualbase_editorDestroyed(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QTableWidget) OnEditorDestroyed(slot func(super func(editor *QObject), editor *QObject)) {
	ok := C.QTableWidget_override_virtual_editorDestroyed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_editorDestroyed
func miqt_exec_callback_QTableWidget_editorDestroyed(self *C.QTableWidget, cb C.intptr_t, editor *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QObject), editor *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(editor)

	gofunc((&QTableWidget{h: self}).callVirtualBase_EditorDestroyed, slotval1)

}

func (this *QTableWidget) callVirtualBase_Edit2(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool {

	return (bool)(C.QTableWidget_virtualbase_edit2(unsafe.Pointer(this.h), index.cPointer(), (C.int)(trigger), event.cPointer()))

}
func (this *QTableWidget) OnEdit2(slot func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool) {
	ok := C.QTableWidget_override_virtual_edit2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_edit2
func miqt_exec_callback_QTableWidget_edit2(self *C.QTableWidget, cb C.intptr_t, index *C.QModelIndex, trigger C.int, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__EditTrigger)(trigger)

	slotval3 := newQEvent(event)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_Edit2, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTableWidget) callVirtualBase_SelectionCommand(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag {

	return (QItemSelectionModel__SelectionFlag)(C.QTableWidget_virtualbase_selectionCommand(unsafe.Pointer(this.h), index.cPointer(), event.cPointer()))

}
func (this *QTableWidget) OnSelectionCommand(slot func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag) {
	ok := C.QTableWidget_override_virtual_selectionCommand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_selectionCommand
func miqt_exec_callback_QTableWidget_selectionCommand(self *C.QTableWidget, cb C.intptr_t, index *C.QModelIndex, event *C.QEvent) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_SelectionCommand, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QTableWidget) callVirtualBase_StartDrag(supportedActions DropAction) {

	C.QTableWidget_virtualbase_startDrag(unsafe.Pointer(this.h), (C.int)(supportedActions))

}
func (this *QTableWidget) OnStartDrag(slot func(super func(supportedActions DropAction), supportedActions DropAction)) {
	ok := C.QTableWidget_override_virtual_startDrag(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_startDrag
func miqt_exec_callback_QTableWidget_startDrag(self *C.QTableWidget, cb C.intptr_t, supportedActions C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(supportedActions DropAction), supportedActions DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(supportedActions)

	gofunc((&QTableWidget{h: self}).callVirtualBase_StartDrag, slotval1)

}

func (this *QTableWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QTableWidget_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QTableWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QTableWidget_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_focusNextPrevChild
func miqt_exec_callback_QTableWidget_focusNextPrevChild(self *C.QTableWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTableWidget) callVirtualBase_ViewportEvent(event *QEvent) bool {

	return (bool)(C.QTableWidget_virtualbase_viewportEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTableWidget) OnViewportEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTableWidget_override_virtual_viewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_viewportEvent
func miqt_exec_callback_QTableWidget_viewportEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTableWidget) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QTableWidget_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTableWidget_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_mousePressEvent
func miqt_exec_callback_QTableWidget_mousePressEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QTableWidget_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTableWidget_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_mouseMoveEvent
func miqt_exec_callback_QTableWidget_mouseMoveEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QTableWidget_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTableWidget_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_mouseReleaseEvent
func miqt_exec_callback_QTableWidget_mouseReleaseEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QTableWidget_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTableWidget_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_mouseDoubleClickEvent
func miqt_exec_callback_QTableWidget_mouseDoubleClickEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QTableWidget_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QTableWidget_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_dragEnterEvent
func miqt_exec_callback_QTableWidget_dragEnterEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QTableWidget_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QTableWidget_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_dragMoveEvent
func miqt_exec_callback_QTableWidget_dragMoveEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QTableWidget_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QTableWidget_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_dragLeaveEvent
func miqt_exec_callback_QTableWidget_dragLeaveEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QTableWidget_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QTableWidget_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_focusInEvent
func miqt_exec_callback_QTableWidget_focusInEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QTableWidget_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QTableWidget_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_focusOutEvent
func miqt_exec_callback_QTableWidget_focusOutEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QTableWidget_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QTableWidget_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_keyPressEvent
func miqt_exec_callback_QTableWidget_keyPressEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QTableWidget_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QTableWidget_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_resizeEvent
func miqt_exec_callback_QTableWidget_resizeEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QTableWidget_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QTableWidget_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_inputMethodEvent
func miqt_exec_callback_QTableWidget_inputMethodEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QTableWidget_virtualbase_eventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QTableWidget) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QTableWidget_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_eventFilter
func miqt_exec_callback_QTableWidget_eventFilter(self *C.QTableWidget, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTableWidget) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QTableWidget_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTableWidget) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTableWidget_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_minimumSizeHint
func miqt_exec_callback_QTableWidget_minimumSizeHint(self *C.QTableWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTableWidget) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QTableWidget_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTableWidget) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTableWidget_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_sizeHint
func miqt_exec_callback_QTableWidget_sizeHint(self *C.QTableWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QTableWidget) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QTableWidget_virtualbase_setupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QTableWidget) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QTableWidget_override_virtual_setupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_setupViewport
func miqt_exec_callback_QTableWidget_setupViewport(self *C.QTableWidget, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QTableWidget{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QTableWidget) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QTableWidget_virtualbase_wheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTableWidget) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QTableWidget_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_wheelEvent
func miqt_exec_callback_QTableWidget_wheelEvent(self *C.QTableWidget, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QTableWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QTableWidget_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTableWidget) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QTableWidget_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_contextMenuEvent
func miqt_exec_callback_QTableWidget_contextMenuEvent(self *C.QTableWidget, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QTableWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QTableWidget_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTableWidget) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QTableWidget_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_changeEvent
func miqt_exec_callback_QTableWidget_changeEvent(self *C.QTableWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QTableWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_InitStyleOption(option *QStyleOptionFrame) {

	C.QTableWidget_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QTableWidget) OnInitStyleOption(slot func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame)) {
	ok := C.QTableWidget_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_initStyleOption
func miqt_exec_callback_QTableWidget_initStyleOption(self *C.QTableWidget, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionFrame(option)

	gofunc((&QTableWidget{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QTableWidget) callVirtualBase_DevType() int {

	return (int)(C.QTableWidget_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QTableWidget) OnDevType(slot func(super func() int) int) {
	ok := C.QTableWidget_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_devType
func miqt_exec_callback_QTableWidget_devType(self *C.QTableWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QTableWidget) callVirtualBase_SetVisible(visible bool) {

	C.QTableWidget_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QTableWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QTableWidget_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_setVisible
func miqt_exec_callback_QTableWidget_setVisible(self *C.QTableWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QTableWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QTableWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QTableWidget_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTableWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QTableWidget_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_heightForWidth
func miqt_exec_callback_QTableWidget_heightForWidth(self *C.QTableWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTableWidget) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QTableWidget_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QTableWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QTableWidget_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_hasHeightForWidth
func miqt_exec_callback_QTableWidget_hasHeightForWidth(self *C.QTableWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QTableWidget) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QTableWidget_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QTableWidget) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QTableWidget_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_paintEngine
func miqt_exec_callback_QTableWidget_paintEngine(self *C.QTableWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QTableWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QTableWidget_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QTableWidget_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_keyReleaseEvent
func miqt_exec_callback_QTableWidget_keyReleaseEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QTableWidget_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QTableWidget_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_enterEvent
func miqt_exec_callback_QTableWidget_enterEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QTableWidget_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTableWidget_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_leaveEvent
func miqt_exec_callback_QTableWidget_leaveEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QTableWidget_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QTableWidget_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_moveEvent
func miqt_exec_callback_QTableWidget_moveEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QTableWidget_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QTableWidget_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_closeEvent
func miqt_exec_callback_QTableWidget_closeEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QTableWidget_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QTableWidget_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_tabletEvent
func miqt_exec_callback_QTableWidget_tabletEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QTableWidget_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QTableWidget_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_actionEvent
func miqt_exec_callback_QTableWidget_actionEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QTableWidget_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QTableWidget_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_showEvent
func miqt_exec_callback_QTableWidget_showEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QTableWidget_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QTableWidget_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_hideEvent
func miqt_exec_callback_QTableWidget_hideEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QTableWidget_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QTableWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QTableWidget_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_nativeEvent
func miqt_exec_callback_QTableWidget_nativeEvent(self *C.QTableWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTableWidget) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QTableWidget_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTableWidget) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QTableWidget_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_metric
func miqt_exec_callback_QTableWidget_metric(self *C.QTableWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTableWidget) callVirtualBase_InitPainter(painter *QPainter) {

	C.QTableWidget_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QTableWidget) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QTableWidget_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_initPainter
func miqt_exec_callback_QTableWidget_initPainter(self *C.QTableWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QTableWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QTableWidget) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QTableWidget_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QTableWidget) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QTableWidget_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_redirected
func miqt_exec_callback_QTableWidget_redirected(self *C.QTableWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTableWidget) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QTableWidget_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QTableWidget) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QTableWidget_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_sharedPainter
func miqt_exec_callback_QTableWidget_sharedPainter(self *C.QTableWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTableWidget{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QTableWidget) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTableWidget_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTableWidget_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_childEvent
func miqt_exec_callback_QTableWidget_childEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTableWidget_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTableWidget) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTableWidget_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_customEvent
func miqt_exec_callback_QTableWidget_customEvent(self *C.QTableWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTableWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTableWidget) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTableWidget_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTableWidget) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTableWidget_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_connectNotify
func miqt_exec_callback_QTableWidget_connectNotify(self *C.QTableWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTableWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTableWidget) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTableWidget_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTableWidget) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTableWidget_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTableWidget_disconnectNotify
func miqt_exec_callback_QTableWidget_disconnectNotify(self *C.QTableWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTableWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTableWidget) Delete() {
	C.QTableWidget_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTableWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QTableWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
