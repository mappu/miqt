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
	ret := C.QUndoView_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QUndoView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoView_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUndoView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoView_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUndoView) Stack() *QUndoStack {
	ret := C.QUndoView_Stack(this.h)
	return newQUndoStack_U(unsafe.Pointer(ret))
}

func (this *QUndoView) Group() *QUndoGroup {
	ret := C.QUndoView_Group(this.h)
	return newQUndoGroup_U(unsafe.Pointer(ret))
}

func (this *QUndoView) SetEmptyLabel(label string) {
	label_Cstring := C.CString(label)
	defer C.free(unsafe.Pointer(label_Cstring))
	C.QUndoView_SetEmptyLabel(this.h, label_Cstring, C.size_t(len(label)))
}

func (this *QUndoView) EmptyLabel() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoView_EmptyLabel(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUndoView) SetCleanIcon(icon *QIcon) {
	C.QUndoView_SetCleanIcon(this.h, icon.cPointer())
}

func (this *QUndoView) CleanIcon() *QIcon {
	ret := C.QUndoView_CleanIcon(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
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
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoView_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUndoView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoView_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUndoView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoView_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUndoView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUndoView) Delete() {
	C.QUndoView_Delete(this.h)
}
