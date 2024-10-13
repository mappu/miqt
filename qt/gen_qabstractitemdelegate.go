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

func newQAbstractItemDelegate(h *C.QAbstractItemDelegate) *QAbstractItemDelegate {
	if h == nil {
		return nil
	}
	return &QAbstractItemDelegate{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQAbstractItemDelegate_U(h unsafe.Pointer) *QAbstractItemDelegate {
	return newQAbstractItemDelegate((*C.QAbstractItemDelegate)(h))
}

func (this *QAbstractItemDelegate) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QAbstractItemDelegate_MetaObject(this.h)))
}

func (this *QAbstractItemDelegate) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QAbstractItemDelegate_Metacast(this.h, param1_Cstring)
}

func QAbstractItemDelegate_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractItemDelegate_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractItemDelegate_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractItemDelegate_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	return newQWidget_U(unsafe.Pointer(C.QAbstractItemDelegate_CreateEditor(this.h, parent.cPointer(), option.cPointer(), index.cPointer())))
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
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	var _ms *C.struct_miqt_string = C.QAbstractItemDelegate_ElidedText(fontMetrics.cPointer(), (C.int)(width), (C.int)(mode), (*C.struct_miqt_string)(text_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QAbstractItemDelegate) HelpEvent(event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool {
	return (bool)(C.QAbstractItemDelegate_HelpEvent(this.h, event.cPointer(), view.cPointer(), option.cPointer(), index.cPointer()))
}

func (this *QAbstractItemDelegate) PaintingRoles() []int {
	var _ma *C.struct_miqt_array = C.QAbstractItemDelegate_PaintingRoles(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
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
	slotval1 := newQWidget_U(unsafe.Pointer(editor))

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
	slotval1 := newQWidget_U(unsafe.Pointer(editor))

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
	slotval1 := newQModelIndex_U(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func QAbstractItemDelegate_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractItemDelegate_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractItemDelegate_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractItemDelegate_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractItemDelegate_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractItemDelegate_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QAbstractItemDelegate_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QAbstractItemDelegate_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	slotval1 := newQWidget_U(unsafe.Pointer(editor))
	slotval2 := (QAbstractItemDelegate__EndEditHint)(hint)

	gofunc(slotval1, slotval2)
}

// Delete this object from C++ memory.
func (this *QAbstractItemDelegate) Delete() {
	C.QAbstractItemDelegate_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractItemDelegate) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractItemDelegate) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
