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
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QUndoCommand_new2((*C.struct_miqt_string)(text_ms))
	return newQUndoCommand(ret)
}

// NewQUndoCommand3 constructs a new QUndoCommand object.
func NewQUndoCommand3(parent *QUndoCommand) *QUndoCommand {
	ret := C.QUndoCommand_new3(parent.cPointer())
	return newQUndoCommand(ret)
}

// NewQUndoCommand4 constructs a new QUndoCommand object.
func NewQUndoCommand4(text string, parent *QUndoCommand) *QUndoCommand {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QUndoCommand_new4((*C.struct_miqt_string)(text_ms), parent.cPointer())
	return newQUndoCommand(ret)
}

func (this *QUndoCommand) Undo() {
	C.QUndoCommand_Undo(this.h)
}

func (this *QUndoCommand) Redo() {
	C.QUndoCommand_Redo(this.h)
}

func (this *QUndoCommand) Text() string {
	var _ms *C.struct_miqt_string = C.QUndoCommand_Text(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QUndoCommand) ActionText() string {
	var _ms *C.struct_miqt_string = C.QUndoCommand_ActionText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QUndoCommand) SetText(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QUndoCommand_SetText(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QUndoCommand) IsObsolete() bool {
	_ret := C.QUndoCommand_IsObsolete(this.h)
	return (bool)(_ret)
}

func (this *QUndoCommand) SetObsolete(obsolete bool) {
	C.QUndoCommand_SetObsolete(this.h, (C.bool)(obsolete))
}

func (this *QUndoCommand) Id() int {
	_ret := C.QUndoCommand_Id(this.h)
	return (int)(_ret)
}

func (this *QUndoCommand) MergeWith(other *QUndoCommand) bool {
	_ret := C.QUndoCommand_MergeWith(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QUndoCommand) ChildCount() int {
	_ret := C.QUndoCommand_ChildCount(this.h)
	return (int)(_ret)
}

func (this *QUndoCommand) Child(index int) *QUndoCommand {
	_ret := C.QUndoCommand_Child(this.h, (C.int)(index))
	return newQUndoCommand_U(unsafe.Pointer(_ret))
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
	_ret := C.QUndoStack_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QUndoStack_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QUndoStack_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QUndoStack_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QUndoStack_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QUndoStack) Clear() {
	C.QUndoStack_Clear(this.h)
}

func (this *QUndoStack) Push(cmd *QUndoCommand) {
	C.QUndoStack_Push(this.h, cmd.cPointer())
}

func (this *QUndoStack) CanUndo() bool {
	_ret := C.QUndoStack_CanUndo(this.h)
	return (bool)(_ret)
}

func (this *QUndoStack) CanRedo() bool {
	_ret := C.QUndoStack_CanRedo(this.h)
	return (bool)(_ret)
}

func (this *QUndoStack) UndoText() string {
	var _ms *C.struct_miqt_string = C.QUndoStack_UndoText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QUndoStack) RedoText() string {
	var _ms *C.struct_miqt_string = C.QUndoStack_RedoText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QUndoStack) Count() int {
	_ret := C.QUndoStack_Count(this.h)
	return (int)(_ret)
}

func (this *QUndoStack) Index() int {
	_ret := C.QUndoStack_Index(this.h)
	return (int)(_ret)
}

func (this *QUndoStack) Text(idx int) string {
	var _ms *C.struct_miqt_string = C.QUndoStack_Text(this.h, (C.int)(idx))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QUndoStack) CreateUndoAction(parent *QObject) *QAction {
	_ret := C.QUndoStack_CreateUndoAction(this.h, parent.cPointer())
	return newQAction_U(unsafe.Pointer(_ret))
}

func (this *QUndoStack) CreateRedoAction(parent *QObject) *QAction {
	_ret := C.QUndoStack_CreateRedoAction(this.h, parent.cPointer())
	return newQAction_U(unsafe.Pointer(_ret))
}

func (this *QUndoStack) IsActive() bool {
	_ret := C.QUndoStack_IsActive(this.h)
	return (bool)(_ret)
}

func (this *QUndoStack) IsClean() bool {
	_ret := C.QUndoStack_IsClean(this.h)
	return (bool)(_ret)
}

func (this *QUndoStack) CleanIndex() int {
	_ret := C.QUndoStack_CleanIndex(this.h)
	return (int)(_ret)
}

func (this *QUndoStack) BeginMacro(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QUndoStack_BeginMacro(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QUndoStack) EndMacro() {
	C.QUndoStack_EndMacro(this.h)
}

func (this *QUndoStack) SetUndoLimit(limit int) {
	C.QUndoStack_SetUndoLimit(this.h, (C.int)(limit))
}

func (this *QUndoStack) UndoLimit() int {
	_ret := C.QUndoStack_UndoLimit(this.h)
	return (int)(_ret)
}

func (this *QUndoStack) Command(index int) *QUndoCommand {
	_ret := C.QUndoStack_Command(this.h, (C.int)(index))
	return newQUndoCommand_U(unsafe.Pointer(_ret))
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
	C.QUndoStack_connect_IndexChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QUndoStack_IndexChanged
func miqt_exec_callback_QUndoStack_IndexChanged(cb *C.void, idx C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(idx int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	idx_ret := idx
	slotval1 := (int)(idx_ret)

	gofunc(slotval1)
}

func (this *QUndoStack) CleanChanged(clean bool) {
	C.QUndoStack_CleanChanged(this.h, (C.bool)(clean))
}
func (this *QUndoStack) OnCleanChanged(slot func(clean bool)) {
	C.QUndoStack_connect_CleanChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QUndoStack_CleanChanged
func miqt_exec_callback_QUndoStack_CleanChanged(cb *C.void, clean C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(clean bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	clean_ret := clean
	slotval1 := (bool)(clean_ret)

	gofunc(slotval1)
}

func (this *QUndoStack) CanUndoChanged(canUndo bool) {
	C.QUndoStack_CanUndoChanged(this.h, (C.bool)(canUndo))
}
func (this *QUndoStack) OnCanUndoChanged(slot func(canUndo bool)) {
	C.QUndoStack_connect_CanUndoChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QUndoStack_CanUndoChanged
func miqt_exec_callback_QUndoStack_CanUndoChanged(cb *C.void, canUndo C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(canUndo bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	canUndo_ret := canUndo
	slotval1 := (bool)(canUndo_ret)

	gofunc(slotval1)
}

func (this *QUndoStack) CanRedoChanged(canRedo bool) {
	C.QUndoStack_CanRedoChanged(this.h, (C.bool)(canRedo))
}
func (this *QUndoStack) OnCanRedoChanged(slot func(canRedo bool)) {
	C.QUndoStack_connect_CanRedoChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QUndoStack_CanRedoChanged
func miqt_exec_callback_QUndoStack_CanRedoChanged(cb *C.void, canRedo C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(canRedo bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	canRedo_ret := canRedo
	slotval1 := (bool)(canRedo_ret)

	gofunc(slotval1)
}

func (this *QUndoStack) UndoTextChanged(undoText string) {
	undoText_ms := miqt_strdupg(undoText)
	defer C.free(undoText_ms)
	C.QUndoStack_UndoTextChanged(this.h, (*C.struct_miqt_string)(undoText_ms))
}
func (this *QUndoStack) OnUndoTextChanged(slot func(undoText string)) {
	C.QUndoStack_connect_UndoTextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QUndoStack_UndoTextChanged
func miqt_exec_callback_QUndoStack_UndoTextChanged(cb *C.void, undoText *C.struct_miqt_string) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(undoText string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var undoText_ms *C.struct_miqt_string = undoText
	undoText_ret := C.GoStringN(&undoText_ms.data, C.int(int64(undoText_ms.len)))
	C.free(unsafe.Pointer(undoText_ms))
	slotval1 := undoText_ret

	gofunc(slotval1)
}

func (this *QUndoStack) RedoTextChanged(redoText string) {
	redoText_ms := miqt_strdupg(redoText)
	defer C.free(redoText_ms)
	C.QUndoStack_RedoTextChanged(this.h, (*C.struct_miqt_string)(redoText_ms))
}
func (this *QUndoStack) OnRedoTextChanged(slot func(redoText string)) {
	C.QUndoStack_connect_RedoTextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QUndoStack_RedoTextChanged
func miqt_exec_callback_QUndoStack_RedoTextChanged(cb *C.void, redoText *C.struct_miqt_string) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(redoText string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var redoText_ms *C.struct_miqt_string = redoText
	redoText_ret := C.GoStringN(&redoText_ms.data, C.int(int64(redoText_ms.len)))
	C.free(unsafe.Pointer(redoText_ms))
	slotval1 := redoText_ret

	gofunc(slotval1)
}

func QUndoStack_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QUndoStack_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QUndoStack_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QUndoStack_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QUndoStack_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QUndoStack_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QUndoStack_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QUndoStack_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QUndoStack) CreateUndoAction2(parent *QObject, prefix string) *QAction {
	prefix_ms := miqt_strdupg(prefix)
	defer C.free(prefix_ms)
	_ret := C.QUndoStack_CreateUndoAction2(this.h, parent.cPointer(), (*C.struct_miqt_string)(prefix_ms))
	return newQAction_U(unsafe.Pointer(_ret))
}

func (this *QUndoStack) CreateRedoAction2(parent *QObject, prefix string) *QAction {
	prefix_ms := miqt_strdupg(prefix)
	defer C.free(prefix_ms)
	_ret := C.QUndoStack_CreateRedoAction2(this.h, parent.cPointer(), (*C.struct_miqt_string)(prefix_ms))
	return newQAction_U(unsafe.Pointer(_ret))
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
