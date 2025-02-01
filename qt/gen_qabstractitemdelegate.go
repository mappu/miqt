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
	h *C.QAbstractItemDelegate
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
func newQAbstractItemDelegate(h *C.QAbstractItemDelegate) *QAbstractItemDelegate {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QAbstractItemDelegate_virtbase(h, &outptr_QObject)

	return &QAbstractItemDelegate{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQAbstractItemDelegate constructs the type using only unsafe pointers.
func UnsafeNewQAbstractItemDelegate(h unsafe.Pointer) *QAbstractItemDelegate {
	return newQAbstractItemDelegate((*C.QAbstractItemDelegate)(h))
}

// NewQAbstractItemDelegate constructs a new QAbstractItemDelegate object.
func NewQAbstractItemDelegate() *QAbstractItemDelegate {

	return newQAbstractItemDelegate(C.QAbstractItemDelegate_new())
}

// NewQAbstractItemDelegate2 constructs a new QAbstractItemDelegate object.
func NewQAbstractItemDelegate2(parent *QObject) *QAbstractItemDelegate {

	return newQAbstractItemDelegate(C.QAbstractItemDelegate_new2(parent.cPointer()))
}

func (this *QAbstractItemDelegate) MetaObject() *QMetaObject {
	return newQMetaObject(C.QAbstractItemDelegate_metaObject(this.h))
}

func (this *QAbstractItemDelegate) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractItemDelegate_metacast(this.h, param1_Cstring))
}

func QAbstractItemDelegate_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemDelegate_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractItemDelegate_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemDelegate_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractItemDelegate) Paint(painter *QPainter, option *QStyleOptionViewItem, index *QModelIndex) {
	C.QAbstractItemDelegate_paint(this.h, painter.cPointer(), option.cPointer(), index.cPointer())
}

func (this *QAbstractItemDelegate) SizeHint(option *QStyleOptionViewItem, index *QModelIndex) *QSize {
	_goptr := newQSize(C.QAbstractItemDelegate_sizeHint(this.h, option.cPointer(), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractItemDelegate) CreateEditor(parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget {
	return newQWidget(C.QAbstractItemDelegate_createEditor(this.h, parent.cPointer(), option.cPointer(), index.cPointer()))
}

func (this *QAbstractItemDelegate) DestroyEditor(editor *QWidget, index *QModelIndex) {
	C.QAbstractItemDelegate_destroyEditor(this.h, editor.cPointer(), index.cPointer())
}

func (this *QAbstractItemDelegate) SetEditorData(editor *QWidget, index *QModelIndex) {
	C.QAbstractItemDelegate_setEditorData(this.h, editor.cPointer(), index.cPointer())
}

func (this *QAbstractItemDelegate) SetModelData(editor *QWidget, model *QAbstractItemModel, index *QModelIndex) {
	C.QAbstractItemDelegate_setModelData(this.h, editor.cPointer(), model.cPointer(), index.cPointer())
}

func (this *QAbstractItemDelegate) UpdateEditorGeometry(editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex) {
	C.QAbstractItemDelegate_updateEditorGeometry(this.h, editor.cPointer(), option.cPointer(), index.cPointer())
}

func (this *QAbstractItemDelegate) EditorEvent(event *QEvent, model *QAbstractItemModel, option *QStyleOptionViewItem, index *QModelIndex) bool {
	return (bool)(C.QAbstractItemDelegate_editorEvent(this.h, event.cPointer(), model.cPointer(), option.cPointer(), index.cPointer()))
}

func QAbstractItemDelegate_ElidedText(fontMetrics *QFontMetrics, width int, mode TextElideMode, text string) string {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ms C.struct_miqt_string = C.QAbstractItemDelegate_elidedText(fontMetrics.cPointer(), (C.int)(width), (C.int)(mode), text_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractItemDelegate) HelpEvent(event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool {
	return (bool)(C.QAbstractItemDelegate_helpEvent(this.h, event.cPointer(), view.cPointer(), option.cPointer(), index.cPointer()))
}

func (this *QAbstractItemDelegate) PaintingRoles() []int {
	var _ma C.struct_miqt_array = C.QAbstractItemDelegate_paintingRoles(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QAbstractItemDelegate) CommitData(editor *QWidget) {
	C.QAbstractItemDelegate_commitData(this.h, editor.cPointer())
}
func (this *QAbstractItemDelegate) OnCommitData(slot func(editor *QWidget)) {
	C.QAbstractItemDelegate_connect_commitData(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_commitData
func miqt_exec_callback_QAbstractItemDelegate_commitData(cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	gofunc(slotval1)
}

func (this *QAbstractItemDelegate) CloseEditor(editor *QWidget) {
	C.QAbstractItemDelegate_closeEditor(this.h, editor.cPointer())
}
func (this *QAbstractItemDelegate) OnCloseEditor(slot func(editor *QWidget)) {
	C.QAbstractItemDelegate_connect_closeEditor(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_closeEditor
func miqt_exec_callback_QAbstractItemDelegate_closeEditor(cb C.intptr_t, editor *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(editor *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	gofunc(slotval1)
}

func (this *QAbstractItemDelegate) SizeHintChanged(param1 *QModelIndex) {
	C.QAbstractItemDelegate_sizeHintChanged(this.h, param1.cPointer())
}
func (this *QAbstractItemDelegate) OnSizeHintChanged(slot func(param1 *QModelIndex)) {
	C.QAbstractItemDelegate_connect_sizeHintChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_sizeHintChanged
func miqt_exec_callback_QAbstractItemDelegate_sizeHintChanged(cb C.intptr_t, param1 *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQModelIndex(param1)

	gofunc(slotval1)
}

func QAbstractItemDelegate_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemDelegate_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractItemDelegate_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemDelegate_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractItemDelegate_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemDelegate_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractItemDelegate_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractItemDelegate_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractItemDelegate) CloseEditor2(editor *QWidget, hint QAbstractItemDelegate__EndEditHint) {
	C.QAbstractItemDelegate_closeEditor2(this.h, editor.cPointer(), (C.int)(hint))
}
func (this *QAbstractItemDelegate) OnCloseEditor2(slot func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint)) {
	C.QAbstractItemDelegate_connect_closeEditor2(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAbstractItemDelegate_closeEditor2
func miqt_exec_callback_QAbstractItemDelegate_closeEditor2(cb C.intptr_t, editor *C.QWidget, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(editor *QWidget, hint QAbstractItemDelegate__EndEditHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := (QAbstractItemDelegate__EndEditHint)(hint)

	gofunc(slotval1, slotval2)
}

func (this *QAbstractItemDelegate) OnPaint(slot func(painter *QPainter, option *QStyleOptionViewItem, index *QModelIndex)) {
	ok := C.QAbstractItemDelegate_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemDelegate_paint
func miqt_exec_callback_QAbstractItemDelegate_paint(self *C.QAbstractItemDelegate, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionViewItem, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(painter *QPainter, option *QStyleOptionViewItem, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionViewItem(option)

	slotval3 := newQModelIndex(index)

	gofunc(slotval1, slotval2, slotval3)

}
func (this *QAbstractItemDelegate) OnSizeHint(slot func(option *QStyleOptionViewItem, index *QModelIndex) *QSize) {
	ok := C.QAbstractItemDelegate_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemDelegate_sizeHint
func miqt_exec_callback_QAbstractItemDelegate_sizeHint(self *C.QAbstractItemDelegate, cb C.intptr_t, option *C.QStyleOptionViewItem, index *C.QModelIndex) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(option *QStyleOptionViewItem, index *QModelIndex) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionViewItem(option)

	slotval2 := newQModelIndex(index)

	virtualReturn := gofunc(slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemDelegate) callVirtualBase_CreateEditor(parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget {

	return newQWidget(C.QAbstractItemDelegate_virtualbase_createEditor(unsafe.Pointer(this.h), parent.cPointer(), option.cPointer(), index.cPointer()))

}
func (this *QAbstractItemDelegate) OnCreateEditor(slot func(super func(parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget, parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget) {
	ok := C.QAbstractItemDelegate_override_virtual_createEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemDelegate_createEditor
func miqt_exec_callback_QAbstractItemDelegate_createEditor(self *C.QAbstractItemDelegate, cb C.intptr_t, parent *C.QWidget, option *C.QStyleOptionViewItem, index *C.QModelIndex) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget, parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(parent)

	slotval2 := newQStyleOptionViewItem(option)

	slotval3 := newQModelIndex(index)

	virtualReturn := gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_CreateEditor, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QAbstractItemDelegate) callVirtualBase_DestroyEditor(editor *QWidget, index *QModelIndex) {

	C.QAbstractItemDelegate_virtualbase_destroyEditor(unsafe.Pointer(this.h), editor.cPointer(), index.cPointer())

}
func (this *QAbstractItemDelegate) OnDestroyEditor(slot func(super func(editor *QWidget, index *QModelIndex), editor *QWidget, index *QModelIndex)) {
	ok := C.QAbstractItemDelegate_override_virtual_destroyEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemDelegate_destroyEditor
func miqt_exec_callback_QAbstractItemDelegate_destroyEditor(self *C.QAbstractItemDelegate, cb C.intptr_t, editor *C.QWidget, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, index *QModelIndex), editor *QWidget, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := newQModelIndex(index)

	gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_DestroyEditor, slotval1, slotval2)

}

func (this *QAbstractItemDelegate) callVirtualBase_SetEditorData(editor *QWidget, index *QModelIndex) {

	C.QAbstractItemDelegate_virtualbase_setEditorData(unsafe.Pointer(this.h), editor.cPointer(), index.cPointer())

}
func (this *QAbstractItemDelegate) OnSetEditorData(slot func(super func(editor *QWidget, index *QModelIndex), editor *QWidget, index *QModelIndex)) {
	ok := C.QAbstractItemDelegate_override_virtual_setEditorData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemDelegate_setEditorData
func miqt_exec_callback_QAbstractItemDelegate_setEditorData(self *C.QAbstractItemDelegate, cb C.intptr_t, editor *C.QWidget, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, index *QModelIndex), editor *QWidget, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := newQModelIndex(index)

	gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_SetEditorData, slotval1, slotval2)

}

func (this *QAbstractItemDelegate) callVirtualBase_SetModelData(editor *QWidget, model *QAbstractItemModel, index *QModelIndex) {

	C.QAbstractItemDelegate_virtualbase_setModelData(unsafe.Pointer(this.h), editor.cPointer(), model.cPointer(), index.cPointer())

}
func (this *QAbstractItemDelegate) OnSetModelData(slot func(super func(editor *QWidget, model *QAbstractItemModel, index *QModelIndex), editor *QWidget, model *QAbstractItemModel, index *QModelIndex)) {
	ok := C.QAbstractItemDelegate_override_virtual_setModelData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemDelegate_setModelData
func miqt_exec_callback_QAbstractItemDelegate_setModelData(self *C.QAbstractItemDelegate, cb C.intptr_t, editor *C.QWidget, model *C.QAbstractItemModel, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, model *QAbstractItemModel, index *QModelIndex), editor *QWidget, model *QAbstractItemModel, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := newQAbstractItemModel(model)

	slotval3 := newQModelIndex(index)

	gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_SetModelData, slotval1, slotval2, slotval3)

}

func (this *QAbstractItemDelegate) callVirtualBase_UpdateEditorGeometry(editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex) {

	C.QAbstractItemDelegate_virtualbase_updateEditorGeometry(unsafe.Pointer(this.h), editor.cPointer(), option.cPointer(), index.cPointer())

}
func (this *QAbstractItemDelegate) OnUpdateEditorGeometry(slot func(super func(editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex), editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex)) {
	ok := C.QAbstractItemDelegate_override_virtual_updateEditorGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemDelegate_updateEditorGeometry
func miqt_exec_callback_QAbstractItemDelegate_updateEditorGeometry(self *C.QAbstractItemDelegate, cb C.intptr_t, editor *C.QWidget, option *C.QStyleOptionViewItem, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex), editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := newQStyleOptionViewItem(option)

	slotval3 := newQModelIndex(index)

	gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_UpdateEditorGeometry, slotval1, slotval2, slotval3)

}

func (this *QAbstractItemDelegate) callVirtualBase_EditorEvent(event *QEvent, model *QAbstractItemModel, option *QStyleOptionViewItem, index *QModelIndex) bool {

	return (bool)(C.QAbstractItemDelegate_virtualbase_editorEvent(unsafe.Pointer(this.h), event.cPointer(), model.cPointer(), option.cPointer(), index.cPointer()))

}
func (this *QAbstractItemDelegate) OnEditorEvent(slot func(super func(event *QEvent, model *QAbstractItemModel, option *QStyleOptionViewItem, index *QModelIndex) bool, event *QEvent, model *QAbstractItemModel, option *QStyleOptionViewItem, index *QModelIndex) bool) {
	ok := C.QAbstractItemDelegate_override_virtual_editorEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemDelegate_editorEvent
func miqt_exec_callback_QAbstractItemDelegate_editorEvent(self *C.QAbstractItemDelegate, cb C.intptr_t, event *C.QEvent, model *C.QAbstractItemModel, option *C.QStyleOptionViewItem, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent, model *QAbstractItemModel, option *QStyleOptionViewItem, index *QModelIndex) bool, event *QEvent, model *QAbstractItemModel, option *QStyleOptionViewItem, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	slotval2 := newQAbstractItemModel(model)

	slotval3 := newQStyleOptionViewItem(option)

	slotval4 := newQModelIndex(index)

	virtualReturn := gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_EditorEvent, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemDelegate) callVirtualBase_HelpEvent(event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool {

	return (bool)(C.QAbstractItemDelegate_virtualbase_helpEvent(unsafe.Pointer(this.h), event.cPointer(), view.cPointer(), option.cPointer(), index.cPointer()))

}
func (this *QAbstractItemDelegate) OnHelpEvent(slot func(super func(event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool, event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool) {
	ok := C.QAbstractItemDelegate_override_virtual_helpEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemDelegate_helpEvent
func miqt_exec_callback_QAbstractItemDelegate_helpEvent(self *C.QAbstractItemDelegate, cb C.intptr_t, event *C.QHelpEvent, view *C.QAbstractItemView, option *C.QStyleOptionViewItem, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool, event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHelpEvent(event)

	slotval2 := newQAbstractItemView(view)

	slotval3 := newQStyleOptionViewItem(option)

	slotval4 := newQModelIndex(index)

	virtualReturn := gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_HelpEvent, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemDelegate) callVirtualBase_PaintingRoles() []int {

	var _ma C.struct_miqt_array = C.QAbstractItemDelegate_virtualbase_paintingRoles(unsafe.Pointer(this.h))
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret

}
func (this *QAbstractItemDelegate) OnPaintingRoles(slot func(super func() []int) []int) {
	ok := C.QAbstractItemDelegate_override_virtual_paintingRoles(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemDelegate_paintingRoles
func miqt_exec_callback_QAbstractItemDelegate_paintingRoles(self *C.QAbstractItemDelegate, cb C.intptr_t) C.struct_miqt_array {
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

	return (bool)(C.QAbstractItemDelegate_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAbstractItemDelegate) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QAbstractItemDelegate_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemDelegate_event
func miqt_exec_callback_QAbstractItemDelegate_event(self *C.QAbstractItemDelegate, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemDelegate) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QAbstractItemDelegate_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QAbstractItemDelegate) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QAbstractItemDelegate_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemDelegate_eventFilter
func miqt_exec_callback_QAbstractItemDelegate_eventFilter(self *C.QAbstractItemDelegate, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAbstractItemDelegate) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QAbstractItemDelegate_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemDelegate) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QAbstractItemDelegate_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemDelegate_timerEvent
func miqt_exec_callback_QAbstractItemDelegate_timerEvent(self *C.QAbstractItemDelegate, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAbstractItemDelegate) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QAbstractItemDelegate_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemDelegate) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QAbstractItemDelegate_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemDelegate_childEvent
func miqt_exec_callback_QAbstractItemDelegate_childEvent(self *C.QAbstractItemDelegate, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAbstractItemDelegate) callVirtualBase_CustomEvent(event *QEvent) {

	C.QAbstractItemDelegate_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QAbstractItemDelegate) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QAbstractItemDelegate_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemDelegate_customEvent
func miqt_exec_callback_QAbstractItemDelegate_customEvent(self *C.QAbstractItemDelegate, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAbstractItemDelegate) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QAbstractItemDelegate_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractItemDelegate) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAbstractItemDelegate_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemDelegate_connectNotify
func miqt_exec_callback_QAbstractItemDelegate_connectNotify(self *C.QAbstractItemDelegate, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAbstractItemDelegate) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QAbstractItemDelegate_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QAbstractItemDelegate) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QAbstractItemDelegate_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractItemDelegate_disconnectNotify
func miqt_exec_callback_QAbstractItemDelegate_disconnectNotify(self *C.QAbstractItemDelegate, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QAbstractItemDelegate{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAbstractItemDelegate) Delete() {
	C.QAbstractItemDelegate_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractItemDelegate) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractItemDelegate) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
