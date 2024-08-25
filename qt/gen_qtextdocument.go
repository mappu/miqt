package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qtextdocument.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractUndoItem struct {
	h *C.QAbstractUndoItem
}

func (this *QAbstractUndoItem) cPointer() *C.QAbstractUndoItem {
	if this == nil {
		return nil
	}
	return this.h
}

func newQAbstractUndoItem(h *C.QAbstractUndoItem) *QAbstractUndoItem {
	return &QAbstractUndoItem{h: h}
}

func newQAbstractUndoItem_U(h unsafe.Pointer) *QAbstractUndoItem {
	return newQAbstractUndoItem((*C.QAbstractUndoItem)(h))
}

func (this *QAbstractUndoItem) Undo() {
	C.QAbstractUndoItem_Undo(this.h)
}

func (this *QAbstractUndoItem) Redo() {
	C.QAbstractUndoItem_Redo(this.h)
}

func (this *QAbstractUndoItem) Delete() {
	C.QAbstractUndoItem_Delete(this.h)
}

type QTextDocument struct {
	h *C.QTextDocument
	*QObject
}

func (this *QTextDocument) cPointer() *C.QTextDocument {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextDocument(h *C.QTextDocument) *QTextDocument {
	return &QTextDocument{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQTextDocument_U(h unsafe.Pointer) *QTextDocument {
	return newQTextDocument((*C.QTextDocument)(h))
}

// NewQTextDocument constructs a new QTextDocument object.
func NewQTextDocument() *QTextDocument {
	ret := C.QTextDocument_new()
	return newQTextDocument(ret)
}

// NewQTextDocument2 constructs a new QTextDocument object.
func NewQTextDocument2(text string) *QTextDocument {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QTextDocument_new2(text_Cstring, C.ulong(len(text)))
	return newQTextDocument(ret)
}

// NewQTextDocument3 constructs a new QTextDocument object.
func NewQTextDocument3(parent *QObject) *QTextDocument {
	ret := C.QTextDocument_new3(parent.cPointer())
	return newQTextDocument(ret)
}

// NewQTextDocument4 constructs a new QTextDocument object.
func NewQTextDocument4(text string, parent *QObject) *QTextDocument {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QTextDocument_new4(text_Cstring, C.ulong(len(text)), parent.cPointer())
	return newQTextDocument(ret)
}

func (this *QTextDocument) MetaObject() *QMetaObject {
	ret := C.QTextDocument_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTextDocument_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextDocument_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextDocument_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextDocument_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextDocument) Clone() *QTextDocument {
	ret := C.QTextDocument_Clone(this.h)
	return newQTextDocument_U(unsafe.Pointer(ret))
}

func (this *QTextDocument) IsEmpty() bool {
	ret := C.QTextDocument_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QTextDocument) Clear() {
	C.QTextDocument_Clear(this.h)
}

func (this *QTextDocument) SetUndoRedoEnabled(enable bool) {
	C.QTextDocument_SetUndoRedoEnabled(this.h, (C.bool)(enable))
}

func (this *QTextDocument) IsUndoRedoEnabled() bool {
	ret := C.QTextDocument_IsUndoRedoEnabled(this.h)
	return (bool)(ret)
}

func (this *QTextDocument) IsUndoAvailable() bool {
	ret := C.QTextDocument_IsUndoAvailable(this.h)
	return (bool)(ret)
}

func (this *QTextDocument) IsRedoAvailable() bool {
	ret := C.QTextDocument_IsRedoAvailable(this.h)
	return (bool)(ret)
}

func (this *QTextDocument) AvailableUndoSteps() int {
	ret := C.QTextDocument_AvailableUndoSteps(this.h)
	return (int)(ret)
}

func (this *QTextDocument) AvailableRedoSteps() int {
	ret := C.QTextDocument_AvailableRedoSteps(this.h)
	return (int)(ret)
}

func (this *QTextDocument) Revision() int {
	ret := C.QTextDocument_Revision(this.h)
	return (int)(ret)
}

func (this *QTextDocument) SetDocumentLayout(layout *QAbstractTextDocumentLayout) {
	C.QTextDocument_SetDocumentLayout(this.h, layout.cPointer())
}

func (this *QTextDocument) DocumentLayout() *QAbstractTextDocumentLayout {
	ret := C.QTextDocument_DocumentLayout(this.h)
	return newQAbstractTextDocumentLayout_U(unsafe.Pointer(ret))
}

func (this *QTextDocument) ToHtml() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextDocument_ToHtml(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextDocument) SetHtml(html string) {
	html_Cstring := C.CString(html)
	defer C.free(unsafe.Pointer(html_Cstring))
	C.QTextDocument_SetHtml(this.h, html_Cstring, C.ulong(len(html)))
}

func (this *QTextDocument) ToRawText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextDocument_ToRawText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextDocument) ToPlainText() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextDocument_ToPlainText(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextDocument) SetPlainText(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QTextDocument_SetPlainText(this.h, text_Cstring, C.ulong(len(text)))
}

func (this *QTextDocument) CharacterAt(pos int) *QChar {
	ret := C.QTextDocument_CharacterAt(this.h, (C.int)(pos))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQChar(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QChar) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextDocument) FrameAt(pos int) *QTextFrame {
	ret := C.QTextDocument_FrameAt(this.h, (C.int)(pos))
	return newQTextFrame_U(unsafe.Pointer(ret))
}

func (this *QTextDocument) RootFrame() *QTextFrame {
	ret := C.QTextDocument_RootFrame(this.h)
	return newQTextFrame_U(unsafe.Pointer(ret))
}

func (this *QTextDocument) Object(objectIndex int) *QTextObject {
	ret := C.QTextDocument_Object(this.h, (C.int)(objectIndex))
	return newQTextObject_U(unsafe.Pointer(ret))
}

func (this *QTextDocument) ObjectForFormat(param1 *QTextFormat) *QTextObject {
	ret := C.QTextDocument_ObjectForFormat(this.h, param1.cPointer())
	return newQTextObject_U(unsafe.Pointer(ret))
}

func (this *QTextDocument) FindBlock(pos int) *QTextBlock {
	ret := C.QTextDocument_FindBlock(this.h, (C.int)(pos))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextBlock(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextBlock) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextDocument) FindBlockByNumber(blockNumber int) *QTextBlock {
	ret := C.QTextDocument_FindBlockByNumber(this.h, (C.int)(blockNumber))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextBlock(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextBlock) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextDocument) FindBlockByLineNumber(blockNumber int) *QTextBlock {
	ret := C.QTextDocument_FindBlockByLineNumber(this.h, (C.int)(blockNumber))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextBlock(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextBlock) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextDocument) Begin() *QTextBlock {
	ret := C.QTextDocument_Begin(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextBlock(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextBlock) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextDocument) End() *QTextBlock {
	ret := C.QTextDocument_End(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextBlock(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextBlock) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextDocument) FirstBlock() *QTextBlock {
	ret := C.QTextDocument_FirstBlock(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextBlock(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextBlock) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextDocument) LastBlock() *QTextBlock {
	ret := C.QTextDocument_LastBlock(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextBlock(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextBlock) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextDocument) SetPageSize(size *QSizeF) {
	C.QTextDocument_SetPageSize(this.h, size.cPointer())
}

func (this *QTextDocument) PageSize() *QSizeF {
	ret := C.QTextDocument_PageSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextDocument) SetDefaultFont(font *QFont) {
	C.QTextDocument_SetDefaultFont(this.h, font.cPointer())
}

func (this *QTextDocument) DefaultFont() *QFont {
	ret := C.QTextDocument_DefaultFont(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFont(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFont) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextDocument) PageCount() int {
	ret := C.QTextDocument_PageCount(this.h)
	return (int)(ret)
}

func (this *QTextDocument) IsModified() bool {
	ret := C.QTextDocument_IsModified(this.h)
	return (bool)(ret)
}

func (this *QTextDocument) Print(printer *QPagedPaintDevice) {
	C.QTextDocument_Print(this.h, printer.cPointer())
}

func (this *QTextDocument) Resource(typeVal int, name *QUrl) *QVariant {
	ret := C.QTextDocument_Resource(this.h, (C.int)(typeVal), name.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextDocument) AddResource(typeVal int, name *QUrl, resource *QVariant) {
	C.QTextDocument_AddResource(this.h, (C.int)(typeVal), name.cPointer(), resource.cPointer())
}

func (this *QTextDocument) AllFormats() []QTextFormat {
	var _out **C.QTextFormat = nil
	var _out_len C.size_t = 0
	C.QTextDocument_AllFormats(this.h, &_out, &_out_len)
	ret := make([]QTextFormat, int(_out_len))
	_outCast := (*[0xffff]*C.QTextFormat)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQTextFormat(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextDocument) MarkContentsDirty(from int, length int) {
	C.QTextDocument_MarkContentsDirty(this.h, (C.int)(from), (C.int)(length))
}

func (this *QTextDocument) SetUseDesignMetrics(b bool) {
	C.QTextDocument_SetUseDesignMetrics(this.h, (C.bool)(b))
}

func (this *QTextDocument) UseDesignMetrics() bool {
	ret := C.QTextDocument_UseDesignMetrics(this.h)
	return (bool)(ret)
}

func (this *QTextDocument) DrawContents(painter *QPainter) {
	C.QTextDocument_DrawContents(this.h, painter.cPointer())
}

func (this *QTextDocument) SetTextWidth(width float64) {
	C.QTextDocument_SetTextWidth(this.h, (C.double)(width))
}

func (this *QTextDocument) TextWidth() float64 {
	ret := C.QTextDocument_TextWidth(this.h)
	return (float64)(ret)
}

func (this *QTextDocument) IdealWidth() float64 {
	ret := C.QTextDocument_IdealWidth(this.h)
	return (float64)(ret)
}

func (this *QTextDocument) IndentWidth() float64 {
	ret := C.QTextDocument_IndentWidth(this.h)
	return (float64)(ret)
}

func (this *QTextDocument) SetIndentWidth(width float64) {
	C.QTextDocument_SetIndentWidth(this.h, (C.double)(width))
}

func (this *QTextDocument) DocumentMargin() float64 {
	ret := C.QTextDocument_DocumentMargin(this.h)
	return (float64)(ret)
}

func (this *QTextDocument) SetDocumentMargin(margin float64) {
	C.QTextDocument_SetDocumentMargin(this.h, (C.double)(margin))
}

func (this *QTextDocument) AdjustSize() {
	C.QTextDocument_AdjustSize(this.h)
}

func (this *QTextDocument) Size() *QSizeF {
	ret := C.QTextDocument_Size(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextDocument) BlockCount() int {
	ret := C.QTextDocument_BlockCount(this.h)
	return (int)(ret)
}

func (this *QTextDocument) LineCount() int {
	ret := C.QTextDocument_LineCount(this.h)
	return (int)(ret)
}

func (this *QTextDocument) CharacterCount() int {
	ret := C.QTextDocument_CharacterCount(this.h)
	return (int)(ret)
}

func (this *QTextDocument) SetDefaultStyleSheet(sheet string) {
	sheet_Cstring := C.CString(sheet)
	defer C.free(unsafe.Pointer(sheet_Cstring))
	C.QTextDocument_SetDefaultStyleSheet(this.h, sheet_Cstring, C.ulong(len(sheet)))
}

func (this *QTextDocument) DefaultStyleSheet() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextDocument_DefaultStyleSheet(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextDocument) Undo(cursor *QTextCursor) {
	C.QTextDocument_Undo(this.h, cursor.cPointer())
}

func (this *QTextDocument) Redo(cursor *QTextCursor) {
	C.QTextDocument_Redo(this.h, cursor.cPointer())
}

func (this *QTextDocument) MaximumBlockCount() int {
	ret := C.QTextDocument_MaximumBlockCount(this.h)
	return (int)(ret)
}

func (this *QTextDocument) SetMaximumBlockCount(maximum int) {
	C.QTextDocument_SetMaximumBlockCount(this.h, (C.int)(maximum))
}

func (this *QTextDocument) DefaultTextOption() *QTextOption {
	ret := C.QTextDocument_DefaultTextOption(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTextOption(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTextOption) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextDocument) SetDefaultTextOption(option *QTextOption) {
	C.QTextDocument_SetDefaultTextOption(this.h, option.cPointer())
}

func (this *QTextDocument) BaseUrl() *QUrl {
	ret := C.QTextDocument_BaseUrl(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTextDocument) SetBaseUrl(url *QUrl) {
	C.QTextDocument_SetBaseUrl(this.h, url.cPointer())
}

func (this *QTextDocument) ContentsChange(from int, charsRemoved int, charsAdded int) {
	C.QTextDocument_ContentsChange(this.h, (C.int)(from), (C.int)(charsRemoved), (C.int)(charsAdded))
}

func (this *QTextDocument) OnContentsChange(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextDocument_connect_ContentsChange(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextDocument) ContentsChanged() {
	C.QTextDocument_ContentsChanged(this.h)
}

func (this *QTextDocument) OnContentsChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextDocument_connect_ContentsChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextDocument) UndoAvailable(param1 bool) {
	C.QTextDocument_UndoAvailable(this.h, (C.bool)(param1))
}

func (this *QTextDocument) OnUndoAvailable(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextDocument_connect_UndoAvailable(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextDocument) RedoAvailable(param1 bool) {
	C.QTextDocument_RedoAvailable(this.h, (C.bool)(param1))
}

func (this *QTextDocument) OnRedoAvailable(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextDocument_connect_RedoAvailable(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextDocument) UndoCommandAdded() {
	C.QTextDocument_UndoCommandAdded(this.h)
}

func (this *QTextDocument) OnUndoCommandAdded(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextDocument_connect_UndoCommandAdded(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextDocument) ModificationChanged(m bool) {
	C.QTextDocument_ModificationChanged(this.h, (C.bool)(m))
}

func (this *QTextDocument) OnModificationChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextDocument_connect_ModificationChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextDocument) CursorPositionChanged(cursor *QTextCursor) {
	C.QTextDocument_CursorPositionChanged(this.h, cursor.cPointer())
}

func (this *QTextDocument) OnCursorPositionChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextDocument_connect_CursorPositionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextDocument) BlockCountChanged(newBlockCount int) {
	C.QTextDocument_BlockCountChanged(this.h, (C.int)(newBlockCount))
}

func (this *QTextDocument) OnBlockCountChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextDocument_connect_BlockCountChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextDocument) BaseUrlChanged(url *QUrl) {
	C.QTextDocument_BaseUrlChanged(this.h, url.cPointer())
}

func (this *QTextDocument) OnBaseUrlChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextDocument_connect_BaseUrlChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextDocument) DocumentLayoutChanged() {
	C.QTextDocument_DocumentLayoutChanged(this.h)
}

func (this *QTextDocument) OnDocumentLayoutChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QTextDocument_connect_DocumentLayoutChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QTextDocument) Undo2() {
	C.QTextDocument_Undo2(this.h)
}

func (this *QTextDocument) Redo2() {
	C.QTextDocument_Redo2(this.h)
}

func (this *QTextDocument) SetModified() {
	C.QTextDocument_SetModified(this.h)
}

func QTextDocument_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextDocument_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextDocument_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextDocument_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextDocument_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextDocument_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTextDocument_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextDocument_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextDocument) Clone1(parent *QObject) *QTextDocument {
	ret := C.QTextDocument_Clone1(this.h, parent.cPointer())
	return newQTextDocument_U(unsafe.Pointer(ret))
}

func (this *QTextDocument) ToHtml1(encoding *QByteArray) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTextDocument_ToHtml1(this.h, encoding.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextDocument) DrawContents2(painter *QPainter, rect *QRectF) {
	C.QTextDocument_DrawContents2(this.h, painter.cPointer(), rect.cPointer())
}

func (this *QTextDocument) SetModified1(m bool) {
	C.QTextDocument_SetModified1(this.h, (C.bool)(m))
}

func (this *QTextDocument) Delete() {
	C.QTextDocument_Delete(this.h)
}
