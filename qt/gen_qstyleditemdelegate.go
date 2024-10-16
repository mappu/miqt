package qt

/*

#include "gen_qstyleditemdelegate.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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

func newQStyledItemDelegate(h *C.QStyledItemDelegate) *QStyledItemDelegate {
	if h == nil {
		return nil
	}
	return &QStyledItemDelegate{h: h, QAbstractItemDelegate: UnsafeNewQAbstractItemDelegate(unsafe.Pointer(h))}
}

func UnsafeNewQStyledItemDelegate(h unsafe.Pointer) *QStyledItemDelegate {
	return newQStyledItemDelegate((*C.QStyledItemDelegate)(h))
}

// NewQStyledItemDelegate constructs a new QStyledItemDelegate object.
func NewQStyledItemDelegate() *QStyledItemDelegate {
	ret := C.QStyledItemDelegate_new()
	return newQStyledItemDelegate(ret)
}

// NewQStyledItemDelegate2 constructs a new QStyledItemDelegate object.
func NewQStyledItemDelegate2(parent *QObject) *QStyledItemDelegate {
	ret := C.QStyledItemDelegate_new2(parent.cPointer())
	return newQStyledItemDelegate(ret)
}

func (this *QStyledItemDelegate) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QStyledItemDelegate_MetaObject(this.h)))
}

func (this *QStyledItemDelegate) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QStyledItemDelegate_Metacast(this.h, param1_Cstring)
}

func QStyledItemDelegate_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QStyledItemDelegate_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStyledItemDelegate_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QStyledItemDelegate_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QStyledItemDelegate) Paint(painter *QPainter, option *QStyleOptionViewItem, index *QModelIndex) {
	C.QStyledItemDelegate_Paint(this.h, painter.cPointer(), option.cPointer(), index.cPointer())
}

func (this *QStyledItemDelegate) SizeHint(option *QStyleOptionViewItem, index *QModelIndex) *QSize {
	_ret := C.QStyledItemDelegate_SizeHint(this.h, option.cPointer(), index.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStyledItemDelegate) CreateEditor(parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QStyledItemDelegate_CreateEditor(this.h, parent.cPointer(), option.cPointer(), index.cPointer())))
}

func (this *QStyledItemDelegate) SetEditorData(editor *QWidget, index *QModelIndex) {
	C.QStyledItemDelegate_SetEditorData(this.h, editor.cPointer(), index.cPointer())
}

func (this *QStyledItemDelegate) SetModelData(editor *QWidget, model *QAbstractItemModel, index *QModelIndex) {
	C.QStyledItemDelegate_SetModelData(this.h, editor.cPointer(), model.cPointer(), index.cPointer())
}

func (this *QStyledItemDelegate) UpdateEditorGeometry(editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex) {
	C.QStyledItemDelegate_UpdateEditorGeometry(this.h, editor.cPointer(), option.cPointer(), index.cPointer())
}

func (this *QStyledItemDelegate) ItemEditorFactory() *QItemEditorFactory {
	return UnsafeNewQItemEditorFactory(unsafe.Pointer(C.QStyledItemDelegate_ItemEditorFactory(this.h)))
}

func (this *QStyledItemDelegate) SetItemEditorFactory(factory *QItemEditorFactory) {
	C.QStyledItemDelegate_SetItemEditorFactory(this.h, factory.cPointer())
}

func (this *QStyledItemDelegate) DisplayText(value *QVariant, locale *QLocale) string {
	var _ms *C.struct_miqt_string = C.QStyledItemDelegate_DisplayText(this.h, value.cPointer(), locale.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStyledItemDelegate_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStyledItemDelegate_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStyledItemDelegate_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStyledItemDelegate_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStyledItemDelegate_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStyledItemDelegate_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QStyledItemDelegate_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QStyledItemDelegate_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QStyledItemDelegate) Delete() {
	C.QStyledItemDelegate_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStyledItemDelegate) GoGC() {
	runtime.SetFinalizer(this, func(this *QStyledItemDelegate) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
