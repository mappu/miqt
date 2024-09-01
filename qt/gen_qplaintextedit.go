package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qplaintextedit.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
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

func newQPlainTextEdit(h *C.QPlainTextEdit) *QPlainTextEdit {
	if h == nil {
		return nil
	}
	return &QPlainTextEdit{h: h, QAbstractScrollArea: newQAbstractScrollArea_U(unsafe.Pointer(h))}
}

func newQPlainTextEdit_U(h unsafe.Pointer) *QPlainTextEdit {
	return newQPlainTextEdit((*C.QPlainTextEdit)(h))
}

// NewQPlainTextEdit constructs a new QPlainTextEdit object.
func NewQPlainTextEdit() *QPlainTextEdit {
	ret := C.QPlainTextEdit_new()
	return newQPlainTextEdit(ret)
}

// NewQPlainTextEdit2 constructs a new QPlainTextEdit object.
func NewQPlainTextEdit2(text string) *QPlainTextEdit {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QPlainTextEdit_new2(text_Cstring, C.ulong(len(text)))
	return newQPlainTextEdit(ret)
}

// NewQPlainTextEdit3 constructs a new QPlainTextEdit object.
func NewQPlainTextEdit3(parent *QWidget) *QPlainTextEdit {
	ret := C.QPlainTextEdit_new3(parent.cPointer())
	return newQPlainTextEdit(ret)
}

// NewQPlainTextEdit4 constructs a new QPlainTextEdit object.
func NewQPlainTextEdit4(text string, parent *QWidget) *QPlainTextEdit {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QPlainTextEdit_new4(text_Cstring, C.ulong(len(text)), parent.cPointer())
	return newQPlainTextEdit(ret)
}

func (this *QPlainTextEdit) MetaObject() *QMetaObject {
	ret := C.QPlainTextEdit_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QPlainTextEdit_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPlainTextEdit_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPlainTextEdit_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPlainTextEdit_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPlainTextEdit) SetDocument(document *QTextDocument) {
	C.QPlainTextEdit_SetDocument(this.h, document.cPointer())
}

func (this *QPlainTextEdit) Document() *QTextDocument {
	ret := C.QPlainTextEdit_Document(this.h)
	return newQTextDocument_U(unsafe.Pointer(ret))
}

func (this *QPlainTextEdit) SetPlaceholderText(placeholderText string) {
	placeholderText_Cstring := C.CString(placeholderText)
	defer C.free(unsafe.Pointer(placeholderText_Cstring))
	C.QPlainTextEdit_SetPlaceholderText(this.h, placeholderText_Cstring, C.ulong(len(placeholderText)))
}

func (this *QPlainTextEdit) PlaceholderText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPlainTextEdit_PlaceholderText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPlainTextEdit) SetTextCursor(cursor *QTextCursor) {
	C.QPlainTextEdit_SetTextCursor(this.h, cursor.cPointer())
}

func (this *QPlainTextEdit) TextCursor() *QTextCursor {
	ret := C.QPlainTextEdit_TextCursor(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCursor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCursor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPlainTextEdit) IsReadOnly() bool {
	ret := C.QPlainTextEdit_IsReadOnly(this.h)
	return (bool)(ret)
}

func (this *QPlainTextEdit) SetReadOnly(ro bool) {
	C.QPlainTextEdit_SetReadOnly(this.h, (C.bool)(ro))
}

func (this *QPlainTextEdit) SetTextInteractionFlags(flags int) {
	C.QPlainTextEdit_SetTextInteractionFlags(this.h, (C.int)(flags))
}

func (this *QPlainTextEdit) TextInteractionFlags() int {
	ret := C.QPlainTextEdit_TextInteractionFlags(this.h)
	return (int)(ret)
}

func (this *QPlainTextEdit) MergeCurrentCharFormat(modifier *QTextCharFormat) {
	C.QPlainTextEdit_MergeCurrentCharFormat(this.h, modifier.cPointer())
}

func (this *QPlainTextEdit) SetCurrentCharFormat(format *QTextCharFormat) {
	C.QPlainTextEdit_SetCurrentCharFormat(this.h, format.cPointer())
}

func (this *QPlainTextEdit) CurrentCharFormat() *QTextCharFormat {
	ret := C.QPlainTextEdit_CurrentCharFormat(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCharFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCharFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPlainTextEdit) TabChangesFocus() bool {
	ret := C.QPlainTextEdit_TabChangesFocus(this.h)
	return (bool)(ret)
}

func (this *QPlainTextEdit) SetTabChangesFocus(b bool) {
	C.QPlainTextEdit_SetTabChangesFocus(this.h, (C.bool)(b))
}

func (this *QPlainTextEdit) SetDocumentTitle(title string) {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	C.QPlainTextEdit_SetDocumentTitle(this.h, title_Cstring, C.ulong(len(title)))
}

func (this *QPlainTextEdit) DocumentTitle() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPlainTextEdit_DocumentTitle(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPlainTextEdit) IsUndoRedoEnabled() bool {
	ret := C.QPlainTextEdit_IsUndoRedoEnabled(this.h)
	return (bool)(ret)
}

func (this *QPlainTextEdit) SetUndoRedoEnabled(enable bool) {
	C.QPlainTextEdit_SetUndoRedoEnabled(this.h, (C.bool)(enable))
}

func (this *QPlainTextEdit) SetMaximumBlockCount(maximum int) {
	C.QPlainTextEdit_SetMaximumBlockCount(this.h, (C.int)(maximum))
}

func (this *QPlainTextEdit) MaximumBlockCount() int {
	ret := C.QPlainTextEdit_MaximumBlockCount(this.h)
	return (int)(ret)
}

func (this *QPlainTextEdit) LineWrapMode() uintptr {
	ret := C.QPlainTextEdit_LineWrapMode(this.h)
	return (uintptr)(ret)
}

func (this *QPlainTextEdit) SetLineWrapMode(mode uintptr) {
	C.QPlainTextEdit_SetLineWrapMode(this.h, (C.uintptr_t)(mode))
}

func (this *QPlainTextEdit) WordWrapMode() uintptr {
	ret := C.QPlainTextEdit_WordWrapMode(this.h)
	return (uintptr)(ret)
}

func (this *QPlainTextEdit) SetWordWrapMode(policy uintptr) {
	C.QPlainTextEdit_SetWordWrapMode(this.h, (C.uintptr_t)(policy))
}

func (this *QPlainTextEdit) SetBackgroundVisible(visible bool) {
	C.QPlainTextEdit_SetBackgroundVisible(this.h, (C.bool)(visible))
}

func (this *QPlainTextEdit) BackgroundVisible() bool {
	ret := C.QPlainTextEdit_BackgroundVisible(this.h)
	return (bool)(ret)
}

func (this *QPlainTextEdit) SetCenterOnScroll(enabled bool) {
	C.QPlainTextEdit_SetCenterOnScroll(this.h, (C.bool)(enabled))
}

func (this *QPlainTextEdit) CenterOnScroll() bool {
	ret := C.QPlainTextEdit_CenterOnScroll(this.h)
	return (bool)(ret)
}

func (this *QPlainTextEdit) Find(exp string) bool {
	exp_Cstring := C.CString(exp)
	defer C.free(unsafe.Pointer(exp_Cstring))
	ret := C.QPlainTextEdit_Find(this.h, exp_Cstring, C.ulong(len(exp)))
	return (bool)(ret)
}

func (this *QPlainTextEdit) FindWithExp(exp *QRegExp) bool {
	ret := C.QPlainTextEdit_FindWithExp(this.h, exp.cPointer())
	return (bool)(ret)
}

func (this *QPlainTextEdit) Find2(exp *QRegularExpression) bool {
	ret := C.QPlainTextEdit_Find2(this.h, exp.cPointer())
	return (bool)(ret)
}

func (this *QPlainTextEdit) ToPlainText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPlainTextEdit_ToPlainText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPlainTextEdit) EnsureCursorVisible() {
	C.QPlainTextEdit_EnsureCursorVisible(this.h)
}

func (this *QPlainTextEdit) LoadResource(typeVal int, name *QUrl) *QVariant {
	ret := C.QPlainTextEdit_LoadResource(this.h, (C.int)(typeVal), name.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPlainTextEdit) CreateStandardContextMenu() *QMenu {
	ret := C.QPlainTextEdit_CreateStandardContextMenu(this.h)
	return newQMenu_U(unsafe.Pointer(ret))
}

func (this *QPlainTextEdit) CreateStandardContextMenuWithPosition(position *QPoint) *QMenu {
	ret := C.QPlainTextEdit_CreateStandardContextMenuWithPosition(this.h, position.cPointer())
	return newQMenu_U(unsafe.Pointer(ret))
}

func (this *QPlainTextEdit) CursorForPosition(pos *QPoint) *QTextCursor {
	ret := C.QPlainTextEdit_CursorForPosition(this.h, pos.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextCursor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextCursor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPlainTextEdit) CursorRect(cursor *QTextCursor) *QRect {
	ret := C.QPlainTextEdit_CursorRect(this.h, cursor.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPlainTextEdit) CursorRect2() *QRect {
	ret := C.QPlainTextEdit_CursorRect2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPlainTextEdit) AnchorAt(pos *QPoint) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPlainTextEdit_AnchorAt(this.h, pos.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPlainTextEdit) OverwriteMode() bool {
	ret := C.QPlainTextEdit_OverwriteMode(this.h)
	return (bool)(ret)
}

func (this *QPlainTextEdit) SetOverwriteMode(overwrite bool) {
	C.QPlainTextEdit_SetOverwriteMode(this.h, (C.bool)(overwrite))
}

func (this *QPlainTextEdit) TabStopWidth() int {
	ret := C.QPlainTextEdit_TabStopWidth(this.h)
	return (int)(ret)
}

func (this *QPlainTextEdit) SetTabStopWidth(width int) {
	C.QPlainTextEdit_SetTabStopWidth(this.h, (C.int)(width))
}

func (this *QPlainTextEdit) TabStopDistance() float64 {
	ret := C.QPlainTextEdit_TabStopDistance(this.h)
	return (float64)(ret)
}

func (this *QPlainTextEdit) SetTabStopDistance(distance float64) {
	C.QPlainTextEdit_SetTabStopDistance(this.h, (C.double)(distance))
}

func (this *QPlainTextEdit) CursorWidth() int {
	ret := C.QPlainTextEdit_CursorWidth(this.h)
	return (int)(ret)
}

func (this *QPlainTextEdit) SetCursorWidth(width int) {
	C.QPlainTextEdit_SetCursorWidth(this.h, (C.int)(width))
}

func (this *QPlainTextEdit) SetExtraSelections(selections []QTextEdit__ExtraSelection) {
	// For the C ABI, malloc a C array of raw pointers
	selections_CArray := (*[0xffff]*C.QTextEdit__ExtraSelection)(C.malloc(C.ulong(8 * len(selections))))
	defer C.free(unsafe.Pointer(selections_CArray))
	for i := range selections {
		selections_CArray[i] = selections[i].cPointer()
	}
	C.QPlainTextEdit_SetExtraSelections(this.h, &selections_CArray[0], C.ulong(len(selections)))
}

func (this *QPlainTextEdit) ExtraSelections() []QTextEdit__ExtraSelection {
	var _out **C.QTextEdit__ExtraSelection = nil
	var _out_len C.size_t = 0
	C.QPlainTextEdit_ExtraSelections(this.h, &_out, &_out_len)
	ret := make([]QTextEdit__ExtraSelection, int(_out_len))
	_outCast := (*[0xffff]*C.QTextEdit__ExtraSelection)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQTextEdit__ExtraSelection(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPlainTextEdit) MoveCursor(operation uintptr) {
	C.QPlainTextEdit_MoveCursor(this.h, (C.uintptr_t)(operation))
}

func (this *QPlainTextEdit) CanPaste() bool {
	ret := C.QPlainTextEdit_CanPaste(this.h)
	return (bool)(ret)
}

func (this *QPlainTextEdit) Print(printer *QPagedPaintDevice) {
	C.QPlainTextEdit_Print(this.h, printer.cPointer())
}

func (this *QPlainTextEdit) BlockCount() int {
	ret := C.QPlainTextEdit_BlockCount(this.h)
	return (int)(ret)
}

func (this *QPlainTextEdit) InputMethodQuery(property uintptr) *QVariant {
	ret := C.QPlainTextEdit_InputMethodQuery(this.h, (C.uintptr_t)(property))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPlainTextEdit) InputMethodQuery2(query uintptr, argument QVariant) *QVariant {
	ret := C.QPlainTextEdit_InputMethodQuery2(this.h, (C.uintptr_t)(query), argument.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPlainTextEdit) SetPlainText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QPlainTextEdit_SetPlainText(this.h, text_Cstring, C.ulong(len(text)))
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
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QPlainTextEdit_InsertPlainText(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QPlainTextEdit) AppendPlainText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QPlainTextEdit_AppendPlainText(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QPlainTextEdit) AppendHtml(html string) {
	html_Cstring := C.CString(html)
	defer C.free(unsafe.Pointer(html_Cstring))
	C.QPlainTextEdit_AppendHtml(this.h, html_Cstring, C.ulong(len(html)))
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
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QPlainTextEdit_connect_TextChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QPlainTextEdit) UndoAvailable(b bool) {
	C.QPlainTextEdit_UndoAvailable(this.h, (C.bool)(b))
}

func (this *QPlainTextEdit) OnUndoAvailable(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QPlainTextEdit_connect_UndoAvailable(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QPlainTextEdit) RedoAvailable(b bool) {
	C.QPlainTextEdit_RedoAvailable(this.h, (C.bool)(b))
}

func (this *QPlainTextEdit) OnRedoAvailable(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QPlainTextEdit_connect_RedoAvailable(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QPlainTextEdit) CopyAvailable(b bool) {
	C.QPlainTextEdit_CopyAvailable(this.h, (C.bool)(b))
}

func (this *QPlainTextEdit) OnCopyAvailable(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QPlainTextEdit_connect_CopyAvailable(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QPlainTextEdit) SelectionChanged() {
	C.QPlainTextEdit_SelectionChanged(this.h)
}

func (this *QPlainTextEdit) OnSelectionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QPlainTextEdit_connect_SelectionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QPlainTextEdit) CursorPositionChanged() {
	C.QPlainTextEdit_CursorPositionChanged(this.h)
}

func (this *QPlainTextEdit) OnCursorPositionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QPlainTextEdit_connect_CursorPositionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QPlainTextEdit) UpdateRequest(rect *QRect, dy int) {
	C.QPlainTextEdit_UpdateRequest(this.h, rect.cPointer(), (C.int)(dy))
}

func (this *QPlainTextEdit) OnUpdateRequest(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QPlainTextEdit_connect_UpdateRequest(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QPlainTextEdit) BlockCountChanged(newBlockCount int) {
	C.QPlainTextEdit_BlockCountChanged(this.h, (C.int)(newBlockCount))
}

func (this *QPlainTextEdit) OnBlockCountChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QPlainTextEdit_connect_BlockCountChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QPlainTextEdit) ModificationChanged(param1 bool) {
	C.QPlainTextEdit_ModificationChanged(this.h, (C.bool)(param1))
}

func (this *QPlainTextEdit) OnModificationChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QPlainTextEdit_connect_ModificationChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QPlainTextEdit_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPlainTextEdit_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPlainTextEdit_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPlainTextEdit_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPlainTextEdit_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPlainTextEdit_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPlainTextEdit_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPlainTextEdit_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPlainTextEdit) Find22(exp string, options int) bool {
	exp_Cstring := C.CString(exp)
	defer C.free(unsafe.Pointer(exp_Cstring))
	ret := C.QPlainTextEdit_Find22(this.h, exp_Cstring, C.ulong(len(exp)), (C.int)(options))
	return (bool)(ret)
}

func (this *QPlainTextEdit) Find23(exp *QRegExp, options int) bool {
	ret := C.QPlainTextEdit_Find23(this.h, exp.cPointer(), (C.int)(options))
	return (bool)(ret)
}

func (this *QPlainTextEdit) Find24(exp *QRegularExpression, options int) bool {
	ret := C.QPlainTextEdit_Find24(this.h, exp.cPointer(), (C.int)(options))
	return (bool)(ret)
}

func (this *QPlainTextEdit) MoveCursor2(operation uintptr, mode uintptr) {
	C.QPlainTextEdit_MoveCursor2(this.h, (C.uintptr_t)(operation), (C.uintptr_t)(mode))
}

func (this *QPlainTextEdit) ZoomIn1(rangeVal int) {
	C.QPlainTextEdit_ZoomIn1(this.h, (C.int)(rangeVal))
}

func (this *QPlainTextEdit) ZoomOut1(rangeVal int) {
	C.QPlainTextEdit_ZoomOut1(this.h, (C.int)(rangeVal))
}

func (this *QPlainTextEdit) Delete() {
	C.QPlainTextEdit_Delete(this.h)
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

func newQPlainTextDocumentLayout(h *C.QPlainTextDocumentLayout) *QPlainTextDocumentLayout {
	if h == nil {
		return nil
	}
	return &QPlainTextDocumentLayout{h: h, QAbstractTextDocumentLayout: newQAbstractTextDocumentLayout_U(unsafe.Pointer(h))}
}

func newQPlainTextDocumentLayout_U(h unsafe.Pointer) *QPlainTextDocumentLayout {
	return newQPlainTextDocumentLayout((*C.QPlainTextDocumentLayout)(h))
}

// NewQPlainTextDocumentLayout constructs a new QPlainTextDocumentLayout object.
func NewQPlainTextDocumentLayout(document *QTextDocument) *QPlainTextDocumentLayout {
	ret := C.QPlainTextDocumentLayout_new(document.cPointer())
	return newQPlainTextDocumentLayout(ret)
}

func (this *QPlainTextDocumentLayout) MetaObject() *QMetaObject {
	ret := C.QPlainTextDocumentLayout_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QPlainTextDocumentLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPlainTextDocumentLayout_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPlainTextDocumentLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPlainTextDocumentLayout_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPlainTextDocumentLayout) Draw(param1 *QPainter, param2 *QAbstractTextDocumentLayout__PaintContext) {
	C.QPlainTextDocumentLayout_Draw(this.h, param1.cPointer(), param2.cPointer())
}

func (this *QPlainTextDocumentLayout) HitTest(param1 *QPointF, param2 uintptr) int {
	ret := C.QPlainTextDocumentLayout_HitTest(this.h, param1.cPointer(), (C.uintptr_t)(param2))
	return (int)(ret)
}

func (this *QPlainTextDocumentLayout) PageCount() int {
	ret := C.QPlainTextDocumentLayout_PageCount(this.h)
	return (int)(ret)
}

func (this *QPlainTextDocumentLayout) DocumentSize() *QSizeF {
	ret := C.QPlainTextDocumentLayout_DocumentSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPlainTextDocumentLayout) FrameBoundingRect(param1 *QTextFrame) *QRectF {
	ret := C.QPlainTextDocumentLayout_FrameBoundingRect(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPlainTextDocumentLayout) BlockBoundingRect(block *QTextBlock) *QRectF {
	ret := C.QPlainTextDocumentLayout_BlockBoundingRect(this.h, block.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPlainTextDocumentLayout) EnsureBlockLayout(block *QTextBlock) {
	C.QPlainTextDocumentLayout_EnsureBlockLayout(this.h, block.cPointer())
}

func (this *QPlainTextDocumentLayout) SetCursorWidth(width int) {
	C.QPlainTextDocumentLayout_SetCursorWidth(this.h, (C.int)(width))
}

func (this *QPlainTextDocumentLayout) CursorWidth() int {
	ret := C.QPlainTextDocumentLayout_CursorWidth(this.h)
	return (int)(ret)
}

func (this *QPlainTextDocumentLayout) RequestUpdate() {
	C.QPlainTextDocumentLayout_RequestUpdate(this.h)
}

func QPlainTextDocumentLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPlainTextDocumentLayout_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPlainTextDocumentLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPlainTextDocumentLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPlainTextDocumentLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPlainTextDocumentLayout_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPlainTextDocumentLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPlainTextDocumentLayout_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPlainTextDocumentLayout) Delete() {
	C.QPlainTextDocumentLayout_Delete(this.h)
}
