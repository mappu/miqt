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
	h          *C.QLineEdit
	isSubclass bool
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
func newQLineEdit(h *C.QLineEdit, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QLineEdit {
	if h == nil {
		return nil
	}
	return &QLineEdit{h: h,
		QWidget: newQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQLineEdit constructs the type using only unsafe pointers.
func UnsafeNewQLineEdit(h unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QLineEdit {
	if h == nil {
		return nil
	}

	return &QLineEdit{h: (*C.QLineEdit)(h),
		QWidget: UnsafeNewQWidget(h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQLineEdit constructs a new QLineEdit object.
func NewQLineEdit(parent *QWidget) *QLineEdit {
	var outptr_QLineEdit *C.QLineEdit = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QLineEdit_new(parent.cPointer(), &outptr_QLineEdit, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQLineEdit(outptr_QLineEdit, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQLineEdit2 constructs a new QLineEdit object.
func NewQLineEdit2() *QLineEdit {
	var outptr_QLineEdit *C.QLineEdit = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QLineEdit_new2(&outptr_QLineEdit, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQLineEdit(outptr_QLineEdit, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQLineEdit3 constructs a new QLineEdit object.
func NewQLineEdit3(param1 string) *QLineEdit {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	var outptr_QLineEdit *C.QLineEdit = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QLineEdit_new3(param1_ms, &outptr_QLineEdit, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQLineEdit(outptr_QLineEdit, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQLineEdit4 constructs a new QLineEdit object.
func NewQLineEdit4(param1 string, parent *QWidget) *QLineEdit {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	var outptr_QLineEdit *C.QLineEdit = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QLineEdit_new4(param1_ms, parent.cPointer(), &outptr_QLineEdit, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQLineEdit(outptr_QLineEdit, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
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
	return UnsafeNewQValidator(unsafe.Pointer(C.QLineEdit_Validator(this.h)), nil)
}

func (this *QLineEdit) SetCompleter(completer *QCompleter) {
	C.QLineEdit_SetCompleter(this.h, completer.cPointer())
}

func (this *QLineEdit) Completer() *QCompleter {
	return UnsafeNewQCompleter(unsafe.Pointer(C.QLineEdit_Completer(this.h)), nil)
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
	return UnsafeNewQAction(unsafe.Pointer(C.QLineEdit_AddAction2(this.h, icon.cPointer(), (C.int)(position))), nil)
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
	return UnsafeNewQMenu(unsafe.Pointer(C.QLineEdit_CreateStandardContextMenu(this.h)), nil, nil, nil)
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

func (this *QLineEdit) callVirtualBase_SizeHint() *QSize {

	_ret := C.QLineEdit_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLineEdit) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_SizeHint
func miqt_exec_callback_QLineEdit_SizeHint(self *C.QLineEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QLineEdit) callVirtualBase_MinimumSizeHint() *QSize {

	_ret := C.QLineEdit_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLineEdit) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_MinimumSizeHint
func miqt_exec_callback_QLineEdit_MinimumSizeHint(self *C.QLineEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QLineEdit) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QLineEdit_virtualbase_MousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_MousePressEvent
func miqt_exec_callback_QLineEdit_MousePressEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QLineEdit_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_MouseMoveEvent
func miqt_exec_callback_QLineEdit_MouseMoveEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QLineEdit_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_MouseReleaseEvent
func miqt_exec_callback_QLineEdit_MouseReleaseEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_MouseDoubleClickEvent(param1 *QMouseEvent) {

	C.QLineEdit_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnMouseDoubleClickEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_MouseDoubleClickEvent
func miqt_exec_callback_QLineEdit_MouseDoubleClickEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QLineEdit_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_KeyPressEvent
func miqt_exec_callback_QLineEdit_KeyPressEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_FocusInEvent(param1 *QFocusEvent) {

	C.QLineEdit_virtualbase_FocusInEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnFocusInEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_FocusInEvent
func miqt_exec_callback_QLineEdit_FocusInEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(param1), nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_FocusOutEvent(param1 *QFocusEvent) {

	C.QLineEdit_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnFocusOutEvent(slot func(super func(param1 *QFocusEvent), param1 *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_FocusOutEvent
func miqt_exec_callback_QLineEdit_FocusOutEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFocusEvent), param1 *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(param1), nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QLineEdit_virtualbase_PaintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_PaintEvent
func miqt_exec_callback_QLineEdit_PaintEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(param1), nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_DragEnterEvent(param1 *QDragEnterEvent) {

	C.QLineEdit_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnDragEnterEvent(slot func(super func(param1 *QDragEnterEvent), param1 *QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_DragEnterEvent
func miqt_exec_callback_QLineEdit_DragEnterEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDragEnterEvent), param1 *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragEnterEvent(unsafe.Pointer(param1), nil, nil, nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_DragMoveEvent(e *QDragMoveEvent) {

	C.QLineEdit_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QLineEdit) OnDragMoveEvent(slot func(super func(e *QDragMoveEvent), e *QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_DragMoveEvent
func miqt_exec_callback_QLineEdit_DragMoveEvent(self *C.QLineEdit, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragMoveEvent), e *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_DragLeaveEvent(e *QDragLeaveEvent) {

	C.QLineEdit_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QLineEdit) OnDragLeaveEvent(slot func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_DragLeaveEvent
func miqt_exec_callback_QLineEdit_DragLeaveEvent(self *C.QLineEdit, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(e), nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_DropEvent(param1 *QDropEvent) {

	C.QLineEdit_virtualbase_DropEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnDropEvent(slot func(super func(param1 *QDropEvent), param1 *QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_DropEvent
func miqt_exec_callback_QLineEdit_DropEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QDropEvent), param1 *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(param1), nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QLineEdit_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_ChangeEvent
func miqt_exec_callback_QLineEdit_ChangeEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QLineEdit{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QLineEdit_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_ContextMenuEvent
func miqt_exec_callback_QLineEdit_ContextMenuEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQContextMenuEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QLineEdit_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QLineEdit) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_InputMethodEvent
func miqt_exec_callback_QLineEdit_InputMethodEvent(self *C.QLineEdit, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(param1), nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_ret := C.QLineEdit_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLineEdit) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_InputMethodQuery
func miqt_exec_callback_QLineEdit_InputMethodQuery(self *C.QLineEdit, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QLineEdit_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QLineEdit) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_Event
func miqt_exec_callback_QLineEdit_Event(self *C.QLineEdit, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLineEdit) callVirtualBase_DevType() int {

	return (int)(C.QLineEdit_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QLineEdit) OnDevType(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_DevType
func miqt_exec_callback_QLineEdit_DevType(self *C.QLineEdit, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QLineEdit) callVirtualBase_SetVisible(visible bool) {

	C.QLineEdit_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QLineEdit) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_SetVisible
func miqt_exec_callback_QLineEdit_SetVisible(self *C.QLineEdit, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QLineEdit{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QLineEdit) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QLineEdit_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QLineEdit) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_HeightForWidth
func miqt_exec_callback_QLineEdit_HeightForWidth(self *C.QLineEdit, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QLineEdit_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QLineEdit) OnHasHeightForWidth(slot func(super func() bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_HasHeightForWidth
func miqt_exec_callback_QLineEdit_HasHeightForWidth(self *C.QLineEdit, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QLineEdit) callVirtualBase_PaintEngine() *QPaintEngine {

	return UnsafeNewQPaintEngine(unsafe.Pointer(C.QLineEdit_virtualbase_PaintEngine(unsafe.Pointer(this.h))))
}
func (this *QLineEdit) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_PaintEngine
func miqt_exec_callback_QLineEdit_PaintEngine(self *C.QLineEdit, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QLineEdit) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QLineEdit_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_WheelEvent
func miqt_exec_callback_QLineEdit_WheelEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QLineEdit_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_KeyReleaseEvent
func miqt_exec_callback_QLineEdit_KeyReleaseEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_EnterEvent(event *QEvent) {

	C.QLineEdit_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_EnterEvent
func miqt_exec_callback_QLineEdit_EnterEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QLineEdit{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QLineEdit_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_LeaveEvent
func miqt_exec_callback_QLineEdit_LeaveEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QLineEdit{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QLineEdit_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_MoveEvent
func miqt_exec_callback_QLineEdit_MoveEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMoveEvent(unsafe.Pointer(event), nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_ResizeEvent(event *QResizeEvent) {

	C.QLineEdit_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnResizeEvent(slot func(super func(event *QResizeEvent), event *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_ResizeEvent
func miqt_exec_callback_QLineEdit_ResizeEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QResizeEvent), event *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(event), nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QLineEdit_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_CloseEvent
func miqt_exec_callback_QLineEdit_CloseEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQCloseEvent(unsafe.Pointer(event), nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QLineEdit_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_TabletEvent
func miqt_exec_callback_QLineEdit_TabletEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTabletEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QLineEdit_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_ActionEvent
func miqt_exec_callback_QLineEdit_ActionEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQActionEvent(unsafe.Pointer(event), nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QLineEdit_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_ShowEvent
func miqt_exec_callback_QLineEdit_ShowEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQShowEvent(unsafe.Pointer(event), nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QLineEdit_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLineEdit) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_HideEvent
func miqt_exec_callback_QLineEdit_HideEvent(self *C.QLineEdit, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQHideEvent(unsafe.Pointer(event), nil)

	gofunc((&QLineEdit{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QLineEdit) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QLineEdit_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QLineEdit) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_NativeEvent
func miqt_exec_callback_QLineEdit_NativeEvent(self *C.QLineEdit, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	return (int)(C.QLineEdit_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QLineEdit) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_Metric
func miqt_exec_callback_QLineEdit_Metric(self *C.QLineEdit, cb C.intptr_t, param1 C.int) C.int {
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

	C.QLineEdit_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QLineEdit) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_InitPainter
func miqt_exec_callback_QLineEdit_InitPainter(self *C.QLineEdit, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QLineEdit{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QLineEdit) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return UnsafeNewQPaintDevice(unsafe.Pointer(C.QLineEdit_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer())))
}
func (this *QLineEdit) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_Redirected
func miqt_exec_callback_QLineEdit_Redirected(self *C.QLineEdit, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QLineEdit) callVirtualBase_SharedPainter() *QPainter {

	return UnsafeNewQPainter(unsafe.Pointer(C.QLineEdit_virtualbase_SharedPainter(unsafe.Pointer(this.h))))
}
func (this *QLineEdit) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_SharedPainter
func miqt_exec_callback_QLineEdit_SharedPainter(self *C.QLineEdit, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QLineEdit) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QLineEdit_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QLineEdit) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QLineEdit_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QLineEdit_FocusNextPrevChild
func miqt_exec_callback_QLineEdit_FocusNextPrevChild(self *C.QLineEdit, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QLineEdit{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QLineEdit) Delete() {
	C.QLineEdit_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLineEdit) GoGC() {
	runtime.SetFinalizer(this, func(this *QLineEdit) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
