package qt

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
	return newQTreeWidgetItem(C.QTreeWidgetItem_clone(this.h))
}

func (this *QTreeWidgetItem) TreeWidget() *QTreeWidget {
	return newQTreeWidget(C.QTreeWidgetItem_treeWidget(this.h))
}

func (this *QTreeWidgetItem) SetSelected(selectVal bool) {
	C.QTreeWidgetItem_setSelected(this.h, (C.bool)(selectVal))
}

func (this *QTreeWidgetItem) IsSelected() bool {
	return (bool)(C.QTreeWidgetItem_isSelected(this.h))
}

func (this *QTreeWidgetItem) SetHidden(hide bool) {
	C.QTreeWidgetItem_setHidden(this.h, (C.bool)(hide))
}

func (this *QTreeWidgetItem) IsHidden() bool {
	return (bool)(C.QTreeWidgetItem_isHidden(this.h))
}

func (this *QTreeWidgetItem) SetExpanded(expand bool) {
	C.QTreeWidgetItem_setExpanded(this.h, (C.bool)(expand))
}

func (this *QTreeWidgetItem) IsExpanded() bool {
	return (bool)(C.QTreeWidgetItem_isExpanded(this.h))
}

func (this *QTreeWidgetItem) SetFirstColumnSpanned(span bool) {
	C.QTreeWidgetItem_setFirstColumnSpanned(this.h, (C.bool)(span))
}

func (this *QTreeWidgetItem) IsFirstColumnSpanned() bool {
	return (bool)(C.QTreeWidgetItem_isFirstColumnSpanned(this.h))
}

func (this *QTreeWidgetItem) SetDisabled(disabled bool) {
	C.QTreeWidgetItem_setDisabled(this.h, (C.bool)(disabled))
}

func (this *QTreeWidgetItem) IsDisabled() bool {
	return (bool)(C.QTreeWidgetItem_isDisabled(this.h))
}

func (this *QTreeWidgetItem) SetChildIndicatorPolicy(policy QTreeWidgetItem__ChildIndicatorPolicy) {
	C.QTreeWidgetItem_setChildIndicatorPolicy(this.h, (C.int)(policy))
}

func (this *QTreeWidgetItem) ChildIndicatorPolicy() QTreeWidgetItem__ChildIndicatorPolicy {
	return (QTreeWidgetItem__ChildIndicatorPolicy)(C.QTreeWidgetItem_childIndicatorPolicy(this.h))
}

func (this *QTreeWidgetItem) Flags() ItemFlag {
	return (ItemFlag)(C.QTreeWidgetItem_flags(this.h))
}

func (this *QTreeWidgetItem) SetFlags(flags ItemFlag) {
	C.QTreeWidgetItem_setFlags(this.h, (C.int)(flags))
}

func (this *QTreeWidgetItem) Text(column int) string {
	var _ms C.struct_miqt_string = C.QTreeWidgetItem_text(this.h, (C.int)(column))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeWidgetItem) SetText(column int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTreeWidgetItem_setText(this.h, (C.int)(column), text_ms)
}

func (this *QTreeWidgetItem) Icon(column int) *QIcon {
	_goptr := newQIcon(C.QTreeWidgetItem_icon(this.h, (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetIcon(column int, icon *QIcon) {
	C.QTreeWidgetItem_setIcon(this.h, (C.int)(column), icon.cPointer())
}

func (this *QTreeWidgetItem) StatusTip(column int) string {
	var _ms C.struct_miqt_string = C.QTreeWidgetItem_statusTip(this.h, (C.int)(column))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeWidgetItem) SetStatusTip(column int, statusTip string) {
	statusTip_ms := C.struct_miqt_string{}
	statusTip_ms.data = C.CString(statusTip)
	statusTip_ms.len = C.size_t(len(statusTip))
	defer C.free(unsafe.Pointer(statusTip_ms.data))
	C.QTreeWidgetItem_setStatusTip(this.h, (C.int)(column), statusTip_ms)
}

func (this *QTreeWidgetItem) ToolTip(column int) string {
	var _ms C.struct_miqt_string = C.QTreeWidgetItem_toolTip(this.h, (C.int)(column))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeWidgetItem) SetToolTip(column int, toolTip string) {
	toolTip_ms := C.struct_miqt_string{}
	toolTip_ms.data = C.CString(toolTip)
	toolTip_ms.len = C.size_t(len(toolTip))
	defer C.free(unsafe.Pointer(toolTip_ms.data))
	C.QTreeWidgetItem_setToolTip(this.h, (C.int)(column), toolTip_ms)
}

func (this *QTreeWidgetItem) WhatsThis(column int) string {
	var _ms C.struct_miqt_string = C.QTreeWidgetItem_whatsThis(this.h, (C.int)(column))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeWidgetItem) SetWhatsThis(column int, whatsThis string) {
	whatsThis_ms := C.struct_miqt_string{}
	whatsThis_ms.data = C.CString(whatsThis)
	whatsThis_ms.len = C.size_t(len(whatsThis))
	defer C.free(unsafe.Pointer(whatsThis_ms.data))
	C.QTreeWidgetItem_setWhatsThis(this.h, (C.int)(column), whatsThis_ms)
}

func (this *QTreeWidgetItem) Font(column int) *QFont {
	_goptr := newQFont(C.QTreeWidgetItem_font(this.h, (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetFont(column int, font *QFont) {
	C.QTreeWidgetItem_setFont(this.h, (C.int)(column), font.cPointer())
}

func (this *QTreeWidgetItem) TextAlignment(column int) int {
	return (int)(C.QTreeWidgetItem_textAlignment(this.h, (C.int)(column)))
}

func (this *QTreeWidgetItem) SetTextAlignment(column int, alignment int) {
	C.QTreeWidgetItem_setTextAlignment(this.h, (C.int)(column), (C.int)(alignment))
}

func (this *QTreeWidgetItem) BackgroundColor(column int) *QColor {
	_goptr := newQColor(C.QTreeWidgetItem_backgroundColor(this.h, (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetBackgroundColor(column int, color *QColor) {
	C.QTreeWidgetItem_setBackgroundColor(this.h, (C.int)(column), color.cPointer())
}

func (this *QTreeWidgetItem) Background(column int) *QBrush {
	_goptr := newQBrush(C.QTreeWidgetItem_background(this.h, (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetBackground(column int, brush *QBrush) {
	C.QTreeWidgetItem_setBackground(this.h, (C.int)(column), brush.cPointer())
}

func (this *QTreeWidgetItem) TextColor(column int) *QColor {
	_goptr := newQColor(C.QTreeWidgetItem_textColor(this.h, (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetTextColor(column int, color *QColor) {
	C.QTreeWidgetItem_setTextColor(this.h, (C.int)(column), color.cPointer())
}

func (this *QTreeWidgetItem) Foreground(column int) *QBrush {
	_goptr := newQBrush(C.QTreeWidgetItem_foreground(this.h, (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetForeground(column int, brush *QBrush) {
	C.QTreeWidgetItem_setForeground(this.h, (C.int)(column), brush.cPointer())
}

func (this *QTreeWidgetItem) CheckState(column int) CheckState {
	return (CheckState)(C.QTreeWidgetItem_checkState(this.h, (C.int)(column)))
}

func (this *QTreeWidgetItem) SetCheckState(column int, state CheckState) {
	C.QTreeWidgetItem_setCheckState(this.h, (C.int)(column), (C.int)(state))
}

func (this *QTreeWidgetItem) SizeHint(column int) *QSize {
	_goptr := newQSize(C.QTreeWidgetItem_sizeHint(this.h, (C.int)(column)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetSizeHint(column int, size *QSize) {
	C.QTreeWidgetItem_setSizeHint(this.h, (C.int)(column), size.cPointer())
}

func (this *QTreeWidgetItem) Data(column int, role int) *QVariant {
	_goptr := newQVariant(C.QTreeWidgetItem_data(this.h, (C.int)(column), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidgetItem) SetData(column int, role int, value *QVariant) {
	C.QTreeWidgetItem_setData(this.h, (C.int)(column), (C.int)(role), value.cPointer())
}

func (this *QTreeWidgetItem) OperatorLesser(other *QTreeWidgetItem) bool {
	return (bool)(C.QTreeWidgetItem_operatorLesser(this.h, other.cPointer()))
}

func (this *QTreeWidgetItem) Read(in *QDataStream) {
	C.QTreeWidgetItem_read(this.h, in.cPointer())
}

func (this *QTreeWidgetItem) Write(out *QDataStream) {
	C.QTreeWidgetItem_write(this.h, out.cPointer())
}

func (this *QTreeWidgetItem) OperatorAssign(other *QTreeWidgetItem) {
	C.QTreeWidgetItem_operatorAssign(this.h, other.cPointer())
}

func (this *QTreeWidgetItem) Parent() *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidgetItem_parent(this.h))
}

func (this *QTreeWidgetItem) Child(index int) *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidgetItem_child(this.h, (C.int)(index)))
}

func (this *QTreeWidgetItem) ChildCount() int {
	return (int)(C.QTreeWidgetItem_childCount(this.h))
}

func (this *QTreeWidgetItem) ColumnCount() int {
	return (int)(C.QTreeWidgetItem_columnCount(this.h))
}

func (this *QTreeWidgetItem) IndexOfChild(child *QTreeWidgetItem) int {
	return (int)(C.QTreeWidgetItem_indexOfChild(this.h, child.cPointer()))
}

func (this *QTreeWidgetItem) AddChild(child *QTreeWidgetItem) {
	C.QTreeWidgetItem_addChild(this.h, child.cPointer())
}

func (this *QTreeWidgetItem) InsertChild(index int, child *QTreeWidgetItem) {
	C.QTreeWidgetItem_insertChild(this.h, (C.int)(index), child.cPointer())
}

func (this *QTreeWidgetItem) RemoveChild(child *QTreeWidgetItem) {
	C.QTreeWidgetItem_removeChild(this.h, child.cPointer())
}

func (this *QTreeWidgetItem) TakeChild(index int) *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidgetItem_takeChild(this.h, (C.int)(index)))
}

func (this *QTreeWidgetItem) AddChildren(children []*QTreeWidgetItem) {
	children_CArray := (*[0xffff]*C.QTreeWidgetItem)(C.malloc(C.size_t(8 * len(children))))
	defer C.free(unsafe.Pointer(children_CArray))
	for i := range children {
		children_CArray[i] = children[i].cPointer()
	}
	children_ma := C.struct_miqt_array{len: C.size_t(len(children)), data: unsafe.Pointer(children_CArray)}
	C.QTreeWidgetItem_addChildren(this.h, children_ma)
}

func (this *QTreeWidgetItem) InsertChildren(index int, children []*QTreeWidgetItem) {
	children_CArray := (*[0xffff]*C.QTreeWidgetItem)(C.malloc(C.size_t(8 * len(children))))
	defer C.free(unsafe.Pointer(children_CArray))
	for i := range children {
		children_CArray[i] = children[i].cPointer()
	}
	children_ma := C.struct_miqt_array{len: C.size_t(len(children)), data: unsafe.Pointer(children_CArray)}
	C.QTreeWidgetItem_insertChildren(this.h, (C.int)(index), children_ma)
}

func (this *QTreeWidgetItem) TakeChildren() []*QTreeWidgetItem {
	var _ma C.struct_miqt_array = C.QTreeWidgetItem_takeChildren(this.h)
	_ret := make([]*QTreeWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QTreeWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQTreeWidgetItem(_outCast[i])
	}
	return _ret
}

func (this *QTreeWidgetItem) Type() int {
	return (int)(C.QTreeWidgetItem_type(this.h))
}

func (this *QTreeWidgetItem) SortChildren(column int, order SortOrder) {
	C.QTreeWidgetItem_sortChildren(this.h, (C.int)(column), (C.int)(order))
}

func (this *QTreeWidgetItem) callVirtualBase_Clone() *QTreeWidgetItem {

	return newQTreeWidgetItem(C.QTreeWidgetItem_virtualbase_clone(unsafe.Pointer(this.h)))

}
func (this *QTreeWidgetItem) OnClone(slot func(super func() *QTreeWidgetItem) *QTreeWidgetItem) {
	ok := C.QTreeWidgetItem_override_virtual_clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidgetItem_clone
func miqt_exec_callback_QTreeWidgetItem_clone(self *C.QTreeWidgetItem, cb C.intptr_t) *C.QTreeWidgetItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QTreeWidgetItem) *QTreeWidgetItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidgetItem{h: self}).callVirtualBase_Clone)

	return virtualReturn.cPointer()

}

func (this *QTreeWidgetItem) callVirtualBase_Data(column int, role int) *QVariant {

	_goptr := newQVariant(C.QTreeWidgetItem_virtualbase_data(unsafe.Pointer(this.h), (C.int)(column), (C.int)(role)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidgetItem) OnData(slot func(super func(column int, role int) *QVariant, column int, role int) *QVariant) {
	ok := C.QTreeWidgetItem_override_virtual_data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidgetItem_data
func miqt_exec_callback_QTreeWidgetItem_data(self *C.QTreeWidgetItem, cb C.intptr_t, column C.int, role C.int) *C.QVariant {
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

	C.QTreeWidgetItem_virtualbase_setData(unsafe.Pointer(this.h), (C.int)(column), (C.int)(role), value.cPointer())

}
func (this *QTreeWidgetItem) OnSetData(slot func(super func(column int, role int, value *QVariant), column int, role int, value *QVariant)) {
	ok := C.QTreeWidgetItem_override_virtual_setData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidgetItem_setData
func miqt_exec_callback_QTreeWidgetItem_setData(self *C.QTreeWidgetItem, cb C.intptr_t, column C.int, role C.int, value *C.QVariant) {
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

	return (bool)(C.QTreeWidgetItem_virtualbase_operatorLesser(unsafe.Pointer(this.h), other.cPointer()))

}
func (this *QTreeWidgetItem) OnOperatorLesser(slot func(super func(other *QTreeWidgetItem) bool, other *QTreeWidgetItem) bool) {
	ok := C.QTreeWidgetItem_override_virtual_operatorLesser(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidgetItem_operatorLesser
func miqt_exec_callback_QTreeWidgetItem_operatorLesser(self *C.QTreeWidgetItem, cb C.intptr_t, other *C.QTreeWidgetItem) C.bool {
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

	C.QTreeWidgetItem_virtualbase_read(unsafe.Pointer(this.h), in.cPointer())

}
func (this *QTreeWidgetItem) OnRead(slot func(super func(in *QDataStream), in *QDataStream)) {
	ok := C.QTreeWidgetItem_override_virtual_read(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidgetItem_read
func miqt_exec_callback_QTreeWidgetItem_read(self *C.QTreeWidgetItem, cb C.intptr_t, in *C.QDataStream) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(in *QDataStream), in *QDataStream))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDataStream(in)

	gofunc((&QTreeWidgetItem{h: self}).callVirtualBase_Read, slotval1)

}

func (this *QTreeWidgetItem) callVirtualBase_Write(out *QDataStream) {

	C.QTreeWidgetItem_virtualbase_write(unsafe.Pointer(this.h), out.cPointer())

}
func (this *QTreeWidgetItem) OnWrite(slot func(super func(out *QDataStream), out *QDataStream)) {
	ok := C.QTreeWidgetItem_override_virtual_write(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidgetItem_write
func miqt_exec_callback_QTreeWidgetItem_write(self *C.QTreeWidgetItem, cb C.intptr_t, out *C.QDataStream) {
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
	C.QTreeWidgetItem_delete(this.h)
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
	return newQMetaObject(C.QTreeWidget_metaObject(this.h))
}

func (this *QTreeWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTreeWidget_metacast(this.h, param1_Cstring))
}

func QTreeWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTreeWidget_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTreeWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTreeWidget_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeWidget) ColumnCount() int {
	return (int)(C.QTreeWidget_columnCount(this.h))
}

func (this *QTreeWidget) SetColumnCount(columns int) {
	C.QTreeWidget_setColumnCount(this.h, (C.int)(columns))
}

func (this *QTreeWidget) InvisibleRootItem() *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_invisibleRootItem(this.h))
}

func (this *QTreeWidget) TopLevelItem(index int) *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_topLevelItem(this.h, (C.int)(index)))
}

func (this *QTreeWidget) TopLevelItemCount() int {
	return (int)(C.QTreeWidget_topLevelItemCount(this.h))
}

func (this *QTreeWidget) InsertTopLevelItem(index int, item *QTreeWidgetItem) {
	C.QTreeWidget_insertTopLevelItem(this.h, (C.int)(index), item.cPointer())
}

func (this *QTreeWidget) AddTopLevelItem(item *QTreeWidgetItem) {
	C.QTreeWidget_addTopLevelItem(this.h, item.cPointer())
}

func (this *QTreeWidget) TakeTopLevelItem(index int) *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_takeTopLevelItem(this.h, (C.int)(index)))
}

func (this *QTreeWidget) IndexOfTopLevelItem(item *QTreeWidgetItem) int {
	return (int)(C.QTreeWidget_indexOfTopLevelItem(this.h, item.cPointer()))
}

func (this *QTreeWidget) InsertTopLevelItems(index int, items []*QTreeWidgetItem) {
	items_CArray := (*[0xffff]*C.QTreeWidgetItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	C.QTreeWidget_insertTopLevelItems(this.h, (C.int)(index), items_ma)
}

func (this *QTreeWidget) AddTopLevelItems(items []*QTreeWidgetItem) {
	items_CArray := (*[0xffff]*C.QTreeWidgetItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	items_ma := C.struct_miqt_array{len: C.size_t(len(items)), data: unsafe.Pointer(items_CArray)}
	C.QTreeWidget_addTopLevelItems(this.h, items_ma)
}

func (this *QTreeWidget) HeaderItem() *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_headerItem(this.h))
}

func (this *QTreeWidget) SetHeaderItem(item *QTreeWidgetItem) {
	C.QTreeWidget_setHeaderItem(this.h, item.cPointer())
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
	C.QTreeWidget_setHeaderLabels(this.h, labels_ma)
}

func (this *QTreeWidget) SetHeaderLabel(label string) {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	C.QTreeWidget_setHeaderLabel(this.h, label_ms)
}

func (this *QTreeWidget) CurrentItem() *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_currentItem(this.h))
}

func (this *QTreeWidget) CurrentColumn() int {
	return (int)(C.QTreeWidget_currentColumn(this.h))
}

func (this *QTreeWidget) SetCurrentItem(item *QTreeWidgetItem) {
	C.QTreeWidget_setCurrentItem(this.h, item.cPointer())
}

func (this *QTreeWidget) SetCurrentItem2(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_setCurrentItem2(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) SetCurrentItem3(item *QTreeWidgetItem, column int, command QItemSelectionModel__SelectionFlag) {
	C.QTreeWidget_setCurrentItem3(this.h, item.cPointer(), (C.int)(column), (C.int)(command))
}

func (this *QTreeWidget) ItemAt(p *QPoint) *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_itemAt(this.h, p.cPointer()))
}

func (this *QTreeWidget) ItemAt2(x int, y int) *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_itemAt2(this.h, (C.int)(x), (C.int)(y)))
}

func (this *QTreeWidget) VisualItemRect(item *QTreeWidgetItem) *QRect {
	_goptr := newQRect(C.QTreeWidget_visualItemRect(this.h, item.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeWidget) SortColumn() int {
	return (int)(C.QTreeWidget_sortColumn(this.h))
}

func (this *QTreeWidget) SortItems(column int, order SortOrder) {
	C.QTreeWidget_sortItems(this.h, (C.int)(column), (C.int)(order))
}

func (this *QTreeWidget) EditItem(item *QTreeWidgetItem) {
	C.QTreeWidget_editItem(this.h, item.cPointer())
}

func (this *QTreeWidget) OpenPersistentEditor(item *QTreeWidgetItem) {
	C.QTreeWidget_openPersistentEditor(this.h, item.cPointer())
}

func (this *QTreeWidget) ClosePersistentEditor(item *QTreeWidgetItem) {
	C.QTreeWidget_closePersistentEditor(this.h, item.cPointer())
}

func (this *QTreeWidget) IsPersistentEditorOpen(item *QTreeWidgetItem) bool {
	return (bool)(C.QTreeWidget_isPersistentEditorOpen(this.h, item.cPointer()))
}

func (this *QTreeWidget) ItemWidget(item *QTreeWidgetItem, column int) *QWidget {
	return newQWidget(C.QTreeWidget_itemWidget(this.h, item.cPointer(), (C.int)(column)))
}

func (this *QTreeWidget) SetItemWidget(item *QTreeWidgetItem, column int, widget *QWidget) {
	C.QTreeWidget_setItemWidget(this.h, item.cPointer(), (C.int)(column), widget.cPointer())
}

func (this *QTreeWidget) RemoveItemWidget(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_removeItemWidget(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) IsItemSelected(item *QTreeWidgetItem) bool {
	return (bool)(C.QTreeWidget_isItemSelected(this.h, item.cPointer()))
}

func (this *QTreeWidget) SetItemSelected(item *QTreeWidgetItem, selectVal bool) {
	C.QTreeWidget_setItemSelected(this.h, item.cPointer(), (C.bool)(selectVal))
}

func (this *QTreeWidget) SelectedItems() []*QTreeWidgetItem {
	var _ma C.struct_miqt_array = C.QTreeWidget_selectedItems(this.h)
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
	var _ma C.struct_miqt_array = C.QTreeWidget_findItems(this.h, text_ms, (C.int)(flags))
	_ret := make([]*QTreeWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QTreeWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQTreeWidgetItem(_outCast[i])
	}
	return _ret
}

func (this *QTreeWidget) IsItemHidden(item *QTreeWidgetItem) bool {
	return (bool)(C.QTreeWidget_isItemHidden(this.h, item.cPointer()))
}

func (this *QTreeWidget) SetItemHidden(item *QTreeWidgetItem, hide bool) {
	C.QTreeWidget_setItemHidden(this.h, item.cPointer(), (C.bool)(hide))
}

func (this *QTreeWidget) IsItemExpanded(item *QTreeWidgetItem) bool {
	return (bool)(C.QTreeWidget_isItemExpanded(this.h, item.cPointer()))
}

func (this *QTreeWidget) SetItemExpanded(item *QTreeWidgetItem, expand bool) {
	C.QTreeWidget_setItemExpanded(this.h, item.cPointer(), (C.bool)(expand))
}

func (this *QTreeWidget) IsFirstItemColumnSpanned(item *QTreeWidgetItem) bool {
	return (bool)(C.QTreeWidget_isFirstItemColumnSpanned(this.h, item.cPointer()))
}

func (this *QTreeWidget) SetFirstItemColumnSpanned(item *QTreeWidgetItem, span bool) {
	C.QTreeWidget_setFirstItemColumnSpanned(this.h, item.cPointer(), (C.bool)(span))
}

func (this *QTreeWidget) ItemAbove(item *QTreeWidgetItem) *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_itemAbove(this.h, item.cPointer()))
}

func (this *QTreeWidget) ItemBelow(item *QTreeWidgetItem) *QTreeWidgetItem {
	return newQTreeWidgetItem(C.QTreeWidget_itemBelow(this.h, item.cPointer()))
}

func (this *QTreeWidget) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QTreeWidget_setSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QTreeWidget) ScrollToItem(item *QTreeWidgetItem) {
	C.QTreeWidget_scrollToItem(this.h, item.cPointer())
}

func (this *QTreeWidget) ExpandItem(item *QTreeWidgetItem) {
	C.QTreeWidget_expandItem(this.h, item.cPointer())
}

func (this *QTreeWidget) CollapseItem(item *QTreeWidgetItem) {
	C.QTreeWidget_collapseItem(this.h, item.cPointer())
}

func (this *QTreeWidget) Clear() {
	C.QTreeWidget_clear(this.h)
}

func (this *QTreeWidget) ItemPressed(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_itemPressed(this.h, item.cPointer(), (C.int)(column))
}
func (this *QTreeWidget) OnItemPressed(slot func(item *QTreeWidgetItem, column int)) {
	C.QTreeWidget_connect_itemPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_itemPressed
func miqt_exec_callback_QTreeWidget_itemPressed(cb C.intptr_t, item *C.QTreeWidgetItem, column C.int) {
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
	C.QTreeWidget_itemClicked(this.h, item.cPointer(), (C.int)(column))
}
func (this *QTreeWidget) OnItemClicked(slot func(item *QTreeWidgetItem, column int)) {
	C.QTreeWidget_connect_itemClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_itemClicked
func miqt_exec_callback_QTreeWidget_itemClicked(cb C.intptr_t, item *C.QTreeWidgetItem, column C.int) {
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
	C.QTreeWidget_itemDoubleClicked(this.h, item.cPointer(), (C.int)(column))
}
func (this *QTreeWidget) OnItemDoubleClicked(slot func(item *QTreeWidgetItem, column int)) {
	C.QTreeWidget_connect_itemDoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_itemDoubleClicked
func miqt_exec_callback_QTreeWidget_itemDoubleClicked(cb C.intptr_t, item *C.QTreeWidgetItem, column C.int) {
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
	C.QTreeWidget_itemActivated(this.h, item.cPointer(), (C.int)(column))
}
func (this *QTreeWidget) OnItemActivated(slot func(item *QTreeWidgetItem, column int)) {
	C.QTreeWidget_connect_itemActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_itemActivated
func miqt_exec_callback_QTreeWidget_itemActivated(cb C.intptr_t, item *C.QTreeWidgetItem, column C.int) {
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
	C.QTreeWidget_itemEntered(this.h, item.cPointer(), (C.int)(column))
}
func (this *QTreeWidget) OnItemEntered(slot func(item *QTreeWidgetItem, column int)) {
	C.QTreeWidget_connect_itemEntered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_itemEntered
func miqt_exec_callback_QTreeWidget_itemEntered(cb C.intptr_t, item *C.QTreeWidgetItem, column C.int) {
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
	C.QTreeWidget_itemChanged(this.h, item.cPointer(), (C.int)(column))
}
func (this *QTreeWidget) OnItemChanged(slot func(item *QTreeWidgetItem, column int)) {
	C.QTreeWidget_connect_itemChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_itemChanged
func miqt_exec_callback_QTreeWidget_itemChanged(cb C.intptr_t, item *C.QTreeWidgetItem, column C.int) {
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
	C.QTreeWidget_itemExpanded(this.h, item.cPointer())
}
func (this *QTreeWidget) OnItemExpanded(slot func(item *QTreeWidgetItem)) {
	C.QTreeWidget_connect_itemExpanded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_itemExpanded
func miqt_exec_callback_QTreeWidget_itemExpanded(cb C.intptr_t, item *C.QTreeWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTreeWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTreeWidgetItem(item)

	gofunc(slotval1)
}

func (this *QTreeWidget) ItemCollapsed(item *QTreeWidgetItem) {
	C.QTreeWidget_itemCollapsed(this.h, item.cPointer())
}
func (this *QTreeWidget) OnItemCollapsed(slot func(item *QTreeWidgetItem)) {
	C.QTreeWidget_connect_itemCollapsed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_itemCollapsed
func miqt_exec_callback_QTreeWidget_itemCollapsed(cb C.intptr_t, item *C.QTreeWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QTreeWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTreeWidgetItem(item)

	gofunc(slotval1)
}

func (this *QTreeWidget) CurrentItemChanged(current *QTreeWidgetItem, previous *QTreeWidgetItem) {
	C.QTreeWidget_currentItemChanged(this.h, current.cPointer(), previous.cPointer())
}
func (this *QTreeWidget) OnCurrentItemChanged(slot func(current *QTreeWidgetItem, previous *QTreeWidgetItem)) {
	C.QTreeWidget_connect_currentItemChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_currentItemChanged
func miqt_exec_callback_QTreeWidget_currentItemChanged(cb C.intptr_t, current *C.QTreeWidgetItem, previous *C.QTreeWidgetItem) {
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
	C.QTreeWidget_itemSelectionChanged(this.h)
}
func (this *QTreeWidget) OnItemSelectionChanged(slot func()) {
	C.QTreeWidget_connect_itemSelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeWidget_itemSelectionChanged
func miqt_exec_callback_QTreeWidget_itemSelectionChanged(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QTreeWidget_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTreeWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTreeWidget_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTreeWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTreeWidget_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTreeWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTreeWidget_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeWidget) EditItem2(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_editItem2(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) OpenPersistentEditor2(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_openPersistentEditor2(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) ClosePersistentEditor2(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_closePersistentEditor2(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) IsPersistentEditorOpen2(item *QTreeWidgetItem, column int) bool {
	return (bool)(C.QTreeWidget_isPersistentEditorOpen2(this.h, item.cPointer(), (C.int)(column)))
}

func (this *QTreeWidget) FindItems3(text string, flags MatchFlag, column int) []*QTreeWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ma C.struct_miqt_array = C.QTreeWidget_findItems3(this.h, text_ms, (C.int)(flags), (C.int)(column))
	_ret := make([]*QTreeWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QTreeWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQTreeWidgetItem(_outCast[i])
	}
	return _ret
}

func (this *QTreeWidget) ScrollToItem2(item *QTreeWidgetItem, hint QAbstractItemView__ScrollHint) {
	C.QTreeWidget_scrollToItem2(this.h, item.cPointer(), (C.int)(hint))
}

func (this *QTreeWidget) callVirtualBase_SetSelectionModel(selectionModel *QItemSelectionModel) {

	C.QTreeWidget_virtualbase_setSelectionModel(unsafe.Pointer(this.h), selectionModel.cPointer())

}
func (this *QTreeWidget) OnSetSelectionModel(slot func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel)) {
	ok := C.QTreeWidget_override_virtual_setSelectionModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_setSelectionModel
func miqt_exec_callback_QTreeWidget_setSelectionModel(self *C.QTreeWidget, cb C.intptr_t, selectionModel *C.QItemSelectionModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQItemSelectionModel(selectionModel)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_SetSelectionModel, slotval1)

}

func (this *QTreeWidget) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QTreeWidget_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QTreeWidget) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QTreeWidget_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_event
func miqt_exec_callback_QTreeWidget_event(self *C.QTreeWidget, cb C.intptr_t, e *C.QEvent) C.bool {
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

	var _ma C.struct_miqt_array = C.QTreeWidget_virtualbase_mimeTypes(unsafe.Pointer(this.h))
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
	ok := C.QTreeWidget_override_virtual_mimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_mimeTypes
func miqt_exec_callback_QTreeWidget_mimeTypes(self *C.QTreeWidget, cb C.intptr_t) C.struct_miqt_array {
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

	return newQMimeData(C.QTreeWidget_virtualbase_mimeData(unsafe.Pointer(this.h), items_ma))

}
func (this *QTreeWidget) OnMimeData(slot func(super func(items []*QTreeWidgetItem) *QMimeData, items []*QTreeWidgetItem) *QMimeData) {
	ok := C.QTreeWidget_override_virtual_mimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_mimeData
func miqt_exec_callback_QTreeWidget_mimeData(self *C.QTreeWidget, cb C.intptr_t, items C.struct_miqt_array) *C.QMimeData {
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

	return (bool)(C.QTreeWidget_virtualbase_dropMimeData(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(index), data.cPointer(), (C.int)(action)))

}
func (this *QTreeWidget) OnDropMimeData(slot func(super func(parent *QTreeWidgetItem, index int, data *QMimeData, action DropAction) bool, parent *QTreeWidgetItem, index int, data *QMimeData, action DropAction) bool) {
	ok := C.QTreeWidget_override_virtual_dropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_dropMimeData
func miqt_exec_callback_QTreeWidget_dropMimeData(self *C.QTreeWidget, cb C.intptr_t, parent *C.QTreeWidgetItem, index C.int, data *C.QMimeData, action C.int) C.bool {
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

	return (DropAction)(C.QTreeWidget_virtualbase_supportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QTreeWidget) OnSupportedDropActions(slot func(super func() DropAction) DropAction) {
	ok := C.QTreeWidget_override_virtual_supportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_supportedDropActions
func miqt_exec_callback_QTreeWidget_supportedDropActions(self *C.QTreeWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() DropAction) DropAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_SupportedDropActions)

	return (C.int)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QTreeWidget_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QTreeWidget_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_dropEvent
func miqt_exec_callback_QTreeWidget_dropEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_SetRootIndex(index *QModelIndex) {

	C.QTreeWidget_virtualbase_setRootIndex(unsafe.Pointer(this.h), index.cPointer())

}
func (this *QTreeWidget) OnSetRootIndex(slot func(super func(index *QModelIndex), index *QModelIndex)) {
	ok := C.QTreeWidget_override_virtual_setRootIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_setRootIndex
func miqt_exec_callback_QTreeWidget_setRootIndex(self *C.QTreeWidget, cb C.intptr_t, index *C.QModelIndex) {
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

	C.QTreeWidget_virtualbase_keyboardSearch(unsafe.Pointer(this.h), search_ms)

}
func (this *QTreeWidget) OnKeyboardSearch(slot func(super func(search string), search string)) {
	ok := C.QTreeWidget_override_virtual_keyboardSearch(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_keyboardSearch
func miqt_exec_callback_QTreeWidget_keyboardSearch(self *C.QTreeWidget, cb C.intptr_t, search C.struct_miqt_string) {
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

	_goptr := newQRect(C.QTreeWidget_virtualbase_visualRect(unsafe.Pointer(this.h), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidget) OnVisualRect(slot func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect) {
	ok := C.QTreeWidget_override_virtual_visualRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_visualRect
func miqt_exec_callback_QTreeWidget_visualRect(self *C.QTreeWidget, cb C.intptr_t, index *C.QModelIndex) *C.QRect {
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

	C.QTreeWidget_virtualbase_scrollTo(unsafe.Pointer(this.h), index.cPointer(), (C.int)(hint))

}
func (this *QTreeWidget) OnScrollTo(slot func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint)) {
	ok := C.QTreeWidget_override_virtual_scrollTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_scrollTo
func miqt_exec_callback_QTreeWidget_scrollTo(self *C.QTreeWidget, cb C.intptr_t, index *C.QModelIndex, hint C.int) {
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

	_goptr := newQModelIndex(C.QTreeWidget_virtualbase_indexAt(unsafe.Pointer(this.h), p.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidget) OnIndexAt(slot func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex) {
	ok := C.QTreeWidget_override_virtual_indexAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_indexAt
func miqt_exec_callback_QTreeWidget_indexAt(self *C.QTreeWidget, cb C.intptr_t, p *C.QPoint) *C.QModelIndex {
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

	C.QTreeWidget_virtualbase_doItemsLayout(unsafe.Pointer(this.h))

}
func (this *QTreeWidget) OnDoItemsLayout(slot func(super func())) {
	ok := C.QTreeWidget_override_virtual_doItemsLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_doItemsLayout
func miqt_exec_callback_QTreeWidget_doItemsLayout(self *C.QTreeWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeWidget{h: self}).callVirtualBase_DoItemsLayout)

}

func (this *QTreeWidget) callVirtualBase_Reset() {

	C.QTreeWidget_virtualbase_reset(unsafe.Pointer(this.h))

}
func (this *QTreeWidget) OnReset(slot func(super func())) {
	ok := C.QTreeWidget_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_reset
func miqt_exec_callback_QTreeWidget_reset(self *C.QTreeWidget, cb C.intptr_t) {
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

	C.QTreeWidget_virtualbase_dataChanged(unsafe.Pointer(this.h), topLeft.cPointer(), bottomRight.cPointer(), roles_ma)

}
func (this *QTreeWidget) OnDataChanged(slot func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int)) {
	ok := C.QTreeWidget_override_virtual_dataChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_dataChanged
func miqt_exec_callback_QTreeWidget_dataChanged(self *C.QTreeWidget, cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles C.struct_miqt_array) {
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

	C.QTreeWidget_virtualbase_selectAll(unsafe.Pointer(this.h))

}
func (this *QTreeWidget) OnSelectAll(slot func(super func())) {
	ok := C.QTreeWidget_override_virtual_selectAll(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_selectAll
func miqt_exec_callback_QTreeWidget_selectAll(self *C.QTreeWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeWidget{h: self}).callVirtualBase_SelectAll)

}

func (this *QTreeWidget) callVirtualBase_VerticalScrollbarValueChanged(value int) {

	C.QTreeWidget_virtualbase_verticalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QTreeWidget) OnVerticalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QTreeWidget_override_virtual_verticalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_verticalScrollbarValueChanged
func miqt_exec_callback_QTreeWidget_verticalScrollbarValueChanged(self *C.QTreeWidget, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_VerticalScrollbarValueChanged, slotval1)

}

func (this *QTreeWidget) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QTreeWidget_virtualbase_scrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QTreeWidget) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QTreeWidget_override_virtual_scrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_scrollContentsBy
func miqt_exec_callback_QTreeWidget_scrollContentsBy(self *C.QTreeWidget, cb C.intptr_t, dx C.int, dy C.int) {
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

	C.QTreeWidget_virtualbase_rowsInserted(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QTreeWidget) OnRowsInserted(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QTreeWidget_override_virtual_rowsInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_rowsInserted
func miqt_exec_callback_QTreeWidget_rowsInserted(self *C.QTreeWidget, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
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

	C.QTreeWidget_virtualbase_rowsAboutToBeRemoved(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QTreeWidget) OnRowsAboutToBeRemoved(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	ok := C.QTreeWidget_override_virtual_rowsAboutToBeRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_rowsAboutToBeRemoved
func miqt_exec_callback_QTreeWidget_rowsAboutToBeRemoved(self *C.QTreeWidget, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
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

	_goptr := newQModelIndex(C.QTreeWidget_virtualbase_moveCursor(unsafe.Pointer(this.h), (C.int)(cursorAction), (C.int)(modifiers)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidget) OnMoveCursor(slot func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex) {
	ok := C.QTreeWidget_override_virtual_moveCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_moveCursor
func miqt_exec_callback_QTreeWidget_moveCursor(self *C.QTreeWidget, cb C.intptr_t, cursorAction C.int, modifiers C.int) *C.QModelIndex {
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

	return (int)(C.QTreeWidget_virtualbase_horizontalOffset(unsafe.Pointer(this.h)))

}
func (this *QTreeWidget) OnHorizontalOffset(slot func(super func() int) int) {
	ok := C.QTreeWidget_override_virtual_horizontalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_horizontalOffset
func miqt_exec_callback_QTreeWidget_horizontalOffset(self *C.QTreeWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_HorizontalOffset)

	return (C.int)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_VerticalOffset() int {

	return (int)(C.QTreeWidget_virtualbase_verticalOffset(unsafe.Pointer(this.h)))

}
func (this *QTreeWidget) OnVerticalOffset(slot func(super func() int) int) {
	ok := C.QTreeWidget_override_virtual_verticalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_verticalOffset
func miqt_exec_callback_QTreeWidget_verticalOffset(self *C.QTreeWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_VerticalOffset)

	return (C.int)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_SetSelection(rect *QRect, command QItemSelectionModel__SelectionFlag) {

	C.QTreeWidget_virtualbase_setSelection(unsafe.Pointer(this.h), rect.cPointer(), (C.int)(command))

}
func (this *QTreeWidget) OnSetSelection(slot func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag)) {
	ok := C.QTreeWidget_override_virtual_setSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_setSelection
func miqt_exec_callback_QTreeWidget_setSelection(self *C.QTreeWidget, cb C.intptr_t, rect *C.QRect, command C.int) {
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

	_goptr := newQRegion(C.QTreeWidget_virtualbase_visualRegionForSelection(unsafe.Pointer(this.h), selection.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidget) OnVisualRegionForSelection(slot func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion) {
	ok := C.QTreeWidget_override_virtual_visualRegionForSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_visualRegionForSelection
func miqt_exec_callback_QTreeWidget_visualRegionForSelection(self *C.QTreeWidget, cb C.intptr_t, selection *C.QItemSelection) *C.QRegion {
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

	var _ma C.struct_miqt_array = C.QTreeWidget_virtualbase_selectedIndexes(unsafe.Pointer(this.h))
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
	ok := C.QTreeWidget_override_virtual_selectedIndexes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_selectedIndexes
func miqt_exec_callback_QTreeWidget_selectedIndexes(self *C.QTreeWidget, cb C.intptr_t) C.struct_miqt_array {
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

func (this *QTreeWidget) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTreeWidget_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTreeWidget_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_timerEvent
func miqt_exec_callback_QTreeWidget_timerEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QTreeWidget_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QTreeWidget_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_paintEvent
func miqt_exec_callback_QTreeWidget_paintEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_DrawRow(painter *QPainter, options *QStyleOptionViewItem, index *QModelIndex) {

	C.QTreeWidget_virtualbase_drawRow(unsafe.Pointer(this.h), painter.cPointer(), options.cPointer(), index.cPointer())

}
func (this *QTreeWidget) OnDrawRow(slot func(super func(painter *QPainter, options *QStyleOptionViewItem, index *QModelIndex), painter *QPainter, options *QStyleOptionViewItem, index *QModelIndex)) {
	ok := C.QTreeWidget_override_virtual_drawRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_drawRow
func miqt_exec_callback_QTreeWidget_drawRow(self *C.QTreeWidget, cb C.intptr_t, painter *C.QPainter, options *C.QStyleOptionViewItem, index *C.QModelIndex) {
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

	C.QTreeWidget_virtualbase_drawBranches(unsafe.Pointer(this.h), painter.cPointer(), rect.cPointer(), index.cPointer())

}
func (this *QTreeWidget) OnDrawBranches(slot func(super func(painter *QPainter, rect *QRect, index *QModelIndex), painter *QPainter, rect *QRect, index *QModelIndex)) {
	ok := C.QTreeWidget_override_virtual_drawBranches(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_drawBranches
func miqt_exec_callback_QTreeWidget_drawBranches(self *C.QTreeWidget, cb C.intptr_t, painter *C.QPainter, rect *C.QRect, index *C.QModelIndex) {
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

	C.QTreeWidget_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTreeWidget_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_mousePressEvent
func miqt_exec_callback_QTreeWidget_mousePressEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QTreeWidget_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTreeWidget_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_mouseReleaseEvent
func miqt_exec_callback_QTreeWidget_mouseReleaseEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QTreeWidget_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTreeWidget_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_mouseDoubleClickEvent
func miqt_exec_callback_QTreeWidget_mouseDoubleClickEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QTreeWidget_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QTreeWidget_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_mouseMoveEvent
func miqt_exec_callback_QTreeWidget_mouseMoveEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QTreeWidget_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QTreeWidget_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_keyPressEvent
func miqt_exec_callback_QTreeWidget_keyPressEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QTreeWidget_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QTreeWidget_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_dragMoveEvent
func miqt_exec_callback_QTreeWidget_dragMoveEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_ViewportEvent(event *QEvent) bool {

	return (bool)(C.QTreeWidget_virtualbase_viewportEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTreeWidget) OnViewportEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTreeWidget_override_virtual_viewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_viewportEvent
func miqt_exec_callback_QTreeWidget_viewportEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QEvent) C.bool {
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

	C.QTreeWidget_virtualbase_updateGeometries(unsafe.Pointer(this.h))

}
func (this *QTreeWidget) OnUpdateGeometries(slot func(super func())) {
	ok := C.QTreeWidget_override_virtual_updateGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_updateGeometries
func miqt_exec_callback_QTreeWidget_updateGeometries(self *C.QTreeWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeWidget{h: self}).callVirtualBase_UpdateGeometries)

}

func (this *QTreeWidget) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QTreeWidget_virtualbase_viewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidget) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTreeWidget_override_virtual_viewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_viewportSizeHint
func miqt_exec_callback_QTreeWidget_viewportSizeHint(self *C.QTreeWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_SizeHintForColumn(column int) int {

	return (int)(C.QTreeWidget_virtualbase_sizeHintForColumn(unsafe.Pointer(this.h), (C.int)(column)))

}
func (this *QTreeWidget) OnSizeHintForColumn(slot func(super func(column int) int, column int) int) {
	ok := C.QTreeWidget_override_virtual_sizeHintForColumn(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_sizeHintForColumn
func miqt_exec_callback_QTreeWidget_sizeHintForColumn(self *C.QTreeWidget, cb C.intptr_t, column C.int) C.int {
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

	C.QTreeWidget_virtualbase_horizontalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QTreeWidget) OnHorizontalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QTreeWidget_override_virtual_horizontalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_horizontalScrollbarAction
func miqt_exec_callback_QTreeWidget_horizontalScrollbarAction(self *C.QTreeWidget, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_HorizontalScrollbarAction, slotval1)

}

func (this *QTreeWidget) callVirtualBase_IsIndexHidden(index *QModelIndex) bool {

	return (bool)(C.QTreeWidget_virtualbase_isIndexHidden(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QTreeWidget) OnIsIndexHidden(slot func(super func(index *QModelIndex) bool, index *QModelIndex) bool) {
	ok := C.QTreeWidget_override_virtual_isIndexHidden(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_isIndexHidden
func miqt_exec_callback_QTreeWidget_isIndexHidden(self *C.QTreeWidget, cb C.intptr_t, index *C.QModelIndex) C.bool {
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

	C.QTreeWidget_virtualbase_selectionChanged(unsafe.Pointer(this.h), selected.cPointer(), deselected.cPointer())

}
func (this *QTreeWidget) OnSelectionChanged(slot func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection)) {
	ok := C.QTreeWidget_override_virtual_selectionChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_selectionChanged
func miqt_exec_callback_QTreeWidget_selectionChanged(self *C.QTreeWidget, cb C.intptr_t, selected *C.QItemSelection, deselected *C.QItemSelection) {
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

	C.QTreeWidget_virtualbase_currentChanged(unsafe.Pointer(this.h), current.cPointer(), previous.cPointer())

}
func (this *QTreeWidget) OnCurrentChanged(slot func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex)) {
	ok := C.QTreeWidget_override_virtual_currentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_currentChanged
func miqt_exec_callback_QTreeWidget_currentChanged(self *C.QTreeWidget, cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
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

	return (int)(C.QTreeWidget_virtualbase_sizeHintForRow(unsafe.Pointer(this.h), (C.int)(row)))

}
func (this *QTreeWidget) OnSizeHintForRow(slot func(super func(row int) int, row int) int) {
	ok := C.QTreeWidget_override_virtual_sizeHintForRow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_sizeHintForRow
func miqt_exec_callback_QTreeWidget_sizeHintForRow(self *C.QTreeWidget, cb C.intptr_t, row C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(row int) int, row int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(row)

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_SizeHintForRow, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QTreeWidget_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidget) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QTreeWidget_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_inputMethodQuery
func miqt_exec_callback_QTreeWidget_inputMethodQuery(self *C.QTreeWidget, cb C.intptr_t, query C.int) *C.QVariant {
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

	C.QTreeWidget_virtualbase_updateEditorData(unsafe.Pointer(this.h))

}
func (this *QTreeWidget) OnUpdateEditorData(slot func(super func())) {
	ok := C.QTreeWidget_override_virtual_updateEditorData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_updateEditorData
func miqt_exec_callback_QTreeWidget_updateEditorData(self *C.QTreeWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeWidget{h: self}).callVirtualBase_UpdateEditorData)

}

func (this *QTreeWidget) callVirtualBase_UpdateEditorGeometries() {

	C.QTreeWidget_virtualbase_updateEditorGeometries(unsafe.Pointer(this.h))

}
func (this *QTreeWidget) OnUpdateEditorGeometries(slot func(super func())) {
	ok := C.QTreeWidget_override_virtual_updateEditorGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_updateEditorGeometries
func miqt_exec_callback_QTreeWidget_updateEditorGeometries(self *C.QTreeWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTreeWidget{h: self}).callVirtualBase_UpdateEditorGeometries)

}

func (this *QTreeWidget) callVirtualBase_VerticalScrollbarAction(action int) {

	C.QTreeWidget_virtualbase_verticalScrollbarAction(unsafe.Pointer(this.h), (C.int)(action))

}
func (this *QTreeWidget) OnVerticalScrollbarAction(slot func(super func(action int), action int)) {
	ok := C.QTreeWidget_override_virtual_verticalScrollbarAction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_verticalScrollbarAction
func miqt_exec_callback_QTreeWidget_verticalScrollbarAction(self *C.QTreeWidget, cb C.intptr_t, action C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(action int), action int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(action)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_VerticalScrollbarAction, slotval1)

}

func (this *QTreeWidget) callVirtualBase_HorizontalScrollbarValueChanged(value int) {

	C.QTreeWidget_virtualbase_horizontalScrollbarValueChanged(unsafe.Pointer(this.h), (C.int)(value))

}
func (this *QTreeWidget) OnHorizontalScrollbarValueChanged(slot func(super func(value int), value int)) {
	ok := C.QTreeWidget_override_virtual_horizontalScrollbarValueChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_horizontalScrollbarValueChanged
func miqt_exec_callback_QTreeWidget_horizontalScrollbarValueChanged(self *C.QTreeWidget, cb C.intptr_t, value C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value int), value int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(value)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_HorizontalScrollbarValueChanged, slotval1)

}

func (this *QTreeWidget) callVirtualBase_CloseEditor(editor *QWidget, hint QAbstractItemDelegate__EndEditHint) {

	C.QTreeWidget_virtualbase_closeEditor(unsafe.Pointer(this.h), editor.cPointer(), (C.int)(hint))

}
func (this *QTreeWidget) OnCloseEditor(slot func(super func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint), editor *QWidget, hint QAbstractItemDelegate__EndEditHint)) {
	ok := C.QTreeWidget_override_virtual_closeEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_closeEditor
func miqt_exec_callback_QTreeWidget_closeEditor(self *C.QTreeWidget, cb C.intptr_t, editor *C.QWidget, hint C.int) {
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

	C.QTreeWidget_virtualbase_commitData(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QTreeWidget) OnCommitData(slot func(super func(editor *QWidget), editor *QWidget)) {
	ok := C.QTreeWidget_override_virtual_commitData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_commitData
func miqt_exec_callback_QTreeWidget_commitData(self *C.QTreeWidget, cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget), editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_CommitData, slotval1)

}

func (this *QTreeWidget) callVirtualBase_EditorDestroyed(editor *QObject) {

	C.QTreeWidget_virtualbase_editorDestroyed(unsafe.Pointer(this.h), editor.cPointer())

}
func (this *QTreeWidget) OnEditorDestroyed(slot func(super func(editor *QObject), editor *QObject)) {
	ok := C.QTreeWidget_override_virtual_editorDestroyed(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_editorDestroyed
func miqt_exec_callback_QTreeWidget_editorDestroyed(self *C.QTreeWidget, cb C.intptr_t, editor *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QObject), editor *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(editor)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_EditorDestroyed, slotval1)

}

func (this *QTreeWidget) callVirtualBase_Edit2(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool {

	return (bool)(C.QTreeWidget_virtualbase_edit2(unsafe.Pointer(this.h), index.cPointer(), (C.int)(trigger), event.cPointer()))

}
func (this *QTreeWidget) OnEdit2(slot func(super func(index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool, index *QModelIndex, trigger QAbstractItemView__EditTrigger, event *QEvent) bool) {
	ok := C.QTreeWidget_override_virtual_edit2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_edit2
func miqt_exec_callback_QTreeWidget_edit2(self *C.QTreeWidget, cb C.intptr_t, index *C.QModelIndex, trigger C.int, event *C.QEvent) C.bool {
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

	return (QItemSelectionModel__SelectionFlag)(C.QTreeWidget_virtualbase_selectionCommand(unsafe.Pointer(this.h), index.cPointer(), event.cPointer()))

}
func (this *QTreeWidget) OnSelectionCommand(slot func(super func(index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag, index *QModelIndex, event *QEvent) QItemSelectionModel__SelectionFlag) {
	ok := C.QTreeWidget_override_virtual_selectionCommand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_selectionCommand
func miqt_exec_callback_QTreeWidget_selectionCommand(self *C.QTreeWidget, cb C.intptr_t, index *C.QModelIndex, event *C.QEvent) C.int {
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

	C.QTreeWidget_virtualbase_startDrag(unsafe.Pointer(this.h), (C.int)(supportedActions))

}
func (this *QTreeWidget) OnStartDrag(slot func(super func(supportedActions DropAction), supportedActions DropAction)) {
	ok := C.QTreeWidget_override_virtual_startDrag(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_startDrag
func miqt_exec_callback_QTreeWidget_startDrag(self *C.QTreeWidget, cb C.intptr_t, supportedActions C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(supportedActions DropAction), supportedActions DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(supportedActions)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_StartDrag, slotval1)

}

func (this *QTreeWidget) callVirtualBase_ViewOptions() *QStyleOptionViewItem {

	_goptr := newQStyleOptionViewItem(C.QTreeWidget_virtualbase_viewOptions(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidget) OnViewOptions(slot func(super func() *QStyleOptionViewItem) *QStyleOptionViewItem) {
	ok := C.QTreeWidget_override_virtual_viewOptions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_viewOptions
func miqt_exec_callback_QTreeWidget_viewOptions(self *C.QTreeWidget, cb C.intptr_t) *C.QStyleOptionViewItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QStyleOptionViewItem) *QStyleOptionViewItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_ViewOptions)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QTreeWidget_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QTreeWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QTreeWidget_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_focusNextPrevChild
func miqt_exec_callback_QTreeWidget_focusNextPrevChild(self *C.QTreeWidget, cb C.intptr_t, next C.bool) C.bool {
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

	C.QTreeWidget_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QTreeWidget_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_dragEnterEvent
func miqt_exec_callback_QTreeWidget_dragEnterEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QTreeWidget_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QTreeWidget_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_dragLeaveEvent
func miqt_exec_callback_QTreeWidget_dragLeaveEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QTreeWidget_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QTreeWidget_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_focusInEvent
func miqt_exec_callback_QTreeWidget_focusInEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QTreeWidget_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QTreeWidget_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_focusOutEvent
func miqt_exec_callback_QTreeWidget_focusOutEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QTreeWidget_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QTreeWidget_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_resizeEvent
func miqt_exec_callback_QTreeWidget_resizeEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QTreeWidget_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QTreeWidget_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_inputMethodEvent
func miqt_exec_callback_QTreeWidget_inputMethodEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QTreeWidget_virtualbase_eventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QTreeWidget) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QTreeWidget_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_eventFilter
func miqt_exec_callback_QTreeWidget_eventFilter(self *C.QTreeWidget, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
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

	_goptr := newQSize(C.QTreeWidget_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidget) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTreeWidget_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_minimumSizeHint
func miqt_exec_callback_QTreeWidget_minimumSizeHint(self *C.QTreeWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QTreeWidget_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTreeWidget) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTreeWidget_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_sizeHint
func miqt_exec_callback_QTreeWidget_sizeHint(self *C.QTreeWidget, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QTreeWidget_virtualbase_setupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QTreeWidget) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QTreeWidget_override_virtual_setupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_setupViewport
func miqt_exec_callback_QTreeWidget_setupViewport(self *C.QTreeWidget, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QTreeWidget) callVirtualBase_WheelEvent(param1 *QWheelEvent) {

	C.QTreeWidget_virtualbase_wheelEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTreeWidget) OnWheelEvent(slot func(super func(param1 *QWheelEvent), param1 *QWheelEvent)) {
	ok := C.QTreeWidget_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_wheelEvent
func miqt_exec_callback_QTreeWidget_wheelEvent(self *C.QTreeWidget, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWheelEvent), param1 *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(param1)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QTreeWidget_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTreeWidget) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QTreeWidget_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_contextMenuEvent
func miqt_exec_callback_QTreeWidget_contextMenuEvent(self *C.QTreeWidget, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QTreeWidget_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTreeWidget) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QTreeWidget_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_changeEvent
func miqt_exec_callback_QTreeWidget_changeEvent(self *C.QTreeWidget, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_DevType() int {

	return (int)(C.QTreeWidget_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QTreeWidget) OnDevType(slot func(super func() int) int) {
	ok := C.QTreeWidget_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_devType
func miqt_exec_callback_QTreeWidget_devType(self *C.QTreeWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_SetVisible(visible bool) {

	C.QTreeWidget_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QTreeWidget) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QTreeWidget_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_setVisible
func miqt_exec_callback_QTreeWidget_setVisible(self *C.QTreeWidget, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QTreeWidget) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QTreeWidget_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTreeWidget) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QTreeWidget_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_heightForWidth
func miqt_exec_callback_QTreeWidget_heightForWidth(self *C.QTreeWidget, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QTreeWidget_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QTreeWidget) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QTreeWidget_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_hasHeightForWidth
func miqt_exec_callback_QTreeWidget_hasHeightForWidth(self *C.QTreeWidget, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QTreeWidget_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QTreeWidget) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QTreeWidget_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_paintEngine
func miqt_exec_callback_QTreeWidget_paintEngine(self *C.QTreeWidget, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QTreeWidget_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QTreeWidget_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_keyReleaseEvent
func miqt_exec_callback_QTreeWidget_keyReleaseEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_EnterEvent(event *QEvent) {

	C.QTreeWidget_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTreeWidget_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_enterEvent
func miqt_exec_callback_QTreeWidget_enterEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QTreeWidget_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTreeWidget_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_leaveEvent
func miqt_exec_callback_QTreeWidget_leaveEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QTreeWidget_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QTreeWidget_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_moveEvent
func miqt_exec_callback_QTreeWidget_moveEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QTreeWidget_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QTreeWidget_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_closeEvent
func miqt_exec_callback_QTreeWidget_closeEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QTreeWidget_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QTreeWidget_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_tabletEvent
func miqt_exec_callback_QTreeWidget_tabletEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QTreeWidget_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QTreeWidget_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_actionEvent
func miqt_exec_callback_QTreeWidget_actionEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QTreeWidget_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QTreeWidget_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_showEvent
func miqt_exec_callback_QTreeWidget_showEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QTreeWidget_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QTreeWidget_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_hideEvent
func miqt_exec_callback_QTreeWidget_hideEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QTreeWidget_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QTreeWidget) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QTreeWidget_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_nativeEvent
func miqt_exec_callback_QTreeWidget_nativeEvent(self *C.QTreeWidget, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTreeWidget) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QTreeWidget_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTreeWidget) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QTreeWidget_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_metric
func miqt_exec_callback_QTreeWidget_metric(self *C.QTreeWidget, cb C.intptr_t, param1 C.int) C.int {
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

	C.QTreeWidget_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QTreeWidget) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QTreeWidget_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_initPainter
func miqt_exec_callback_QTreeWidget_initPainter(self *C.QTreeWidget, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QTreeWidget) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QTreeWidget_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QTreeWidget) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QTreeWidget_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_redirected
func miqt_exec_callback_QTreeWidget_redirected(self *C.QTreeWidget, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QTreeWidget_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QTreeWidget) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QTreeWidget_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_sharedPainter
func miqt_exec_callback_QTreeWidget_sharedPainter(self *C.QTreeWidget, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTreeWidget{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QTreeWidget) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTreeWidget_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTreeWidget_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_childEvent
func miqt_exec_callback_QTreeWidget_childEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTreeWidget_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTreeWidget) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTreeWidget_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_customEvent
func miqt_exec_callback_QTreeWidget_customEvent(self *C.QTreeWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTreeWidget) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTreeWidget_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTreeWidget) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTreeWidget_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_connectNotify
func miqt_exec_callback_QTreeWidget_connectNotify(self *C.QTreeWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTreeWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTreeWidget) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTreeWidget_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTreeWidget) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTreeWidget_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTreeWidget_disconnectNotify
func miqt_exec_callback_QTreeWidget_disconnectNotify(self *C.QTreeWidget, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QTreeWidget_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTreeWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QTreeWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
