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

// newQLineEdit constructs the type using only CGO pointers.
func newQLineEdit(h *C.QLineEdit) *QLineEdit {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QLineEdit_virtbase(h, &outptr_QWidget)

	return &QLineEdit{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQLineEdit constructs the type using only unsafe pointers.
func UnsafeNewQLineEdit(h unsafe.Pointer) *QLineEdit {
	return newQLineEdit((*C.QLineEdit)(h))
}

// NewQLineEdit constructs a new QLineEdit object.
func NewQLineEdit(parent *QWidget) *QLineEdit {

	return newQLineEdit(C.QLineEdit_new(parent.cPointer()))
}

// NewQLineEdit2 constructs a new QLineEdit object.
func NewQLineEdit2() *QLineEdit {

	return newQLineEdit(C.QLineEdit_new2())
}

// NewQLineEdit3 constructs a new QLineEdit object.
func NewQLineEdit3(param1 string) *QLineEdit {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))

	return newQLineEdit(C.QLineEdit_new3(param1_ms))
}

// NewQLineEdit4 constructs a new QLineEdit object.
func NewQLineEdit4(param1 string, parent *QWidget) *QLineEdit {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))

	return newQLineEdit(C.QLineEdit_new4(param1_ms, parent.cPointer()))
}

func (this *QLineEdit) MetaObject() *QMetaObject {
	return newQMetaObject(C.QLineEdit_metaObject(this.h))
}

func (this *QLineEdit) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QLineEdit_metacast(this.h, param1_Cstring))
}

func QLineEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLineEdit_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLineEdit_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLineEdit_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLineEdit) Text() string {
	var _ms C.struct_miqt_string = C.QLineEdit_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLineEdit) DisplayText() string {
	var _ms C.struct_miqt_string = C.QLineEdit_displayText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLineEdit) PlaceholderText() string {
	var _ms C.struct_miqt_string = C.QLineEdit_placeholderText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLineEdit) SetPlaceholderText(placeholderText string) {
	placeholderText_ms := C.struct_miqt_string{}
	placeholderText_ms.data = C.CString(placeholderText)
	placeholderText_ms.len = C.size_t(len(placeholderText))
	defer C.free(unsafe.Pointer(placeholderText_ms.data))
	C.QLineEdit_setPlaceholderText(this.h, placeholderText_ms)
}

func (this *QLineEdit) MaxLength() int {
	return (int)(C.QLineEdit_maxLength(this.h))
}

func (this *QLineEdit) SetMaxLength(maxLength int) {
	C.QLineEdit_setMaxLength(this.h, (C.int)(maxLength))
}

func (this *QLineEdit) SetFrame(frame bool) {
	C.QLineEdit_setFrame(this.h, (C.bool)(frame))
}

func (this *QLineEdit) HasFrame() bool {
	return (bool)(C.QLineEdit_hasFrame(this.h))
}

func (this *QLineEdit) SetClearButtonEnabled(enable bool) {
	C.QLineEdit_setClearButtonEnabled(this.h, (C.bool)(enable))
}

func (this *QLineEdit) IsClearButtonEnabled() bool {
	return (bool)(C.QLineEdit_isClearButtonEnabled(this.h))
}

func (this *QLineEdit) EchoMode() QLineEdit__EchoMode {
	return (QLineEdit__EchoMode)(C.QLineEdit_echoMode(this.h))
}

func (this *QLineEdit) SetEchoMode(echoMode QLineEdit__EchoMode) {
	C.QLineEdit_setEchoMode(this.h, (C.int)(echoMode))
}

func (this *QLineEdit) IsReadOnly() bool {
	return (bool)(C.QLineEdit_isReadOnly(this.h))
}

func (this *QLineEdit) SetReadOnly(readOnly bool) {
	C.QLineEdit_setReadOnly(this.h, (C.bool)(readOnly))
}

func (this *QLineEdit) SetValidator(validator *QValidator) {
	C.QLineEdit_setValidator(this.h, validator.cPointer())
}

func (this *QLineEdit) Validator() *QValidator {
	return newQValidator(C.QLineEdit_validator(this.h))
}

func (this *QLineEdit) SetCompleter(completer *QCompleter) {
	C.QLineEdit_setCompleter(this.h, completer.cPointer())
}

func (this *QLineEdit) Completer() *QCompleter {
	return newQCompleter(C.QLineEdit_completer(this.h))
}

func (this *QLineEdit) SizeHint() *QSize {
	_goptr := newQSize(C.QLineEdit_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineEdit) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QLineEdit_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineEdit) CursorPosition() int {
	return (int)(C.QLineEdit_cursorPosition(this.h))
}

func (this *QLineEdit) SetCursorPosition(cursorPosition int) {
	C.QLineEdit_setCursorPosition(this.h, (C.int)(cursorPosition))
}

func (this *QLineEdit) CursorPositionAt(pos *QPoint) int {
	return (int)(C.QLineEdit_cursorPositionAt(this.h, pos.cPointer()))
}

func (this *QLineEdit) SetAlignment(flag AlignmentFlag) {
	C.QLineEdit_setAlignment(this.h, (C.int)(flag))
}

func (this *QLineEdit) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QLineEdit_alignment(this.h))
}

func (this *QLineEdit) CursorForward(mark bool) {
	C.QLineEdit_cursorForward(this.h, (C.bool)(mark))
}

func (this *QLineEdit) CursorBackward(mark bool) {
	C.QLineEdit_cursorBackward(this.h, (C.bool)(mark))
}

func (this *QLineEdit) CursorWordForward(mark bool) {
	C.QLineEdit_cursorWordForward(this.h, (C.bool)(mark))
}

func (this *QLineEdit) CursorWordBackward(mark bool) {
	C.QLineEdit_cursorWordBackward(this.h, (C.bool)(mark))
}

func (this *QLineEdit) Backspace() {
	C.QLineEdit_backspace(this.h)
}

func (this *QLineEdit) Del() {
	C.QLineEdit_del(this.h)
}

func (this *QLineEdit) Home(mark bool) {
	C.QLineEdit_home(this.h, (C.bool)(mark))
}

func (this *QLineEdit) End(mark bool) {
	C.QLineEdit_end(this.h, (C.bool)(mark))
}

func (this *QLineEdit) IsModified() bool {
	return (bool)(C.QLineEdit_isModified(this.h))
}

func (this *QLineEdit) SetModified(modified bool) {
	C.QLineEdit_setModified(this.h, (C.bool)(modified))
}

func (this *QLineEdit) SetSelection(param1 int, param2 int) {
	C.QLineEdit_setSelection(this.h, (C.int)(param1), (C.int)(param2))
}

func (this *QLineEdit) HasSelectedText() bool {
	return (bool)(C.QLineEdit_hasSelectedText(this.h))
}

func (this *QLineEdit) SelectedText() string {
	var _ms C.struct_miqt_string = C.QLineEdit_selectedText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLineEdit) SelectionStart() int {
	return (int)(C.QLineEdit_selectionStart(this.h))
}

func (this *QLineEdit) SelectionEnd() int {
	return (int)(C.QLineEdit_selectionEnd(this.h))
}

func (this *QLineEdit) SelectionLength() int {
	return (int)(C.QLineEdit_selectionLength(this.h))
}

func (this *QLineEdit) IsUndoAvailable() bool {
	return (bool)(C.QLineEdit_isUndoAvailable(this.h))
}

func (this *QLineEdit) IsRedoAvailable() bool {
	return (bool)(C.QLineEdit_isRedoAvailable(this.h))
}

func (this *QLineEdit) SetDragEnabled(b bool) {
	C.QLineEdit_setDragEnabled(this.h, (C.bool)(b))
}

func (this *QLineEdit) DragEnabled() bool {
	return (bool)(C.QLineEdit_dragEnabled(this.h))
}

func (this *QLineEdit) SetCursorMoveStyle(style CursorMoveStyle) {
	C.QLineEdit_setCursorMoveStyle(this.h, (C.int)(style))
}

func (this *QLineEdit) CursorMoveStyle() CursorMoveStyle {
	return (CursorMoveStyle)(C.QLineEdit_cursorMoveStyle(this.h))
}

func (this *QLineEdit) InputMask() string {
	var _ms C.struct_miqt_string = C.QLineEdit_inputMask(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLineEdit) SetInputMask(inputMask string) {
	inputMask_ms := C.struct_miqt_string{}
	inputMask_ms.data = C.CString(inputMask)
	inputMask_ms.len = C.size_t(len(inputMask))
	defer C.free(unsafe.Pointer(inputMask_ms.data))
	C.QLineEdit_setInputMask(this.h, inputMask_ms)
}

func (this *QLineEdit) HasAcceptableInput() bool {
	return (bool)(C.QLineEdit_hasAcceptableInput(this.h))
}

func (this *QLineEdit) SetTextMargins(left int, top int, right int, bottom int) {
	C.QLineEdit_setTextMargins(this.h, (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))
}

func (this *QLineEdit) SetTextMarginsWithMargins(margins *QMargins) {
	C.QLineEdit_setTextMarginsWithMargins(this.h, margins.cPointer())
}

func (this *QLineEdit) GetTextMargins(left *int, top *int, right *int, bottom *int) {
	C.QLineEdit_getTextMargins(this.h, (*C.int)(unsafe.Pointer(left)), (*C.int)(unsafe.Pointer(top)), (*C.int)(unsafe.Pointer(right)), (*C.int)(unsafe.Pointer(bottom)))
}

func (this *QLineEdit) TextMargins() *QMargins {
	_goptr := newQMargins(C.QLineEdit_textMargins(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineEdit) AddAction(action *QAction, position QLineEdit__ActionPosition) {
	C.QLineEdit_addAction(this.h, action.cPointer(), (C.int)(position))
}

func (this *QLineEdit) AddAction2(icon *QIcon, position QLineEdit__ActionPosition) *QAction {
	return newQAction(C.QLineEdit_addAction2(this.h, icon.cPointer(), (C.int)(position)))
}

func (this *QLineEdit) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QLineEdit_setText(this.h, text_ms)
}

func (this *QLineEdit) Clear() {
	C.QLineEdit_clear(this.h)
}

func (this *QLineEdit) SelectAll() {
	C.QLineEdit_selectAll(this.h)
}

func (this *QLineEdit) Undo() {
	C.QLineEdit_undo(this.h)
}

func (this *QLineEdit) Redo() {
	C.QLineEdit_redo(this.h)
}

func (this *QLineEdit) Cut() {
	C.QLineEdit_cut(this.h)
}

func (this *QLineEdit) Copy() {
	C.QLineEdit_copy(this.h)
}

func (this *QLineEdit) Paste() {
	C.QLineEdit_paste(this.h)
}

func (this *QLineEdit) Deselect() {
	C.QLineEdit_deselect(this.h)
}

func (this *QLineEdit) Insert(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QLineEdit_insert(this.h, param1_ms)
}

func (this *QLineEdit) CreateStandardContextMenu() *QMenu {
	return newQMenu(C.QLineEdit_createStandardContextMenu(this.h))
}

func (this *QLineEdit) TextChanged(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QLineEdit_textChanged(this.h, param1_ms)
}
func (this *QLineEdit) OnTextChanged(slot func(param1 string)) {
	C.QLineEdit_connect_textChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_textChanged
func miqt_exec_callback_QLineEdit_textChanged(cb C.intptr_t, param1 C.struct_miqt_string) {
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
	C.QLineEdit_textEdited(this.h, param1_ms)
}
func (this *QLineEdit) OnTextEdited(slot func(param1 string)) {
	C.QLineEdit_connect_textEdited(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_textEdited
func miqt_exec_callback_QLineEdit_textEdited(cb C.intptr_t, param1 C.struct_miqt_string) {
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
	C.QLineEdit_cursorPositionChanged(this.h, (C.int)(param1), (C.int)(param2))
}
func (this *QLineEdit) OnCursorPositionChanged(slot func(param1 int, param2 int)) {
	C.QLineEdit_connect_cursorPositionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_cursorPositionChanged
func miqt_exec_callback_QLineEdit_cursorPositionChanged(cb C.intptr_t, param1 C.int, param2 C.int) {
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
	C.QLineEdit_returnPressed(this.h)
}
func (this *QLineEdit) OnReturnPressed(slot func()) {
	C.QLineEdit_connect_returnPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_returnPressed
func miqt_exec_callback_QLineEdit_returnPressed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLineEdit) EditingFinished() {
	C.QLineEdit_editingFinished(this.h)
}
func (this *QLineEdit) OnEditingFinished(slot func()) {
	C.QLineEdit_connect_editingFinished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_editingFinished
func miqt_exec_callback_QLineEdit_editingFinished(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLineEdit) SelectionChanged() {
	C.QLineEdit_selectionChanged(this.h)
}
func (this *QLineEdit) OnSelectionChanged(slot func()) {
	C.QLineEdit_connect_selectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_selectionChanged
func miqt_exec_callback_QLineEdit_selectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLineEdit) InputRejected() {
	C.QLineEdit_inputRejected(this.h)
}
func (this *QLineEdit) OnInputRejected(slot func()) {
	C.QLineEdit_connect_inputRejected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_inputRejected
func miqt_exec_callback_QLineEdit_inputRejected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QLineEdit) InputMethodQuery(param1 InputMethodQuery) *QVariant {
	_goptr := newQVariant(C.QLineEdit_inputMethodQuery(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineEdit) InputMethodQuery2(property InputMethodQuery, argument QVariant) *QVariant {
	_goptr := newQVariant(C.QLineEdit_inputMethodQuery2(this.h, (C.int)(property), argument.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLineEdit) Event(param1 *QEvent) bool {
	return (bool)(C.QLineEdit_event(this.h, param1.cPointer()))
}

func QLineEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLineEdit_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLineEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLineEdit_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLineEdit_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLineEdit_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLineEdit_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLineEdit_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLineEdit) CursorForward2(mark bool, steps int) {
	C.QLineEdit_cursorForward2(this.h, (C.bool)(mark), (C.int)(steps))
}

func (this *QLineEdit) CursorBackward2(mark bool, steps int) {
	C.QLineEdit_cursorBackward2(this.h, (C.bool)(mark), (C.int)(steps))
}

// InitStyleOption can only be called from a QLineEdit that was directly constructed.
func (this *QLineEdit) InitStyleOption(option *QStyleOptionFrame) {

	var _dynamic_cast_ok C.bool = false
	C.QLineEdit_protectedbase_initStyleOption(&_dynamic_cast_ok, unsafe.Pointer(this.h), option.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// CursorRect can only be called from a QLineEdit that was directly constructed.
func (this *QLineEdit) CursorRect() QRect {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQRect(C.QLineEdit_protectedbase_cursorRect(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// UpdateMicroFocus can only be called from a QLineEdit that was directly constructed.
func (this *QLineEdit) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QLineEdit_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QLineEdit that was directly constructed.
func (this *QLineEdit) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QLineEdit_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QLineEdit that was directly constructed.
func (this *QLineEdit) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QLineEdit_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QLineEdit that was directly constructed.
func (this *QLineEdit) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QLineEdit_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QLineEdit that was directly constructed.
func (this *QLineEdit) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QLineEdit_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QLineEdit that was directly constructed.
func (this *QLineEdit) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QLineEdit_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QLineEdit that was directly constructed.
func (this *QLineEdit) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QLineEdit_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QLineEdit that was directly constructed.
func (this *QLineEdit) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QLineEdit_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QLineEdit that was directly constructed.
func (this *QLineEdit) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QLineEdit_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QLineEdit) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QLineEdit_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLineEdit) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QLineEdit_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_sizeHint
func miqt_exec_callback_QLineEdit_sizeHint(self *C.QLineEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QLineEdit) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QLineEdit_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLineEdit) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QLineEdit_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_minimumSizeHint
func miqt_exec_callback_QLineEdit_minimumSizeHint(self *C.QLineEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QLineEdit) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QLineEdit_virtualbase_mousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QLineEdit_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_mousePressEvent
func miqt_exec_callback_QLineEdit_mousePressEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QLineEdit{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QLineEdit_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QLineEdit_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_mouseMoveEvent
func miqt_exec_callback_QLineEdit_mouseMoveEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QLineEdit{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QLineEdit_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QLineEdit_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_mouseReleaseEvent
func miqt_exec_callback_QLineEdit_mouseReleaseEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QLineEdit{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_MouseDoubleClickEvent(param1 *QMouseEvent) {

	C.QLineEdit_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnMouseDoubleClickEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QLineEdit_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_mouseDoubleClickEvent
func miqt_exec_callback_QLineEdit_mouseDoubleClickEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QLineEdit{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QLineEdit_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QLineEdit_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_keyPressEvent
func miqt_exec_callback_QLineEdit_keyPressEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QLineEdit{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_FocusInEvent(param1 *QFocusEvent) {

	C.QLineEdit_virtualbase_focusInEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnFocusInEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	ok := C.QLineEdit_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_focusInEvent
func miqt_exec_callback_QLineEdit_focusInEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1)

	gofunc((&QLineEdit{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_FocusOutEvent(param1 *QFocusEvent) {

	C.QLineEdit_virtualbase_focusOutEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnFocusOutEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	ok := C.QLineEdit_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_focusOutEvent
func miqt_exec_callback_QLineEdit_focusOutEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(param1)

	gofunc((&QLineEdit{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QLineEdit_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QLineEdit_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_paintEvent
func miqt_exec_callback_QLineEdit_paintEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QLineEdit{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_DragEnterEvent(param1 *QDragEnterEvent) {

	C.QLineEdit_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnDragEnterEvent(slot func(super func(param1 *QDragEnterEvent), param1 *QDragEnterEvent)) {
	ok := C.QLineEdit_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_dragEnterEvent
func miqt_exec_callback_QLineEdit_dragEnterEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragEnterEvent), param1 *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(param1)

	gofunc((&QLineEdit{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_DragMoveEvent(e *QDragMoveEvent) {

	C.QLineEdit_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QLineEdit) OnDragMoveEvent(slot func(super func(e *QDragMoveEvent), e *QDragMoveEvent)) {
	ok := C.QLineEdit_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_dragMoveEvent
func miqt_exec_callback_QLineEdit_dragMoveEvent(self *C.QLineEdit, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragMoveEvent), e *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(e)

	gofunc((&QLineEdit{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_DragLeaveEvent(e *QDragLeaveEvent) {

	C.QLineEdit_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QLineEdit) OnDragLeaveEvent(slot func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent)) {
	ok := C.QLineEdit_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_dragLeaveEvent
func miqt_exec_callback_QLineEdit_dragLeaveEvent(self *C.QLineEdit, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(e)

	gofunc((&QLineEdit{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_DropEvent(param1 *QDropEvent) {

	C.QLineEdit_virtualbase_dropEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnDropEvent(slot func(super func(param1 *QDropEvent), param1 *QDropEvent)) {
	ok := C.QLineEdit_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_dropEvent
func miqt_exec_callback_QLineEdit_dropEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDropEvent), param1 *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(param1)

	gofunc((&QLineEdit{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QLineEdit_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QLineEdit_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_changeEvent
func miqt_exec_callback_QLineEdit_changeEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QLineEdit{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QLineEdit_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QLineEdit_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_contextMenuEvent
func miqt_exec_callback_QLineEdit_contextMenuEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QLineEdit{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QLineEdit_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QLineEdit_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_inputMethodEvent
func miqt_exec_callback_QLineEdit_inputMethodEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QLineEdit{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QLineEdit_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLineEdit) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QLineEdit_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_inputMethodQuery
func miqt_exec_callback_QLineEdit_inputMethodQuery(self *C.QLineEdit, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QLineEdit) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QLineEdit_virtualbase_event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QLineEdit) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QLineEdit_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_event
func miqt_exec_callback_QLineEdit_event(self *C.QLineEdit, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLineEdit) callVirtualBase_DevType() int {

	return (int)(C.QLineEdit_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QLineEdit) OnDevType(slot func(super func() int) int) {
	ok := C.QLineEdit_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_devType
func miqt_exec_callback_QLineEdit_devType(self *C.QLineEdit, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QLineEdit) callVirtualBase_SetVisible(visible bool) {

	C.QLineEdit_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QLineEdit) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QLineEdit_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_setVisible
func miqt_exec_callback_QLineEdit_setVisible(self *C.QLineEdit, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QLineEdit{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QLineEdit) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QLineEdit_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QLineEdit) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QLineEdit_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_heightForWidth
func miqt_exec_callback_QLineEdit_heightForWidth(self *C.QLineEdit, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QLineEdit) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QLineEdit_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QLineEdit) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QLineEdit_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_hasHeightForWidth
func miqt_exec_callback_QLineEdit_hasHeightForWidth(self *C.QLineEdit, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QLineEdit) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QLineEdit_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QLineEdit) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QLineEdit_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_paintEngine
func miqt_exec_callback_QLineEdit_paintEngine(self *C.QLineEdit, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QLineEdit) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QLineEdit_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QLineEdit_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_wheelEvent
func miqt_exec_callback_QLineEdit_wheelEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QLineEdit{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QLineEdit_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QLineEdit_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_keyReleaseEvent
func miqt_exec_callback_QLineEdit_keyReleaseEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QLineEdit{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_EnterEvent(event *QEvent) {

	C.QLineEdit_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QLineEdit_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_enterEvent
func miqt_exec_callback_QLineEdit_enterEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QLineEdit{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QLineEdit_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QLineEdit_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_leaveEvent
func miqt_exec_callback_QLineEdit_leaveEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QLineEdit{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QLineEdit_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QLineEdit_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_moveEvent
func miqt_exec_callback_QLineEdit_moveEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QLineEdit{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QLineEdit_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	ok := C.QLineEdit_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_resizeEvent
func miqt_exec_callback_QLineEdit_resizeEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(event)

	gofunc((&QLineEdit{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QLineEdit_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QLineEdit_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_closeEvent
func miqt_exec_callback_QLineEdit_closeEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QLineEdit{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QLineEdit_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QLineEdit_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_tabletEvent
func miqt_exec_callback_QLineEdit_tabletEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QLineEdit{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QLineEdit_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QLineEdit_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_actionEvent
func miqt_exec_callback_QLineEdit_actionEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QLineEdit{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QLineEdit_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QLineEdit_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_showEvent
func miqt_exec_callback_QLineEdit_showEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QLineEdit{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QLineEdit_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QLineEdit_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_hideEvent
func miqt_exec_callback_QLineEdit_hideEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QLineEdit{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QLineEdit_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QLineEdit) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QLineEdit_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_nativeEvent
func miqt_exec_callback_QLineEdit_nativeEvent(self *C.QLineEdit, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QLineEdit) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QLineEdit_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QLineEdit) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QLineEdit_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_metric
func miqt_exec_callback_QLineEdit_metric(self *C.QLineEdit, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QLineEdit) callVirtualBase_InitPainter(painter *QPainter) {

	C.QLineEdit_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QLineEdit) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QLineEdit_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_initPainter
func miqt_exec_callback_QLineEdit_initPainter(self *C.QLineEdit, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QLineEdit{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QLineEdit) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QLineEdit_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QLineEdit) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QLineEdit_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_redirected
func miqt_exec_callback_QLineEdit_redirected(self *C.QLineEdit, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QLineEdit) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QLineEdit_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QLineEdit) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QLineEdit_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_sharedPainter
func miqt_exec_callback_QLineEdit_sharedPainter(self *C.QLineEdit, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QLineEdit) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QLineEdit_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QLineEdit) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QLineEdit_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_focusNextPrevChild
func miqt_exec_callback_QLineEdit_focusNextPrevChild(self *C.QLineEdit, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLineEdit) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QLineEdit_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QLineEdit) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QLineEdit_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_eventFilter
func miqt_exec_callback_QLineEdit_eventFilter(self *C.QLineEdit, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QLineEdit) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QLineEdit_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QLineEdit_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_timerEvent
func miqt_exec_callback_QLineEdit_timerEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QLineEdit{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QLineEdit_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QLineEdit_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_childEvent
func miqt_exec_callback_QLineEdit_childEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QLineEdit{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_CustomEvent(event *QEvent) {

	C.QLineEdit_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QLineEdit_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_customEvent
func miqt_exec_callback_QLineEdit_customEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QLineEdit{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QLineEdit_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QLineEdit) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QLineEdit_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_connectNotify
func miqt_exec_callback_QLineEdit_connectNotify(self *C.QLineEdit, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QLineEdit{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QLineEdit) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QLineEdit_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QLineEdit) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QLineEdit_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLineEdit_disconnectNotify
func miqt_exec_callback_QLineEdit_disconnectNotify(self *C.QLineEdit, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QLineEdit{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QLineEdit) Delete() {
	C.QLineEdit_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLineEdit) GoGC() {
	runtime.SetFinalizer(this, func(this *QLineEdit) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
