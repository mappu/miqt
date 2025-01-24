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
	return newQListWidgetItem(C.QListWidgetItem_Clone(this.h))
}

func (this *QListWidgetItem) ListWidget() *QListWidget {
	return newQListWidget(C.QListWidgetItem_ListWidget(this.h))
}

func (this *QListWidgetItem) SetSelected(selectVal bool) {
	C.QListWidgetItem_SetSelected(this.h, (C.bool)(selectVal))
}

func (this *QListWidgetItem) IsSelected() bool {
	return (bool)(C.QListWidgetItem_IsSelected(this.h))
}

func (this *QListWidgetItem) SetHidden(hide bool) {
	C.QListWidgetItem_SetHidden(this.h, (C.bool)(hide))
}

func (this *QListWidgetItem) IsHidden() bool {
	return (bool)(C.QListWidgetItem_IsHidden(this.h))
}

func (this *QListWidgetItem) Flags() ItemFlag {
	return (ItemFlag)(C.QListWidgetItem_Flags(this.h))
}

func (this *QListWidgetItem) SetFlags(flags ItemFlag) {
	C.QListWidgetItem_SetFlags(this.h, (C.int)(flags))
}

func (this *QListWidgetItem) Text() string {
	var _ms C.struct_miqt_string = C.QListWidgetItem_Text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidgetItem) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QListWidgetItem_SetText(this.h, text_ms)
}

func (this *QListWidgetItem) Icon() *QIcon {
	_goptr := newQIcon(C.QListWidgetItem_Icon(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetIcon(icon *QIcon) {
	C.QListWidgetItem_SetIcon(this.h, icon.cPointer())
}

func (this *QListWidgetItem) StatusTip() string {
	var _ms C.struct_miqt_string = C.QListWidgetItem_StatusTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidgetItem) SetStatusTip(statusTip string) {
	statusTip_ms := C.struct_miqt_string{}
	statusTip_ms.data = C.CString(statusTip)
	statusTip_ms.len = C.size_t(len(statusTip))
	defer C.free(unsafe.Pointer(statusTip_ms.data))
	C.QListWidgetItem_SetStatusTip(this.h, statusTip_ms)
}

func (this *QListWidgetItem) ToolTip() string {
	var _ms C.struct_miqt_string = C.QListWidgetItem_ToolTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidgetItem) SetToolTip(toolTip string) {
	toolTip_ms := C.struct_miqt_string{}
	toolTip_ms.data = C.CString(toolTip)
	toolTip_ms.len = C.size_t(len(toolTip))
	defer C.free(unsafe.Pointer(toolTip_ms.data))
	C.QListWidgetItem_SetToolTip(this.h, toolTip_ms)
}

func (this *QListWidgetItem) WhatsThis() string {
	var _ms C.struct_miqt_string = C.QListWidgetItem_WhatsThis(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidgetItem) SetWhatsThis(whatsThis string) {
	whatsThis_ms := C.struct_miqt_string{}
	whatsThis_ms.data = C.CString(whatsThis)
	whatsThis_ms.len = C.size_t(len(whatsThis))
	defer C.free(unsafe.Pointer(whatsThis_ms.data))
	C.QListWidgetItem_SetWhatsThis(this.h, whatsThis_ms)
}

func (this *QListWidgetItem) Font() *QFont {
	_goptr := newQFont(C.QListWidgetItem_Font(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetFont(font *QFont) {
	C.QListWidgetItem_SetFont(this.h, font.cPointer())
}

func (this *QListWidgetItem) TextAlignment() int {
	return (int)(C.QListWidgetItem_TextAlignment(this.h))
}

func (this *QListWidgetItem) SetTextAlignment(alignment int) {
	C.QListWidgetItem_SetTextAlignment(this.h, (C.int)(alignment))
}

func (this *QListWidgetItem) SetTextAlignmentWithAlignment(alignment AlignmentFlag) {
	C.QListWidgetItem_SetTextAlignmentWithAlignment(this.h, (C.int)(alignment))
}

func (this *QListWidgetItem) SetTextAlignment2(alignment AlignmentFlag) {
	C.QListWidgetItem_SetTextAlignment2(this.h, (C.int)(alignment))
}

func (this *QListWidgetItem) Background() *QBrush {
	_goptr := newQBrush(C.QListWidgetItem_Background(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetBackground(brush *QBrush) {
	C.QListWidgetItem_SetBackground(this.h, brush.cPointer())
}

func (this *QListWidgetItem) Foreground() *QBrush {
	_goptr := newQBrush(C.QListWidgetItem_Foreground(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetForeground(brush *QBrush) {
	C.QListWidgetItem_SetForeground(this.h, brush.cPointer())
}

func (this *QListWidgetItem) CheckState() CheckState {
	return (CheckState)(C.QListWidgetItem_CheckState(this.h))
}

func (this *QListWidgetItem) SetCheckState(state CheckState) {
	C.QListWidgetItem_SetCheckState(this.h, (C.int)(state))
}

func (this *QListWidgetItem) SizeHint() *QSize {
	_goptr := newQSize(C.QListWidgetItem_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetSizeHint(size *QSize) {
	C.QListWidgetItem_SetSizeHint(this.h, size.cPointer())
}

func (this *QListWidgetItem) Data(role int) *QVariant {
	_goptr := newQVariant(C.QListWidgetItem_Data(this.h, (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetData(role int, value *QVariant) {
	C.QListWidgetItem_SetData(this.h, (C.int)(role), value.cPointer())
}

func (this *QListWidgetItem) OperatorLesser(other *QListWidgetItem) bool {
	return (bool)(C.QListWidgetItem_OperatorLesser(this.h, other.cPointer()))
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
	return (int)(C.QListWidgetItem_Type(this.h))
}

func (this *QListWidgetItem) callVirtualBase_Clone() *QListWidgetItem {

	return newQListWidgetItem(C.QListWidgetItem_virtualbase_Clone(unsafe.Pointer(this.h)))

}
func (this *QListWidgetItem) OnClone(slot func(super func() *QListWidgetItem) *QListWidgetItem) {
	ok := C.QListWidgetItem_override_virtual_Clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidgetItem_Clone
func miqt_exec_callback_QListWidgetItem_Clone(self *C.QListWidgetItem, cb C.intptr_t) *C.QListWidgetItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QListWidgetItem) *QListWidgetItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidgetItem{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QListWidgetItem) callVirtualBase_Data(role int) *QVariant {

	_goptr := newQVariant(C.QListWidgetItem_virtualbase_Data(unsafe.Pointer(this.h), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidgetItem) OnData(slot func(super func(role int) *QVariant, role int) *QVariant) {
	ok := C.QListWidgetItem_override_virtual_Data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidgetItem_Data
func miqt_exec_callback_QListWidgetItem_Data(self *C.QListWidgetItem, cb C.intptr_t, role C.int) *C.QVariant {
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

	C.QListWidgetItem_virtualbase_SetData(unsafe.Pointer(this.h), (C.int)(role), value.cPointer())

}
func (this *QListWidgetItem) OnSetData(slot func(super func(role int, value *QVariant), role int, value *QVariant)) {
	ok := C.QListWidgetItem_override_virtual_SetData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidgetItem_SetData
func miqt_exec_callback_QListWidgetItem_SetData(self *C.QListWidgetItem, cb C.intptr_t, role C.int, value *C.QVariant) {
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

	return (bool)(C.QListWidgetItem_virtualbase_OperatorLesser(unsafe.Pointer(this.h), other.cPointer()))

}
func (this *QListWidgetItem) OnOperatorLesser(slot func(super func(other *QListWidgetItem) bool, other *QListWidgetItem) bool) {
	ok := C.QListWidgetItem_override_virtual_OperatorLesser(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidgetItem_OperatorLesser
func miqt_exec_callback_QListWidgetItem_OperatorLesser(self *C.QListWidgetItem, cb C.intptr_t, other *C.QListWidgetItem) C.bool {
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

	C.QListWidgetItem_virtualbase_Read(unsafe.Pointer(this.h), in.cPointer())

}
func (this *QListWidgetItem) OnRead(slot func(super func(in *QDataStream), in *QDataStream)) {
	ok := C.QListWidgetItem_override_virtual_Read(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidgetItem_Read
func miqt_exec_callback_QListWidgetItem_Read(self *C.QListWidgetItem, cb C.intptr_t, in *C.QDataStream) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(in *QDataStream), in *QDataStream))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDataStream(in)

	gofunc((&QListWidgetItem{h: self}).callVirtualBase_Read, slotval1)

}

func (this *QListWidgetItem) callVirtualBase_Write(out *QDataStream) {

	C.QListWidgetItem_virtualbase_Write(unsafe.Pointer(this.h), out.cPointer())

}
func (this *QListWidgetItem) OnWrite(slot func(super func(out *QDataStream), out *QDataStream)) {
	ok := C.QListWidgetItem_override_virtual_Write(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidgetItem_Write
func miqt_exec_callback_QListWidgetItem_Write(self *C.QListWidgetItem, cb C.intptr_t, out *C.QDataStream) {
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
	return newQMetaObject(C.QListWidget_MetaObject(this.h))
}

func (this *QListWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QListWidget_Metacast(this.h, param1_Cstring))
}

func QListWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QListWidget_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidget) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QListWidget_SetSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QListWidget) Item(row int) *QListWidgetItem {
	return newQListWidgetItem(C.QListWidget_Item(this.h, (C.int)(row)))
}

func (this *QListWidget) Row(item *QListWidgetItem) int {
	return (int)(C.QListWidget_Row(this.h, item.cPointer()))
}

func (this *QListWidget) InsertItem(row int, item *QListWidgetItem) {
	C.QListWidget_InsertItem(this.h, (C.int)(row), item.cPointer())
}

func (this *QListWidget) InsertItem2(row int, label string) {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	C.QListWidget_InsertItem2(this.h, (C.int)(row), label_ms)
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
	C.QListWidget_InsertItems(this.h, (C.int)(row), labels_ma)
}

func (this *QListWidget) AddItem(label string) {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	C.QListWidget_AddItem(this.h, label_ms)
}

func (this *QListWidget) AddItemWithItem(item *QListWidgetItem) {
	C.QListWidget_AddItemWithItem(this.h, item.cPointer())
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
	C.QListWidget_AddItems(this.h, labels_ma)
}

func (this *QListWidget) TakeItem(row int) *QListWidgetItem {
	return newQListWidgetItem(C.QListWidget_TakeItem(this.h, (C.int)(row)))
}

func (this *QListWidget) Count() int {
	return (int)(C.QListWidget_Count(this.h))
}

func (this *QListWidget) CurrentItem() *QListWidgetItem {
	return newQListWidgetItem(C.QListWidget_CurrentItem(this.h))
}

func (this *QListWidget) SetCurrentItem(item *QListWidgetItem) {
	C.QListWidget_SetCurrentItem(this.h, item.cPointer())
}

func (this *QListWidget) SetCurrentItem2(item *QListWidgetItem, command QItemSelectionModel__SelectionFlag) {
	C.QListWidget_SetCurrentItem2(this.h, item.cPointer(), (C.int)(command))
}

func (this *QListWidget) CurrentRow() int {
	return (int)(C.QListWidget_CurrentRow(this.h))
}

func (this *QListWidget) SetCurrentRow(row int) {
	C.QListWidget_SetCurrentRow(this.h, (C.int)(row))
}

func (this *QListWidget) SetCurrentRow2(row int, command QItemSelectionModel__SelectionFlag) {
	C.QListWidget_SetCurrentRow2(this.h, (C.int)(row), (C.int)(command))
}

func (this *QListWidget) ItemAt(p *QPoint) *QListWidgetItem {
	return newQListWidgetItem(C.QListWidget_ItemAt(this.h, p.cPointer()))
}

func (this *QListWidget) ItemAt2(x int, y int) *QListWidgetItem {
	return newQListWidgetItem(C.QListWidget_ItemAt2(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QListWidget) VisualItemRect(item *QListWidgetItem) *QRect {
	_goptr := newQRect(C.QListWidget_VisualItemRect(this.h, item.cPointer()))
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
	return (bool)(C.QListWidget_IsSortingEnabled(this.h))
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
	return (bool)(C.QListWidget_IsPersistentEditorOpen(this.h, item.cPointer()))
}

func (this *QListWidget) ItemWidget(item *QListWidgetItem) *QWidget {
	return newQWidget(C.QListWidget_ItemWidget(this.h, item.cPointer()))
}

func (this *QListWidget) SetItemWidget(item *QListWidgetItem, widget *QWidget) {
	C.QListWidget_SetItemWidget(this.h, item.cPointer(), widget.cPointer())
}

func (this *QListWidget) RemoveItemWidget(item *QListWidgetItem) {
	C.QListWidget_RemoveItemWidget(this.h, item.cPointer())
}

func (this *QListWidget) SelectedItems() []*QListWidgetItem {
	var _ma C.struct_miqt_array = C.QListWidget_SelectedItems(this.h)
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
	var _ma C.struct_miqt_array = C.QListWidget_FindItems(this.h, text_ms, (C.int)(flags))
	_ret := make([]*QListWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QListWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQListWidgetItem(_outCast[i])
	}
	return _ret
}

func (this *QListWidget) Items(data *QMimeData) []*QListWidgetItem {
	var _ma C.struct_miqt_array = C.QListWidget_Items(this.h, data.cPointer())
	_ret := make([]*QListWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QListWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQListWidgetItem(_outCast[i])
	}
	return _ret
}

func (this *QListWidget) IndexFromItem(item *QListWidgetItem) *QModelIndex {
	_goptr := newQModelIndex(C.QListWidget_IndexFromItem(this.h, item.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidget) ItemFromIndex(index *QModelIndex) *QListWidgetItem {
	return newQListWidgetItem(C.QListWidget_ItemFromIndex(this.h, index.cPointer()))
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
	C.QListWidget_connect_ItemPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_ItemPressed
func miqt_exec_callback_QListWidget_ItemPressed(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQListWidgetItem(item)

	gofunc(slotval1)
}

func (this *QListWidget) ItemClicked(item *QListWidgetItem) {
	C.QListWidget_ItemClicked(this.h, item.cPointer())
}
func (this *QListWidget) OnItemClicked(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_ItemClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_ItemClicked
func miqt_exec_callback_QListWidget_ItemClicked(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQListWidgetItem(item)

	gofunc(slotval1)
}

func (this *QListWidget) ItemDoubleClicked(item *QListWidgetItem) {
	C.QListWidget_ItemDoubleClicked(this.h, item.cPointer())
}
func (this *QListWidget) OnItemDoubleClicked(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_ItemDoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_ItemDoubleClicked
func miqt_exec_callback_QListWidget_ItemDoubleClicked(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQListWidgetItem(item)

	gofunc(slotval1)
}

func (this *QListWidget) ItemActivated(item *QListWidgetItem) {
	C.QListWidget_ItemActivated(this.h, item.cPointer())
}
func (this *QListWidget) OnItemActivated(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_ItemActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_ItemActivated
func miqt_exec_callback_QListWidget_ItemActivated(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQListWidgetItem(item)

	gofunc(slotval1)
}

func (this *QListWidget) ItemEntered(item *QListWidgetItem) {
	C.QListWidget_ItemEntered(this.h, item.cPointer())
}
func (this *QListWidget) OnItemEntered(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_ItemEntered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_ItemEntered
func miqt_exec_callback_QListWidget_ItemEntered(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQListWidgetItem(item)

	gofunc(slotval1)
}

func (this *QListWidget) ItemChanged(item *QListWidgetItem) {
	C.QListWidget_ItemChanged(this.h, item.cPointer())
}
func (this *QListWidget) OnItemChanged(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_ItemChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_ItemChanged
func miqt_exec_callback_QListWidget_ItemChanged(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQListWidgetItem(item)

	gofunc(slotval1)
}

func (this *QListWidget) CurrentItemChanged(current *QListWidgetItem, previous *QListWidgetItem) {
	C.QListWidget_CurrentItemChanged(this.h, current.cPointer(), previous.cPointer())
}
func (this *QListWidget) OnCurrentItemChanged(slot func(current *QListWidgetItem, previous *QListWidgetItem)) {
	C.QListWidget_connect_CurrentItemChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_CurrentItemChanged
func miqt_exec_callback_QListWidget_CurrentItemChanged(cb C.intptr_t, current *C.QListWidgetItem, previous *C.QListWidgetItem) {
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
	C.QListWidget_CurrentTextChanged(this.h, currentText_ms)
}
func (this *QListWidget) OnCurrentTextChanged(slot func(currentText string)) {
	C.QListWidget_connect_CurrentTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_CurrentTextChanged
func miqt_exec_callback_QListWidget_CurrentTextChanged(cb C.intptr_t, currentText C.struct_miqt_string) {
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
	C.QListWidget_CurrentRowChanged(this.h, (C.int)(currentRow))
}
func (this *QListWidget) OnCurrentRowChanged(slot func(currentRow int)) {
	C.QListWidget_connect_CurrentRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_CurrentRowChanged
func miqt_exec_callback_QListWidget_CurrentRowChanged(cb C.intptr_t, currentRow C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(currentRow int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(currentRow)

	gofunc(slotval1)
}

func (this *QListWidget) ItemSelectionChanged() {
	C.QListWidget_ItemSelectionChanged(this.h)
}
func (this *QListWidget) OnItemSelectionChanged(slot func()) {
	C.QListWidget_connect_ItemSelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_ItemSelectionChanged
func miqt_exec_callback_QListWidget_ItemSelectionChanged(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QListWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QListWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QListWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidget) SortItems1(order SortOrder) {
	C.QListWidget_SortItems1(this.h, (C.int)(order))
}

func (this *QListWidget) ScrollToItem2(item *QListWidgetItem, hint QAbstractItemView__ScrollHint) {
	C.QListWidget_ScrollToItem2(this.h, item.cPointer(), (C.int)(hint))
}

func (this *QListWidget) callVirtualBase_SetSelectionModel(selectionModel *QItemSelectionModel) {

	C.QListWidget_virtualbase_SetSelectionModel(unsafe.Pointer(this.h), selectionModel.cPointer())

}
func (this *QListWidget) OnSetSelectionModel(slot func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel)) {
	ok := C.QListWidget_override_virtual_SetSelectionModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_SetSelectionModel
func miqt_exec_callback_QListWidget_SetSelectionModel(self *C.QListWidget, cb C.intptr_t, selectionModel *C.QItemSelectionModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelectionModel(selectionModel)

	gofunc((&QListWidget{h: self}).callVirtualBase_SetSelectionModel, slotval1)

}

func (this *QListWidget) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QListWidget_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QListWidget_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_DropEvent
func miqt_exec_callback_QListWidget_DropEvent(self *C.QListWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QListWidget_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QListWidget) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QListWidget_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_Event
func miqt_exec_callback_QListWidget_Event(self *C.QListWidget, cb C.intptr_t, e *C.QEvent) C.bool {
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

	var _ma C.struct_miqt_array = C.QListWidget_virtualbase_MimeTypes(unsafe.Pointer(this.h))
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
	ok := C.QListWidget_override_virtual_MimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_MimeTypes
func miqt_exec_callback_QListWidget_MimeTypes(self *C.QListWidget, cb C.intptr_t) C.struct_miqt_array {
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

	return newQMimeData(C.QListWidget_virtualbase_MimeData(unsafe.Pointer(this.h), items_ma))

}
func (this *QListWidget) OnMimeData(slot func(super func(items []*QListWidgetItem) *QMimeData, items []*QListWidgetItem) *QMimeData) {
	ok := C.QListWidget_override_virtual_MimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_MimeData
func miqt_exec_callback_QListWidget_MimeData(self *C.QListWidget, cb C.intptr_t, items C.struct_miqt_array) *C.QMimeData {
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

	return (bool)(C.QListWidget_virtualbase_DropMimeData(unsafe.Pointer(this.h), (C.int)(index), data.cPointer(), (C.int)(action)))

}
func (this *QListWidget) OnDropMimeData(slot func(super func(index int, data *QMimeData, action DropAction) bool, index int, data *QMimeData, action DropAction) bool) {
	ok := C.QListWidget_override_virtual_DropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_DropMimeData
func miqt_exec_callback_QListWidget_DropMimeData(self *C.QListWidget, cb C.intptr_t, index C.int, data *C.QMimeData, action C.int) C.bool {
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

	return (DropAction)(C.QListWidget_virtualbase_SupportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QListWidget) OnSupportedDropActions(slot func(super func() DropAction) DropAction) {
	ok := C.QListWidget_override_virtual_SupportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_SupportedDropActions
func miqt_exec_callback_QListWidget_SupportedDropActions(self *C.QListWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_SupportedDropActions)

	return (C.int)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_VisualRect(index *QModelIndex) *QRect {

	_goptr := newQRect(C.QListWidget_virtualbase_VisualRect(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnVisualRect(slot func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect) {
	ok := C.QListWidget_override_virtual_VisualRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_VisualRect
func miqt_exec_callback_QListWidget_VisualRect(self *C.QListWidget, cb C.intptr_t, index *C.QModelIndex) *C.QRect {
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

	C.QListWidget_virtualbase_ScrollTo(unsafe.Pointer(this.h), index.cPointer(), (C.int)(hint))

}
func (this *QListWidget) OnScrollTo(slot func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint)) {
	ok := C.QListWidget_override_virtual_ScrollTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_ScrollTo
func miqt_exec_callback_QListWidget_ScrollTo(self *C.QListWidget, cb C.intptr_t, index *C.QModelIndex, hint C.int) {
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

	_goptr := newQModelIndex(C.QListWidget_virtualbase_IndexAt(unsafe.Pointer(this.h), p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnIndexAt(slot func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex) {
	ok := C.QListWidget_override_virtual_IndexAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_IndexAt
func miqt_exec_callback_QListWidget_IndexAt(self *C.QListWidget, cb C.intptr_t, p *C.QPoint) *C.QModelIndex {
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

	C.QListWidget_virtualbase_DoItemsLayout(unsafe.Pointer(this.h))

}
func (this *QListWidget) OnDoItemsLayout(slot func(super func())) {
	ok := C.QListWidget_override_virtual_DoItemsLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_DoItemsLayout
func miqt_exec_callback_QListWidget_DoItemsLayout(self *C.QListWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QListWidget{h: self}).callVirtualBase_DoItemsLayout)

}

func (this *QListWidget) callVirtualBase_Reset() {

	C.QListWidget_virtualbase_Reset(unsafe.Pointer(this.h))

}
func (this *QListWidget) OnReset(slot func(super func())) {
	ok := C.QListWidget_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_Reset
func miqt_exec_callback_QListWidget_Reset(self *C.QListWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QListWidget{h: self}).callVirtualBase_Reset)

}

func (this *QListWidget) callVirtualBase_SetRootIndex(index *QModelIndex) {

	C.QListWidget_virtualbase_SetRootIndex(unsafe.Pointer(this.h), index.cPointer())

}
func (this *QListWidget) OnSetRootIndex(slot func(super func(index *QModelIndex), index *QModelIndex)) {
	ok := C.QListWidget_override_virtual_SetRootIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_SetRootIndex
func miqt_exec_callback_QListWidget_SetRootIndex(self *C.QListWidget, cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex), index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc((&QListWidget{h: self}).callVirtualBase_SetRootIndex, slotval1)

}

func (this *QListWidget) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QListWidget_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QListWidget) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QListWidget_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_ScrollContentsBy
func miqt_exec_callback_QListWidget_ScrollContentsBy(self *C.QListWidget, cb C.intptr_t, dx C.int, dy C.int) {
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

	C.QListWidget_virtualbase_DataChanged(unsafe.Pointer(this.h), topLeft.cPointer(), bottomRight.cPointer(), roles_ma)

}
func (this *QListWidget) OnDataChanged(slot func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int)) {
	ok := C.QListWidget_override_virtual_DataChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_DataChanged
func miqt_exec_callback_QListWidget_DataChanged(self *C.QListWidget, cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles C.struct_miqt_array) {
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

	C.QListWidget_virtualbase_RowsInserted(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QListWidget) OnRowsInserted(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QListWidget_override_virtual_RowsInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_RowsInserted
func miqt_exec_callback_QListWidget_RowsInserted(self *C.QListWidget, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
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

	C.QListWidget_virtualbase_RowsAboutToBeRemoved(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QListWidget) OnRowsAboutToBeRemoved(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QListWidget_override_virtual_RowsAboutToBeRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_RowsAboutToBeRemoved
func miqt_exec_callback_QListWidget_RowsAboutToBeRemoved(self *C.QListWidget, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
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

	C.QListWidget_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnMouseMoveEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QListWidget_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_MouseMoveEvent
func miqt_exec_callback_QListWidget_MouseMoveEvent(self *C.QListWidget, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QListWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QListWidget_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QListWidget_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_MouseReleaseEvent
func miqt_exec_callback_QListWidget_MouseReleaseEvent(self *C.QListWidget, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QListWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QListWidget_virtualbase_WheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	ok := C.QListWidget_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_WheelEvent
func miqt_exec_callback_QListWidget_WheelEvent(self *C.QListWidget, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(e)

	gofunc((&QListWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_TimerEvent(e *QTimerEvent) {

	C.QListWidget_virtualbase_TimerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnTimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	ok := C.QListWidget_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_TimerEvent
func miqt_exec_callback_QListWidget_TimerEvent(self *C.QListWidget, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(e)

	gofunc((&QListWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_ResizeEvent(e *QResizeEvent) {

	C.QListWidget_virtualbase_ResizeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnResizeEvent(slot func(super func(e *QResizeEvent), e *QResizeEvent)) {
	ok := C.QListWidget_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_ResizeEvent
func miqt_exec_callback_QListWidget_ResizeEvent(self *C.QListWidget, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QResizeEvent), e *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(e)

	gofunc((&QListWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_DragMoveEvent(e *QDragMoveEvent) {

	C.QListWidget_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnDragMoveEvent(slot func(super func(e *QDragMoveEvent), e *QDragMoveEvent)) {
	ok := C.QListWidget_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_DragMoveEvent
func miqt_exec_callback_QListWidget_DragMoveEvent(self *C.QListWidget, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragMoveEvent), e *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(e)

	gofunc((&QListWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_DragLeaveEvent(e *QDragLeaveEvent) {

	C.QListWidget_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnDragLeaveEvent(slot func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent)) {
	ok := C.QListWidget_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_DragLeaveEvent
func miqt_exec_callback_QListWidget_DragLeaveEvent(self *C.QListWidget, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(e)

	gofunc((&QListWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_StartDrag(supportedActions DropAction) {

	C.QListWidget_virtualbase_StartDrag(unsafe.Pointer(this.h), (C.int)(supportedActions))

}
func (this *QListWidget) OnStartDrag(slot func(super func(supportedActions DropAction), supportedActions DropAction)) {
	ok := C.QListWidget_override_virtual_StartDrag(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_StartDrag
func miqt_exec_callback_QListWidget_StartDrag(self *C.QListWidget, cb C.intptr_t, supportedActions C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(supportedActions DropAction), supportedActions DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(supportedActions)

	gofunc((&QListWidget{h: self}).callVirtualBase_StartDrag, slotval1)

}

func (this *QListWidget) callVirtualBase_InitViewItemOption(option *QStyleOptionViewItem) {

	C.QListWidget_virtualbase_InitViewItemOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QListWidget) OnInitViewItemOption(slot func(super func(option *QStyleOptionViewItem), option *QStyleOptionViewItem)) {
	ok := C.QListWidget_override_virtual_InitViewItemOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_InitViewItemOption
func miqt_exec_callback_QListWidget_InitViewItemOption(self *C.QListWidget, cb C.intptr_t, option *C.QStyleOptionViewItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionViewItem), option *QStyleOptionViewItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionViewItem(option)

	gofunc((&QListWidget{h: self}).callVirtualBase_InitViewItemOption, slotval1)

}

func (this *QListWidget) callVirtualBase_PaintEvent(e *QPaintEvent) {

	C.QListWidget_virtualbase_PaintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	ok := C.QListWidget_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_PaintEvent
func miqt_exec_callback_QListWidget_PaintEvent(self *C.QListWidget, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(e)

	gofunc((&QListWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_HorizontalOffset() int {

	return (int)(C.QListWidget_virtualbase_HorizontalOffset(unsafe.Pointer(this.h)))

}
func (this *QListWidget) OnHorizontalOffset(slot func(super func() int) int) {
	ok := C.QListWidget_override_virtual_HorizontalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_HorizontalOffset
func miqt_exec_callback_QListWidget_HorizontalOffset(self *C.QListWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_HorizontalOffset)

	return (C.int)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_VerticalOffset() int {

	return (int)(C.QListWidget_virtualbase_VerticalOffset(unsafe.Pointer(this.h)))

}
func (this *QListWidget) OnVerticalOffset(slot func(super func() int) int) {
	ok := C.QListWidget_override_virtual_VerticalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_VerticalOffset
func miqt_exec_callback_QListWidget_VerticalOffset(self *C.QListWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_VerticalOffset)

	return (C.int)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_MoveCursor(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex {

	_goptr := newQModelIndex(C.QListWidget_virtualbase_MoveCursor(unsafe.Pointer(this.h), (C.int)(cursorAction), (C.int)(modifiers)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnMoveCursor(slot func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex) {
	ok := C.QListWidget_override_virtual_MoveCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_MoveCursor
func miqt_exec_callback_QListWidget_MoveCursor(self *C.QListWidget, cb C.intptr_t, cursorAction C.int, modifiers C.int) *C.QModelIndex {
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

	C.QListWidget_virtualbase_SetSelection(unsafe.Pointer(this.h), rect.cPointer(), (C.int)(command))

}
func (this *QListWidget) OnSetSelection(slot func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag)) {
	ok := C.QListWidget_override_virtual_SetSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_SetSelection
func miqt_exec_callback_QListWidget_SetSelection(self *C.QListWidget, cb C.intptr_t, rect *C.QRect, command C.int) {
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

	_goptr := newQRegion(C.QListWidget_virtualbase_VisualRegionForSelection(unsafe.Pointer(this.h), selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnVisualRegionForSelection(slot func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion) {
	ok := C.QListWidget_override_virtual_VisualRegionForSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_VisualRegionForSelection
func miqt_exec_callback_QListWidget_VisualRegionForSelection(self *C.QListWidget, cb C.intptr_t, selection *C.QItemSelection) *C.QRegion {
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

	var _ma C.struct_miqt_array = C.QListWidget_virtualbase_SelectedIndexes(unsafe.Pointer(this.h))
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
	ok := C.QListWidget_override_virtual_SelectedIndexes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_SelectedIndexes
func miqt_exec_callback_QListWidget_SelectedIndexes(self *C.QListWidget, cb C.intptr_t) C.struct_miqt_array {
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

	C.QListWidget_virtualbase_UpdateGeometries(unsafe.Pointer(this.h))

}
func (this *QListWidget) OnUpdateGeometries(slot func(super func())) {
	ok := C.QListWidget_override_virtual_UpdateGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_UpdateGeometries
func miqt_exec_callback_QListWidget_UpdateGeometries(self *C.QListWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QListWidget{h: self}).callVirtualBase_UpdateGeometries)

}

func (this *QListWidget) callVirtualBase_IsIndexHidden(index *QModelIndex) bool {

	return (bool)(C.QListWidget_virtualbase_IsIndexHidden(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QListWidget) OnIsIndexHidden(slot func(super func(index *QModelIndex) bool, index *QModelIndex) bool) {
	ok := C.QListWidget_override_virtual_IsIndexHidden(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_IsIndexHidden
func miqt_exec_callback_QListWidget_IsIndexHidden(self *C.QListWidget, cb C.intptr_t, index *C.QModelIndex) C.bool {
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

	C.QListWidget_virtualbase_SelectionChanged(unsafe.Pointer(this.h), selected.cPointer(), deselected.cPointer())

}
func (this *QListWidget) OnSelectionChanged(slot func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection)) {
	ok := C.QListWidget_override_virtual_SelectionChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_SelectionChanged
func miqt_exec_callback_QListWidget_SelectionChanged(self *C.QListWidget, cb C.intptr_t, selected *C.QItemSelection, deselected *C.QItemSelection) {
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

	C.QListWidget_virtualbase_CurrentChanged(unsafe.Pointer(this.h), current.cPointer(), previous.cPointer())

}
func (this *QListWidget) OnCurrentChanged(slot func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex)) {
	ok := C.QListWidget_override_virtual_CurrentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_CurrentChanged
func miqt_exec_callback_QListWidget_CurrentChanged(self *C.QListWidget, cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
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

	_goptr := newQSize(C.QListWidget_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QListWidget_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_ViewportSizeHint
func miqt_exec_callback_QListWidget_ViewportSizeHint(self *C.QListWidget, cb C.intptr_t) *C.QSize {
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

	C.QListWidget_virtualbase_KeyboardSearch(unsafe.Pointer(this.h), search_ms)

}
func (this *QListWidget) OnKeyboardSearch(slot func(super func(search string), search string)) {
	ok := C.QListWidget_override_virtual_KeyboardSearch(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_KeyboardSearch
func miqt_exec_callback_QListWidget_KeyboardSearch(self *C.QListWidget, cb C.intptr_t, search C.struct_miqt_string) {
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

	return (int)(C.QListWidget_virtualbase_SizeHintForRow(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QListWidget) OnSizeHintForRow(slot func(super func(row int) int, row int) int) {
	ok := C.QListWidget_override_virtual_SizeHintForRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_SizeHintForRow
func miqt_exec_callback_QListWidget_SizeHintForRow(self *C.QListWidget, cb C.intptr_t, row C.int) C.int {
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

	return (int)(C.QListWidget_virtualbase_SizeHintForColumn(unsafe.Pointer(this.h), (C.int)(column)))

}
func (this *QListWidget) OnSizeHintForColumn(slot func(super func(column int) int, column int) int) {
	ok := C.QListWidget_override_virtual_SizeHintForColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_SizeHintForColumn
func miqt_exec_callback_QListWidget_SizeHintForColumn(self *C.QListWidget, cb C.intptr_t, column C.int) C.int {
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

	return newQAbstractItemDelegate(C.QListWidget_virtualbase_ItemDelegateForIndex(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QListWidget) OnItemDelegateForIndex(slot func(super func(index *QModelIndex) *QAbstractItemDelegate, index *QModelIndex) *QAbstractItemDelegate) {
	ok := C.QListWidget_override_virtual_ItemDelegateForIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_ItemDelegateForIndex
func miqt_exec_callback_QListWidget_ItemDelegateForIndex(self *C.QListWidget, cb C.intptr_t, index *C.QModelIndex) *C.QAbstractItemDelegate {
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

	_goptr := newQVariant(C.QListWidget_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QListWidget_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_InputMethodQuery
func miqt_exec_callback_QListWidget_InputMethodQuery(self *C.QListWidget, cb C.intptr_t, query C.int) *C.QVariant {
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

	C.QListWidget_virtualbase_SelectAll(unsafe.Pointer(this.h))

}
func (this *QListWidget) OnSelectAll(slot func(super func())) {
	ok := C.QListWidget_override_virtual_SelectAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_SelectAll
func miqt_exec_callback_QListWidget_SelectAll(self *C.QListWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QListWidget{h: self}).callVirtualBase_SelectAll)

}

func (this *QListWidget) callVirtualBase_UpdateEditorData() {

	C.QListWidget_virtualbase_UpdateEditorData(unsafe.Pointer(this.h))

}
func (this *QListWidget) OnUpdateEditorData(slot func(super func())) {
	ok := C.QListWidget_override_virtual_UpdateEditorData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_UpdateEditorData
func miqt_exec_callback_QListWidget_UpdateEditorData(self *C.QListWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QListWidget{h: self}).callVirtualBase_UpdateEditorData)

}

func (this *QListWidget) callVirtualBase_UpdateEditorGeometries() {

	C.QListWidget_virtualbase_UpdateEditorGeometries(unsafe.Pointer(this.h))

}
func (this *QListWidget) OnUpdateEditorGeometries(slot func(super func())) {
	ok := C.QListWidget_override_virtual_UpdateEditorGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_UpdateEditorGeometries
func miqt_exec_callback_QListWidget_UpdateEditorGeometries(self *C.QListWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QListWidget{h: self}).callVirtualBase_UpdateEditorGeometries)

}

func (this *QListWidget) callVirtualBase_VerticalScrollbarAction(action int) {

	C.QListWidget_virtualbase_VerticalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QListWidget) OnVerticalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QListWidget_override_virtual_VerticalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_VerticalScrollbarAction
func miqt_exec_callback_QListWidget_VerticalScrollbarAction(self *C.QListWidget, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QListWidget{h: self}).callVirtualBase_VerticalScrollbarAction, slotval1)

}

func (this *QListWidget) callVirtualBase_HorizontalScrollbarAction(action int) {

	C.QListWidget_virtualbase_HorizontalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QListWidget) OnHorizontalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QListWidget_override_virtual_HorizontalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_HorizontalScrollbarAction
func miqt_exec_callback_QListWidget_HorizontalScrollbarAction(self *C.QListWidget, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QListWidget{h: self}).callVirtualBase_HorizontalScrollbarAction, slotval1)

}

func (this *QListWidget) callVirtualBase_VerticalScrollbarValueChanged(value int) {

	C.QListWidget_virtualbase_VerticalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QListWidget) OnVerticalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QListWidget_override_virtual_VerticalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_VerticalScrollbarValueChanged
func miqt_exec_callback_QListWidget_VerticalScrollbarValueChanged(self *C.QListWidget, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QListWidget{h: self}).callVirtualBase_VerticalScrollbarValueChanged, slotval1)

}

func (this *QListWidget) callVirtualBase_HorizontalScrollbarValueChanged(value int) {

	C.QListWidget_virtualbase_HorizontalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QListWidget) OnHorizontalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QListWidget_override_virtual_HorizontalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_HorizontalScrollbarValueChanged
func miqt_exec_callback_QListWidget_HorizontalScrollbarValueChanged(self *C.QListWidget, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QListWidget{h: self}).callVirtualBase_HorizontalScrollbarValueChanged, slotval1)

}

func (this *QListWidget) callVirtualBase_CloseEditor(editor *QWidget, hint QAbstractItemDelegate__EndEditHint) {

	C.QListWidget_virtualbase_CloseEditor(unsafe.Pointer(this.h), editor.cPointer(), (C.int)(hint))

}
func (this *QListWidget) OnCloseEditor(slot func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint)) {
	ok := C.QListWidget_override_virtual_CloseEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_CloseEditor
func miqt_exec_callback_QListWidget_CloseEditor(self *C.QListWidget, cb C.intptr_t, editor *C.QWidget, hint C.int) {
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

	C.QListWidget_virtualbase_CommitData(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QListWidget) OnCommitData(slot func(super func(editor *QWidget), editor *QWidget)) {
	ok := C.QListWidget_override_virtual_CommitData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_CommitData
func miqt_exec_callback_QListWidget_CommitData(self *C.QListWidget, cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget), editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	gofunc((&QListWidget{h: self}).callVirtualBase_CommitData, slotval1)

}

func (this *QListWidget) callVirtualBase_EditorDestroyed(editor *QObject) {

	C.QListWidget_virtualbase_EditorDestroyed(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QListWidget) OnEditorDestroyed(slot func(super func(editor *QObject), editor *QObject)) {
	ok := C.QListWidget_override_virtual_EditorDestroyed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_EditorDestroyed
func miqt_exec_callback_QListWidget_EditorDestroyed(self *C.QListWidget, cb C.intptr_t, editor *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QObject), editor *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(editor)

	gofunc((&QListWidget{h: self}).callVirtualBase_EditorDestroyed, slotval1)

}

func (this *QListWidget) callVirtualBase_Edit2(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool {

	return (bool)(C.QListWidget_virtualbase_Edit2(unsafe.Pointer(this.h), index.cPointer(), (C.int)(trigger), event.cPointer()))

}
func (this *QListWidget) OnEdit2(slot func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool) {
	ok := C.QListWidget_override_virtual_Edit2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_Edit2
func miqt_exec_callback_QListWidget_Edit2(self *C.QListWidget, cb C.intptr_t, index *C.QModelIndex, trigger C.int, event *C.QEvent) C.bool {
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

	return (QItemSelectionModel__SelectionFlag)(C.QListWidget_virtualbase_SelectionCommand(unsafe.Pointer(this.h), index.cPointer(), event.cPointer()))

}
func (this *QListWidget) OnSelectionCommand(slot func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag) {
	ok := C.QListWidget_override_virtual_SelectionCommand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_SelectionCommand
func miqt_exec_callback_QListWidget_SelectionCommand(self *C.QListWidget, cb C.intptr_t, index *C.QModelIndex, event *C.QEvent) C.int {
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

	return (bool)(C.QListWidget_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QListWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QListWidget_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_FocusNextPrevChild
func miqt_exec_callback_QListWidget_FocusNextPrevChild(self *C.QListWidget, cb C.intptr_t, next C.bool) C.bool {
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

	return (bool)(C.QListWidget_virtualbase_ViewportEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QListWidget) OnViewportEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QListWidget_override_virtual_ViewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_ViewportEvent
func miqt_exec_callback_QListWidget_ViewportEvent(self *C.QListWidget, cb C.intptr_t, event *C.QEvent) C.bool {
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

	C.QListWidget_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QListWidget_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_MousePressEvent
func miqt_exec_callback_QListWidget_MousePressEvent(self *C.QListWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QListWidget_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QListWidget_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_MouseDoubleClickEvent
func miqt_exec_callback_QListWidget_MouseDoubleClickEvent(self *C.QListWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QListWidget_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QListWidget_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_DragEnterEvent
func miqt_exec_callback_QListWidget_DragEnterEvent(self *C.QListWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QListWidget_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QListWidget_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_FocusInEvent
func miqt_exec_callback_QListWidget_FocusInEvent(self *C.QListWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QListWidget_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QListWidget_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_FocusOutEvent
func miqt_exec_callback_QListWidget_FocusOutEvent(self *C.QListWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QListWidget_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QListWidget_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_KeyPressEvent
func miqt_exec_callback_QListWidget_KeyPressEvent(self *C.QListWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QListWidget_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QListWidget_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_InputMethodEvent
func miqt_exec_callback_QListWidget_InputMethodEvent(self *C.QListWidget, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QListWidget_virtualbase_EventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QListWidget) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QListWidget_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_EventFilter
func miqt_exec_callback_QListWidget_EventFilter(self *C.QListWidget, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
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

	_goptr := newQSize(C.QListWidget_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QListWidget_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_MinimumSizeHint
func miqt_exec_callback_QListWidget_MinimumSizeHint(self *C.QListWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QListWidget_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QListWidget_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_SizeHint
func miqt_exec_callback_QListWidget_SizeHint(self *C.QListWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QListWidget_virtualbase_SetupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QListWidget) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QListWidget_override_virtual_SetupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_SetupViewport
func miqt_exec_callback_QListWidget_SetupViewport(self *C.QListWidget, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QListWidget{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QListWidget) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QListWidget_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QListWidget) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QListWidget_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_ContextMenuEvent
func miqt_exec_callback_QListWidget_ContextMenuEvent(self *C.QListWidget, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QListWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QListWidget_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QListWidget) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QListWidget_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_ChangeEvent
func miqt_exec_callback_QListWidget_ChangeEvent(self *C.QListWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QListWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_InitStyleOption(option *QStyleOptionFrame) {

	C.QListWidget_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QListWidget) OnInitStyleOption(slot func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame)) {
	ok := C.QListWidget_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_InitStyleOption
func miqt_exec_callback_QListWidget_InitStyleOption(self *C.QListWidget, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionFrame(option)

	gofunc((&QListWidget{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QListWidget) callVirtualBase_DevType() int {

	return (int)(C.QListWidget_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QListWidget) OnDevType(slot func(super func() int) int) {
	ok := C.QListWidget_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_DevType
func miqt_exec_callback_QListWidget_DevType(self *C.QListWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_SetVisible(visible bool) {

	C.QListWidget_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QListWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QListWidget_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_SetVisible
func miqt_exec_callback_QListWidget_SetVisible(self *C.QListWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QListWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QListWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QListWidget_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QListWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QListWidget_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_HeightForWidth
func miqt_exec_callback_QListWidget_HeightForWidth(self *C.QListWidget, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QListWidget_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QListWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QListWidget_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_HasHeightForWidth
func miqt_exec_callback_QListWidget_HasHeightForWidth(self *C.QListWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QListWidget_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QListWidget) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QListWidget_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_PaintEngine
func miqt_exec_callback_QListWidget_PaintEngine(self *C.QListWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QListWidget_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QListWidget_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_KeyReleaseEvent
func miqt_exec_callback_QListWidget_KeyReleaseEvent(self *C.QListWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QListWidget_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QListWidget_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_EnterEvent
func miqt_exec_callback_QListWidget_EnterEvent(self *C.QListWidget, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QListWidget_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QListWidget_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_LeaveEvent
func miqt_exec_callback_QListWidget_LeaveEvent(self *C.QListWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QListWidget_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QListWidget_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_MoveEvent
func miqt_exec_callback_QListWidget_MoveEvent(self *C.QListWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QListWidget_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QListWidget_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_CloseEvent
func miqt_exec_callback_QListWidget_CloseEvent(self *C.QListWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QListWidget_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QListWidget_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_TabletEvent
func miqt_exec_callback_QListWidget_TabletEvent(self *C.QListWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QListWidget_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QListWidget_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_ActionEvent
func miqt_exec_callback_QListWidget_ActionEvent(self *C.QListWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QListWidget_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QListWidget_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_ShowEvent
func miqt_exec_callback_QListWidget_ShowEvent(self *C.QListWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QListWidget_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QListWidget_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_HideEvent
func miqt_exec_callback_QListWidget_HideEvent(self *C.QListWidget, cb C.intptr_t, event *C.QHideEvent) {
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

	return (bool)(C.QListWidget_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QListWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QListWidget_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_NativeEvent
func miqt_exec_callback_QListWidget_NativeEvent(self *C.QListWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	return (int)(C.QListWidget_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QListWidget) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QListWidget_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_Metric
func miqt_exec_callback_QListWidget_Metric(self *C.QListWidget, cb C.intptr_t, param1 C.int) C.int {
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

	C.QListWidget_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QListWidget) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QListWidget_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_InitPainter
func miqt_exec_callback_QListWidget_InitPainter(self *C.QListWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QListWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QListWidget) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QListWidget_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QListWidget) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QListWidget_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_Redirected
func miqt_exec_callback_QListWidget_Redirected(self *C.QListWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QListWidget_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QListWidget) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QListWidget_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_SharedPainter
func miqt_exec_callback_QListWidget_SharedPainter(self *C.QListWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QListWidget_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QListWidget_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_ChildEvent
func miqt_exec_callback_QListWidget_ChildEvent(self *C.QListWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_CustomEvent(event *QEvent) {

	C.QListWidget_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QListWidget_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_CustomEvent
func miqt_exec_callback_QListWidget_CustomEvent(self *C.QListWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QListWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QListWidget_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QListWidget) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QListWidget_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_ConnectNotify
func miqt_exec_callback_QListWidget_ConnectNotify(self *C.QListWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QListWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QListWidget) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QListWidget_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QListWidget) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QListWidget_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QListWidget_DisconnectNotify
func miqt_exec_callback_QListWidget_DisconnectNotify(self *C.QListWidget, cb C.intptr_t, signal *C.QMetaMethod) {
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
