package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qcolumnview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QColumnView struct {
	h *C.QColumnView
	*QAbstractItemView
}

func (this *QColumnView) cPointer() *C.QColumnView {
	if this == nil {
		return nil
	}
	return this.h
}

func newQColumnView(h *C.QColumnView) *QColumnView {
	return &QColumnView{h: h, QAbstractItemView: newQAbstractItemView_U(unsafe.Pointer(h))}
}

func newQColumnView_U(h unsafe.Pointer) *QColumnView {
	return newQColumnView((*C.QColumnView)(h))
}

// NewQColumnView constructs a new QColumnView object.
func NewQColumnView() *QColumnView {
	ret := C.QColumnView_new()
	return newQColumnView(ret)
}

// NewQColumnView2 constructs a new QColumnView object.
func NewQColumnView2(parent *QWidget) *QColumnView {
	ret := C.QColumnView_new2(parent.cPointer())
	return newQColumnView(ret)
}

func (this *QColumnView) MetaObject() *QMetaObject {
	ret := C.QColumnView_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QColumnView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QColumnView_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QColumnView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QColumnView_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QColumnView) UpdatePreviewWidget(index *QModelIndex) {
	C.QColumnView_UpdatePreviewWidget(this.h, index.cPointer())
}

func (this *QColumnView) OnUpdatePreviewWidget(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QColumnView_connect_UpdatePreviewWidget(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QColumnView) IndexAt(point *QPoint) *QModelIndex {
	ret := C.QColumnView_IndexAt(this.h, point.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQModelIndex(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QModelIndex) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColumnView) ScrollTo(index *QModelIndex) {
	C.QColumnView_ScrollTo(this.h, index.cPointer())
}

func (this *QColumnView) SizeHint() *QSize {
	ret := C.QColumnView_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColumnView) VisualRect(index *QModelIndex) *QRect {
	ret := C.QColumnView_VisualRect(this.h, index.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QColumnView) SetModel(model *QAbstractItemModel) {
	C.QColumnView_SetModel(this.h, model.cPointer())
}

func (this *QColumnView) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QColumnView_SetSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QColumnView) SetRootIndex(index *QModelIndex) {
	C.QColumnView_SetRootIndex(this.h, index.cPointer())
}

func (this *QColumnView) SelectAll() {
	C.QColumnView_SelectAll(this.h)
}

func (this *QColumnView) SetResizeGripsVisible(visible bool) {
	C.QColumnView_SetResizeGripsVisible(this.h, (C.bool)(visible))
}

func (this *QColumnView) ResizeGripsVisible() bool {
	ret := C.QColumnView_ResizeGripsVisible(this.h)
	return (bool)(ret)
}

func (this *QColumnView) PreviewWidget() *QWidget {
	ret := C.QColumnView_PreviewWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QColumnView) SetPreviewWidget(widget *QWidget) {
	C.QColumnView_SetPreviewWidget(this.h, widget.cPointer())
}

func (this *QColumnView) SetColumnWidths(list []int) {
	// For the C ABI, malloc a C array of raw pointers
	list_CArray := (*[0xffff]C.int)(C.malloc(C.ulong(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_CArray[i] = (C.int)(list[i])
	}
	C.QColumnView_SetColumnWidths(this.h, &list_CArray[0], C.ulong(len(list)))
}

func (this *QColumnView) ColumnWidths() []int {
	var _out *C.int = nil
	var _out_len C.size_t = 0
	C.QColumnView_ColumnWidths(this.h, &_out, &_out_len)
	ret := make([]int, int(_out_len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QColumnView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QColumnView_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QColumnView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QColumnView_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QColumnView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QColumnView_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QColumnView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QColumnView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QColumnView) ScrollTo2(index *QModelIndex, hint uintptr) {
	C.QColumnView_ScrollTo2(this.h, index.cPointer(), (C.uintptr_t)(hint))
}

func (this *QColumnView) Delete() {
	C.QColumnView_Delete(this.h)
}
