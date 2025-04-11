package qt6

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
	QListWidgetItem__Type     QListWidgetItem__ItemType = 0
	QListWidgetItem__UserType QListWidgetItem__ItemType = 1000
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

func (this *QListWidgetItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQListWidgetItem constructs the type using only CGO pointers.
func newQListWidgetItem(h *C.QListWidgetItem) *QListWidgetItem {
	if h == nil {
		return nil
	}

	return &QListWidgetItem{h: h}
}

// UnsafeNewQListWidgetItem constructs the type using only unsafe pointers.
func UnsafeNewQListWidgetItem(h unsafe.Pointer) *QListWidgetItem {
	return newQListWidgetItem((*C.QListWidgetItem)(h))
}

// NewQListWidgetItem constructs a new QListWidgetItem object.
func NewQListWidgetItem() *QListWidgetItem {

	return newQListWidgetItem(C.QListWidgetItem_new())
}

// NewQListWidgetItem2 constructs a new QListWidgetItem object.
func NewQListWidgetItem2(text string) *QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQListWidgetItem(C.QListWidgetItem_new2(text_ms))
}

// NewQListWidgetItem3 constructs a new QListWidgetItem object.
func NewQListWidgetItem3(icon *QIcon, text string) *QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQListWidgetItem(C.QListWidgetItem_new3(icon.cPointer(), text_ms))
}

// NewQListWidgetItem4 constructs a new QListWidgetItem object.
func NewQListWidgetItem4(other *QListWidgetItem) *QListWidgetItem {

	return newQListWidgetItem(C.QListWidgetItem_new4(other.cPointer()))
}

// NewQListWidgetItem5 constructs a new QListWidgetItem object.
func NewQListWidgetItem5(listview *QListWidget) *QListWidgetItem {

	return newQListWidgetItem(C.QListWidgetItem_new5(listview.cPointer()))
}

// NewQListWidgetItem6 constructs a new QListWidgetItem object.
func NewQListWidgetItem6(listview *QListWidget, typeVal int) *QListWidgetItem {

	return newQListWidgetItem(C.QListWidgetItem_new6(listview.cPointer(), (C.int)(typeVal)))
}

// NewQListWidgetItem7 constructs a new QListWidgetItem object.
func NewQListWidgetItem7(text string, listview *QListWidget) *QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQListWidgetItem(C.QListWidgetItem_new7(text_ms, listview.cPointer()))
}

// NewQListWidgetItem8 constructs a new QListWidgetItem object.
func NewQListWidgetItem8(text string, listview *QListWidget, typeVal int) *QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQListWidgetItem(C.QListWidgetItem_new8(text_ms, listview.cPointer(), (C.int)(typeVal)))
}

// NewQListWidgetItem9 constructs a new QListWidgetItem object.
func NewQListWidgetItem9(icon *QIcon, text string, listview *QListWidget) *QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQListWidgetItem(C.QListWidgetItem_new9(icon.cPointer(), text_ms, listview.cPointer()))
}

// NewQListWidgetItem10 constructs a new QListWidgetItem object.
func NewQListWidgetItem10(icon *QIcon, text string, listview *QListWidget, typeVal int) *QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQListWidgetItem(C.QListWidgetItem_new10(icon.cPointer(), text_ms, listview.cPointer(), (C.int)(typeVal)))
}

func (this *QListWidgetItem) Clone() *QListWidgetItem {
	return newQListWidgetItem(C.QListWidgetItem_clone(this.h))
}

func (this *QListWidgetItem) ListWidget() *QListWidget {
	return newQListWidget(C.QListWidgetItem_listWidget(this.h))
}

func (this *QListWidgetItem) SetSelected(selectVal bool) {
	C.QListWidgetItem_setSelected(this.h, (C.bool)(selectVal))
}

func (this *QListWidgetItem) IsSelected() bool {
	return (bool)(C.QListWidgetItem_isSelected(this.h))
}

func (this *QListWidgetItem) SetHidden(hide bool) {
	C.QListWidgetItem_setHidden(this.h, (C.bool)(hide))
}

func (this *QListWidgetItem) IsHidden() bool {
	return (bool)(C.QListWidgetItem_isHidden(this.h))
}

func (this *QListWidgetItem) Flags() ItemFlag {
	return (ItemFlag)(C.QListWidgetItem_flags(this.h))
}

func (this *QListWidgetItem) SetFlags(flags ItemFlag) {
	C.QListWidgetItem_setFlags(this.h, (C.int)(flags))
}

func (this *QListWidgetItem) Text() string {
	var _ms C.struct_miqt_string = C.QListWidgetItem_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidgetItem) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QListWidgetItem_setText(this.h, text_ms)
}

func (this *QListWidgetItem) Icon() *QIcon {
	_goptr := newQIcon(C.QListWidgetItem_icon(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetIcon(icon *QIcon) {
	C.QListWidgetItem_setIcon(this.h, icon.cPointer())
}

func (this *QListWidgetItem) StatusTip() string {
	var _ms C.struct_miqt_string = C.QListWidgetItem_statusTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidgetItem) SetStatusTip(statusTip string) {
	statusTip_ms := C.struct_miqt_string{}
	statusTip_ms.data = C.CString(statusTip)
	statusTip_ms.len = C.size_t(len(statusTip))
	defer C.free(unsafe.Pointer(statusTip_ms.data))
	C.QListWidgetItem_setStatusTip(this.h, statusTip_ms)
}

func (this *QListWidgetItem) ToolTip() string {
	var _ms C.struct_miqt_string = C.QListWidgetItem_toolTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidgetItem) SetToolTip(toolTip string) {
	toolTip_ms := C.struct_miqt_string{}
	toolTip_ms.data = C.CString(toolTip)
	toolTip_ms.len = C.size_t(len(toolTip))
	defer C.free(unsafe.Pointer(toolTip_ms.data))
	C.QListWidgetItem_setToolTip(this.h, toolTip_ms)
}

func (this *QListWidgetItem) WhatsThis() string {
	var _ms C.struct_miqt_string = C.QListWidgetItem_whatsThis(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidgetItem) SetWhatsThis(whatsThis string) {
	whatsThis_ms := C.struct_miqt_string{}
	whatsThis_ms.data = C.CString(whatsThis)
	whatsThis_ms.len = C.size_t(len(whatsThis))
	defer C.free(unsafe.Pointer(whatsThis_ms.data))
	C.QListWidgetItem_setWhatsThis(this.h, whatsThis_ms)
}

func (this *QListWidgetItem) Font() *QFont {
	_goptr := newQFont(C.QListWidgetItem_font(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetFont(font *QFont) {
	C.QListWidgetItem_setFont(this.h, font.cPointer())
}

func (this *QListWidgetItem) TextAlignment() int {
	return (int)(C.QListWidgetItem_textAlignment(this.h))
}

func (this *QListWidgetItem) SetTextAlignment(alignment int) {
	C.QListWidgetItem_setTextAlignment(this.h, (C.int)(alignment))
}

func (this *QListWidgetItem) SetTextAlignmentWithAlignment(alignment AlignmentFlag) {
	C.QListWidgetItem_setTextAlignmentWithAlignment(this.h, (C.int)(alignment))
}

func (this *QListWidgetItem) SetTextAlignment2(alignment AlignmentFlag) {
	C.QListWidgetItem_setTextAlignment2(this.h, (C.int)(alignment))
}

func (this *QListWidgetItem) Background() *QBrush {
	_goptr := newQBrush(C.QListWidgetItem_background(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetBackground(brush *QBrush) {
	C.QListWidgetItem_setBackground(this.h, brush.cPointer())
}

func (this *QListWidgetItem) Foreground() *QBrush {
	_goptr := newQBrush(C.QListWidgetItem_foreground(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetForeground(brush *QBrush) {
	C.QListWidgetItem_setForeground(this.h, brush.cPointer())
}

func (this *QListWidgetItem) CheckState() CheckState {
	return (CheckState)(C.QListWidgetItem_checkState(this.h))
}

func (this *QListWidgetItem) SetCheckState(state CheckState) {
	C.QListWidgetItem_setCheckState(this.h, (C.int)(state))
}

func (this *QListWidgetItem) SizeHint() *QSize {
	_goptr := newQSize(C.QListWidgetItem_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetSizeHint(size *QSize) {
	C.QListWidgetItem_setSizeHint(this.h, size.cPointer())
}

func (this *QListWidgetItem) Data(role int) *QVariant {
	_goptr := newQVariant(C.QListWidgetItem_data(this.h, (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetData(role int, value *QVariant) {
	C.QListWidgetItem_setData(this.h, (C.int)(role), value.cPointer())
}

func (this *QListWidgetItem) OperatorLesser(other *QListWidgetItem) bool {
	return (bool)(C.QListWidgetItem_operatorLesser(this.h, other.cPointer()))
}

func (this *QListWidgetItem) Read(in *QDataStream) {
	C.QListWidgetItem_read(this.h, in.cPointer())
}

func (this *QListWidgetItem) Write(out *QDataStream) {
	C.QListWidgetItem_write(this.h, out.cPointer())
}

func (this *QListWidgetItem) OperatorAssign(other *QListWidgetItem) {
	C.QListWidgetItem_operatorAssign(this.h, other.cPointer())
}

func (this *QListWidgetItem) Type() int {
	return (int)(C.QListWidgetItem_type(this.h))
}

func (this *QListWidgetItem) callVirtualBase_Clone() *QListWidgetItem {

	return newQListWidgetItem(C.QListWidgetItem_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QListWidgetItem) OnClone(slot func(super func() *QListWidgetItem) *QListWidgetItem) {
	ok := C.QListWidgetItem_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidgetItem_clone
func miqt_exec_callback_QListWidgetItem_clone(self *C.QListWidgetItem, cb C.intptr_t) *C.QListWidgetItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QListWidgetItem) *QListWidgetItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidgetItem{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QListWidgetItem) callVirtualBase_Data(role int) *QVariant {

	_goptr := newQVariant(C.QListWidgetItem_virtualbase_data(unsafe.Pointer(this.h), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidgetItem) OnData(slot func(super func(role int) *QVariant, role int) *QVariant) {
	ok := C.QListWidgetItem_override_virtual_data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidgetItem_data
func miqt_exec_callback_QListWidgetItem_data(self *C.QListWidgetItem, cb C.intptr_t, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(role int) *QVariant, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(role)

	virtualReturn := gofunc((&QListWidgetItem{h: self}).callVirtualBase_Data, slotval1)

	return virtualReturn.cPointer()

}

func (this *QListWidgetItem) callVirtualBase_SetData(role int, value *QVariant) {

	C.QListWidgetItem_virtualbase_setData(unsafe.Pointer(this.h), (C.int)(role), value.cPointer())

}
func (this *QListWidgetItem) OnSetData(slot func(super func(role int, value *QVariant), role int, value *QVariant)) {
	ok := C.QListWidgetItem_override_virtual_setData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidgetItem_setData
func miqt_exec_callback_QListWidgetItem_setData(self *C.QListWidgetItem, cb C.intptr_t, role C.int, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(role int, value *QVariant), role int, value *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(role)

	slotval2 := newQVariant(value)

	gofunc((&QListWidgetItem{h: self}).callVirtualBase_SetData, slotval1, slotval2)

}

func (this *QListWidgetItem) callVirtualBase_OperatorLesser(other *QListWidgetItem) bool {

	return (bool)(C.QListWidgetItem_virtualbase_operatorLesser(unsafe.Pointer(this.h), other.cPointer()))

}
func (this *QListWidgetItem) OnOperatorLesser(slot func(super func(other *QListWidgetItem) bool, other *QListWidgetItem) bool) {
	ok := C.QListWidgetItem_override_virtual_operatorLesser(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidgetItem_operatorLesser
func miqt_exec_callback_QListWidgetItem_operatorLesser(self *C.QListWidgetItem, cb C.intptr_t, other *C.QListWidgetItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QListWidgetItem) bool, other *QListWidgetItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQListWidgetItem(other)

	virtualReturn := gofunc((&QListWidgetItem{h: self}).callVirtualBase_OperatorLesser, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QListWidgetItem) callVirtualBase_Read(in *QDataStream) {

	C.QListWidgetItem_virtualbase_read(unsafe.Pointer(this.h), in.cPointer())

}
func (this *QListWidgetItem) OnRead(slot func(super func(in *QDataStream), in *QDataStream)) {
	ok := C.QListWidgetItem_override_virtual_read(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidgetItem_read
func miqt_exec_callback_QListWidgetItem_read(self *C.QListWidgetItem, cb C.intptr_t, in *C.QDataStream) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(in *QDataStream), in *QDataStream))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDataStream(in)

	gofunc((&QListWidgetItem{h: self}).callVirtualBase_Read, slotval1)

}

func (this *QListWidgetItem) callVirtualBase_Write(out *QDataStream) {

	C.QListWidgetItem_virtualbase_write(unsafe.Pointer(this.h), out.cPointer())

}
func (this *QListWidgetItem) OnWrite(slot func(super func(out *QDataStream), out *QDataStream)) {
	ok := C.QListWidgetItem_override_virtual_write(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidgetItem_write
func miqt_exec_callback_QListWidgetItem_write(self *C.QListWidgetItem, cb C.intptr_t, out *C.QDataStream) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(out *QDataStream), out *QDataStream))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDataStream(out)

	gofunc((&QListWidgetItem{h: self}).callVirtualBase_Write, slotval1)

}

// Delete this object from C++ memory.
func (this *QListWidgetItem) Delete() {
	C.QListWidgetItem_delete(this.h)
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

func (this *QListWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQListWidget constructs the type using only CGO pointers.
func newQListWidget(h *C.QListWidget) *QListWidget {
	if h == nil {
		return nil
	}
	var outptr_QListView *C.QListView = nil
	C.QListWidget_virtbase(h, &outptr_QListView)

	return &QListWidget{h: h,
		QListView: newQListView(outptr_QListView)}
}

// UnsafeNewQListWidget constructs the type using only unsafe pointers.
func UnsafeNewQListWidget(h unsafe.Pointer) *QListWidget {
	return newQListWidget((*C.QListWidget)(h))
}

// NewQListWidget constructs a new QListWidget object.
func NewQListWidget(parent *QWidget) *QListWidget {

	return newQListWidget(C.QListWidget_new(parent.cPointer()))
}

// NewQListWidget2 constructs a new QListWidget object.
func NewQListWidget2() *QListWidget {

	return newQListWidget(C.QListWidget_new2())
}

func (this *QListWidget) MetaObject() *QMetaObject {
	return newQMetaObject(C.QListWidget_metaObject(this.h))
}

func (this *QListWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QListWidget_metacast(this.h, param1_Cstring))
}

func QListWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QListWidget_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidget) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QListWidget_setSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QListWidget) Item(row int) *QListWidgetItem {
	return newQListWidgetItem(C.QListWidget_item(this.h, (C.int)(row)))
}

func (this *QListWidget) Row(item *QListWidgetItem) int {
	return (int)(C.QListWidget_row(this.h, item.cPointer()))
}

func (this *QListWidget) InsertItem(row int, item *QListWidgetItem) {
	C.QListWidget_insertItem(this.h, (C.int)(row), item.cPointer())
}

func (this *QListWidget) InsertItem2(row int, label string) {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	C.QListWidget_insertItem2(this.h, (C.int)(row), label_ms)
}

func (this *QListWidget) InsertItems(row int, labels []string) {
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
	C.QListWidget_insertItems(this.h, (C.int)(row), labels_ma)
}

func (this *QListWidget) AddItem(label string) {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	C.QListWidget_addItem(this.h, label_ms)
}

func (this *QListWidget) AddItemWithItem(item *QListWidgetItem) {
	C.QListWidget_addItemWithItem(this.h, item.cPointer())
}

func (this *QListWidget) AddItems(labels []string) {
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
	C.QListWidget_addItems(this.h, labels_ma)
}

func (this *QListWidget) TakeItem(row int) *QListWidgetItem {
	return newQListWidgetItem(C.QListWidget_takeItem(this.h, (C.int)(row)))
}

func (this *QListWidget) Count() int {
	return (int)(C.QListWidget_count(this.h))
}

func (this *QListWidget) CurrentItem() *QListWidgetItem {
	return newQListWidgetItem(C.QListWidget_currentItem(this.h))
}

func (this *QListWidget) SetCurrentItem(item *QListWidgetItem) {
	C.QListWidget_setCurrentItem(this.h, item.cPointer())
}

func (this *QListWidget) SetCurrentItem2(item *QListWidgetItem, command QItemSelectionModel__SelectionFlag) {
	C.QListWidget_setCurrentItem2(this.h, item.cPointer(), (C.int)(command))
}

func (this *QListWidget) CurrentRow() int {
	return (int)(C.QListWidget_currentRow(this.h))
}

func (this *QListWidget) SetCurrentRow(row int) {
	C.QListWidget_setCurrentRow(this.h, (C.int)(row))
}

func (this *QListWidget) SetCurrentRow2(row int, command QItemSelectionModel__SelectionFlag) {
	C.QListWidget_setCurrentRow2(this.h, (C.int)(row), (C.int)(command))
}

func (this *QListWidget) ItemAt(p *QPoint) *QListWidgetItem {
	return newQListWidgetItem(C.QListWidget_itemAt(this.h, p.cPointer()))
}

func (this *QListWidget) ItemAt2(x int, y int) *QListWidgetItem {
	return newQListWidgetItem(C.QListWidget_itemAt2(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QListWidget) VisualItemRect(item *QListWidgetItem) *QRect {
	_goptr := newQRect(C.QListWidget_visualItemRect(this.h, item.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidget) SortItems() {
	C.QListWidget_sortItems(this.h)
}

func (this *QListWidget) SetSortingEnabled(enable bool) {
	C.QListWidget_setSortingEnabled(this.h, (C.bool)(enable))
}

func (this *QListWidget) IsSortingEnabled() bool {
	return (bool)(C.QListWidget_isSortingEnabled(this.h))
}

func (this *QListWidget) EditItem(item *QListWidgetItem) {
	C.QListWidget_editItem(this.h, item.cPointer())
}

func (this *QListWidget) OpenPersistentEditor(item *QListWidgetItem) {
	C.QListWidget_openPersistentEditor(this.h, item.cPointer())
}

func (this *QListWidget) ClosePersistentEditor(item *QListWidgetItem) {
	C.QListWidget_closePersistentEditor(this.h, item.cPointer())
}

func (this *QListWidget) IsPersistentEditorOpen(item *QListWidgetItem) bool {
	return (bool)(C.QListWidget_isPersistentEditorOpen(this.h, item.cPointer()))
}

func (this *QListWidget) ItemWidget(item *QListWidgetItem) *QWidget {
	return newQWidget(C.QListWidget_itemWidget(this.h, item.cPointer()))
}

func (this *QListWidget) SetItemWidget(item *QListWidgetItem, widget *QWidget) {
	C.QListWidget_setItemWidget(this.h, item.cPointer(), widget.cPointer())
}

func (this *QListWidget) RemoveItemWidget(item *QListWidgetItem) {
	C.QListWidget_removeItemWidget(this.h, item.cPointer())
}

func (this *QListWidget) SelectedItems() []*QListWidgetItem {
	var _ma C.struct_miqt_array = C.QListWidget_selectedItems(this.h)
	_ret := make([]*QListWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QListWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQListWidgetItem(_outCast[i])
	}
	return _ret
}

func (this *QListWidget) FindItems(text string, flags MatchFlag) []*QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ma C.struct_miqt_array = C.QListWidget_findItems(this.h, text_ms, (C.int)(flags))
	_ret := make([]*QListWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QListWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQListWidgetItem(_outCast[i])
	}
	return _ret
}

func (this *QListWidget) Items(data *QMimeData) []*QListWidgetItem {
	var _ma C.struct_miqt_array = C.QListWidget_items(this.h, data.cPointer())
	_ret := make([]*QListWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QListWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQListWidgetItem(_outCast[i])
	}
	return _ret
}

func (this *QListWidget) IndexFromItem(item *QListWidgetItem) *QModelIndex {
	_goptr := newQModelIndex(C.QListWidget_indexFromItem(this.h, item.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidget) ItemFromIndex(index *QModelIndex) *QListWidgetItem {
	return newQListWidgetItem(C.QListWidget_itemFromIndex(this.h, index.cPointer()))
}

func (this *QListWidget) ScrollToItem(item *QListWidgetItem) {
	C.QListWidget_scrollToItem(this.h, item.cPointer())
}

func (this *QListWidget) Clear() {
	C.QListWidget_clear(this.h)
}

func (this *QListWidget) ItemPressed(item *QListWidgetItem) {
	C.QListWidget_itemPressed(this.h, item.cPointer())
}
func (this *QListWidget) OnItemPressed(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_itemPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_itemPressed
func miqt_exec_callback_QListWidget_itemPressed(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQListWidgetItem(item)

	gofunc(slotval1)
}

func (this *QListWidget) ItemClicked(item *QListWidgetItem) {
	C.QListWidget_itemClicked(this.h, item.cPointer())
}
func (this *QListWidget) OnItemClicked(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_itemClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_itemClicked
func miqt_exec_callback_QListWidget_itemClicked(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQListWidgetItem(item)

	gofunc(slotval1)
}

func (this *QListWidget) ItemDoubleClicked(item *QListWidgetItem) {
	C.QListWidget_itemDoubleClicked(this.h, item.cPointer())
}
func (this *QListWidget) OnItemDoubleClicked(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_itemDoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_itemDoubleClicked
func miqt_exec_callback_QListWidget_itemDoubleClicked(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQListWidgetItem(item)

	gofunc(slotval1)
}

func (this *QListWidget) ItemActivated(item *QListWidgetItem) {
	C.QListWidget_itemActivated(this.h, item.cPointer())
}
func (this *QListWidget) OnItemActivated(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_itemActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_itemActivated
func miqt_exec_callback_QListWidget_itemActivated(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQListWidgetItem(item)

	gofunc(slotval1)
}

func (this *QListWidget) ItemEntered(item *QListWidgetItem) {
	C.QListWidget_itemEntered(this.h, item.cPointer())
}
func (this *QListWidget) OnItemEntered(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_itemEntered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_itemEntered
func miqt_exec_callback_QListWidget_itemEntered(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQListWidgetItem(item)

	gofunc(slotval1)
}

func (this *QListWidget) ItemChanged(item *QListWidgetItem) {
	C.QListWidget_itemChanged(this.h, item.cPointer())
}
func (this *QListWidget) OnItemChanged(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_itemChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_itemChanged
func miqt_exec_callback_QListWidget_itemChanged(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQListWidgetItem(item)

	gofunc(slotval1)
}

func (this *QListWidget) CurrentItemChanged(current *QListWidgetItem, previous *QListWidgetItem) {
	C.QListWidget_currentItemChanged(this.h, current.cPointer(), previous.cPointer())
}
func (this *QListWidget) OnCurrentItemChanged(slot func(current *QListWidgetItem, previous *QListWidgetItem)) {
	C.QListWidget_connect_currentItemChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_currentItemChanged
func miqt_exec_callback_QListWidget_currentItemChanged(cb C.intptr_t, current *C.QListWidgetItem, previous *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(current *QListWidgetItem, previous *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQListWidgetItem(current)

	slotval2 := newQListWidgetItem(previous)

	gofunc(slotval1, slotval2)
}

func (this *QListWidget) CurrentTextChanged(currentText string) {
	currentText_ms := C.struct_miqt_string{}
	currentText_ms.data = C.CString(currentText)
	currentText_ms.len = C.size_t(len(currentText))
	defer C.free(unsafe.Pointer(currentText_ms.data))
	C.QListWidget_currentTextChanged(this.h, currentText_ms)
}
func (this *QListWidget) OnCurrentTextChanged(slot func(currentText string)) {
	C.QListWidget_connect_currentTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_currentTextChanged
func miqt_exec_callback_QListWidget_currentTextChanged(cb C.intptr_t, currentText C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(currentText string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var currentText_ms C.struct_miqt_string = currentText
	currentText_ret := C.GoStringN(currentText_ms.data, C.int(int64(currentText_ms.len)))
	C.free(unsafe.Pointer(currentText_ms.data))
	slotval1 := currentText_ret

	gofunc(slotval1)
}

func (this *QListWidget) CurrentRowChanged(currentRow int) {
	C.QListWidget_currentRowChanged(this.h, (C.int)(currentRow))
}
func (this *QListWidget) OnCurrentRowChanged(slot func(currentRow int)) {
	C.QListWidget_connect_currentRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_currentRowChanged
func miqt_exec_callback_QListWidget_currentRowChanged(cb C.intptr_t, currentRow C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(currentRow int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(currentRow)

	gofunc(slotval1)
}

func (this *QListWidget) ItemSelectionChanged() {
	C.QListWidget_itemSelectionChanged(this.h)
}
func (this *QListWidget) OnItemSelectionChanged(slot func()) {
	C.QListWidget_connect_itemSelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_itemSelectionChanged
func miqt_exec_callback_QListWidget_itemSelectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
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
	var _ms C.struct_miqt_string = C.QListWidget_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QListWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QListWidget_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidget) SortItemsWithOrder(order SortOrder) {
	C.QListWidget_sortItemsWithOrder(this.h, (C.int)(order))
}

func (this *QListWidget) ScrollToItem2(item *QListWidgetItem, hint QAbstractItemView__ScrollHint) {
	C.QListWidget_scrollToItem2(this.h, item.cPointer(), (C.int)(hint))
}

// ResizeContents can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) ResizeContents(width int, height int) {

	var _dynamic_cast_ok C.bool = false
	C.QListWidget_protectedbase_resizeContents(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(width), (C.int)(height))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ContentsSize can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) ContentsSize() QSize {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQSize(C.QListWidget_protectedbase_contentsSize(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// RectForIndex can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) RectForIndex(index *QModelIndex) QRect {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQRect(C.QListWidget_protectedbase_rectForIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetPositionForIndex can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) SetPositionForIndex(position *QPoint, index *QModelIndex) {

	var _dynamic_cast_ok C.bool = false
	C.QListWidget_protectedbase_setPositionForIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h), position.cPointer(), index.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// State can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) State() QAbstractItemView__State {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (QAbstractItemView__State)(C.QListWidget_protectedbase_state(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetState can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) SetState(state QAbstractItemView__State) {

	var _dynamic_cast_ok C.bool = false
	C.QListWidget_protectedbase_setState(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(state))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ScheduleDelayedItemsLayout can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) ScheduleDelayedItemsLayout() {

	var _dynamic_cast_ok C.bool = false
	C.QListWidget_protectedbase_scheduleDelayedItemsLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ExecuteDelayedItemsLayout can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) ExecuteDelayedItemsLayout() {

	var _dynamic_cast_ok C.bool = false
	C.QListWidget_protectedbase_executeDelayedItemsLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetDirtyRegion can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) SetDirtyRegion(region *QRegion) {

	var _dynamic_cast_ok C.bool = false
	C.QListWidget_protectedbase_setDirtyRegion(&_dynamic_cast_ok, unsafe.Pointer(this.h), region.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ScrollDirtyRegion can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) ScrollDirtyRegion(dx int, dy int) {

	var _dynamic_cast_ok C.bool = false
	C.QListWidget_protectedbase_scrollDirtyRegion(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DirtyRegionOffset can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) DirtyRegionOffset() QPoint {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQPoint(C.QListWidget_protectedbase_dirtyRegionOffset(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// StartAutoScroll can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) StartAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QListWidget_protectedbase_startAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// StopAutoScroll can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) StopAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QListWidget_protectedbase_stopAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DoAutoScroll can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) DoAutoScroll() {

	var _dynamic_cast_ok C.bool = false
	C.QListWidget_protectedbase_doAutoScroll(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// DropIndicatorPosition can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) DropIndicatorPosition() QAbstractItemView__DropIndicatorPosition {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (QAbstractItemView__DropIndicatorPosition)(C.QListWidget_protectedbase_dropIndicatorPosition(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SetViewportMargins can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) SetViewportMargins(left int, top int, right int, bottom int) {

	var _dynamic_cast_ok C.bool = false
	C.QListWidget_protectedbase_setViewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ViewportMargins can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) ViewportMargins() QMargins {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQMargins(C.QListWidget_protectedbase_viewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DrawFrame can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) DrawFrame(param1 *QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QListWidget_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QListWidget_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QListWidget_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QListWidget_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QListWidget_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QListWidget_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QListWidget_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QListWidget_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QListWidget_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QListWidget that was directly constructed.
func (this *QListWidget) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QListWidget_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QListWidget) callVirtualBase_SetSelectionModel(selectionModel *QItemSelectionModel) {

	C.QListWidget_virtualbase_setSelectionModel(unsafe.Pointer(this.h), selectionModel.cPointer())

}
func (this *QListWidget) OnSetSelectionModel(slot func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel)) {
	ok := C.QListWidget_override_virtual_setSelectionModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_setSelectionModel
func miqt_exec_callback_QListWidget_setSelectionModel(self *C.QListWidget, cb C.intptr_t, selectionModel *C.QItemSelectionModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelectionModel(selectionModel)

	gofunc((&QListWidget{h: self}).callVirtualBase_SetSelectionModel, slotval1)

}

func (this *QListWidget) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QListWidget_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QListWidget_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_dropEvent
func miqt_exec_callback_QListWidget_dropEvent(self *C.QListWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QListWidget_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QListWidget) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QListWidget_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_event
func miqt_exec_callback_QListWidget_event(self *C.QListWidget, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_MimeTypes() []string {

	var _ma C.struct_miqt_array = C.QListWidget_virtualbase_mimeTypes(unsafe.Pointer(this.h))
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
func (this *QListWidget) OnMimeTypes(slot func(super func() []string) []string) {
	ok := C.QListWidget_override_virtual_mimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_mimeTypes
func miqt_exec_callback_QListWidget_mimeTypes(self *C.QListWidget, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_MimeTypes)
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

func (this *QListWidget) callVirtualBase_MimeData(items []*QListWidgetItem) *QMimeData {
	items_CArray := (*[0xffff]*C.QListWidgetItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}

	return newQMimeData(C.QListWidget_virtualbase_mimeData(unsafe.Pointer(this.h), items_ma))

}
func (this *QListWidget) OnMimeData(slot func(super func(items []*QListWidgetItem) *QMimeData, items []*QListWidgetItem) *QMimeData) {
	ok := C.QListWidget_override_virtual_mimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_mimeData
func miqt_exec_callback_QListWidget_mimeData(self *C.QListWidget, cb C.intptr_t, items C.struct_miqt_array) *C.QMimeData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(items []*QListWidgetItem) *QMimeData, items []*QListWidgetItem) *QMimeData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var items_ma C.struct_miqt_array = items
	items_ret := make([]*QListWidgetItem, int(items_ma.len))
	items_outCast := (*[0xffff]*C.QListWidgetItem)(unsafe.Pointer(items_ma.data)) // hey ya
	for i := 0; i < int(items_ma.len); i++ {
		items_ret[i] = newQListWidgetItem(items_outCast[i])
	}
	slotval1 := items_ret

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_MimeData, slotval1)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_DropMimeData(index int, data *QMimeData, action DropAction) bool {

	return (bool)(C.QListWidget_virtualbase_dropMimeData(unsafe.Pointer(this.h), (C.int)(index), data.cPointer(), (C.int)(action)))

}
func (this *QListWidget) OnDropMimeData(slot func(super func(index int, data *QMimeData, action DropAction) bool, index int, data *QMimeData, action DropAction) bool) {
	ok := C.QListWidget_override_virtual_dropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_dropMimeData
func miqt_exec_callback_QListWidget_dropMimeData(self *C.QListWidget, cb C.intptr_t, index C.int, data *C.QMimeData, action C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int, data *QMimeData, action DropAction) bool, index int, data *QMimeData, action DropAction) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	slotval2 := newQMimeData(data)

	slotval3 := (DropAction)(action)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_DropMimeData, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_SupportedDropActions() DropAction {

	return (DropAction)(C.QListWidget_virtualbase_supportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QListWidget) OnSupportedDropActions(slot func(super func() DropAction) DropAction) {
	ok := C.QListWidget_override_virtual_supportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_supportedDropActions
func miqt_exec_callback_QListWidget_supportedDropActions(self *C.QListWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_SupportedDropActions)

	return (C.int)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_VisualRect(index *QModelIndex) *QRect {

	_goptr := newQRect(C.QListWidget_virtualbase_visualRect(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnVisualRect(slot func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect) {
	ok := C.QListWidget_override_virtual_visualRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_visualRect
func miqt_exec_callback_QListWidget_visualRect(self *C.QListWidget, cb C.intptr_t, index *C.QModelIndex) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_VisualRect, slotval1)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {

	C.QListWidget_virtualbase_scrollTo(unsafe.Pointer(this.h), index.cPointer(), (C.int)(hint))

}
func (this *QListWidget) OnScrollTo(slot func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint)) {
	ok := C.QListWidget_override_virtual_scrollTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_scrollTo
func miqt_exec_callback_QListWidget_scrollTo(self *C.QListWidget, cb C.intptr_t, index *C.QModelIndex, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__ScrollHint)(hint)

	gofunc((&QListWidget{h: self}).callVirtualBase_ScrollTo, slotval1, slotval2)

}

func (this *QListWidget) callVirtualBase_IndexAt(p *QPoint) *QModelIndex {

	_goptr := newQModelIndex(C.QListWidget_virtualbase_indexAt(unsafe.Pointer(this.h), p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnIndexAt(slot func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex) {
	ok := C.QListWidget_override_virtual_indexAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_indexAt
func miqt_exec_callback_QListWidget_indexAt(self *C.QListWidget, cb C.intptr_t, p *C.QPoint) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(p)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_IndexAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_DoItemsLayout() {

	C.QListWidget_virtualbase_doItemsLayout(unsafe.Pointer(this.h))

}
func (this *QListWidget) OnDoItemsLayout(slot func(super func())) {
	ok := C.QListWidget_override_virtual_doItemsLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_doItemsLayout
func miqt_exec_callback_QListWidget_doItemsLayout(self *C.QListWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QListWidget{h: self}).callVirtualBase_DoItemsLayout)

}

func (this *QListWidget) callVirtualBase_Reset() {

	C.QListWidget_virtualbase_reset(unsafe.Pointer(this.h))

}
func (this *QListWidget) OnReset(slot func(super func())) {
	ok := C.QListWidget_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_reset
func miqt_exec_callback_QListWidget_reset(self *C.QListWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QListWidget{h: self}).callVirtualBase_Reset)

}

func (this *QListWidget) callVirtualBase_SetRootIndex(index *QModelIndex) {

	C.QListWidget_virtualbase_setRootIndex(unsafe.Pointer(this.h), index.cPointer())

}
func (this *QListWidget) OnSetRootIndex(slot func(super func(index *QModelIndex), index *QModelIndex)) {
	ok := C.QListWidget_override_virtual_setRootIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_setRootIndex
func miqt_exec_callback_QListWidget_setRootIndex(self *C.QListWidget, cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex), index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc((&QListWidget{h: self}).callVirtualBase_SetRootIndex, slotval1)

}

func (this *QListWidget) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QListWidget_virtualbase_scrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QListWidget) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QListWidget_override_virtual_scrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_scrollContentsBy
func miqt_exec_callback_QListWidget_scrollContentsBy(self *C.QListWidget, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QListWidget{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QListWidget) callVirtualBase_DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	roles_ma := C.struct_miqt_array{len: C.size_t(len(roles)), data: unsafe.Pointer(roles_CArray)}

	C.QListWidget_virtualbase_dataChanged(unsafe.Pointer(this.h), topLeft.cPointer(), bottomRight.cPointer(), roles_ma)

}
func (this *QListWidget) OnDataChanged(slot func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int)) {
	ok := C.QListWidget_override_virtual_dataChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_dataChanged
func miqt_exec_callback_QListWidget_dataChanged(self *C.QListWidget, cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles C.struct_miqt_array) {
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

	gofunc((&QListWidget{h: self}).callVirtualBase_DataChanged, slotval1, slotval2, slotval3)

}

func (this *QListWidget) callVirtualBase_RowsInserted(parent *QModelIndex, start int, end int) {

	C.QListWidget_virtualbase_rowsInserted(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QListWidget) OnRowsInserted(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QListWidget_override_virtual_rowsInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_rowsInserted
func miqt_exec_callback_QListWidget_rowsInserted(self *C.QListWidget, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QListWidget{h: self}).callVirtualBase_RowsInserted, slotval1, slotval2, slotval3)

}

func (this *QListWidget) callVirtualBase_RowsAboutToBeRemoved(parent *QModelIndex, start int, end int) {

	C.QListWidget_virtualbase_rowsAboutToBeRemoved(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QListWidget) OnRowsAboutToBeRemoved(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QListWidget_override_virtual_rowsAboutToBeRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_rowsAboutToBeRemoved
func miqt_exec_callback_QListWidget_rowsAboutToBeRemoved(self *C.QListWidget, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QListWidget{h: self}).callVirtualBase_RowsAboutToBeRemoved, slotval1, slotval2, slotval3)

}

func (this *QListWidget) callVirtualBase_MouseMoveEvent(e *QMouseEvent) {

	C.QListWidget_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnMouseMoveEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QListWidget_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_mouseMoveEvent
func miqt_exec_callback_QListWidget_mouseMoveEvent(self *C.QListWidget, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QListWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QListWidget_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QListWidget_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_mouseReleaseEvent
func miqt_exec_callback_QListWidget_mouseReleaseEvent(self *C.QListWidget, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QListWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QListWidget_virtualbase_wheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	ok := C.QListWidget_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_wheelEvent
func miqt_exec_callback_QListWidget_wheelEvent(self *C.QListWidget, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(e)

	gofunc((&QListWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_TimerEvent(e *QTimerEvent) {

	C.QListWidget_virtualbase_timerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnTimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	ok := C.QListWidget_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_timerEvent
func miqt_exec_callback_QListWidget_timerEvent(self *C.QListWidget, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(e)

	gofunc((&QListWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_ResizeEvent(e *QResizeEvent) {

	C.QListWidget_virtualbase_resizeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnResizeEvent(slot func(super func(e *QResizeEvent), e *QResizeEvent)) {
	ok := C.QListWidget_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_resizeEvent
func miqt_exec_callback_QListWidget_resizeEvent(self *C.QListWidget, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QResizeEvent), e *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(e)

	gofunc((&QListWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_DragMoveEvent(e *QDragMoveEvent) {

	C.QListWidget_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnDragMoveEvent(slot func(super func(e *QDragMoveEvent), e *QDragMoveEvent)) {
	ok := C.QListWidget_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_dragMoveEvent
func miqt_exec_callback_QListWidget_dragMoveEvent(self *C.QListWidget, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragMoveEvent), e *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(e)

	gofunc((&QListWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_DragLeaveEvent(e *QDragLeaveEvent) {

	C.QListWidget_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnDragLeaveEvent(slot func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent)) {
	ok := C.QListWidget_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_dragLeaveEvent
func miqt_exec_callback_QListWidget_dragLeaveEvent(self *C.QListWidget, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(e)

	gofunc((&QListWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_StartDrag(supportedActions DropAction) {

	C.QListWidget_virtualbase_startDrag(unsafe.Pointer(this.h), (C.int)(supportedActions))

}
func (this *QListWidget) OnStartDrag(slot func(super func(supportedActions DropAction), supportedActions DropAction)) {
	ok := C.QListWidget_override_virtual_startDrag(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_startDrag
func miqt_exec_callback_QListWidget_startDrag(self *C.QListWidget, cb C.intptr_t, supportedActions C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(supportedActions DropAction), supportedActions DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(supportedActions)

	gofunc((&QListWidget{h: self}).callVirtualBase_StartDrag, slotval1)

}

func (this *QListWidget) callVirtualBase_InitViewItemOption(option *QStyleOptionViewItem) {

	C.QListWidget_virtualbase_initViewItemOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QListWidget) OnInitViewItemOption(slot func(super func(option *QStyleOptionViewItem), option *QStyleOptionViewItem)) {
	ok := C.QListWidget_override_virtual_initViewItemOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_initViewItemOption
func miqt_exec_callback_QListWidget_initViewItemOption(self *C.QListWidget, cb C.intptr_t, option *C.QStyleOptionViewItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionViewItem), option *QStyleOptionViewItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionViewItem(option)

	gofunc((&QListWidget{h: self}).callVirtualBase_InitViewItemOption, slotval1)

}

func (this *QListWidget) callVirtualBase_PaintEvent(e *QPaintEvent) {

	C.QListWidget_virtualbase_paintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	ok := C.QListWidget_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_paintEvent
func miqt_exec_callback_QListWidget_paintEvent(self *C.QListWidget, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(e)

	gofunc((&QListWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_HorizontalOffset() int {

	return (int)(C.QListWidget_virtualbase_horizontalOffset(unsafe.Pointer(this.h)))

}
func (this *QListWidget) OnHorizontalOffset(slot func(super func() int) int) {
	ok := C.QListWidget_override_virtual_horizontalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_horizontalOffset
func miqt_exec_callback_QListWidget_horizontalOffset(self *C.QListWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_HorizontalOffset)

	return (C.int)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_VerticalOffset() int {

	return (int)(C.QListWidget_virtualbase_verticalOffset(unsafe.Pointer(this.h)))

}
func (this *QListWidget) OnVerticalOffset(slot func(super func() int) int) {
	ok := C.QListWidget_override_virtual_verticalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_verticalOffset
func miqt_exec_callback_QListWidget_verticalOffset(self *C.QListWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_VerticalOffset)

	return (C.int)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_MoveCursor(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex {

	_goptr := newQModelIndex(C.QListWidget_virtualbase_moveCursor(unsafe.Pointer(this.h), (C.int)(cursorAction), (C.int)(modifiers)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnMoveCursor(slot func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex) {
	ok := C.QListWidget_override_virtual_moveCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_moveCursor
func miqt_exec_callback_QListWidget_moveCursor(self *C.QListWidget, cb C.intptr_t, cursorAction C.int, modifiers C.int) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractItemView__CursorAction)(cursorAction)

	slotval2 := (KeyboardModifier)(modifiers)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_MoveCursor, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_SetSelection(rect *QRect, command QItemSelectionModel__SelectionFlag) {

	C.QListWidget_virtualbase_setSelection(unsafe.Pointer(this.h), rect.cPointer(), (C.int)(command))

}
func (this *QListWidget) OnSetSelection(slot func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag)) {
	ok := C.QListWidget_override_virtual_setSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_setSelection
func miqt_exec_callback_QListWidget_setSelection(self *C.QListWidget, cb C.intptr_t, rect *C.QRect, command C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(rect)

	slotval2 := (QItemSelectionModel__SelectionFlag)(command)

	gofunc((&QListWidget{h: self}).callVirtualBase_SetSelection, slotval1, slotval2)

}

func (this *QListWidget) callVirtualBase_VisualRegionForSelection(selection *QItemSelection) *QRegion {

	_goptr := newQRegion(C.QListWidget_virtualbase_visualRegionForSelection(unsafe.Pointer(this.h), selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnVisualRegionForSelection(slot func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion) {
	ok := C.QListWidget_override_virtual_visualRegionForSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_visualRegionForSelection
func miqt_exec_callback_QListWidget_visualRegionForSelection(self *C.QListWidget, cb C.intptr_t, selection *C.QItemSelection) *C.QRegion {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selection)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_VisualRegionForSelection, slotval1)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_SelectedIndexes() []QModelIndex {

	var _ma C.struct_miqt_array = C.QListWidget_virtualbase_selectedIndexes(unsafe.Pointer(this.h))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QListWidget) OnSelectedIndexes(slot func(super func() []QModelIndex) []QModelIndex) {
	ok := C.QListWidget_override_virtual_selectedIndexes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_selectedIndexes
func miqt_exec_callback_QListWidget_selectedIndexes(self *C.QListWidget, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []QModelIndex) []QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_SelectedIndexes)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QListWidget) callVirtualBase_UpdateGeometries() {

	C.QListWidget_virtualbase_updateGeometries(unsafe.Pointer(this.h))

}
func (this *QListWidget) OnUpdateGeometries(slot func(super func())) {
	ok := C.QListWidget_override_virtual_updateGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_updateGeometries
func miqt_exec_callback_QListWidget_updateGeometries(self *C.QListWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QListWidget{h: self}).callVirtualBase_UpdateGeometries)

}

func (this *QListWidget) callVirtualBase_IsIndexHidden(index *QModelIndex) bool {

	return (bool)(C.QListWidget_virtualbase_isIndexHidden(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QListWidget) OnIsIndexHidden(slot func(super func(index *QModelIndex) bool, index *QModelIndex) bool) {
	ok := C.QListWidget_override_virtual_isIndexHidden(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_isIndexHidden
func miqt_exec_callback_QListWidget_isIndexHidden(self *C.QListWidget, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) bool, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_IsIndexHidden, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_SelectionChanged(selected *QItemSelection, deselected *QItemSelection) {

	C.QListWidget_virtualbase_selectionChanged(unsafe.Pointer(this.h), selected.cPointer(), deselected.cPointer())

}
func (this *QListWidget) OnSelectionChanged(slot func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection)) {
	ok := C.QListWidget_override_virtual_selectionChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_selectionChanged
func miqt_exec_callback_QListWidget_selectionChanged(self *C.QListWidget, cb C.intptr_t, selected *C.QItemSelection, deselected *C.QItemSelection) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selected)

	slotval2 := newQItemSelection(deselected)

	gofunc((&QListWidget{h: self}).callVirtualBase_SelectionChanged, slotval1, slotval2)

}

func (this *QListWidget) callVirtualBase_CurrentChanged(current *QModelIndex, previous *QModelIndex) {

	C.QListWidget_virtualbase_currentChanged(unsafe.Pointer(this.h), current.cPointer(), previous.cPointer())

}
func (this *QListWidget) OnCurrentChanged(slot func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex)) {
	ok := C.QListWidget_override_virtual_currentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_currentChanged
func miqt_exec_callback_QListWidget_currentChanged(self *C.QListWidget, cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(current)

	slotval2 := newQModelIndex(previous)

	gofunc((&QListWidget{h: self}).callVirtualBase_CurrentChanged, slotval1, slotval2)

}

func (this *QListWidget) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QListWidget_virtualbase_viewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QListWidget_override_virtual_viewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_viewportSizeHint
func miqt_exec_callback_QListWidget_viewportSizeHint(self *C.QListWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_KeyboardSearch(search string) {
	search_ms := C.struct_miqt_string{}
	search_ms.data = C.CString(search)
	search_ms.len = C.size_t(len(search))
	defer C.free(unsafe.Pointer(search_ms.data))

	C.QListWidget_virtualbase_keyboardSearch(unsafe.Pointer(this.h), search_ms)

}
func (this *QListWidget) OnKeyboardSearch(slot func(super func(search string), search string)) {
	ok := C.QListWidget_override_virtual_keyboardSearch(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_keyboardSearch
func miqt_exec_callback_QListWidget_keyboardSearch(self *C.QListWidget, cb C.intptr_t, search C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(search string), search string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var search_ms C.struct_miqt_string = search
	search_ret := C.GoStringN(search_ms.data, C.int(int64(search_ms.len)))
	C.free(unsafe.Pointer(search_ms.data))
	slotval1 := search_ret

	gofunc((&QListWidget{h: self}).callVirtualBase_KeyboardSearch, slotval1)

}

func (this *QListWidget) callVirtualBase_SizeHintForRow(row int) int {

	return (int)(C.QListWidget_virtualbase_sizeHintForRow(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QListWidget) OnSizeHintForRow(slot func(super func(row int) int, row int) int) {
	ok := C.QListWidget_override_virtual_sizeHintForRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_sizeHintForRow
func miqt_exec_callback_QListWidget_sizeHintForRow(self *C.QListWidget, cb C.intptr_t, row C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int) int, row int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_SizeHintForRow, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_SizeHintForColumn(column int) int {

	return (int)(C.QListWidget_virtualbase_sizeHintForColumn(unsafe.Pointer(this.h), (C.int)(column)))

}
func (this *QListWidget) OnSizeHintForColumn(slot func(super func(column int) int, column int) int) {
	ok := C.QListWidget_override_virtual_sizeHintForColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_sizeHintForColumn
func miqt_exec_callback_QListWidget_sizeHintForColumn(self *C.QListWidget, cb C.intptr_t, column C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int) int, column int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_SizeHintForColumn, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_ItemDelegateForIndex(index *QModelIndex) *QAbstractItemDelegate {

	return newQAbstractItemDelegate(C.QListWidget_virtualbase_itemDelegateForIndex(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QListWidget) OnItemDelegateForIndex(slot func(super func(index *QModelIndex) *QAbstractItemDelegate, index *QModelIndex) *QAbstractItemDelegate) {
	ok := C.QListWidget_override_virtual_itemDelegateForIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_itemDelegateForIndex
func miqt_exec_callback_QListWidget_itemDelegateForIndex(self *C.QListWidget, cb C.intptr_t, index *C.QModelIndex) *C.QAbstractItemDelegate {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QAbstractItemDelegate, index *QModelIndex) *QAbstractItemDelegate)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_ItemDelegateForIndex, slotval1)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QListWidget_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QListWidget_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_inputMethodQuery
func miqt_exec_callback_QListWidget_inputMethodQuery(self *C.QListWidget, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_SelectAll() {

	C.QListWidget_virtualbase_selectAll(unsafe.Pointer(this.h))

}
func (this *QListWidget) OnSelectAll(slot func(super func())) {
	ok := C.QListWidget_override_virtual_selectAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_selectAll
func miqt_exec_callback_QListWidget_selectAll(self *C.QListWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QListWidget{h: self}).callVirtualBase_SelectAll)

}

func (this *QListWidget) callVirtualBase_UpdateEditorData() {

	C.QListWidget_virtualbase_updateEditorData(unsafe.Pointer(this.h))

}
func (this *QListWidget) OnUpdateEditorData(slot func(super func())) {
	ok := C.QListWidget_override_virtual_updateEditorData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_updateEditorData
func miqt_exec_callback_QListWidget_updateEditorData(self *C.QListWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QListWidget{h: self}).callVirtualBase_UpdateEditorData)

}

func (this *QListWidget) callVirtualBase_UpdateEditorGeometries() {

	C.QListWidget_virtualbase_updateEditorGeometries(unsafe.Pointer(this.h))

}
func (this *QListWidget) OnUpdateEditorGeometries(slot func(super func())) {
	ok := C.QListWidget_override_virtual_updateEditorGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_updateEditorGeometries
func miqt_exec_callback_QListWidget_updateEditorGeometries(self *C.QListWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QListWidget{h: self}).callVirtualBase_UpdateEditorGeometries)

}

func (this *QListWidget) callVirtualBase_VerticalScrollbarAction(action int) {

	C.QListWidget_virtualbase_verticalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QListWidget) OnVerticalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QListWidget_override_virtual_verticalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_verticalScrollbarAction
func miqt_exec_callback_QListWidget_verticalScrollbarAction(self *C.QListWidget, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QListWidget{h: self}).callVirtualBase_VerticalScrollbarAction, slotval1)

}

func (this *QListWidget) callVirtualBase_HorizontalScrollbarAction(action int) {

	C.QListWidget_virtualbase_horizontalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QListWidget) OnHorizontalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QListWidget_override_virtual_horizontalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_horizontalScrollbarAction
func miqt_exec_callback_QListWidget_horizontalScrollbarAction(self *C.QListWidget, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QListWidget{h: self}).callVirtualBase_HorizontalScrollbarAction, slotval1)

}

func (this *QListWidget) callVirtualBase_VerticalScrollbarValueChanged(value int) {

	C.QListWidget_virtualbase_verticalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QListWidget) OnVerticalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QListWidget_override_virtual_verticalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_verticalScrollbarValueChanged
func miqt_exec_callback_QListWidget_verticalScrollbarValueChanged(self *C.QListWidget, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QListWidget{h: self}).callVirtualBase_VerticalScrollbarValueChanged, slotval1)

}

func (this *QListWidget) callVirtualBase_HorizontalScrollbarValueChanged(value int) {

	C.QListWidget_virtualbase_horizontalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QListWidget) OnHorizontalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QListWidget_override_virtual_horizontalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_horizontalScrollbarValueChanged
func miqt_exec_callback_QListWidget_horizontalScrollbarValueChanged(self *C.QListWidget, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QListWidget{h: self}).callVirtualBase_HorizontalScrollbarValueChanged, slotval1)

}

func (this *QListWidget) callVirtualBase_CloseEditor(editor *QWidget, hint QAbstractItemDelegate__EndEditHint) {

	C.QListWidget_virtualbase_closeEditor(unsafe.Pointer(this.h), editor.cPointer(), (C.int)(hint))

}
func (this *QListWidget) OnCloseEditor(slot func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint)) {
	ok := C.QListWidget_override_virtual_closeEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_closeEditor
func miqt_exec_callback_QListWidget_closeEditor(self *C.QListWidget, cb C.intptr_t, editor *C.QWidget, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := (QAbstractItemDelegate__EndEditHint)(hint)

	gofunc((&QListWidget{h: self}).callVirtualBase_CloseEditor, slotval1, slotval2)

}

func (this *QListWidget) callVirtualBase_CommitData(editor *QWidget) {

	C.QListWidget_virtualbase_commitData(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QListWidget) OnCommitData(slot func(super func(editor *QWidget), editor *QWidget)) {
	ok := C.QListWidget_override_virtual_commitData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_commitData
func miqt_exec_callback_QListWidget_commitData(self *C.QListWidget, cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget), editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	gofunc((&QListWidget{h: self}).callVirtualBase_CommitData, slotval1)

}

func (this *QListWidget) callVirtualBase_EditorDestroyed(editor *QObject) {

	C.QListWidget_virtualbase_editorDestroyed(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QListWidget) OnEditorDestroyed(slot func(super func(editor *QObject), editor *QObject)) {
	ok := C.QListWidget_override_virtual_editorDestroyed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_editorDestroyed
func miqt_exec_callback_QListWidget_editorDestroyed(self *C.QListWidget, cb C.intptr_t, editor *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QObject), editor *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(editor)

	gofunc((&QListWidget{h: self}).callVirtualBase_EditorDestroyed, slotval1)

}

func (this *QListWidget) callVirtualBase_Edit2(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool {

	return (bool)(C.QListWidget_virtualbase_edit2(unsafe.Pointer(this.h), index.cPointer(), (C.int)(trigger), event.cPointer()))

}
func (this *QListWidget) OnEdit2(slot func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool) {
	ok := C.QListWidget_override_virtual_edit2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_edit2
func miqt_exec_callback_QListWidget_edit2(self *C.QListWidget, cb C.intptr_t, index *C.QModelIndex, trigger C.int, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__EditTrigger)(trigger)

	slotval3 := newQEvent(event)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_Edit2, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_SelectionCommand(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag {

	return (QItemSelectionModel__SelectionFlag)(C.QListWidget_virtualbase_selectionCommand(unsafe.Pointer(this.h), index.cPointer(), event.cPointer()))

}
func (this *QListWidget) OnSelectionCommand(slot func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag) {
	ok := C.QListWidget_override_virtual_selectionCommand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_selectionCommand
func miqt_exec_callback_QListWidget_selectionCommand(self *C.QListWidget, cb C.intptr_t, index *C.QModelIndex, event *C.QEvent) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_SelectionCommand, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QListWidget_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QListWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QListWidget_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_focusNextPrevChild
func miqt_exec_callback_QListWidget_focusNextPrevChild(self *C.QListWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_ViewportEvent(event *QEvent) bool {

	return (bool)(C.QListWidget_virtualbase_viewportEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QListWidget) OnViewportEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QListWidget_override_virtual_viewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_viewportEvent
func miqt_exec_callback_QListWidget_viewportEvent(self *C.QListWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QListWidget_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QListWidget_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_mousePressEvent
func miqt_exec_callback_QListWidget_mousePressEvent(self *C.QListWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QListWidget_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QListWidget_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_mouseDoubleClickEvent
func miqt_exec_callback_QListWidget_mouseDoubleClickEvent(self *C.QListWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QListWidget_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QListWidget_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_dragEnterEvent
func miqt_exec_callback_QListWidget_dragEnterEvent(self *C.QListWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QListWidget_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QListWidget_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_focusInEvent
func miqt_exec_callback_QListWidget_focusInEvent(self *C.QListWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QListWidget_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QListWidget_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_focusOutEvent
func miqt_exec_callback_QListWidget_focusOutEvent(self *C.QListWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QListWidget_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QListWidget_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_keyPressEvent
func miqt_exec_callback_QListWidget_keyPressEvent(self *C.QListWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QListWidget_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QListWidget_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_inputMethodEvent
func miqt_exec_callback_QListWidget_inputMethodEvent(self *C.QListWidget, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QListWidget_virtualbase_eventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QListWidget) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QListWidget_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_eventFilter
func miqt_exec_callback_QListWidget_eventFilter(self *C.QListWidget, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QListWidget_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QListWidget_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_minimumSizeHint
func miqt_exec_callback_QListWidget_minimumSizeHint(self *C.QListWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QListWidget_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QListWidget_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_sizeHint
func miqt_exec_callback_QListWidget_sizeHint(self *C.QListWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QListWidget_virtualbase_setupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QListWidget) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QListWidget_override_virtual_setupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_setupViewport
func miqt_exec_callback_QListWidget_setupViewport(self *C.QListWidget, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QListWidget{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QListWidget) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QListWidget_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QListWidget) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QListWidget_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_contextMenuEvent
func miqt_exec_callback_QListWidget_contextMenuEvent(self *C.QListWidget, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QListWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QListWidget_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QListWidget) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QListWidget_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_changeEvent
func miqt_exec_callback_QListWidget_changeEvent(self *C.QListWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QListWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_InitStyleOption(option *QStyleOptionFrame) {

	C.QListWidget_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QListWidget) OnInitStyleOption(slot func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame)) {
	ok := C.QListWidget_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_initStyleOption
func miqt_exec_callback_QListWidget_initStyleOption(self *C.QListWidget, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionFrame(option)

	gofunc((&QListWidget{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QListWidget) callVirtualBase_DevType() int {

	return (int)(C.QListWidget_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QListWidget) OnDevType(slot func(super func() int) int) {
	ok := C.QListWidget_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_devType
func miqt_exec_callback_QListWidget_devType(self *C.QListWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_SetVisible(visible bool) {

	C.QListWidget_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QListWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QListWidget_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_setVisible
func miqt_exec_callback_QListWidget_setVisible(self *C.QListWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QListWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QListWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QListWidget_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QListWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QListWidget_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_heightForWidth
func miqt_exec_callback_QListWidget_heightForWidth(self *C.QListWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QListWidget_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QListWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QListWidget_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_hasHeightForWidth
func miqt_exec_callback_QListWidget_hasHeightForWidth(self *C.QListWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QListWidget_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QListWidget) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QListWidget_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_paintEngine
func miqt_exec_callback_QListWidget_paintEngine(self *C.QListWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QListWidget_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QListWidget_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_keyReleaseEvent
func miqt_exec_callback_QListWidget_keyReleaseEvent(self *C.QListWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QListWidget_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QListWidget_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_enterEvent
func miqt_exec_callback_QListWidget_enterEvent(self *C.QListWidget, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QListWidget_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QListWidget_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_leaveEvent
func miqt_exec_callback_QListWidget_leaveEvent(self *C.QListWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QListWidget_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QListWidget_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_moveEvent
func miqt_exec_callback_QListWidget_moveEvent(self *C.QListWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QListWidget_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QListWidget_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_closeEvent
func miqt_exec_callback_QListWidget_closeEvent(self *C.QListWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QListWidget_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QListWidget_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_tabletEvent
func miqt_exec_callback_QListWidget_tabletEvent(self *C.QListWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QListWidget_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QListWidget_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_actionEvent
func miqt_exec_callback_QListWidget_actionEvent(self *C.QListWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QListWidget_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QListWidget_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_showEvent
func miqt_exec_callback_QListWidget_showEvent(self *C.QListWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QListWidget_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QListWidget_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_hideEvent
func miqt_exec_callback_QListWidget_hideEvent(self *C.QListWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QListWidget_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QListWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QListWidget_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_nativeEvent
func miqt_exec_callback_QListWidget_nativeEvent(self *C.QListWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QListWidget_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QListWidget) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QListWidget_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_metric
func miqt_exec_callback_QListWidget_metric(self *C.QListWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_InitPainter(painter *QPainter) {

	C.QListWidget_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QListWidget) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QListWidget_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_initPainter
func miqt_exec_callback_QListWidget_initPainter(self *C.QListWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QListWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QListWidget) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QListWidget_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QListWidget) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QListWidget_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_redirected
func miqt_exec_callback_QListWidget_redirected(self *C.QListWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QListWidget_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QListWidget) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QListWidget_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_sharedPainter
func miqt_exec_callback_QListWidget_sharedPainter(self *C.QListWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QListWidget_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QListWidget_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_childEvent
func miqt_exec_callback_QListWidget_childEvent(self *C.QListWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_CustomEvent(event *QEvent) {

	C.QListWidget_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QListWidget_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_customEvent
func miqt_exec_callback_QListWidget_customEvent(self *C.QListWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QListWidget_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QListWidget) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QListWidget_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_connectNotify
func miqt_exec_callback_QListWidget_connectNotify(self *C.QListWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QListWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QListWidget) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QListWidget_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QListWidget) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QListWidget_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_disconnectNotify
func miqt_exec_callback_QListWidget_disconnectNotify(self *C.QListWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QListWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QListWidget) Delete() {
	C.QListWidget_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QListWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QListWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
