package qt

/*

#include "gen_qstyleditemdelegate.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QStyledItemDelegate struct {
	h *C.QStyledItemDelegate
	*QAbstractItemDelegate
}

func (this *QStyledItemDelegate) cPointer() *C.QStyledItemDelegate {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStyledItemDelegate) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStyledItemDelegate constructs the type using only CGO pointers.
func newQStyledItemDelegate(h *C.QStyledItemDelegate) *QStyledItemDelegate {
	if h == nil {
		return nil
	}
	var outptr_QAbstractItemDelegate *C.QAbstractItemDelegate = nil
	C.QStyledItemDelegate_virtbase(h, &outptr_QAbstractItemDelegate)

	return &QStyledItemDelegate{h: h,
		QAbstractItemDelegate: newQAbstractItemDelegate(outptr_QAbstractItemDelegate)}
}

// UnsafeNewQStyledItemDelegate constructs the type using only unsafe pointers.
func UnsafeNewQStyledItemDelegate(h unsafe.Pointer) *QStyledItemDelegate {
	return newQStyledItemDelegate((*C.QStyledItemDelegate)(h))
}

// NewQStyledItemDelegate constructs a new QStyledItemDelegate object.
func NewQStyledItemDelegate() *QStyledItemDelegate {

	return newQStyledItemDelegate(C.QStyledItemDelegate_new())
}

// NewQStyledItemDelegate2 constructs a new QStyledItemDelegate object.
func NewQStyledItemDelegate2(parent *QObject) *QStyledItemDelegate {

	return newQStyledItemDelegate(C.QStyledItemDelegate_new2(parent.cPointer()))
}

func (this *QStyledItemDelegate) MetaObject() *QMetaObject {
	return newQMetaObject(C.QStyledItemDelegate_metaObject(this.h))
}

func (this *QStyledItemDelegate) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QStyledItemDelegate_metacast(this.h, param1_Cstring))
}

func QStyledItemDelegate_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStyledItemDelegate_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStyledItemDelegate_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStyledItemDelegate_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStyledItemDelegate) Paint(painter *QPainter, option *QStyleOptionViewItem, index *QModelIndex) {
	C.QStyledItemDelegate_paint(this.h, painter.cPointer(), option.cPointer(), index.cPointer())
}

func (this *QStyledItemDelegate) SizeHint(option *QStyleOptionViewItem, index *QModelIndex) *QSize {
	_goptr := newQSize(C.QStyledItemDelegate_sizeHint(this.h, option.cPointer(), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyledItemDelegate) CreateEditor(parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget {
	return newQWidget(C.QStyledItemDelegate_createEditor(this.h, parent.cPointer(), option.cPointer(), index.cPointer()))
}

func (this *QStyledItemDelegate) SetEditorData(editor *QWidget, index *QModelIndex) {
	C.QStyledItemDelegate_setEditorData(this.h, editor.cPointer(), index.cPointer())
}

func (this *QStyledItemDelegate) SetModelData(editor *QWidget, model *QAbstractItemModel, index *QModelIndex) {
	C.QStyledItemDelegate_setModelData(this.h, editor.cPointer(), model.cPointer(), index.cPointer())
}

func (this *QStyledItemDelegate) UpdateEditorGeometry(editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex) {
	C.QStyledItemDelegate_updateEditorGeometry(this.h, editor.cPointer(), option.cPointer(), index.cPointer())
}

func (this *QStyledItemDelegate) ItemEditorFactory() *QItemEditorFactory {
	return newQItemEditorFactory(C.QStyledItemDelegate_itemEditorFactory(this.h))
}

func (this *QStyledItemDelegate) SetItemEditorFactory(factory *QItemEditorFactory) {
	C.QStyledItemDelegate_setItemEditorFactory(this.h, factory.cPointer())
}

func (this *QStyledItemDelegate) DisplayText(value *QVariant, locale *QLocale) string {
	var _ms C.struct_miqt_string = C.QStyledItemDelegate_displayText(this.h, value.cPointer(), locale.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStyledItemDelegate_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStyledItemDelegate_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStyledItemDelegate_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStyledItemDelegate_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStyledItemDelegate_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStyledItemDelegate_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStyledItemDelegate_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStyledItemDelegate_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QStyledItemDelegate that was directly constructed.
func (this *QStyledItemDelegate) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QStyledItemDelegate_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QStyledItemDelegate that was directly constructed.
func (this *QStyledItemDelegate) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QStyledItemDelegate_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QStyledItemDelegate that was directly constructed.
func (this *QStyledItemDelegate) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QStyledItemDelegate_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QStyledItemDelegate that was directly constructed.
func (this *QStyledItemDelegate) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QStyledItemDelegate_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QStyledItemDelegate) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionViewItem, index *QModelIndex) {

	C.QStyledItemDelegate_virtualbase_paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), index.cPointer())

}
func (this *QStyledItemDelegate) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionViewItem, index *QModelIndex), painter *QPainter, option *QStyleOptionViewItem, index *QModelIndex)) {
	ok := C.QStyledItemDelegate_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_paint
func miqt_exec_callback_QStyledItemDelegate_paint(self *C.QStyledItemDelegate, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionViewItem, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionViewItem, index *QModelIndex), painter *QPainter, option *QStyleOptionViewItem, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionViewItem(option)

	slotval3 := newQModelIndex(index)

	gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QStyledItemDelegate) callVirtualBase_SizeHint(option *QStyleOptionViewItem, index *QModelIndex) *QSize {

	_goptr := newQSize(C.QStyledItemDelegate_virtualbase_sizeHint(unsafe.Pointer(this.h), option.cPointer(), index.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStyledItemDelegate) OnSizeHint(slot func(super func(option *QStyleOptionViewItem, index *QModelIndex) *QSize, option *QStyleOptionViewItem, index *QModelIndex) *QSize) {
	ok := C.QStyledItemDelegate_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_sizeHint
func miqt_exec_callback_QStyledItemDelegate_sizeHint(self *C.QStyledItemDelegate, cb C.intptr_t, option *C.QStyleOptionViewItem, index *C.QModelIndex) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionViewItem, index *QModelIndex) *QSize, option *QStyleOptionViewItem, index *QModelIndex) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionViewItem(option)

	slotval2 := newQModelIndex(index)

	virtualReturn := gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_SizeHint, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QStyledItemDelegate) callVirtualBase_CreateEditor(parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget {

	return newQWidget(C.QStyledItemDelegate_virtualbase_createEditor(unsafe.Pointer(this.h), parent.cPointer(), option.cPointer(), index.cPointer()))

}
func (this *QStyledItemDelegate) OnCreateEditor(slot func(super func(parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget, parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget) {
	ok := C.QStyledItemDelegate_override_virtual_createEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_createEditor
func miqt_exec_callback_QStyledItemDelegate_createEditor(self *C.QStyledItemDelegate, cb C.intptr_t, parent *C.QWidget, option *C.QStyleOptionViewItem, index *C.QModelIndex) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget, parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(parent)

	slotval2 := newQStyleOptionViewItem(option)

	slotval3 := newQModelIndex(index)

	virtualReturn := gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_CreateEditor, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QStyledItemDelegate) callVirtualBase_SetEditorData(editor *QWidget, index *QModelIndex) {

	C.QStyledItemDelegate_virtualbase_setEditorData(unsafe.Pointer(this.h), editor.cPointer(), index.cPointer())

}
func (this *QStyledItemDelegate) OnSetEditorData(slot func(super func(editor *QWidget, index *QModelIndex), editor *QWidget, index *QModelIndex)) {
	ok := C.QStyledItemDelegate_override_virtual_setEditorData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_setEditorData
func miqt_exec_callback_QStyledItemDelegate_setEditorData(self *C.QStyledItemDelegate, cb C.intptr_t, editor *C.QWidget, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, index *QModelIndex), editor *QWidget, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := newQModelIndex(index)

	gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_SetEditorData, slotval1, slotval2)

}

func (this *QStyledItemDelegate) callVirtualBase_SetModelData(editor *QWidget, model *QAbstractItemModel, index *QModelIndex) {

	C.QStyledItemDelegate_virtualbase_setModelData(unsafe.Pointer(this.h), editor.cPointer(), model.cPointer(), index.cPointer())

}
func (this *QStyledItemDelegate) OnSetModelData(slot func(super func(editor *QWidget, model *QAbstractItemModel, index *QModelIndex), editor *QWidget, model *QAbstractItemModel, index *QModelIndex)) {
	ok := C.QStyledItemDelegate_override_virtual_setModelData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_setModelData
func miqt_exec_callback_QStyledItemDelegate_setModelData(self *C.QStyledItemDelegate, cb C.intptr_t, editor *C.QWidget, model *C.QAbstractItemModel, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, model *QAbstractItemModel, index *QModelIndex), editor *QWidget, model *QAbstractItemModel, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := newQAbstractItemModel(model)

	slotval3 := newQModelIndex(index)

	gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_SetModelData, slotval1, slotval2, slotval3)

}

func (this *QStyledItemDelegate) callVirtualBase_UpdateEditorGeometry(editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex) {

	C.QStyledItemDelegate_virtualbase_updateEditorGeometry(unsafe.Pointer(this.h), editor.cPointer(), option.cPointer(), index.cPointer())

}
func (this *QStyledItemDelegate) OnUpdateEditorGeometry(slot func(super func(editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex), editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex)) {
	ok := C.QStyledItemDelegate_override_virtual_updateEditorGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_updateEditorGeometry
func miqt_exec_callback_QStyledItemDelegate_updateEditorGeometry(self *C.QStyledItemDelegate, cb C.intptr_t, editor *C.QWidget, option *C.QStyleOptionViewItem, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex), editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := newQStyleOptionViewItem(option)

	slotval3 := newQModelIndex(index)

	gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_UpdateEditorGeometry, slotval1, slotval2, slotval3)

}

func (this *QStyledItemDelegate) callVirtualBase_DisplayText(value *QVariant, locale *QLocale) string {

	var _ms C.struct_miqt_string = C.QStyledItemDelegate_virtualbase_displayText(unsafe.Pointer(this.h), value.cPointer(), locale.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QStyledItemDelegate) OnDisplayText(slot func(super func(value *QVariant, locale *QLocale) string, value *QVariant, locale *QLocale) string) {
	ok := C.QStyledItemDelegate_override_virtual_displayText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_displayText
func miqt_exec_callback_QStyledItemDelegate_displayText(self *C.QStyledItemDelegate, cb C.intptr_t, value *C.QVariant, locale *C.QLocale) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value *QVariant, locale *QLocale) string, value *QVariant, locale *QLocale) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(value)

	slotval2 := newQLocale(locale)

	virtualReturn := gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_DisplayText, slotval1, slotval2)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QStyledItemDelegate) callVirtualBase_InitStyleOption(option *QStyleOptionViewItem, index *QModelIndex) {

	C.QStyledItemDelegate_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer(), index.cPointer())

}
func (this *QStyledItemDelegate) OnInitStyleOption(slot func(super func(option *QStyleOptionViewItem, index *QModelIndex), option *QStyleOptionViewItem, index *QModelIndex)) {
	ok := C.QStyledItemDelegate_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_initStyleOption
func miqt_exec_callback_QStyledItemDelegate_initStyleOption(self *C.QStyledItemDelegate, cb C.intptr_t, option *C.QStyleOptionViewItem, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionViewItem, index *QModelIndex), option *QStyleOptionViewItem, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionViewItem(option)

	slotval2 := newQModelIndex(index)

	gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_InitStyleOption, slotval1, slotval2)

}

func (this *QStyledItemDelegate) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QStyledItemDelegate_virtualbase_eventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QStyledItemDelegate) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QStyledItemDelegate_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_eventFilter
func miqt_exec_callback_QStyledItemDelegate_eventFilter(self *C.QStyledItemDelegate, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QStyledItemDelegate) callVirtualBase_EditorEvent(event *QEvent, model *QAbstractItemModel, option *QStyleOptionViewItem, index *QModelIndex) bool {

	return (bool)(C.QStyledItemDelegate_virtualbase_editorEvent(unsafe.Pointer(this.h), event.cPointer(), model.cPointer(), option.cPointer(), index.cPointer()))

}
func (this *QStyledItemDelegate) OnEditorEvent(slot func(super func(event *QEvent, model *QAbstractItemModel, option *QStyleOptionViewItem, index *QModelIndex) bool, event *QEvent, model *QAbstractItemModel, option *QStyleOptionViewItem, index *QModelIndex) bool) {
	ok := C.QStyledItemDelegate_override_virtual_editorEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_editorEvent
func miqt_exec_callback_QStyledItemDelegate_editorEvent(self *C.QStyledItemDelegate, cb C.intptr_t, event *C.QEvent, model *C.QAbstractItemModel, option *C.QStyleOptionViewItem, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent, model *QAbstractItemModel, option *QStyleOptionViewItem, index *QModelIndex) bool, event *QEvent, model *QAbstractItemModel, option *QStyleOptionViewItem, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	slotval2 := newQAbstractItemModel(model)

	slotval3 := newQStyleOptionViewItem(option)

	slotval4 := newQModelIndex(index)

	virtualReturn := gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_EditorEvent, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QStyledItemDelegate) callVirtualBase_DestroyEditor(editor *QWidget, index *QModelIndex) {

	C.QStyledItemDelegate_virtualbase_destroyEditor(unsafe.Pointer(this.h), editor.cPointer(), index.cPointer())

}
func (this *QStyledItemDelegate) OnDestroyEditor(slot func(super func(editor *QWidget, index *QModelIndex), editor *QWidget, index *QModelIndex)) {
	ok := C.QStyledItemDelegate_override_virtual_destroyEditor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_destroyEditor
func miqt_exec_callback_QStyledItemDelegate_destroyEditor(self *C.QStyledItemDelegate, cb C.intptr_t, editor *C.QWidget, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(editor *QWidget, index *QModelIndex), editor *QWidget, index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(editor)

	slotval2 := newQModelIndex(index)

	gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_DestroyEditor, slotval1, slotval2)

}

func (this *QStyledItemDelegate) callVirtualBase_HelpEvent(event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool {

	return (bool)(C.QStyledItemDelegate_virtualbase_helpEvent(unsafe.Pointer(this.h), event.cPointer(), view.cPointer(), option.cPointer(), index.cPointer()))

}
func (this *QStyledItemDelegate) OnHelpEvent(slot func(super func(event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool, event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool) {
	ok := C.QStyledItemDelegate_override_virtual_helpEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_helpEvent
func miqt_exec_callback_QStyledItemDelegate_helpEvent(self *C.QStyledItemDelegate, cb C.intptr_t, event *C.QHelpEvent, view *C.QAbstractItemView, option *C.QStyleOptionViewItem, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool, event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHelpEvent(event)

	slotval2 := newQAbstractItemView(view)

	slotval3 := newQStyleOptionViewItem(option)

	slotval4 := newQModelIndex(index)

	virtualReturn := gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_HelpEvent, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QStyledItemDelegate) callVirtualBase_PaintingRoles() []int {

	var _ma C.struct_miqt_array = C.QStyledItemDelegate_virtualbase_paintingRoles(unsafe.Pointer(this.h))
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret

}
func (this *QStyledItemDelegate) OnPaintingRoles(slot func(super func() []int) []int) {
	ok := C.QStyledItemDelegate_override_virtual_paintingRoles(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_paintingRoles
func miqt_exec_callback_QStyledItemDelegate_paintingRoles(self *C.QStyledItemDelegate, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []int) []int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_PaintingRoles)
	virtualReturn_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = (C.int)(virtualReturn[i])
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QStyledItemDelegate) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QStyledItemDelegate_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QStyledItemDelegate) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QStyledItemDelegate_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_event
func miqt_exec_callback_QStyledItemDelegate_event(self *C.QStyledItemDelegate, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QStyledItemDelegate) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QStyledItemDelegate_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStyledItemDelegate) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QStyledItemDelegate_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_timerEvent
func miqt_exec_callback_QStyledItemDelegate_timerEvent(self *C.QStyledItemDelegate, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QStyledItemDelegate) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QStyledItemDelegate_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStyledItemDelegate) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QStyledItemDelegate_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_childEvent
func miqt_exec_callback_QStyledItemDelegate_childEvent(self *C.QStyledItemDelegate, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QStyledItemDelegate) callVirtualBase_CustomEvent(event *QEvent) {

	C.QStyledItemDelegate_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStyledItemDelegate) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QStyledItemDelegate_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_customEvent
func miqt_exec_callback_QStyledItemDelegate_customEvent(self *C.QStyledItemDelegate, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QStyledItemDelegate) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QStyledItemDelegate_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QStyledItemDelegate) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QStyledItemDelegate_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_connectNotify
func miqt_exec_callback_QStyledItemDelegate_connectNotify(self *C.QStyledItemDelegate, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QStyledItemDelegate) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QStyledItemDelegate_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QStyledItemDelegate) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QStyledItemDelegate_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStyledItemDelegate_disconnectNotify
func miqt_exec_callback_QStyledItemDelegate_disconnectNotify(self *C.QStyledItemDelegate, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QStyledItemDelegate{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QStyledItemDelegate) Delete() {
	C.QStyledItemDelegate_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyledItemDelegate) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyledItemDelegate) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
