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
	QLineEdit__LeadingPosition  QLineEdit__ActionPosition = 0
	QLineEdit__TrailingPosition QLineEdit__ActionPosition = 1
)

type QLineEdit__EchoMode int

const (
	QLineEdit__Normal             QLineEdit__EchoMode = 0
	QLineEdit__NoEcho             QLineEdit__EchoMode = 1
	QLineEdit__Password           QLineEdit__EchoMode = 2
	QLineEdit__PasswordEchoOnEdit QLineEdit__EchoMode = 3
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

func (this *QLineEdit) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQLineEdit(h *C.QLineEdit) *QLineEdit {
	if h == nil {
		return nil
	}
	return &QLineEdit{h: h, QWidget: UnsafeNewQWidget(unsafe.Pointer(h))}
}

func UnsafeNewQLineEdit(h unsafe.Pointer) *QLineEdit {
	return newQLineEdit((*C.QLineEdit)(h))
}

// NewQLineEdit constructs a new QLineEdit object.
func NewQLineEdit(parent *QWidget) *QLineEdit {
	ret := C.QLineEdit_new(parent.cPointer())
	return newQLineEdit(ret)
}

// NewQLineEdit2 constructs a new QLineEdit object.
func NewQLineEdit2() *QLineEdit {
	ret := C.QLineEdit_new2()
	return newQLineEdit(ret)
}

// NewQLineEdit3 constructs a new QLineEdit object.
func NewQLineEdit3(param1 string) *QLineEdit {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	ret := C.QLineEdit_new3(param1_ms)
	return newQLineEdit(ret)
}

// NewQLineEdit4 constructs a new QLineEdit object.
func NewQLineEdit4(param1 string, parent *QWidget) *QLineEdit {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	ret := C.QLineEdit_new4(param1_ms, parent.cPointer())
	return newQLineEdit(ret)
}

func (this *QLineEdit) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QLineEdit_MetaObject(this.h)))
}

func (this *QLineEdit) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QLineEdit_Metacast(this.h, param1_Cstring))
}

func QLineEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLineEdit_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLineEdit_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLineEdit_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLineEdit) Text() string {
	var _ms C.struct_miqt_string = C.QLineEdit_Text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLineEdit) DisplayText() string {
	var _ms C.struct_miqt_string = C.QLineEdit_DisplayText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLineEdit) PlaceholderText() string {
	var _ms C.struct_miqt_string = C.QLineEdit_PlaceholderText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLineEdit) SetPlaceholderText(placeholderText string) {
	placeholderText_ms := C.struct_miqt_string{}
	placeholderText_ms.data = C.CString(placeholderText)
	placeholderText_ms.len = C.size_t(len(placeholderText))
	defer C.free(unsafe.Pointer(placeholderText_ms.data))
	C.QLineEdit_SetPlaceholderText(this.h, placeholderText_ms)
}

func (this *QLineEdit) MaxLength() int {
	return (int)(C.QLineEdit_MaxLength(this.h))
}

func (this *QLineEdit) SetMaxLength(maxLength int) {
	C.QLineEdit_SetMaxLength(this.h, (C.int)(maxLength))
}

func (this *QLineEdit) SetFrame(frame bool) {
	C.QLineEdit_SetFrame(this.h, (C.bool)(frame))
}

func (this *QLineEdit) HasFrame() bool {
	return (bool)(C.QLineEdit_HasFrame(this.h))
}

func (this *QLineEdit) SetClearButtonEnabled(enable bool) {
	C.QLineEdit_SetClearButtonEnabled(this.h, (C.bool)(enable))
}

func (this *QLineEdit) IsClearButtonEnabled() bool {
	return (bool)(C.QLineEdit_IsClearButtonEnabled(this.h))
}

func (this *QLineEdit) EchoMode() QLineEdit__EchoMode {
	return (QLineEdit__EchoMode)(C.QLineEdit_EchoMode(this.h))
}

func (this *QLineEdit) SetEchoMode(echoMode QLineEdit__EchoMode) {
	C.QLineEdit_SetEchoMode(this.h, (C.int)(echoMode))
}

func (this *QLineEdit) IsReadOnly() bool {
	return (bool)(C.QLineEdit_IsReadOnly(this.h))
}

func (this *QLineEdit) SetReadOnly(readOnly bool) {
	C.QLineEdit_SetReadOnly(this.h, (C.bool)(readOnly))
}

func (this *QLineEdit) SetValidator(validator *QValidator) {
	C.QLineEdit_SetValidator(this.h, validator.cPointer())
}

func (this *QLineEdit) Validator() *QValidator {
	return UnsafeNewQValidator(unsafe.Pointer(C.QLineEdit_Validator(this.h)))
}

func (this *QLineEdit) SetCompleter(completer *QCompleter) {
	C.QLineEdit_SetCompleter(this.h, completer.cPointer())
}

func (this *QLineEdit) Completer() *QCompleter {
	return UnsafeNewQCompleter(unsafe.Pointer(C.QLineEdit_Completer(this.h)))
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
	return (int)(C.QLineEdit_CursorPosition(this.h))
}

func (this *QLineEdit) SetCursorPosition(cursorPosition int) {
	C.QLineEdit_SetCursorPosition(this.h, (C.int)(cursorPosition))
}

func (this *QLineEdit) CursorPositionAt(pos *QPoint) int {
	return (int)(C.QLineEdit_CursorPositionAt(this.h, pos.cPointer()))
}

func (this *QLineEdit) SetAlignment(flag AlignmentFlag) {
	C.QLineEdit_SetAlignment(this.h, (C.int)(flag))
}

func (this *QLineEdit) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QLineEdit_Alignment(this.h))
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
	return (bool)(C.QLineEdit_IsModified(this.h))
}

func (this *QLineEdit) SetModified(modified bool) {
	C.QLineEdit_SetModified(this.h, (C.bool)(modified))
}

func (this *QLineEdit) SetSelection(param1 int, param2 int) {
	C.QLineEdit_SetSelection(this.h, (C.int)(param1), (C.int)(param2))
}

func (this *QLineEdit) HasSelectedText() bool {
	return (bool)(C.QLineEdit_HasSelectedText(this.h))
}

func (this *QLineEdit) SelectedText() string {
	var _ms C.struct_miqt_string = C.QLineEdit_SelectedText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLineEdit) SelectionStart() int {
	return (int)(C.QLineEdit_SelectionStart(this.h))
}

func (this *QLineEdit) SelectionEnd() int {
	return (int)(C.QLineEdit_SelectionEnd(this.h))
}

func (this *QLineEdit) SelectionLength() int {
	return (int)(C.QLineEdit_SelectionLength(this.h))
}

func (this *QLineEdit) IsUndoAvailable() bool {
	return (bool)(C.QLineEdit_IsUndoAvailable(this.h))
}

func (this *QLineEdit) IsRedoAvailable() bool {
	return (bool)(C.QLineEdit_IsRedoAvailable(this.h))
}

func (this *QLineEdit) SetDragEnabled(b bool) {
	C.QLineEdit_SetDragEnabled(this.h, (C.bool)(b))
}

func (this *QLineEdit) DragEnabled() bool {
	return (bool)(C.QLineEdit_DragEnabled(this.h))
}

func (this *QLineEdit) SetCursorMoveStyle(style CursorMoveStyle) {
	C.QLineEdit_SetCursorMoveStyle(this.h, (C.int)(style))
}

func (this *QLineEdit) CursorMoveStyle() CursorMoveStyle {
	return (CursorMoveStyle)(C.QLineEdit_CursorMoveStyle(this.h))
}

func (this *QLineEdit) InputMask() string {
	var _ms C.struct_miqt_string = C.QLineEdit_InputMask(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLineEdit) SetInputMask(inputMask string) {
	inputMask_ms := C.struct_miqt_string{}
	inputMask_ms.data = C.CString(inputMask)
	inputMask_ms.len = C.size_t(len(inputMask))
	defer C.free(unsafe.Pointer(inputMask_ms.data))
	C.QLineEdit_SetInputMask(this.h, inputMask_ms)
}

func (this *QLineEdit) HasAcceptableInput() bool {
	return (bool)(C.QLineEdit_HasAcceptableInput(this.h))
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
	C.QLineEdit_AddAction(this.h, action.cPointer(), (C.int)(position))
}

func (this *QLineEdit) AddAction2(icon *QIcon, position QLineEdit__ActionPosition) *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QLineEdit_AddAction2(this.h, icon.cPointer(), (C.int)(position))))
}

func (this *QLineEdit) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QLineEdit_SetText(this.h, text_ms)
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
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QLineEdit_Insert(this.h, param1_ms)
}

func (this *QLineEdit) CreateStandardContextMenu() *QMenu {
	return UnsafeNewQMenu(unsafe.Pointer(C.QLineEdit_CreateStandardContextMenu(this.h)))
}

func (this *QLineEdit) TextChanged(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QLineEdit_TextChanged(this.h, param1_ms)
}
func (this *QLineEdit) OnTextChanged(slot func(param1 string)) {
	C.QLineEdit_connect_TextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_TextChanged
func miqt_exec_callback_QLineEdit_TextChanged(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QLineEdit) TextEdited(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QLineEdit_TextEdited(this.h, param1_ms)
}
func (this *QLineEdit) OnTextEdited(slot func(param1 string)) {
	C.QLineEdit_connect_TextEdited(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_TextEdited
func miqt_exec_callback_QLineEdit_TextEdited(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QLineEdit) CursorPositionChanged(param1 int, param2 int) {
	C.QLineEdit_CursorPositionChanged(this.h, (C.int)(param1), (C.int)(param2))
}
func (this *QLineEdit) OnCursorPositionChanged(slot func(param1 int, param2 int)) {
	C.QLineEdit_connect_CursorPositionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_CursorPositionChanged
func miqt_exec_callback_QLineEdit_CursorPositionChanged(cb C.intptr_t, param1 C.int, param2 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int, param2 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	slotval2 := (int)(param2)

	gofunc(slotval1, slotval2)
}

func (this *QLineEdit) ReturnPressed() {
	C.QLineEdit_ReturnPressed(this.h)
}
func (this *QLineEdit) OnReturnPressed(slot func()) {
	C.QLineEdit_connect_ReturnPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_ReturnPressed
func miqt_exec_callback_QLineEdit_ReturnPressed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLineEdit) EditingFinished() {
	C.QLineEdit_EditingFinished(this.h)
}
func (this *QLineEdit) OnEditingFinished(slot func()) {
	C.QLineEdit_connect_EditingFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_EditingFinished
func miqt_exec_callback_QLineEdit_EditingFinished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLineEdit) SelectionChanged() {
	C.QLineEdit_SelectionChanged(this.h)
}
func (this *QLineEdit) OnSelectionChanged(slot func()) {
	C.QLineEdit_connect_SelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_SelectionChanged
func miqt_exec_callback_QLineEdit_SelectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLineEdit) InputRejected() {
	C.QLineEdit_InputRejected(this.h)
}
func (this *QLineEdit) OnInputRejected(slot func()) {
	C.QLineEdit_connect_InputRejected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_InputRejected
func miqt_exec_callback_QLineEdit_InputRejected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLineEdit) InputMethodQuery(param1 InputMethodQuery) *QVariant {
	_ret := C.QLineEdit_InputMethodQuery(this.h, (C.int)(param1))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineEdit) InputMethodQuery2(property InputMethodQuery, argument QVariant) *QVariant {
	_ret := C.QLineEdit_InputMethodQuery2(this.h, (C.int)(property), argument.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineEdit) Event(param1 *QEvent) bool {
	return (bool)(C.QLineEdit_Event(this.h, param1.cPointer()))
}

func QLineEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLineEdit_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLineEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLineEdit_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLineEdit_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLineEdit_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLineEdit_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLineEdit_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
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
