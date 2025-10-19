package qt6

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

// newQTextEdit constructs the type using only CGO pointers.
func newQTextEdit(h *C.QTextEdit) *QTextEdit {
	if h == nil {
		return nil
	}
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	C.QTextEdit_virtbase(h, &outptr_QAbstractScrollArea)

	return &QTextEdit{h: h,
		QAbstractScrollArea: newQAbstractScrollArea(outptr_QAbstractScrollArea)}
}

// UnsafeNewQTextEdit constructs the type using only unsafe pointers.
func UnsafeNewQTextEdit(h unsafe.Pointer) *QTextEdit {
	return newQTextEdit((*C.QTextEdit)(h))
}

// NewQTextEdit constructs a new QTextEdit object.
func NewQTextEdit(parent *QWidget) *QTextEdit {

	return newQTextEdit(C.QTextEdit_new(parent.cPointer()))
}

// NewQTextEdit2 constructs a new QTextEdit object.
func NewQTextEdit2() *QTextEdit {

	return newQTextEdit(C.QTextEdit_new2())
}

// NewQTextEdit3 constructs a new QTextEdit object.
func NewQTextEdit3(text string) *QTextEdit {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQTextEdit(C.QTextEdit_new3(text_ms))
}

// NewQTextEdit4 constructs a new QTextEdit object.
func NewQTextEdit4(text string, parent *QWidget) *QTextEdit {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQTextEdit(C.QTextEdit_new4(text_ms, parent.cPointer()))
}

func (this *QTextEdit) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTextEdit_metaObject(this.h))
}

func (this *QTextEdit) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTextEdit_metacast(this.h, param1_Cstring))
}

func QTextEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTextEdit_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) SetDocument(document *QTextDocument) {
	C.QTextEdit_setDocument(this.h, document.cPointer())
}

func (this *QTextEdit) Document() *QTextDocument {
	return newQTextDocument(C.QTextEdit_document(this.h))
}

func (this *QTextEdit) SetPlaceholderText(placeholderText string) {
	placeholderText_ms := C.struct_miqt_string{}
	placeholderText_ms.data = C.CString(placeholderText)
	placeholderText_ms.len = C.size_t(len(placeholderText))
	defer C.free(unsafe.Pointer(placeholderText_ms.data))
	C.QTextEdit_setPlaceholderText(this.h, placeholderText_ms)
}

func (this *QTextEdit) PlaceholderText() string {
	var _ms C.struct_miqt_string = C.QTextEdit_placeholderText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) SetTextCursor(cursor *QTextCursor) {
	C.QTextEdit_setTextCursor(this.h, cursor.cPointer())
}

func (this *QTextEdit) TextCursor() *QTextCursor {
	_goptr := newQTextCursor(C.QTextEdit_textCursor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) IsReadOnly() bool {
	return (bool)(C.QTextEdit_isReadOnly(this.h))
}

func (this *QTextEdit) SetReadOnly(ro bool) {
	C.QTextEdit_setReadOnly(this.h, (C.bool)(ro))
}

func (this *QTextEdit) SetTextInteractionFlags(flags TextInteractionFlag) {
	C.QTextEdit_setTextInteractionFlags(this.h, (C.int)(flags))
}

func (this *QTextEdit) TextInteractionFlags() TextInteractionFlag {
	return (TextInteractionFlag)(C.QTextEdit_textInteractionFlags(this.h))
}

func (this *QTextEdit) FontPointSize() float64 {
	return (float64)(C.QTextEdit_fontPointSize(this.h))
}

func (this *QTextEdit) FontFamily() string {
	var _ms C.struct_miqt_string = C.QTextEdit_fontFamily(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) FontWeight() int {
	return (int)(C.QTextEdit_fontWeight(this.h))
}

func (this *QTextEdit) FontUnderline() bool {
	return (bool)(C.QTextEdit_fontUnderline(this.h))
}

func (this *QTextEdit) FontItalic() bool {
	return (bool)(C.QTextEdit_fontItalic(this.h))
}

func (this *QTextEdit) TextColor() *QColor {
	_goptr := newQColor(C.QTextEdit_textColor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) TextBackgroundColor() *QColor {
	_goptr := newQColor(C.QTextEdit_textBackgroundColor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) CurrentFont() *QFont {
	_goptr := newQFont(C.QTextEdit_currentFont(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QTextEdit_alignment(this.h))
}

func (this *QTextEdit) MergeCurrentCharFormat(modifier *QTextCharFormat) {
	C.QTextEdit_mergeCurrentCharFormat(this.h, modifier.cPointer())
}

func (this *QTextEdit) SetCurrentCharFormat(format *QTextCharFormat) {
	C.QTextEdit_setCurrentCharFormat(this.h, format.cPointer())
}

func (this *QTextEdit) CurrentCharFormat() *QTextCharFormat {
	_goptr := newQTextCharFormat(C.QTextEdit_currentCharFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) AutoFormatting() QTextEdit__AutoFormattingFlag {
	return (QTextEdit__AutoFormattingFlag)(C.QTextEdit_autoFormatting(this.h))
}

func (this *QTextEdit) SetAutoFormatting(features QTextEdit__AutoFormattingFlag) {
	C.QTextEdit_setAutoFormatting(this.h, (C.int)(features))
}

func (this *QTextEdit) TabChangesFocus() bool {
	return (bool)(C.QTextEdit_tabChangesFocus(this.h))
}

func (this *QTextEdit) SetTabChangesFocus(b bool) {
	C.QTextEdit_setTabChangesFocus(this.h, (C.bool)(b))
}

func (this *QTextEdit) SetDocumentTitle(title string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	C.QTextEdit_setDocumentTitle(this.h, title_ms)
}

func (this *QTextEdit) DocumentTitle() string {
	var _ms C.struct_miqt_string = C.QTextEdit_documentTitle(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) IsUndoRedoEnabled() bool {
	return (bool)(C.QTextEdit_isUndoRedoEnabled(this.h))
}

func (this *QTextEdit) SetUndoRedoEnabled(enable bool) {
	C.QTextEdit_setUndoRedoEnabled(this.h, (C.bool)(enable))
}

func (this *QTextEdit) LineWrapMode() QTextEdit__LineWrapMode {
	return (QTextEdit__LineWrapMode)(C.QTextEdit_lineWrapMode(this.h))
}

func (this *QTextEdit) SetLineWrapMode(mode QTextEdit__LineWrapMode) {
	C.QTextEdit_setLineWrapMode(this.h, (C.int)(mode))
}

func (this *QTextEdit) LineWrapColumnOrWidth() int {
	return (int)(C.QTextEdit_lineWrapColumnOrWidth(this.h))
}

func (this *QTextEdit) SetLineWrapColumnOrWidth(w int) {
	C.QTextEdit_setLineWrapColumnOrWidth(this.h, (C.int)(w))
}

func (this *QTextEdit) WordWrapMode() QTextOption__WrapMode {
	return (QTextOption__WrapMode)(C.QTextEdit_wordWrapMode(this.h))
}

func (this *QTextEdit) SetWordWrapMode(policy QTextOption__WrapMode) {
	C.QTextEdit_setWordWrapMode(this.h, (C.int)(policy))
}

func (this *QTextEdit) Find(exp string) bool {
	exp_ms := C.struct_miqt_string{}
	exp_ms.data = C.CString(exp)
	exp_ms.len = C.size_t(len(exp))
	defer C.free(unsafe.Pointer(exp_ms.data))
	return (bool)(C.QTextEdit_find(this.h, exp_ms))
}

func (this *QTextEdit) FindWithExp(exp *QRegularExpression) bool {
	return (bool)(C.QTextEdit_findWithExp(this.h, exp.cPointer()))
}

func (this *QTextEdit) ToPlainText() string {
	var _ms C.struct_miqt_string = C.QTextEdit_toPlainText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) ToHtml() string {
	var _ms C.struct_miqt_string = C.QTextEdit_toHtml(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) ToMarkdown() string {
	var _ms C.struct_miqt_string = C.QTextEdit_toMarkdown(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) EnsureCursorVisible() {
	C.QTextEdit_ensureCursorVisible(this.h)
}

func (this *QTextEdit) LoadResource(typeVal int, name *QUrl) *QVariant {
	_goptr := newQVariant(C.QTextEdit_loadResource(this.h, (C.int)(typeVal), name.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) CreateStandardContextMenu() *QMenu {
	return newQMenu(C.QTextEdit_createStandardContextMenu(this.h))
}

func (this *QTextEdit) CreateStandardContextMenuWithPosition(position *QPoint) *QMenu {
	return newQMenu(C.QTextEdit_createStandardContextMenuWithPosition(this.h, position.cPointer()))
}

func (this *QTextEdit) CursorForPosition(pos *QPoint) *QTextCursor {
	_goptr := newQTextCursor(C.QTextEdit_cursorForPosition(this.h, pos.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) CursorRect(cursor *QTextCursor) *QRect {
	_goptr := newQRect(C.QTextEdit_cursorRect(this.h, cursor.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) CursorRect2() *QRect {
	_goptr := newQRect(C.QTextEdit_cursorRect2(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) AnchorAt(pos *QPoint) string {
	var _ms C.struct_miqt_string = C.QTextEdit_anchorAt(this.h, pos.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) OverwriteMode() bool {
	return (bool)(C.QTextEdit_overwriteMode(this.h))
}

func (this *QTextEdit) SetOverwriteMode(overwrite bool) {
	C.QTextEdit_setOverwriteMode(this.h, (C.bool)(overwrite))
}

func (this *QTextEdit) TabStopDistance() float64 {
	return (float64)(C.QTextEdit_tabStopDistance(this.h))
}

func (this *QTextEdit) SetTabStopDistance(distance float64) {
	C.QTextEdit_setTabStopDistance(this.h, (C.double)(distance))
}

func (this *QTextEdit) CursorWidth() int {
	return (int)(C.QTextEdit_cursorWidth(this.h))
}

func (this *QTextEdit) SetCursorWidth(width int) {
	C.QTextEdit_setCursorWidth(this.h, (C.int)(width))
}

func (this *QTextEdit) AcceptRichText() bool {
	return (bool)(C.QTextEdit_acceptRichText(this.h))
}

func (this *QTextEdit) SetAcceptRichText(accept bool) {
	C.QTextEdit_setAcceptRichText(this.h, (C.bool)(accept))
}

func (this *QTextEdit) SetExtraSelections(selections []QTextEdit__ExtraSelection) {
	selections_CArray := (*[0xffff]*C.QTextEdit__ExtraSelection)(C.malloc(C.size_t(8 * len(selections))))
	defer C.free(unsafe.Pointer(selections_CArray))
	for i := range selections {
		selections_CArray[i] = selections[i].cPointer()
	}
	selections_ma := C.struct_miqt_array{len: C.size_t(len(selections)), data: unsafe.Pointer(selections_CArray)}
	C.QTextEdit_setExtraSelections(this.h, selections_ma)
}

func (this *QTextEdit) ExtraSelections() []QTextEdit__ExtraSelection {
	var _ma C.struct_miqt_array = C.QTextEdit_extraSelections(this.h)
	_ret := make([]QTextEdit__ExtraSelection, int(_ma.len))
	_outCast := (*[0xffff]*C.QTextEdit__ExtraSelection)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQTextEdit__ExtraSelection(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QTextEdit) MoveCursor(operation QTextCursor__MoveOperation) {
	C.QTextEdit_moveCursor(this.h, (C.int)(operation))
}

func (this *QTextEdit) CanPaste() bool {
	return (bool)(C.QTextEdit_canPaste(this.h))
}

func (this *QTextEdit) Print(printer *QPagedPaintDevice) {
	C.QTextEdit_print(this.h, printer.cPointer())
}

func (this *QTextEdit) InputMethodQuery(property InputMethodQuery) *QVariant {
	_goptr := newQVariant(C.QTextEdit_inputMethodQuery(this.h, (C.int)(property)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) InputMethodQuery2(query InputMethodQuery, argument QVariant) *QVariant {
	_goptr := newQVariant(C.QTextEdit_inputMethodQuery2(this.h, (C.int)(query), argument.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) SetFontPointSize(s float64) {
	C.QTextEdit_setFontPointSize(this.h, (C.double)(s))
}

func (this *QTextEdit) SetFontFamily(fontFamily string) {
	fontFamily_ms := C.struct_miqt_string{}
	fontFamily_ms.data = C.CString(fontFamily)
	fontFamily_ms.len = C.size_t(len(fontFamily))
	defer C.free(unsafe.Pointer(fontFamily_ms.data))
	C.QTextEdit_setFontFamily(this.h, fontFamily_ms)
}

func (this *QTextEdit) SetFontWeight(w int) {
	C.QTextEdit_setFontWeight(this.h, (C.int)(w))
}

func (this *QTextEdit) SetFontUnderline(b bool) {
	C.QTextEdit_setFontUnderline(this.h, (C.bool)(b))
}

func (this *QTextEdit) SetFontItalic(b bool) {
	C.QTextEdit_setFontItalic(this.h, (C.bool)(b))
}

func (this *QTextEdit) SetTextColor(c *QColor) {
	C.QTextEdit_setTextColor(this.h, c.cPointer())
}

func (this *QTextEdit) SetTextBackgroundColor(c *QColor) {
	C.QTextEdit_setTextBackgroundColor(this.h, c.cPointer())
}

func (this *QTextEdit) SetCurrentFont(f *QFont) {
	C.QTextEdit_setCurrentFont(this.h, f.cPointer())
}

func (this *QTextEdit) SetAlignment(a AlignmentFlag) {
	C.QTextEdit_setAlignment(this.h, (C.int)(a))
}

func (this *QTextEdit) SetPlainText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTextEdit_setPlainText(this.h, text_ms)
}

func (this *QTextEdit) SetHtml(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTextEdit_setHtml(this.h, text_ms)
}

func (this *QTextEdit) SetMarkdown(markdown string) {
	markdown_ms := C.struct_miqt_string{}
	markdown_ms.data = C.CString(markdown)
	markdown_ms.len = C.size_t(len(markdown))
	defer C.free(unsafe.Pointer(markdown_ms.data))
	C.QTextEdit_setMarkdown(this.h, markdown_ms)
}

func (this *QTextEdit) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTextEdit_setText(this.h, text_ms)
}

func (this *QTextEdit) Cut() {
	C.QTextEdit_cut(this.h)
}

func (this *QTextEdit) Copy() {
	C.QTextEdit_copy(this.h)
}

func (this *QTextEdit) Paste() {
	C.QTextEdit_paste(this.h)
}

func (this *QTextEdit) Undo() {
	C.QTextEdit_undo(this.h)
}

func (this *QTextEdit) Redo() {
	C.QTextEdit_redo(this.h)
}

func (this *QTextEdit) Clear() {
	C.QTextEdit_clear(this.h)
}

func (this *QTextEdit) SelectAll() {
	C.QTextEdit_selectAll(this.h)
}

func (this *QTextEdit) InsertPlainText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTextEdit_insertPlainText(this.h, text_ms)
}

func (this *QTextEdit) InsertHtml(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTextEdit_insertHtml(this.h, text_ms)
}

func (this *QTextEdit) Append(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTextEdit_append(this.h, text_ms)
}

func (this *QTextEdit) ScrollToAnchor(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QTextEdit_scrollToAnchor(this.h, name_ms)
}

func (this *QTextEdit) ZoomIn() {
	C.QTextEdit_zoomIn(this.h)
}

func (this *QTextEdit) ZoomOut() {
	C.QTextEdit_zoomOut(this.h)
}

func (this *QTextEdit) TextChanged() {
	C.QTextEdit_textChanged(this.h)
}
func (this *QTextEdit) OnTextChanged(slot func()) {
	C.QTextEdit_connect_textChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_textChanged
func miqt_exec_callback_QTextEdit_textChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTextEdit) UndoAvailable(b bool) {
	C.QTextEdit_undoAvailable(this.h, (C.bool)(b))
}
func (this *QTextEdit) OnUndoAvailable(slot func(b bool)) {
	C.QTextEdit_connect_undoAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_undoAvailable
func miqt_exec_callback_QTextEdit_undoAvailable(cb C.intptr_t, b C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(b bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(b)

	gofunc(slotval1)
}

func (this *QTextEdit) RedoAvailable(b bool) {
	C.QTextEdit_redoAvailable(this.h, (C.bool)(b))
}
func (this *QTextEdit) OnRedoAvailable(slot func(b bool)) {
	C.QTextEdit_connect_redoAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_redoAvailable
func miqt_exec_callback_QTextEdit_redoAvailable(cb C.intptr_t, b C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(b bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(b)

	gofunc(slotval1)
}

func (this *QTextEdit) CurrentCharFormatChanged(format *QTextCharFormat) {
	C.QTextEdit_currentCharFormatChanged(this.h, format.cPointer())
}
func (this *QTextEdit) OnCurrentCharFormatChanged(slot func(format *QTextCharFormat)) {
	C.QTextEdit_connect_currentCharFormatChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_currentCharFormatChanged
func miqt_exec_callback_QTextEdit_currentCharFormatChanged(cb C.intptr_t, format *C.QTextCharFormat) {
	gofunc, ok := cgo.Handle(cb).Value().(func(format *QTextCharFormat))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTextCharFormat(format)

	gofunc(slotval1)
}

func (this *QTextEdit) CopyAvailable(b bool) {
	C.QTextEdit_copyAvailable(this.h, (C.bool)(b))
}
func (this *QTextEdit) OnCopyAvailable(slot func(b bool)) {
	C.QTextEdit_connect_copyAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_copyAvailable
func miqt_exec_callback_QTextEdit_copyAvailable(cb C.intptr_t, b C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(b bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(b)

	gofunc(slotval1)
}

func (this *QTextEdit) SelectionChanged() {
	C.QTextEdit_selectionChanged(this.h)
}
func (this *QTextEdit) OnSelectionChanged(slot func()) {
	C.QTextEdit_connect_selectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_selectionChanged
func miqt_exec_callback_QTextEdit_selectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTextEdit) CursorPositionChanged() {
	C.QTextEdit_cursorPositionChanged(this.h)
}
func (this *QTextEdit) OnCursorPositionChanged(slot func()) {
	C.QTextEdit_connect_cursorPositionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_cursorPositionChanged
func miqt_exec_callback_QTextEdit_cursorPositionChanged(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QTextEdit_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextEdit_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) Find2(exp string, options QTextDocument__FindFlag) bool {
	exp_ms := C.struct_miqt_string{}
	exp_ms.data = C.CString(exp)
	exp_ms.len = C.size_t(len(exp))
	defer C.free(unsafe.Pointer(exp_ms.data))
	return (bool)(C.QTextEdit_find2(this.h, exp_ms, (C.int)(options)))
}

func (this *QTextEdit) Find3(exp *QRegularExpression, options QTextDocument__FindFlag) bool {
	return (bool)(C.QTextEdit_find3(this.h, exp.cPointer(), (C.int)(options)))
}

func (this *QTextEdit) ToMarkdownWithFeatures(features QTextDocument__MarkdownFeature) string {
	var _ms C.struct_miqt_string = C.QTextEdit_toMarkdownWithFeatures(this.h, (C.int)(features))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextEdit) MoveCursor2(operation QTextCursor__MoveOperation, mode QTextCursor__MoveMode) {
	C.QTextEdit_moveCursor2(this.h, (C.int)(operation), (C.int)(mode))
}

func (this *QTextEdit) ZoomInWithRange(rangeVal int) {
	C.QTextEdit_zoomInWithRange(this.h, (C.int)(rangeVal))
}

func (this *QTextEdit) ZoomOutWithRange(rangeVal int) {
	C.QTextEdit_zoomOutWithRange(this.h, (C.int)(rangeVal))
}

// ZoomInF can only be called from a QTextEdit that was directly constructed.
func (this *QTextEdit) ZoomInF(rangeVal float32) {

	var _dynamic_cast_ok C.bool = false
	C.QTextEdit_protectedbase_zoomInF(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.float)(rangeVal))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetViewportMargins can only be called from a QTextEdit that was directly constructed.
func (this *QTextEdit) SetViewportMargins(left int, top int, right int, bottom int) {

	var _dynamic_cast_ok C.bool = false
	C.QTextEdit_protectedbase_setViewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ViewportMargins can only be called from a QTextEdit that was directly constructed.
func (this *QTextEdit) ViewportMargins() QMargins {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQMargins(C.QTextEdit_protectedbase_viewportMargins(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DrawFrame can only be called from a QTextEdit that was directly constructed.
func (this *QTextEdit) DrawFrame(param1 *QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QTextEdit_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QTextEdit that was directly constructed.
func (this *QTextEdit) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QTextEdit_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QTextEdit that was directly constructed.
func (this *QTextEdit) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QTextEdit_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QTextEdit that was directly constructed.
func (this *QTextEdit) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QTextEdit_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QTextEdit that was directly constructed.
func (this *QTextEdit) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTextEdit_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QTextEdit that was directly constructed.
func (this *QTextEdit) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTextEdit_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QTextEdit that was directly constructed.
func (this *QTextEdit) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QTextEdit_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QTextEdit that was directly constructed.
func (this *QTextEdit) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTextEdit_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QTextEdit that was directly constructed.
func (this *QTextEdit) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTextEdit_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QTextEdit that was directly constructed.
func (this *QTextEdit) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTextEdit_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QTextEdit) callVirtualBase_LoadResource(typeVal int, name *QUrl) *QVariant {

	_goptr := newQVariant(C.QTextEdit_virtualbase_loadResource(unsafe.Pointer(this.h), (C.int)(typeVal), name.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextEdit) OnLoadResource(slot func(super func(typeVal int, name *QUrl) *QVariant, typeVal int, name *QUrl) *QVariant) {
	ok := C.QTextEdit_override_virtual_loadResource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_loadResource
func miqt_exec_callback_QTextEdit_loadResource(self *C.QTextEdit, cb C.intptr_t, typeVal C.int, name *C.QUrl) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(typeVal int, name *QUrl) *QVariant, typeVal int, name *QUrl) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(typeVal)

	slotval2 := newQUrl(name)

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_LoadResource, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QTextEdit) callVirtualBase_InputMethodQuery(property InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QTextEdit_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(property)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextEdit) OnInputMethodQuery(slot func(super func(property InputMethodQuery) *QVariant, property InputMethodQuery) *QVariant) {
	ok := C.QTextEdit_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_inputMethodQuery
func miqt_exec_callback_QTextEdit_inputMethodQuery(self *C.QTextEdit, cb C.intptr_t, property C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(property InputMethodQuery) *QVariant, property InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(property)

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTextEdit) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QTextEdit_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QTextEdit) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QTextEdit_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_event
func miqt_exec_callback_QTextEdit_event(self *C.QTextEdit, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTextEdit) callVirtualBase_TimerEvent(e *QTimerEvent) {

	C.QTextEdit_virtualbase_timerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnTimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	ok := C.QTextEdit_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_timerEvent
func miqt_exec_callback_QTextEdit_timerEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_KeyPressEvent(e *QKeyEvent) {

	C.QTextEdit_virtualbase_keyPressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnKeyPressEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QTextEdit_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_keyPressEvent
func miqt_exec_callback_QTextEdit_keyPressEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QTextEdit_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnKeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	ok := C.QTextEdit_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_keyReleaseEvent
func miqt_exec_callback_QTextEdit_keyReleaseEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_ResizeEvent(e *QResizeEvent) {

	C.QTextEdit_virtualbase_resizeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnResizeEvent(slot func(super func(e *QResizeEvent), e *QResizeEvent)) {
	ok := C.QTextEdit_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_resizeEvent
func miqt_exec_callback_QTextEdit_resizeEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QResizeEvent), e *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_PaintEvent(e *QPaintEvent) {

	C.QTextEdit_virtualbase_paintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	ok := C.QTextEdit_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_paintEvent
func miqt_exec_callback_QTextEdit_paintEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_MousePressEvent(e *QMouseEvent) {

	C.QTextEdit_virtualbase_mousePressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnMousePressEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QTextEdit_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_mousePressEvent
func miqt_exec_callback_QTextEdit_mousePressEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_MouseMoveEvent(e *QMouseEvent) {

	C.QTextEdit_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnMouseMoveEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QTextEdit_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_mouseMoveEvent
func miqt_exec_callback_QTextEdit_mouseMoveEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QTextEdit_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QTextEdit_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_mouseReleaseEvent
func miqt_exec_callback_QTextEdit_mouseReleaseEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_MouseDoubleClickEvent(e *QMouseEvent) {

	C.QTextEdit_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnMouseDoubleClickEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	ok := C.QTextEdit_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_mouseDoubleClickEvent
func miqt_exec_callback_QTextEdit_mouseDoubleClickEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QTextEdit_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QTextEdit) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QTextEdit_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_focusNextPrevChild
func miqt_exec_callback_QTextEdit_focusNextPrevChild(self *C.QTextEdit, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTextEdit) callVirtualBase_ContextMenuEvent(e *QContextMenuEvent) {

	C.QTextEdit_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnContextMenuEvent(slot func(super func(e *QContextMenuEvent), e *QContextMenuEvent)) {
	ok := C.QTextEdit_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_contextMenuEvent
func miqt_exec_callback_QTextEdit_contextMenuEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QContextMenuEvent), e *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_DragEnterEvent(e *QDragEnterEvent) {

	C.QTextEdit_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnDragEnterEvent(slot func(super func(e *QDragEnterEvent), e *QDragEnterEvent)) {
	ok := C.QTextEdit_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_dragEnterEvent
func miqt_exec_callback_QTextEdit_dragEnterEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragEnterEvent), e *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_DragLeaveEvent(e *QDragLeaveEvent) {

	C.QTextEdit_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnDragLeaveEvent(slot func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent)) {
	ok := C.QTextEdit_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_dragLeaveEvent
func miqt_exec_callback_QTextEdit_dragLeaveEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_DragMoveEvent(e *QDragMoveEvent) {

	C.QTextEdit_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnDragMoveEvent(slot func(super func(e *QDragMoveEvent), e *QDragMoveEvent)) {
	ok := C.QTextEdit_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_dragMoveEvent
func miqt_exec_callback_QTextEdit_dragMoveEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragMoveEvent), e *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_DropEvent(e *QDropEvent) {

	C.QTextEdit_virtualbase_dropEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnDropEvent(slot func(super func(e *QDropEvent), e *QDropEvent)) {
	ok := C.QTextEdit_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_dropEvent
func miqt_exec_callback_QTextEdit_dropEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDropEvent), e *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_FocusInEvent(e *QFocusEvent) {

	C.QTextEdit_virtualbase_focusInEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnFocusInEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QTextEdit_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_focusInEvent
func miqt_exec_callback_QTextEdit_focusInEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_FocusOutEvent(e *QFocusEvent) {

	C.QTextEdit_virtualbase_focusOutEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnFocusOutEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	ok := C.QTextEdit_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_focusOutEvent
func miqt_exec_callback_QTextEdit_focusOutEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QTextEdit_virtualbase_showEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTextEdit) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QTextEdit_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_showEvent
func miqt_exec_callback_QTextEdit_showEvent(self *C.QTextEdit, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QTextEdit{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QTextEdit_virtualbase_changeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QTextEdit_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_changeEvent
func miqt_exec_callback_QTextEdit_changeEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QTextEdit_virtualbase_wheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	ok := C.QTextEdit_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_wheelEvent
func miqt_exec_callback_QTextEdit_wheelEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_CreateMimeDataFromSelection() *QMimeData {

	return newQMimeData(C.QTextEdit_virtualbase_createMimeDataFromSelection(unsafe.Pointer(this.h)))

}
func (this *QTextEdit) OnCreateMimeDataFromSelection(slot func(super func() *QMimeData) *QMimeData) {
	ok := C.QTextEdit_override_virtual_createMimeDataFromSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_createMimeDataFromSelection
func miqt_exec_callback_QTextEdit_createMimeDataFromSelection(self *C.QTextEdit, cb C.intptr_t) *C.QMimeData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMimeData) *QMimeData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_CreateMimeDataFromSelection)

	return virtualReturn.cPointer()

}

func (this *QTextEdit) callVirtualBase_CanInsertFromMimeData(source *QMimeData) bool {

	return (bool)(C.QTextEdit_virtualbase_canInsertFromMimeData(unsafe.Pointer(this.h), source.cPointer()))

}
func (this *QTextEdit) OnCanInsertFromMimeData(slot func(super func(source *QMimeData) bool, source *QMimeData) bool) {
	ok := C.QTextEdit_override_virtual_canInsertFromMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_canInsertFromMimeData
func miqt_exec_callback_QTextEdit_canInsertFromMimeData(self *C.QTextEdit, cb C.intptr_t, source *C.QMimeData) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source *QMimeData) bool, source *QMimeData) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMimeData(source)

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_CanInsertFromMimeData, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTextEdit) callVirtualBase_InsertFromMimeData(source *QMimeData) {

	C.QTextEdit_virtualbase_insertFromMimeData(unsafe.Pointer(this.h), source.cPointer())

}
func (this *QTextEdit) OnInsertFromMimeData(slot func(super func(source *QMimeData), source *QMimeData)) {
	ok := C.QTextEdit_override_virtual_insertFromMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_insertFromMimeData
func miqt_exec_callback_QTextEdit_insertFromMimeData(self *C.QTextEdit, cb C.intptr_t, source *C.QMimeData) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source *QMimeData), source *QMimeData))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMimeData(source)

	gofunc((&QTextEdit{h: self}).callVirtualBase_InsertFromMimeData, slotval1)

}

func (this *QTextEdit) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QTextEdit_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTextEdit) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QTextEdit_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_inputMethodEvent
func miqt_exec_callback_QTextEdit_inputMethodEvent(self *C.QTextEdit, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QTextEdit{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QTextEdit_virtualbase_scrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QTextEdit) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	ok := C.QTextEdit_override_virtual_scrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_scrollContentsBy
func miqt_exec_callback_QTextEdit_scrollContentsBy(self *C.QTextEdit, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QTextEdit{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QTextEdit) callVirtualBase_DoSetTextCursor(cursor *QTextCursor) {

	C.QTextEdit_virtualbase_doSetTextCursor(unsafe.Pointer(this.h), cursor.cPointer())

}
func (this *QTextEdit) OnDoSetTextCursor(slot func(super func(cursor *QTextCursor), cursor *QTextCursor)) {
	ok := C.QTextEdit_override_virtual_doSetTextCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_doSetTextCursor
func miqt_exec_callback_QTextEdit_doSetTextCursor(self *C.QTextEdit, cb C.intptr_t, cursor *C.QTextCursor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cursor *QTextCursor), cursor *QTextCursor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTextCursor(cursor)

	gofunc((&QTextEdit{h: self}).callVirtualBase_DoSetTextCursor, slotval1)

}

func (this *QTextEdit) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QTextEdit_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextEdit) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTextEdit_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_minimumSizeHint
func miqt_exec_callback_QTextEdit_minimumSizeHint(self *C.QTextEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTextEdit) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QTextEdit_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextEdit) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTextEdit_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_sizeHint
func miqt_exec_callback_QTextEdit_sizeHint(self *C.QTextEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QTextEdit) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QTextEdit_virtualbase_setupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QTextEdit) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	ok := C.QTextEdit_override_virtual_setupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_setupViewport
func miqt_exec_callback_QTextEdit_setupViewport(self *C.QTextEdit, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport)

	gofunc((&QTextEdit{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QTextEdit) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QTextEdit_virtualbase_eventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QTextEdit) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QTextEdit_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_eventFilter
func miqt_exec_callback_QTextEdit_eventFilter(self *C.QTextEdit, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTextEdit) callVirtualBase_ViewportEvent(param1 *QEvent) bool {

	return (bool)(C.QTextEdit_virtualbase_viewportEvent(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QTextEdit) OnViewportEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QTextEdit_override_virtual_viewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_viewportEvent
func miqt_exec_callback_QTextEdit_viewportEvent(self *C.QTextEdit, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTextEdit) callVirtualBase_ViewportSizeHint() *QSize {

	_goptr := newQSize(C.QTextEdit_virtualbase_viewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextEdit) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QTextEdit_override_virtual_viewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_viewportSizeHint
func miqt_exec_callback_QTextEdit_viewportSizeHint(self *C.QTextEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTextEdit) callVirtualBase_InitStyleOption(option *QStyleOptionFrame) {

	C.QTextEdit_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QTextEdit) OnInitStyleOption(slot func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame)) {
	ok := C.QTextEdit_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_initStyleOption
func miqt_exec_callback_QTextEdit_initStyleOption(self *C.QTextEdit, cb C.intptr_t, option *C.QStyleOptionFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOptionFrame), option *QStyleOptionFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOptionFrame(option)

	gofunc((&QTextEdit{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QTextEdit) callVirtualBase_DevType() int {

	return (int)(C.QTextEdit_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QTextEdit) OnDevType(slot func(super func() int) int) {
	ok := C.QTextEdit_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_devType
func miqt_exec_callback_QTextEdit_devType(self *C.QTextEdit, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QTextEdit) callVirtualBase_SetVisible(visible bool) {

	C.QTextEdit_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QTextEdit) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QTextEdit_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_setVisible
func miqt_exec_callback_QTextEdit_setVisible(self *C.QTextEdit, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QTextEdit{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QTextEdit) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QTextEdit_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTextEdit) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QTextEdit_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_heightForWidth
func miqt_exec_callback_QTextEdit_heightForWidth(self *C.QTextEdit, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTextEdit) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QTextEdit_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QTextEdit) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QTextEdit_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_hasHeightForWidth
func miqt_exec_callback_QTextEdit_hasHeightForWidth(self *C.QTextEdit, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QTextEdit) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QTextEdit_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QTextEdit) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QTextEdit_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_paintEngine
func miqt_exec_callback_QTextEdit_paintEngine(self *C.QTextEdit, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QTextEdit) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QTextEdit_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextEdit) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QTextEdit_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_enterEvent
func miqt_exec_callback_QTextEdit_enterEvent(self *C.QTextEdit, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QTextEdit{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QTextEdit_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextEdit) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTextEdit_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_leaveEvent
func miqt_exec_callback_QTextEdit_leaveEvent(self *C.QTextEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTextEdit{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QTextEdit_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextEdit) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QTextEdit_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_moveEvent
func miqt_exec_callback_QTextEdit_moveEvent(self *C.QTextEdit, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QTextEdit{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QTextEdit_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextEdit) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QTextEdit_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_closeEvent
func miqt_exec_callback_QTextEdit_closeEvent(self *C.QTextEdit, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QTextEdit{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QTextEdit_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextEdit) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QTextEdit_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_tabletEvent
func miqt_exec_callback_QTextEdit_tabletEvent(self *C.QTextEdit, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QTextEdit{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QTextEdit_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextEdit) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QTextEdit_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_actionEvent
func miqt_exec_callback_QTextEdit_actionEvent(self *C.QTextEdit, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QTextEdit{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QTextEdit_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextEdit) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QTextEdit_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_hideEvent
func miqt_exec_callback_QTextEdit_hideEvent(self *C.QTextEdit, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QTextEdit{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QTextEdit_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QTextEdit) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QTextEdit_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_nativeEvent
func miqt_exec_callback_QTextEdit_nativeEvent(self *C.QTextEdit, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QTextEdit) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QTextEdit_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QTextEdit) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QTextEdit_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_metric
func miqt_exec_callback_QTextEdit_metric(self *C.QTextEdit, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QTextEdit) callVirtualBase_InitPainter(painter *QPainter) {

	C.QTextEdit_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QTextEdit) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QTextEdit_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_initPainter
func miqt_exec_callback_QTextEdit_initPainter(self *C.QTextEdit, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QTextEdit{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QTextEdit) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QTextEdit_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QTextEdit) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QTextEdit_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_redirected
func miqt_exec_callback_QTextEdit_redirected(self *C.QTextEdit, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTextEdit) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QTextEdit_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QTextEdit) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QTextEdit_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_sharedPainter
func miqt_exec_callback_QTextEdit_sharedPainter(self *C.QTextEdit, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QTextEdit) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTextEdit_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextEdit) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTextEdit_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_childEvent
func miqt_exec_callback_QTextEdit_childEvent(self *C.QTextEdit, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTextEdit{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTextEdit_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextEdit) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTextEdit_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_customEvent
func miqt_exec_callback_QTextEdit_customEvent(self *C.QTextEdit, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTextEdit{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTextEdit_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTextEdit) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTextEdit_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_connectNotify
func miqt_exec_callback_QTextEdit_connectNotify(self *C.QTextEdit, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTextEdit{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTextEdit) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTextEdit_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTextEdit) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTextEdit_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextEdit_disconnectNotify
func miqt_exec_callback_QTextEdit_disconnectNotify(self *C.QTextEdit, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTextEdit{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTextEdit) Delete() {
	C.QTextEdit_delete(this.h)
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

// newQTextEdit__ExtraSelection constructs the type using only CGO pointers.
func newQTextEdit__ExtraSelection(h *C.QTextEdit__ExtraSelection) *QTextEdit__ExtraSelection {
	if h == nil {
		return nil
	}

	return &QTextEdit__ExtraSelection{h: h}
}

// UnsafeNewQTextEdit__ExtraSelection constructs the type using only unsafe pointers.
func UnsafeNewQTextEdit__ExtraSelection(h unsafe.Pointer) *QTextEdit__ExtraSelection {
	return newQTextEdit__ExtraSelection((*C.QTextEdit__ExtraSelection)(h))
}

// NewQTextEdit__ExtraSelection constructs a new QTextEdit::ExtraSelection object.
func NewQTextEdit__ExtraSelection(param1 *QTextEdit__ExtraSelection) *QTextEdit__ExtraSelection {

	return newQTextEdit__ExtraSelection(C.QTextEdit__ExtraSelection_new(param1.cPointer()))
}

func (this *QTextEdit__ExtraSelection) Cursor() *QTextCursor {
	cursor_goptr := newQTextCursor(C.QTextEdit__ExtraSelection_cursor(this.h))
	cursor_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return cursor_goptr
}

func (this *QTextEdit__ExtraSelection) SetCursor(cursor QTextCursor) {
	C.QTextEdit__ExtraSelection_setCursor(this.h, cursor.cPointer())
}

func (this *QTextEdit__ExtraSelection) Format() *QTextCharFormat {
	format_goptr := newQTextCharFormat(C.QTextEdit__ExtraSelection_format(this.h))
	format_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return format_goptr
}

func (this *QTextEdit__ExtraSelection) SetFormat(format QTextCharFormat) {
	C.QTextEdit__ExtraSelection_setFormat(this.h, format.cPointer())
}

func (this *QTextEdit__ExtraSelection) OperatorAssign(param1 *QTextEdit__ExtraSelection) {
	C.QTextEdit__ExtraSelection_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QTextEdit__ExtraSelection) Delete() {
	C.QTextEdit__ExtraSelection_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextEdit__ExtraSelection) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextEdit__ExtraSelection) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
