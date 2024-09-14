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
	QTextDocument__MetaInformation__DocumentTitle QTextDocument__MetaInformation = 0
	QTextDocument__MetaInformation__DocumentUrl   QTextDocument__MetaInformation = 1
)

type QTextDocument__MarkdownFeature int

const (
	QTextDocument__MarkdownFeature__MarkdownNoHTML            QTextDocument__MarkdownFeature = 96
	QTextDocument__MarkdownFeature__MarkdownDialectCommonMark QTextDocument__MarkdownFeature = 0
	QTextDocument__MarkdownFeature__MarkdownDialectGitHub     QTextDocument__MarkdownFeature = 3852
)

type QTextDocument__FindFlag int

const (
	QTextDocument__FindFlag__FindBackward        QTextDocument__FindFlag = 1
	QTextDocument__FindFlag__FindCaseSensitively QTextDocument__FindFlag = 2
	QTextDocument__FindFlag__FindWholeWords      QTextDocument__FindFlag = 4
)

type QTextDocument__ResourceType int

const (
	QTextDocument__ResourceType__UnknownResource    QTextDocument__ResourceType = 0
	QTextDocument__ResourceType__HtmlResource       QTextDocument__ResourceType = 1
	QTextDocument__ResourceType__ImageResource      QTextDocument__ResourceType = 2
	QTextDocument__ResourceType__StyleSheetResource QTextDocument__ResourceType = 3
	QTextDocument__ResourceType__MarkdownResource   QTextDocument__ResourceType = 4
	QTextDocument__ResourceType__UserResource       QTextDocument__ResourceType = 100
)

type QTextDocument__Stacks int

const (
	QTextDocument__Stacks__UndoStack         QTextDocument__Stacks = 1
	QTextDocument__Stacks__RedoStack         QTextDocument__Stacks = 2
	QTextDocument__Stacks__UndoAndRedoStacks QTextDocument__Stacks = 3
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
	if h == nil {
		return nil
	}
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

// Delete this object from C++ memory.
func (this *QAbstractUndoItem) Delete() {
	C.QAbstractUndoItem_Delete(this.h)
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

func newQTextDocument(h *C.QTextDocument) *QTextDocument {
	if h == nil {
		return nil
	}
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
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QTextDocument_new2((*C.struct_miqt_string)(text_ms))
	return newQTextDocument(ret)
}

// NewQTextDocument3 constructs a new QTextDocument object.
func NewQTextDocument3(parent *QObject) *QTextDocument {
	ret := C.QTextDocument_new3(parent.cPointer())
	return newQTextDocument(ret)
}

// NewQTextDocument4 constructs a new QTextDocument object.
func NewQTextDocument4(text string, parent *QObject) *QTextDocument {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QTextDocument_new4((*C.struct_miqt_string)(text_ms), parent.cPointer())
	return newQTextDocument(ret)
}

func (this *QTextDocument) MetaObject() *QMetaObject {
	_ret := C.QTextDocument_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QTextDocument_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QTextDocument_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTextDocument_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QTextDocument_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextDocument) Clone() *QTextDocument {
	_ret := C.QTextDocument_Clone(this.h)
	return newQTextDocument_U(unsafe.Pointer(_ret))
}

func (this *QTextDocument) IsEmpty() bool {
	_ret := C.QTextDocument_IsEmpty(this.h)
	return (bool)(_ret)
}

func (this *QTextDocument) Clear() {
	C.QTextDocument_Clear(this.h)
}

func (this *QTextDocument) SetUndoRedoEnabled(enable bool) {
	C.QTextDocument_SetUndoRedoEnabled(this.h, (C.bool)(enable))
}

func (this *QTextDocument) IsUndoRedoEnabled() bool {
	_ret := C.QTextDocument_IsUndoRedoEnabled(this.h)
	return (bool)(_ret)
}

func (this *QTextDocument) IsUndoAvailable() bool {
	_ret := C.QTextDocument_IsUndoAvailable(this.h)
	return (bool)(_ret)
}

func (this *QTextDocument) IsRedoAvailable() bool {
	_ret := C.QTextDocument_IsRedoAvailable(this.h)
	return (bool)(_ret)
}

func (this *QTextDocument) AvailableUndoSteps() int {
	_ret := C.QTextDocument_AvailableUndoSteps(this.h)
	return (int)(_ret)
}

func (this *QTextDocument) AvailableRedoSteps() int {
	_ret := C.QTextDocument_AvailableRedoSteps(this.h)
	return (int)(_ret)
}

func (this *QTextDocument) Revision() int {
	_ret := C.QTextDocument_Revision(this.h)
	return (int)(_ret)
}

func (this *QTextDocument) SetDocumentLayout(layout *QAbstractTextDocumentLayout) {
	C.QTextDocument_SetDocumentLayout(this.h, layout.cPointer())
}

func (this *QTextDocument) DocumentLayout() *QAbstractTextDocumentLayout {
	_ret := C.QTextDocument_DocumentLayout(this.h)
	return newQAbstractTextDocumentLayout_U(unsafe.Pointer(_ret))
}

func (this *QTextDocument) SetMetaInformation(info QTextDocument__MetaInformation, param2 string) {
	param2_ms := miqt_strdupg(param2)
	defer C.free(param2_ms)
	C.QTextDocument_SetMetaInformation(this.h, (C.uintptr_t)(info), (*C.struct_miqt_string)(param2_ms))
}

func (this *QTextDocument) MetaInformation(info QTextDocument__MetaInformation) string {
	var _ms *C.struct_miqt_string = C.QTextDocument_MetaInformation(this.h, (C.uintptr_t)(info))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextDocument) ToHtml() string {
	var _ms *C.struct_miqt_string = C.QTextDocument_ToHtml(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextDocument) SetHtml(html string) {
	html_ms := miqt_strdupg(html)
	defer C.free(html_ms)
	C.QTextDocument_SetHtml(this.h, (*C.struct_miqt_string)(html_ms))
}

func (this *QTextDocument) ToMarkdown() string {
	var _ms *C.struct_miqt_string = C.QTextDocument_ToMarkdown(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextDocument) SetMarkdown(markdown string) {
	markdown_ms := miqt_strdupg(markdown)
	defer C.free(markdown_ms)
	C.QTextDocument_SetMarkdown(this.h, (*C.struct_miqt_string)(markdown_ms))
}

func (this *QTextDocument) ToRawText() string {
	var _ms *C.struct_miqt_string = C.QTextDocument_ToRawText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextDocument) ToPlainText() string {
	var _ms *C.struct_miqt_string = C.QTextDocument_ToPlainText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextDocument) SetPlainText(text string) {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QTextDocument_SetPlainText(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QTextDocument) CharacterAt(pos int) *QChar {
	_ret := C.QTextDocument_CharacterAt(this.h, (C.int)(pos))
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find(subString string) *QTextCursor {
	subString_ms := miqt_strdupg(subString)
	defer C.free(subString_ms)
	_ret := C.QTextDocument_Find(this.h, (*C.struct_miqt_string)(subString_ms))
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find2(subString string, cursor *QTextCursor) *QTextCursor {
	subString_ms := miqt_strdupg(subString)
	defer C.free(subString_ms)
	_ret := C.QTextDocument_Find2(this.h, (*C.struct_miqt_string)(subString_ms), cursor.cPointer())
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) FindWithExpr(expr *QRegExp) *QTextCursor {
	_ret := C.QTextDocument_FindWithExpr(this.h, expr.cPointer())
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find3(expr *QRegExp, cursor *QTextCursor) *QTextCursor {
	_ret := C.QTextDocument_Find3(this.h, expr.cPointer(), cursor.cPointer())
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find4(expr *QRegularExpression) *QTextCursor {
	_ret := C.QTextDocument_Find4(this.h, expr.cPointer())
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find5(expr *QRegularExpression, cursor *QTextCursor) *QTextCursor {
	_ret := C.QTextDocument_Find5(this.h, expr.cPointer(), cursor.cPointer())
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) FrameAt(pos int) *QTextFrame {
	_ret := C.QTextDocument_FrameAt(this.h, (C.int)(pos))
	return newQTextFrame_U(unsafe.Pointer(_ret))
}

func (this *QTextDocument) RootFrame() *QTextFrame {
	_ret := C.QTextDocument_RootFrame(this.h)
	return newQTextFrame_U(unsafe.Pointer(_ret))
}

func (this *QTextDocument) Object(objectIndex int) *QTextObject {
	_ret := C.QTextDocument_Object(this.h, (C.int)(objectIndex))
	return newQTextObject_U(unsafe.Pointer(_ret))
}

func (this *QTextDocument) ObjectForFormat(param1 *QTextFormat) *QTextObject {
	_ret := C.QTextDocument_ObjectForFormat(this.h, param1.cPointer())
	return newQTextObject_U(unsafe.Pointer(_ret))
}

func (this *QTextDocument) FindBlock(pos int) *QTextBlock {
	_ret := C.QTextDocument_FindBlock(this.h, (C.int)(pos))
	_goptr := newQTextBlock(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) FindBlockByNumber(blockNumber int) *QTextBlock {
	_ret := C.QTextDocument_FindBlockByNumber(this.h, (C.int)(blockNumber))
	_goptr := newQTextBlock(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) FindBlockByLineNumber(blockNumber int) *QTextBlock {
	_ret := C.QTextDocument_FindBlockByLineNumber(this.h, (C.int)(blockNumber))
	_goptr := newQTextBlock(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Begin() *QTextBlock {
	_ret := C.QTextDocument_Begin(this.h)
	_goptr := newQTextBlock(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) End() *QTextBlock {
	_ret := C.QTextDocument_End(this.h)
	_goptr := newQTextBlock(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) FirstBlock() *QTextBlock {
	_ret := C.QTextDocument_FirstBlock(this.h)
	_goptr := newQTextBlock(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) LastBlock() *QTextBlock {
	_ret := C.QTextDocument_LastBlock(this.h)
	_goptr := newQTextBlock(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) SetPageSize(size *QSizeF) {
	C.QTextDocument_SetPageSize(this.h, size.cPointer())
}

func (this *QTextDocument) PageSize() *QSizeF {
	_ret := C.QTextDocument_PageSize(this.h)
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) SetDefaultFont(font *QFont) {
	C.QTextDocument_SetDefaultFont(this.h, font.cPointer())
}

func (this *QTextDocument) DefaultFont() *QFont {
	_ret := C.QTextDocument_DefaultFont(this.h)
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) PageCount() int {
	_ret := C.QTextDocument_PageCount(this.h)
	return (int)(_ret)
}

func (this *QTextDocument) IsModified() bool {
	_ret := C.QTextDocument_IsModified(this.h)
	return (bool)(_ret)
}

func (this *QTextDocument) Print(printer *QPagedPaintDevice) {
	C.QTextDocument_Print(this.h, printer.cPointer())
}

func (this *QTextDocument) Resource(typeVal int, name *QUrl) *QVariant {
	_ret := C.QTextDocument_Resource(this.h, (C.int)(typeVal), name.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) AddResource(typeVal int, name *QUrl, resource *QVariant) {
	C.QTextDocument_AddResource(this.h, (C.int)(typeVal), name.cPointer(), resource.cPointer())
}

func (this *QTextDocument) AllFormats() []QTextFormat {
	var _ma *C.struct_miqt_array = C.QTextDocument_AllFormats(this.h)
	_ret := make([]QTextFormat, int(_ma.len))
	_outCast := (*[0xffff]*C.QTextFormat)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = *newQTextFormat(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTextDocument) MarkContentsDirty(from int, length int) {
	C.QTextDocument_MarkContentsDirty(this.h, (C.int)(from), (C.int)(length))
}

func (this *QTextDocument) SetUseDesignMetrics(b bool) {
	C.QTextDocument_SetUseDesignMetrics(this.h, (C.bool)(b))
}

func (this *QTextDocument) UseDesignMetrics() bool {
	_ret := C.QTextDocument_UseDesignMetrics(this.h)
	return (bool)(_ret)
}

func (this *QTextDocument) DrawContents(painter *QPainter) {
	C.QTextDocument_DrawContents(this.h, painter.cPointer())
}

func (this *QTextDocument) SetTextWidth(width float64) {
	C.QTextDocument_SetTextWidth(this.h, (C.double)(width))
}

func (this *QTextDocument) TextWidth() float64 {
	_ret := C.QTextDocument_TextWidth(this.h)
	return (float64)(_ret)
}

func (this *QTextDocument) IdealWidth() float64 {
	_ret := C.QTextDocument_IdealWidth(this.h)
	return (float64)(_ret)
}

func (this *QTextDocument) IndentWidth() float64 {
	_ret := C.QTextDocument_IndentWidth(this.h)
	return (float64)(_ret)
}

func (this *QTextDocument) SetIndentWidth(width float64) {
	C.QTextDocument_SetIndentWidth(this.h, (C.double)(width))
}

func (this *QTextDocument) DocumentMargin() float64 {
	_ret := C.QTextDocument_DocumentMargin(this.h)
	return (float64)(_ret)
}

func (this *QTextDocument) SetDocumentMargin(margin float64) {
	C.QTextDocument_SetDocumentMargin(this.h, (C.double)(margin))
}

func (this *QTextDocument) AdjustSize() {
	C.QTextDocument_AdjustSize(this.h)
}

func (this *QTextDocument) Size() *QSizeF {
	_ret := C.QTextDocument_Size(this.h)
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) BlockCount() int {
	_ret := C.QTextDocument_BlockCount(this.h)
	return (int)(_ret)
}

func (this *QTextDocument) LineCount() int {
	_ret := C.QTextDocument_LineCount(this.h)
	return (int)(_ret)
}

func (this *QTextDocument) CharacterCount() int {
	_ret := C.QTextDocument_CharacterCount(this.h)
	return (int)(_ret)
}

func (this *QTextDocument) SetDefaultStyleSheet(sheet string) {
	sheet_ms := miqt_strdupg(sheet)
	defer C.free(sheet_ms)
	C.QTextDocument_SetDefaultStyleSheet(this.h, (*C.struct_miqt_string)(sheet_ms))
}

func (this *QTextDocument) DefaultStyleSheet() string {
	var _ms *C.struct_miqt_string = C.QTextDocument_DefaultStyleSheet(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextDocument) Undo(cursor *QTextCursor) {
	C.QTextDocument_Undo(this.h, cursor.cPointer())
}

func (this *QTextDocument) Redo(cursor *QTextCursor) {
	C.QTextDocument_Redo(this.h, cursor.cPointer())
}

func (this *QTextDocument) ClearUndoRedoStacks() {
	C.QTextDocument_ClearUndoRedoStacks(this.h)
}

func (this *QTextDocument) MaximumBlockCount() int {
	_ret := C.QTextDocument_MaximumBlockCount(this.h)
	return (int)(_ret)
}

func (this *QTextDocument) SetMaximumBlockCount(maximum int) {
	C.QTextDocument_SetMaximumBlockCount(this.h, (C.int)(maximum))
}

func (this *QTextDocument) DefaultTextOption() *QTextOption {
	_ret := C.QTextDocument_DefaultTextOption(this.h)
	_goptr := newQTextOption(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) SetDefaultTextOption(option *QTextOption) {
	C.QTextDocument_SetDefaultTextOption(this.h, option.cPointer())
}

func (this *QTextDocument) BaseUrl() *QUrl {
	_ret := C.QTextDocument_BaseUrl(this.h)
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) SetBaseUrl(url *QUrl) {
	C.QTextDocument_SetBaseUrl(this.h, url.cPointer())
}

func (this *QTextDocument) DefaultCursorMoveStyle() CursorMoveStyle {
	_ret := C.QTextDocument_DefaultCursorMoveStyle(this.h)
	return (CursorMoveStyle)(_ret)
}

func (this *QTextDocument) SetDefaultCursorMoveStyle(style CursorMoveStyle) {
	C.QTextDocument_SetDefaultCursorMoveStyle(this.h, (C.uintptr_t)(style))
}

func (this *QTextDocument) ContentsChange(from int, charsRemoved int, charsAdded int) {
	C.QTextDocument_ContentsChange(this.h, (C.int)(from), (C.int)(charsRemoved), (C.int)(charsAdded))
}
func (this *QTextDocument) OnContentsChange(slot func(from int, charsRemoved int, charsAdded int)) {
	C.QTextDocument_connect_ContentsChange(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTextDocument_ContentsChange
func miqt_exec_callback_QTextDocument_ContentsChange(cb *C.void, from C.int, charsRemoved C.int, charsAdded C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(from int, charsRemoved int, charsAdded int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	from_ret := from
	slotval1 := (int)(from_ret)

	charsRemoved_ret := charsRemoved
	slotval2 := (int)(charsRemoved_ret)

	charsAdded_ret := charsAdded
	slotval3 := (int)(charsAdded_ret)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QTextDocument) ContentsChanged() {
	C.QTextDocument_ContentsChanged(this.h)
}
func (this *QTextDocument) OnContentsChanged(slot func()) {
	C.QTextDocument_connect_ContentsChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTextDocument_ContentsChanged
func miqt_exec_callback_QTextDocument_ContentsChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTextDocument) UndoAvailable(param1 bool) {
	C.QTextDocument_UndoAvailable(this.h, (C.bool)(param1))
}
func (this *QTextDocument) OnUndoAvailable(slot func(param1 bool)) {
	C.QTextDocument_connect_UndoAvailable(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTextDocument_UndoAvailable
func miqt_exec_callback_QTextDocument_UndoAvailable(cb *C.void, param1 C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	param1_ret := param1
	slotval1 := (bool)(param1_ret)

	gofunc(slotval1)
}

func (this *QTextDocument) RedoAvailable(param1 bool) {
	C.QTextDocument_RedoAvailable(this.h, (C.bool)(param1))
}
func (this *QTextDocument) OnRedoAvailable(slot func(param1 bool)) {
	C.QTextDocument_connect_RedoAvailable(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTextDocument_RedoAvailable
func miqt_exec_callback_QTextDocument_RedoAvailable(cb *C.void, param1 C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	param1_ret := param1
	slotval1 := (bool)(param1_ret)

	gofunc(slotval1)
}

func (this *QTextDocument) UndoCommandAdded() {
	C.QTextDocument_UndoCommandAdded(this.h)
}
func (this *QTextDocument) OnUndoCommandAdded(slot func()) {
	C.QTextDocument_connect_UndoCommandAdded(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTextDocument_UndoCommandAdded
func miqt_exec_callback_QTextDocument_UndoCommandAdded(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QTextDocument) ModificationChanged(m bool) {
	C.QTextDocument_ModificationChanged(this.h, (C.bool)(m))
}
func (this *QTextDocument) OnModificationChanged(slot func(m bool)) {
	C.QTextDocument_connect_ModificationChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTextDocument_ModificationChanged
func miqt_exec_callback_QTextDocument_ModificationChanged(cb *C.void, m C.bool) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(m bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	m_ret := m
	slotval1 := (bool)(m_ret)

	gofunc(slotval1)
}

func (this *QTextDocument) CursorPositionChanged(cursor *QTextCursor) {
	C.QTextDocument_CursorPositionChanged(this.h, cursor.cPointer())
}
func (this *QTextDocument) OnCursorPositionChanged(slot func(cursor *QTextCursor)) {
	C.QTextDocument_connect_CursorPositionChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTextDocument_CursorPositionChanged
func miqt_exec_callback_QTextDocument_CursorPositionChanged(cb *C.void, cursor *C.QTextCursor) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(cursor *QTextCursor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	cursor_ret := cursor
	slotval1 := newQTextCursor_U(unsafe.Pointer(cursor_ret))

	gofunc(slotval1)
}

func (this *QTextDocument) BlockCountChanged(newBlockCount int) {
	C.QTextDocument_BlockCountChanged(this.h, (C.int)(newBlockCount))
}
func (this *QTextDocument) OnBlockCountChanged(slot func(newBlockCount int)) {
	C.QTextDocument_connect_BlockCountChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTextDocument_BlockCountChanged
func miqt_exec_callback_QTextDocument_BlockCountChanged(cb *C.void, newBlockCount C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(newBlockCount int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	newBlockCount_ret := newBlockCount
	slotval1 := (int)(newBlockCount_ret)

	gofunc(slotval1)
}

func (this *QTextDocument) BaseUrlChanged(url *QUrl) {
	C.QTextDocument_BaseUrlChanged(this.h, url.cPointer())
}
func (this *QTextDocument) OnBaseUrlChanged(slot func(url *QUrl)) {
	C.QTextDocument_connect_BaseUrlChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTextDocument_BaseUrlChanged
func miqt_exec_callback_QTextDocument_BaseUrlChanged(cb *C.void, url *C.QUrl) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(url *QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	url_ret := url
	slotval1 := newQUrl_U(unsafe.Pointer(url_ret))

	gofunc(slotval1)
}

func (this *QTextDocument) DocumentLayoutChanged() {
	C.QTextDocument_DocumentLayoutChanged(this.h)
}
func (this *QTextDocument) OnDocumentLayoutChanged(slot func()) {
	C.QTextDocument_connect_DocumentLayoutChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QTextDocument_DocumentLayoutChanged
func miqt_exec_callback_QTextDocument_DocumentLayoutChanged(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
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
	var _ms *C.struct_miqt_string = C.QTextDocument_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTextDocument_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTextDocument_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTextDocument_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTextDocument_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTextDocument_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTextDocument_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextDocument) Clone1(parent *QObject) *QTextDocument {
	_ret := C.QTextDocument_Clone1(this.h, parent.cPointer())
	return newQTextDocument_U(unsafe.Pointer(_ret))
}

func (this *QTextDocument) ToHtml1(encoding *QByteArray) string {
	var _ms *C.struct_miqt_string = C.QTextDocument_ToHtml1(this.h, encoding.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextDocument) ToMarkdown1(features int) string {
	var _ms *C.struct_miqt_string = C.QTextDocument_ToMarkdown1(this.h, (C.int)(features))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTextDocument) SetMarkdown2(markdown string, features int) {
	markdown_ms := miqt_strdupg(markdown)
	defer C.free(markdown_ms)
	C.QTextDocument_SetMarkdown2(this.h, (*C.struct_miqt_string)(markdown_ms), (C.int)(features))
}

func (this *QTextDocument) Find22(subString string, from int) *QTextCursor {
	subString_ms := miqt_strdupg(subString)
	defer C.free(subString_ms)
	_ret := C.QTextDocument_Find22(this.h, (*C.struct_miqt_string)(subString_ms), (C.int)(from))
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find32(subString string, from int, options int) *QTextCursor {
	subString_ms := miqt_strdupg(subString)
	defer C.free(subString_ms)
	_ret := C.QTextDocument_Find32(this.h, (*C.struct_miqt_string)(subString_ms), (C.int)(from), (C.int)(options))
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find33(subString string, cursor *QTextCursor, options int) *QTextCursor {
	subString_ms := miqt_strdupg(subString)
	defer C.free(subString_ms)
	_ret := C.QTextDocument_Find33(this.h, (*C.struct_miqt_string)(subString_ms), cursor.cPointer(), (C.int)(options))
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find23(expr *QRegExp, from int) *QTextCursor {
	_ret := C.QTextDocument_Find23(this.h, expr.cPointer(), (C.int)(from))
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find34(expr *QRegExp, from int, options int) *QTextCursor {
	_ret := C.QTextDocument_Find34(this.h, expr.cPointer(), (C.int)(from), (C.int)(options))
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find35(expr *QRegExp, cursor *QTextCursor, options int) *QTextCursor {
	_ret := C.QTextDocument_Find35(this.h, expr.cPointer(), cursor.cPointer(), (C.int)(options))
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find24(expr *QRegularExpression, from int) *QTextCursor {
	_ret := C.QTextDocument_Find24(this.h, expr.cPointer(), (C.int)(from))
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find36(expr *QRegularExpression, from int, options int) *QTextCursor {
	_ret := C.QTextDocument_Find36(this.h, expr.cPointer(), (C.int)(from), (C.int)(options))
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) Find37(expr *QRegularExpression, cursor *QTextCursor, options int) *QTextCursor {
	_ret := C.QTextDocument_Find37(this.h, expr.cPointer(), cursor.cPointer(), (C.int)(options))
	_goptr := newQTextCursor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextDocument) DrawContents2(painter *QPainter, rect *QRectF) {
	C.QTextDocument_DrawContents2(this.h, painter.cPointer(), rect.cPointer())
}

func (this *QTextDocument) ClearUndoRedoStacks1(historyToClear QTextDocument__Stacks) {
	C.QTextDocument_ClearUndoRedoStacks1(this.h, (C.uintptr_t)(historyToClear))
}

func (this *QTextDocument) SetModified1(m bool) {
	C.QTextDocument_SetModified1(this.h, (C.bool)(m))
}

// Delete this object from C++ memory.
func (this *QTextDocument) Delete() {
	C.QTextDocument_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextDocument) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextDocument) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
