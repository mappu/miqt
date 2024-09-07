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
	QAbstractItemDelegate__EndEditHint__NoHint           QAbstractItemDelegate__EndEditHint = 0
	QAbstractItemDelegate__EndEditHint__EditNextItem     QAbstractItemDelegate__EndEditHint = 1
	QAbstractItemDelegate__EndEditHint__EditPreviousItem QAbstractItemDelegate__EndEditHint = 2
	QAbstractItemDelegate__EndEditHint__SubmitModelCache QAbstractItemDelegate__EndEditHint = 3
	QAbstractItemDelegate__EndEditHint__RevertModelCache QAbstractItemDelegate__EndEditHint = 4
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
	ret := C.QAbstractItemDelegate_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QAbstractItemDelegate_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemDelegate_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractItemDelegate_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemDelegate_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractItemDelegate) Paint(painter *QPainter, option *QStyleOptionViewItem, index *QModelIndex) {
	C.QAbstractItemDelegate_Paint(this.h, painter.cPointer(), option.cPointer(), index.cPointer())
}

func (this *QAbstractItemDelegate) SizeHint(option *QStyleOptionViewItem, index *QModelIndex) *QSize {
	ret := C.QAbstractItemDelegate_SizeHint(this.h, option.cPointer(), index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QAbstractItemDelegate) CreateEditor(parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget {
	ret := C.QAbstractItemDelegate_CreateEditor(this.h, parent.cPointer(), option.cPointer(), index.cPointer())
	return newQWidget_U(unsafe.Pointer(ret))
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
	ret := C.QAbstractItemDelegate_EditorEvent(this.h, event.cPointer(), model.cPointer(), option.cPointer(), index.cPointer())
	return (bool)(ret)
}

func QAbstractItemDelegate_ElidedText(fontMetrics *QFontMetrics, width int, mode TextElideMode, text string) string {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemDelegate_ElidedText(fontMetrics.cPointer(), (C.int)(width), (C.uintptr_t)(mode), text_Cstring, C.size_t(len(text)), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractItemDelegate) HelpEvent(event *QHelpEvent, view *QAbstractItemView, option *QStyleOptionViewItem, index *QModelIndex) bool {
	ret := C.QAbstractItemDelegate_HelpEvent(this.h, event.cPointer(), view.cPointer(), option.cPointer(), index.cPointer())
	return (bool)(ret)
}

func (this *QAbstractItemDelegate) PaintingRoles() []int {
	var _out *C.int = nil
	var _out_len C.size_t = 0
	C.QAbstractItemDelegate_PaintingRoles(this.h, &_out, &_out_len)
	ret := make([]int, int(_out_len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractItemDelegate) CommitData(editor *QWidget) {
	C.QAbstractItemDelegate_CommitData(this.h, editor.cPointer())
}

func (this *QAbstractItemDelegate) OnCommitData(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractItemDelegate_connect_CommitData(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractItemDelegate) CloseEditor(editor *QWidget) {
	C.QAbstractItemDelegate_CloseEditor(this.h, editor.cPointer())
}

func (this *QAbstractItemDelegate) OnCloseEditor(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractItemDelegate_connect_CloseEditor(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractItemDelegate) SizeHintChanged(param1 *QModelIndex) {
	C.QAbstractItemDelegate_SizeHintChanged(this.h, param1.cPointer())
}

func (this *QAbstractItemDelegate) OnSizeHintChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractItemDelegate_connect_SizeHintChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QAbstractItemDelegate_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemDelegate_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractItemDelegate_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemDelegate_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractItemDelegate_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemDelegate_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QAbstractItemDelegate_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QAbstractItemDelegate_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QAbstractItemDelegate) CloseEditor2(editor *QWidget, hint QAbstractItemDelegate__EndEditHint) {
	C.QAbstractItemDelegate_CloseEditor2(this.h, editor.cPointer(), (C.uintptr_t)(hint))
}

func (this *QAbstractItemDelegate) OnCloseEditor2(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QAbstractItemDelegate_connect_CloseEditor2(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QAbstractItemDelegate) Delete() {
	C.QAbstractItemDelegate_Delete(this.h)
}
