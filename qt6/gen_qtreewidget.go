package qt6

/*

#include "gen_qtreewidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTreeWidgetItem__ItemType int

const (
	QTreeWidgetItem__Type     QTreeWidgetItem__ItemType = 0
	QTreeWidgetItem__UserType QTreeWidgetItem__ItemType = 1000
)

type QTreeWidgetItem__ChildIndicatorPolicy int

const (
	QTreeWidgetItem__ShowIndicator                  QTreeWidgetItem__ChildIndicatorPolicy = 0
	QTreeWidgetItem__DontShowIndicator              QTreeWidgetItem__ChildIndicatorPolicy = 1
	QTreeWidgetItem__DontShowIndicatorWhenChildless QTreeWidgetItem__ChildIndicatorPolicy = 2
)

type QTreeWidgetItem struct {
	h *C.QTreeWidgetItem
}

func (this *QTreeWidgetItem) cPointer() *C.QTreeWidgetItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTreeWidgetItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTreeWidgetItem constructs the type using only CGO pointers.
func newQTreeWidgetItem(h *C.QTreeWidgetItem) *QTreeWidgetItem {
	if h == nil {
		return nil
	}

	return &QTreeWidgetItem{h: h}
}

// UnsafeNewQTreeWidgetItem constructs the type using only unsafe pointers.
func UnsafeNewQTreeWidgetItem(h unsafe.Pointer) *QTreeWidgetItem {
	return newQTreeWidgetItem((*C.QTreeWidgetItem)(h))
}

// NewQTreeWidgetItem constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem() *QTreeWidgetItem {

	return newQTreeWidgetItem(C.QTreeWidgetItem_new())
}

// NewQTreeWidgetItem2 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem2(strings []string) *QTreeWidgetItem {
	strings_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	for i := range strings {
		strings_i_ms := C.struct_miqt_string{}
		strings_i_ms.data = C.CString(strings[i])
		strings_i_ms.len = C.size_t(len(strings[i]))
		defer C.free(unsafe.Pointer(strings_i_ms.data))
		strings_CArray[i] = strings_i_ms
	}
	strings_ma := C.struct_miqt_array{len: C.size_t(len(strings)), data: unsafe.Pointer(strings_CArray)}

	return newQTreeWidgetItem(C.QTreeWidgetItem_new2(strings_ma))
}

// NewQTreeWidgetItem3 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem3(treeview *QTreeWidget) *QTreeWidgetItem {

	return newQTreeWidgetItem(C.QTreeWidgetItem_new3(treeview.cPointer()))
}

// NewQTreeWidgetItem4 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem4(treeview *QTreeWidget, strings []string) *QTreeWidgetItem {
	strings_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	for i := range strings {
		strings_i_ms := C.struct_miqt_string{}
		strings_i_ms.data = C.CString(strings[i])
		strings_i_ms.len = C.size_t(len(strings[i]))
		defer C.free(unsafe.Pointer(strings_i_ms.data))
		strings_CArray[i] = strings_i_ms
	}
	strings_ma := C.struct_miqt_array{len: C.size_t(len(strings)), data: unsafe.Pointer(strings_CArray)}

	return newQTreeWidgetItem(C.QTreeWidgetItem_new4(treeview.cPointer(), strings_ma))
}

// NewQTreeWidgetItem5 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem5(treeview *QTreeWidget, after *QTreeWidgetItem) *QTreeWidgetItem {

	return newQTreeWidgetItem(C.QTreeWidgetItem_new5(treeview.cPointer(), after.cPointer()))
}

// NewQTreeWidgetItem6 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem6(parent *QTreeWidgetItem) *QTreeWidgetItem {

	return newQTreeWidgetItem(C.QTreeWidgetItem_new6(parent.cPointer()))
}

// NewQTreeWidgetItem7 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem7(parent *QTreeWidgetItem, strings []string) *QTreeWidgetItem {
	strings_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	for i := range strings {
		strings_i_ms := C.struct_miqt_string{}
		strings_i_ms.data = C.CString(strings[i])
		strings_i_ms.len = C.size_t(len(strings[i]))
		defer C.free(unsafe.Pointer(strings_i_ms.data))
		strings_CArray[i] = strings_i_ms
	}
	strings_ma := C.struct_miqt_array{len: C.size_t(len(strings)), data: unsafe.Pointer(strings_CArray)}

	return newQTreeWidgetItem(C.QTreeWidgetItem_new7(parent.cPointer(), strings_ma))
}

// NewQTreeWidgetItem8 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem8(parent *QTreeWidgetItem, after *QTreeWidgetItem) *QTreeWidgetItem {

	return newQTreeWidgetItem(C.QTreeWidgetItem_new8(parent.cPointer(), after.cPointer()))
}

// NewQTreeWidgetItem9 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem9(other *QTreeWidgetItem) *QTreeWidgetItem {

	return newQTreeWidgetItem(C.QTreeWidgetItem_new9(other.cPointer()))
}

// NewQTreeWidgetItem10 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem10(typeVal int) *QTreeWidgetItem {

	return newQTreeWidgetItem(C.QTreeWidgetItem_new10((C.int)(typeVal)))
}

// NewQTreeWidgetItem11 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem11(strings []string, typeVal int) *QTreeWidgetItem {
	strings_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	for i := range strings {
		strings_i_ms := C.struct_miqt_string{}
		strings_i_ms.data = C.CString(strings[i])
		strings_i_ms.len = C.size_t(len(strings[i]))
		defer C.free(unsafe.Pointer(strings_i_ms.data))
		strings_CArray[i] = strings_i_ms
	}
	strings_ma := C.struct_miqt_array{len: C.size_t(len(strings)), data: unsafe.Pointer(strings_CArray)}

	return newQTreeWidgetItem(C.QTreeWidgetItem_new11(strings_ma, (C.int)(typeVal)))
}

// NewQTreeWidgetItem12 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem12(treeview *QTreeWidget, typeVal int) *QTreeWidgetItem {

	return newQTreeWidgetItem(C.QTreeWidgetItem_new12(treeview.cPointer(), (C.int)(typeVal)))
}

// NewQTreeWidgetItem13 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem13(treeview *QTreeWidget, strings []string, typeVal int) *QTreeWidgetItem {
	strings_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	for i := range strings {
		strings_i_ms := C.struct_miqt_string{}
		strings_i_ms.data = C.CString(strings[i])
		strings_i_ms.len = C.size_t(len(strings[i]))
		defer C.free(unsafe.Pointer(strings_i_ms.data))
		strings_CArray[i] = strings_i_ms
	}
	strings_ma := C.struct_miqt_array{len: C.size_t(len(strings)), data: unsafe.Pointer(strings_CArray)}

	return newQTreeWidgetItem(C.QTreeWidgetItem_new13(treeview.cPointer(), strings_ma, (C.int)(typeVal)))
}

// NewQTreeWidgetItem14 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem14(treeview *QTreeWidget, after *QTreeWidgetItem, typeVal int) *QTreeWidgetItem {

	return newQTreeWidgetItem(C.QTreeWidgetItem_new14(treeview.cPointer(), after.cPointer(), (C.int)(typeVal)))
}

// NewQTreeWidgetItem15 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem15(parent *QTreeWidgetItem, typeVal int) *QTreeWidgetItem {

	return newQTreeWidgetItem(C.QTreeWidgetItem_new15(parent.cPointer(), (C.int)(typeVal)))
}

// NewQTreeWidgetItem16 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem16(parent *QTreeWidgetItem, strings []string, typeVal int) *QTreeWidgetItem {
	strings_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	for i := range strings {
		strings_i_ms := C.struct_miqt_string{}
		strings_i_ms.data = C.CString(strings[i])
		strings_i_ms.len = C.size_t(len(strings[i]))
		defer C.free(unsafe.Pointer(strings_i_ms.data))
		strings_CArray[i] = strings_i_ms
	}
	strings_ma := C.struct_miqt_array{len: C.size_t(len(strings)), data: unsafe.Pointer(strings_CArray)}

	return newQTreeWidgetItem(C.QTreeWidgetItem_new16(parent.cPointer(), strings_ma, (C.int)(typeVal)))
}

// NewQTreeWidgetItem17 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem17(parent *QTreeWidgetItem, after *QTreeWidgetItem, typeVal int) *QTreeWidgetItem {

	return newQTreeWidgetItem(C.QTreeWidgetItem_new17(parent.cPointer(), after.cPointer(), (C.int)(typeVal)))
}

func (this *QTreeWidgetItem) Clone() *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidgetItem_Clone(this.h))
}

func (this *QTreeWidgetItem) TreeWidget() *QTreeWidget {
	return newQTreeWidget(C.QTreeWidgetItem_TreeWidget(this.h))
}

func (this *QTreeWidgetItem) SetSelected(selectVal bool) {
	C.QTreeWidgetItem_SetSelected(this.h, (C.bool)(selectVal))
}

func (this *QTreeWidgetItem) IsSelected() bool {
	return (bool)(C.QTreeWidgetItem_IsSelected(this.h))
}

func (this *QTreeWidgetItem) SetHidden(hide bool) {
	C.QTreeWidgetItem_SetHidden(this.h, (C.bool)(hide))
}

func (this *QTreeWidgetItem) IsHidden() bool {
	return (bool)(C.QTreeWidgetItem_IsHidden(this.h))
}

func (this *QTreeWidgetItem) SetExpanded(expand bool) {
	C.QTreeWidgetItem_SetExpanded(this.h, (C.bool)(expand))
}

func (this *QTreeWidgetItem) IsExpanded() bool {
	return (bool)(C.QTreeWidgetItem_IsExpanded(this.h))
}

func (this *QTreeWidgetItem) SetFirstColumnSpanned(span bool) {
	C.QTreeWidgetItem_SetFirstColumnSpanned(this.h, (C.bool)(span))
}

func (this *QTreeWidgetItem) IsFirstColumnSpanned() bool {
	return (bool)(C.QTreeWidgetItem_IsFirstColumnSpanned(this.h))
}

func (this *QTreeWidgetItem) SetDisabled(disabled bool) {
	C.QTreeWidgetItem_SetDisabled(this.h, (C.bool)(disabled))
}

func (this *QTreeWidgetItem) IsDisabled() bool {
	return (bool)(C.QTreeWidgetItem_IsDisabled(this.h))
}

func (this *QTreeWidgetItem) SetChildIndicatorPolicy(policy QTreeWidgetItem__ChildIndicatorPolicy) {
	C.QTreeWidgetItem_SetChildIndicatorPolicy(this.h, (C.int)(policy))
}

func (this *QTreeWidgetItem) ChildIndicatorPolicy() QTreeWidgetItem__ChildIndicatorPolicy {
	return (QTreeWidgetItem__ChildIndicatorPolicy)(C.QTreeWidgetItem_ChildIndicatorPolicy(this.h))
}

func (this *QTreeWidgetItem) Flags() ItemFlag {
	return (ItemFlag)(C.QTreeWidgetItem_Flags(this.h))
}

func (this *QTreeWidgetItem) SetFlags(flags ItemFlag) {
	C.QTreeWidgetItem_SetFlags(this.h, (C.int)(flags))
}

func (this *QTreeWidgetItem) Text(column int) string {
	var _ms C.struct_miqt_string = C.QTreeWidgetItem_Text(this.h, (C.int)(column))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeWidgetItem) SetText(column int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTreeWidgetItem_SetText(this.h, (C.int)(column), text_ms)
}

func (this *QTreeWidgetItem) Icon(column int) *QIcon {
	_goptr := newQIcon(C.QTreeWidgetItem_Icon(this.h, (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetIcon(column int, icon *QIcon) {
	C.QTreeWidgetItem_SetIcon(this.h, (C.int)(column), icon.cPointer())
}

func (this *QTreeWidgetItem) StatusTip(column int) string {
	var _ms C.struct_miqt_string = C.QTreeWidgetItem_StatusTip(this.h, (C.int)(column))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeWidgetItem) SetStatusTip(column int, statusTip string) {
	statusTip_ms := C.struct_miqt_string{}
	statusTip_ms.data = C.CString(statusTip)
	statusTip_ms.len = C.size_t(len(statusTip))
	defer C.free(unsafe.Pointer(statusTip_ms.data))
	C.QTreeWidgetItem_SetStatusTip(this.h, (C.int)(column), statusTip_ms)
}

func (this *QTreeWidgetItem) ToolTip(column int) string {
	var _ms C.struct_miqt_string = C.QTreeWidgetItem_ToolTip(this.h, (C.int)(column))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeWidgetItem) SetToolTip(column int, toolTip string) {
	toolTip_ms := C.struct_miqt_string{}
	toolTip_ms.data = C.CString(toolTip)
	toolTip_ms.len = C.size_t(len(toolTip))
	defer C.free(unsafe.Pointer(toolTip_ms.data))
	C.QTreeWidgetItem_SetToolTip(this.h, (C.int)(column), toolTip_ms)
}

func (this *QTreeWidgetItem) WhatsThis(column int) string {
	var _ms C.struct_miqt_string = C.QTreeWidgetItem_WhatsThis(this.h, (C.int)(column))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeWidgetItem) SetWhatsThis(column int, whatsThis string) {
	whatsThis_ms := C.struct_miqt_string{}
	whatsThis_ms.data = C.CString(whatsThis)
	whatsThis_ms.len = C.size_t(len(whatsThis))
	defer C.free(unsafe.Pointer(whatsThis_ms.data))
	C.QTreeWidgetItem_SetWhatsThis(this.h, (C.int)(column), whatsThis_ms)
}

func (this *QTreeWidgetItem) Font(column int) *QFont {
	_goptr := newQFont(C.QTreeWidgetItem_Font(this.h, (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetFont(column int, font *QFont) {
	C.QTreeWidgetItem_SetFont(this.h, (C.int)(column), font.cPointer())
}

func (this *QTreeWidgetItem) TextAlignment(column int) int {
	return (int)(C.QTreeWidgetItem_TextAlignment(this.h, (C.int)(column)))
}

func (this *QTreeWidgetItem) SetTextAlignment(column int, alignment int) {
	C.QTreeWidgetItem_SetTextAlignment(this.h, (C.int)(column), (C.int)(alignment))
}

func (this *QTreeWidgetItem) SetTextAlignment2(column int, alignment AlignmentFlag) {
	C.QTreeWidgetItem_SetTextAlignment2(this.h, (C.int)(column), (C.int)(alignment))
}

func (this *QTreeWidgetItem) SetTextAlignment3(column int, alignment AlignmentFlag) {
	C.QTreeWidgetItem_SetTextAlignment3(this.h, (C.int)(column), (C.int)(alignment))
}

func (this *QTreeWidgetItem) Background(column int) *QBrush {
	_goptr := newQBrush(C.QTreeWidgetItem_Background(this.h, (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetBackground(column int, brush *QBrush) {
	C.QTreeWidgetItem_SetBackground(this.h, (C.int)(column), brush.cPointer())
}

func (this *QTreeWidgetItem) Foreground(column int) *QBrush {
	_goptr := newQBrush(C.QTreeWidgetItem_Foreground(this.h, (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetForeground(column int, brush *QBrush) {
	C.QTreeWidgetItem_SetForeground(this.h, (C.int)(column), brush.cPointer())
}

func (this *QTreeWidgetItem) CheckState(column int) CheckState {
	return (CheckState)(C.QTreeWidgetItem_CheckState(this.h, (C.int)(column)))
}

func (this *QTreeWidgetItem) SetCheckState(column int, state CheckState) {
	C.QTreeWidgetItem_SetCheckState(this.h, (C.int)(column), (C.int)(state))
}

func (this *QTreeWidgetItem) SizeHint(column int) *QSize {
	_goptr := newQSize(C.QTreeWidgetItem_SizeHint(this.h, (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetSizeHint(column int, size *QSize) {
	C.QTreeWidgetItem_SetSizeHint(this.h, (C.int)(column), size.cPointer())
}

func (this *QTreeWidgetItem) Data(column int, role int) *QVariant {
	_goptr := newQVariant(C.QTreeWidgetItem_Data(this.h, (C.int)(column), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetData(column int, role int, value *QVariant) {
	C.QTreeWidgetItem_SetData(this.h, (C.int)(column), (C.int)(role), value.cPointer())
}

func (this *QTreeWidgetItem) OperatorLesser(other *QTreeWidgetItem) bool {
	return (bool)(C.QTreeWidgetItem_OperatorLesser(this.h, other.cPointer()))
}

func (this *QTreeWidgetItem) Read(in *QDataStream) {
	C.QTreeWidgetItem_Read(this.h, in.cPointer())
}

func (this *QTreeWidgetItem) Write(out *QDataStream) {
	C.QTreeWidgetItem_Write(this.h, out.cPointer())
}

func (this *QTreeWidgetItem) OperatorAssign(other *QTreeWidgetItem) {
	C.QTreeWidgetItem_OperatorAssign(this.h, other.cPointer())
}

func (this *QTreeWidgetItem) Parent() *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidgetItem_Parent(this.h))
}

func (this *QTreeWidgetItem) Child(index int) *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidgetItem_Child(this.h, (C.int)(index)))
}

func (this *QTreeWidgetItem) ChildCount() int {
	return (int)(C.QTreeWidgetItem_ChildCount(this.h))
}

func (this *QTreeWidgetItem) ColumnCount() int {
	return (int)(C.QTreeWidgetItem_ColumnCount(this.h))
}

func (this *QTreeWidgetItem) IndexOfChild(child *QTreeWidgetItem) int {
	return (int)(C.QTreeWidgetItem_IndexOfChild(this.h, child.cPointer()))
}

func (this *QTreeWidgetItem) AddChild(child *QTreeWidgetItem) {
	C.QTreeWidgetItem_AddChild(this.h, child.cPointer())
}

func (this *QTreeWidgetItem) InsertChild(index int, child *QTreeWidgetItem) {
	C.QTreeWidgetItem_InsertChild(this.h, (C.int)(index), child.cPointer())
}

func (this *QTreeWidgetItem) RemoveChild(child *QTreeWidgetItem) {
	C.QTreeWidgetItem_RemoveChild(this.h, child.cPointer())
}

func (this *QTreeWidgetItem) TakeChild(index int) *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidgetItem_TakeChild(this.h, (C.int)(index)))
}

func (this *QTreeWidgetItem) AddChildren(children []*QTreeWidgetItem) {
	children_CArray := (*[0xffff]*C.QTreeWidgetItem)(C.malloc(C.size_t(8 * len(children))))
	defer C.free(unsafe.Pointer(children_CArray))
	for i := range children {
		children_CArray[i] = children[i].cPointer()
	}
	children_ma := C.struct_miqt_array{len: C.size_t(len(children)), data: unsafe.Pointer(children_CArray)}
	C.QTreeWidgetItem_AddChildren(this.h, children_ma)
}

func (this *QTreeWidgetItem) InsertChildren(index int, children []*QTreeWidgetItem) {
	children_CArray := (*[0xffff]*C.QTreeWidgetItem)(C.malloc(C.size_t(8 * len(children))))
	defer C.free(unsafe.Pointer(children_CArray))
	for i := range children {
		children_CArray[i] = children[i].cPointer()
	}
	children_ma := C.struct_miqt_array{len: C.size_t(len(children)), data: unsafe.Pointer(children_CArray)}
	C.QTreeWidgetItem_InsertChildren(this.h, (C.int)(index), children_ma)
}

func (this *QTreeWidgetItem) TakeChildren() []*QTreeWidgetItem {
	var _ma C.struct_miqt_array = C.QTreeWidgetItem_TakeChildren(this.h)
	_ret := make([]*QTreeWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QTreeWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQTreeWidgetItem(_outCast[i])
	}
	return _ret
}

func (this *QTreeWidgetItem) Type() int {
	return (int)(C.QTreeWidgetItem_Type(this.h))
}

func (this *QTreeWidgetItem) SortChildren(column int, order SortOrder) {
	C.QTreeWidgetItem_SortChildren(this.h, (C.int)(column), (C.int)(order))
}

func (this *QTreeWidgetItem) callVirtualBase_Clone() *QTreeWidgetItem {

	return newQTreeWidgetItem(C.QTreeWidgetItem_virtualbase_Clone(unsafe.Pointer(this.h)))

}
func (this *QTreeWidgetItem) OnClone(slot func(super func() *QTreeWidgetItem) *QTreeWidgetItem) {
	ok := C.QTreeWidgetItem_override_virtual_Clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidgetItem_Clone
func miqt_exec_callback_QTreeWidgetItem_Clone(self *C.QTreeWidgetItem, cb C.intptr_t) *C.QTreeWidgetItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QTreeWidgetItem) *QTreeWidgetItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidgetItem{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QTreeWidgetItem) callVirtualBase_Data(column int, role int) *QVariant {

	_goptr := newQVariant(C.QTreeWidgetItem_virtualbase_Data(unsafe.Pointer(this.h), (C.int)(column), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidgetItem) OnData(slot func(super func(column int, role int) *QVariant, column int, role int) *QVariant) {
	ok := C.QTreeWidgetItem_override_virtual_Data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidgetItem_Data
func miqt_exec_callback_QTreeWidgetItem_Data(self *C.QTreeWidgetItem, cb C.intptr_t, column C.int, role C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, role int) *QVariant, column int, role int) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(role)

	virtualReturn := gofunc((&QTreeWidgetItem{h: self}).callVirtualBase_Data, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QTreeWidgetItem) callVirtualBase_SetData(column int, role int, value *QVariant) {

	C.QTreeWidgetItem_virtualbase_SetData(unsafe.Pointer(this.h), (C.int)(column), (C.int)(role), value.cPointer())

}
func (this *QTreeWidgetItem) OnSetData(slot func(super func(column int, role int, value *QVariant), column int, role int, value *QVariant)) {
	ok := C.QTreeWidgetItem_override_virtual_SetData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidgetItem_SetData
func miqt_exec_callback_QTreeWidgetItem_SetData(self *C.QTreeWidgetItem, cb C.intptr_t, column C.int, role C.int, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int, role int, value *QVariant), column int, role int, value *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	slotval2 := (int)(role)

	slotval3 := newQVariant(value)

	gofunc((&QTreeWidgetItem{h: self}).callVirtualBase_SetData, slotval1, slotval2, slotval3)

}

func (this *QTreeWidgetItem) callVirtualBase_OperatorLesser(other *QTreeWidgetItem) bool {

	return (bool)(C.QTreeWidgetItem_virtualbase_OperatorLesser(unsafe.Pointer(this.h), other.cPointer()))

}
func (this *QTreeWidgetItem) OnOperatorLesser(slot func(super func(other *QTreeWidgetItem) bool, other *QTreeWidgetItem) bool) {
	ok := C.QTreeWidgetItem_override_virtual_OperatorLesser(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidgetItem_OperatorLesser
func miqt_exec_callback_QTreeWidgetItem_OperatorLesser(self *C.QTreeWidgetItem, cb C.intptr_t, other *C.QTreeWidgetItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QTreeWidgetItem) bool, other *QTreeWidgetItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTreeWidgetItem(other)

	virtualReturn := gofunc((&QTreeWidgetItem{h: self}).callVirtualBase_OperatorLesser, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTreeWidgetItem) callVirtualBase_Read(in *QDataStream) {

	C.QTreeWidgetItem_virtualbase_Read(unsafe.Pointer(this.h), in.cPointer())

}
func (this *QTreeWidgetItem) OnRead(slot func(super func(in *QDataStream), in *QDataStream)) {
	ok := C.QTreeWidgetItem_override_virtual_Read(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidgetItem_Read
func miqt_exec_callback_QTreeWidgetItem_Read(self *C.QTreeWidgetItem, cb C.intptr_t, in *C.QDataStream) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(in *QDataStream), in *QDataStream))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDataStream(in)

	gofunc((&QTreeWidgetItem{h: self}).callVirtualBase_Read, slotval1)

}

func (this *QTreeWidgetItem) callVirtualBase_Write(out *QDataStream) {

	C.QTreeWidgetItem_virtualbase_Write(unsafe.Pointer(this.h), out.cPointer())

}
func (this *QTreeWidgetItem) OnWrite(slot func(super func(out *QDataStream), out *QDataStream)) {
	ok := C.QTreeWidgetItem_override_virtual_Write(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidgetItem_Write
func miqt_exec_callback_QTreeWidgetItem_Write(self *C.QTreeWidgetItem, cb C.intptr_t, out *C.QDataStream) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(out *QDataStream), out *QDataStream))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDataStream(out)

	gofunc((&QTreeWidgetItem{h: self}).callVirtualBase_Write, slotval1)

}

// Delete this object from C++ memory.
func (this *QTreeWidgetItem) Delete() {
	C.QTreeWidgetItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTreeWidgetItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QTreeWidgetItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTreeWidget struct {
	h *C.QTreeWidget
	*QTreeView
}

func (this *QTreeWidget) cPointer() *C.QTreeWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTreeWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTreeWidget constructs the type using only CGO pointers.
func newQTreeWidget(h *C.QTreeWidget) *QTreeWidget {
	if h == nil {
		return nil
	}
	var outptr_QTreeView *C.QTreeView = nil
	C.QTreeWidget_virtbase(h, &outptr_QTreeView)

	return &QTreeWidget{h: h,
		QTreeView: newQTreeView(outptr_QTreeView)}
}

// UnsafeNewQTreeWidget constructs the type using only unsafe pointers.
func UnsafeNewQTreeWidget(h unsafe.Pointer) *QTreeWidget {
	return newQTreeWidget((*C.QTreeWidget)(h))
}

// NewQTreeWidget constructs a new QTreeWidget object.
func NewQTreeWidget(parent *QWidget) *QTreeWidget {

	return newQTreeWidget(C.QTreeWidget_new(parent.cPointer()))
}

// NewQTreeWidget2 constructs a new QTreeWidget object.
func NewQTreeWidget2() *QTreeWidget {

	return newQTreeWidget(C.QTreeWidget_new2())
}

func (this *QTreeWidget) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTreeWidget_MetaObject(this.h))
}

func (this *QTreeWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTreeWidget_Metacast(this.h, param1_Cstring))
}

func QTreeWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTreeWidget_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeWidget) ColumnCount() int {
	return (int)(C.QTreeWidget_ColumnCount(this.h))
}

func (this *QTreeWidget) SetColumnCount(columns int) {
	C.QTreeWidget_SetColumnCount(this.h, (C.int)(columns))
}

func (this *QTreeWidget) InvisibleRootItem() *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_InvisibleRootItem(this.h))
}

func (this *QTreeWidget) TopLevelItem(index int) *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_TopLevelItem(this.h, (C.int)(index)))
}

func (this *QTreeWidget) TopLevelItemCount() int {
	return (int)(C.QTreeWidget_TopLevelItemCount(this.h))
}

func (this *QTreeWidget) InsertTopLevelItem(index int, item *QTreeWidgetItem) {
	C.QTreeWidget_InsertTopLevelItem(this.h, (C.int)(index), item.cPointer())
}

func (this *QTreeWidget) AddTopLevelItem(item *QTreeWidgetItem) {
	C.QTreeWidget_AddTopLevelItem(this.h, item.cPointer())
}

func (this *QTreeWidget) TakeTopLevelItem(index int) *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_TakeTopLevelItem(this.h, (C.int)(index)))
}

func (this *QTreeWidget) IndexOfTopLevelItem(item *QTreeWidgetItem) int {
	return (int)(C.QTreeWidget_IndexOfTopLevelItem(this.h, item.cPointer()))
}

func (this *QTreeWidget) InsertTopLevelItems(index int, items []*QTreeWidgetItem) {
	items_CArray := (*[0xffff]*C.QTreeWidgetItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	C.QTreeWidget_InsertTopLevelItems(this.h, (C.int)(index), items_ma)
}

func (this *QTreeWidget) AddTopLevelItems(items []*QTreeWidgetItem) {
	items_CArray := (*[0xffff]*C.QTreeWidgetItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	C.QTreeWidget_AddTopLevelItems(this.h, items_ma)
}

func (this *QTreeWidget) HeaderItem() *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_HeaderItem(this.h))
}

func (this *QTreeWidget) SetHeaderItem(item *QTreeWidgetItem) {
	C.QTreeWidget_SetHeaderItem(this.h, item.cPointer())
}

func (this *QTreeWidget) SetHeaderLabels(labels []string) {
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
	C.QTreeWidget_SetHeaderLabels(this.h, labels_ma)
}

func (this *QTreeWidget) SetHeaderLabel(label string) {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	C.QTreeWidget_SetHeaderLabel(this.h, label_ms)
}

func (this *QTreeWidget) CurrentItem() *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_CurrentItem(this.h))
}

func (this *QTreeWidget) CurrentColumn() int {
	return (int)(C.QTreeWidget_CurrentColumn(this.h))
}

func (this *QTreeWidget) SetCurrentItem(item *QTreeWidgetItem) {
	C.QTreeWidget_SetCurrentItem(this.h, item.cPointer())
}

func (this *QTreeWidget) SetCurrentItem2(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_SetCurrentItem2(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) SetCurrentItem3(item *QTreeWidgetItem, column int, command QItemSelectionModel__SelectionFlag) {
	C.QTreeWidget_SetCurrentItem3(this.h, item.cPointer(), (C.int)(column), (C.int)(command))
}

func (this *QTreeWidget) ItemAt(p *QPoint) *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_ItemAt(this.h, p.cPointer()))
}

func (this *QTreeWidget) ItemAt2(x int, y int) *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_ItemAt2(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QTreeWidget) VisualItemRect(item *QTreeWidgetItem) *QRect {
	_goptr := newQRect(C.QTreeWidget_VisualItemRect(this.h, item.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidget) SortColumn() int {
	return (int)(C.QTreeWidget_SortColumn(this.h))
}

func (this *QTreeWidget) SortItems(column int, order SortOrder) {
	C.QTreeWidget_SortItems(this.h, (C.int)(column), (C.int)(order))
}

func (this *QTreeWidget) EditItem(item *QTreeWidgetItem) {
	C.QTreeWidget_EditItem(this.h, item.cPointer())
}

func (this *QTreeWidget) OpenPersistentEditor(item *QTreeWidgetItem) {
	C.QTreeWidget_OpenPersistentEditor(this.h, item.cPointer())
}

func (this *QTreeWidget) ClosePersistentEditor(item *QTreeWidgetItem) {
	C.QTreeWidget_ClosePersistentEditor(this.h, item.cPointer())
}

func (this *QTreeWidget) IsPersistentEditorOpen(item *QTreeWidgetItem) bool {
	return (bool)(C.QTreeWidget_IsPersistentEditorOpen(this.h, item.cPointer()))
}

func (this *QTreeWidget) ItemWidget(item *QTreeWidgetItem, column int) *QWidget {
	return newQWidget(C.QTreeWidget_ItemWidget(this.h, item.cPointer(), (C.int)(column)))
}

func (this *QTreeWidget) SetItemWidget(item *QTreeWidgetItem, column int, widget *QWidget) {
	C.QTreeWidget_SetItemWidget(this.h, item.cPointer(), (C.int)(column), widget.cPointer())
}

func (this *QTreeWidget) RemoveItemWidget(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_RemoveItemWidget(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) SelectedItems() []*QTreeWidgetItem {
	var _ma C.struct_miqt_array = C.QTreeWidget_SelectedItems(this.h)
	_ret := make([]*QTreeWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QTreeWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQTreeWidgetItem(_outCast[i])
	}
	return _ret
}

func (this *QTreeWidget) FindItems(text string, flags MatchFlag) []*QTreeWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ma C.struct_miqt_array = C.QTreeWidget_FindItems(this.h, text_ms, (C.int)(flags))
	_ret := make([]*QTreeWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QTreeWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQTreeWidgetItem(_outCast[i])
	}
	return _ret
}

func (this *QTreeWidget) ItemAbove(item *QTreeWidgetItem) *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_ItemAbove(this.h, item.cPointer()))
}

func (this *QTreeWidget) ItemBelow(item *QTreeWidgetItem) *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_ItemBelow(this.h, item.cPointer()))
}

func (this *QTreeWidget) IndexFromItem(item *QTreeWidgetItem) *QModelIndex {
	_goptr := newQModelIndex(C.QTreeWidget_IndexFromItem(this.h, item.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidget) ItemFromIndex(index *QModelIndex) *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_ItemFromIndex(this.h, index.cPointer()))
}

func (this *QTreeWidget) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QTreeWidget_SetSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QTreeWidget) ScrollToItem(item *QTreeWidgetItem) {
	C.QTreeWidget_ScrollToItem(this.h, item.cPointer())
}

func (this *QTreeWidget) ExpandItem(item *QTreeWidgetItem) {
	C.QTreeWidget_ExpandItem(this.h, item.cPointer())
}

func (this *QTreeWidget) CollapseItem(item *QTreeWidgetItem) {
	C.QTreeWidget_CollapseItem(this.h, item.cPointer())
}

func (this *QTreeWidget) Clear() {
	C.QTreeWidget_Clear(this.h)
}

func (this *QTreeWidget) ItemPressed(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ItemPressed(this.h, item.cPointer(), (C.int)(column))
}
func (this *QTreeWidget) OnItemPressed(slot func(item *QTreeWidgetItem, column int)) {
	C.QTreeWidget_connect_ItemPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_ItemPressed
func miqt_exec_callback_QTreeWidget_ItemPressed(cb C.intptr_t, item *C.QTreeWidgetItem, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTreeWidgetItem, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTreeWidgetItem(item)

	slotval2 := (int)(column)

	gofunc(slotval1, slotval2)
}

func (this *QTreeWidget) ItemClicked(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ItemClicked(this.h, item.cPointer(), (C.int)(column))
}
func (this *QTreeWidget) OnItemClicked(slot func(item *QTreeWidgetItem, column int)) {
	C.QTreeWidget_connect_ItemClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_ItemClicked
func miqt_exec_callback_QTreeWidget_ItemClicked(cb C.intptr_t, item *C.QTreeWidgetItem, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTreeWidgetItem, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTreeWidgetItem(item)

	slotval2 := (int)(column)

	gofunc(slotval1, slotval2)
}

func (this *QTreeWidget) ItemDoubleClicked(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ItemDoubleClicked(this.h, item.cPointer(), (C.int)(column))
}
func (this *QTreeWidget) OnItemDoubleClicked(slot func(item *QTreeWidgetItem, column int)) {
	C.QTreeWidget_connect_ItemDoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_ItemDoubleClicked
func miqt_exec_callback_QTreeWidget_ItemDoubleClicked(cb C.intptr_t, item *C.QTreeWidgetItem, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTreeWidgetItem, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTreeWidgetItem(item)

	slotval2 := (int)(column)

	gofunc(slotval1, slotval2)
}

func (this *QTreeWidget) ItemActivated(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ItemActivated(this.h, item.cPointer(), (C.int)(column))
}
func (this *QTreeWidget) OnItemActivated(slot func(item *QTreeWidgetItem, column int)) {
	C.QTreeWidget_connect_ItemActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_ItemActivated
func miqt_exec_callback_QTreeWidget_ItemActivated(cb C.intptr_t, item *C.QTreeWidgetItem, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTreeWidgetItem, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTreeWidgetItem(item)

	slotval2 := (int)(column)

	gofunc(slotval1, slotval2)
}

func (this *QTreeWidget) ItemEntered(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ItemEntered(this.h, item.cPointer(), (C.int)(column))
}
func (this *QTreeWidget) OnItemEntered(slot func(item *QTreeWidgetItem, column int)) {
	C.QTreeWidget_connect_ItemEntered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_ItemEntered
func miqt_exec_callback_QTreeWidget_ItemEntered(cb C.intptr_t, item *C.QTreeWidgetItem, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTreeWidgetItem, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTreeWidgetItem(item)

	slotval2 := (int)(column)

	gofunc(slotval1, slotval2)
}

func (this *QTreeWidget) ItemChanged(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ItemChanged(this.h, item.cPointer(), (C.int)(column))
}
func (this *QTreeWidget) OnItemChanged(slot func(item *QTreeWidgetItem, column int)) {
	C.QTreeWidget_connect_ItemChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_ItemChanged
func miqt_exec_callback_QTreeWidget_ItemChanged(cb C.intptr_t, item *C.QTreeWidgetItem, column C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTreeWidgetItem, column int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTreeWidgetItem(item)

	slotval2 := (int)(column)

	gofunc(slotval1, slotval2)
}

func (this *QTreeWidget) ItemExpanded(item *QTreeWidgetItem) {
	C.QTreeWidget_ItemExpanded(this.h, item.cPointer())
}
func (this *QTreeWidget) OnItemExpanded(slot func(item *QTreeWidgetItem)) {
	C.QTreeWidget_connect_ItemExpanded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_ItemExpanded
func miqt_exec_callback_QTreeWidget_ItemExpanded(cb C.intptr_t, item *C.QTreeWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTreeWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTreeWidgetItem(item)

	gofunc(slotval1)
}

func (this *QTreeWidget) ItemCollapsed(item *QTreeWidgetItem) {
	C.QTreeWidget_ItemCollapsed(this.h, item.cPointer())
}
func (this *QTreeWidget) OnItemCollapsed(slot func(item *QTreeWidgetItem)) {
	C.QTreeWidget_connect_ItemCollapsed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_ItemCollapsed
func miqt_exec_callback_QTreeWidget_ItemCollapsed(cb C.intptr_t, item *C.QTreeWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTreeWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTreeWidgetItem(item)

	gofunc(slotval1)
}

func (this *QTreeWidget) CurrentItemChanged(current *QTreeWidgetItem, previous *QTreeWidgetItem) {
	C.QTreeWidget_CurrentItemChanged(this.h, current.cPointer(), previous.cPointer())
}
func (this *QTreeWidget) OnCurrentItemChanged(slot func(current *QTreeWidgetItem, previous *QTreeWidgetItem)) {
	C.QTreeWidget_connect_CurrentItemChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_CurrentItemChanged
func miqt_exec_callback_QTreeWidget_CurrentItemChanged(cb C.intptr_t, current *C.QTreeWidgetItem, previous *C.QTreeWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(current *QTreeWidgetItem, previous *QTreeWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTreeWidgetItem(current)

	slotval2 := newQTreeWidgetItem(previous)

	gofunc(slotval1, slotval2)
}

func (this *QTreeWidget) ItemSelectionChanged() {
	C.QTreeWidget_ItemSelectionChanged(this.h)
}
func (this *QTreeWidget) OnItemSelectionChanged(slot func()) {
	C.QTreeWidget_connect_ItemSelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_ItemSelectionChanged
func miqt_exec_callback_QTreeWidget_ItemSelectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QTreeWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTreeWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTreeWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTreeWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeWidget) EditItem2(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_EditItem2(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) OpenPersistentEditor2(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_OpenPersistentEditor2(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) ClosePersistentEditor2(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ClosePersistentEditor2(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) IsPersistentEditorOpen2(item *QTreeWidgetItem, column int) bool {
	return (bool)(C.QTreeWidget_IsPersistentEditorOpen2(this.h, item.cPointer(), (C.int)(column)))
}

func (this *QTreeWidget) FindItems3(text string, flags MatchFlag, column int) []*QTreeWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ma C.struct_miqt_array = C.QTreeWidget_FindItems3(this.h, text_ms, (C.int)(flags), (C.int)(column))
	_ret := make([]*QTreeWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QTreeWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQTreeWidgetItem(_outCast[i])
	}
	return _ret
}

func (this *QTreeWidget) IndexFromItem2(item *QTreeWidgetItem, column int) *QModelIndex {
	_goptr := newQModelIndex(C.QTreeWidget_IndexFromItem2(this.h, item.cPointer(), (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidget) ScrollToItem2(item *QTreeWidgetItem, hint QAbstractItemView__ScrollHint) {
	C.QTreeWidget_ScrollToItem2(this.h, item.cPointer(), (C.int)(hint))
}

func (this *QTreeWidget) callVirtualBase_SetSelectionModel(selectionModel *QItemSelectionModel) {

	C.QTreeWidget_virtualbase_SetSelectionModel(unsafe.Pointer(this.h), selectionModel.cPointer())

}
func (this *QTreeWidget) OnSetSelectionModel(slot func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel)) {
	ok := C.QTreeWidget_override_virtual_SetSelectionModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_SetSelectionModel
func miqt_exec_callback_QTreeWidget_SetSelectionModel(self *C.QTreeWidget, cb C.intptr_t, selectionModel *C.QItemSelectionModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelectionModel(selectionModel)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_SetSelectionModel, slotval1)

}

func (this *QTreeWidget) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QTreeWidget_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QTreeWidget) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QTreeWidget_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_Event
func miqt_exec_callback_QTreeWidget_Event(self *C.QTreeWidget, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_MimeTypes() []string {

	var _ma C.struct_miqt_array = C.QTreeWidget_virtualbase_MimeTypes(unsafe.Pointer(this.h))
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
func (this *QTreeWidget) OnMimeTypes(slot func(super func() []string) []string) {
	ok := C.QTreeWidget_override_virtual_MimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_MimeTypes
func miqt_exec_callback_QTreeWidget_MimeTypes(self *C.QTreeWidget, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_MimeTypes)
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

func (this *QTreeWidget) callVirtualBase_MimeData(items []*QTreeWidgetItem) *QMimeData {
	items_CArray := (*[0xffff]*C.QTreeWidgetItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}

	return newQMimeData(C.QTreeWidget_virtualbase_MimeData(unsafe.Pointer(this.h), items_ma))

}
func (this *QTreeWidget) OnMimeData(slot func(super func(items []*QTreeWidgetItem) *QMimeData, items []*QTreeWidgetItem) *QMimeData) {
	ok := C.QTreeWidget_override_virtual_MimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_MimeData
func miqt_exec_callback_QTreeWidget_MimeData(self *C.QTreeWidget, cb C.intptr_t, items C.struct_miqt_array) *C.QMimeData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(items []*QTreeWidgetItem) *QMimeData, items []*QTreeWidgetItem) *QMimeData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var items_ma C.struct_miqt_array = items
	items_ret := make([]*QTreeWidgetItem, int(items_ma.len))
	items_outCast := (*[0xffff]*C.QTreeWidgetItem)(unsafe.Pointer(items_ma.data)) // hey ya
	for i := 0; i < int(items_ma.len); i++ {
		items_ret[i] = newQTreeWidgetItem(items_outCast[i])
	}
	slotval1 := items_ret

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_MimeData, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_DropMimeData(parent *QTreeWidgetItem, index int, data *QMimeData, action DropAction) bool {

	return (bool)(C.QTreeWidget_virtualbase_DropMimeData(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(index), data.cPointer(), (C.int)(action)))

}
func (this *QTreeWidget) OnDropMimeData(slot func(super func(parent *QTreeWidgetItem, index int, data *QMimeData, action DropAction) bool, parent *QTreeWidgetItem, index int, data *QMimeData, action DropAction) bool) {
	ok := C.QTreeWidget_override_virtual_DropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_DropMimeData
func miqt_exec_callback_QTreeWidget_DropMimeData(self *C.QTreeWidget, cb C.intptr_t, parent *C.QTreeWidgetItem, index C.int, data *C.QMimeData, action C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QTreeWidgetItem, index int, data *QMimeData, action DropAction) bool, parent *QTreeWidgetItem, index int, data *QMimeData, action DropAction) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTreeWidgetItem(parent)

	slotval2 := (int)(index)

	slotval3 := newQMimeData(data)

	slotval4 := (DropAction)(action)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_DropMimeData, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_SupportedDropActions() DropAction {

	return (DropAction)(C.QTreeWidget_virtualbase_SupportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QTreeWidget) OnSupportedDropActions(slot func(super func() DropAction) DropAction) {
	ok := C.QTreeWidget_override_virtual_SupportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_SupportedDropActions
func miqt_exec_callback_QTreeWidget_SupportedDropActions(self *C.QTreeWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_SupportedDropActions)

	return (C.int)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QTreeWidget_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QTreeWidget_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_DropEvent
func miqt_exec_callback_QTreeWidget_DropEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_SetRootIndex(index *QModelIndex) {

	C.QTreeWidget_virtualbase_SetRootIndex(unsafe.Pointer(this.h), index.cPointer())

}
func (this *QTreeWidget) OnSetRootIndex(slot func(super func(index *QModelIndex), index *QModelIndex)) {
	ok := C.QTreeWidget_override_virtual_SetRootIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_SetRootIndex
func miqt_exec_callback_QTreeWidget_SetRootIndex(self *C.QTreeWidget, cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex), index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_SetRootIndex, slotval1)

}

func (this *QTreeWidget) callVirtualBase_KeyboardSearch(search string) {
	search_ms := C.struct_miqt_string{}
	search_ms.data = C.CString(search)
	search_ms.len = C.size_t(len(search))
	defer C.free(unsafe.Pointer(search_ms.data))

	C.QTreeWidget_virtualbase_KeyboardSearch(unsafe.Pointer(this.h), search_ms)

}
func (this *QTreeWidget) OnKeyboardSearch(slot func(super func(search string), search string)) {
	ok := C.QTreeWidget_override_virtual_KeyboardSearch(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_KeyboardSearch
func miqt_exec_callback_QTreeWidget_KeyboardSearch(self *C.QTreeWidget, cb C.intptr_t, search C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(search string), search string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var search_ms C.struct_miqt_string = search
	search_ret := C.GoStringN(search_ms.data, C.int(int64(search_ms.len)))
	C.free(unsafe.Pointer(search_ms.data))
	slotval1 := search_ret

	gofunc((&QTreeWidget{h: self}).callVirtualBase_KeyboardSearch, slotval1)

}

func (this *QTreeWidget) callVirtualBase_VisualRect(index *QModelIndex) *QRect {

	_goptr := newQRect(C.QTreeWidget_virtualbase_VisualRect(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidget) OnVisualRect(slot func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect) {
	ok := C.QTreeWidget_override_virtual_VisualRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_VisualRect
func miqt_exec_callback_QTreeWidget_VisualRect(self *C.QTreeWidget, cb C.intptr_t, index *C.QModelIndex) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_VisualRect, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {

	C.QTreeWidget_virtualbase_ScrollTo(unsafe.Pointer(this.h), index.cPointer(), (C.int)(hint))

}
func (this *QTreeWidget) OnScrollTo(slot func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint)) {
	ok := C.QTreeWidget_override_virtual_ScrollTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_ScrollTo
func miqt_exec_callback_QTreeWidget_ScrollTo(self *C.QTreeWidget, cb C.intptr_t, index *C.QModelIndex, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__ScrollHint)(hint)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_ScrollTo, slotval1, slotval2)

}

func (this *QTreeWidget) callVirtualBase_IndexAt(p *QPoint) *QModelIndex {

	_goptr := newQModelIndex(C.QTreeWidget_virtualbase_IndexAt(unsafe.Pointer(this.h), p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidget) OnIndexAt(slot func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex) {
	ok := C.QTreeWidget_override_virtual_IndexAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_IndexAt
func miqt_exec_callback_QTreeWidget_IndexAt(self *C.QTreeWidget, cb C.intptr_t, p *C.QPoint) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(p)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_IndexAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_DoItemsLayout() {

	C.QTreeWidget_virtualbase_DoItemsLayout(unsafe.Pointer(this.h))

}
func (this *QTreeWidget) OnDoItemsLayout(slot func(super func())) {
	ok := C.QTreeWidget_override_virtual_DoItemsLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_DoItemsLayout
func miqt_exec_callback_QTreeWidget_DoItemsLayout(self *C.QTreeWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeWidget{h: self}).callVirtualBase_DoItemsLayout)

}

func (this *QTreeWidget) callVirtualBase_Reset() {

	C.QTreeWidget_virtualbase_Reset(unsafe.Pointer(this.h))

}
func (this *QTreeWidget) OnReset(slot func(super func())) {
	ok := C.QTreeWidget_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_Reset
func miqt_exec_callback_QTreeWidget_Reset(self *C.QTreeWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeWidget{h: self}).callVirtualBase_Reset)

}

func (this *QTreeWidget) callVirtualBase_DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	roles_ma := C.struct_miqt_array{len: C.size_t(len(roles)), data: unsafe.Pointer(roles_CArray)}

	C.QTreeWidget_virtualbase_DataChanged(unsafe.Pointer(this.h), topLeft.cPointer(), bottomRight.cPointer(), roles_ma)

}
func (this *QTreeWidget) OnDataChanged(slot func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int)) {
	ok := C.QTreeWidget_override_virtual_DataChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_DataChanged
func miqt_exec_callback_QTreeWidget_DataChanged(self *C.QTreeWidget, cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles C.struct_miqt_array) {
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

	gofunc((&QTreeWidget{h: self}).callVirtualBase_DataChanged, slotval1, slotval2, slotval3)

}

func (this *QTreeWidget) callVirtualBase_SelectAll() {

	C.QTreeWidget_virtualbase_SelectAll(unsafe.Pointer(this.h))

}
func (this *QTreeWidget) OnSelectAll(slot func(super func())) {
	ok := C.QTreeWidget_override_virtual_SelectAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_SelectAll
func miqt_exec_callback_QTreeWidget_SelectAll(self *C.QTreeWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeWidget{h: self}).callVirtualBase_SelectAll)

}

func (this *QTreeWidget) callVirtualBase_VerticalScrollbarValueChanged(value int) {

	C.QTreeWidget_virtualbase_VerticalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QTreeWidget) OnVerticalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QTreeWidget_override_virtual_VerticalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_VerticalScrollbarValueChanged
func miqt_exec_callback_QTreeWidget_VerticalScrollbarValueChanged(self *C.QTreeWidget, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_VerticalScrollbarValueChanged, slotval1)

}

func (this *QTreeWidget) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QTreeWidget_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QTreeWidget) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QTreeWidget_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_ScrollContentsBy
func miqt_exec_callback_QTreeWidget_ScrollContentsBy(self *C.QTreeWidget, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QTreeWidget) callVirtualBase_RowsInserted(parent *QModelIndex, start int, end int) {

	C.QTreeWidget_virtualbase_RowsInserted(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QTreeWidget) OnRowsInserted(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QTreeWidget_override_virtual_RowsInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_RowsInserted
func miqt_exec_callback_QTreeWidget_RowsInserted(self *C.QTreeWidget, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_RowsInserted, slotval1, slotval2, slotval3)

}

func (this *QTreeWidget) callVirtualBase_RowsAboutToBeRemoved(parent *QModelIndex, start int, end int) {

	C.QTreeWidget_virtualbase_RowsAboutToBeRemoved(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QTreeWidget) OnRowsAboutToBeRemoved(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QTreeWidget_override_virtual_RowsAboutToBeRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_RowsAboutToBeRemoved
func miqt_exec_callback_QTreeWidget_RowsAboutToBeRemoved(self *C.QTreeWidget, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(parent)

	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_RowsAboutToBeRemoved, slotval1, slotval2, slotval3)

}

func (this *QTreeWidget) callVirtualBase_MoveCursor(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex {

	_goptr := newQModelIndex(C.QTreeWidget_virtualbase_MoveCursor(unsafe.Pointer(this.h), (C.int)(cursorAction), (C.int)(modifiers)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidget) OnMoveCursor(slot func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex) {
	ok := C.QTreeWidget_override_virtual_MoveCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_MoveCursor
func miqt_exec_callback_QTreeWidget_MoveCursor(self *C.QTreeWidget, cb C.intptr_t, cursorAction C.int, modifiers C.int) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractItemView__CursorAction)(cursorAction)

	slotval2 := (KeyboardModifier)(modifiers)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_MoveCursor, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_HorizontalOffset() int {

	return (int)(C.QTreeWidget_virtualbase_HorizontalOffset(unsafe.Pointer(this.h)))

}
func (this *QTreeWidget) OnHorizontalOffset(slot func(super func() int) int) {
	ok := C.QTreeWidget_override_virtual_HorizontalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_HorizontalOffset
func miqt_exec_callback_QTreeWidget_HorizontalOffset(self *C.QTreeWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_HorizontalOffset)

	return (C.int)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_VerticalOffset() int {

	return (int)(C.QTreeWidget_virtualbase_VerticalOffset(unsafe.Pointer(this.h)))

}
func (this *QTreeWidget) OnVerticalOffset(slot func(super func() int) int) {
	ok := C.QTreeWidget_override_virtual_VerticalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_VerticalOffset
func miqt_exec_callback_QTreeWidget_VerticalOffset(self *C.QTreeWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_VerticalOffset)

	return (C.int)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_SetSelection(rect *QRect, command QItemSelectionModel__SelectionFlag) {

	C.QTreeWidget_virtualbase_SetSelection(unsafe.Pointer(this.h), rect.cPointer(), (C.int)(command))

}
func (this *QTreeWidget) OnSetSelection(slot func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag)) {
	ok := C.QTreeWidget_override_virtual_SetSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_SetSelection
func miqt_exec_callback_QTreeWidget_SetSelection(self *C.QTreeWidget, cb C.intptr_t, rect *C.QRect, command C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(rect)

	slotval2 := (QItemSelectionModel__SelectionFlag)(command)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_SetSelection, slotval1, slotval2)

}

func (this *QTreeWidget) callVirtualBase_VisualRegionForSelection(selection *QItemSelection) *QRegion {

	_goptr := newQRegion(C.QTreeWidget_virtualbase_VisualRegionForSelection(unsafe.Pointer(this.h), selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidget) OnVisualRegionForSelection(slot func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion) {
	ok := C.QTreeWidget_override_virtual_VisualRegionForSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_VisualRegionForSelection
func miqt_exec_callback_QTreeWidget_VisualRegionForSelection(self *C.QTreeWidget, cb C.intptr_t, selection *C.QItemSelection) *C.QRegion {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selection)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_VisualRegionForSelection, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_SelectedIndexes() []QModelIndex {

	var _ma C.struct_miqt_array = C.QTreeWidget_virtualbase_SelectedIndexes(unsafe.Pointer(this.h))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQModelIndex(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QTreeWidget) OnSelectedIndexes(slot func(super func() []QModelIndex) []QModelIndex) {
	ok := C.QTreeWidget_override_virtual_SelectedIndexes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_SelectedIndexes
func miqt_exec_callback_QTreeWidget_SelectedIndexes(self *C.QTreeWidget, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []QModelIndex) []QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_SelectedIndexes)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QTreeWidget) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QTreeWidget_virtualbase_ChangeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTreeWidget_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_ChangeEvent
func miqt_exec_callback_QTreeWidget_ChangeEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTreeWidget_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTreeWidget_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_TimerEvent
func miqt_exec_callback_QTreeWidget_TimerEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QTreeWidget_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QTreeWidget_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_PaintEvent
func miqt_exec_callback_QTreeWidget_PaintEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_DrawRow(painter *QPainter, options *QStyleOptionViewItem, index *QModelIndex) {

	C.QTreeWidget_virtualbase_DrawRow(unsafe.Pointer(this.h), painter.cPointer(), options.cPointer(), index.cPointer())

}
func (this *QTreeWidget) OnDrawRow(slot func(super func(painter *QPainter, options *QStyleOptionViewItem, index *QModelIndex), painter *QPainter, options *QStyleOptionViewItem, index *QModelIndex)) {
	ok := C.QTreeWidget_override_virtual_DrawRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_DrawRow
func miqt_exec_callback_QTreeWidget_DrawRow(self *C.QTreeWidget, cb C.intptr_t, painter *C.QPainter, options *C.QStyleOptionViewItem, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, options *QStyleOptionViewItem, index *QModelIndex), painter *QPainter, options *QStyleOptionViewItem, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionViewItem(options)

	slotval3 := newQModelIndex(index)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_DrawRow, slotval1, slotval2, slotval3)

}

func (this *QTreeWidget) callVirtualBase_DrawBranches(painter *QPainter, rect *QRect, index *QModelIndex) {

	C.QTreeWidget_virtualbase_DrawBranches(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer(), index.cPointer())

}
func (this *QTreeWidget) OnDrawBranches(slot func(super func(painter *QPainter, rect *QRect, index *QModelIndex), painter *QPainter, rect *QRect, index *QModelIndex)) {
	ok := C.QTreeWidget_override_virtual_DrawBranches(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_DrawBranches
func miqt_exec_callback_QTreeWidget_DrawBranches(self *C.QTreeWidget, cb C.intptr_t, painter *C.QPainter, rect *C.QRect, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, rect *QRect, index *QModelIndex), painter *QPainter, rect *QRect, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQRect(rect)

	slotval3 := newQModelIndex(index)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_DrawBranches, slotval1, slotval2, slotval3)

}

func (this *QTreeWidget) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QTreeWidget_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTreeWidget_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_MousePressEvent
func miqt_exec_callback_QTreeWidget_MousePressEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QTreeWidget_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTreeWidget_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_MouseReleaseEvent
func miqt_exec_callback_QTreeWidget_MouseReleaseEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QTreeWidget_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTreeWidget_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_MouseDoubleClickEvent
func miqt_exec_callback_QTreeWidget_MouseDoubleClickEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QTreeWidget_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTreeWidget_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_MouseMoveEvent
func miqt_exec_callback_QTreeWidget_MouseMoveEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QTreeWidget_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QTreeWidget_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_KeyPressEvent
func miqt_exec_callback_QTreeWidget_KeyPressEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QTreeWidget_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QTreeWidget_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_DragMoveEvent
func miqt_exec_callback_QTreeWidget_DragMoveEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_ViewportEvent(event *QEvent) bool {

	return (bool)(C.QTreeWidget_virtualbase_ViewportEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTreeWidget) OnViewportEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTreeWidget_override_virtual_ViewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_ViewportEvent
func miqt_exec_callback_QTreeWidget_ViewportEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_UpdateGeometries() {

	C.QTreeWidget_virtualbase_UpdateGeometries(unsafe.Pointer(this.h))

}
func (this *QTreeWidget) OnUpdateGeometries(slot func(super func())) {
	ok := C.QTreeWidget_override_virtual_UpdateGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_UpdateGeometries
func miqt_exec_callback_QTreeWidget_UpdateGeometries(self *C.QTreeWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeWidget{h: self}).callVirtualBase_UpdateGeometries)

}

func (this *QTreeWidget) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QTreeWidget_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidget) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTreeWidget_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_ViewportSizeHint
func miqt_exec_callback_QTreeWidget_ViewportSizeHint(self *C.QTreeWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_SizeHintForColumn(column int) int {

	return (int)(C.QTreeWidget_virtualbase_SizeHintForColumn(unsafe.Pointer(this.h), (C.int)(column)))

}
func (this *QTreeWidget) OnSizeHintForColumn(slot func(super func(column int) int, column int) int) {
	ok := C.QTreeWidget_override_virtual_SizeHintForColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_SizeHintForColumn
func miqt_exec_callback_QTreeWidget_SizeHintForColumn(self *C.QTreeWidget, cb C.intptr_t, column C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(column int) int, column int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(column)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_SizeHintForColumn, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_HorizontalScrollbarAction(action int) {

	C.QTreeWidget_virtualbase_HorizontalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QTreeWidget) OnHorizontalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QTreeWidget_override_virtual_HorizontalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_HorizontalScrollbarAction
func miqt_exec_callback_QTreeWidget_HorizontalScrollbarAction(self *C.QTreeWidget, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_HorizontalScrollbarAction, slotval1)

}

func (this *QTreeWidget) callVirtualBase_IsIndexHidden(index *QModelIndex) bool {

	return (bool)(C.QTreeWidget_virtualbase_IsIndexHidden(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QTreeWidget) OnIsIndexHidden(slot func(super func(index *QModelIndex) bool, index *QModelIndex) bool) {
	ok := C.QTreeWidget_override_virtual_IsIndexHidden(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_IsIndexHidden
func miqt_exec_callback_QTreeWidget_IsIndexHidden(self *C.QTreeWidget, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) bool, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_IsIndexHidden, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_SelectionChanged(selected *QItemSelection, deselected *QItemSelection) {

	C.QTreeWidget_virtualbase_SelectionChanged(unsafe.Pointer(this.h), selected.cPointer(), deselected.cPointer())

}
func (this *QTreeWidget) OnSelectionChanged(slot func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection)) {
	ok := C.QTreeWidget_override_virtual_SelectionChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_SelectionChanged
func miqt_exec_callback_QTreeWidget_SelectionChanged(self *C.QTreeWidget, cb C.intptr_t, selected *C.QItemSelection, deselected *C.QItemSelection) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelection(selected)

	slotval2 := newQItemSelection(deselected)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_SelectionChanged, slotval1, slotval2)

}

func (this *QTreeWidget) callVirtualBase_CurrentChanged(current *QModelIndex, previous *QModelIndex) {

	C.QTreeWidget_virtualbase_CurrentChanged(unsafe.Pointer(this.h), current.cPointer(), previous.cPointer())

}
func (this *QTreeWidget) OnCurrentChanged(slot func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex)) {
	ok := C.QTreeWidget_override_virtual_CurrentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_CurrentChanged
func miqt_exec_callback_QTreeWidget_CurrentChanged(self *C.QTreeWidget, cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(current)

	slotval2 := newQModelIndex(previous)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_CurrentChanged, slotval1, slotval2)

}

func (this *QTreeWidget) callVirtualBase_SizeHintForRow(row int) int {

	return (int)(C.QTreeWidget_virtualbase_SizeHintForRow(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QTreeWidget) OnSizeHintForRow(slot func(super func(row int) int, row int) int) {
	ok := C.QTreeWidget_override_virtual_SizeHintForRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_SizeHintForRow
func miqt_exec_callback_QTreeWidget_SizeHintForRow(self *C.QTreeWidget, cb C.intptr_t, row C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int) int, row int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_SizeHintForRow, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_ItemDelegateForIndex(index *QModelIndex) *QAbstractItemDelegate {

	return newQAbstractItemDelegate(C.QTreeWidget_virtualbase_ItemDelegateForIndex(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QTreeWidget) OnItemDelegateForIndex(slot func(super func(index *QModelIndex) *QAbstractItemDelegate, index *QModelIndex) *QAbstractItemDelegate) {
	ok := C.QTreeWidget_override_virtual_ItemDelegateForIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_ItemDelegateForIndex
func miqt_exec_callback_QTreeWidget_ItemDelegateForIndex(self *C.QTreeWidget, cb C.intptr_t, index *C.QModelIndex) *C.QAbstractItemDelegate {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QAbstractItemDelegate, index *QModelIndex) *QAbstractItemDelegate)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_ItemDelegateForIndex, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QTreeWidget_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidget) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QTreeWidget_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_InputMethodQuery
func miqt_exec_callback_QTreeWidget_InputMethodQuery(self *C.QTreeWidget, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_UpdateEditorData() {

	C.QTreeWidget_virtualbase_UpdateEditorData(unsafe.Pointer(this.h))

}
func (this *QTreeWidget) OnUpdateEditorData(slot func(super func())) {
	ok := C.QTreeWidget_override_virtual_UpdateEditorData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_UpdateEditorData
func miqt_exec_callback_QTreeWidget_UpdateEditorData(self *C.QTreeWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeWidget{h: self}).callVirtualBase_UpdateEditorData)

}

func (this *QTreeWidget) callVirtualBase_UpdateEditorGeometries() {

	C.QTreeWidget_virtualbase_UpdateEditorGeometries(unsafe.Pointer(this.h))

}
func (this *QTreeWidget) OnUpdateEditorGeometries(slot func(super func())) {
	ok := C.QTreeWidget_override_virtual_UpdateEditorGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_UpdateEditorGeometries
func miqt_exec_callback_QTreeWidget_UpdateEditorGeometries(self *C.QTreeWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeWidget{h: self}).callVirtualBase_UpdateEditorGeometries)

}

func (this *QTreeWidget) callVirtualBase_VerticalScrollbarAction(action int) {

	C.QTreeWidget_virtualbase_VerticalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QTreeWidget) OnVerticalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QTreeWidget_override_virtual_VerticalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_VerticalScrollbarAction
func miqt_exec_callback_QTreeWidget_VerticalScrollbarAction(self *C.QTreeWidget, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_VerticalScrollbarAction, slotval1)

}

func (this *QTreeWidget) callVirtualBase_HorizontalScrollbarValueChanged(value int) {

	C.QTreeWidget_virtualbase_HorizontalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QTreeWidget) OnHorizontalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QTreeWidget_override_virtual_HorizontalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_HorizontalScrollbarValueChanged
func miqt_exec_callback_QTreeWidget_HorizontalScrollbarValueChanged(self *C.QTreeWidget, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_HorizontalScrollbarValueChanged, slotval1)

}

func (this *QTreeWidget) callVirtualBase_CloseEditor(editor *QWidget, hint QAbstractItemDelegate__EndEditHint) {

	C.QTreeWidget_virtualbase_CloseEditor(unsafe.Pointer(this.h), editor.cPointer(), (C.int)(hint))

}
func (this *QTreeWidget) OnCloseEditor(slot func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint)) {
	ok := C.QTreeWidget_override_virtual_CloseEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_CloseEditor
func miqt_exec_callback_QTreeWidget_CloseEditor(self *C.QTreeWidget, cb C.intptr_t, editor *C.QWidget, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := (QAbstractItemDelegate__EndEditHint)(hint)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_CloseEditor, slotval1, slotval2)

}

func (this *QTreeWidget) callVirtualBase_CommitData(editor *QWidget) {

	C.QTreeWidget_virtualbase_CommitData(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QTreeWidget) OnCommitData(slot func(super func(editor *QWidget), editor *QWidget)) {
	ok := C.QTreeWidget_override_virtual_CommitData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_CommitData
func miqt_exec_callback_QTreeWidget_CommitData(self *C.QTreeWidget, cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget), editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_CommitData, slotval1)

}

func (this *QTreeWidget) callVirtualBase_EditorDestroyed(editor *QObject) {

	C.QTreeWidget_virtualbase_EditorDestroyed(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QTreeWidget) OnEditorDestroyed(slot func(super func(editor *QObject), editor *QObject)) {
	ok := C.QTreeWidget_override_virtual_EditorDestroyed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_EditorDestroyed
func miqt_exec_callback_QTreeWidget_EditorDestroyed(self *C.QTreeWidget, cb C.intptr_t, editor *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QObject), editor *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(editor)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_EditorDestroyed, slotval1)

}

func (this *QTreeWidget) callVirtualBase_Edit2(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool {

	return (bool)(C.QTreeWidget_virtualbase_Edit2(unsafe.Pointer(this.h), index.cPointer(), (C.int)(trigger), event.cPointer()))

}
func (this *QTreeWidget) OnEdit2(slot func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool) {
	ok := C.QTreeWidget_override_virtual_Edit2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_Edit2
func miqt_exec_callback_QTreeWidget_Edit2(self *C.QTreeWidget, cb C.intptr_t, index *C.QModelIndex, trigger C.int, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := (QAbstractItemView__EditTrigger)(trigger)

	slotval3 := newQEvent(event)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_Edit2, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_SelectionCommand(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag {

	return (QItemSelectionModel__SelectionFlag)(C.QTreeWidget_virtualbase_SelectionCommand(unsafe.Pointer(this.h), index.cPointer(), event.cPointer()))

}
func (this *QTreeWidget) OnSelectionCommand(slot func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag) {
	ok := C.QTreeWidget_override_virtual_SelectionCommand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_SelectionCommand
func miqt_exec_callback_QTreeWidget_SelectionCommand(self *C.QTreeWidget, cb C.intptr_t, index *C.QModelIndex, event *C.QEvent) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(index)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_SelectionCommand, slotval1, slotval2)

	return (C.int)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_StartDrag(supportedActions DropAction) {

	C.QTreeWidget_virtualbase_StartDrag(unsafe.Pointer(this.h), (C.int)(supportedActions))

}
func (this *QTreeWidget) OnStartDrag(slot func(super func(supportedActions DropAction), supportedActions DropAction)) {
	ok := C.QTreeWidget_override_virtual_StartDrag(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_StartDrag
func miqt_exec_callback_QTreeWidget_StartDrag(self *C.QTreeWidget, cb C.intptr_t, supportedActions C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(supportedActions DropAction), supportedActions DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(supportedActions)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_StartDrag, slotval1)

}

func (this *QTreeWidget) callVirtualBase_InitViewItemOption(option *QStyleOptionViewItem) {

	C.QTreeWidget_virtualbase_InitViewItemOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QTreeWidget) OnInitViewItemOption(slot func(super func(option *QStyleOptionViewItem), option *QStyleOptionViewItem)) {
	ok := C.QTreeWidget_override_virtual_InitViewItemOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_InitViewItemOption
func miqt_exec_callback_QTreeWidget_InitViewItemOption(self *C.QTreeWidget, cb C.intptr_t, option *C.QStyleOptionViewItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionViewItem), option *QStyleOptionViewItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionViewItem(option)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_InitViewItemOption, slotval1)

}

func (this *QTreeWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QTreeWidget_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QTreeWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QTreeWidget_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_FocusNextPrevChild
func miqt_exec_callback_QTreeWidget_FocusNextPrevChild(self *C.QTreeWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QTreeWidget_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QTreeWidget_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_DragEnterEvent
func miqt_exec_callback_QTreeWidget_DragEnterEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QTreeWidget_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QTreeWidget_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_DragLeaveEvent
func miqt_exec_callback_QTreeWidget_DragLeaveEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QTreeWidget_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QTreeWidget_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_FocusInEvent
func miqt_exec_callback_QTreeWidget_FocusInEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QTreeWidget_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QTreeWidget_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_FocusOutEvent
func miqt_exec_callback_QTreeWidget_FocusOutEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QTreeWidget_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QTreeWidget_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_ResizeEvent
func miqt_exec_callback_QTreeWidget_ResizeEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QTreeWidget_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QTreeWidget_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_InputMethodEvent
func miqt_exec_callback_QTreeWidget_InputMethodEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QTreeWidget_virtualbase_EventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QTreeWidget) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QTreeWidget_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_EventFilter
func miqt_exec_callback_QTreeWidget_EventFilter(self *C.QTreeWidget, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QTreeWidget_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidget) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTreeWidget_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_MinimumSizeHint
func miqt_exec_callback_QTreeWidget_MinimumSizeHint(self *C.QTreeWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QTreeWidget_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidget) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTreeWidget_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_SizeHint
func miqt_exec_callback_QTreeWidget_SizeHint(self *C.QTreeWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QTreeWidget_virtualbase_SetupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QTreeWidget) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QTreeWidget_override_virtual_SetupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_SetupViewport
func miqt_exec_callback_QTreeWidget_SetupViewport(self *C.QTreeWidget, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QTreeWidget) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QTreeWidget_virtualbase_WheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTreeWidget) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QTreeWidget_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_WheelEvent
func miqt_exec_callback_QTreeWidget_WheelEvent(self *C.QTreeWidget, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QTreeWidget_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTreeWidget) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QTreeWidget_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_ContextMenuEvent
func miqt_exec_callback_QTreeWidget_ContextMenuEvent(self *C.QTreeWidget, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_InitStyleOption(option *QStyleOptionFrame) {

	C.QTreeWidget_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QTreeWidget) OnInitStyleOption(slot func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame)) {
	ok := C.QTreeWidget_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_InitStyleOption
func miqt_exec_callback_QTreeWidget_InitStyleOption(self *C.QTreeWidget, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionFrame(option)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QTreeWidget) callVirtualBase_DevType() int {

	return (int)(C.QTreeWidget_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QTreeWidget) OnDevType(slot func(super func() int) int) {
	ok := C.QTreeWidget_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_DevType
func miqt_exec_callback_QTreeWidget_DevType(self *C.QTreeWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_SetVisible(visible bool) {

	C.QTreeWidget_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QTreeWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QTreeWidget_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_SetVisible
func miqt_exec_callback_QTreeWidget_SetVisible(self *C.QTreeWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QTreeWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QTreeWidget_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTreeWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QTreeWidget_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_HeightForWidth
func miqt_exec_callback_QTreeWidget_HeightForWidth(self *C.QTreeWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QTreeWidget_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QTreeWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QTreeWidget_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_HasHeightForWidth
func miqt_exec_callback_QTreeWidget_HasHeightForWidth(self *C.QTreeWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QTreeWidget_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QTreeWidget) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QTreeWidget_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_PaintEngine
func miqt_exec_callback_QTreeWidget_PaintEngine(self *C.QTreeWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QTreeWidget_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QTreeWidget_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_KeyReleaseEvent
func miqt_exec_callback_QTreeWidget_KeyReleaseEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QTreeWidget_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QTreeWidget_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_EnterEvent
func miqt_exec_callback_QTreeWidget_EnterEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QTreeWidget_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTreeWidget_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_LeaveEvent
func miqt_exec_callback_QTreeWidget_LeaveEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QTreeWidget_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QTreeWidget_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_MoveEvent
func miqt_exec_callback_QTreeWidget_MoveEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QTreeWidget_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QTreeWidget_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_CloseEvent
func miqt_exec_callback_QTreeWidget_CloseEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QTreeWidget_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QTreeWidget_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_TabletEvent
func miqt_exec_callback_QTreeWidget_TabletEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QTreeWidget_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QTreeWidget_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_ActionEvent
func miqt_exec_callback_QTreeWidget_ActionEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QTreeWidget_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QTreeWidget_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_ShowEvent
func miqt_exec_callback_QTreeWidget_ShowEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QTreeWidget_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QTreeWidget_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_HideEvent
func miqt_exec_callback_QTreeWidget_HideEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QTreeWidget_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QTreeWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QTreeWidget_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_NativeEvent
func miqt_exec_callback_QTreeWidget_NativeEvent(self *C.QTreeWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QTreeWidget_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTreeWidget) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QTreeWidget_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_Metric
func miqt_exec_callback_QTreeWidget_Metric(self *C.QTreeWidget, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_InitPainter(painter *QPainter) {

	C.QTreeWidget_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QTreeWidget) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QTreeWidget_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_InitPainter
func miqt_exec_callback_QTreeWidget_InitPainter(self *C.QTreeWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QTreeWidget) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QTreeWidget_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QTreeWidget) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QTreeWidget_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_Redirected
func miqt_exec_callback_QTreeWidget_Redirected(self *C.QTreeWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QTreeWidget_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QTreeWidget) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QTreeWidget_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_SharedPainter
func miqt_exec_callback_QTreeWidget_SharedPainter(self *C.QTreeWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTreeWidget_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTreeWidget_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_ChildEvent
func miqt_exec_callback_QTreeWidget_ChildEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTreeWidget_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTreeWidget_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_CustomEvent
func miqt_exec_callback_QTreeWidget_CustomEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTreeWidget_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTreeWidget) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTreeWidget_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_ConnectNotify
func miqt_exec_callback_QTreeWidget_ConnectNotify(self *C.QTreeWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTreeWidget) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTreeWidget_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTreeWidget) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTreeWidget_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_DisconnectNotify
func miqt_exec_callback_QTreeWidget_DisconnectNotify(self *C.QTreeWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTreeWidget) Delete() {
	C.QTreeWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTreeWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QTreeWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
