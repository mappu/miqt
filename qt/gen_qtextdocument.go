package qt

/*

#include "gen_qtextdocument.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTextDocument__MetaInformation int

const (
	QTextDocument__DocumentTitle QTextDocument__MetaInformation = 0
	QTextDocument__DocumentUrl   QTextDocument__MetaInformation = 1
)

type QTextDocument__MarkdownFeature int

const (
	QTextDocument__MarkdownNoHTML            QTextDocument__MarkdownFeature = 96
	QTextDocument__MarkdownDialectCommonMark QTextDocument__MarkdownFeature = 0
	QTextDocument__MarkdownDialectGitHub     QTextDocument__MarkdownFeature = 3852
)

type QTextDocument__FindFlag int

const (
	QTextDocument__FindBackward        QTextDocument__FindFlag = 1
	QTextDocument__FindCaseSensitively QTextDocument__FindFlag = 2
	QTextDocument__FindWholeWords      QTextDocument__FindFlag = 4
)

type QTextDocument__ResourceType int

const (
	QTextDocument__UnknownResource    QTextDocument__ResourceType = 0
	QTextDocument__HtmlResource       QTextDocument__ResourceType = 1
	QTextDocument__ImageResource      QTextDocument__ResourceType = 2
	QTextDocument__StyleSheetResource QTextDocument__ResourceType = 3
	QTextDocument__MarkdownResource   QTextDocument__ResourceType = 4
	QTextDocument__UserResource       QTextDocument__ResourceType = 100
)

type QTextDocument__Stacks int

const (
	QTextDocument__UndoStack         QTextDocument__Stacks = 1
	QTextDocument__RedoStack         QTextDocument__Stacks = 2
	QTextDocument__UndoAndRedoStacks QTextDocument__Stacks = 3
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

func (this *QAbstractUndoItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractUndoItem constructs the type using only CGO pointers.
func newQAbstractUndoItem(h *C.QAbstractUndoItem) *QAbstractUndoItem {
	if h == nil {
		return nil
	}

	return &QAbstractUndoItem{h: h}
}

// UnsafeNewQAbstractUndoItem constructs the type using only unsafe pointers.
func UnsafeNewQAbstractUndoItem(h unsafe.Pointer) *QAbstractUndoItem {
	return newQAbstractUndoItem((*C.QAbstractUndoItem)(h))
}

func (this *QAbstractUndoItem) Undo() {
	C.QAbstractUndoItem_undo(this.h)
}

func (this *QAbstractUndoItem) Redo() {
	C.QAbstractUndoItem_redo(this.h)
}

func (this *QAbstractUndoItem) OperatorAssign(param1 *QAbstractUndoItem) {
	C.QAbstractUndoItem_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QAbstractUndoItem) Delete() {
	C.QAbstractUndoItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractUndoItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractUndoItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QTextDocument) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextDocument constructs the type using only CGO pointers.
func newQTextDocument(h *C.QTextDocument) *QTextDocument {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QTextDocument_virtbase(h, &outptr_QObject)

	return &QTextDocument{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQTextDocument constructs the type using only unsafe pointers.
func UnsafeNewQTextDocument(h unsafe.Pointer) *QTextDocument {
	return newQTextDocument((*C.QTextDocument)(h))
}

// NewQTextDocument constructs a new QTextDocument object.
func NewQTextDocument() *QTextDocument {

	return newQTextDocument(C.QTextDocument_new())
}

// NewQTextDocument2 constructs a new QTextDocument object.
func NewQTextDocument2(text string) *QTextDocument {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQTextDocument(C.QTextDocument_new2(text_ms))
}

// NewQTextDocument3 constructs a new QTextDocument object.
func NewQTextDocument3(parent *QObject) *QTextDocument {

	return newQTextDocument(C.QTextDocument_new3(parent.cPointer()))
}

// NewQTextDocument4 constructs a new QTextDocument object.
func NewQTextDocument4(text string, parent *QObject) *QTextDocument {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQTextDocument(C.QTextDocument_new4(text_ms, parent.cPointer()))
}

func (this *QTextDocument) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTextDocument_metaObject(this.h))
}

func (this *QTextDocument) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTextDocument_metacast(this.h, param1_Cstring))
}

func QTextDocument_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTextDocument_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextDocument_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTextDocument_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextDocument) Clone() *QTextDocument {
	return newQTextDocument(C.QTextDocument_clone(this.h))
}

func (this *QTextDocument) IsEmpty() bool {
	return (bool)(C.QTextDocument_isEmpty(this.h))
}

func (this *QTextDocument) Clear() {
	C.QTextDocument_clear(this.h)
}

func (this *QTextDocument) SetUndoRedoEnabled(enable bool) {
	C.QTextDocument_setUndoRedoEnabled(this.h, (C.bool)(enable))
}

func (this *QTextDocument) IsUndoRedoEnabled() bool {
	return (bool)(C.QTextDocument_isUndoRedoEnabled(this.h))
}

func (this *QTextDocument) IsUndoAvailable() bool {
	return (bool)(C.QTextDocument_isUndoAvailable(this.h))
}

func (this *QTextDocument) IsRedoAvailable() bool {
	return (bool)(C.QTextDocument_isRedoAvailable(this.h))
}

func (this *QTextDocument) AvailableUndoSteps() int {
	return (int)(C.QTextDocument_availableUndoSteps(this.h))
}

func (this *QTextDocument) AvailableRedoSteps() int {
	return (int)(C.QTextDocument_availableRedoSteps(this.h))
}

func (this *QTextDocument) Revision() int {
	return (int)(C.QTextDocument_revision(this.h))
}

func (this *QTextDocument) SetDocumentLayout(layout *QAbstractTextDocumentLayout) {
	C.QTextDocument_setDocumentLayout(this.h, layout.cPointer())
}

func (this *QTextDocument) DocumentLayout() *QAbstractTextDocumentLayout {
	return newQAbstractTextDocumentLayout(C.QTextDocument_documentLayout(this.h))
}

func (this *QTextDocument) SetMetaInformation(info QTextDocument__MetaInformation, param2 string) {
	param2_ms := C.struct_miqt_string{}
	param2_ms.data = C.CString(param2)
	param2_ms.len = C.size_t(len(param2))
	defer C.free(unsafe.Pointer(param2_ms.data))
	C.QTextDocument_setMetaInformation(this.h, (C.int)(info), param2_ms)
}

func (this *QTextDocument) MetaInformation(info QTextDocument__MetaInformation) string {
	var _ms C.struct_miqt_string = C.QTextDocument_metaInformation(this.h, (C.int)(info))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextDocument) ToHtml() string {
	var _ms C.struct_miqt_string = C.QTextDocument_toHtml(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextDocument) SetHtml(html string) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QTextDocument_setHtml(this.h, html_ms)
}

func (this *QTextDocument) ToMarkdown() string {
	var _ms C.struct_miqt_string = C.QTextDocument_toMarkdown(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextDocument) SetMarkdown(markdown string) {
	markdown_ms := C.struct_miqt_string{}
	markdown_ms.data = C.CString(markdown)
	markdown_ms.len = C.size_t(len(markdown))
	defer C.free(unsafe.Pointer(markdown_ms.data))
	C.QTextDocument_setMarkdown(this.h, markdown_ms)
}

func (this *QTextDocument) ToRawText() string {
	var _ms C.struct_miqt_string = C.QTextDocument_toRawText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextDocument) ToPlainText() string {
	var _ms C.struct_miqt_string = C.QTextDocument_toPlainText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextDocument) SetPlainText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTextDocument_setPlainText(this.h, text_ms)
}

func (this *QTextDocument) CharacterAt(pos int) *QChar {
	_goptr := newQChar(C.QTextDocument_characterAt(this.h, (C.int)(pos)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find(subString string) *QTextCursor {
	subString_ms := C.struct_miqt_string{}
	subString_ms.data = C.CString(subString)
	subString_ms.len = C.size_t(len(subString))
	defer C.free(unsafe.Pointer(subString_ms.data))
	_goptr := newQTextCursor(C.QTextDocument_find(this.h, subString_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find2(subString string, cursor *QTextCursor) *QTextCursor {
	subString_ms := C.struct_miqt_string{}
	subString_ms.data = C.CString(subString)
	subString_ms.len = C.size_t(len(subString))
	defer C.free(unsafe.Pointer(subString_ms.data))
	_goptr := newQTextCursor(C.QTextDocument_find2(this.h, subString_ms, cursor.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) FindWithExpr(expr *QRegExp) *QTextCursor {
	_goptr := newQTextCursor(C.QTextDocument_findWithExpr(this.h, expr.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find3(expr *QRegExp, cursor *QTextCursor) *QTextCursor {
	_goptr := newQTextCursor(C.QTextDocument_find3(this.h, expr.cPointer(), cursor.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find4(expr *QRegularExpression) *QTextCursor {
	_goptr := newQTextCursor(C.QTextDocument_find4(this.h, expr.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find5(expr *QRegularExpression, cursor *QTextCursor) *QTextCursor {
	_goptr := newQTextCursor(C.QTextDocument_find5(this.h, expr.cPointer(), cursor.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) FrameAt(pos int) *QTextFrame {
	return newQTextFrame(C.QTextDocument_frameAt(this.h, (C.int)(pos)))
}

func (this *QTextDocument) RootFrame() *QTextFrame {
	return newQTextFrame(C.QTextDocument_rootFrame(this.h))
}

func (this *QTextDocument) Object(objectIndex int) *QTextObject {
	return newQTextObject(C.QTextDocument_object(this.h, (C.int)(objectIndex)))
}

func (this *QTextDocument) ObjectForFormat(param1 *QTextFormat) *QTextObject {
	return newQTextObject(C.QTextDocument_objectForFormat(this.h, param1.cPointer()))
}

func (this *QTextDocument) FindBlock(pos int) *QTextBlock {
	_goptr := newQTextBlock(C.QTextDocument_findBlock(this.h, (C.int)(pos)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) FindBlockByNumber(blockNumber int) *QTextBlock {
	_goptr := newQTextBlock(C.QTextDocument_findBlockByNumber(this.h, (C.int)(blockNumber)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) FindBlockByLineNumber(blockNumber int) *QTextBlock {
	_goptr := newQTextBlock(C.QTextDocument_findBlockByLineNumber(this.h, (C.int)(blockNumber)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Begin() *QTextBlock {
	_goptr := newQTextBlock(C.QTextDocument_begin(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) End() *QTextBlock {
	_goptr := newQTextBlock(C.QTextDocument_end(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) FirstBlock() *QTextBlock {
	_goptr := newQTextBlock(C.QTextDocument_firstBlock(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) LastBlock() *QTextBlock {
	_goptr := newQTextBlock(C.QTextDocument_lastBlock(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) SetPageSize(size *QSizeF) {
	C.QTextDocument_setPageSize(this.h, size.cPointer())
}

func (this *QTextDocument) PageSize() *QSizeF {
	_goptr := newQSizeF(C.QTextDocument_pageSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) SetDefaultFont(font *QFont) {
	C.QTextDocument_setDefaultFont(this.h, font.cPointer())
}

func (this *QTextDocument) DefaultFont() *QFont {
	_goptr := newQFont(C.QTextDocument_defaultFont(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) PageCount() int {
	return (int)(C.QTextDocument_pageCount(this.h))
}

func (this *QTextDocument) IsModified() bool {
	return (bool)(C.QTextDocument_isModified(this.h))
}

func (this *QTextDocument) Print(printer *QPagedPaintDevice) {
	C.QTextDocument_print(this.h, printer.cPointer())
}

func (this *QTextDocument) Resource(typeVal int, name *QUrl) *QVariant {
	_goptr := newQVariant(C.QTextDocument_resource(this.h, (C.int)(typeVal), name.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) AddResource(typeVal int, name *QUrl, resource *QVariant) {
	C.QTextDocument_addResource(this.h, (C.int)(typeVal), name.cPointer(), resource.cPointer())
}

func (this *QTextDocument) AllFormats() []QTextFormat {
	var _ma C.struct_miqt_array = C.QTextDocument_allFormats(this.h)
	_ret := make([]QTextFormat, int(_ma.len))
	_outCast := (*[0xffff]*C.QTextFormat)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := newQTextFormat(_outCast[i])
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QTextDocument) MarkContentsDirty(from int, length int) {
	C.QTextDocument_markContentsDirty(this.h, (C.int)(from), (C.int)(length))
}

func (this *QTextDocument) SetUseDesignMetrics(b bool) {
	C.QTextDocument_setUseDesignMetrics(this.h, (C.bool)(b))
}

func (this *QTextDocument) UseDesignMetrics() bool {
	return (bool)(C.QTextDocument_useDesignMetrics(this.h))
}

func (this *QTextDocument) DrawContents(painter *QPainter) {
	C.QTextDocument_drawContents(this.h, painter.cPointer())
}

func (this *QTextDocument) SetTextWidth(width float64) {
	C.QTextDocument_setTextWidth(this.h, (C.double)(width))
}

func (this *QTextDocument) TextWidth() float64 {
	return (float64)(C.QTextDocument_textWidth(this.h))
}

func (this *QTextDocument) IdealWidth() float64 {
	return (float64)(C.QTextDocument_idealWidth(this.h))
}

func (this *QTextDocument) IndentWidth() float64 {
	return (float64)(C.QTextDocument_indentWidth(this.h))
}

func (this *QTextDocument) SetIndentWidth(width float64) {
	C.QTextDocument_setIndentWidth(this.h, (C.double)(width))
}

func (this *QTextDocument) DocumentMargin() float64 {
	return (float64)(C.QTextDocument_documentMargin(this.h))
}

func (this *QTextDocument) SetDocumentMargin(margin float64) {
	C.QTextDocument_setDocumentMargin(this.h, (C.double)(margin))
}

func (this *QTextDocument) AdjustSize() {
	C.QTextDocument_adjustSize(this.h)
}

func (this *QTextDocument) Size() *QSizeF {
	_goptr := newQSizeF(C.QTextDocument_size(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) BlockCount() int {
	return (int)(C.QTextDocument_blockCount(this.h))
}

func (this *QTextDocument) LineCount() int {
	return (int)(C.QTextDocument_lineCount(this.h))
}

func (this *QTextDocument) CharacterCount() int {
	return (int)(C.QTextDocument_characterCount(this.h))
}

func (this *QTextDocument) SetDefaultStyleSheet(sheet string) {
	sheet_ms := C.struct_miqt_string{}
	sheet_ms.data = C.CString(sheet)
	sheet_ms.len = C.size_t(len(sheet))
	defer C.free(unsafe.Pointer(sheet_ms.data))
	C.QTextDocument_setDefaultStyleSheet(this.h, sheet_ms)
}

func (this *QTextDocument) DefaultStyleSheet() string {
	var _ms C.struct_miqt_string = C.QTextDocument_defaultStyleSheet(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextDocument) Undo(cursor *QTextCursor) {
	C.QTextDocument_undo(this.h, cursor.cPointer())
}

func (this *QTextDocument) Redo(cursor *QTextCursor) {
	C.QTextDocument_redo(this.h, cursor.cPointer())
}

func (this *QTextDocument) ClearUndoRedoStacks() {
	C.QTextDocument_clearUndoRedoStacks(this.h)
}

func (this *QTextDocument) MaximumBlockCount() int {
	return (int)(C.QTextDocument_maximumBlockCount(this.h))
}

func (this *QTextDocument) SetMaximumBlockCount(maximum int) {
	C.QTextDocument_setMaximumBlockCount(this.h, (C.int)(maximum))
}

func (this *QTextDocument) DefaultTextOption() *QTextOption {
	_goptr := newQTextOption(C.QTextDocument_defaultTextOption(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) SetDefaultTextOption(option *QTextOption) {
	C.QTextDocument_setDefaultTextOption(this.h, option.cPointer())
}

func (this *QTextDocument) BaseUrl() *QUrl {
	_goptr := newQUrl(C.QTextDocument_baseUrl(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) SetBaseUrl(url *QUrl) {
	C.QTextDocument_setBaseUrl(this.h, url.cPointer())
}

func (this *QTextDocument) DefaultCursorMoveStyle() CursorMoveStyle {
	return (CursorMoveStyle)(C.QTextDocument_defaultCursorMoveStyle(this.h))
}

func (this *QTextDocument) SetDefaultCursorMoveStyle(style CursorMoveStyle) {
	C.QTextDocument_setDefaultCursorMoveStyle(this.h, (C.int)(style))
}

func (this *QTextDocument) ContentsChange(from int, charsRemoved int, charsAdded int) {
	C.QTextDocument_contentsChange(this.h, (C.int)(from), (C.int)(charsRemoved), (C.int)(charsAdded))
}
func (this *QTextDocument) OnContentsChange(slot func(from int, charsRemoved int, charsAdded int)) {
	C.QTextDocument_connect_contentsChange(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextDocument_contentsChange
func miqt_exec_callback_QTextDocument_contentsChange(cb C.intptr_t, from C.int, charsRemoved C.int, charsAdded C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(from int, charsRemoved int, charsAdded int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(from)

	slotval2 := (int)(charsRemoved)

	slotval3 := (int)(charsAdded)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QTextDocument) ContentsChanged() {
	C.QTextDocument_contentsChanged(this.h)
}
func (this *QTextDocument) OnContentsChanged(slot func()) {
	C.QTextDocument_connect_contentsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextDocument_contentsChanged
func miqt_exec_callback_QTextDocument_contentsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTextDocument) UndoAvailable(param1 bool) {
	C.QTextDocument_undoAvailable(this.h, (C.bool)(param1))
}
func (this *QTextDocument) OnUndoAvailable(slot func(param1 bool)) {
	C.QTextDocument_connect_undoAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextDocument_undoAvailable
func miqt_exec_callback_QTextDocument_undoAvailable(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QTextDocument) RedoAvailable(param1 bool) {
	C.QTextDocument_redoAvailable(this.h, (C.bool)(param1))
}
func (this *QTextDocument) OnRedoAvailable(slot func(param1 bool)) {
	C.QTextDocument_connect_redoAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextDocument_redoAvailable
func miqt_exec_callback_QTextDocument_redoAvailable(cb C.intptr_t, param1 C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(param1)

	gofunc(slotval1)
}

func (this *QTextDocument) UndoCommandAdded() {
	C.QTextDocument_undoCommandAdded(this.h)
}
func (this *QTextDocument) OnUndoCommandAdded(slot func()) {
	C.QTextDocument_connect_undoCommandAdded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextDocument_undoCommandAdded
func miqt_exec_callback_QTextDocument_undoCommandAdded(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTextDocument) ModificationChanged(m bool) {
	C.QTextDocument_modificationChanged(this.h, (C.bool)(m))
}
func (this *QTextDocument) OnModificationChanged(slot func(m bool)) {
	C.QTextDocument_connect_modificationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextDocument_modificationChanged
func miqt_exec_callback_QTextDocument_modificationChanged(cb C.intptr_t, m C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(m bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(m)

	gofunc(slotval1)
}

func (this *QTextDocument) CursorPositionChanged(cursor *QTextCursor) {
	C.QTextDocument_cursorPositionChanged(this.h, cursor.cPointer())
}
func (this *QTextDocument) OnCursorPositionChanged(slot func(cursor *QTextCursor)) {
	C.QTextDocument_connect_cursorPositionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextDocument_cursorPositionChanged
func miqt_exec_callback_QTextDocument_cursorPositionChanged(cb C.intptr_t, cursor *C.QTextCursor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(cursor *QTextCursor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTextCursor(cursor)

	gofunc(slotval1)
}

func (this *QTextDocument) BlockCountChanged(newBlockCount int) {
	C.QTextDocument_blockCountChanged(this.h, (C.int)(newBlockCount))
}
func (this *QTextDocument) OnBlockCountChanged(slot func(newBlockCount int)) {
	C.QTextDocument_connect_blockCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextDocument_blockCountChanged
func miqt_exec_callback_QTextDocument_blockCountChanged(cb C.intptr_t, newBlockCount C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(newBlockCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(newBlockCount)

	gofunc(slotval1)
}

func (this *QTextDocument) BaseUrlChanged(url *QUrl) {
	C.QTextDocument_baseUrlChanged(this.h, url.cPointer())
}
func (this *QTextDocument) OnBaseUrlChanged(slot func(url *QUrl)) {
	C.QTextDocument_connect_baseUrlChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextDocument_baseUrlChanged
func miqt_exec_callback_QTextDocument_baseUrlChanged(cb C.intptr_t, url *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(url *QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQUrl(url)

	gofunc(slotval1)
}

func (this *QTextDocument) DocumentLayoutChanged() {
	C.QTextDocument_documentLayoutChanged(this.h)
}
func (this *QTextDocument) OnDocumentLayoutChanged(slot func()) {
	C.QTextDocument_connect_documentLayoutChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTextDocument_documentLayoutChanged
func miqt_exec_callback_QTextDocument_documentLayoutChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTextDocument) Undo2() {
	C.QTextDocument_undo2(this.h)
}

func (this *QTextDocument) Redo2() {
	C.QTextDocument_redo2(this.h)
}

func (this *QTextDocument) AppendUndoItem(param1 *QAbstractUndoItem) {
	C.QTextDocument_appendUndoItem(this.h, param1.cPointer())
}

func (this *QTextDocument) SetModified() {
	C.QTextDocument_setModified(this.h)
}

func QTextDocument_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextDocument_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextDocument_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextDocument_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextDocument_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextDocument_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextDocument_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextDocument_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextDocument) Clone1(parent *QObject) *QTextDocument {
	return newQTextDocument(C.QTextDocument_clone1(this.h, parent.cPointer()))
}

func (this *QTextDocument) ToHtml1(encoding []byte) string {
	encoding_alias := C.struct_miqt_string{}
	if len(encoding) > 0 {
		encoding_alias.data = (*C.char)(unsafe.Pointer(&encoding[0]))
	} else {
		encoding_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	encoding_alias.len = C.size_t(len(encoding))
	var _ms C.struct_miqt_string = C.QTextDocument_toHtml1(this.h, encoding_alias)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextDocument) ToMarkdown1(features QTextDocument__MarkdownFeature) string {
	var _ms C.struct_miqt_string = C.QTextDocument_toMarkdown1(this.h, (C.int)(features))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextDocument) SetMarkdown2(markdown string, features QTextDocument__MarkdownFeature) {
	markdown_ms := C.struct_miqt_string{}
	markdown_ms.data = C.CString(markdown)
	markdown_ms.len = C.size_t(len(markdown))
	defer C.free(unsafe.Pointer(markdown_ms.data))
	C.QTextDocument_setMarkdown2(this.h, markdown_ms, (C.int)(features))
}

func (this *QTextDocument) Find22(subString string, from int) *QTextCursor {
	subString_ms := C.struct_miqt_string{}
	subString_ms.data = C.CString(subString)
	subString_ms.len = C.size_t(len(subString))
	defer C.free(unsafe.Pointer(subString_ms.data))
	_goptr := newQTextCursor(C.QTextDocument_find22(this.h, subString_ms, (C.int)(from)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find32(subString string, from int, options QTextDocument__FindFlag) *QTextCursor {
	subString_ms := C.struct_miqt_string{}
	subString_ms.data = C.CString(subString)
	subString_ms.len = C.size_t(len(subString))
	defer C.free(unsafe.Pointer(subString_ms.data))
	_goptr := newQTextCursor(C.QTextDocument_find32(this.h, subString_ms, (C.int)(from), (C.int)(options)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find33(subString string, cursor *QTextCursor, options QTextDocument__FindFlag) *QTextCursor {
	subString_ms := C.struct_miqt_string{}
	subString_ms.data = C.CString(subString)
	subString_ms.len = C.size_t(len(subString))
	defer C.free(unsafe.Pointer(subString_ms.data))
	_goptr := newQTextCursor(C.QTextDocument_find33(this.h, subString_ms, cursor.cPointer(), (C.int)(options)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find23(expr *QRegExp, from int) *QTextCursor {
	_goptr := newQTextCursor(C.QTextDocument_find23(this.h, expr.cPointer(), (C.int)(from)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find34(expr *QRegExp, from int, options QTextDocument__FindFlag) *QTextCursor {
	_goptr := newQTextCursor(C.QTextDocument_find34(this.h, expr.cPointer(), (C.int)(from), (C.int)(options)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find35(expr *QRegExp, cursor *QTextCursor, options QTextDocument__FindFlag) *QTextCursor {
	_goptr := newQTextCursor(C.QTextDocument_find35(this.h, expr.cPointer(), cursor.cPointer(), (C.int)(options)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find24(expr *QRegularExpression, from int) *QTextCursor {
	_goptr := newQTextCursor(C.QTextDocument_find24(this.h, expr.cPointer(), (C.int)(from)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find36(expr *QRegularExpression, from int, options QTextDocument__FindFlag) *QTextCursor {
	_goptr := newQTextCursor(C.QTextDocument_find36(this.h, expr.cPointer(), (C.int)(from), (C.int)(options)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find37(expr *QRegularExpression, cursor *QTextCursor, options QTextDocument__FindFlag) *QTextCursor {
	_goptr := newQTextCursor(C.QTextDocument_find37(this.h, expr.cPointer(), cursor.cPointer(), (C.int)(options)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) DrawContents2(painter *QPainter, rect *QRectF) {
	C.QTextDocument_drawContents2(this.h, painter.cPointer(), rect.cPointer())
}

func (this *QTextDocument) ClearUndoRedoStacks1(historyToClear QTextDocument__Stacks) {
	C.QTextDocument_clearUndoRedoStacks1(this.h, (C.int)(historyToClear))
}

func (this *QTextDocument) SetModified1(m bool) {
	C.QTextDocument_setModified1(this.h, (C.bool)(m))
}

// Sender can only be called from a QTextDocument that was directly constructed.
func (this *QTextDocument) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QTextDocument_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QTextDocument that was directly constructed.
func (this *QTextDocument) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTextDocument_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QTextDocument that was directly constructed.
func (this *QTextDocument) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTextDocument_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QTextDocument that was directly constructed.
func (this *QTextDocument) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTextDocument_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QTextDocument) callVirtualBase_Clear() {

	C.QTextDocument_virtualbase_clear(unsafe.Pointer(this.h))

}
func (this *QTextDocument) OnClear(slot func(super func())) {
	ok := C.QTextDocument_override_virtual_clear(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextDocument_clear
func miqt_exec_callback_QTextDocument_clear(self *C.QTextDocument, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QTextDocument{h: self}).callVirtualBase_Clear)

}

func (this *QTextDocument) callVirtualBase_CreateObject(f *QTextFormat) *QTextObject {

	return newQTextObject(C.QTextDocument_virtualbase_createObject(unsafe.Pointer(this.h), f.cPointer()))

}
func (this *QTextDocument) OnCreateObject(slot func(super func(f *QTextFormat) *QTextObject, f *QTextFormat) *QTextObject) {
	ok := C.QTextDocument_override_virtual_createObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextDocument_createObject
func miqt_exec_callback_QTextDocument_createObject(self *C.QTextDocument, cb C.intptr_t, f *C.QTextFormat) *C.QTextObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f *QTextFormat) *QTextObject, f *QTextFormat) *QTextObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTextFormat(f)

	virtualReturn := gofunc((&QTextDocument{h: self}).callVirtualBase_CreateObject, slotval1)

	return virtualReturn.cPointer()

}

func (this *QTextDocument) callVirtualBase_LoadResource(typeVal int, name *QUrl) *QVariant {

	_goptr := newQVariant(C.QTextDocument_virtualbase_loadResource(unsafe.Pointer(this.h), (C.int)(typeVal), name.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QTextDocument) OnLoadResource(slot func(super func(typeVal int, name *QUrl) *QVariant, typeVal int, name *QUrl) *QVariant) {
	ok := C.QTextDocument_override_virtual_loadResource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextDocument_loadResource
func miqt_exec_callback_QTextDocument_loadResource(self *C.QTextDocument, cb C.intptr_t, typeVal C.int, name *C.QUrl) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(typeVal int, name *QUrl) *QVariant, typeVal int, name *QUrl) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(typeVal)

	slotval2 := newQUrl(name)

	virtualReturn := gofunc((&QTextDocument{h: self}).callVirtualBase_LoadResource, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QTextDocument) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QTextDocument_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTextDocument) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTextDocument_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextDocument_event
func miqt_exec_callback_QTextDocument_event(self *C.QTextDocument, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QTextDocument{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTextDocument) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QTextDocument_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QTextDocument) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QTextDocument_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextDocument_eventFilter
func miqt_exec_callback_QTextDocument_eventFilter(self *C.QTextDocument, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTextDocument{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTextDocument) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTextDocument_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextDocument) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTextDocument_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextDocument_timerEvent
func miqt_exec_callback_QTextDocument_timerEvent(self *C.QTextDocument, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTextDocument{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTextDocument) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTextDocument_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextDocument) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTextDocument_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextDocument_childEvent
func miqt_exec_callback_QTextDocument_childEvent(self *C.QTextDocument, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTextDocument{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTextDocument) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTextDocument_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextDocument) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTextDocument_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextDocument_customEvent
func miqt_exec_callback_QTextDocument_customEvent(self *C.QTextDocument, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTextDocument{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTextDocument) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTextDocument_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTextDocument) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTextDocument_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextDocument_connectNotify
func miqt_exec_callback_QTextDocument_connectNotify(self *C.QTextDocument, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTextDocument{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTextDocument) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTextDocument_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTextDocument) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTextDocument_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextDocument_disconnectNotify
func miqt_exec_callback_QTextDocument_disconnectNotify(self *C.QTextDocument, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTextDocument{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTextDocument) Delete() {
	C.QTextDocument_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextDocument) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextDocument) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
