package qt

/*

#include "gen_qundostack.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QUndoCommand struct {
	h *C.QUndoCommand
}

func (this *QUndoCommand) cPointer() *C.QUndoCommand {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QUndoCommand) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQUndoCommand(h *C.QUndoCommand) *QUndoCommand {
	if h == nil {
		return nil
	}
	return &QUndoCommand{h: h}
}

func UnsafeNewQUndoCommand(h unsafe.Pointer) *QUndoCommand {
	return newQUndoCommand((*C.QUndoCommand)(h))
}

// NewQUndoCommand constructs a new QUndoCommand object.
func NewQUndoCommand() *QUndoCommand {
	ret := C.QUndoCommand_new()
	return newQUndoCommand(ret)
}

// NewQUndoCommand2 constructs a new QUndoCommand object.
func NewQUndoCommand2(text string) *QUndoCommand {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	ret := C.QUndoCommand_new2(text_ms)
	return newQUndoCommand(ret)
}

// NewQUndoCommand3 constructs a new QUndoCommand object.
func NewQUndoCommand3(parent *QUndoCommand) *QUndoCommand {
	ret := C.QUndoCommand_new3(parent.cPointer())
	return newQUndoCommand(ret)
}

// NewQUndoCommand4 constructs a new QUndoCommand object.
func NewQUndoCommand4(text string, parent *QUndoCommand) *QUndoCommand {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	ret := C.QUndoCommand_new4(text_ms, parent.cPointer())
	return newQUndoCommand(ret)
}

func (this *QUndoCommand) Undo() {
	C.QUndoCommand_Undo(this.h)
}

func (this *QUndoCommand) Redo() {
	C.QUndoCommand_Redo(this.h)
}

func (this *QUndoCommand) Text() string {
	var _ms C.struct_miqt_string = C.QUndoCommand_Text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoCommand) ActionText() string {
	var _ms C.struct_miqt_string = C.QUndoCommand_ActionText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoCommand) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QUndoCommand_SetText(this.h, text_ms)
}

func (this *QUndoCommand) IsObsolete() bool {
	return (bool)(C.QUndoCommand_IsObsolete(this.h))
}

func (this *QUndoCommand) SetObsolete(obsolete bool) {
	C.QUndoCommand_SetObsolete(this.h, (C.bool)(obsolete))
}

func (this *QUndoCommand) Id() int {
	return (int)(C.QUndoCommand_Id(this.h))
}

func (this *QUndoCommand) MergeWith(other *QUndoCommand) bool {
	return (bool)(C.QUndoCommand_MergeWith(this.h, other.cPointer()))
}

func (this *QUndoCommand) ChildCount() int {
	return (int)(C.QUndoCommand_ChildCount(this.h))
}

func (this *QUndoCommand) Child(index int) *QUndoCommand {
	return UnsafeNewQUndoCommand(unsafe.Pointer(C.QUndoCommand_Child(this.h, (C.int)(index))))
}

// Delete this object from C++ memory.
func (this *QUndoCommand) Delete() {
	C.QUndoCommand_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUndoCommand) GoGC() {
	runtime.SetFinalizer(this, func(this *QUndoCommand) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QUndoStack struct {
	h *C.QUndoStack
	*QObject
}

func (this *QUndoStack) cPointer() *C.QUndoStack {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QUndoStack) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQUndoStack(h *C.QUndoStack) *QUndoStack {
	if h == nil {
		return nil
	}
	return &QUndoStack{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQUndoStack(h unsafe.Pointer) *QUndoStack {
	return newQUndoStack((*C.QUndoStack)(h))
}

// NewQUndoStack constructs a new QUndoStack object.
func NewQUndoStack() *QUndoStack {
	ret := C.QUndoStack_new()
	return newQUndoStack(ret)
}

// NewQUndoStack2 constructs a new QUndoStack object.
func NewQUndoStack2(parent *QObject) *QUndoStack {
	ret := C.QUndoStack_new2(parent.cPointer())
	return newQUndoStack(ret)
}

func (this *QUndoStack) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QUndoStack_MetaObject(this.h)))
}

func (this *QUndoStack) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QUndoStack_Metacast(this.h, param1_Cstring))
}

func QUndoStack_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QUndoStack_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUndoStack_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QUndoStack_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoStack) Clear() {
	C.QUndoStack_Clear(this.h)
}

func (this *QUndoStack) Push(cmd *QUndoCommand) {
	C.QUndoStack_Push(this.h, cmd.cPointer())
}

func (this *QUndoStack) CanUndo() bool {
	return (bool)(C.QUndoStack_CanUndo(this.h))
}

func (this *QUndoStack) CanRedo() bool {
	return (bool)(C.QUndoStack_CanRedo(this.h))
}

func (this *QUndoStack) UndoText() string {
	var _ms C.struct_miqt_string = C.QUndoStack_UndoText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoStack) RedoText() string {
	var _ms C.struct_miqt_string = C.QUndoStack_RedoText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoStack) Count() int {
	return (int)(C.QUndoStack_Count(this.h))
}

func (this *QUndoStack) Index() int {
	return (int)(C.QUndoStack_Index(this.h))
}

func (this *QUndoStack) Text(idx int) string {
	var _ms C.struct_miqt_string = C.QUndoStack_Text(this.h, (C.int)(idx))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoStack) CreateUndoAction(parent *QObject) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QUndoStack_CreateUndoAction(this.h, parent.cPointer())))
}

func (this *QUndoStack) CreateRedoAction(parent *QObject) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QUndoStack_CreateRedoAction(this.h, parent.cPointer())))
}

func (this *QUndoStack) IsActive() bool {
	return (bool)(C.QUndoStack_IsActive(this.h))
}

func (this *QUndoStack) IsClean() bool {
	return (bool)(C.QUndoStack_IsClean(this.h))
}

func (this *QUndoStack) CleanIndex() int {
	return (int)(C.QUndoStack_CleanIndex(this.h))
}

func (this *QUndoStack) BeginMacro(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QUndoStack_BeginMacro(this.h, text_ms)
}

func (this *QUndoStack) EndMacro() {
	C.QUndoStack_EndMacro(this.h)
}

func (this *QUndoStack) SetUndoLimit(limit int) {
	C.QUndoStack_SetUndoLimit(this.h, (C.int)(limit))
}

func (this *QUndoStack) UndoLimit() int {
	return (int)(C.QUndoStack_UndoLimit(this.h))
}

func (this *QUndoStack) Command(index int) *QUndoCommand {
	return UnsafeNewQUndoCommand(unsafe.Pointer(C.QUndoStack_Command(this.h, (C.int)(index))))
}

func (this *QUndoStack) SetClean() {
	C.QUndoStack_SetClean(this.h)
}

func (this *QUndoStack) ResetClean() {
	C.QUndoStack_ResetClean(this.h)
}

func (this *QUndoStack) SetIndex(idx int) {
	C.QUndoStack_SetIndex(this.h, (C.int)(idx))
}

func (this *QUndoStack) Undo() {
	C.QUndoStack_Undo(this.h)
}

func (this *QUndoStack) Redo() {
	C.QUndoStack_Redo(this.h)
}

func (this *QUndoStack) SetActive() {
	C.QUndoStack_SetActive(this.h)
}

func (this *QUndoStack) IndexChanged(idx int) {
	C.QUndoStack_IndexChanged(this.h, (C.int)(idx))
}
func (this *QUndoStack) OnIndexChanged(slot func(idx int)) {
	C.QUndoStack_connect_IndexChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoStack_IndexChanged
func miqt_exec_callback_QUndoStack_IndexChanged(cb C.intptr_t, idx C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(idx int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(idx)

	gofunc(slotval1)
}

func (this *QUndoStack) CleanChanged(clean bool) {
	C.QUndoStack_CleanChanged(this.h, (C.bool)(clean))
}
func (this *QUndoStack) OnCleanChanged(slot func(clean bool)) {
	C.QUndoStack_connect_CleanChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoStack_CleanChanged
func miqt_exec_callback_QUndoStack_CleanChanged(cb C.intptr_t, clean C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(clean bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(clean)

	gofunc(slotval1)
}

func (this *QUndoStack) CanUndoChanged(canUndo bool) {
	C.QUndoStack_CanUndoChanged(this.h, (C.bool)(canUndo))
}
func (this *QUndoStack) OnCanUndoChanged(slot func(canUndo bool)) {
	C.QUndoStack_connect_CanUndoChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoStack_CanUndoChanged
func miqt_exec_callback_QUndoStack_CanUndoChanged(cb C.intptr_t, canUndo C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(canUndo bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(canUndo)

	gofunc(slotval1)
}

func (this *QUndoStack) CanRedoChanged(canRedo bool) {
	C.QUndoStack_CanRedoChanged(this.h, (C.bool)(canRedo))
}
func (this *QUndoStack) OnCanRedoChanged(slot func(canRedo bool)) {
	C.QUndoStack_connect_CanRedoChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoStack_CanRedoChanged
func miqt_exec_callback_QUndoStack_CanRedoChanged(cb C.intptr_t, canRedo C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(canRedo bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(canRedo)

	gofunc(slotval1)
}

func (this *QUndoStack) UndoTextChanged(undoText string) {
	undoText_ms := C.struct_miqt_string{}
	undoText_ms.data = C.CString(undoText)
	undoText_ms.len = C.size_t(len(undoText))
	defer C.free(unsafe.Pointer(undoText_ms.data))
	C.QUndoStack_UndoTextChanged(this.h, undoText_ms)
}
func (this *QUndoStack) OnUndoTextChanged(slot func(undoText string)) {
	C.QUndoStack_connect_UndoTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoStack_UndoTextChanged
func miqt_exec_callback_QUndoStack_UndoTextChanged(cb C.intptr_t, undoText C.struct_miqt_string) {
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

func (this *QUndoStack) RedoTextChanged(redoText string) {
	redoText_ms := C.struct_miqt_string{}
	redoText_ms.data = C.CString(redoText)
	redoText_ms.len = C.size_t(len(redoText))
	defer C.free(unsafe.Pointer(redoText_ms.data))
	C.QUndoStack_RedoTextChanged(this.h, redoText_ms)
}
func (this *QUndoStack) OnRedoTextChanged(slot func(redoText string)) {
	C.QUndoStack_connect_RedoTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoStack_RedoTextChanged
func miqt_exec_callback_QUndoStack_RedoTextChanged(cb C.intptr_t, redoText C.struct_miqt_string) {
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

func QUndoStack_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoStack_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUndoStack_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoStack_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUndoStack_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoStack_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUndoStack_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoStack_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoStack) CreateUndoAction2(parent *QObject, prefix string) *QAction {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	return UnsafeNewQAction(unsafe.Pointer(C.QUndoStack_CreateUndoAction2(this.h, parent.cPointer(), prefix_ms)))
}

func (this *QUndoStack) CreateRedoAction2(parent *QObject, prefix string) *QAction {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	return UnsafeNewQAction(unsafe.Pointer(C.QUndoStack_CreateRedoAction2(this.h, parent.cPointer(), prefix_ms)))
}

func (this *QUndoStack) SetActive1(active bool) {
	C.QUndoStack_SetActive1(this.h, (C.bool)(active))
}

// Delete this object from C++ memory.
func (this *QUndoStack) Delete() {
	C.QUndoStack_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUndoStack) GoGC() {
	runtime.SetFinalizer(this, func(this *QUndoStack) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
