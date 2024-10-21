package qt6

/*

#include "gen_qundogroup.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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

func (this *QUndoGroup) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQUndoGroup(h *C.QUndoGroup) *QUndoGroup {
	if h == nil {
		return nil
	}
	return &QUndoGroup{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQUndoGroup(h unsafe.Pointer) *QUndoGroup {
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
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QUndoGroup_MetaObject(this.h)))
}

func (this *QUndoGroup) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QUndoGroup_Metacast(this.h, param1_Cstring))
}

func QUndoGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QUndoGroup_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoGroup) AddStack(stack *QUndoStack) {
	C.QUndoGroup_AddStack(this.h, stack.cPointer())
}

func (this *QUndoGroup) RemoveStack(stack *QUndoStack) {
	C.QUndoGroup_RemoveStack(this.h, stack.cPointer())
}

func (this *QUndoGroup) Stacks() []*QUndoStack {
	var _ma *C.struct_miqt_array = C.QUndoGroup_Stacks(this.h)
	_ret := make([]*QUndoStack, int(_ma.len))
	_outCast := (*[0xffff]*C.QUndoStack)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQUndoStack(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QUndoGroup) ActiveStack() *QUndoStack {
	return UnsafeNewQUndoStack(unsafe.Pointer(C.QUndoGroup_ActiveStack(this.h)))
}

func (this *QUndoGroup) CreateUndoAction(parent *QObject) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QUndoGroup_CreateUndoAction(this.h, parent.cPointer())))
}

func (this *QUndoGroup) CreateRedoAction(parent *QObject) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QUndoGroup_CreateRedoAction(this.h, parent.cPointer())))
}

func (this *QUndoGroup) CanUndo() bool {
	return (bool)(C.QUndoGroup_CanUndo(this.h))
}

func (this *QUndoGroup) CanRedo() bool {
	return (bool)(C.QUndoGroup_CanRedo(this.h))
}

func (this *QUndoGroup) UndoText() string {
	var _ms C.struct_miqt_string = C.QUndoGroup_UndoText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoGroup) RedoText() string {
	var _ms C.struct_miqt_string = C.QUndoGroup_RedoText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoGroup) IsClean() bool {
	return (bool)(C.QUndoGroup_IsClean(this.h))
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
func (this *QUndoGroup) OnActiveStackChanged(slot func(stack *QUndoStack)) {
	C.QUndoGroup_connect_ActiveStackChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoGroup_ActiveStackChanged
func miqt_exec_callback_QUndoGroup_ActiveStackChanged(cb C.intptr_t, stack *C.QUndoStack) {
	gofunc, ok := cgo.Handle(cb).Value().(func(stack *QUndoStack))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQUndoStack(unsafe.Pointer(stack))

	gofunc(slotval1)
}

func (this *QUndoGroup) IndexChanged(idx int) {
	C.QUndoGroup_IndexChanged(this.h, (C.int)(idx))
}
func (this *QUndoGroup) OnIndexChanged(slot func(idx int)) {
	C.QUndoGroup_connect_IndexChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoGroup_IndexChanged
func miqt_exec_callback_QUndoGroup_IndexChanged(cb C.intptr_t, idx C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(idx int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(idx)

	gofunc(slotval1)
}

func (this *QUndoGroup) CleanChanged(clean bool) {
	C.QUndoGroup_CleanChanged(this.h, (C.bool)(clean))
}
func (this *QUndoGroup) OnCleanChanged(slot func(clean bool)) {
	C.QUndoGroup_connect_CleanChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoGroup_CleanChanged
func miqt_exec_callback_QUndoGroup_CleanChanged(cb C.intptr_t, clean C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(clean bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(clean)

	gofunc(slotval1)
}

func (this *QUndoGroup) CanUndoChanged(canUndo bool) {
	C.QUndoGroup_CanUndoChanged(this.h, (C.bool)(canUndo))
}
func (this *QUndoGroup) OnCanUndoChanged(slot func(canUndo bool)) {
	C.QUndoGroup_connect_CanUndoChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoGroup_CanUndoChanged
func miqt_exec_callback_QUndoGroup_CanUndoChanged(cb C.intptr_t, canUndo C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(canUndo bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(canUndo)

	gofunc(slotval1)
}

func (this *QUndoGroup) CanRedoChanged(canRedo bool) {
	C.QUndoGroup_CanRedoChanged(this.h, (C.bool)(canRedo))
}
func (this *QUndoGroup) OnCanRedoChanged(slot func(canRedo bool)) {
	C.QUndoGroup_connect_CanRedoChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoGroup_CanRedoChanged
func miqt_exec_callback_QUndoGroup_CanRedoChanged(cb C.intptr_t, canRedo C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(canRedo bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(canRedo)

	gofunc(slotval1)
}

func (this *QUndoGroup) UndoTextChanged(undoText string) {
	undoText_ms := C.struct_miqt_string{}
	undoText_ms.data = C.CString(undoText)
	undoText_ms.len = C.size_t(len(undoText))
	defer C.free(unsafe.Pointer(undoText_ms.data))
	C.QUndoGroup_UndoTextChanged(this.h, undoText_ms)
}
func (this *QUndoGroup) OnUndoTextChanged(slot func(undoText string)) {
	C.QUndoGroup_connect_UndoTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoGroup_UndoTextChanged
func miqt_exec_callback_QUndoGroup_UndoTextChanged(cb C.intptr_t, undoText C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(undoText string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var undoText_ms C.struct_miqt_string = undoText
	undoText_ret := C.GoStringN(undoText_ms.data, C.int(int64(undoText_ms.len)))
	C.free(unsafe.Pointer(undoText_ms.data))
	slotval1 := undoText_ret

	gofunc(slotval1)
}

func (this *QUndoGroup) RedoTextChanged(redoText string) {
	redoText_ms := C.struct_miqt_string{}
	redoText_ms.data = C.CString(redoText)
	redoText_ms.len = C.size_t(len(redoText))
	defer C.free(unsafe.Pointer(redoText_ms.data))
	C.QUndoGroup_RedoTextChanged(this.h, redoText_ms)
}
func (this *QUndoGroup) OnRedoTextChanged(slot func(redoText string)) {
	C.QUndoGroup_connect_RedoTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoGroup_RedoTextChanged
func miqt_exec_callback_QUndoGroup_RedoTextChanged(cb C.intptr_t, redoText C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(redoText string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var redoText_ms C.struct_miqt_string = redoText
	redoText_ret := C.GoStringN(redoText_ms.data, C.int(int64(redoText_ms.len)))
	C.free(unsafe.Pointer(redoText_ms.data))
	slotval1 := redoText_ret

	gofunc(slotval1)
}

func QUndoGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoGroup_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUndoGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoGroup) CreateUndoAction2(parent *QObject, prefix string) *QAction {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	return UnsafeNewQAction(unsafe.Pointer(C.QUndoGroup_CreateUndoAction2(this.h, parent.cPointer(), prefix_ms)))
}

func (this *QUndoGroup) CreateRedoAction2(parent *QObject, prefix string) *QAction {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	return UnsafeNewQAction(unsafe.Pointer(C.QUndoGroup_CreateRedoAction2(this.h, parent.cPointer(), prefix_ms)))
}

// Delete this object from C++ memory.
func (this *QUndoGroup) Delete() {
	C.QUndoGroup_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUndoGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QUndoGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
