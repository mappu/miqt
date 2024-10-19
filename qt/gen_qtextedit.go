package qt

/*

#include "gen_qtextedit.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTextEdit__LineWrapMode int

const (
	QTextEdit__NoWrap           QTextEdit__LineWrapMode = 0
	QTextEdit__WidgetWidth      QTextEdit__LineWrapMode = 1
	QTextEdit__FixedPixelWidth  QTextEdit__LineWrapMode = 2
	QTextEdit__FixedColumnWidth QTextEdit__LineWrapMode = 3
)

type QTextEdit__AutoFormattingFlag int

const (
	QTextEdit__AutoNone       QTextEdit__AutoFormattingFlag = 0
	QTextEdit__AutoBulletList QTextEdit__AutoFormattingFlag = 1
	QTextEdit__AutoAll        QTextEdit__AutoFormattingFlag = 4294967295
)

type QTextEdit struct {
	h *C.QTextEdit
	*QAbstractScrollArea
}

func (this *QTextEdit) cPointer() *C.QTextEdit {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextEdit) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTextEdit(h *C.QTextEdit) *QTextEdit {
	if h == nil {
		return nil
	}
	return &QTextEdit{h: h, QAbstractScrollArea: UnsafeNewQAbstractScrollArea(unsafe.Pointer(h))}
}

func UnsafeNewQTextEdit(h unsafe.Pointer) *QTextEdit {
	return newQTextEdit((*C.QTextEdit)(h))
}

// NewQTextEdit constructs a new QTextEdit object.
func NewQTextEdit() *QTextEdit {
	ret := C.QTextEdit_new()
	return newQTextEdit(ret)
}

// NewQTextEdit2 constructs a new QTextEdit object.
func NewQTextEdit2(text string) *QTextEdit {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	ret := C.QTextEdit_new2(text_ms)
	return newQTextEdit(ret)
}

// NewQTextEdit3 constructs a new QTextEdit object.
func NewQTextEdit3(parent *QWidget) *QTextEdit {
	ret := C.QTextEdit_new3(parent.cPointer())
	return newQTextEdit(ret)
}

// NewQTextEdit4 constructs a new QTextEdit object.
func NewQTextEdit4(text string, parent *QWidget) *QTextEdit {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	ret := C.QTextEdit_new4(text_ms, parent.cPointer())
	return newQTextEdit(ret)
}

func (this *QTextEdit) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QTextEdit_MetaObject(this.h)))
}

func (this *QTextEdit) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTextEdit_Metacast(this.h, param1_Cstring))
}

func QTextEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTextEdit_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextEdit_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTextEdit_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) SetDocument(document *QTextDocument) {
	C.QTextEdit_SetDocument(this.h, document.cPointer())
}

func (this *QTextEdit) Document() *QTextDocument {
	return UnsafeNewQTextDocument(unsafe.Pointer(C.QTextEdit_Document(this.h)))
}

func (this *QTextEdit) SetPlaceholderText(placeholderText string) {
	placeholderText_ms := C.struct_miqt_string{}
	placeholderText_ms.data = C.CString(placeholderText)
	placeholderText_ms.len = C.size_t(len(placeholderText))
	defer C.free(unsafe.Pointer(placeholderText_ms.data))
	C.QTextEdit_SetPlaceholderText(this.h, placeholderText_ms)
}

func (this *QTextEdit) PlaceholderText() string {
	var _ms C.struct_miqt_string = C.QTextEdit_PlaceholderText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) SetTextCursor(cursor *QTextCursor) {
	C.QTextEdit_SetTextCursor(this.h, cursor.cPointer())
}

func (this *QTextEdit) TextCursor() *QTextCursor {
	_ret := C.QTextEdit_TextCursor(this.h)
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) IsReadOnly() bool {
	return (bool)(C.QTextEdit_IsReadOnly(this.h))
}

func (this *QTextEdit) SetReadOnly(ro bool) {
	C.QTextEdit_SetReadOnly(this.h, (C.bool)(ro))
}

func (this *QTextEdit) SetTextInteractionFlags(flags TextInteractionFlag) {
	C.QTextEdit_SetTextInteractionFlags(this.h, (C.int)(flags))
}

func (this *QTextEdit) TextInteractionFlags() TextInteractionFlag {
	return (TextInteractionFlag)(C.QTextEdit_TextInteractionFlags(this.h))
}

func (this *QTextEdit) FontPointSize() float64 {
	return (float64)(C.QTextEdit_FontPointSize(this.h))
}

func (this *QTextEdit) FontFamily() string {
	var _ms C.struct_miqt_string = C.QTextEdit_FontFamily(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) FontWeight() int {
	return (int)(C.QTextEdit_FontWeight(this.h))
}

func (this *QTextEdit) FontUnderline() bool {
	return (bool)(C.QTextEdit_FontUnderline(this.h))
}

func (this *QTextEdit) FontItalic() bool {
	return (bool)(C.QTextEdit_FontItalic(this.h))
}

func (this *QTextEdit) TextColor() *QColor {
	_ret := C.QTextEdit_TextColor(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) TextBackgroundColor() *QColor {
	_ret := C.QTextEdit_TextBackgroundColor(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) CurrentFont() *QFont {
	_ret := C.QTextEdit_CurrentFont(this.h)
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QTextEdit_Alignment(this.h))
}

func (this *QTextEdit) MergeCurrentCharFormat(modifier *QTextCharFormat) {
	C.QTextEdit_MergeCurrentCharFormat(this.h, modifier.cPointer())
}

func (this *QTextEdit) SetCurrentCharFormat(format *QTextCharFormat) {
	C.QTextEdit_SetCurrentCharFormat(this.h, format.cPointer())
}

func (this *QTextEdit) CurrentCharFormat() *QTextCharFormat {
	_ret := C.QTextEdit_CurrentCharFormat(this.h)
	_goptr := newQTextCharFormat(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) AutoFormatting() QTextEdit__AutoFormattingFlag {
	return (QTextEdit__AutoFormattingFlag)(C.QTextEdit_AutoFormatting(this.h))
}

func (this *QTextEdit) SetAutoFormatting(features QTextEdit__AutoFormattingFlag) {
	C.QTextEdit_SetAutoFormatting(this.h, (C.int)(features))
}

func (this *QTextEdit) TabChangesFocus() bool {
	return (bool)(C.QTextEdit_TabChangesFocus(this.h))
}

func (this *QTextEdit) SetTabChangesFocus(b bool) {
	C.QTextEdit_SetTabChangesFocus(this.h, (C.bool)(b))
}

func (this *QTextEdit) SetDocumentTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QTextEdit_SetDocumentTitle(this.h, title_ms)
}

func (this *QTextEdit) DocumentTitle() string {
	var _ms C.struct_miqt_string = C.QTextEdit_DocumentTitle(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) IsUndoRedoEnabled() bool {
	return (bool)(C.QTextEdit_IsUndoRedoEnabled(this.h))
}

func (this *QTextEdit) SetUndoRedoEnabled(enable bool) {
	C.QTextEdit_SetUndoRedoEnabled(this.h, (C.bool)(enable))
}

func (this *QTextEdit) LineWrapMode() QTextEdit__LineWrapMode {
	return (QTextEdit__LineWrapMode)(C.QTextEdit_LineWrapMode(this.h))
}

func (this *QTextEdit) SetLineWrapMode(mode QTextEdit__LineWrapMode) {
	C.QTextEdit_SetLineWrapMode(this.h, (C.int)(mode))
}

func (this *QTextEdit) LineWrapColumnOrWidth() int {
	return (int)(C.QTextEdit_LineWrapColumnOrWidth(this.h))
}

func (this *QTextEdit) SetLineWrapColumnOrWidth(w int) {
	C.QTextEdit_SetLineWrapColumnOrWidth(this.h, (C.int)(w))
}

func (this *QTextEdit) WordWrapMode() QTextOption__WrapMode {
	return (QTextOption__WrapMode)(C.QTextEdit_WordWrapMode(this.h))
}

func (this *QTextEdit) SetWordWrapMode(policy QTextOption__WrapMode) {
	C.QTextEdit_SetWordWrapMode(this.h, (C.int)(policy))
}

func (this *QTextEdit) Find(exp string) bool {
	exp_ms := C.struct_miqt_string{}
	exp_ms.data = C.CString(exp)
	exp_ms.len = C.size_t(len(exp))
	defer C.free(unsafe.Pointer(exp_ms.data))
	return (bool)(C.QTextEdit_Find(this.h, exp_ms))
}

func (this *QTextEdit) FindWithExp(exp *QRegExp) bool {
	return (bool)(C.QTextEdit_FindWithExp(this.h, exp.cPointer()))
}

func (this *QTextEdit) Find2(exp *QRegularExpression) bool {
	return (bool)(C.QTextEdit_Find2(this.h, exp.cPointer()))
}

func (this *QTextEdit) ToPlainText() string {
	var _ms C.struct_miqt_string = C.QTextEdit_ToPlainText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) ToHtml() string {
	var _ms C.struct_miqt_string = C.QTextEdit_ToHtml(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) ToMarkdown() string {
	var _ms C.struct_miqt_string = C.QTextEdit_ToMarkdown(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) EnsureCursorVisible() {
	C.QTextEdit_EnsureCursorVisible(this.h)
}

func (this *QTextEdit) LoadResource(typeVal int, name *QUrl) *QVariant {
	_ret := C.QTextEdit_LoadResource(this.h, (C.int)(typeVal), name.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) CreateStandardContextMenu() *QMenu {
	return UnsafeNewQMenu(unsafe.Pointer(C.QTextEdit_CreateStandardContextMenu(this.h)))
}

func (this *QTextEdit) CreateStandardContextMenuWithPosition(position *QPoint) *QMenu {
	return UnsafeNewQMenu(unsafe.Pointer(C.QTextEdit_CreateStandardContextMenuWithPosition(this.h, position.cPointer())))
}

func (this *QTextEdit) CursorForPosition(pos *QPoint) *QTextCursor {
	_ret := C.QTextEdit_CursorForPosition(this.h, pos.cPointer())
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) CursorRect(cursor *QTextCursor) *QRect {
	_ret := C.QTextEdit_CursorRect(this.h, cursor.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) CursorRect2() *QRect {
	_ret := C.QTextEdit_CursorRect2(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) AnchorAt(pos *QPoint) string {
	var _ms C.struct_miqt_string = C.QTextEdit_AnchorAt(this.h, pos.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) OverwriteMode() bool {
	return (bool)(C.QTextEdit_OverwriteMode(this.h))
}

func (this *QTextEdit) SetOverwriteMode(overwrite bool) {
	C.QTextEdit_SetOverwriteMode(this.h, (C.bool)(overwrite))
}

func (this *QTextEdit) TabStopWidth() int {
	return (int)(C.QTextEdit_TabStopWidth(this.h))
}

func (this *QTextEdit) SetTabStopWidth(width int) {
	C.QTextEdit_SetTabStopWidth(this.h, (C.int)(width))
}

func (this *QTextEdit) TabStopDistance() float64 {
	return (float64)(C.QTextEdit_TabStopDistance(this.h))
}

func (this *QTextEdit) SetTabStopDistance(distance float64) {
	C.QTextEdit_SetTabStopDistance(this.h, (C.double)(distance))
}

func (this *QTextEdit) CursorWidth() int {
	return (int)(C.QTextEdit_CursorWidth(this.h))
}

func (this *QTextEdit) SetCursorWidth(width int) {
	C.QTextEdit_SetCursorWidth(this.h, (C.int)(width))
}

func (this *QTextEdit) AcceptRichText() bool {
	return (bool)(C.QTextEdit_AcceptRichText(this.h))
}

func (this *QTextEdit) SetAcceptRichText(accept bool) {
	C.QTextEdit_SetAcceptRichText(this.h, (C.bool)(accept))
}

func (this *QTextEdit) SetExtraSelections(selections []QTextEdit__ExtraSelection) {
	// For the C ABI, malloc a C array of raw pointers
	selections_CArray := (*[0xffff]*C.QTextEdit__ExtraSelection)(C.malloc(C.size_t(8 * len(selections))))
	defer C.free(unsafe.Pointer(selections_CArray))
	for i := range selections {
		selections_CArray[i] = selections[i].cPointer()
	}
	selections_ma := &C.struct_miqt_array{len: C.size_t(len(selections)), data: unsafe.Pointer(selections_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(selections_ma))
	C.QTextEdit_SetExtraSelections(this.h, selections_ma)
}

func (this *QTextEdit) ExtraSelections() []QTextEdit__ExtraSelection {
	var _ma *C.struct_miqt_array = C.QTextEdit_ExtraSelections(this.h)
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

func (this *QTextEdit) MoveCursor(operation QTextCursor__MoveOperation) {
	C.QTextEdit_MoveCursor(this.h, (C.int)(operation))
}

func (this *QTextEdit) CanPaste() bool {
	return (bool)(C.QTextEdit_CanPaste(this.h))
}

func (this *QTextEdit) Print(printer *QPagedPaintDevice) {
	C.QTextEdit_Print(this.h, printer.cPointer())
}

func (this *QTextEdit) InputMethodQuery(property InputMethodQuery) *QVariant {
	_ret := C.QTextEdit_InputMethodQuery(this.h, (C.int)(property))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) InputMethodQuery2(query InputMethodQuery, argument QVariant) *QVariant {
	_ret := C.QTextEdit_InputMethodQuery2(this.h, (C.int)(query), argument.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) SetFontPointSize(s float64) {
	C.QTextEdit_SetFontPointSize(this.h, (C.double)(s))
}

func (this *QTextEdit) SetFontFamily(fontFamily string) {
	fontFamily_ms := C.struct_miqt_string{}
	fontFamily_ms.data = C.CString(fontFamily)
	fontFamily_ms.len = C.size_t(len(fontFamily))
	defer C.free(unsafe.Pointer(fontFamily_ms.data))
	C.QTextEdit_SetFontFamily(this.h, fontFamily_ms)
}

func (this *QTextEdit) SetFontWeight(w int) {
	C.QTextEdit_SetFontWeight(this.h, (C.int)(w))
}

func (this *QTextEdit) SetFontUnderline(b bool) {
	C.QTextEdit_SetFontUnderline(this.h, (C.bool)(b))
}

func (this *QTextEdit) SetFontItalic(b bool) {
	C.QTextEdit_SetFontItalic(this.h, (C.bool)(b))
}

func (this *QTextEdit) SetTextColor(c *QColor) {
	C.QTextEdit_SetTextColor(this.h, c.cPointer())
}

func (this *QTextEdit) SetTextBackgroundColor(c *QColor) {
	C.QTextEdit_SetTextBackgroundColor(this.h, c.cPointer())
}

func (this *QTextEdit) SetCurrentFont(f *QFont) {
	C.QTextEdit_SetCurrentFont(this.h, f.cPointer())
}

func (this *QTextEdit) SetAlignment(a AlignmentFlag) {
	C.QTextEdit_SetAlignment(this.h, (C.int)(a))
}

func (this *QTextEdit) SetPlainText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTextEdit_SetPlainText(this.h, text_ms)
}

func (this *QTextEdit) SetHtml(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTextEdit_SetHtml(this.h, text_ms)
}

func (this *QTextEdit) SetMarkdown(markdown string) {
	markdown_ms := C.struct_miqt_string{}
	markdown_ms.data = C.CString(markdown)
	markdown_ms.len = C.size_t(len(markdown))
	defer C.free(unsafe.Pointer(markdown_ms.data))
	C.QTextEdit_SetMarkdown(this.h, markdown_ms)
}

func (this *QTextEdit) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTextEdit_SetText(this.h, text_ms)
}

func (this *QTextEdit) Cut() {
	C.QTextEdit_Cut(this.h)
}

func (this *QTextEdit) Copy() {
	C.QTextEdit_Copy(this.h)
}

func (this *QTextEdit) Paste() {
	C.QTextEdit_Paste(this.h)
}

func (this *QTextEdit) Undo() {
	C.QTextEdit_Undo(this.h)
}

func (this *QTextEdit) Redo() {
	C.QTextEdit_Redo(this.h)
}

func (this *QTextEdit) Clear() {
	C.QTextEdit_Clear(this.h)
}

func (this *QTextEdit) SelectAll() {
	C.QTextEdit_SelectAll(this.h)
}

func (this *QTextEdit) InsertPlainText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTextEdit_InsertPlainText(this.h, text_ms)
}

func (this *QTextEdit) InsertHtml(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTextEdit_InsertHtml(this.h, text_ms)
}

func (this *QTextEdit) Append(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTextEdit_Append(this.h, text_ms)
}

func (this *QTextEdit) ScrollToAnchor(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QTextEdit_ScrollToAnchor(this.h, name_ms)
}

func (this *QTextEdit) ZoomIn() {
	C.QTextEdit_ZoomIn(this.h)
}

func (this *QTextEdit) ZoomOut() {
	C.QTextEdit_ZoomOut(this.h)
}

func (this *QTextEdit) TextChanged() {
	C.QTextEdit_TextChanged(this.h)
}
func (this *QTextEdit) OnTextChanged(slot func()) {
	C.QTextEdit_connect_TextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_TextChanged
func miqt_exec_callback_QTextEdit_TextChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTextEdit) UndoAvailable(b bool) {
	C.QTextEdit_UndoAvailable(this.h, (C.bool)(b))
}
func (this *QTextEdit) OnUndoAvailable(slot func(b bool)) {
	C.QTextEdit_connect_UndoAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_UndoAvailable
func miqt_exec_callback_QTextEdit_UndoAvailable(cb C.intptr_t, b C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(b bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(b)

	gofunc(slotval1)
}

func (this *QTextEdit) RedoAvailable(b bool) {
	C.QTextEdit_RedoAvailable(this.h, (C.bool)(b))
}
func (this *QTextEdit) OnRedoAvailable(slot func(b bool)) {
	C.QTextEdit_connect_RedoAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_RedoAvailable
func miqt_exec_callback_QTextEdit_RedoAvailable(cb C.intptr_t, b C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(b bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(b)

	gofunc(slotval1)
}

func (this *QTextEdit) CurrentCharFormatChanged(format *QTextCharFormat) {
	C.QTextEdit_CurrentCharFormatChanged(this.h, format.cPointer())
}
func (this *QTextEdit) OnCurrentCharFormatChanged(slot func(format *QTextCharFormat)) {
	C.QTextEdit_connect_CurrentCharFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_CurrentCharFormatChanged
func miqt_exec_callback_QTextEdit_CurrentCharFormatChanged(cb C.intptr_t, format *C.QTextCharFormat) {
	gofunc, ok := cgo.Handle(cb).Value().(func(format *QTextCharFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTextCharFormat(unsafe.Pointer(format))

	gofunc(slotval1)
}

func (this *QTextEdit) CopyAvailable(b bool) {
	C.QTextEdit_CopyAvailable(this.h, (C.bool)(b))
}
func (this *QTextEdit) OnCopyAvailable(slot func(b bool)) {
	C.QTextEdit_connect_CopyAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_CopyAvailable
func miqt_exec_callback_QTextEdit_CopyAvailable(cb C.intptr_t, b C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(b bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(b)

	gofunc(slotval1)
}

func (this *QTextEdit) SelectionChanged() {
	C.QTextEdit_SelectionChanged(this.h)
}
func (this *QTextEdit) OnSelectionChanged(slot func()) {
	C.QTextEdit_connect_SelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_SelectionChanged
func miqt_exec_callback_QTextEdit_SelectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTextEdit) CursorPositionChanged() {
	C.QTextEdit_CursorPositionChanged(this.h)
}
func (this *QTextEdit) OnCursorPositionChanged(slot func()) {
	C.QTextEdit_connect_CursorPositionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_CursorPositionChanged
func miqt_exec_callback_QTextEdit_CursorPositionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QTextEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextEdit_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextEdit_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextEdit_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextEdit_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextEdit_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextEdit_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) Find22(exp string, options QTextDocument__FindFlag) bool {
	exp_ms := C.struct_miqt_string{}
	exp_ms.data = C.CString(exp)
	exp_ms.len = C.size_t(len(exp))
	defer C.free(unsafe.Pointer(exp_ms.data))
	return (bool)(C.QTextEdit_Find22(this.h, exp_ms, (C.int)(options)))
}

func (this *QTextEdit) Find23(exp *QRegExp, options QTextDocument__FindFlag) bool {
	return (bool)(C.QTextEdit_Find23(this.h, exp.cPointer(), (C.int)(options)))
}

func (this *QTextEdit) Find24(exp *QRegularExpression, options QTextDocument__FindFlag) bool {
	return (bool)(C.QTextEdit_Find24(this.h, exp.cPointer(), (C.int)(options)))
}

func (this *QTextEdit) ToMarkdown1(features QTextDocument__MarkdownFeature) string {
	var _ms C.struct_miqt_string = C.QTextEdit_ToMarkdown1(this.h, (C.int)(features))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) MoveCursor2(operation QTextCursor__MoveOperation, mode QTextCursor__MoveMode) {
	C.QTextEdit_MoveCursor2(this.h, (C.int)(operation), (C.int)(mode))
}

func (this *QTextEdit) ZoomIn1(rangeVal int) {
	C.QTextEdit_ZoomIn1(this.h, (C.int)(rangeVal))
}

func (this *QTextEdit) ZoomOut1(rangeVal int) {
	C.QTextEdit_ZoomOut1(this.h, (C.int)(rangeVal))
}

// Delete this object from C++ memory.
func (this *QTextEdit) Delete() {
	C.QTextEdit_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextEdit) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextEdit) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTextEdit__ExtraSelection struct {
	h *C.QTextEdit__ExtraSelection
}

func (this *QTextEdit__ExtraSelection) cPointer() *C.QTextEdit__ExtraSelection {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextEdit__ExtraSelection) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTextEdit__ExtraSelection(h *C.QTextEdit__ExtraSelection) *QTextEdit__ExtraSelection {
	if h == nil {
		return nil
	}
	return &QTextEdit__ExtraSelection{h: h}
}

func UnsafeNewQTextEdit__ExtraSelection(h unsafe.Pointer) *QTextEdit__ExtraSelection {
	return newQTextEdit__ExtraSelection((*C.QTextEdit__ExtraSelection)(h))
}

// NewQTextEdit__ExtraSelection constructs a new QTextEdit::ExtraSelection object.
func NewQTextEdit__ExtraSelection(param1 *QTextEdit__ExtraSelection) *QTextEdit__ExtraSelection {
	ret := C.QTextEdit__ExtraSelection_new(param1.cPointer())
	return newQTextEdit__ExtraSelection(ret)
}

func (this *QTextEdit__ExtraSelection) OperatorAssign(param1 *QTextEdit__ExtraSelection) {
	C.QTextEdit__ExtraSelection_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QTextEdit__ExtraSelection) Delete() {
	C.QTextEdit__ExtraSelection_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextEdit__ExtraSelection) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextEdit__ExtraSelection) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
