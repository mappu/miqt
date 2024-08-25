package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qtextedit.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
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

func newQTextEdit(h *C.QTextEdit) *QTextEdit {
	return &QTextEdit{h: h, QAbstractScrollArea: newQAbstractScrollArea_U(unsafe.Pointer(h))}
}

func newQTextEdit_U(h unsafe.Pointer) *QTextEdit {
	return newQTextEdit((*C.QTextEdit)(h))
}

// NewQTextEdit constructs a new QTextEdit object.
func NewQTextEdit() *QTextEdit {
	ret := C.QTextEdit_new()
	return newQTextEdit(ret)
}

// NewQTextEdit2 constructs a new QTextEdit object.
func NewQTextEdit2(text string) *QTextEdit {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QTextEdit_new2(text_Cstring, C.ulong(len(text)))
	return newQTextEdit(ret)
}

// NewQTextEdit3 constructs a new QTextEdit object.
func NewQTextEdit3(parent *QWidget) *QTextEdit {
	ret := C.QTextEdit_new3(parent.cPointer())
	return newQTextEdit(ret)
}

// NewQTextEdit4 constructs a new QTextEdit object.
func NewQTextEdit4(text string, parent *QWidget) *QTextEdit {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QTextEdit_new4(text_Cstring, C.ulong(len(text)), parent.cPointer())
	return newQTextEdit(ret)
}

func (this *QTextEdit) MetaObject() *QMetaObject {
	ret := C.QTextEdit_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTextEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextEdit_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextEdit_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextEdit_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextEdit) SetDocument(document *QTextDocument) {
	C.QTextEdit_SetDocument(this.h, document.cPointer())
}

func (this *QTextEdit) Document() *QTextDocument {
	ret := C.QTextEdit_Document(this.h)
	return newQTextDocument_U(unsafe.Pointer(ret))
}

func (this *QTextEdit) SetPlaceholderText(placeholderText string) {
	placeholderText_Cstring := C.CString(placeholderText)
	defer C.free(unsafe.Pointer(placeholderText_Cstring))
	C.QTextEdit_SetPlaceholderText(this.h, placeholderText_Cstring, C.ulong(len(placeholderText)))
}

func (this *QTextEdit) PlaceholderText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextEdit_PlaceholderText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextEdit) SetTextCursor(cursor *QTextCursor) {
	C.QTextEdit_SetTextCursor(this.h, cursor.cPointer())
}

func (this *QTextEdit) TextCursor() *QTextCursor {
	ret := C.QTextEdit_TextCursor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCursor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCursor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextEdit) IsReadOnly() bool {
	ret := C.QTextEdit_IsReadOnly(this.h)
	return (bool)(ret)
}

func (this *QTextEdit) SetReadOnly(ro bool) {
	C.QTextEdit_SetReadOnly(this.h, (C.bool)(ro))
}

func (this *QTextEdit) FontPointSize() float64 {
	ret := C.QTextEdit_FontPointSize(this.h)
	return (float64)(ret)
}

func (this *QTextEdit) FontFamily() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextEdit_FontFamily(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextEdit) FontWeight() int {
	ret := C.QTextEdit_FontWeight(this.h)
	return (int)(ret)
}

func (this *QTextEdit) FontUnderline() bool {
	ret := C.QTextEdit_FontUnderline(this.h)
	return (bool)(ret)
}

func (this *QTextEdit) FontItalic() bool {
	ret := C.QTextEdit_FontItalic(this.h)
	return (bool)(ret)
}

func (this *QTextEdit) TextColor() *QColor {
	ret := C.QTextEdit_TextColor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextEdit) TextBackgroundColor() *QColor {
	ret := C.QTextEdit_TextBackgroundColor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextEdit) CurrentFont() *QFont {
	ret := C.QTextEdit_CurrentFont(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextEdit) MergeCurrentCharFormat(modifier *QTextCharFormat) {
	C.QTextEdit_MergeCurrentCharFormat(this.h, modifier.cPointer())
}

func (this *QTextEdit) SetCurrentCharFormat(format *QTextCharFormat) {
	C.QTextEdit_SetCurrentCharFormat(this.h, format.cPointer())
}

func (this *QTextEdit) CurrentCharFormat() *QTextCharFormat {
	ret := C.QTextEdit_CurrentCharFormat(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCharFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCharFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextEdit) TabChangesFocus() bool {
	ret := C.QTextEdit_TabChangesFocus(this.h)
	return (bool)(ret)
}

func (this *QTextEdit) SetTabChangesFocus(b bool) {
	C.QTextEdit_SetTabChangesFocus(this.h, (C.bool)(b))
}

func (this *QTextEdit) SetDocumentTitle(title string) {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	C.QTextEdit_SetDocumentTitle(this.h, title_Cstring, C.ulong(len(title)))
}

func (this *QTextEdit) DocumentTitle() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextEdit_DocumentTitle(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextEdit) IsUndoRedoEnabled() bool {
	ret := C.QTextEdit_IsUndoRedoEnabled(this.h)
	return (bool)(ret)
}

func (this *QTextEdit) SetUndoRedoEnabled(enable bool) {
	C.QTextEdit_SetUndoRedoEnabled(this.h, (C.bool)(enable))
}

func (this *QTextEdit) LineWrapColumnOrWidth() int {
	ret := C.QTextEdit_LineWrapColumnOrWidth(this.h)
	return (int)(ret)
}

func (this *QTextEdit) SetLineWrapColumnOrWidth(w int) {
	C.QTextEdit_SetLineWrapColumnOrWidth(this.h, (C.int)(w))
}

func (this *QTextEdit) ToPlainText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextEdit_ToPlainText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextEdit) ToHtml() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextEdit_ToHtml(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextEdit) EnsureCursorVisible() {
	C.QTextEdit_EnsureCursorVisible(this.h)
}

func (this *QTextEdit) LoadResource(typeVal int, name *QUrl) *QVariant {
	ret := C.QTextEdit_LoadResource(this.h, (C.int)(typeVal), name.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextEdit) CreateStandardContextMenu() *QMenu {
	ret := C.QTextEdit_CreateStandardContextMenu(this.h)
	return newQMenu_U(unsafe.Pointer(ret))
}

func (this *QTextEdit) CreateStandardContextMenuWithPosition(position *QPoint) *QMenu {
	ret := C.QTextEdit_CreateStandardContextMenuWithPosition(this.h, position.cPointer())
	return newQMenu_U(unsafe.Pointer(ret))
}

func (this *QTextEdit) CursorForPosition(pos *QPoint) *QTextCursor {
	ret := C.QTextEdit_CursorForPosition(this.h, pos.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCursor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCursor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextEdit) CursorRect(cursor *QTextCursor) *QRect {
	ret := C.QTextEdit_CursorRect(this.h, cursor.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextEdit) CursorRect2() *QRect {
	ret := C.QTextEdit_CursorRect2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextEdit) AnchorAt(pos *QPoint) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextEdit_AnchorAt(this.h, pos.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextEdit) OverwriteMode() bool {
	ret := C.QTextEdit_OverwriteMode(this.h)
	return (bool)(ret)
}

func (this *QTextEdit) SetOverwriteMode(overwrite bool) {
	C.QTextEdit_SetOverwriteMode(this.h, (C.bool)(overwrite))
}

func (this *QTextEdit) TabStopWidth() int {
	ret := C.QTextEdit_TabStopWidth(this.h)
	return (int)(ret)
}

func (this *QTextEdit) SetTabStopWidth(width int) {
	C.QTextEdit_SetTabStopWidth(this.h, (C.int)(width))
}

func (this *QTextEdit) TabStopDistance() float64 {
	ret := C.QTextEdit_TabStopDistance(this.h)
	return (float64)(ret)
}

func (this *QTextEdit) SetTabStopDistance(distance float64) {
	C.QTextEdit_SetTabStopDistance(this.h, (C.double)(distance))
}

func (this *QTextEdit) CursorWidth() int {
	ret := C.QTextEdit_CursorWidth(this.h)
	return (int)(ret)
}

func (this *QTextEdit) SetCursorWidth(width int) {
	C.QTextEdit_SetCursorWidth(this.h, (C.int)(width))
}

func (this *QTextEdit) AcceptRichText() bool {
	ret := C.QTextEdit_AcceptRichText(this.h)
	return (bool)(ret)
}

func (this *QTextEdit) SetAcceptRichText(accept bool) {
	C.QTextEdit_SetAcceptRichText(this.h, (C.bool)(accept))
}

func (this *QTextEdit) CanPaste() bool {
	ret := C.QTextEdit_CanPaste(this.h)
	return (bool)(ret)
}

func (this *QTextEdit) Print(printer *QPagedPaintDevice) {
	C.QTextEdit_Print(this.h, printer.cPointer())
}

func (this *QTextEdit) SetFontPointSize(s float64) {
	C.QTextEdit_SetFontPointSize(this.h, (C.double)(s))
}

func (this *QTextEdit) SetFontFamily(fontFamily string) {
	fontFamily_Cstring := C.CString(fontFamily)
	defer C.free(unsafe.Pointer(fontFamily_Cstring))
	C.QTextEdit_SetFontFamily(this.h, fontFamily_Cstring, C.ulong(len(fontFamily)))
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

func (this *QTextEdit) SetPlainText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QTextEdit_SetPlainText(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QTextEdit) SetHtml(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QTextEdit_SetHtml(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QTextEdit) SetMarkdown(markdown string) {
	markdown_Cstring := C.CString(markdown)
	defer C.free(unsafe.Pointer(markdown_Cstring))
	C.QTextEdit_SetMarkdown(this.h, markdown_Cstring, C.ulong(len(markdown)))
}

func (this *QTextEdit) SetText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QTextEdit_SetText(this.h, text_Cstring, C.ulong(len(text)))
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
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QTextEdit_InsertPlainText(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QTextEdit) InsertHtml(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QTextEdit_InsertHtml(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QTextEdit) Append(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QTextEdit_Append(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QTextEdit) ScrollToAnchor(name string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QTextEdit_ScrollToAnchor(this.h, name_Cstring, C.ulong(len(name)))
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
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextEdit_connect_TextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextEdit) UndoAvailable(b bool) {
	C.QTextEdit_UndoAvailable(this.h, (C.bool)(b))
}

func (this *QTextEdit) OnUndoAvailable(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextEdit_connect_UndoAvailable(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextEdit) RedoAvailable(b bool) {
	C.QTextEdit_RedoAvailable(this.h, (C.bool)(b))
}

func (this *QTextEdit) OnRedoAvailable(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextEdit_connect_RedoAvailable(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextEdit) CurrentCharFormatChanged(format *QTextCharFormat) {
	C.QTextEdit_CurrentCharFormatChanged(this.h, format.cPointer())
}

func (this *QTextEdit) OnCurrentCharFormatChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextEdit_connect_CurrentCharFormatChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextEdit) CopyAvailable(b bool) {
	C.QTextEdit_CopyAvailable(this.h, (C.bool)(b))
}

func (this *QTextEdit) OnCopyAvailable(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextEdit_connect_CopyAvailable(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextEdit) SelectionChanged() {
	C.QTextEdit_SelectionChanged(this.h)
}

func (this *QTextEdit) OnSelectionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextEdit_connect_SelectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextEdit) CursorPositionChanged() {
	C.QTextEdit_CursorPositionChanged(this.h)
}

func (this *QTextEdit) OnCursorPositionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextEdit_connect_CursorPositionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QTextEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextEdit_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextEdit_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextEdit_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextEdit_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextEdit_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextEdit_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextEdit) ZoomIn1(rangeVal int) {
	C.QTextEdit_ZoomIn1(this.h, (C.int)(rangeVal))
}

func (this *QTextEdit) ZoomOut1(rangeVal int) {
	C.QTextEdit_ZoomOut1(this.h, (C.int)(rangeVal))
}

func (this *QTextEdit) Delete() {
	C.QTextEdit_Delete(this.h)
}
