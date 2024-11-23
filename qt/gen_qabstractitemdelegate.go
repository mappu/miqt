package qt

/*

#include "gen_qabstractitemdelegate.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractItemDelegate__EndEditHint int

const (
	QAbstractItemDelegate__NoHint           QAbstractItemDelegate__EndEditHint = 0
	QAbstractItemDelegate__EditNextItem     QAbstractItemDelegate__EndEditHint = 1
	QAbstractItemDelegate__EditPreviousItem QAbstractItemDelegate__EndEditHint = 2
	QAbstractItemDelegate__SubmitModelCache QAbstractItemDelegate__EndEditHint = 3
	QAbstractItemDelegate__RevertModelCache QAbstractItemDelegate__EndEditHint = 4
)

type QAbstractItemDelegate struct {
	h          *C.QAbstractItemDelegate
	isSubclass bool
	*QObject
}

func (this *QAbstractItemDelegate) cPointer() *C.QAbstractItemDelegate {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractItemDelegate) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractItemDelegate constructs the type using only CGO pointers.
func newQAbstractItemDelegate(h *C.QAbstractItemDelegate, h_QObject *C.QObject) *QAbstractItemDelegate {
	if h == nil {
		return nil
	}
	return &QAbstractItemDelegate{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQAbstractItemDelegate constructs the type using only unsafe pointers.
func UnsafeNewQAbstractItemDelegate(h unsafe.Pointer, h_QObject unsafe.Pointer) *QAbstractItemDelegate {
	if h == nil {
		return nil
	}

	return &QAbstractItemDelegate{h: (*C.QAbstractItemDelegate)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQAbstractItemDelegate constructs a new QAbstractItemDelegate object.
func NewQAbstractItemDelegate() *QAbstractItemDelegate {
	var outptr_QAbstractItemDelegate *C.QAbstractItemDelegate = nil
	var outptr_QObject *C.QObject = nil

	C.QAbstractItemDelegate_new(&outptr_QAbstractItemDelegate, &outptr_QObject)
	ret := newQAbstractItemDelegate(outptr_QAbstractItemDelegate, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAbstractItemDelegate2 constructs a new QAbstractItemDelegate object.
func NewQAbstractItemDelegate2(parent *QObject) *QAbstractItemDelegate {
	var outptr_QAbstractItemDelegate *C.QAbstractItemDelegate = nil
	var outptr_QObject *C.QObject = nil

	C.QAbstractItemDelegate_new2(parent.cPointer(), &outptr_QAbstractItemDelegate, &outptr_QObject)
	ret := newQAbstractItemDelegate(outptr_QAbstractItemDelegate, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QAbstractItemDelegate) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractItemDelegate_MetaObject(this.h)))
}

func (this *QAbstractItemDelegate) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractItemDelegate_Metacast(this.h, param1_Cstring))
}

func QAbstractItemDelegate_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemDelegate_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractItemDelegate_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemDelegate_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractItemDelegate) Paint(painter *QPainter, option *QStyleOptionViewItem, index *QModelIndex) {
	C.QAbstractItemDelegate_Paint(this.h, painter.cPointer(), option.cPointer(), index.cPointer())
}

func (this *QAbstractItemDelegate) SizeHint(option *QStyleOptionViewItem, index *QModelIndex) *QSize {
	_ret := C.QAbstractItemDelegate_SizeHint(this.h, option.cPointer(), index.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemDelegate) CreateEditor(parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QAbstractItemDelegate_CreateEditor(this.h, parent.cPointer(), option.cPointer(), index.cPointer())), nil, nil)
}

func (this *QAbstractItemDelegate) DestroyEditor(editor *QWidget, index *QModelIndex) {
	C.QAbstractItemDelegate_DestroyEditor(this.h, editor.cPointer(), index.cPointer())
}

func (this *QAbstractItemDelegate) SetEditorData(editor *QWidget, index *QModelIndex) {
	C.QAbstractItemDelegate_SetEditorData(this.h, editor.cPointer(), index.cPointer())
}

func (this *QAbstractItemDelegate) SetModelData(editor *QWidget, model *QAbstractItemModel, index *QModelIndex) {
	C.QAbstractItemDelegate_SetModelData(this.h, editor.cPointer(), model.cPointer(), index.cPointer())
}

func (this *QAbstractItemDelegate) UpdateEditorGeometry(editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex) {
	C.QAbstractItemDelegate_UpdateEditorGeometry(this.h, editor.cPointer(), option.cPointer(), index.cPointer())
}

func (this *QAbstractItemDelegate) EditorEvent(event *QEvent, model *QAbstractItemModel, option *QStyleOptionViewItem, index *QModelIndex) bool {
	return (bool)(C.QAbstractItemDelegate_EditorEvent(this.h, event.cPointer(), model.cPointer(), option.cPointer(), index.cPointer()))
}

func QAbstractItemDelegate_ElidedText(fontMetrics *QFontMetrics, width int, mode TextElideMode, text string) string {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ms C.struct_miqt_string = C.QAbstractItemDelegate_ElidedText(fontMetrics.cPointer(), (C.int)(width), (C.int)(mode), text_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractItemDelegate) HelpEvent(event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool {
	return (bool)(C.QAbstractItemDelegate_HelpEvent(this.h, event.cPointer(), view.cPointer(), option.cPointer(), index.cPointer()))
}

func (this *QAbstractItemDelegate) PaintingRoles() []int {
	var _ma C.struct_miqt_array = C.QAbstractItemDelegate_PaintingRoles(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QAbstractItemDelegate) CommitData(editor *QWidget) {
	C.QAbstractItemDelegate_CommitData(this.h, editor.cPointer())
}
func (this *QAbstractItemDelegate) OnCommitData(slot func(editor *QWidget)) {
	C.QAbstractItemDelegate_connect_CommitData(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_CommitData
func miqt_exec_callback_QAbstractItemDelegate_CommitData(cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(editor), nil, nil)

	gofunc(slotval1)
}

func (this *QAbstractItemDelegate) CloseEditor(editor *QWidget) {
	C.QAbstractItemDelegate_CloseEditor(this.h, editor.cPointer())
}
func (this *QAbstractItemDelegate) OnCloseEditor(slot func(editor *QWidget)) {
	C.QAbstractItemDelegate_connect_CloseEditor(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_CloseEditor
func miqt_exec_callback_QAbstractItemDelegate_CloseEditor(cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(editor), nil, nil)

	gofunc(slotval1)
}

func (this *QAbstractItemDelegate) SizeHintChanged(param1 *QModelIndex) {
	C.QAbstractItemDelegate_SizeHintChanged(this.h, param1.cPointer())
}
func (this *QAbstractItemDelegate) OnSizeHintChanged(slot func(param1 *QModelIndex)) {
	C.QAbstractItemDelegate_connect_SizeHintChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_SizeHintChanged
func miqt_exec_callback_QAbstractItemDelegate_SizeHintChanged(cb C.intptr_t, param1 *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func QAbstractItemDelegate_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemDelegate_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractItemDelegate_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemDelegate_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractItemDelegate_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemDelegate_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractItemDelegate_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemDelegate_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractItemDelegate) CloseEditor2(editor *QWidget, hint QAbstractItemDelegate__EndEditHint) {
	C.QAbstractItemDelegate_CloseEditor2(this.h, editor.cPointer(), (C.int)(hint))
}
func (this *QAbstractItemDelegate) OnCloseEditor2(slot func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint)) {
	C.QAbstractItemDelegate_connect_CloseEditor2(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_CloseEditor2
func miqt_exec_callback_QAbstractItemDelegate_CloseEditor2(cb C.intptr_t, editor *C.QWidget, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(editor), nil, nil)
	slotval2 := (QAbstractItemDelegate__EndEditHint)(hint)

	gofunc(slotval1, slotval2)
}

func (this *QAbstractItemDelegate) OnPaint(slot func(painter *QPainter, option *QStyleOptionViewItem, index *QModelIndex)) {
	C.QAbstractItemDelegate_override_virtual_Paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_Paint
func miqt_exec_callback_QAbstractItemDelegate_Paint(self *C.QAbstractItemDelegate, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionViewItem, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(painter *QPainter, option *QStyleOptionViewItem, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := UnsafeNewQStyleOptionViewItem(unsafe.Pointer(option), nil)
	slotval3 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	gofunc(slotval1, slotval2, slotval3)

}
func (this *QAbstractItemDelegate) OnSizeHint(slot func(option *QStyleOptionViewItem, index *QModelIndex) *QSize) {
	C.QAbstractItemDelegate_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_SizeHint
func miqt_exec_callback_QAbstractItemDelegate_SizeHint(self *C.QAbstractItemDelegate, cb C.intptr_t, option *C.QStyleOptionViewItem, index *C.QModelIndex) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(option *QStyleOptionViewItem, index *QModelIndex) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQStyleOptionViewItem(unsafe.Pointer(option), nil)
	slotval2 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc(slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemDelegate) callVirtualBase_CreateEditor(parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget {

	return UnsafeNewQWidget(unsafe.Pointer(C.QAbstractItemDelegate_virtualbase_CreateEditor(unsafe.Pointer(this.h), parent.cPointer(), option.cPointer(), index.cPointer())), nil, nil)
}
func (this *QAbstractItemDelegate) OnCreateEditor(slot func(super func(parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget, parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget) {
	C.QAbstractItemDelegate_override_virtual_CreateEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_CreateEditor
func miqt_exec_callback_QAbstractItemDelegate_CreateEditor(self *C.QAbstractItemDelegate, cb C.intptr_t, parent *C.QWidget, option *C.QStyleOptionViewItem, index *C.QModelIndex) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget, parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(parent), nil, nil)
	slotval2 := UnsafeNewQStyleOptionViewItem(unsafe.Pointer(option), nil)
	slotval3 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_CreateEditor, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemDelegate) callVirtualBase_DestroyEditor(editor *QWidget, index *QModelIndex) {

	C.QAbstractItemDelegate_virtualbase_DestroyEditor(unsafe.Pointer(this.h), editor.cPointer(), index.cPointer())

}
func (this *QAbstractItemDelegate) OnDestroyEditor(slot func(super func(editor *QWidget, index *QModelIndex), editor *QWidget, index *QModelIndex)) {
	C.QAbstractItemDelegate_override_virtual_DestroyEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_DestroyEditor
func miqt_exec_callback_QAbstractItemDelegate_DestroyEditor(self *C.QAbstractItemDelegate, cb C.intptr_t, editor *C.QWidget, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, index *QModelIndex), editor *QWidget, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(editor), nil, nil)
	slotval2 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_DestroyEditor, slotval1, slotval2)

}

func (this *QAbstractItemDelegate) callVirtualBase_SetEditorData(editor *QWidget, index *QModelIndex) {

	C.QAbstractItemDelegate_virtualbase_SetEditorData(unsafe.Pointer(this.h), editor.cPointer(), index.cPointer())

}
func (this *QAbstractItemDelegate) OnSetEditorData(slot func(super func(editor *QWidget, index *QModelIndex), editor *QWidget, index *QModelIndex)) {
	C.QAbstractItemDelegate_override_virtual_SetEditorData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_SetEditorData
func miqt_exec_callback_QAbstractItemDelegate_SetEditorData(self *C.QAbstractItemDelegate, cb C.intptr_t, editor *C.QWidget, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, index *QModelIndex), editor *QWidget, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(editor), nil, nil)
	slotval2 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_SetEditorData, slotval1, slotval2)

}

func (this *QAbstractItemDelegate) callVirtualBase_SetModelData(editor *QWidget, model *QAbstractItemModel, index *QModelIndex) {

	C.QAbstractItemDelegate_virtualbase_SetModelData(unsafe.Pointer(this.h), editor.cPointer(), model.cPointer(), index.cPointer())

}
func (this *QAbstractItemDelegate) OnSetModelData(slot func(super func(editor *QWidget, model *QAbstractItemModel, index *QModelIndex), editor *QWidget, model *QAbstractItemModel, index *QModelIndex)) {
	C.QAbstractItemDelegate_override_virtual_SetModelData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_SetModelData
func miqt_exec_callback_QAbstractItemDelegate_SetModelData(self *C.QAbstractItemDelegate, cb C.intptr_t, editor *C.QWidget, model *C.QAbstractItemModel, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, model *QAbstractItemModel, index *QModelIndex), editor *QWidget, model *QAbstractItemModel, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(editor), nil, nil)
	slotval2 := UnsafeNewQAbstractItemModel(unsafe.Pointer(model), nil)
	slotval3 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_SetModelData, slotval1, slotval2, slotval3)

}

func (this *QAbstractItemDelegate) callVirtualBase_UpdateEditorGeometry(editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex) {

	C.QAbstractItemDelegate_virtualbase_UpdateEditorGeometry(unsafe.Pointer(this.h), editor.cPointer(), option.cPointer(), index.cPointer())

}
func (this *QAbstractItemDelegate) OnUpdateEditorGeometry(slot func(super func(editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex), editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex)) {
	C.QAbstractItemDelegate_override_virtual_UpdateEditorGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_UpdateEditorGeometry
func miqt_exec_callback_QAbstractItemDelegate_UpdateEditorGeometry(self *C.QAbstractItemDelegate, cb C.intptr_t, editor *C.QWidget, option *C.QStyleOptionViewItem, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex), editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(editor), nil, nil)
	slotval2 := UnsafeNewQStyleOptionViewItem(unsafe.Pointer(option), nil)
	slotval3 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_UpdateEditorGeometry, slotval1, slotval2, slotval3)

}

func (this *QAbstractItemDelegate) callVirtualBase_EditorEvent(event *QEvent, model *QAbstractItemModel, option *QStyleOptionViewItem, index *QModelIndex) bool {

	return (bool)(C.QAbstractItemDelegate_virtualbase_EditorEvent(unsafe.Pointer(this.h), event.cPointer(), model.cPointer(), option.cPointer(), index.cPointer()))

}
func (this *QAbstractItemDelegate) OnEditorEvent(slot func(super func(event *QEvent, model *QAbstractItemModel, option *QStyleOptionViewItem, index *QModelIndex) bool, event *QEvent, model *QAbstractItemModel, option *QStyleOptionViewItem, index *QModelIndex) bool) {
	C.QAbstractItemDelegate_override_virtual_EditorEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_EditorEvent
func miqt_exec_callback_QAbstractItemDelegate_EditorEvent(self *C.QAbstractItemDelegate, cb C.intptr_t, event *C.QEvent, model *C.QAbstractItemModel, option *C.QStyleOptionViewItem, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent, model *QAbstractItemModel, option *QStyleOptionViewItem, index *QModelIndex) bool, event *QEvent, model *QAbstractItemModel, option *QStyleOptionViewItem, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))
	slotval2 := UnsafeNewQAbstractItemModel(unsafe.Pointer(model), nil)
	slotval3 := UnsafeNewQStyleOptionViewItem(unsafe.Pointer(option), nil)
	slotval4 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_EditorEvent, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemDelegate) callVirtualBase_HelpEvent(event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool {

	return (bool)(C.QAbstractItemDelegate_virtualbase_HelpEvent(unsafe.Pointer(this.h), event.cPointer(), view.cPointer(), option.cPointer(), index.cPointer()))

}
func (this *QAbstractItemDelegate) OnHelpEvent(slot func(super func(event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool, event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool) {
	C.QAbstractItemDelegate_override_virtual_HelpEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_HelpEvent
func miqt_exec_callback_QAbstractItemDelegate_HelpEvent(self *C.QAbstractItemDelegate, cb C.intptr_t, event *C.QHelpEvent, view *C.QAbstractItemView, option *C.QStyleOptionViewItem, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool, event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQHelpEvent(unsafe.Pointer(event), nil)
	slotval2 := UnsafeNewQAbstractItemView(unsafe.Pointer(view), nil, nil, nil, nil, nil)
	slotval3 := UnsafeNewQStyleOptionViewItem(unsafe.Pointer(option), nil)
	slotval4 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_HelpEvent, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemDelegate) callVirtualBase_PaintingRoles() []int {

	var _ma C.struct_miqt_array = C.QAbstractItemDelegate_virtualbase_PaintingRoles(unsafe.Pointer(this.h))
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret

}
func (this *QAbstractItemDelegate) OnPaintingRoles(slot func(super func() []int) []int) {
	C.QAbstractItemDelegate_override_virtual_PaintingRoles(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_PaintingRoles
func miqt_exec_callback_QAbstractItemDelegate_PaintingRoles(self *C.QAbstractItemDelegate, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []int) []int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_PaintingRoles)
	virtualReturn_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (C.int)(virtualReturn[i])
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QAbstractItemDelegate) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QAbstractItemDelegate_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAbstractItemDelegate) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QAbstractItemDelegate_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_Event
func miqt_exec_callback_QAbstractItemDelegate_Event(self *C.QAbstractItemDelegate, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemDelegate) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QAbstractItemDelegate_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAbstractItemDelegate) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	C.QAbstractItemDelegate_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_EventFilter
func miqt_exec_callback_QAbstractItemDelegate_EventFilter(self *C.QAbstractItemDelegate, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemDelegate) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QAbstractItemDelegate_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemDelegate) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	C.QAbstractItemDelegate_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_TimerEvent
func miqt_exec_callback_QAbstractItemDelegate_TimerEvent(self *C.QAbstractItemDelegate, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractItemDelegate) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAbstractItemDelegate_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemDelegate) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	C.QAbstractItemDelegate_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_ChildEvent
func miqt_exec_callback_QAbstractItemDelegate_ChildEvent(self *C.QAbstractItemDelegate, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractItemDelegate) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAbstractItemDelegate_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemDelegate) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QAbstractItemDelegate_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_CustomEvent
func miqt_exec_callback_QAbstractItemDelegate_CustomEvent(self *C.QAbstractItemDelegate, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractItemDelegate) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAbstractItemDelegate_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractItemDelegate) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QAbstractItemDelegate_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_ConnectNotify
func miqt_exec_callback_QAbstractItemDelegate_ConnectNotify(self *C.QAbstractItemDelegate, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractItemDelegate) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAbstractItemDelegate_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractItemDelegate) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	C.QAbstractItemDelegate_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_DisconnectNotify
func miqt_exec_callback_QAbstractItemDelegate_DisconnectNotify(self *C.QAbstractItemDelegate, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAbstractItemDelegate) Delete() {
	C.QAbstractItemDelegate_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractItemDelegate) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractItemDelegate) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
