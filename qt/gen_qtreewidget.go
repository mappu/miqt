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
	QTreeWidgetItem__ItemType__Type     QTreeWidgetItem__ItemType = 0
	QTreeWidgetItem__ItemType__UserType QTreeWidgetItem__ItemType = 1000
)

type QTreeWidgetItem__ChildIndicatorPolicy int

const (
	QTreeWidgetItem__ChildIndicatorPolicy__ShowIndicator                  QTreeWidgetItem__ChildIndicatorPolicy = 0
	QTreeWidgetItem__ChildIndicatorPolicy__DontShowIndicator              QTreeWidgetItem__ChildIndicatorPolicy = 1
	QTreeWidgetItem__ChildIndicatorPolicy__DontShowIndicatorWhenChildless QTreeWidgetItem__ChildIndicatorPolicy = 2
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

func newQTreeWidgetItem(h *C.QTreeWidgetItem) *QTreeWidgetItem {
	if h == nil {
		return nil
	}
	return &QTreeWidgetItem{h: h}
}

func newQTreeWidgetItem_U(h unsafe.Pointer) *QTreeWidgetItem {
	return newQTreeWidgetItem((*C.QTreeWidgetItem)(h))
}

// NewQTreeWidgetItem constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem() *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new()
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem2 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem2(strings []string) *QTreeWidgetItem {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	strings_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(strings))))
	strings_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	defer C.free(unsafe.Pointer(strings_Lengths))
	for i := range strings {
		single_cstring := C.CString(strings[i])
		defer C.free(unsafe.Pointer(single_cstring))
		strings_CArray[i] = single_cstring
		strings_Lengths[i] = (C.uint64_t)(len(strings[i]))
	}
	ret := C.QTreeWidgetItem_new2(&strings_CArray[0], &strings_Lengths[0], C.size_t(len(strings)))
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem3 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem3(treeview *QTreeWidget) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new3(treeview.cPointer())
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem4 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem4(treeview *QTreeWidget, strings []string) *QTreeWidgetItem {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	strings_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(strings))))
	strings_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	defer C.free(unsafe.Pointer(strings_Lengths))
	for i := range strings {
		single_cstring := C.CString(strings[i])
		defer C.free(unsafe.Pointer(single_cstring))
		strings_CArray[i] = single_cstring
		strings_Lengths[i] = (C.uint64_t)(len(strings[i]))
	}
	ret := C.QTreeWidgetItem_new4(treeview.cPointer(), &strings_CArray[0], &strings_Lengths[0], C.size_t(len(strings)))
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem5 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem5(treeview *QTreeWidget, after *QTreeWidgetItem) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new5(treeview.cPointer(), after.cPointer())
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem6 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem6(parent *QTreeWidgetItem) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new6(parent.cPointer())
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem7 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem7(parent *QTreeWidgetItem, strings []string) *QTreeWidgetItem {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	strings_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(strings))))
	strings_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	defer C.free(unsafe.Pointer(strings_Lengths))
	for i := range strings {
		single_cstring := C.CString(strings[i])
		defer C.free(unsafe.Pointer(single_cstring))
		strings_CArray[i] = single_cstring
		strings_Lengths[i] = (C.uint64_t)(len(strings[i]))
	}
	ret := C.QTreeWidgetItem_new7(parent.cPointer(), &strings_CArray[0], &strings_Lengths[0], C.size_t(len(strings)))
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem8 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem8(parent *QTreeWidgetItem, after *QTreeWidgetItem) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new8(parent.cPointer(), after.cPointer())
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem9 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem9(other *QTreeWidgetItem) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new9(other.cPointer())
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem10 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem10(typeVal int) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new10((C.int)(typeVal))
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem11 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem11(strings []string, typeVal int) *QTreeWidgetItem {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	strings_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(strings))))
	strings_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	defer C.free(unsafe.Pointer(strings_Lengths))
	for i := range strings {
		single_cstring := C.CString(strings[i])
		defer C.free(unsafe.Pointer(single_cstring))
		strings_CArray[i] = single_cstring
		strings_Lengths[i] = (C.uint64_t)(len(strings[i]))
	}
	ret := C.QTreeWidgetItem_new11(&strings_CArray[0], &strings_Lengths[0], C.size_t(len(strings)), (C.int)(typeVal))
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem12 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem12(treeview *QTreeWidget, typeVal int) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new12(treeview.cPointer(), (C.int)(typeVal))
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem13 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem13(treeview *QTreeWidget, strings []string, typeVal int) *QTreeWidgetItem {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	strings_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(strings))))
	strings_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	defer C.free(unsafe.Pointer(strings_Lengths))
	for i := range strings {
		single_cstring := C.CString(strings[i])
		defer C.free(unsafe.Pointer(single_cstring))
		strings_CArray[i] = single_cstring
		strings_Lengths[i] = (C.uint64_t)(len(strings[i]))
	}
	ret := C.QTreeWidgetItem_new13(treeview.cPointer(), &strings_CArray[0], &strings_Lengths[0], C.size_t(len(strings)), (C.int)(typeVal))
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem14 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem14(treeview *QTreeWidget, after *QTreeWidgetItem, typeVal int) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new14(treeview.cPointer(), after.cPointer(), (C.int)(typeVal))
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem15 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem15(parent *QTreeWidgetItem, typeVal int) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new15(parent.cPointer(), (C.int)(typeVal))
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem16 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem16(parent *QTreeWidgetItem, strings []string, typeVal int) *QTreeWidgetItem {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	strings_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(strings))))
	strings_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(strings))))
	defer C.free(unsafe.Pointer(strings_CArray))
	defer C.free(unsafe.Pointer(strings_Lengths))
	for i := range strings {
		single_cstring := C.CString(strings[i])
		defer C.free(unsafe.Pointer(single_cstring))
		strings_CArray[i] = single_cstring
		strings_Lengths[i] = (C.uint64_t)(len(strings[i]))
	}
	ret := C.QTreeWidgetItem_new16(parent.cPointer(), &strings_CArray[0], &strings_Lengths[0], C.size_t(len(strings)), (C.int)(typeVal))
	return newQTreeWidgetItem(ret)
}

// NewQTreeWidgetItem17 constructs a new QTreeWidgetItem object.
func NewQTreeWidgetItem17(parent *QTreeWidgetItem, after *QTreeWidgetItem, typeVal int) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_new17(parent.cPointer(), after.cPointer(), (C.int)(typeVal))
	return newQTreeWidgetItem(ret)
}

func (this *QTreeWidgetItem) Clone() *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_Clone(this.h)
	return newQTreeWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTreeWidgetItem) TreeWidget() *QTreeWidget {
	ret := C.QTreeWidgetItem_TreeWidget(this.h)
	return newQTreeWidget_U(unsafe.Pointer(ret))
}

func (this *QTreeWidgetItem) SetSelected(selectVal bool) {
	C.QTreeWidgetItem_SetSelected(this.h, (C.bool)(selectVal))
}

func (this *QTreeWidgetItem) IsSelected() bool {
	ret := C.QTreeWidgetItem_IsSelected(this.h)
	return (bool)(ret)
}

func (this *QTreeWidgetItem) SetHidden(hide bool) {
	C.QTreeWidgetItem_SetHidden(this.h, (C.bool)(hide))
}

func (this *QTreeWidgetItem) IsHidden() bool {
	ret := C.QTreeWidgetItem_IsHidden(this.h)
	return (bool)(ret)
}

func (this *QTreeWidgetItem) SetExpanded(expand bool) {
	C.QTreeWidgetItem_SetExpanded(this.h, (C.bool)(expand))
}

func (this *QTreeWidgetItem) IsExpanded() bool {
	ret := C.QTreeWidgetItem_IsExpanded(this.h)
	return (bool)(ret)
}

func (this *QTreeWidgetItem) SetFirstColumnSpanned(span bool) {
	C.QTreeWidgetItem_SetFirstColumnSpanned(this.h, (C.bool)(span))
}

func (this *QTreeWidgetItem) IsFirstColumnSpanned() bool {
	ret := C.QTreeWidgetItem_IsFirstColumnSpanned(this.h)
	return (bool)(ret)
}

func (this *QTreeWidgetItem) SetDisabled(disabled bool) {
	C.QTreeWidgetItem_SetDisabled(this.h, (C.bool)(disabled))
}

func (this *QTreeWidgetItem) IsDisabled() bool {
	ret := C.QTreeWidgetItem_IsDisabled(this.h)
	return (bool)(ret)
}

func (this *QTreeWidgetItem) SetChildIndicatorPolicy(policy QTreeWidgetItem__ChildIndicatorPolicy) {
	C.QTreeWidgetItem_SetChildIndicatorPolicy(this.h, (C.uintptr_t)(policy))
}

func (this *QTreeWidgetItem) ChildIndicatorPolicy() QTreeWidgetItem__ChildIndicatorPolicy {
	ret := C.QTreeWidgetItem_ChildIndicatorPolicy(this.h)
	return (QTreeWidgetItem__ChildIndicatorPolicy)(ret)
}

func (this *QTreeWidgetItem) Flags() int {
	ret := C.QTreeWidgetItem_Flags(this.h)
	return (int)(ret)
}

func (this *QTreeWidgetItem) SetFlags(flags int) {
	C.QTreeWidgetItem_SetFlags(this.h, (C.int)(flags))
}

func (this *QTreeWidgetItem) Text(column int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTreeWidgetItem_Text(this.h, (C.int)(column), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTreeWidgetItem) SetText(column int, text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QTreeWidgetItem_SetText(this.h, (C.int)(column), text_Cstring, C.size_t(len(text)))
}

func (this *QTreeWidgetItem) Icon(column int) *QIcon {
	ret := C.QTreeWidgetItem_Icon(this.h, (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTreeWidgetItem) SetIcon(column int, icon *QIcon) {
	C.QTreeWidgetItem_SetIcon(this.h, (C.int)(column), icon.cPointer())
}

func (this *QTreeWidgetItem) StatusTip(column int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTreeWidgetItem_StatusTip(this.h, (C.int)(column), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTreeWidgetItem) SetStatusTip(column int, statusTip string) {
	statusTip_Cstring := C.CString(statusTip)
	defer C.free(unsafe.Pointer(statusTip_Cstring))
	C.QTreeWidgetItem_SetStatusTip(this.h, (C.int)(column), statusTip_Cstring, C.size_t(len(statusTip)))
}

func (this *QTreeWidgetItem) ToolTip(column int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTreeWidgetItem_ToolTip(this.h, (C.int)(column), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTreeWidgetItem) SetToolTip(column int, toolTip string) {
	toolTip_Cstring := C.CString(toolTip)
	defer C.free(unsafe.Pointer(toolTip_Cstring))
	C.QTreeWidgetItem_SetToolTip(this.h, (C.int)(column), toolTip_Cstring, C.size_t(len(toolTip)))
}

func (this *QTreeWidgetItem) WhatsThis(column int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTreeWidgetItem_WhatsThis(this.h, (C.int)(column), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTreeWidgetItem) SetWhatsThis(column int, whatsThis string) {
	whatsThis_Cstring := C.CString(whatsThis)
	defer C.free(unsafe.Pointer(whatsThis_Cstring))
	C.QTreeWidgetItem_SetWhatsThis(this.h, (C.int)(column), whatsThis_Cstring, C.size_t(len(whatsThis)))
}

func (this *QTreeWidgetItem) Font(column int) *QFont {
	ret := C.QTreeWidgetItem_Font(this.h, (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTreeWidgetItem) SetFont(column int, font *QFont) {
	C.QTreeWidgetItem_SetFont(this.h, (C.int)(column), font.cPointer())
}

func (this *QTreeWidgetItem) TextAlignment(column int) int {
	ret := C.QTreeWidgetItem_TextAlignment(this.h, (C.int)(column))
	return (int)(ret)
}

func (this *QTreeWidgetItem) SetTextAlignment(column int, alignment int) {
	C.QTreeWidgetItem_SetTextAlignment(this.h, (C.int)(column), (C.int)(alignment))
}

func (this *QTreeWidgetItem) BackgroundColor(column int) *QColor {
	ret := C.QTreeWidgetItem_BackgroundColor(this.h, (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTreeWidgetItem) SetBackgroundColor(column int, color *QColor) {
	C.QTreeWidgetItem_SetBackgroundColor(this.h, (C.int)(column), color.cPointer())
}

func (this *QTreeWidgetItem) Background(column int) *QBrush {
	ret := C.QTreeWidgetItem_Background(this.h, (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTreeWidgetItem) SetBackground(column int, brush *QBrush) {
	C.QTreeWidgetItem_SetBackground(this.h, (C.int)(column), brush.cPointer())
}

func (this *QTreeWidgetItem) TextColor(column int) *QColor {
	ret := C.QTreeWidgetItem_TextColor(this.h, (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTreeWidgetItem) SetTextColor(column int, color *QColor) {
	C.QTreeWidgetItem_SetTextColor(this.h, (C.int)(column), color.cPointer())
}

func (this *QTreeWidgetItem) Foreground(column int) *QBrush {
	ret := C.QTreeWidgetItem_Foreground(this.h, (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTreeWidgetItem) SetForeground(column int, brush *QBrush) {
	C.QTreeWidgetItem_SetForeground(this.h, (C.int)(column), brush.cPointer())
}

func (this *QTreeWidgetItem) CheckState(column int) CheckState {
	ret := C.QTreeWidgetItem_CheckState(this.h, (C.int)(column))
	return (CheckState)(ret)
}

func (this *QTreeWidgetItem) SetCheckState(column int, state CheckState) {
	C.QTreeWidgetItem_SetCheckState(this.h, (C.int)(column), (C.uintptr_t)(state))
}

func (this *QTreeWidgetItem) SizeHint(column int) *QSize {
	ret := C.QTreeWidgetItem_SizeHint(this.h, (C.int)(column))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTreeWidgetItem) SetSizeHint(column int, size *QSize) {
	C.QTreeWidgetItem_SetSizeHint(this.h, (C.int)(column), size.cPointer())
}

func (this *QTreeWidgetItem) Data(column int, role int) *QVariant {
	ret := C.QTreeWidgetItem_Data(this.h, (C.int)(column), (C.int)(role))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTreeWidgetItem) SetData(column int, role int, value *QVariant) {
	C.QTreeWidgetItem_SetData(this.h, (C.int)(column), (C.int)(role), value.cPointer())
}

func (this *QTreeWidgetItem) OperatorLesser(other *QTreeWidgetItem) bool {
	ret := C.QTreeWidgetItem_OperatorLesser(this.h, other.cPointer())
	return (bool)(ret)
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
	ret := C.QTreeWidgetItem_Parent(this.h)
	return newQTreeWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTreeWidgetItem) Child(index int) *QTreeWidgetItem {
	ret := C.QTreeWidgetItem_Child(this.h, (C.int)(index))
	return newQTreeWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTreeWidgetItem) ChildCount() int {
	ret := C.QTreeWidgetItem_ChildCount(this.h)
	return (int)(ret)
}

func (this *QTreeWidgetItem) ColumnCount() int {
	ret := C.QTreeWidgetItem_ColumnCount(this.h)
	return (int)(ret)
}

func (this *QTreeWidgetItem) IndexOfChild(child *QTreeWidgetItem) int {
	ret := C.QTreeWidgetItem_IndexOfChild(this.h, child.cPointer())
	return (int)(ret)
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
	ret := C.QTreeWidgetItem_TakeChild(this.h, (C.int)(index))
	return newQTreeWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTreeWidgetItem) AddChildren(children []*QTreeWidgetItem) {
	// For the C ABI, malloc a C array of raw pointers
	children_CArray := (*[0xffff]*C.QTreeWidgetItem)(C.malloc(C.size_t(8 * len(children))))
	defer C.free(unsafe.Pointer(children_CArray))
	for i := range children {
		children_CArray[i] = children[i].cPointer()
	}
	C.QTreeWidgetItem_AddChildren(this.h, &children_CArray[0], C.size_t(len(children)))
}

func (this *QTreeWidgetItem) InsertChildren(index int, children []*QTreeWidgetItem) {
	// For the C ABI, malloc a C array of raw pointers
	children_CArray := (*[0xffff]*C.QTreeWidgetItem)(C.malloc(C.size_t(8 * len(children))))
	defer C.free(unsafe.Pointer(children_CArray))
	for i := range children {
		children_CArray[i] = children[i].cPointer()
	}
	C.QTreeWidgetItem_InsertChildren(this.h, (C.int)(index), &children_CArray[0], C.size_t(len(children)))
}

func (this *QTreeWidgetItem) TakeChildren() []*QTreeWidgetItem {
	var _out **C.QTreeWidgetItem = nil
	var _out_len C.size_t = 0
	C.QTreeWidgetItem_TakeChildren(this.h, &_out, &_out_len)
	ret := make([]*QTreeWidgetItem, int(_out_len))
	_outCast := (*[0xffff]*C.QTreeWidgetItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQTreeWidgetItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTreeWidgetItem) Type() int {
	ret := C.QTreeWidgetItem_Type(this.h)
	return (int)(ret)
}

func (this *QTreeWidgetItem) SortChildren(column int, order SortOrder) {
	C.QTreeWidgetItem_SortChildren(this.h, (C.int)(column), (C.uintptr_t)(order))
}

func (this *QTreeWidgetItem) Delete() {
	C.QTreeWidgetItem_Delete(this.h)
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

func newQTreeWidget(h *C.QTreeWidget) *QTreeWidget {
	if h == nil {
		return nil
	}
	return &QTreeWidget{h: h, QTreeView: newQTreeView_U(unsafe.Pointer(h))}
}

func newQTreeWidget_U(h unsafe.Pointer) *QTreeWidget {
	return newQTreeWidget((*C.QTreeWidget)(h))
}

// NewQTreeWidget constructs a new QTreeWidget object.
func NewQTreeWidget() *QTreeWidget {
	ret := C.QTreeWidget_new()
	return newQTreeWidget(ret)
}

// NewQTreeWidget2 constructs a new QTreeWidget object.
func NewQTreeWidget2(parent *QWidget) *QTreeWidget {
	ret := C.QTreeWidget_new2(parent.cPointer())
	return newQTreeWidget(ret)
}

func (this *QTreeWidget) MetaObject() *QMetaObject {
	ret := C.QTreeWidget_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTreeWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTreeWidget_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTreeWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTreeWidget_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTreeWidget) ColumnCount() int {
	ret := C.QTreeWidget_ColumnCount(this.h)
	return (int)(ret)
}

func (this *QTreeWidget) SetColumnCount(columns int) {
	C.QTreeWidget_SetColumnCount(this.h, (C.int)(columns))
}

func (this *QTreeWidget) InvisibleRootItem() *QTreeWidgetItem {
	ret := C.QTreeWidget_InvisibleRootItem(this.h)
	return newQTreeWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTreeWidget) TopLevelItem(index int) *QTreeWidgetItem {
	ret := C.QTreeWidget_TopLevelItem(this.h, (C.int)(index))
	return newQTreeWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTreeWidget) TopLevelItemCount() int {
	ret := C.QTreeWidget_TopLevelItemCount(this.h)
	return (int)(ret)
}

func (this *QTreeWidget) InsertTopLevelItem(index int, item *QTreeWidgetItem) {
	C.QTreeWidget_InsertTopLevelItem(this.h, (C.int)(index), item.cPointer())
}

func (this *QTreeWidget) AddTopLevelItem(item *QTreeWidgetItem) {
	C.QTreeWidget_AddTopLevelItem(this.h, item.cPointer())
}

func (this *QTreeWidget) TakeTopLevelItem(index int) *QTreeWidgetItem {
	ret := C.QTreeWidget_TakeTopLevelItem(this.h, (C.int)(index))
	return newQTreeWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTreeWidget) IndexOfTopLevelItem(item *QTreeWidgetItem) int {
	ret := C.QTreeWidget_IndexOfTopLevelItem(this.h, item.cPointer())
	return (int)(ret)
}

func (this *QTreeWidget) InsertTopLevelItems(index int, items []*QTreeWidgetItem) {
	// For the C ABI, malloc a C array of raw pointers
	items_CArray := (*[0xffff]*C.QTreeWidgetItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	C.QTreeWidget_InsertTopLevelItems(this.h, (C.int)(index), &items_CArray[0], C.size_t(len(items)))
}

func (this *QTreeWidget) AddTopLevelItems(items []*QTreeWidgetItem) {
	// For the C ABI, malloc a C array of raw pointers
	items_CArray := (*[0xffff]*C.QTreeWidgetItem)(C.malloc(C.size_t(8 * len(items))))
	defer C.free(unsafe.Pointer(items_CArray))
	for i := range items {
		items_CArray[i] = items[i].cPointer()
	}
	C.QTreeWidget_AddTopLevelItems(this.h, &items_CArray[0], C.size_t(len(items)))
}

func (this *QTreeWidget) HeaderItem() *QTreeWidgetItem {
	ret := C.QTreeWidget_HeaderItem(this.h)
	return newQTreeWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTreeWidget) SetHeaderItem(item *QTreeWidgetItem) {
	C.QTreeWidget_SetHeaderItem(this.h, item.cPointer())
}

func (this *QTreeWidget) SetHeaderLabels(labels []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	labels_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(labels))))
	labels_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(labels))))
	defer C.free(unsafe.Pointer(labels_CArray))
	defer C.free(unsafe.Pointer(labels_Lengths))
	for i := range labels {
		single_cstring := C.CString(labels[i])
		defer C.free(unsafe.Pointer(single_cstring))
		labels_CArray[i] = single_cstring
		labels_Lengths[i] = (C.uint64_t)(len(labels[i]))
	}
	C.QTreeWidget_SetHeaderLabels(this.h, &labels_CArray[0], &labels_Lengths[0], C.size_t(len(labels)))
}

func (this *QTreeWidget) SetHeaderLabel(label string) {
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	C.QTreeWidget_SetHeaderLabel(this.h, label_Cstring, C.size_t(len(label)))
}

func (this *QTreeWidget) CurrentItem() *QTreeWidgetItem {
	ret := C.QTreeWidget_CurrentItem(this.h)
	return newQTreeWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTreeWidget) CurrentColumn() int {
	ret := C.QTreeWidget_CurrentColumn(this.h)
	return (int)(ret)
}

func (this *QTreeWidget) SetCurrentItem(item *QTreeWidgetItem) {
	C.QTreeWidget_SetCurrentItem(this.h, item.cPointer())
}

func (this *QTreeWidget) SetCurrentItem2(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_SetCurrentItem2(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) SetCurrentItem3(item *QTreeWidgetItem, column int, command int) {
	C.QTreeWidget_SetCurrentItem3(this.h, item.cPointer(), (C.int)(column), (C.int)(command))
}

func (this *QTreeWidget) ItemAt(p *QPoint) *QTreeWidgetItem {
	ret := C.QTreeWidget_ItemAt(this.h, p.cPointer())
	return newQTreeWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTreeWidget) ItemAt2(x int, y int) *QTreeWidgetItem {
	ret := C.QTreeWidget_ItemAt2(this.h, (C.int)(x), (C.int)(y))
	return newQTreeWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTreeWidget) VisualItemRect(item *QTreeWidgetItem) *QRect {
	ret := C.QTreeWidget_VisualItemRect(this.h, item.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTreeWidget) SortColumn() int {
	ret := C.QTreeWidget_SortColumn(this.h)
	return (int)(ret)
}

func (this *QTreeWidget) SortItems(column int, order SortOrder) {
	C.QTreeWidget_SortItems(this.h, (C.int)(column), (C.uintptr_t)(order))
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
	ret := C.QTreeWidget_IsPersistentEditorOpen(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QTreeWidget) ItemWidget(item *QTreeWidgetItem, column int) *QWidget {
	ret := C.QTreeWidget_ItemWidget(this.h, item.cPointer(), (C.int)(column))
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QTreeWidget) SetItemWidget(item *QTreeWidgetItem, column int, widget *QWidget) {
	C.QTreeWidget_SetItemWidget(this.h, item.cPointer(), (C.int)(column), widget.cPointer())
}

func (this *QTreeWidget) RemoveItemWidget(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_RemoveItemWidget(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) IsItemSelected(item *QTreeWidgetItem) bool {
	ret := C.QTreeWidget_IsItemSelected(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QTreeWidget) SetItemSelected(item *QTreeWidgetItem, selectVal bool) {
	C.QTreeWidget_SetItemSelected(this.h, item.cPointer(), (C.bool)(selectVal))
}

func (this *QTreeWidget) SelectedItems() []*QTreeWidgetItem {
	var _out **C.QTreeWidgetItem = nil
	var _out_len C.size_t = 0
	C.QTreeWidget_SelectedItems(this.h, &_out, &_out_len)
	ret := make([]*QTreeWidgetItem, int(_out_len))
	_outCast := (*[0xffff]*C.QTreeWidgetItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQTreeWidgetItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTreeWidget) FindItems(text string, flags int) []*QTreeWidgetItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out **C.QTreeWidgetItem = nil
	var _out_len C.size_t = 0
	C.QTreeWidget_FindItems(this.h, text_Cstring, C.size_t(len(text)), (C.int)(flags), &_out, &_out_len)
	ret := make([]*QTreeWidgetItem, int(_out_len))
	_outCast := (*[0xffff]*C.QTreeWidgetItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQTreeWidgetItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTreeWidget) IsItemHidden(item *QTreeWidgetItem) bool {
	ret := C.QTreeWidget_IsItemHidden(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QTreeWidget) SetItemHidden(item *QTreeWidgetItem, hide bool) {
	C.QTreeWidget_SetItemHidden(this.h, item.cPointer(), (C.bool)(hide))
}

func (this *QTreeWidget) IsItemExpanded(item *QTreeWidgetItem) bool {
	ret := C.QTreeWidget_IsItemExpanded(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QTreeWidget) SetItemExpanded(item *QTreeWidgetItem, expand bool) {
	C.QTreeWidget_SetItemExpanded(this.h, item.cPointer(), (C.bool)(expand))
}

func (this *QTreeWidget) IsFirstItemColumnSpanned(item *QTreeWidgetItem) bool {
	ret := C.QTreeWidget_IsFirstItemColumnSpanned(this.h, item.cPointer())
	return (bool)(ret)
}

func (this *QTreeWidget) SetFirstItemColumnSpanned(item *QTreeWidgetItem, span bool) {
	C.QTreeWidget_SetFirstItemColumnSpanned(this.h, item.cPointer(), (C.bool)(span))
}

func (this *QTreeWidget) ItemAbove(item *QTreeWidgetItem) *QTreeWidgetItem {
	ret := C.QTreeWidget_ItemAbove(this.h, item.cPointer())
	return newQTreeWidgetItem_U(unsafe.Pointer(ret))
}

func (this *QTreeWidget) ItemBelow(item *QTreeWidgetItem) *QTreeWidgetItem {
	ret := C.QTreeWidget_ItemBelow(this.h, item.cPointer())
	return newQTreeWidgetItem_U(unsafe.Pointer(ret))
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

func (this *QTreeWidget) OnItemPressed(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTreeWidget_connect_ItemPressed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTreeWidget) ItemClicked(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ItemClicked(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) OnItemClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTreeWidget_connect_ItemClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTreeWidget) ItemDoubleClicked(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ItemDoubleClicked(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) OnItemDoubleClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTreeWidget_connect_ItemDoubleClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTreeWidget) ItemActivated(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ItemActivated(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) OnItemActivated(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTreeWidget_connect_ItemActivated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTreeWidget) ItemEntered(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ItemEntered(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) OnItemEntered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTreeWidget_connect_ItemEntered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTreeWidget) ItemChanged(item *QTreeWidgetItem, column int) {
	C.QTreeWidget_ItemChanged(this.h, item.cPointer(), (C.int)(column))
}

func (this *QTreeWidget) OnItemChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTreeWidget_connect_ItemChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTreeWidget) ItemExpanded(item *QTreeWidgetItem) {
	C.QTreeWidget_ItemExpanded(this.h, item.cPointer())
}

func (this *QTreeWidget) OnItemExpanded(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTreeWidget_connect_ItemExpanded(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTreeWidget) ItemCollapsed(item *QTreeWidgetItem) {
	C.QTreeWidget_ItemCollapsed(this.h, item.cPointer())
}

func (this *QTreeWidget) OnItemCollapsed(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTreeWidget_connect_ItemCollapsed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTreeWidget) CurrentItemChanged(current *QTreeWidgetItem, previous *QTreeWidgetItem) {
	C.QTreeWidget_CurrentItemChanged(this.h, current.cPointer(), previous.cPointer())
}

func (this *QTreeWidget) OnCurrentItemChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTreeWidget_connect_CurrentItemChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTreeWidget) ItemSelectionChanged() {
	C.QTreeWidget_ItemSelectionChanged(this.h)
}

func (this *QTreeWidget) OnItemSelectionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTreeWidget_connect_ItemSelectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QTreeWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTreeWidget_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTreeWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTreeWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTreeWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTreeWidget_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTreeWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTreeWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
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
	ret := C.QTreeWidget_IsPersistentEditorOpen2(this.h, item.cPointer(), (C.int)(column))
	return (bool)(ret)
}

func (this *QTreeWidget) FindItems3(text string, flags int, column int) []*QTreeWidgetItem {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out **C.QTreeWidgetItem = nil
	var _out_len C.size_t = 0
	C.QTreeWidget_FindItems3(this.h, text_Cstring, C.size_t(len(text)), (C.int)(flags), (C.int)(column), &_out, &_out_len)
	ret := make([]*QTreeWidgetItem, int(_out_len))
	_outCast := (*[0xffff]*C.QTreeWidgetItem)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQTreeWidgetItem(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTreeWidget) ScrollToItem2(item *QTreeWidgetItem, hint QAbstractItemView__ScrollHint) {
	C.QTreeWidget_ScrollToItem2(this.h, item.cPointer(), (C.uintptr_t)(hint))
}

func (this *QTreeWidget) Delete() {
	C.QTreeWidget_Delete(this.h)
}
