package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qlineedit.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QLineEdit struct {
	h *C.QLineEdit
	*QWidget
}

func (this *QLineEdit) cPointer() *C.QLineEdit {
	if this == nil {
		return nil
	}
	return this.h
}

func newQLineEdit(h *C.QLineEdit) *QLineEdit {
	if h == nil {
		return nil
	}
	return &QLineEdit{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQLineEdit_U(h unsafe.Pointer) *QLineEdit {
	return newQLineEdit((*C.QLineEdit)(h))
}

// NewQLineEdit constructs a new QLineEdit object.
func NewQLineEdit() *QLineEdit {
	ret := C.QLineEdit_new()
	return newQLineEdit(ret)
}

// NewQLineEdit2 constructs a new QLineEdit object.
func NewQLineEdit2(param1 string) *QLineEdit {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QLineEdit_new2(param1_Cstring, C.ulong(len(param1)))
	return newQLineEdit(ret)
}

// NewQLineEdit3 constructs a new QLineEdit object.
func NewQLineEdit3(parent *QWidget) *QLineEdit {
	ret := C.QLineEdit_new3(parent.cPointer())
	return newQLineEdit(ret)
}

// NewQLineEdit4 constructs a new QLineEdit object.
func NewQLineEdit4(param1 string, parent *QWidget) *QLineEdit {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QLineEdit_new4(param1_Cstring, C.ulong(len(param1)), parent.cPointer())
	return newQLineEdit(ret)
}

func (this *QLineEdit) MetaObject() *QMetaObject {
	ret := C.QLineEdit_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QLineEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLineEdit_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLineEdit_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLineEdit_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLineEdit) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLineEdit_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLineEdit) DisplayText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLineEdit_DisplayText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLineEdit) PlaceholderText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLineEdit_PlaceholderText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLineEdit) SetPlaceholderText(placeholderText string) {
	placeholderText_Cstring := C.CString(placeholderText)
	defer C.free(unsafe.Pointer(placeholderText_Cstring))
	C.QLineEdit_SetPlaceholderText(this.h, placeholderText_Cstring, C.ulong(len(placeholderText)))
}

func (this *QLineEdit) MaxLength() int {
	ret := C.QLineEdit_MaxLength(this.h)
	return (int)(ret)
}

func (this *QLineEdit) SetMaxLength(maxLength int) {
	C.QLineEdit_SetMaxLength(this.h, (C.int)(maxLength))
}

func (this *QLineEdit) SetFrame(frame bool) {
	C.QLineEdit_SetFrame(this.h, (C.bool)(frame))
}

func (this *QLineEdit) HasFrame() bool {
	ret := C.QLineEdit_HasFrame(this.h)
	return (bool)(ret)
}

func (this *QLineEdit) SetClearButtonEnabled(enable bool) {
	C.QLineEdit_SetClearButtonEnabled(this.h, (C.bool)(enable))
}

func (this *QLineEdit) IsClearButtonEnabled() bool {
	ret := C.QLineEdit_IsClearButtonEnabled(this.h)
	return (bool)(ret)
}

func (this *QLineEdit) EchoMode() uintptr {
	ret := C.QLineEdit_EchoMode(this.h)
	return (uintptr)(ret)
}

func (this *QLineEdit) SetEchoMode(echoMode uintptr) {
	C.QLineEdit_SetEchoMode(this.h, (C.uintptr_t)(echoMode))
}

func (this *QLineEdit) IsReadOnly() bool {
	ret := C.QLineEdit_IsReadOnly(this.h)
	return (bool)(ret)
}

func (this *QLineEdit) SetReadOnly(readOnly bool) {
	C.QLineEdit_SetReadOnly(this.h, (C.bool)(readOnly))
}

func (this *QLineEdit) SetValidator(validator *QValidator) {
	C.QLineEdit_SetValidator(this.h, validator.cPointer())
}

func (this *QLineEdit) Validator() *QValidator {
	ret := C.QLineEdit_Validator(this.h)
	return newQValidator_U(unsafe.Pointer(ret))
}

func (this *QLineEdit) SetCompleter(completer *QCompleter) {
	C.QLineEdit_SetCompleter(this.h, completer.cPointer())
}

func (this *QLineEdit) Completer() *QCompleter {
	ret := C.QLineEdit_Completer(this.h)
	return newQCompleter_U(unsafe.Pointer(ret))
}

func (this *QLineEdit) SizeHint() *QSize {
	ret := C.QLineEdit_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLineEdit) MinimumSizeHint() *QSize {
	ret := C.QLineEdit_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLineEdit) CursorPosition() int {
	ret := C.QLineEdit_CursorPosition(this.h)
	return (int)(ret)
}

func (this *QLineEdit) SetCursorPosition(cursorPosition int) {
	C.QLineEdit_SetCursorPosition(this.h, (C.int)(cursorPosition))
}

func (this *QLineEdit) CursorPositionAt(pos *QPoint) int {
	ret := C.QLineEdit_CursorPositionAt(this.h, pos.cPointer())
	return (int)(ret)
}

func (this *QLineEdit) SetAlignment(flag int) {
	C.QLineEdit_SetAlignment(this.h, (C.int)(flag))
}

func (this *QLineEdit) Alignment() int {
	ret := C.QLineEdit_Alignment(this.h)
	return (int)(ret)
}

func (this *QLineEdit) CursorForward(mark bool) {
	C.QLineEdit_CursorForward(this.h, (C.bool)(mark))
}

func (this *QLineEdit) CursorBackward(mark bool) {
	C.QLineEdit_CursorBackward(this.h, (C.bool)(mark))
}

func (this *QLineEdit) CursorWordForward(mark bool) {
	C.QLineEdit_CursorWordForward(this.h, (C.bool)(mark))
}

func (this *QLineEdit) CursorWordBackward(mark bool) {
	C.QLineEdit_CursorWordBackward(this.h, (C.bool)(mark))
}

func (this *QLineEdit) Backspace() {
	C.QLineEdit_Backspace(this.h)
}

func (this *QLineEdit) Del() {
	C.QLineEdit_Del(this.h)
}

func (this *QLineEdit) Home(mark bool) {
	C.QLineEdit_Home(this.h, (C.bool)(mark))
}

func (this *QLineEdit) End(mark bool) {
	C.QLineEdit_End(this.h, (C.bool)(mark))
}

func (this *QLineEdit) IsModified() bool {
	ret := C.QLineEdit_IsModified(this.h)
	return (bool)(ret)
}

func (this *QLineEdit) SetModified(modified bool) {
	C.QLineEdit_SetModified(this.h, (C.bool)(modified))
}

func (this *QLineEdit) SetSelection(param1 int, param2 int) {
	C.QLineEdit_SetSelection(this.h, (C.int)(param1), (C.int)(param2))
}

func (this *QLineEdit) HasSelectedText() bool {
	ret := C.QLineEdit_HasSelectedText(this.h)
	return (bool)(ret)
}

func (this *QLineEdit) SelectedText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLineEdit_SelectedText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLineEdit) SelectionStart() int {
	ret := C.QLineEdit_SelectionStart(this.h)
	return (int)(ret)
}

func (this *QLineEdit) SelectionEnd() int {
	ret := C.QLineEdit_SelectionEnd(this.h)
	return (int)(ret)
}

func (this *QLineEdit) SelectionLength() int {
	ret := C.QLineEdit_SelectionLength(this.h)
	return (int)(ret)
}

func (this *QLineEdit) IsUndoAvailable() bool {
	ret := C.QLineEdit_IsUndoAvailable(this.h)
	return (bool)(ret)
}

func (this *QLineEdit) IsRedoAvailable() bool {
	ret := C.QLineEdit_IsRedoAvailable(this.h)
	return (bool)(ret)
}

func (this *QLineEdit) SetDragEnabled(b bool) {
	C.QLineEdit_SetDragEnabled(this.h, (C.bool)(b))
}

func (this *QLineEdit) DragEnabled() bool {
	ret := C.QLineEdit_DragEnabled(this.h)
	return (bool)(ret)
}

func (this *QLineEdit) SetCursorMoveStyle(style uintptr) {
	C.QLineEdit_SetCursorMoveStyle(this.h, (C.uintptr_t)(style))
}

func (this *QLineEdit) CursorMoveStyle() uintptr {
	ret := C.QLineEdit_CursorMoveStyle(this.h)
	return (uintptr)(ret)
}

func (this *QLineEdit) InputMask() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLineEdit_InputMask(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLineEdit) SetInputMask(inputMask string) {
	inputMask_Cstring := C.CString(inputMask)
	defer C.free(unsafe.Pointer(inputMask_Cstring))
	C.QLineEdit_SetInputMask(this.h, inputMask_Cstring, C.ulong(len(inputMask)))
}

func (this *QLineEdit) HasAcceptableInput() bool {
	ret := C.QLineEdit_HasAcceptableInput(this.h)
	return (bool)(ret)
}

func (this *QLineEdit) SetTextMargins(left int, top int, right int, bottom int) {
	C.QLineEdit_SetTextMargins(this.h, (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))
}

func (this *QLineEdit) SetTextMarginsWithMargins(margins *QMargins) {
	C.QLineEdit_SetTextMarginsWithMargins(this.h, margins.cPointer())
}

func (this *QLineEdit) GetTextMargins(left *int, top *int, right *int, bottom *int) {
	C.QLineEdit_GetTextMargins(this.h, (*C.int)(unsafe.Pointer(left)), (*C.int)(unsafe.Pointer(top)), (*C.int)(unsafe.Pointer(right)), (*C.int)(unsafe.Pointer(bottom)))
}

func (this *QLineEdit) TextMargins() *QMargins {
	ret := C.QLineEdit_TextMargins(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMargins(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMargins) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLineEdit) AddAction(action *QAction, position uintptr) {
	C.QLineEdit_AddAction(this.h, action.cPointer(), (C.uintptr_t)(position))
}

func (this *QLineEdit) AddAction2(icon *QIcon, position uintptr) *QAction {
	ret := C.QLineEdit_AddAction2(this.h, icon.cPointer(), (C.uintptr_t)(position))
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QLineEdit) SetText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QLineEdit_SetText(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QLineEdit) Clear() {
	C.QLineEdit_Clear(this.h)
}

func (this *QLineEdit) SelectAll() {
	C.QLineEdit_SelectAll(this.h)
}

func (this *QLineEdit) Undo() {
	C.QLineEdit_Undo(this.h)
}

func (this *QLineEdit) Redo() {
	C.QLineEdit_Redo(this.h)
}

func (this *QLineEdit) Cut() {
	C.QLineEdit_Cut(this.h)
}

func (this *QLineEdit) Copy() {
	C.QLineEdit_Copy(this.h)
}

func (this *QLineEdit) Paste() {
	C.QLineEdit_Paste(this.h)
}

func (this *QLineEdit) Deselect() {
	C.QLineEdit_Deselect(this.h)
}

func (this *QLineEdit) Insert(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QLineEdit_Insert(this.h, param1_Cstring, C.ulong(len(param1)))
}

func (this *QLineEdit) CreateStandardContextMenu() *QMenu {
	ret := C.QLineEdit_CreateStandardContextMenu(this.h)
	return newQMenu_U(unsafe.Pointer(ret))
}

func (this *QLineEdit) TextChanged(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QLineEdit_TextChanged(this.h, param1_Cstring, C.ulong(len(param1)))
}

func (this *QLineEdit) OnTextChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QLineEdit_connect_TextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QLineEdit) TextEdited(param1 string) {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	C.QLineEdit_TextEdited(this.h, param1_Cstring, C.ulong(len(param1)))
}

func (this *QLineEdit) OnTextEdited(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QLineEdit_connect_TextEdited(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QLineEdit) CursorPositionChanged(param1 int, param2 int) {
	C.QLineEdit_CursorPositionChanged(this.h, (C.int)(param1), (C.int)(param2))
}

func (this *QLineEdit) OnCursorPositionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QLineEdit_connect_CursorPositionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QLineEdit) ReturnPressed() {
	C.QLineEdit_ReturnPressed(this.h)
}

func (this *QLineEdit) OnReturnPressed(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QLineEdit_connect_ReturnPressed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QLineEdit) EditingFinished() {
	C.QLineEdit_EditingFinished(this.h)
}

func (this *QLineEdit) OnEditingFinished(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QLineEdit_connect_EditingFinished(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QLineEdit) SelectionChanged() {
	C.QLineEdit_SelectionChanged(this.h)
}

func (this *QLineEdit) OnSelectionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QLineEdit_connect_SelectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QLineEdit) InputRejected() {
	C.QLineEdit_InputRejected(this.h)
}

func (this *QLineEdit) OnInputRejected(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QLineEdit_connect_InputRejected(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QLineEdit) InputMethodQuery(param1 uintptr) *QVariant {
	ret := C.QLineEdit_InputMethodQuery(this.h, (C.uintptr_t)(param1))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLineEdit) InputMethodQuery2(property uintptr, argument QVariant) *QVariant {
	ret := C.QLineEdit_InputMethodQuery2(this.h, (C.uintptr_t)(property), argument.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLineEdit) Event(param1 *QEvent) bool {
	ret := C.QLineEdit_Event(this.h, param1.cPointer())
	return (bool)(ret)
}

func QLineEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLineEdit_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLineEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLineEdit_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLineEdit_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLineEdit_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QLineEdit_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QLineEdit_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QLineEdit) CursorForward2(mark bool, steps int) {
	C.QLineEdit_CursorForward2(this.h, (C.bool)(mark), (C.int)(steps))
}

func (this *QLineEdit) CursorBackward2(mark bool, steps int) {
	C.QLineEdit_CursorBackward2(this.h, (C.bool)(mark), (C.int)(steps))
}

func (this *QLineEdit) Delete() {
	C.QLineEdit_Delete(this.h)
}
