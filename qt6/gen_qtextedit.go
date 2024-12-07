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
	QTextEdit__AutoAll        QTextEdit__AutoFormattingFlag = 4294967295
)

type QTextEdit struct {
	h          *C.QTextEdit
	isSubclass bool
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
func newQTextEdit(h *C.QTextEdit, h_QAbstractScrollArea *C.QAbstractScrollArea, h_QFrame *C.QFrame, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QTextEdit {
	if h == nil {
		return nil
	}
	return &QTextEdit{h: h,
		QAbstractScrollArea: newQAbstractScrollArea(h_QAbstractScrollArea, h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQTextEdit constructs the type using only unsafe pointers.
func UnsafeNewQTextEdit(h unsafe.Pointer, h_QAbstractScrollArea unsafe.Pointer, h_QFrame unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QTextEdit {
	if h == nil {
		return nil
	}

	return &QTextEdit{h: (*C.QTextEdit)(h),
		QAbstractScrollArea: UnsafeNewQAbstractScrollArea(h_QAbstractScrollArea, h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQTextEdit constructs a new QTextEdit object.
func NewQTextEdit(parent *QWidget) *QTextEdit {
	var outptr_QTextEdit *C.QTextEdit = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QTextEdit_new(parent.cPointer(), &outptr_QTextEdit, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQTextEdit(outptr_QTextEdit, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQTextEdit2 constructs a new QTextEdit object.
func NewQTextEdit2() *QTextEdit {
	var outptr_QTextEdit *C.QTextEdit = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QTextEdit_new2(&outptr_QTextEdit, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQTextEdit(outptr_QTextEdit, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQTextEdit3 constructs a new QTextEdit object.
func NewQTextEdit3(text string) *QTextEdit {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QTextEdit *C.QTextEdit = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QTextEdit_new3(text_ms, &outptr_QTextEdit, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQTextEdit(outptr_QTextEdit, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQTextEdit4 constructs a new QTextEdit object.
func NewQTextEdit4(text string, parent *QWidget) *QTextEdit {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QTextEdit *C.QTextEdit = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QTextEdit_new4(text_ms, parent.cPointer(), &outptr_QTextEdit, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQTextEdit(outptr_QTextEdit, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QTextEdit) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTextEdit_MetaObject(this.h))
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

func (this *QTextEdit) SetDocument(document *QTextDocument) {
	C.QTextEdit_SetDocument(this.h, document.cPointer())
}

func (this *QTextEdit) Document() *QTextDocument {
	return newQTextDocument(C.QTextEdit_Document(this.h), nil)
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
	_goptr := newQTextCursor(C.QTextEdit_TextCursor(this.h))
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
	_goptr := newQColor(C.QTextEdit_TextColor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) TextBackgroundColor() *QColor {
	_goptr := newQColor(C.QTextEdit_TextBackgroundColor(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) CurrentFont() *QFont {
	_goptr := newQFont(C.QTextEdit_CurrentFont(this.h))
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
	_goptr := newQTextCharFormat(C.QTextEdit_CurrentCharFormat(this.h), nil)
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

func (this *QTextEdit) FindWithExp(exp *QRegularExpression) bool {
	return (bool)(C.QTextEdit_FindWithExp(this.h, exp.cPointer()))
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
	_goptr := newQVariant(C.QTextEdit_LoadResource(this.h, (C.int)(typeVal), name.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) CreateStandardContextMenu() *QMenu {
	return newQMenu(C.QTextEdit_CreateStandardContextMenu(this.h), nil, nil, nil)
}

func (this *QTextEdit) CreateStandardContextMenuWithPosition(position *QPoint) *QMenu {
	return newQMenu(C.QTextEdit_CreateStandardContextMenuWithPosition(this.h, position.cPointer()), nil, nil, nil)
}

func (this *QTextEdit) CursorForPosition(pos *QPoint) *QTextCursor {
	_goptr := newQTextCursor(C.QTextEdit_CursorForPosition(this.h, pos.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) CursorRect(cursor *QTextCursor) *QRect {
	_goptr := newQRect(C.QTextEdit_CursorRect(this.h, cursor.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) CursorRect2() *QRect {
	_goptr := newQRect(C.QTextEdit_CursorRect2(this.h))
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
	selections_CArray := (*[0xffff]*C.QTextEdit__ExtraSelection)(C.malloc(C.size_t(8 * len(selections))))
	defer C.free(unsafe.Pointer(selections_CArray))
	for i := range selections {
		selections_CArray[i] = selections[i].cPointer()
	}
	selections_ma := C.struct_miqt_array{len: C.size_t(len(selections)), data: unsafe.Pointer(selections_CArray)}
	C.QTextEdit_SetExtraSelections(this.h, selections_ma)
}

func (this *QTextEdit) ExtraSelections() []QTextEdit__ExtraSelection {
	var _ma C.struct_miqt_array = C.QTextEdit_ExtraSelections(this.h)
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
	C.QTextEdit_MoveCursor(this.h, (C.int)(operation))
}

func (this *QTextEdit) CanPaste() bool {
	return (bool)(C.QTextEdit_CanPaste(this.h))
}

func (this *QTextEdit) Print(printer *QPagedPaintDevice) {
	C.QTextEdit_Print(this.h, printer.cPointer())
}

func (this *QTextEdit) InputMethodQuery(property InputMethodQuery) *QVariant {
	_goptr := newQVariant(C.QTextEdit_InputMethodQuery(this.h, (C.int)(property)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextEdit) InputMethodQuery2(query InputMethodQuery, argument QVariant) *QVariant {
	_goptr := newQVariant(C.QTextEdit_InputMethodQuery2(this.h, (C.int)(query), argument.cPointer()))
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
	slotval1 := newQTextCharFormat(format, nil)

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

func (this *QTextEdit) Find2(exp string, options QTextDocument__FindFlag) bool {
	exp_ms := C.struct_miqt_string{}
	exp_ms.data = C.CString(exp)
	exp_ms.len = C.size_t(len(exp))
	defer C.free(unsafe.Pointer(exp_ms.data))
	return (bool)(C.QTextEdit_Find2(this.h, exp_ms, (C.int)(options)))
}

func (this *QTextEdit) Find22(exp *QRegularExpression, options QTextDocument__FindFlag) bool {
	return (bool)(C.QTextEdit_Find22(this.h, exp.cPointer(), (C.int)(options)))
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

func (this *QTextEdit) callVirtualBase_LoadResource(typeVal int, name *QUrl) *QVariant {

	_goptr := newQVariant(C.QTextEdit_virtualbase_LoadResource(unsafe.Pointer(this.h), (C.int)(typeVal), name.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextEdit) OnLoadResource(slot func(super func(typeVal int, name *QUrl) *QVariant, typeVal int, name *QUrl) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_LoadResource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_LoadResource
func miqt_exec_callback_QTextEdit_LoadResource(self *C.QTextEdit, cb C.intptr_t, typeVal C.int, name *C.QUrl) *C.QVariant {
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

	_goptr := newQVariant(C.QTextEdit_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(property)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextEdit) OnInputMethodQuery(slot func(super func(property InputMethodQuery) *QVariant, property InputMethodQuery) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_InputMethodQuery
func miqt_exec_callback_QTextEdit_InputMethodQuery(self *C.QTextEdit, cb C.intptr_t, property C.int) *C.QVariant {
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

	return (bool)(C.QTextEdit_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QTextEdit) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_Event
func miqt_exec_callback_QTextEdit_Event(self *C.QTextEdit, cb C.intptr_t, e *C.QEvent) C.bool {
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

	C.QTextEdit_virtualbase_TimerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnTimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_TimerEvent
func miqt_exec_callback_QTextEdit_TimerEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(e, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_KeyPressEvent(e *QKeyEvent) {

	C.QTextEdit_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnKeyPressEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_KeyPressEvent
func miqt_exec_callback_QTextEdit_KeyPressEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e, nil, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_KeyReleaseEvent(e *QKeyEvent) {

	C.QTextEdit_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnKeyReleaseEvent(slot func(super func(e *QKeyEvent), e *QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_KeyReleaseEvent
func miqt_exec_callback_QTextEdit_KeyReleaseEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QKeyEvent), e *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(e, nil, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_ResizeEvent(e *QResizeEvent) {

	C.QTextEdit_virtualbase_ResizeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnResizeEvent(slot func(super func(e *QResizeEvent), e *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_ResizeEvent
func miqt_exec_callback_QTextEdit_ResizeEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QResizeEvent), e *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(e, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_PaintEvent(e *QPaintEvent) {

	C.QTextEdit_virtualbase_PaintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_PaintEvent
func miqt_exec_callback_QTextEdit_PaintEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(e, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_MousePressEvent(e *QMouseEvent) {

	C.QTextEdit_virtualbase_MousePressEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnMousePressEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_MousePressEvent
func miqt_exec_callback_QTextEdit_MousePressEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e, nil, nil, nil, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_MouseMoveEvent(e *QMouseEvent) {

	C.QTextEdit_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnMouseMoveEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_MouseMoveEvent
func miqt_exec_callback_QTextEdit_MouseMoveEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e, nil, nil, nil, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QTextEdit_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_MouseReleaseEvent
func miqt_exec_callback_QTextEdit_MouseReleaseEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e, nil, nil, nil, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_MouseDoubleClickEvent(e *QMouseEvent) {

	C.QTextEdit_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnMouseDoubleClickEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_MouseDoubleClickEvent
func miqt_exec_callback_QTextEdit_MouseDoubleClickEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(e, nil, nil, nil, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QTextEdit_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QTextEdit) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_FocusNextPrevChild
func miqt_exec_callback_QTextEdit_FocusNextPrevChild(self *C.QTextEdit, cb C.intptr_t, next C.bool) C.bool {
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

	C.QTextEdit_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnContextMenuEvent(slot func(super func(e *QContextMenuEvent), e *QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_ContextMenuEvent
func miqt_exec_callback_QTextEdit_ContextMenuEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QContextMenuEvent), e *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(e, nil, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_DragEnterEvent(e *QDragEnterEvent) {

	C.QTextEdit_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnDragEnterEvent(slot func(super func(e *QDragEnterEvent), e *QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_DragEnterEvent
func miqt_exec_callback_QTextEdit_DragEnterEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragEnterEvent), e *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(e, nil, nil, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_DragLeaveEvent(e *QDragLeaveEvent) {

	C.QTextEdit_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnDragLeaveEvent(slot func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_DragLeaveEvent
func miqt_exec_callback_QTextEdit_DragLeaveEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(e, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_DragMoveEvent(e *QDragMoveEvent) {

	C.QTextEdit_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnDragMoveEvent(slot func(super func(e *QDragMoveEvent), e *QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_DragMoveEvent
func miqt_exec_callback_QTextEdit_DragMoveEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragMoveEvent), e *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(e, nil, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_DropEvent(e *QDropEvent) {

	C.QTextEdit_virtualbase_DropEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnDropEvent(slot func(super func(e *QDropEvent), e *QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_DropEvent
func miqt_exec_callback_QTextEdit_DropEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDropEvent), e *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(e, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_FocusInEvent(e *QFocusEvent) {

	C.QTextEdit_virtualbase_FocusInEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnFocusInEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_FocusInEvent
func miqt_exec_callback_QTextEdit_FocusInEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_FocusOutEvent(e *QFocusEvent) {

	C.QTextEdit_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnFocusOutEvent(slot func(super func(e *QFocusEvent), e *QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_FocusOutEvent
func miqt_exec_callback_QTextEdit_FocusOutEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QFocusEvent), e *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(e, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QTextEdit_virtualbase_ShowEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTextEdit) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_ShowEvent
func miqt_exec_callback_QTextEdit_ShowEvent(self *C.QTextEdit, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QTextEdit_virtualbase_ChangeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_ChangeEvent
func miqt_exec_callback_QTextEdit_ChangeEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QTextEdit{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QTextEdit_virtualbase_WheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QTextEdit) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_WheelEvent
func miqt_exec_callback_QTextEdit_WheelEvent(self *C.QTextEdit, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(e, nil, nil, nil, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_CreateMimeDataFromSelection() *QMimeData {

	return newQMimeData(C.QTextEdit_virtualbase_CreateMimeDataFromSelection(unsafe.Pointer(this.h)), nil)

}
func (this *QTextEdit) OnCreateMimeDataFromSelection(slot func(super func() *QMimeData) *QMimeData) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_CreateMimeDataFromSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_CreateMimeDataFromSelection
func miqt_exec_callback_QTextEdit_CreateMimeDataFromSelection(self *C.QTextEdit, cb C.intptr_t) *C.QMimeData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMimeData) *QMimeData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_CreateMimeDataFromSelection)

	return virtualReturn.cPointer()

}

func (this *QTextEdit) callVirtualBase_CanInsertFromMimeData(source *QMimeData) bool {

	return (bool)(C.QTextEdit_virtualbase_CanInsertFromMimeData(unsafe.Pointer(this.h), source.cPointer()))

}
func (this *QTextEdit) OnCanInsertFromMimeData(slot func(super func(source *QMimeData) bool, source *QMimeData) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_CanInsertFromMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_CanInsertFromMimeData
func miqt_exec_callback_QTextEdit_CanInsertFromMimeData(self *C.QTextEdit, cb C.intptr_t, source *C.QMimeData) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source *QMimeData) bool, source *QMimeData) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMimeData(source, nil)

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_CanInsertFromMimeData, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTextEdit) callVirtualBase_InsertFromMimeData(source *QMimeData) {

	C.QTextEdit_virtualbase_InsertFromMimeData(unsafe.Pointer(this.h), source.cPointer())

}
func (this *QTextEdit) OnInsertFromMimeData(slot func(super func(source *QMimeData), source *QMimeData)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_InsertFromMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_InsertFromMimeData
func miqt_exec_callback_QTextEdit_InsertFromMimeData(self *C.QTextEdit, cb C.intptr_t, source *C.QMimeData) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source *QMimeData), source *QMimeData))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMimeData(source, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_InsertFromMimeData, slotval1)

}

func (this *QTextEdit) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QTextEdit_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QTextEdit) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_InputMethodEvent
func miqt_exec_callback_QTextEdit_InputMethodEvent(self *C.QTextEdit, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QTextEdit) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QTextEdit_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QTextEdit) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_ScrollContentsBy
func miqt_exec_callback_QTextEdit_ScrollContentsBy(self *C.QTextEdit, cb C.intptr_t, dx C.int, dy C.int) {
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

	C.QTextEdit_virtualbase_DoSetTextCursor(unsafe.Pointer(this.h), cursor.cPointer())

}
func (this *QTextEdit) OnDoSetTextCursor(slot func(super func(cursor *QTextCursor), cursor *QTextCursor)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_DoSetTextCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_DoSetTextCursor
func miqt_exec_callback_QTextEdit_DoSetTextCursor(self *C.QTextEdit, cb C.intptr_t, cursor *C.QTextCursor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cursor *QTextCursor), cursor *QTextCursor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTextCursor(cursor)

	gofunc((&QTextEdit{h: self}).callVirtualBase_DoSetTextCursor, slotval1)

}

func (this *QTextEdit) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QTextEdit_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextEdit) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_MinimumSizeHint
func miqt_exec_callback_QTextEdit_MinimumSizeHint(self *C.QTextEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QTextEdit) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QTextEdit_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextEdit) OnSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_SizeHint
func miqt_exec_callback_QTextEdit_SizeHint(self *C.QTextEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QTextEdit) callVirtualBase_SetupViewport(viewport *QWidget) {

	C.QTextEdit_virtualbase_SetupViewport(unsafe.Pointer(this.h), viewport.cPointer())

}
func (this *QTextEdit) OnSetupViewport(slot func(super func(viewport *QWidget), viewport *QWidget)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_SetupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_SetupViewport
func miqt_exec_callback_QTextEdit_SetupViewport(self *C.QTextEdit, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *QWidget), viewport *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(viewport, nil, nil)

	gofunc((&QTextEdit{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QTextEdit) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QTextEdit_virtualbase_EventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QTextEdit) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_EventFilter
func miqt_exec_callback_QTextEdit_EventFilter(self *C.QTextEdit, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
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

	return (bool)(C.QTextEdit_virtualbase_ViewportEvent(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QTextEdit) OnViewportEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_ViewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_ViewportEvent
func miqt_exec_callback_QTextEdit_ViewportEvent(self *C.QTextEdit, cb C.intptr_t, param1 *C.QEvent) C.bool {
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

	_goptr := newQSize(C.QTextEdit_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextEdit) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QTextEdit_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextEdit_ViewportSizeHint
func miqt_exec_callback_QTextEdit_ViewportSizeHint(self *C.QTextEdit, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QTextEdit{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QTextEdit) Delete() {
	C.QTextEdit_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QTextEdit__ExtraSelection
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QTextEdit__ExtraSelection{h: (*C.QTextEdit__ExtraSelection)(h)}
}

// NewQTextEdit__ExtraSelection constructs a new QTextEdit::ExtraSelection object.
func NewQTextEdit__ExtraSelection(param1 *QTextEdit__ExtraSelection) *QTextEdit__ExtraSelection {
	var outptr_QTextEdit__ExtraSelection *C.QTextEdit__ExtraSelection = nil

	C.QTextEdit__ExtraSelection_new(param1.cPointer(), &outptr_QTextEdit__ExtraSelection)
	ret := newQTextEdit__ExtraSelection(outptr_QTextEdit__ExtraSelection)
	ret.isSubclass = true
	return ret
}

func (this *QTextEdit__ExtraSelection) OperatorAssign(param1 *QTextEdit__ExtraSelection) {
	C.QTextEdit__ExtraSelection_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QTextEdit__ExtraSelection) Delete() {
	C.QTextEdit__ExtraSelection_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextEdit__ExtraSelection) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextEdit__ExtraSelection) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
