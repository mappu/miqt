package qt

/*

#include "gen_qitemdelegate.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QItemDelegate struct {
	h *C.QItemDelegate
	*QAbstractItemDelegate
}

func (this *QItemDelegate) cPointer() *C.QItemDelegate {
	if this == nil {
		return nil
	}
	return this.h
}

func newQItemDelegate(h *C.QItemDelegate) *QItemDelegate {
	if h == nil {
		return nil
	}
	return &QItemDelegate{h: h, QAbstractItemDelegate: newQAbstractItemDelegate_U(unsafe.Pointer(h))}
}

func newQItemDelegate_U(h unsafe.Pointer) *QItemDelegate {
	return newQItemDelegate((*C.QItemDelegate)(h))
}

// NewQItemDelegate constructs a new QItemDelegate object.
func NewQItemDelegate() *QItemDelegate {
	ret := C.QItemDelegate_new()
	return newQItemDelegate(ret)
}

// NewQItemDelegate2 constructs a new QItemDelegate object.
func NewQItemDelegate2(parent *QObject) *QItemDelegate {
	ret := C.QItemDelegate_new2(parent.cPointer())
	return newQItemDelegate(ret)
}

func (this *QItemDelegate) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QItemDelegate_MetaObject(this.h)))
}

func QItemDelegate_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QItemDelegate_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QItemDelegate_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QItemDelegate_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QItemDelegate) HasClipping() bool {
	return (bool)(C.QItemDelegate_HasClipping(this.h))
}

func (this *QItemDelegate) SetClipping(clip bool) {
	C.QItemDelegate_SetClipping(this.h, (C.bool)(clip))
}

func (this *QItemDelegate) Paint(painter *QPainter, option *QStyleOptionViewItem, index *QModelIndex) {
	C.QItemDelegate_Paint(this.h, painter.cPointer(), option.cPointer(), index.cPointer())
}

func (this *QItemDelegate) SizeHint(option *QStyleOptionViewItem, index *QModelIndex) *QSize {
	_ret := C.QItemDelegate_SizeHint(this.h, option.cPointer(), index.cPointer())
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QItemDelegate) CreateEditor(parent *QWidget, option *QStyleOptionViewItem, index *QModelIndex) *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QItemDelegate_CreateEditor(this.h, parent.cPointer(), option.cPointer(), index.cPointer())))
}

func (this *QItemDelegate) SetEditorData(editor *QWidget, index *QModelIndex) {
	C.QItemDelegate_SetEditorData(this.h, editor.cPointer(), index.cPointer())
}

func (this *QItemDelegate) SetModelData(editor *QWidget, model *QAbstractItemModel, index *QModelIndex) {
	C.QItemDelegate_SetModelData(this.h, editor.cPointer(), model.cPointer(), index.cPointer())
}

func (this *QItemDelegate) UpdateEditorGeometry(editor *QWidget, option *QStyleOptionViewItem, index *QModelIndex) {
	C.QItemDelegate_UpdateEditorGeometry(this.h, editor.cPointer(), option.cPointer(), index.cPointer())
}

func (this *QItemDelegate) ItemEditorFactory() *QItemEditorFactory {
	return newQItemEditorFactory_U(unsafe.Pointer(C.QItemDelegate_ItemEditorFactory(this.h)))
}

func (this *QItemDelegate) SetItemEditorFactory(factory *QItemEditorFactory) {
	C.QItemDelegate_SetItemEditorFactory(this.h, factory.cPointer())
}

func QItemDelegate_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QItemDelegate_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QItemDelegate_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QItemDelegate_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QItemDelegate_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QItemDelegate_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QItemDelegate_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QItemDelegate_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QItemDelegate) Delete() {
	C.QItemDelegate_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QItemDelegate) GoGC() {
	runtime.SetFinalizer(this, func(this *QItemDelegate) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
