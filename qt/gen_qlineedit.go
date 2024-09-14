package qt

/*

#include "gen_qlineedit.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QLineEdit__ActionPosition int

const (
	QLineEdit__ActionPosition__LeadingPosition  QLineEdit__ActionPosition = 0
	QLineEdit__ActionPosition__TrailingPosition QLineEdit__ActionPosition = 1
)

type QLineEdit__EchoMode int

const (
	QLineEdit__EchoMode__Normal             QLineEdit__EchoMode = 0
	QLineEdit__EchoMode__NoEcho             QLineEdit__EchoMode = 1
	QLineEdit__EchoMode__Password           QLineEdit__EchoMode = 2
	QLineEdit__EchoMode__PasswordEchoOnEdit QLineEdit__EchoMode = 3
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
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	ret := C.QLineEdit_new2((*C.struct_miqt_string)(param1_ms))
	return newQLineEdit(ret)
}

// NewQLineEdit3 constructs a new QLineEdit object.
func NewQLineEdit3(parent *QWidget) *QLineEdit {
	ret := C.QLineEdit_new3(parent.cPointer())
	return newQLineEdit(ret)
}

// NewQLineEdit4 constructs a new QLineEdit object.
func NewQLineEdit4(param1 string, parent *QWidget) *QLineEdit {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	ret := C.QLineEdit_new4((*C.struct_miqt_string)(param1_ms), parent.cPointer())
	return newQLineEdit(ret)
}

func (this *QLineEdit) MetaObject() *QMetaObject {
	_ret := C.QLineEdit_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QLineEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QLineEdit_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QLineEdit_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QLineEdit_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLineEdit) Text() string {
	var _ms *C.struct_miqt_string = C.QLineEdit_Text(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLineEdit) DisplayText() string {
	var _ms *C.struct_miqt_string = C.QLineEdit_DisplayText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLineEdit) PlaceholderText() string {
	var _ms *C.struct_miqt_string = C.QLineEdit_PlaceholderText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLineEdit) SetPlaceholderText(placeholderText string) {
	placeholderText_ms := miqt_strdupg(placeholderText)
	defer C.free(placeholderText_ms)
	C.QLineEdit_SetPlaceholderText(this.h, (*C.struct_miqt_string)(placeholderText_ms))
}

func (this *QLineEdit) MaxLength() int {
	_ret := C.QLineEdit_MaxLength(this.h)
	return (int)(_ret)
}

func (this *QLineEdit) SetMaxLength(maxLength int) {
	C.QLineEdit_SetMaxLength(this.h, (C.int)(maxLength))
}

func (this *QLineEdit) SetFrame(frame bool) {
	C.QLineEdit_SetFrame(this.h, (C.bool)(frame))
}

func (this *QLineEdit) HasFrame() bool {
	_ret := C.QLineEdit_HasFrame(this.h)
	return (bool)(_ret)
}

func (this *QLineEdit) SetClearButtonEnabled(enable bool) {
	C.QLineEdit_SetClearButtonEnabled(this.h, (C.bool)(enable))
}

func (this *QLineEdit) IsClearButtonEnabled() bool {
	_ret := C.QLineEdit_IsClearButtonEnabled(this.h)
	return (bool)(_ret)
}

func (this *QLineEdit) EchoMode() QLineEdit__EchoMode {
	_ret := C.QLineEdit_EchoMode(this.h)
	return (QLineEdit__EchoMode)(_ret)
}

func (this *QLineEdit) SetEchoMode(echoMode QLineEdit__EchoMode) {
	C.QLineEdit_SetEchoMode(this.h, (C.uintptr_t)(echoMode))
}

func (this *QLineEdit) IsReadOnly() bool {
	_ret := C.QLineEdit_IsReadOnly(this.h)
	return (bool)(_ret)
}

func (this *QLineEdit) SetReadOnly(readOnly bool) {
	C.QLineEdit_SetReadOnly(this.h, (C.bool)(readOnly))
}

func (this *QLineEdit) SetValidator(validator *QValidator) {
	C.QLineEdit_SetValidator(this.h, validator.cPointer())
}

func (this *QLineEdit) Validator() *QValidator {
	_ret := C.QLineEdit_Validator(this.h)
	return newQValidator_U(unsafe.Pointer(_ret))
}

func (this *QLineEdit) SetCompleter(completer *QCompleter) {
	C.QLineEdit_SetCompleter(this.h, completer.cPointer())
}

func (this *QLineEdit) Completer() *QCompleter {
	_ret := C.QLineEdit_Completer(this.h)
	return newQCompleter_U(unsafe.Pointer(_ret))
}

func (this *QLineEdit) SizeHint() *QSize {
	_ret := C.QLineEdit_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineEdit) MinimumSizeHint() *QSize {
	_ret := C.QLineEdit_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineEdit) CursorPosition() int {
	_ret := C.QLineEdit_CursorPosition(this.h)
	return (int)(_ret)
}

func (this *QLineEdit) SetCursorPosition(cursorPosition int) {
	C.QLineEdit_SetCursorPosition(this.h, (C.int)(cursorPosition))
}

func (this *QLineEdit) CursorPositionAt(pos *QPoint) int {
	_ret := C.QLineEdit_CursorPositionAt(this.h, pos.cPointer())
	return (int)(_ret)
}

func (this *QLineEdit) SetAlignment(flag int) {
	C.QLineEdit_SetAlignment(this.h, (C.int)(flag))
}

func (this *QLineEdit) Alignment() int {
	_ret := C.QLineEdit_Alignment(this.h)
	return (int)(_ret)
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
	_ret := C.QLineEdit_IsModified(this.h)
	return (bool)(_ret)
}

func (this *QLineEdit) SetModified(modified bool) {
	C.QLineEdit_SetModified(this.h, (C.bool)(modified))
}

func (this *QLineEdit) SetSelection(param1 int, param2 int) {
	C.QLineEdit_SetSelection(this.h, (C.int)(param1), (C.int)(param2))
}

func (this *QLineEdit) HasSelectedText() bool {
	_ret := C.QLineEdit_HasSelectedText(this.h)
	return (bool)(_ret)
}

func (this *QLineEdit) SelectedText() string {
	var _ms *C.struct_miqt_string = C.QLineEdit_SelectedText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLineEdit) SelectionStart() int {
	_ret := C.QLineEdit_SelectionStart(this.h)
	return (int)(_ret)
}

func (this *QLineEdit) SelectionEnd() int {
	_ret := C.QLineEdit_SelectionEnd(this.h)
	return (int)(_ret)
}

func (this *QLineEdit) SelectionLength() int {
	_ret := C.QLineEdit_SelectionLength(this.h)
	return (int)(_ret)
}

func (this *QLineEdit) IsUndoAvailable() bool {
	_ret := C.QLineEdit_IsUndoAvailable(this.h)
	return (bool)(_ret)
}

func (this *QLineEdit) IsRedoAvailable() bool {
	_ret := C.QLineEdit_IsRedoAvailable(this.h)
	return (bool)(_ret)
}

func (this *QLineEdit) SetDragEnabled(b bool) {
	C.QLineEdit_SetDragEnabled(this.h, (C.bool)(b))
}

func (this *QLineEdit) DragEnabled() bool {
	_ret := C.QLineEdit_DragEnabled(this.h)
	return (bool)(_ret)
}

func (this *QLineEdit) SetCursorMoveStyle(style CursorMoveStyle) {
	C.QLineEdit_SetCursorMoveStyle(this.h, (C.uintptr_t)(style))
}

func (this *QLineEdit) CursorMoveStyle() CursorMoveStyle {
	_ret := C.QLineEdit_CursorMoveStyle(this.h)
	return (CursorMoveStyle)(_ret)
}

func (this *QLineEdit) InputMask() string {
	var _ms *C.struct_miqt_string = C.QLineEdit_InputMask(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLineEdit) SetInputMask(inputMask string) {
	inputMask_ms := miqt_strdupg(inputMask)
	defer C.free(inputMask_ms)
	C.QLineEdit_SetInputMask(this.h, (*C.struct_miqt_string)(inputMask_ms))
}

func (this *QLineEdit) HasAcceptableInput() bool {
	_ret := C.QLineEdit_HasAcceptableInput(this.h)
	return (bool)(_ret)
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
	_ret := C.QLineEdit_TextMargins(this.h)
	_goptr := newQMargins(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineEdit) AddAction(action *QAction, position QLineEdit__ActionPosition) {
	C.QLineEdit_AddAction(this.h, action.cPointer(), (C.uintptr_t)(position))
}

func (this *QLineEdit) AddAction2(icon *QIcon, position QLineEdit__ActionPosition) *QAction {
	_ret := C.QLineEdit_AddAction2(this.h, icon.cPointer(), (C.uintptr_t)(position))
	return newQAction_U(unsafe.Pointer(_ret))
}

func (this *QLineEdit) SetText(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QLineEdit_SetText(this.h, (*C.struct_miqt_string)(text_ms))
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
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	C.QLineEdit_Insert(this.h, (*C.struct_miqt_string)(param1_ms))
}

func (this *QLineEdit) CreateStandardContextMenu() *QMenu {
	_ret := C.QLineEdit_CreateStandardContextMenu(this.h)
	return newQMenu_U(unsafe.Pointer(_ret))
}

func (this *QLineEdit) TextChanged(param1 string) {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	C.QLineEdit_TextChanged(this.h, (*C.struct_miqt_string)(param1_ms))
}
func (this *QLineEdit) OnTextChanged(slot func(param1 string)) {
	C.QLineEdit_connect_TextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QLineEdit_TextChanged
func miqt_exec_callback_QLineEdit_TextChanged(cb *C.void, param1 *C.struct_miqt_string) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms *C.struct_miqt_string = param1
	param1_ret := C.GoStringN(&param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QLineEdit) TextEdited(param1 string) {
	param1_ms := miqt_strdupg(param1)
	defer C.free(param1_ms)
	C.QLineEdit_TextEdited(this.h, (*C.struct_miqt_string)(param1_ms))
}
func (this *QLineEdit) OnTextEdited(slot func(param1 string)) {
	C.QLineEdit_connect_TextEdited(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QLineEdit_TextEdited
func miqt_exec_callback_QLineEdit_TextEdited(cb *C.void, param1 *C.struct_miqt_string) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms *C.struct_miqt_string = param1
	param1_ret := C.GoStringN(&param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QLineEdit) CursorPositionChanged(param1 int, param2 int) {
	C.QLineEdit_CursorPositionChanged(this.h, (C.int)(param1), (C.int)(param2))
}
func (this *QLineEdit) OnCursorPositionChanged(slot func(param1 int, param2 int)) {
	C.QLineEdit_connect_CursorPositionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QLineEdit_CursorPositionChanged
func miqt_exec_callback_QLineEdit_CursorPositionChanged(cb *C.void, param1 C.int, param2 C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 int, param2 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	param1_ret := param1
	slotval1 := (int)(param1_ret)

	param2_ret := param2
	slotval2 := (int)(param2_ret)

	gofunc(slotval1, slotval2)
}

func (this *QLineEdit) ReturnPressed() {
	C.QLineEdit_ReturnPressed(this.h)
}
func (this *QLineEdit) OnReturnPressed(slot func()) {
	C.QLineEdit_connect_ReturnPressed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QLineEdit_ReturnPressed
func miqt_exec_callback_QLineEdit_ReturnPressed(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLineEdit) EditingFinished() {
	C.QLineEdit_EditingFinished(this.h)
}
func (this *QLineEdit) OnEditingFinished(slot func()) {
	C.QLineEdit_connect_EditingFinished(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QLineEdit_EditingFinished
func miqt_exec_callback_QLineEdit_EditingFinished(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLineEdit) SelectionChanged() {
	C.QLineEdit_SelectionChanged(this.h)
}
func (this *QLineEdit) OnSelectionChanged(slot func()) {
	C.QLineEdit_connect_SelectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QLineEdit_SelectionChanged
func miqt_exec_callback_QLineEdit_SelectionChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLineEdit) InputRejected() {
	C.QLineEdit_InputRejected(this.h)
}
func (this *QLineEdit) OnInputRejected(slot func()) {
	C.QLineEdit_connect_InputRejected(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QLineEdit_InputRejected
func miqt_exec_callback_QLineEdit_InputRejected(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLineEdit) InputMethodQuery(param1 InputMethodQuery) *QVariant {
	_ret := C.QLineEdit_InputMethodQuery(this.h, (C.uintptr_t)(param1))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineEdit) InputMethodQuery2(property InputMethodQuery, argument QVariant) *QVariant {
	_ret := C.QLineEdit_InputMethodQuery2(this.h, (C.uintptr_t)(property), argument.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineEdit) Event(param1 *QEvent) bool {
	_ret := C.QLineEdit_Event(this.h, param1.cPointer())
	return (bool)(_ret)
}

func QLineEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QLineEdit_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QLineEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QLineEdit_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QLineEdit_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QLineEdit_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QLineEdit_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QLineEdit_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLineEdit) CursorForward2(mark bool, steps int) {
	C.QLineEdit_CursorForward2(this.h, (C.bool)(mark), (C.int)(steps))
}

func (this *QLineEdit) CursorBackward2(mark bool, steps int) {
	C.QLineEdit_CursorBackward2(this.h, (C.bool)(mark), (C.int)(steps))
}

// Delete this object from C++ memory.
func (this *QLineEdit) Delete() {
	C.QLineEdit_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLineEdit) GoGC() {
	runtime.SetFinalizer(this, func(this *QLineEdit) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
