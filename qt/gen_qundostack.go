package qt

/*

#include "gen_qundostack.h"
#include <stdlib.h>

*/
import "C"

import (
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

func newQUndoCommand(h *C.QUndoCommand) *QUndoCommand {
	if h == nil {
		return nil
	}
	return &QUndoCommand{h: h}
}

func newQUndoCommand_U(h unsafe.Pointer) *QUndoCommand {
	return newQUndoCommand((*C.QUndoCommand)(h))
}

// NewQUndoCommand constructs a new QUndoCommand object.
func NewQUndoCommand() *QUndoCommand {
	ret := C.QUndoCommand_new()
	return newQUndoCommand(ret)
}

// NewQUndoCommand2 constructs a new QUndoCommand object.
func NewQUndoCommand2(text string) *QUndoCommand {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QUndoCommand_new2(text_Cstring, C.ulong(len(text)))
	return newQUndoCommand(ret)
}

// NewQUndoCommand3 constructs a new QUndoCommand object.
func NewQUndoCommand3(parent *QUndoCommand) *QUndoCommand {
	ret := C.QUndoCommand_new3(parent.cPointer())
	return newQUndoCommand(ret)
}

// NewQUndoCommand4 constructs a new QUndoCommand object.
func NewQUndoCommand4(text string, parent *QUndoCommand) *QUndoCommand {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QUndoCommand_new4(text_Cstring, C.ulong(len(text)), parent.cPointer())
	return newQUndoCommand(ret)
}

func (this *QUndoCommand) Undo() {
	C.QUndoCommand_Undo(this.h)
}

func (this *QUndoCommand) Redo() {
	C.QUndoCommand_Redo(this.h)
}

func (this *QUndoCommand) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoCommand_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUndoCommand) ActionText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoCommand_ActionText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUndoCommand) SetText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QUndoCommand_SetText(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QUndoCommand) IsObsolete() bool {
	ret := C.QUndoCommand_IsObsolete(this.h)
	return (bool)(ret)
}

func (this *QUndoCommand) SetObsolete(obsolete bool) {
	C.QUndoCommand_SetObsolete(this.h, (C.bool)(obsolete))
}

func (this *QUndoCommand) Id() int {
	ret := C.QUndoCommand_Id(this.h)
	return (int)(ret)
}

func (this *QUndoCommand) MergeWith(other *QUndoCommand) bool {
	ret := C.QUndoCommand_MergeWith(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QUndoCommand) ChildCount() int {
	ret := C.QUndoCommand_ChildCount(this.h)
	return (int)(ret)
}

func (this *QUndoCommand) Child(index int) *QUndoCommand {
	ret := C.QUndoCommand_Child(this.h, (C.int)(index))
	return newQUndoCommand_U(unsafe.Pointer(ret))
}

func (this *QUndoCommand) Delete() {
	C.QUndoCommand_Delete(this.h)
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

func newQUndoStack(h *C.QUndoStack) *QUndoStack {
	if h == nil {
		return nil
	}
	return &QUndoStack{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQUndoStack_U(h unsafe.Pointer) *QUndoStack {
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
	ret := C.QUndoStack_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QUndoStack_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoStack_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUndoStack_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoStack_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUndoStack) Clear() {
	C.QUndoStack_Clear(this.h)
}

func (this *QUndoStack) Push(cmd *QUndoCommand) {
	C.QUndoStack_Push(this.h, cmd.cPointer())
}

func (this *QUndoStack) CanUndo() bool {
	ret := C.QUndoStack_CanUndo(this.h)
	return (bool)(ret)
}

func (this *QUndoStack) CanRedo() bool {
	ret := C.QUndoStack_CanRedo(this.h)
	return (bool)(ret)
}

func (this *QUndoStack) UndoText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoStack_UndoText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUndoStack) RedoText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoStack_RedoText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUndoStack) Count() int {
	ret := C.QUndoStack_Count(this.h)
	return (int)(ret)
}

func (this *QUndoStack) Index() int {
	ret := C.QUndoStack_Index(this.h)
	return (int)(ret)
}

func (this *QUndoStack) Text(idx int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoStack_Text(this.h, (C.int)(idx), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUndoStack) CreateUndoAction(parent *QObject) *QAction {
	ret := C.QUndoStack_CreateUndoAction(this.h, parent.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QUndoStack) CreateRedoAction(parent *QObject) *QAction {
	ret := C.QUndoStack_CreateRedoAction(this.h, parent.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QUndoStack) IsActive() bool {
	ret := C.QUndoStack_IsActive(this.h)
	return (bool)(ret)
}

func (this *QUndoStack) IsClean() bool {
	ret := C.QUndoStack_IsClean(this.h)
	return (bool)(ret)
}

func (this *QUndoStack) CleanIndex() int {
	ret := C.QUndoStack_CleanIndex(this.h)
	return (int)(ret)
}

func (this *QUndoStack) BeginMacro(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QUndoStack_BeginMacro(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QUndoStack) EndMacro() {
	C.QUndoStack_EndMacro(this.h)
}

func (this *QUndoStack) SetUndoLimit(limit int) {
	C.QUndoStack_SetUndoLimit(this.h, (C.int)(limit))
}

func (this *QUndoStack) UndoLimit() int {
	ret := C.QUndoStack_UndoLimit(this.h)
	return (int)(ret)
}

func (this *QUndoStack) Command(index int) *QUndoCommand {
	ret := C.QUndoStack_Command(this.h, (C.int)(index))
	return newQUndoCommand_U(unsafe.Pointer(ret))
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

func (this *QUndoStack) OnIndexChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QUndoStack_connect_IndexChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QUndoStack) CleanChanged(clean bool) {
	C.QUndoStack_CleanChanged(this.h, (C.bool)(clean))
}

func (this *QUndoStack) OnCleanChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QUndoStack_connect_CleanChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QUndoStack) CanUndoChanged(canUndo bool) {
	C.QUndoStack_CanUndoChanged(this.h, (C.bool)(canUndo))
}

func (this *QUndoStack) OnCanUndoChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QUndoStack_connect_CanUndoChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QUndoStack) CanRedoChanged(canRedo bool) {
	C.QUndoStack_CanRedoChanged(this.h, (C.bool)(canRedo))
}

func (this *QUndoStack) OnCanRedoChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QUndoStack_connect_CanRedoChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QUndoStack) UndoTextChanged(undoText string) {
	undoText_Cstring := C.CString(undoText)
	defer C.free(unsafe.Pointer(undoText_Cstring))
	C.QUndoStack_UndoTextChanged(this.h, undoText_Cstring, C.ulong(len(undoText)))
}

func (this *QUndoStack) OnUndoTextChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QUndoStack_connect_UndoTextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QUndoStack) RedoTextChanged(redoText string) {
	redoText_Cstring := C.CString(redoText)
	defer C.free(unsafe.Pointer(redoText_Cstring))
	C.QUndoStack_RedoTextChanged(this.h, redoText_Cstring, C.ulong(len(redoText)))
}

func (this *QUndoStack) OnRedoTextChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QUndoStack_connect_RedoTextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QUndoStack_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoStack_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUndoStack_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoStack_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUndoStack_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoStack_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUndoStack_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUndoStack_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUndoStack) CreateUndoAction2(parent *QObject, prefix string) *QAction {
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	ret := C.QUndoStack_CreateUndoAction2(this.h, parent.cPointer(), prefix_Cstring, C.ulong(len(prefix)))
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QUndoStack) CreateRedoAction2(parent *QObject, prefix string) *QAction {
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	ret := C.QUndoStack_CreateRedoAction2(this.h, parent.cPointer(), prefix_Cstring, C.ulong(len(prefix)))
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QUndoStack) SetActive1(active bool) {
	C.QUndoStack_SetActive1(this.h, (C.bool)(active))
}

func (this *QUndoStack) Delete() {
	C.QUndoStack_Delete(this.h)
}
