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
	QListWidgetItem__Type     QListWidgetItem__ItemType = 0
	QListWidgetItem__UserType QListWidgetItem__ItemType = 1000
)

type QListWidgetItem struct {
	h          *C.QListWidgetItem
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QListWidgetItem{h: (*C.QListWidgetItem)(h)}
}

// NewQListWidgetItem constructs a new QListWidgetItem object.
func NewQListWidgetItem() *QListWidgetItem {
	var outptr_QListWidgetItem *C.QListWidgetItem = nil

	C.QListWidgetItem_new(&outptr_QListWidgetItem)
	ret := newQListWidgetItem(outptr_QListWidgetItem)
	ret.isSubclass = true
	return ret
}

// NewQListWidgetItem2 constructs a new QListWidgetItem object.
func NewQListWidgetItem2(text string) *QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QListWidgetItem *C.QListWidgetItem = nil

	C.QListWidgetItem_new2(text_ms, &outptr_QListWidgetItem)
	ret := newQListWidgetItem(outptr_QListWidgetItem)
	ret.isSubclass = true
	return ret
}

// NewQListWidgetItem3 constructs a new QListWidgetItem object.
func NewQListWidgetItem3(icon *QIcon, text string) *QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QListWidgetItem *C.QListWidgetItem = nil

	C.QListWidgetItem_new3(icon.cPointer(), text_ms, &outptr_QListWidgetItem)
	ret := newQListWidgetItem(outptr_QListWidgetItem)
	ret.isSubclass = true
	return ret
}

// NewQListWidgetItem4 constructs a new QListWidgetItem object.
func NewQListWidgetItem4(other *QListWidgetItem) *QListWidgetItem {
	var outptr_QListWidgetItem *C.QListWidgetItem = nil

	C.QListWidgetItem_new4(other.cPointer(), &outptr_QListWidgetItem)
	ret := newQListWidgetItem(outptr_QListWidgetItem)
	ret.isSubclass = true
	return ret
}

// NewQListWidgetItem5 constructs a new QListWidgetItem object.
func NewQListWidgetItem5(listview *QListWidget) *QListWidgetItem {
	var outptr_QListWidgetItem *C.QListWidgetItem = nil

	C.QListWidgetItem_new5(listview.cPointer(), &outptr_QListWidgetItem)
	ret := newQListWidgetItem(outptr_QListWidgetItem)
	ret.isSubclass = true
	return ret
}

// NewQListWidgetItem6 constructs a new QListWidgetItem object.
func NewQListWidgetItem6(listview *QListWidget, typeVal int) *QListWidgetItem {
	var outptr_QListWidgetItem *C.QListWidgetItem = nil

	C.QListWidgetItem_new6(listview.cPointer(), (C.int)(typeVal), &outptr_QListWidgetItem)
	ret := newQListWidgetItem(outptr_QListWidgetItem)
	ret.isSubclass = true
	return ret
}

// NewQListWidgetItem7 constructs a new QListWidgetItem object.
func NewQListWidgetItem7(text string, listview *QListWidget) *QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QListWidgetItem *C.QListWidgetItem = nil

	C.QListWidgetItem_new7(text_ms, listview.cPointer(), &outptr_QListWidgetItem)
	ret := newQListWidgetItem(outptr_QListWidgetItem)
	ret.isSubclass = true
	return ret
}

// NewQListWidgetItem8 constructs a new QListWidgetItem object.
func NewQListWidgetItem8(text string, listview *QListWidget, typeVal int) *QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QListWidgetItem *C.QListWidgetItem = nil

	C.QListWidgetItem_new8(text_ms, listview.cPointer(), (C.int)(typeVal), &outptr_QListWidgetItem)
	ret := newQListWidgetItem(outptr_QListWidgetItem)
	ret.isSubclass = true
	return ret
}

// NewQListWidgetItem9 constructs a new QListWidgetItem object.
func NewQListWidgetItem9(icon *QIcon, text string, listview *QListWidget) *QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QListWidgetItem *C.QListWidgetItem = nil

	C.QListWidgetItem_new9(icon.cPointer(), text_ms, listview.cPointer(), &outptr_QListWidgetItem)
	ret := newQListWidgetItem(outptr_QListWidgetItem)
	ret.isSubclass = true
	return ret
}

// NewQListWidgetItem10 constructs a new QListWidgetItem object.
func NewQListWidgetItem10(icon *QIcon, text string, listview *QListWidget, typeVal int) *QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QListWidgetItem *C.QListWidgetItem = nil

	C.QListWidgetItem_new10(icon.cPointer(), text_ms, listview.cPointer(), (C.int)(typeVal), &outptr_QListWidgetItem)
	ret := newQListWidgetItem(outptr_QListWidgetItem)
	ret.isSubclass = true
	return ret
}

func (this *QListWidgetItem) Clone() *QListWidgetItem {
	return UnsafeNewQListWidgetItem(unsafe.Pointer(C.QListWidgetItem_Clone(this.h)))
}

func (this *QListWidgetItem) ListWidget() *QListWidget {
	return UnsafeNewQListWidget(unsafe.Pointer(C.QListWidgetItem_ListWidget(this.h)), nil, nil, nil, nil, nil, nil, nil)
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
	_ret := C.QListWidgetItem_Icon(this.h)
	_goptr := newQIcon(_ret)
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
	_ret := C.QListWidgetItem_Font(this.h)
	_goptr := newQFont(_ret)
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
	return (CheckState)(C.QListWidgetItem_CheckState(this.h))
}

func (this *QListWidgetItem) SetCheckState(state CheckState) {
	C.QListWidgetItem_SetCheckState(this.h, (C.int)(state))
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

	return UnsafeNewQListWidgetItem(unsafe.Pointer(C.QListWidgetItem_virtualbase_Clone(unsafe.Pointer(this.h))))
}
func (this *QListWidgetItem) OnClone(slot func(super func() *QListWidgetItem) *QListWidgetItem) {
	C.QListWidgetItem_override_virtual_Clone(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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

func (this *QListWidgetItem) callVirtualBase_SetBackgroundColor(color *QColor) {

	C.QListWidgetItem_virtualbase_SetBackgroundColor(unsafe.Pointer(this.h), color.cPointer())

}
func (this *QListWidgetItem) OnSetBackgroundColor(slot func(super func(color *QColor), color *QColor)) {
	C.QListWidgetItem_override_virtual_SetBackgroundColor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidgetItem_SetBackgroundColor
func miqt_exec_callback_QListWidgetItem_SetBackgroundColor(self *C.QListWidgetItem, cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(color *QColor), color *QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQColor(unsafe.Pointer(color))

	gofunc((&QListWidgetItem{h: self}).callVirtualBase_SetBackgroundColor, slotval1)

}

func (this *QListWidgetItem) callVirtualBase_Data(role int) *QVariant {

	_ret := C.QListWidgetItem_virtualbase_Data(unsafe.Pointer(this.h), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidgetItem) OnData(slot func(super func(role int) *QVariant, role int) *QVariant) {
	C.QListWidgetItem_override_virtual_Data(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QListWidgetItem_override_virtual_SetData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidgetItem_SetData
func miqt_exec_callback_QListWidgetItem_SetData(self *C.QListWidgetItem, cb C.intptr_t, role C.int, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(role int, value *QVariant), role int, value *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(role)

	slotval2 := UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc((&QListWidgetItem{h: self}).callVirtualBase_SetData, slotval1, slotval2)

}

func (this *QListWidgetItem) callVirtualBase_OperatorLesser(other *QListWidgetItem) bool {

	return (bool)(C.QListWidgetItem_virtualbase_OperatorLesser(unsafe.Pointer(this.h), other.cPointer()))

}
func (this *QListWidgetItem) OnOperatorLesser(slot func(super func(other *QListWidgetItem) bool, other *QListWidgetItem) bool) {
	C.QListWidgetItem_override_virtual_OperatorLesser(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidgetItem_OperatorLesser
func miqt_exec_callback_QListWidgetItem_OperatorLesser(self *C.QListWidgetItem, cb C.intptr_t, other *C.QListWidgetItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QListWidgetItem) bool, other *QListWidgetItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQListWidgetItem(unsafe.Pointer(other))

	virtualReturn := gofunc((&QListWidgetItem{h: self}).callVirtualBase_OperatorLesser, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QListWidgetItem) callVirtualBase_Read(in *QDataStream) {

	C.QListWidgetItem_virtualbase_Read(unsafe.Pointer(this.h), in.cPointer())

}
func (this *QListWidgetItem) OnRead(slot func(super func(in *QDataStream), in *QDataStream)) {
	C.QListWidgetItem_override_virtual_Read(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidgetItem_Read
func miqt_exec_callback_QListWidgetItem_Read(self *C.QListWidgetItem, cb C.intptr_t, in *C.QDataStream) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(in *QDataStream), in *QDataStream))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDataStream(unsafe.Pointer(in))

	gofunc((&QListWidgetItem{h: self}).callVirtualBase_Read, slotval1)

}

func (this *QListWidgetItem) callVirtualBase_Write(out *QDataStream) {

	C.QListWidgetItem_virtualbase_Write(unsafe.Pointer(this.h), out.cPointer())

}
func (this *QListWidgetItem) OnWrite(slot func(super func(out *QDataStream), out *QDataStream)) {
	C.QListWidgetItem_override_virtual_Write(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidgetItem_Write
func miqt_exec_callback_QListWidgetItem_Write(self *C.QListWidgetItem, cb C.intptr_t, out *C.QDataStream) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(out *QDataStream), out *QDataStream))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDataStream(unsafe.Pointer(out))

	gofunc((&QListWidgetItem{h: self}).callVirtualBase_Write, slotval1)

}

// Delete this object from C++ memory.
func (this *QListWidgetItem) Delete() {
	C.QListWidgetItem_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QListWidget
	isSubclass bool
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
func newQListWidget(h *C.QListWidget, h_QListView *C.QListView, h_QAbstractItemView *C.QAbstractItemView, h_QAbstractScrollArea *C.QAbstractScrollArea, h_QFrame *C.QFrame, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QListWidget {
	if h == nil {
		return nil
	}
	return &QListWidget{h: h,
		QListView: newQListView(h_QListView, h_QAbstractItemView, h_QAbstractScrollArea, h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQListWidget constructs the type using only unsafe pointers.
func UnsafeNewQListWidget(h unsafe.Pointer, h_QListView unsafe.Pointer, h_QAbstractItemView unsafe.Pointer, h_QAbstractScrollArea unsafe.Pointer, h_QFrame unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QListWidget {
	if h == nil {
		return nil
	}

	return &QListWidget{h: (*C.QListWidget)(h),
		QListView: UnsafeNewQListView(h_QListView, h_QAbstractItemView, h_QAbstractScrollArea, h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQListWidget constructs a new QListWidget object.
func NewQListWidget(parent *QWidget) *QListWidget {
	var outptr_QListWidget *C.QListWidget = nil
	var outptr_QListView *C.QListView = nil
	var outptr_QAbstractItemView *C.QAbstractItemView = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QListWidget_new(parent.cPointer(), &outptr_QListWidget, &outptr_QListView, &outptr_QAbstractItemView, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQListWidget(outptr_QListWidget, outptr_QListView, outptr_QAbstractItemView, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQListWidget2 constructs a new QListWidget object.
func NewQListWidget2() *QListWidget {
	var outptr_QListWidget *C.QListWidget = nil
	var outptr_QListView *C.QListView = nil
	var outptr_QAbstractItemView *C.QAbstractItemView = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QListWidget_new2(&outptr_QListWidget, &outptr_QListView, &outptr_QAbstractItemView, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQListWidget(outptr_QListWidget, outptr_QListView, outptr_QAbstractItemView, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QListWidget) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QListWidget_MetaObject(this.h)))
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

func QListWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QListWidget_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidget) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QListWidget_SetSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QListWidget) Item(row int) *QListWidgetItem {
	return UnsafeNewQListWidgetItem(unsafe.Pointer(C.QListWidget_Item(this.h, (C.int)(row))))
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
	return UnsafeNewQListWidgetItem(unsafe.Pointer(C.QListWidget_TakeItem(this.h, (C.int)(row))))
}

func (this *QListWidget) Count() int {
	return (int)(C.QListWidget_Count(this.h))
}

func (this *QListWidget) CurrentItem() *QListWidgetItem {
	return UnsafeNewQListWidgetItem(unsafe.Pointer(C.QListWidget_CurrentItem(this.h)))
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
	return UnsafeNewQListWidgetItem(unsafe.Pointer(C.QListWidget_ItemAt(this.h, p.cPointer())))
}

func (this *QListWidget) ItemAt2(x int, y int) *QListWidgetItem {
	return UnsafeNewQListWidgetItem(unsafe.Pointer(C.QListWidget_ItemAt2(this.h, (C.int)(x), (C.int)(y))))
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
	return UnsafeNewQWidget(unsafe.Pointer(C.QListWidget_ItemWidget(this.h, item.cPointer())), nil, nil)
}

func (this *QListWidget) SetItemWidget(item *QListWidgetItem, widget *QWidget) {
	C.QListWidget_SetItemWidget(this.h, item.cPointer(), widget.cPointer())
}

func (this *QListWidget) RemoveItemWidget(item *QListWidgetItem) {
	C.QListWidget_RemoveItemWidget(this.h, item.cPointer())
}

func (this *QListWidget) IsItemSelected(item *QListWidgetItem) bool {
	return (bool)(C.QListWidget_IsItemSelected(this.h, item.cPointer()))
}

func (this *QListWidget) SetItemSelected(item *QListWidgetItem, selectVal bool) {
	C.QListWidget_SetItemSelected(this.h, item.cPointer(), (C.bool)(selectVal))
}

func (this *QListWidget) SelectedItems() []*QListWidgetItem {
	var _ma C.struct_miqt_array = C.QListWidget_SelectedItems(this.h)
	_ret := make([]*QListWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QListWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQListWidgetItem(unsafe.Pointer(_outCast[i]))
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
		_ret[i] = UnsafeNewQListWidgetItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QListWidget) IsItemHidden(item *QListWidgetItem) bool {
	return (bool)(C.QListWidget_IsItemHidden(this.h, item.cPointer()))
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
	C.QListWidget_connect_ItemPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_ItemPressed
func miqt_exec_callback_QListWidget_ItemPressed(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQListWidgetItem(unsafe.Pointer(item))

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
	slotval1 := UnsafeNewQListWidgetItem(unsafe.Pointer(item))

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
	slotval1 := UnsafeNewQListWidgetItem(unsafe.Pointer(item))

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
	slotval1 := UnsafeNewQListWidgetItem(unsafe.Pointer(item))

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
	slotval1 := UnsafeNewQListWidgetItem(unsafe.Pointer(item))

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
	slotval1 := UnsafeNewQListWidgetItem(unsafe.Pointer(item))

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
	slotval1 := UnsafeNewQListWidgetItem(unsafe.Pointer(current))
	slotval2 := UnsafeNewQListWidgetItem(unsafe.Pointer(previous))

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

func QListWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QListWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QListWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QListWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
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
	C.QListWidget_override_virtual_SetSelectionModel(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_SetSelectionModel
func miqt_exec_callback_QListWidget_SetSelectionModel(self *C.QListWidget, cb C.intptr_t, selectionModel *C.QItemSelectionModel) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selectionModel *QItemSelectionModel), selectionModel *QItemSelectionModel))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQItemSelectionModel(unsafe.Pointer(selectionModel), nil)

	gofunc((&QListWidget{h: self}).callVirtualBase_SetSelectionModel, slotval1)

}

func (this *QListWidget) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QListWidget_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QListWidget) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	C.QListWidget_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_DropEvent
func miqt_exec_callback_QListWidget_DropEvent(self *C.QListWidget, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(event), nil)

	gofunc((&QListWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QListWidget_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QListWidget) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	C.QListWidget_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_Event
func miqt_exec_callback_QListWidget_Event(self *C.QListWidget, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(e))

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
	C.QListWidget_override_virtual_MimeTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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

	return UnsafeNewQMimeData(unsafe.Pointer(C.QListWidget_virtualbase_MimeData(unsafe.Pointer(this.h), items_ma)), nil)
}
func (this *QListWidget) OnMimeData(slot func(super func(items []*QListWidgetItem) *QMimeData, items []*QListWidgetItem) *QMimeData) {
	C.QListWidget_override_virtual_MimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
		items_ret[i] = UnsafeNewQListWidgetItem(unsafe.Pointer(items_outCast[i]))
	}
	slotval1 := items_ret

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_MimeData, slotval1)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_DropMimeData(index int, data *QMimeData, action DropAction) bool {

	return (bool)(C.QListWidget_virtualbase_DropMimeData(unsafe.Pointer(this.h), (C.int)(index), data.cPointer(), (C.int)(action)))

}
func (this *QListWidget) OnDropMimeData(slot func(super func(index int, data *QMimeData, action DropAction) bool, index int, data *QMimeData, action DropAction) bool) {
	C.QListWidget_override_virtual_DropMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_DropMimeData
func miqt_exec_callback_QListWidget_DropMimeData(self *C.QListWidget, cb C.intptr_t, index C.int, data *C.QMimeData, action C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index int, data *QMimeData, action DropAction) bool, index int, data *QMimeData, action DropAction) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	slotval2 := UnsafeNewQMimeData(unsafe.Pointer(data), nil)
	slotval3 := (DropAction)(action)

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_DropMimeData, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_SupportedDropActions() DropAction {

	return (DropAction)(C.QListWidget_virtualbase_SupportedDropActions(unsafe.Pointer(this.h)))

}
func (this *QListWidget) OnSupportedDropActions(slot func(super func() DropAction) DropAction) {
	C.QListWidget_override_virtual_SupportedDropActions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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

	_ret := C.QListWidget_virtualbase_VisualRect(unsafe.Pointer(this.h), index.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnVisualRect(slot func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect) {
	C.QListWidget_override_virtual_VisualRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_VisualRect
func miqt_exec_callback_QListWidget_VisualRect(self *C.QListWidget, cb C.intptr_t, index *C.QModelIndex) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_VisualRect, slotval1)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {

	C.QListWidget_virtualbase_ScrollTo(unsafe.Pointer(this.h), index.cPointer(), (C.int)(hint))

}
func (this *QListWidget) OnScrollTo(slot func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint)) {
	C.QListWidget_override_virtual_ScrollTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_ScrollTo
func miqt_exec_callback_QListWidget_ScrollTo(self *C.QListWidget, cb C.intptr_t, index *C.QModelIndex, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))
	slotval2 := (QAbstractItemView__ScrollHint)(hint)

	gofunc((&QListWidget{h: self}).callVirtualBase_ScrollTo, slotval1, slotval2)

}

func (this *QListWidget) callVirtualBase_IndexAt(p *QPoint) *QModelIndex {

	_ret := C.QListWidget_virtualbase_IndexAt(unsafe.Pointer(this.h), p.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnIndexAt(slot func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex) {
	C.QListWidget_override_virtual_IndexAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_IndexAt
func miqt_exec_callback_QListWidget_IndexAt(self *C.QListWidget, cb C.intptr_t, p *C.QPoint) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPoint(unsafe.Pointer(p))

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_IndexAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_DoItemsLayout() {

	C.QListWidget_virtualbase_DoItemsLayout(unsafe.Pointer(this.h))

}
func (this *QListWidget) OnDoItemsLayout(slot func(super func())) {
	C.QListWidget_override_virtual_DoItemsLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QListWidget_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QListWidget_override_virtual_SetRootIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_SetRootIndex
func miqt_exec_callback_QListWidget_SetRootIndex(self *C.QListWidget, cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex), index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	gofunc((&QListWidget{h: self}).callVirtualBase_SetRootIndex, slotval1)

}

func (this *QListWidget) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QListWidget_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QListWidget) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	C.QListWidget_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QListWidget_override_virtual_DataChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_DataChanged
func miqt_exec_callback_QListWidget_DataChanged(self *C.QListWidget, cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(topLeft))
	slotval2 := UnsafeNewQModelIndex(unsafe.Pointer(bottomRight))
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
	C.QListWidget_override_virtual_RowsInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_RowsInserted
func miqt_exec_callback_QListWidget_RowsInserted(self *C.QListWidget, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(parent))
	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QListWidget{h: self}).callVirtualBase_RowsInserted, slotval1, slotval2, slotval3)

}

func (this *QListWidget) callVirtualBase_RowsAboutToBeRemoved(parent *QModelIndex, start int, end int) {

	C.QListWidget_virtualbase_RowsAboutToBeRemoved(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QListWidget) OnRowsAboutToBeRemoved(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	C.QListWidget_override_virtual_RowsAboutToBeRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_RowsAboutToBeRemoved
func miqt_exec_callback_QListWidget_RowsAboutToBeRemoved(self *C.QListWidget, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(parent))
	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QListWidget{h: self}).callVirtualBase_RowsAboutToBeRemoved, slotval1, slotval2, slotval3)

}

func (this *QListWidget) callVirtualBase_MouseMoveEvent(e *QMouseEvent) {

	C.QListWidget_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnMouseMoveEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	C.QListWidget_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_MouseMoveEvent
func miqt_exec_callback_QListWidget_MouseMoveEvent(self *C.QListWidget, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QListWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QListWidget_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	C.QListWidget_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_MouseReleaseEvent
func miqt_exec_callback_QListWidget_MouseReleaseEvent(self *C.QListWidget, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QListWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QListWidget_virtualbase_WheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	C.QListWidget_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_WheelEvent
func miqt_exec_callback_QListWidget_WheelEvent(self *C.QListWidget, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QListWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_TimerEvent(e *QTimerEvent) {

	C.QListWidget_virtualbase_TimerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnTimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	C.QListWidget_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_TimerEvent
func miqt_exec_callback_QListWidget_TimerEvent(self *C.QListWidget, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(e), nil)

	gofunc((&QListWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_ResizeEvent(e *QResizeEvent) {

	C.QListWidget_virtualbase_ResizeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnResizeEvent(slot func(super func(e *QResizeEvent), e *QResizeEvent)) {
	C.QListWidget_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_ResizeEvent
func miqt_exec_callback_QListWidget_ResizeEvent(self *C.QListWidget, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QResizeEvent), e *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(e), nil)

	gofunc((&QListWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_DragMoveEvent(e *QDragMoveEvent) {

	C.QListWidget_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnDragMoveEvent(slot func(super func(e *QDragMoveEvent), e *QDragMoveEvent)) {
	C.QListWidget_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_DragMoveEvent
func miqt_exec_callback_QListWidget_DragMoveEvent(self *C.QListWidget, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragMoveEvent), e *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QListWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_DragLeaveEvent(e *QDragLeaveEvent) {

	C.QListWidget_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnDragLeaveEvent(slot func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent)) {
	C.QListWidget_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_DragLeaveEvent
func miqt_exec_callback_QListWidget_DragLeaveEvent(self *C.QListWidget, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(e), nil)

	gofunc((&QListWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_StartDrag(supportedActions DropAction) {

	C.QListWidget_virtualbase_StartDrag(unsafe.Pointer(this.h), (C.int)(supportedActions))

}
func (this *QListWidget) OnStartDrag(slot func(super func(supportedActions DropAction), supportedActions DropAction)) {
	C.QListWidget_override_virtual_StartDrag(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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

func (this *QListWidget) callVirtualBase_ViewOptions() *QStyleOptionViewItem {

	_ret := C.QListWidget_virtualbase_ViewOptions(unsafe.Pointer(this.h))
	_goptr := newQStyleOptionViewItem(_ret, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnViewOptions(slot func(super func() *QStyleOptionViewItem) *QStyleOptionViewItem) {
	C.QListWidget_override_virtual_ViewOptions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_ViewOptions
func miqt_exec_callback_QListWidget_ViewOptions(self *C.QListWidget, cb C.intptr_t) *C.QStyleOptionViewItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QStyleOptionViewItem) *QStyleOptionViewItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_ViewOptions)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_PaintEvent(e *QPaintEvent) {

	C.QListWidget_virtualbase_PaintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QListWidget) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	C.QListWidget_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_PaintEvent
func miqt_exec_callback_QListWidget_PaintEvent(self *C.QListWidget, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(e), nil)

	gofunc((&QListWidget{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QListWidget) callVirtualBase_HorizontalOffset() int {

	return (int)(C.QListWidget_virtualbase_HorizontalOffset(unsafe.Pointer(this.h)))

}
func (this *QListWidget) OnHorizontalOffset(slot func(super func() int) int) {
	C.QListWidget_override_virtual_HorizontalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QListWidget_override_virtual_VerticalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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

	_ret := C.QListWidget_virtualbase_MoveCursor(unsafe.Pointer(this.h), (C.int)(cursorAction), (C.int)(modifiers))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnMoveCursor(slot func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex) {
	C.QListWidget_override_virtual_MoveCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QListWidget_override_virtual_SetSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_SetSelection
func miqt_exec_callback_QListWidget_SetSelection(self *C.QListWidget, cb C.intptr_t, rect *C.QRect, command C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRect(unsafe.Pointer(rect))
	slotval2 := (QItemSelectionModel__SelectionFlag)(command)

	gofunc((&QListWidget{h: self}).callVirtualBase_SetSelection, slotval1, slotval2)

}

func (this *QListWidget) callVirtualBase_VisualRegionForSelection(selection *QItemSelection) *QRegion {

	_ret := C.QListWidget_virtualbase_VisualRegionForSelection(unsafe.Pointer(this.h), selection.cPointer())
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnVisualRegionForSelection(slot func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion) {
	C.QListWidget_override_virtual_VisualRegionForSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_VisualRegionForSelection
func miqt_exec_callback_QListWidget_VisualRegionForSelection(self *C.QListWidget, cb C.intptr_t, selection *C.QItemSelection) *C.QRegion {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQItemSelection(unsafe.Pointer(selection))

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_VisualRegionForSelection, slotval1)

	return virtualReturn.cPointer()

}

func (this *QListWidget) callVirtualBase_SelectedIndexes() []QModelIndex {

	var _ma C.struct_miqt_array = C.QListWidget_virtualbase_SelectedIndexes(unsafe.Pointer(this.h))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQModelIndex(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QListWidget) OnSelectedIndexes(slot func(super func() []QModelIndex) []QModelIndex) {
	C.QListWidget_override_virtual_SelectedIndexes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QListWidget_override_virtual_UpdateGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	C.QListWidget_override_virtual_IsIndexHidden(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_IsIndexHidden
func miqt_exec_callback_QListWidget_IsIndexHidden(self *C.QListWidget, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) bool, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QListWidget{h: self}).callVirtualBase_IsIndexHidden, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QListWidget) callVirtualBase_SelectionChanged(selected *QItemSelection, deselected *QItemSelection) {

	C.QListWidget_virtualbase_SelectionChanged(unsafe.Pointer(this.h), selected.cPointer(), deselected.cPointer())

}
func (this *QListWidget) OnSelectionChanged(slot func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection)) {
	C.QListWidget_override_virtual_SelectionChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_SelectionChanged
func miqt_exec_callback_QListWidget_SelectionChanged(self *C.QListWidget, cb C.intptr_t, selected *C.QItemSelection, deselected *C.QItemSelection) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQItemSelection(unsafe.Pointer(selected))
	slotval2 := UnsafeNewQItemSelection(unsafe.Pointer(deselected))

	gofunc((&QListWidget{h: self}).callVirtualBase_SelectionChanged, slotval1, slotval2)

}

func (this *QListWidget) callVirtualBase_CurrentChanged(current *QModelIndex, previous *QModelIndex) {

	C.QListWidget_virtualbase_CurrentChanged(unsafe.Pointer(this.h), current.cPointer(), previous.cPointer())

}
func (this *QListWidget) OnCurrentChanged(slot func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex)) {
	C.QListWidget_override_virtual_CurrentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_CurrentChanged
func miqt_exec_callback_QListWidget_CurrentChanged(self *C.QListWidget, cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(current))
	slotval2 := UnsafeNewQModelIndex(unsafe.Pointer(previous))

	gofunc((&QListWidget{h: self}).callVirtualBase_CurrentChanged, slotval1, slotval2)

}

func (this *QListWidget) callVirtualBase_ViewportSizeHint() *QSize {

	_ret := C.QListWidget_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QListWidget) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	C.QListWidget_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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

// Delete this object from C++ memory.
func (this *QListWidget) Delete() {
	C.QListWidget_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QListWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QListWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
