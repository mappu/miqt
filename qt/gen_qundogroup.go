package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qundogroup.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime/cgo"
	"unsafe"
)

type QUndoGroup struct {
	h *C.QUndoGroup
	*QObject
}

func (this *QUndoGroup) cPointer() *C.QUndoGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func newQUndoGroup(h *C.QUndoGroup) *QUndoGroup {
	if h == nil {
		return nil
	}
	return &QUndoGroup{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQUndoGroup_U(h unsafe.Pointer) *QUndoGroup {
	return newQUndoGroup((*C.QUndoGroup)(h))
}

// NewQUndoGroup constructs a new QUndoGroup object.
func NewQUndoGroup() *QUndoGroup {
	ret := C.QUndoGroup_new()
	return newQUndoGroup(ret)
}

// NewQUndoGroup2 constructs a new QUndoGroup object.
func NewQUndoGroup2(parent *QObject) *QUndoGroup {
	ret := C.QUndoGroup_new2(parent.cPointer())
	return newQUndoGroup(ret)
}

func (this *QUndoGroup) MetaObject() *QMetaObject {
	ret := C.QUndoGroup_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QUndoGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoGroup_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUndoGroup_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoGroup_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUndoGroup) AddStack(stack *QUndoStack) {
	C.QUndoGroup_AddStack(this.h, stack.cPointer())
}

func (this *QUndoGroup) RemoveStack(stack *QUndoStack) {
	C.QUndoGroup_RemoveStack(this.h, stack.cPointer())
}

func (this *QUndoGroup) Stacks() []*QUndoStack {
	var _out **C.QUndoStack = nil
	var _out_len C.size_t = 0
	C.QUndoGroup_Stacks(this.h, &_out, &_out_len)
	ret := make([]*QUndoStack, int(_out_len))
	_outCast := (*[0xffff]*C.QUndoStack)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQUndoStack(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUndoGroup) ActiveStack() *QUndoStack {
	ret := C.QUndoGroup_ActiveStack(this.h)
	return newQUndoStack_U(unsafe.Pointer(ret))
}

func (this *QUndoGroup) CreateUndoAction(parent *QObject) *QAction {
	ret := C.QUndoGroup_CreateUndoAction(this.h, parent.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QUndoGroup) CreateRedoAction(parent *QObject) *QAction {
	ret := C.QUndoGroup_CreateRedoAction(this.h, parent.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QUndoGroup) CanUndo() bool {
	ret := C.QUndoGroup_CanUndo(this.h)
	return (bool)(ret)
}

func (this *QUndoGroup) CanRedo() bool {
	ret := C.QUndoGroup_CanRedo(this.h)
	return (bool)(ret)
}

func (this *QUndoGroup) UndoText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoGroup_UndoText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUndoGroup) RedoText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoGroup_RedoText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUndoGroup) IsClean() bool {
	ret := C.QUndoGroup_IsClean(this.h)
	return (bool)(ret)
}

func (this *QUndoGroup) Undo() {
	C.QUndoGroup_Undo(this.h)
}

func (this *QUndoGroup) Redo() {
	C.QUndoGroup_Redo(this.h)
}

func (this *QUndoGroup) SetActiveStack(stack *QUndoStack) {
	C.QUndoGroup_SetActiveStack(this.h, stack.cPointer())
}

func (this *QUndoGroup) ActiveStackChanged(stack *QUndoStack) {
	C.QUndoGroup_ActiveStackChanged(this.h, stack.cPointer())
}

func (this *QUndoGroup) OnActiveStackChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QUndoGroup_connect_ActiveStackChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QUndoGroup) IndexChanged(idx int) {
	C.QUndoGroup_IndexChanged(this.h, (C.int)(idx))
}

func (this *QUndoGroup) OnIndexChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QUndoGroup_connect_IndexChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QUndoGroup) CleanChanged(clean bool) {
	C.QUndoGroup_CleanChanged(this.h, (C.bool)(clean))
}

func (this *QUndoGroup) OnCleanChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QUndoGroup_connect_CleanChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QUndoGroup) CanUndoChanged(canUndo bool) {
	C.QUndoGroup_CanUndoChanged(this.h, (C.bool)(canUndo))
}

func (this *QUndoGroup) OnCanUndoChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QUndoGroup_connect_CanUndoChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QUndoGroup) CanRedoChanged(canRedo bool) {
	C.QUndoGroup_CanRedoChanged(this.h, (C.bool)(canRedo))
}

func (this *QUndoGroup) OnCanRedoChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QUndoGroup_connect_CanRedoChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QUndoGroup) UndoTextChanged(undoText string) {
	undoText_Cstring := C.CString(undoText)
	defer C.free(unsafe.Pointer(undoText_Cstring))
	C.QUndoGroup_UndoTextChanged(this.h, undoText_Cstring, C.ulong(len(undoText)))
}

func (this *QUndoGroup) OnUndoTextChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QUndoGroup_connect_UndoTextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QUndoGroup) RedoTextChanged(redoText string) {
	redoText_Cstring := C.CString(redoText)
	defer C.free(unsafe.Pointer(redoText_Cstring))
	C.QUndoGroup_RedoTextChanged(this.h, redoText_Cstring, C.ulong(len(redoText)))
}

func (this *QUndoGroup) OnRedoTextChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QUndoGroup_connect_RedoTextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QUndoGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoGroup_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUndoGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUndoGroup_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoGroup_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUndoGroup_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoGroup_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUndoGroup) CreateUndoAction2(parent *QObject, prefix string) *QAction {
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	ret := C.QUndoGroup_CreateUndoAction2(this.h, parent.cPointer(), prefix_Cstring, C.ulong(len(prefix)))
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QUndoGroup) CreateRedoAction2(parent *QObject, prefix string) *QAction {
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	ret := C.QUndoGroup_CreateRedoAction2(this.h, parent.cPointer(), prefix_Cstring, C.ulong(len(prefix)))
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QUndoGroup) Delete() {
	C.QUndoGroup_Delete(this.h)
}
