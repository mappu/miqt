package qt

/*

#include "gen_qundoview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QUndoView struct {
	h *C.QUndoView
	*QListView
}

func (this *QUndoView) cPointer() *C.QUndoView {
	if this == nil {
		return nil
	}
	return this.h
}

func newQUndoView(h *C.QUndoView) *QUndoView {
	if h == nil {
		return nil
	}
	return &QUndoView{h: h, QListView: newQListView_U(unsafe.Pointer(h))}
}

func newQUndoView_U(h unsafe.Pointer) *QUndoView {
	return newQUndoView((*C.QUndoView)(h))
}

// NewQUndoView constructs a new QUndoView object.
func NewQUndoView() *QUndoView {
	ret := C.QUndoView_new()
	return newQUndoView(ret)
}

// NewQUndoView2 constructs a new QUndoView object.
func NewQUndoView2(stack *QUndoStack) *QUndoView {
	ret := C.QUndoView_new2(stack.cPointer())
	return newQUndoView(ret)
}

// NewQUndoView3 constructs a new QUndoView object.
func NewQUndoView3(group *QUndoGroup) *QUndoView {
	ret := C.QUndoView_new3(group.cPointer())
	return newQUndoView(ret)
}

// NewQUndoView4 constructs a new QUndoView object.
func NewQUndoView4(parent *QWidget) *QUndoView {
	ret := C.QUndoView_new4(parent.cPointer())
	return newQUndoView(ret)
}

// NewQUndoView5 constructs a new QUndoView object.
func NewQUndoView5(stack *QUndoStack, parent *QWidget) *QUndoView {
	ret := C.QUndoView_new5(stack.cPointer(), parent.cPointer())
	return newQUndoView(ret)
}

// NewQUndoView6 constructs a new QUndoView object.
func NewQUndoView6(group *QUndoGroup, parent *QWidget) *QUndoView {
	ret := C.QUndoView_new6(group.cPointer(), parent.cPointer())
	return newQUndoView(ret)
}

func (this *QUndoView) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QUndoView_MetaObject(this.h)))
}

func (this *QUndoView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QUndoView_Metacast(this.h, param1_Cstring)
}

func QUndoView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QUndoView_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QUndoView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QUndoView_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QUndoView) Stack() *QUndoStack {
	return newQUndoStack_U(unsafe.Pointer(C.QUndoView_Stack(this.h)))
}

func (this *QUndoView) Group() *QUndoGroup {
	return newQUndoGroup_U(unsafe.Pointer(C.QUndoView_Group(this.h)))
}

func (this *QUndoView) SetEmptyLabel(label string) {
	label_ms := miqt_strdupg(label)
	defer C.free(label_ms)
	C.QUndoView_SetEmptyLabel(this.h, (*C.struct_miqt_string)(label_ms))
}

func (this *QUndoView) EmptyLabel() string {
	var _ms *C.struct_miqt_string = C.QUndoView_EmptyLabel(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QUndoView) SetCleanIcon(icon *QIcon) {
	C.QUndoView_SetCleanIcon(this.h, icon.cPointer())
}

func (this *QUndoView) CleanIcon() *QIcon {
	_ret := C.QUndoView_CleanIcon(this.h)
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUndoView) SetStack(stack *QUndoStack) {
	C.QUndoView_SetStack(this.h, stack.cPointer())
}

func (this *QUndoView) SetGroup(group *QUndoGroup) {
	C.QUndoView_SetGroup(this.h, group.cPointer())
}

func QUndoView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QUndoView_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QUndoView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QUndoView_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QUndoView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QUndoView_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QUndoView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QUndoView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QUndoView) Delete() {
	C.QUndoView_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUndoView) GoGC() {
	runtime.SetFinalizer(this, func(this *QUndoView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
