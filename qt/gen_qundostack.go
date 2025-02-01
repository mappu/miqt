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

// newQUndoCommand constructs the type using only CGO pointers.
func newQUndoCommand(h *C.QUndoCommand) *QUndoCommand {
	if h == nil {
		return nil
	}

	return &QUndoCommand{h: h}
}

// UnsafeNewQUndoCommand constructs the type using only unsafe pointers.
func UnsafeNewQUndoCommand(h unsafe.Pointer) *QUndoCommand {
	return newQUndoCommand((*C.QUndoCommand)(h))
}

// NewQUndoCommand constructs a new QUndoCommand object.
func NewQUndoCommand() *QUndoCommand {

	return newQUndoCommand(C.QUndoCommand_new())
}

// NewQUndoCommand2 constructs a new QUndoCommand object.
func NewQUndoCommand2(text string) *QUndoCommand {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQUndoCommand(C.QUndoCommand_new2(text_ms))
}

// NewQUndoCommand3 constructs a new QUndoCommand object.
func NewQUndoCommand3(parent *QUndoCommand) *QUndoCommand {

	return newQUndoCommand(C.QUndoCommand_new3(parent.cPointer()))
}

// NewQUndoCommand4 constructs a new QUndoCommand object.
func NewQUndoCommand4(text string, parent *QUndoCommand) *QUndoCommand {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQUndoCommand(C.QUndoCommand_new4(text_ms, parent.cPointer()))
}

func (this *QUndoCommand) Undo() {
	C.QUndoCommand_undo(this.h)
}

func (this *QUndoCommand) Redo() {
	C.QUndoCommand_redo(this.h)
}

func (this *QUndoCommand) Text() string {
	var _ms C.struct_miqt_string = C.QUndoCommand_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoCommand) ActionText() string {
	var _ms C.struct_miqt_string = C.QUndoCommand_actionText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoCommand) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QUndoCommand_setText(this.h, text_ms)
}

func (this *QUndoCommand) IsObsolete() bool {
	return (bool)(C.QUndoCommand_isObsolete(this.h))
}

func (this *QUndoCommand) SetObsolete(obsolete bool) {
	C.QUndoCommand_setObsolete(this.h, (C.bool)(obsolete))
}

func (this *QUndoCommand) Id() int {
	return (int)(C.QUndoCommand_id(this.h))
}

func (this *QUndoCommand) MergeWith(other *QUndoCommand) bool {
	return (bool)(C.QUndoCommand_mergeWith(this.h, other.cPointer()))
}

func (this *QUndoCommand) ChildCount() int {
	return (int)(C.QUndoCommand_childCount(this.h))
}

func (this *QUndoCommand) Child(index int) *QUndoCommand {
	return newQUndoCommand(C.QUndoCommand_child(this.h, (C.int)(index)))
}

func (this *QUndoCommand) callVirtualBase_Undo() {

	C.QUndoCommand_virtualbase_undo(unsafe.Pointer(this.h))

}
func (this *QUndoCommand) Onundo(slot func(super func())) {
	ok := C.QUndoCommand_override_virtual_undo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoCommand_undo
func miqt_exec_callback_QUndoCommand_undo(self *C.QUndoCommand, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUndoCommand{h: self}).callVirtualBase_Undo)

}

func (this *QUndoCommand) callVirtualBase_Redo() {

	C.QUndoCommand_virtualbase_redo(unsafe.Pointer(this.h))

}
func (this *QUndoCommand) Onredo(slot func(super func())) {
	ok := C.QUndoCommand_override_virtual_redo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoCommand_redo
func miqt_exec_callback_QUndoCommand_redo(self *C.QUndoCommand, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUndoCommand{h: self}).callVirtualBase_Redo)

}

func (this *QUndoCommand) callVirtualBase_Id() int {

	return (int)(C.QUndoCommand_virtualbase_id(unsafe.Pointer(this.h)))

}
func (this *QUndoCommand) Onid(slot func(super func() int) int) {
	ok := C.QUndoCommand_override_virtual_id(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoCommand_id
func miqt_exec_callback_QUndoCommand_id(self *C.QUndoCommand, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUndoCommand{h: self}).callVirtualBase_Id)

	return (C.int)(virtualReturn)

}

func (this *QUndoCommand) callVirtualBase_MergeWith(other *QUndoCommand) bool {

	return (bool)(C.QUndoCommand_virtualbase_mergeWith(unsafe.Pointer(this.h), other.cPointer()))

}
func (this *QUndoCommand) OnmergeWith(slot func(super func(other *QUndoCommand) bool, other *QUndoCommand) bool) {
	ok := C.QUndoCommand_override_virtual_mergeWith(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoCommand_mergeWith
func miqt_exec_callback_QUndoCommand_mergeWith(self *C.QUndoCommand, cb C.intptr_t, other *C.QUndoCommand) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QUndoCommand) bool, other *QUndoCommand) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQUndoCommand(other)

	virtualReturn := gofunc((&QUndoCommand{h: self}).callVirtualBase_MergeWith, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QUndoCommand) Delete() {
	C.QUndoCommand_delete(this.h)
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

// newQUndoStack constructs the type using only CGO pointers.
func newQUndoStack(h *C.QUndoStack) *QUndoStack {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QUndoStack_virtbase(h, &outptr_QObject)

	return &QUndoStack{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQUndoStack constructs the type using only unsafe pointers.
func UnsafeNewQUndoStack(h unsafe.Pointer) *QUndoStack {
	return newQUndoStack((*C.QUndoStack)(h))
}

// NewQUndoStack constructs a new QUndoStack object.
func NewQUndoStack() *QUndoStack {

	return newQUndoStack(C.QUndoStack_new())
}

// NewQUndoStack2 constructs a new QUndoStack object.
func NewQUndoStack2(parent *QObject) *QUndoStack {

	return newQUndoStack(C.QUndoStack_new2(parent.cPointer()))
}

func (this *QUndoStack) MetaObject() *QMetaObject {
	return newQMetaObject(C.QUndoStack_metaObject(this.h))
}

func (this *QUndoStack) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QUndoStack_metacast(this.h, param1_Cstring))
}

func QUndoStack_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QUndoStack_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUndoStack_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QUndoStack_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoStack) Clear() {
	C.QUndoStack_clear(this.h)
}

func (this *QUndoStack) Push(cmd *QUndoCommand) {
	C.QUndoStack_push(this.h, cmd.cPointer())
}

func (this *QUndoStack) CanUndo() bool {
	return (bool)(C.QUndoStack_canUndo(this.h))
}

func (this *QUndoStack) CanRedo() bool {
	return (bool)(C.QUndoStack_canRedo(this.h))
}

func (this *QUndoStack) UndoText() string {
	var _ms C.struct_miqt_string = C.QUndoStack_undoText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoStack) RedoText() string {
	var _ms C.struct_miqt_string = C.QUndoStack_redoText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoStack) Count() int {
	return (int)(C.QUndoStack_count(this.h))
}

func (this *QUndoStack) Index() int {
	return (int)(C.QUndoStack_index(this.h))
}

func (this *QUndoStack) Text(idx int) string {
	var _ms C.struct_miqt_string = C.QUndoStack_text(this.h, (C.int)(idx))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoStack) CreateUndoAction(parent *QObject) *QAction {
	return newQAction(C.QUndoStack_createUndoAction(this.h, parent.cPointer()))
}

func (this *QUndoStack) CreateRedoAction(parent *QObject) *QAction {
	return newQAction(C.QUndoStack_createRedoAction(this.h, parent.cPointer()))
}

func (this *QUndoStack) IsActive() bool {
	return (bool)(C.QUndoStack_isActive(this.h))
}

func (this *QUndoStack) IsClean() bool {
	return (bool)(C.QUndoStack_isClean(this.h))
}

func (this *QUndoStack) CleanIndex() int {
	return (int)(C.QUndoStack_cleanIndex(this.h))
}

func (this *QUndoStack) BeginMacro(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QUndoStack_beginMacro(this.h, text_ms)
}

func (this *QUndoStack) EndMacro() {
	C.QUndoStack_endMacro(this.h)
}

func (this *QUndoStack) SetUndoLimit(limit int) {
	C.QUndoStack_setUndoLimit(this.h, (C.int)(limit))
}

func (this *QUndoStack) UndoLimit() int {
	return (int)(C.QUndoStack_undoLimit(this.h))
}

func (this *QUndoStack) Command(index int) *QUndoCommand {
	return newQUndoCommand(C.QUndoStack_command(this.h, (C.int)(index)))
}

func (this *QUndoStack) SetClean() {
	C.QUndoStack_setClean(this.h)
}

func (this *QUndoStack) ResetClean() {
	C.QUndoStack_resetClean(this.h)
}

func (this *QUndoStack) SetIndex(idx int) {
	C.QUndoStack_setIndex(this.h, (C.int)(idx))
}

func (this *QUndoStack) Undo() {
	C.QUndoStack_undo(this.h)
}

func (this *QUndoStack) Redo() {
	C.QUndoStack_redo(this.h)
}

func (this *QUndoStack) SetActive() {
	C.QUndoStack_setActive(this.h)
}

func (this *QUndoStack) IndexChanged(idx int) {
	C.QUndoStack_indexChanged(this.h, (C.int)(idx))
}
func (this *QUndoStack) OnIndexChanged(slot func(idx int)) {
	C.QUndoStack_connect_indexChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoStack_indexChanged
func miqt_exec_callback_QUndoStack_indexChanged(cb C.intptr_t, idx C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(idx int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(idx)

	gofunc(slotval1)
}

func (this *QUndoStack) CleanChanged(clean bool) {
	C.QUndoStack_cleanChanged(this.h, (C.bool)(clean))
}
func (this *QUndoStack) OnCleanChanged(slot func(clean bool)) {
	C.QUndoStack_connect_cleanChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoStack_cleanChanged
func miqt_exec_callback_QUndoStack_cleanChanged(cb C.intptr_t, clean C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(clean bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(clean)

	gofunc(slotval1)
}

func (this *QUndoStack) CanUndoChanged(canUndo bool) {
	C.QUndoStack_canUndoChanged(this.h, (C.bool)(canUndo))
}
func (this *QUndoStack) OnCanUndoChanged(slot func(canUndo bool)) {
	C.QUndoStack_connect_canUndoChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoStack_canUndoChanged
func miqt_exec_callback_QUndoStack_canUndoChanged(cb C.intptr_t, canUndo C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(canUndo bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(canUndo)

	gofunc(slotval1)
}

func (this *QUndoStack) CanRedoChanged(canRedo bool) {
	C.QUndoStack_canRedoChanged(this.h, (C.bool)(canRedo))
}
func (this *QUndoStack) OnCanRedoChanged(slot func(canRedo bool)) {
	C.QUndoStack_connect_canRedoChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoStack_canRedoChanged
func miqt_exec_callback_QUndoStack_canRedoChanged(cb C.intptr_t, canRedo C.bool) {
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
	C.QUndoStack_undoTextChanged(this.h, undoText_ms)
}
func (this *QUndoStack) OnUndoTextChanged(slot func(undoText string)) {
	C.QUndoStack_connect_undoTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoStack_undoTextChanged
func miqt_exec_callback_QUndoStack_undoTextChanged(cb C.intptr_t, undoText C.struct_miqt_string) {
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
	C.QUndoStack_redoTextChanged(this.h, redoText_ms)
}
func (this *QUndoStack) OnRedoTextChanged(slot func(redoText string)) {
	C.QUndoStack_connect_redoTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoStack_redoTextChanged
func miqt_exec_callback_QUndoStack_redoTextChanged(cb C.intptr_t, redoText C.struct_miqt_string) {
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
	var _ms C.struct_miqt_string = C.QUndoStack_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUndoStack_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoStack_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUndoStack_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoStack_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUndoStack_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoStack_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoStack) CreateUndoAction2(parent *QObject, prefix string) *QAction {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	return newQAction(C.QUndoStack_createUndoAction2(this.h, parent.cPointer(), prefix_ms))
}

func (this *QUndoStack) CreateRedoAction2(parent *QObject, prefix string) *QAction {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	return newQAction(C.QUndoStack_createRedoAction2(this.h, parent.cPointer(), prefix_ms))
}

func (this *QUndoStack) SetActive1(active bool) {
	C.QUndoStack_setActive1(this.h, (C.bool)(active))
}

func (this *QUndoStack) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QUndoStack_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QUndoStack) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QUndoStack_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoStack_event
func miqt_exec_callback_QUndoStack_event(self *C.QUndoStack, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QUndoStack{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUndoStack) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QUndoStack_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QUndoStack) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QUndoStack_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoStack_eventFilter
func miqt_exec_callback_QUndoStack_eventFilter(self *C.QUndoStack, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QUndoStack{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QUndoStack) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QUndoStack_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoStack) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QUndoStack_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoStack_timerEvent
func miqt_exec_callback_QUndoStack_timerEvent(self *C.QUndoStack, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QUndoStack{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QUndoStack) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QUndoStack_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoStack) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QUndoStack_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoStack_childEvent
func miqt_exec_callback_QUndoStack_childEvent(self *C.QUndoStack, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QUndoStack{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QUndoStack) callVirtualBase_CustomEvent(event *QEvent) {

	C.QUndoStack_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QUndoStack) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QUndoStack_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoStack_customEvent
func miqt_exec_callback_QUndoStack_customEvent(self *C.QUndoStack, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QUndoStack{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QUndoStack) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QUndoStack_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QUndoStack) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QUndoStack_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoStack_connectNotify
func miqt_exec_callback_QUndoStack_connectNotify(self *C.QUndoStack, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QUndoStack{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QUndoStack) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QUndoStack_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QUndoStack) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QUndoStack_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QUndoStack_disconnectNotify
func miqt_exec_callback_QUndoStack_disconnectNotify(self *C.QUndoStack, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QUndoStack{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QUndoStack) Delete() {
	C.QUndoStack_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUndoStack) GoGC() {
	runtime.SetFinalizer(this, func(this *QUndoStack) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
