package qt

/*

#include "gen_qplaintextedit.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPlainTextEdit__LineWrapMode int

const (
	QPlainTextEdit__NoWrap      QPlainTextEdit__LineWrapMode = 0
	QPlainTextEdit__WidgetWidth QPlainTextEdit__LineWrapMode = 1
)

type QPlainTextEdit struct {
	h *C.QPlainTextEdit
	*QAbstractScrollArea
}

func (this *QPlainTextEdit) cPointer() *C.QPlainTextEdit {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPlainTextEdit) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQPlainTextEdit(h *C.QPlainTextEdit) *QPlainTextEdit {
	if h == nil {
		return nil
	}
	return &QPlainTextEdit{h: h, QAbstractScrollArea: UnsafeNewQAbstractScrollArea(unsafe.Pointer(h))}
}

func UnsafeNewQPlainTextEdit(h unsafe.Pointer) *QPlainTextEdit {
	return newQPlainTextEdit((*C.QPlainTextEdit)(h))
}

// NewQPlainTextEdit constructs a new QPlainTextEdit object.
func NewQPlainTextEdit(parent *QWidget) *QPlainTextEdit {
	ret := C.QPlainTextEdit_new(parent.cPointer())
	return newQPlainTextEdit(ret)
}

// NewQPlainTextEdit2 constructs a new QPlainTextEdit object.
func NewQPlainTextEdit2() *QPlainTextEdit {
	ret := C.QPlainTextEdit_new2()
	return newQPlainTextEdit(ret)
}

// NewQPlainTextEdit3 constructs a new QPlainTextEdit object.
func NewQPlainTextEdit3(text string) *QPlainTextEdit {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	ret := C.QPlainTextEdit_new3(text_ms)
	return newQPlainTextEdit(ret)
}

// NewQPlainTextEdit4 constructs a new QPlainTextEdit object.
func NewQPlainTextEdit4(text string, parent *QWidget) *QPlainTextEdit {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	ret := C.QPlainTextEdit_new4(text_ms, parent.cPointer())
	return newQPlainTextEdit(ret)
}

func (this *QPlainTextEdit) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QPlainTextEdit_MetaObject(this.h)))
}

func (this *QPlainTextEdit) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPlainTextEdit_Metacast(this.h, param1_Cstring))
}

func QPlainTextEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPlainTextEdit_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPlainTextEdit_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPlainTextEdit_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPlainTextEdit) SetDocument(document *QTextDocument) {
	C.QPlainTextEdit_SetDocument(this.h, document.cPointer())
}

func (this *QPlainTextEdit) Document() *QTextDocument {
	return UnsafeNewQTextDocument(unsafe.Pointer(C.QPlainTextEdit_Document(this.h)))
}

func (this *QPlainTextEdit) SetPlaceholderText(placeholderText string) {
	placeholderText_ms := C.struct_miqt_string{}
	placeholderText_ms.data = C.CString(placeholderText)
	placeholderText_ms.len = C.size_t(len(placeholderText))
	defer C.free(unsafe.Pointer(placeholderText_ms.data))
	C.QPlainTextEdit_SetPlaceholderText(this.h, placeholderText_ms)
}

func (this *QPlainTextEdit) PlaceholderText() string {
	var _ms C.struct_miqt_string = C.QPlainTextEdit_PlaceholderText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPlainTextEdit) SetTextCursor(cursor *QTextCursor) {
	C.QPlainTextEdit_SetTextCursor(this.h, cursor.cPointer())
}

func (this *QPlainTextEdit) TextCursor() *QTextCursor {
	_ret := C.QPlainTextEdit_TextCursor(this.h)
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextEdit) IsReadOnly() bool {
	return (bool)(C.QPlainTextEdit_IsReadOnly(this.h))
}

func (this *QPlainTextEdit) SetReadOnly(ro bool) {
	C.QPlainTextEdit_SetReadOnly(this.h, (C.bool)(ro))
}

func (this *QPlainTextEdit) SetTextInteractionFlags(flags TextInteractionFlag) {
	C.QPlainTextEdit_SetTextInteractionFlags(this.h, (C.int)(flags))
}

func (this *QPlainTextEdit) TextInteractionFlags() TextInteractionFlag {
	return (TextInteractionFlag)(C.QPlainTextEdit_TextInteractionFlags(this.h))
}

func (this *QPlainTextEdit) MergeCurrentCharFormat(modifier *QTextCharFormat) {
	C.QPlainTextEdit_MergeCurrentCharFormat(this.h, modifier.cPointer())
}

func (this *QPlainTextEdit) SetCurrentCharFormat(format *QTextCharFormat) {
	C.QPlainTextEdit_SetCurrentCharFormat(this.h, format.cPointer())
}

func (this *QPlainTextEdit) CurrentCharFormat() *QTextCharFormat {
	_ret := C.QPlainTextEdit_CurrentCharFormat(this.h)
	_goptr := newQTextCharFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextEdit) TabChangesFocus() bool {
	return (bool)(C.QPlainTextEdit_TabChangesFocus(this.h))
}

func (this *QPlainTextEdit) SetTabChangesFocus(b bool) {
	C.QPlainTextEdit_SetTabChangesFocus(this.h, (C.bool)(b))
}

func (this *QPlainTextEdit) SetDocumentTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QPlainTextEdit_SetDocumentTitle(this.h, title_ms)
}

func (this *QPlainTextEdit) DocumentTitle() string {
	var _ms C.struct_miqt_string = C.QPlainTextEdit_DocumentTitle(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPlainTextEdit) IsUndoRedoEnabled() bool {
	return (bool)(C.QPlainTextEdit_IsUndoRedoEnabled(this.h))
}

func (this *QPlainTextEdit) SetUndoRedoEnabled(enable bool) {
	C.QPlainTextEdit_SetUndoRedoEnabled(this.h, (C.bool)(enable))
}

func (this *QPlainTextEdit) SetMaximumBlockCount(maximum int) {
	C.QPlainTextEdit_SetMaximumBlockCount(this.h, (C.int)(maximum))
}

func (this *QPlainTextEdit) MaximumBlockCount() int {
	return (int)(C.QPlainTextEdit_MaximumBlockCount(this.h))
}

func (this *QPlainTextEdit) LineWrapMode() QPlainTextEdit__LineWrapMode {
	return (QPlainTextEdit__LineWrapMode)(C.QPlainTextEdit_LineWrapMode(this.h))
}

func (this *QPlainTextEdit) SetLineWrapMode(mode QPlainTextEdit__LineWrapMode) {
	C.QPlainTextEdit_SetLineWrapMode(this.h, (C.int)(mode))
}

func (this *QPlainTextEdit) WordWrapMode() QTextOption__WrapMode {
	return (QTextOption__WrapMode)(C.QPlainTextEdit_WordWrapMode(this.h))
}

func (this *QPlainTextEdit) SetWordWrapMode(policy QTextOption__WrapMode) {
	C.QPlainTextEdit_SetWordWrapMode(this.h, (C.int)(policy))
}

func (this *QPlainTextEdit) SetBackgroundVisible(visible bool) {
	C.QPlainTextEdit_SetBackgroundVisible(this.h, (C.bool)(visible))
}

func (this *QPlainTextEdit) BackgroundVisible() bool {
	return (bool)(C.QPlainTextEdit_BackgroundVisible(this.h))
}

func (this *QPlainTextEdit) SetCenterOnScroll(enabled bool) {
	C.QPlainTextEdit_SetCenterOnScroll(this.h, (C.bool)(enabled))
}

func (this *QPlainTextEdit) CenterOnScroll() bool {
	return (bool)(C.QPlainTextEdit_CenterOnScroll(this.h))
}

func (this *QPlainTextEdit) Find(exp string) bool {
	exp_ms := C.struct_miqt_string{}
	exp_ms.data = C.CString(exp)
	exp_ms.len = C.size_t(len(exp))
	defer C.free(unsafe.Pointer(exp_ms.data))
	return (bool)(C.QPlainTextEdit_Find(this.h, exp_ms))
}

func (this *QPlainTextEdit) FindWithExp(exp *QRegExp) bool {
	return (bool)(C.QPlainTextEdit_FindWithExp(this.h, exp.cPointer()))
}

func (this *QPlainTextEdit) Find2(exp *QRegularExpression) bool {
	return (bool)(C.QPlainTextEdit_Find2(this.h, exp.cPointer()))
}

func (this *QPlainTextEdit) ToPlainText() string {
	var _ms C.struct_miqt_string = C.QPlainTextEdit_ToPlainText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPlainTextEdit) EnsureCursorVisible() {
	C.QPlainTextEdit_EnsureCursorVisible(this.h)
}

func (this *QPlainTextEdit) LoadResource(typeVal int, name *QUrl) *QVariant {
	_ret := C.QPlainTextEdit_LoadResource(this.h, (C.int)(typeVal), name.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextEdit) CreateStandardContextMenu() *QMenu {
	return UnsafeNewQMenu(unsafe.Pointer(C.QPlainTextEdit_CreateStandardContextMenu(this.h)))
}

func (this *QPlainTextEdit) CreateStandardContextMenuWithPosition(position *QPoint) *QMenu {
	return UnsafeNewQMenu(unsafe.Pointer(C.QPlainTextEdit_CreateStandardContextMenuWithPosition(this.h, position.cPointer())))
}

func (this *QPlainTextEdit) CursorForPosition(pos *QPoint) *QTextCursor {
	_ret := C.QPlainTextEdit_CursorForPosition(this.h, pos.cPointer())
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextEdit) CursorRect(cursor *QTextCursor) *QRect {
	_ret := C.QPlainTextEdit_CursorRect(this.h, cursor.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextEdit) CursorRect2() *QRect {
	_ret := C.QPlainTextEdit_CursorRect2(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextEdit) AnchorAt(pos *QPoint) string {
	var _ms C.struct_miqt_string = C.QPlainTextEdit_AnchorAt(this.h, pos.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPlainTextEdit) OverwriteMode() bool {
	return (bool)(C.QPlainTextEdit_OverwriteMode(this.h))
}

func (this *QPlainTextEdit) SetOverwriteMode(overwrite bool) {
	C.QPlainTextEdit_SetOverwriteMode(this.h, (C.bool)(overwrite))
}

func (this *QPlainTextEdit) TabStopWidth() int {
	return (int)(C.QPlainTextEdit_TabStopWidth(this.h))
}

func (this *QPlainTextEdit) SetTabStopWidth(width int) {
	C.QPlainTextEdit_SetTabStopWidth(this.h, (C.int)(width))
}

func (this *QPlainTextEdit) TabStopDistance() float64 {
	return (float64)(C.QPlainTextEdit_TabStopDistance(this.h))
}

func (this *QPlainTextEdit) SetTabStopDistance(distance float64) {
	C.QPlainTextEdit_SetTabStopDistance(this.h, (C.double)(distance))
}

func (this *QPlainTextEdit) CursorWidth() int {
	return (int)(C.QPlainTextEdit_CursorWidth(this.h))
}

func (this *QPlainTextEdit) SetCursorWidth(width int) {
	C.QPlainTextEdit_SetCursorWidth(this.h, (C.int)(width))
}

func (this *QPlainTextEdit) SetExtraSelections(selections []QTextEdit__ExtraSelection) {
	// For the C ABI, malloc a C array of raw pointers
	selections_CArray := (*[0xffff]*C.QTextEdit__ExtraSelection)(C.malloc(C.size_t(8 * len(selections))))
	defer C.free(unsafe.Pointer(selections_CArray))
	for i := range selections {
		selections_CArray[i] = selections[i].cPointer()
	}
	selections_ma := &C.struct_miqt_array{len: C.size_t(len(selections)), data: unsafe.Pointer(selections_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(selections_ma))
	C.QPlainTextEdit_SetExtraSelections(this.h, selections_ma)
}

func (this *QPlainTextEdit) ExtraSelections() []QTextEdit__ExtraSelection {
	var _ma *C.struct_miqt_array = C.QPlainTextEdit_ExtraSelections(this.h)
	_ret := make([]QTextEdit__ExtraSelection, int(_ma.len))
	_outCast := (*[0xffff]*C.QTextEdit__ExtraSelection)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQTextEdit__ExtraSelection(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QPlainTextEdit) MoveCursor(operation QTextCursor__MoveOperation) {
	C.QPlainTextEdit_MoveCursor(this.h, (C.int)(operation))
}

func (this *QPlainTextEdit) CanPaste() bool {
	return (bool)(C.QPlainTextEdit_CanPaste(this.h))
}

func (this *QPlainTextEdit) Print(printer *QPagedPaintDevice) {
	C.QPlainTextEdit_Print(this.h, printer.cPointer())
}

func (this *QPlainTextEdit) BlockCount() int {
	return (int)(C.QPlainTextEdit_BlockCount(this.h))
}

func (this *QPlainTextEdit) InputMethodQuery(property InputMethodQuery) *QVariant {
	_ret := C.QPlainTextEdit_InputMethodQuery(this.h, (C.int)(property))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextEdit) InputMethodQuery2(query InputMethodQuery, argument QVariant) *QVariant {
	_ret := C.QPlainTextEdit_InputMethodQuery2(this.h, (C.int)(query), argument.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextEdit) SetPlainText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPlainTextEdit_SetPlainText(this.h, text_ms)
}

func (this *QPlainTextEdit) Cut() {
	C.QPlainTextEdit_Cut(this.h)
}

func (this *QPlainTextEdit) Copy() {
	C.QPlainTextEdit_Copy(this.h)
}

func (this *QPlainTextEdit) Paste() {
	C.QPlainTextEdit_Paste(this.h)
}

func (this *QPlainTextEdit) Undo() {
	C.QPlainTextEdit_Undo(this.h)
}

func (this *QPlainTextEdit) Redo() {
	C.QPlainTextEdit_Redo(this.h)
}

func (this *QPlainTextEdit) Clear() {
	C.QPlainTextEdit_Clear(this.h)
}

func (this *QPlainTextEdit) SelectAll() {
	C.QPlainTextEdit_SelectAll(this.h)
}

func (this *QPlainTextEdit) InsertPlainText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPlainTextEdit_InsertPlainText(this.h, text_ms)
}

func (this *QPlainTextEdit) AppendPlainText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QPlainTextEdit_AppendPlainText(this.h, text_ms)
}

func (this *QPlainTextEdit) AppendHtml(html string) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QPlainTextEdit_AppendHtml(this.h, html_ms)
}

func (this *QPlainTextEdit) CenterCursor() {
	C.QPlainTextEdit_CenterCursor(this.h)
}

func (this *QPlainTextEdit) ZoomIn() {
	C.QPlainTextEdit_ZoomIn(this.h)
}

func (this *QPlainTextEdit) ZoomOut() {
	C.QPlainTextEdit_ZoomOut(this.h)
}

func (this *QPlainTextEdit) TextChanged() {
	C.QPlainTextEdit_TextChanged(this.h)
}
func (this *QPlainTextEdit) OnTextChanged(slot func()) {
	C.QPlainTextEdit_connect_TextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPlainTextEdit_TextChanged
func miqt_exec_callback_QPlainTextEdit_TextChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPlainTextEdit) UndoAvailable(b bool) {
	C.QPlainTextEdit_UndoAvailable(this.h, (C.bool)(b))
}
func (this *QPlainTextEdit) OnUndoAvailable(slot func(b bool)) {
	C.QPlainTextEdit_connect_UndoAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPlainTextEdit_UndoAvailable
func miqt_exec_callback_QPlainTextEdit_UndoAvailable(cb C.intptr_t, b C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(b bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(b)

	gofunc(slotval1)
}

func (this *QPlainTextEdit) RedoAvailable(b bool) {
	C.QPlainTextEdit_RedoAvailable(this.h, (C.bool)(b))
}
func (this *QPlainTextEdit) OnRedoAvailable(slot func(b bool)) {
	C.QPlainTextEdit_connect_RedoAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPlainTextEdit_RedoAvailable
func miqt_exec_callback_QPlainTextEdit_RedoAvailable(cb C.intptr_t, b C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(b bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(b)

	gofunc(slotval1)
}

func (this *QPlainTextEdit) CopyAvailable(b bool) {
	C.QPlainTextEdit_CopyAvailable(this.h, (C.bool)(b))
}
func (this *QPlainTextEdit) OnCopyAvailable(slot func(b bool)) {
	C.QPlainTextEdit_connect_CopyAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPlainTextEdit_CopyAvailable
func miqt_exec_callback_QPlainTextEdit_CopyAvailable(cb C.intptr_t, b C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(b bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(b)

	gofunc(slotval1)
}

func (this *QPlainTextEdit) SelectionChanged() {
	C.QPlainTextEdit_SelectionChanged(this.h)
}
func (this *QPlainTextEdit) OnSelectionChanged(slot func()) {
	C.QPlainTextEdit_connect_SelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPlainTextEdit_SelectionChanged
func miqt_exec_callback_QPlainTextEdit_SelectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPlainTextEdit) CursorPositionChanged() {
	C.QPlainTextEdit_CursorPositionChanged(this.h)
}
func (this *QPlainTextEdit) OnCursorPositionChanged(slot func()) {
	C.QPlainTextEdit_connect_CursorPositionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPlainTextEdit_CursorPositionChanged
func miqt_exec_callback_QPlainTextEdit_CursorPositionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QPlainTextEdit) UpdateRequest(rect *QRect, dy int) {
	C.QPlainTextEdit_UpdateRequest(this.h, rect.cPointer(), (C.int)(dy))
}
func (this *QPlainTextEdit) OnUpdateRequest(slot func(rect *QRect, dy int)) {
	C.QPlainTextEdit_connect_UpdateRequest(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPlainTextEdit_UpdateRequest
func miqt_exec_callback_QPlainTextEdit_UpdateRequest(cb C.intptr_t, rect *C.QRect, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rect *QRect, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRect(unsafe.Pointer(rect))
	slotval2 := (int)(dy)

	gofunc(slotval1, slotval2)
}

func (this *QPlainTextEdit) BlockCountChanged(newBlockCount int) {
	C.QPlainTextEdit_BlockCountChanged(this.h, (C.int)(newBlockCount))
}
func (this *QPlainTextEdit) OnBlockCountChanged(slot func(newBlockCount int)) {
	C.QPlainTextEdit_connect_BlockCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPlainTextEdit_BlockCountChanged
func miqt_exec_callback_QPlainTextEdit_BlockCountChanged(cb C.intptr_t, newBlockCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newBlockCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(newBlockCount)

	gofunc(slotval1)
}

func (this *QPlainTextEdit) ModificationChanged(param1 bool) {
	C.QPlainTextEdit_ModificationChanged(this.h, (C.bool)(param1))
}
func (this *QPlainTextEdit) OnModificationChanged(slot func(param1 bool)) {
	C.QPlainTextEdit_connect_ModificationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPlainTextEdit_ModificationChanged
func miqt_exec_callback_QPlainTextEdit_ModificationChanged(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func QPlainTextEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPlainTextEdit_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPlainTextEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPlainTextEdit_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPlainTextEdit_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPlainTextEdit_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPlainTextEdit_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPlainTextEdit_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPlainTextEdit) Find22(exp string, options QTextDocument__FindFlag) bool {
	exp_ms := C.struct_miqt_string{}
	exp_ms.data = C.CString(exp)
	exp_ms.len = C.size_t(len(exp))
	defer C.free(unsafe.Pointer(exp_ms.data))
	return (bool)(C.QPlainTextEdit_Find22(this.h, exp_ms, (C.int)(options)))
}

func (this *QPlainTextEdit) Find23(exp *QRegExp, options QTextDocument__FindFlag) bool {
	return (bool)(C.QPlainTextEdit_Find23(this.h, exp.cPointer(), (C.int)(options)))
}

func (this *QPlainTextEdit) Find24(exp *QRegularExpression, options QTextDocument__FindFlag) bool {
	return (bool)(C.QPlainTextEdit_Find24(this.h, exp.cPointer(), (C.int)(options)))
}

func (this *QPlainTextEdit) MoveCursor2(operation QTextCursor__MoveOperation, mode QTextCursor__MoveMode) {
	C.QPlainTextEdit_MoveCursor2(this.h, (C.int)(operation), (C.int)(mode))
}

func (this *QPlainTextEdit) ZoomIn1(rangeVal int) {
	C.QPlainTextEdit_ZoomIn1(this.h, (C.int)(rangeVal))
}

func (this *QPlainTextEdit) ZoomOut1(rangeVal int) {
	C.QPlainTextEdit_ZoomOut1(this.h, (C.int)(rangeVal))
}

// Delete this object from C++ memory.
func (this *QPlainTextEdit) Delete() {
	C.QPlainTextEdit_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPlainTextEdit) GoGC() {
	runtime.SetFinalizer(this, func(this *QPlainTextEdit) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPlainTextDocumentLayout struct {
	h *C.QPlainTextDocumentLayout
	*QAbstractTextDocumentLayout
}

func (this *QPlainTextDocumentLayout) cPointer() *C.QPlainTextDocumentLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPlainTextDocumentLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQPlainTextDocumentLayout(h *C.QPlainTextDocumentLayout) *QPlainTextDocumentLayout {
	if h == nil {
		return nil
	}
	return &QPlainTextDocumentLayout{h: h, QAbstractTextDocumentLayout: UnsafeNewQAbstractTextDocumentLayout(unsafe.Pointer(h))}
}

func UnsafeNewQPlainTextDocumentLayout(h unsafe.Pointer) *QPlainTextDocumentLayout {
	return newQPlainTextDocumentLayout((*C.QPlainTextDocumentLayout)(h))
}

// NewQPlainTextDocumentLayout constructs a new QPlainTextDocumentLayout object.
func NewQPlainTextDocumentLayout(document *QTextDocument) *QPlainTextDocumentLayout {
	ret := C.QPlainTextDocumentLayout_new(document.cPointer())
	return newQPlainTextDocumentLayout(ret)
}

func (this *QPlainTextDocumentLayout) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QPlainTextDocumentLayout_MetaObject(this.h)))
}

func (this *QPlainTextDocumentLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPlainTextDocumentLayout_Metacast(this.h, param1_Cstring))
}

func QPlainTextDocumentLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPlainTextDocumentLayout_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPlainTextDocumentLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPlainTextDocumentLayout_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPlainTextDocumentLayout) Draw(param1 *QPainter, param2 *QAbstractTextDocumentLayout__PaintContext) {
	C.QPlainTextDocumentLayout_Draw(this.h, param1.cPointer(), param2.cPointer())
}

func (this *QPlainTextDocumentLayout) HitTest(param1 *QPointF, param2 HitTestAccuracy) int {
	return (int)(C.QPlainTextDocumentLayout_HitTest(this.h, param1.cPointer(), (C.int)(param2)))
}

func (this *QPlainTextDocumentLayout) PageCount() int {
	return (int)(C.QPlainTextDocumentLayout_PageCount(this.h))
}

func (this *QPlainTextDocumentLayout) DocumentSize() *QSizeF {
	_ret := C.QPlainTextDocumentLayout_DocumentSize(this.h)
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextDocumentLayout) FrameBoundingRect(param1 *QTextFrame) *QRectF {
	_ret := C.QPlainTextDocumentLayout_FrameBoundingRect(this.h, param1.cPointer())
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextDocumentLayout) BlockBoundingRect(block *QTextBlock) *QRectF {
	_ret := C.QPlainTextDocumentLayout_BlockBoundingRect(this.h, block.cPointer())
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPlainTextDocumentLayout) EnsureBlockLayout(block *QTextBlock) {
	C.QPlainTextDocumentLayout_EnsureBlockLayout(this.h, block.cPointer())
}

func (this *QPlainTextDocumentLayout) SetCursorWidth(width int) {
	C.QPlainTextDocumentLayout_SetCursorWidth(this.h, (C.int)(width))
}

func (this *QPlainTextDocumentLayout) CursorWidth() int {
	return (int)(C.QPlainTextDocumentLayout_CursorWidth(this.h))
}

func (this *QPlainTextDocumentLayout) RequestUpdate() {
	C.QPlainTextDocumentLayout_RequestUpdate(this.h)
}

func QPlainTextDocumentLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPlainTextDocumentLayout_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPlainTextDocumentLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPlainTextDocumentLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPlainTextDocumentLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPlainTextDocumentLayout_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPlainTextDocumentLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPlainTextDocumentLayout_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QPlainTextDocumentLayout) Delete() {
	C.QPlainTextDocumentLayout_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPlainTextDocumentLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QPlainTextDocumentLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
