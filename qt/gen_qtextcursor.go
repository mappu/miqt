package qt

/*

#include "gen_qtextcursor.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTextCursor__MoveMode int

const (
	QTextCursor__MoveAnchor QTextCursor__MoveMode = 0
	QTextCursor__KeepAnchor QTextCursor__MoveMode = 1
)

type QTextCursor__MoveOperation int

const (
	QTextCursor__NoMove            QTextCursor__MoveOperation = 0
	QTextCursor__Start             QTextCursor__MoveOperation = 1
	QTextCursor__Up                QTextCursor__MoveOperation = 2
	QTextCursor__StartOfLine       QTextCursor__MoveOperation = 3
	QTextCursor__StartOfBlock      QTextCursor__MoveOperation = 4
	QTextCursor__StartOfWord       QTextCursor__MoveOperation = 5
	QTextCursor__PreviousBlock     QTextCursor__MoveOperation = 6
	QTextCursor__PreviousCharacter QTextCursor__MoveOperation = 7
	QTextCursor__PreviousWord      QTextCursor__MoveOperation = 8
	QTextCursor__Left              QTextCursor__MoveOperation = 9
	QTextCursor__WordLeft          QTextCursor__MoveOperation = 10
	QTextCursor__End               QTextCursor__MoveOperation = 11
	QTextCursor__Down              QTextCursor__MoveOperation = 12
	QTextCursor__EndOfLine         QTextCursor__MoveOperation = 13
	QTextCursor__EndOfWord         QTextCursor__MoveOperation = 14
	QTextCursor__EndOfBlock        QTextCursor__MoveOperation = 15
	QTextCursor__NextBlock         QTextCursor__MoveOperation = 16
	QTextCursor__NextCharacter     QTextCursor__MoveOperation = 17
	QTextCursor__NextWord          QTextCursor__MoveOperation = 18
	QTextCursor__Right             QTextCursor__MoveOperation = 19
	QTextCursor__WordRight         QTextCursor__MoveOperation = 20
	QTextCursor__NextCell          QTextCursor__MoveOperation = 21
	QTextCursor__PreviousCell      QTextCursor__MoveOperation = 22
	QTextCursor__NextRow           QTextCursor__MoveOperation = 23
	QTextCursor__PreviousRow       QTextCursor__MoveOperation = 24
)

type QTextCursor__SelectionType int

const (
	QTextCursor__WordUnderCursor  QTextCursor__SelectionType = 0
	QTextCursor__LineUnderCursor  QTextCursor__SelectionType = 1
	QTextCursor__BlockUnderCursor QTextCursor__SelectionType = 2
	QTextCursor__Document         QTextCursor__SelectionType = 3
)

type QTextCursor struct {
	h  *C.QTextCursor
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QTextCursor) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QTextCursor) cPointer() *C.QTextCursor {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextCursor) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextCursor constructs the type using only CGO pointers.
func newQTextCursor(h *C.QTextCursor) *QTextCursor {
	if h == nil {
		return nil
	}

	return &QTextCursor{h: h}
}

// UnsafeNewQTextCursor constructs the type using only unsafe pointers.
func UnsafeNewQTextCursor(h unsafe.Pointer) *QTextCursor {
	return newQTextCursor((*C.QTextCursor)(h))
}

// NewQTextCursor constructs a new QTextCursor object.
func NewQTextCursor() *QTextCursor {

	return newQTextCursor(C.QTextCursor_new())
}

// NewQTextCursor2 constructs a new QTextCursor object.
func NewQTextCursor2(document *QTextDocument) *QTextCursor {
	defer runtime.KeepAlive(document)

	return newQTextCursor(C.QTextCursor_new2(document.cPointer()))
}

// NewQTextCursor3 constructs a new QTextCursor object.
func NewQTextCursor3(frame *QTextFrame) *QTextCursor {
	defer runtime.KeepAlive(frame)

	return newQTextCursor(C.QTextCursor_new3(frame.cPointer()))
}

// NewQTextCursor4 constructs a new QTextCursor object.
func NewQTextCursor4(block *QTextBlock) *QTextCursor {
	defer runtime.KeepAlive(block)

	return newQTextCursor(C.QTextCursor_new4(block.cPointer()))
}

// NewQTextCursor5 constructs a new QTextCursor object.
func NewQTextCursor5(cursor *QTextCursor) *QTextCursor {
	defer runtime.KeepAlive(cursor)

	return newQTextCursor(C.QTextCursor_new5(cursor.cPointer()))
}

func (this *QTextCursor) OperatorAssign(other *QTextCursor) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QTextCursor_operatorAssign(this.h, other.cPointer())
}

func (this *QTextCursor) Swap(other *QTextCursor) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QTextCursor_swap(this.h, other.cPointer())
}

func (this *QTextCursor) IsNull() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTextCursor_isNull(this.h))
}

func (this *QTextCursor) SetPosition(pos int) {
	defer runtime.KeepAlive(this)
	C.QTextCursor_setPosition(this.h, (C.int)(pos))
}

func (this *QTextCursor) Position() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTextCursor_position(this.h))
}

func (this *QTextCursor) PositionInBlock() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTextCursor_positionInBlock(this.h))
}

func (this *QTextCursor) Anchor() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTextCursor_anchor(this.h))
}

func (this *QTextCursor) InsertText(text string) {
	defer runtime.KeepAlive(this)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTextCursor_insertText(this.h, text_ms)
}

func (this *QTextCursor) InsertText2(text string, format *QTextCharFormat) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(format)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTextCursor_insertText2(this.h, text_ms, format.cPointer())
}

func (this *QTextCursor) MovePosition(op QTextCursor__MoveOperation) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTextCursor_movePosition(this.h, (C.int)(op)))
}

func (this *QTextCursor) VisualNavigation() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTextCursor_visualNavigation(this.h))
}

func (this *QTextCursor) SetVisualNavigation(b bool) {
	defer runtime.KeepAlive(this)
	C.QTextCursor_setVisualNavigation(this.h, (C.bool)(b))
}

func (this *QTextCursor) SetVerticalMovementX(x int) {
	defer runtime.KeepAlive(this)
	C.QTextCursor_setVerticalMovementX(this.h, (C.int)(x))
}

func (this *QTextCursor) VerticalMovementX() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTextCursor_verticalMovementX(this.h))
}

func (this *QTextCursor) SetKeepPositionOnInsert(b bool) {
	defer runtime.KeepAlive(this)
	C.QTextCursor_setKeepPositionOnInsert(this.h, (C.bool)(b))
}

func (this *QTextCursor) KeepPositionOnInsert() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTextCursor_keepPositionOnInsert(this.h))
}

func (this *QTextCursor) DeleteChar() {
	defer runtime.KeepAlive(this)
	C.QTextCursor_deleteChar(this.h)
}

func (this *QTextCursor) DeletePreviousChar() {
	defer runtime.KeepAlive(this)
	C.QTextCursor_deletePreviousChar(this.h)
}

func (this *QTextCursor) Select(selection QTextCursor__SelectionType) {
	defer runtime.KeepAlive(this)
	C.QTextCursor_select(this.h, (C.int)(selection))
}

func (this *QTextCursor) HasSelection() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTextCursor_hasSelection(this.h))
}

func (this *QTextCursor) HasComplexSelection() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTextCursor_hasComplexSelection(this.h))
}

func (this *QTextCursor) RemoveSelectedText() {
	defer runtime.KeepAlive(this)
	C.QTextCursor_removeSelectedText(this.h)
}

func (this *QTextCursor) ClearSelection() {
	defer runtime.KeepAlive(this)
	C.QTextCursor_clearSelection(this.h)
}

func (this *QTextCursor) SelectionStart() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTextCursor_selectionStart(this.h))
}

func (this *QTextCursor) SelectionEnd() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTextCursor_selectionEnd(this.h))
}

func (this *QTextCursor) SelectedText() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QTextCursor_selectedText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextCursor) Selection() *QTextDocumentFragment {
	defer runtime.KeepAlive(this)
	_goptr := newQTextDocumentFragment(C.QTextCursor_selection(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCursor) SelectedTableCells(firstRow *int, numRows *int, firstColumn *int, numColumns *int) {
	defer runtime.KeepAlive(this)
	C.QTextCursor_selectedTableCells(this.h, (*C.int)(unsafe.Pointer(firstRow)), (*C.int)(unsafe.Pointer(numRows)), (*C.int)(unsafe.Pointer(firstColumn)), (*C.int)(unsafe.Pointer(numColumns)))
}

func (this *QTextCursor) Block() *QTextBlock {
	defer runtime.KeepAlive(this)
	_goptr := newQTextBlock(C.QTextCursor_block(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCursor) CharFormat() *QTextCharFormat {
	defer runtime.KeepAlive(this)
	_goptr := newQTextCharFormat(C.QTextCursor_charFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCursor) SetCharFormat(format *QTextCharFormat) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(format)
	C.QTextCursor_setCharFormat(this.h, format.cPointer())
}

func (this *QTextCursor) MergeCharFormat(modifier *QTextCharFormat) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(modifier)
	C.QTextCursor_mergeCharFormat(this.h, modifier.cPointer())
}

func (this *QTextCursor) BlockFormat() *QTextBlockFormat {
	defer runtime.KeepAlive(this)
	_goptr := newQTextBlockFormat(C.QTextCursor_blockFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCursor) SetBlockFormat(format *QTextBlockFormat) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(format)
	C.QTextCursor_setBlockFormat(this.h, format.cPointer())
}

func (this *QTextCursor) MergeBlockFormat(modifier *QTextBlockFormat) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(modifier)
	C.QTextCursor_mergeBlockFormat(this.h, modifier.cPointer())
}

func (this *QTextCursor) BlockCharFormat() *QTextCharFormat {
	defer runtime.KeepAlive(this)
	_goptr := newQTextCharFormat(C.QTextCursor_blockCharFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCursor) SetBlockCharFormat(format *QTextCharFormat) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(format)
	C.QTextCursor_setBlockCharFormat(this.h, format.cPointer())
}

func (this *QTextCursor) MergeBlockCharFormat(modifier *QTextCharFormat) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(modifier)
	C.QTextCursor_mergeBlockCharFormat(this.h, modifier.cPointer())
}

func (this *QTextCursor) AtBlockStart() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTextCursor_atBlockStart(this.h))
}

func (this *QTextCursor) AtBlockEnd() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTextCursor_atBlockEnd(this.h))
}

func (this *QTextCursor) AtStart() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTextCursor_atStart(this.h))
}

func (this *QTextCursor) AtEnd() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTextCursor_atEnd(this.h))
}

func (this *QTextCursor) InsertBlock() {
	defer runtime.KeepAlive(this)
	C.QTextCursor_insertBlock(this.h)
}

func (this *QTextCursor) InsertBlockWithFormat(format *QTextBlockFormat) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(format)
	C.QTextCursor_insertBlockWithFormat(this.h, format.cPointer())
}

func (this *QTextCursor) InsertBlock2(format *QTextBlockFormat, charFormat *QTextCharFormat) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(format)
	defer runtime.KeepAlive(charFormat)
	C.QTextCursor_insertBlock2(this.h, format.cPointer(), charFormat.cPointer())
}

func (this *QTextCursor) InsertList(format *QTextListFormat) *QTextList {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(format)
	return newQTextList(C.QTextCursor_insertList(this.h, format.cPointer()))
}

func (this *QTextCursor) InsertListWithStyle(style QTextListFormat__Style) *QTextList {
	defer runtime.KeepAlive(this)
	return newQTextList(C.QTextCursor_insertListWithStyle(this.h, (C.int)(style)))
}

func (this *QTextCursor) CreateList(format *QTextListFormat) *QTextList {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(format)
	return newQTextList(C.QTextCursor_createList(this.h, format.cPointer()))
}

func (this *QTextCursor) CreateListWithStyle(style QTextListFormat__Style) *QTextList {
	defer runtime.KeepAlive(this)
	return newQTextList(C.QTextCursor_createListWithStyle(this.h, (C.int)(style)))
}

func (this *QTextCursor) CurrentList() *QTextList {
	defer runtime.KeepAlive(this)
	return newQTextList(C.QTextCursor_currentList(this.h))
}

func (this *QTextCursor) InsertTable(rows int, cols int, format *QTextTableFormat) *QTextTable {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(format)
	return newQTextTable(C.QTextCursor_insertTable(this.h, (C.int)(rows), (C.int)(cols), format.cPointer()))
}

func (this *QTextCursor) InsertTable2(rows int, cols int) *QTextTable {
	defer runtime.KeepAlive(this)
	return newQTextTable(C.QTextCursor_insertTable2(this.h, (C.int)(rows), (C.int)(cols)))
}

func (this *QTextCursor) CurrentTable() *QTextTable {
	defer runtime.KeepAlive(this)
	return newQTextTable(C.QTextCursor_currentTable(this.h))
}

func (this *QTextCursor) InsertFrame(format *QTextFrameFormat) *QTextFrame {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(format)
	return newQTextFrame(C.QTextCursor_insertFrame(this.h, format.cPointer()))
}

func (this *QTextCursor) CurrentFrame() *QTextFrame {
	defer runtime.KeepAlive(this)
	return newQTextFrame(C.QTextCursor_currentFrame(this.h))
}

func (this *QTextCursor) InsertFragment(fragment *QTextDocumentFragment) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(fragment)
	C.QTextCursor_insertFragment(this.h, fragment.cPointer())
}

func (this *QTextCursor) InsertHtml(html string) {
	defer runtime.KeepAlive(this)
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QTextCursor_insertHtml(this.h, html_ms)
}

func (this *QTextCursor) InsertImage(format *QTextImageFormat, alignment QTextFrameFormat__Position) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(format)
	C.QTextCursor_insertImage(this.h, format.cPointer(), (C.int)(alignment))
}

func (this *QTextCursor) InsertImageWithFormat(format *QTextImageFormat) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(format)
	C.QTextCursor_insertImageWithFormat(this.h, format.cPointer())
}

func (this *QTextCursor) InsertImageWithName(name string) {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QTextCursor_insertImageWithName(this.h, name_ms)
}

func (this *QTextCursor) InsertImageWithImage(image *QImage) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(image)
	C.QTextCursor_insertImageWithImage(this.h, image.cPointer())
}

func (this *QTextCursor) BeginEditBlock() {
	defer runtime.KeepAlive(this)
	C.QTextCursor_beginEditBlock(this.h)
}

func (this *QTextCursor) JoinPreviousEditBlock() {
	defer runtime.KeepAlive(this)
	C.QTextCursor_joinPreviousEditBlock(this.h)
}

func (this *QTextCursor) EndEditBlock() {
	defer runtime.KeepAlive(this)
	C.QTextCursor_endEditBlock(this.h)
}

func (this *QTextCursor) OperatorNotEqual(rhs *QTextCursor) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rhs)
	return (bool)(C.QTextCursor_operatorNotEqual(this.h, rhs.cPointer()))
}

func (this *QTextCursor) OperatorLesser(rhs *QTextCursor) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rhs)
	return (bool)(C.QTextCursor_operatorLesser(this.h, rhs.cPointer()))
}

func (this *QTextCursor) OperatorLesserOrEqual(rhs *QTextCursor) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rhs)
	return (bool)(C.QTextCursor_operatorLesserOrEqual(this.h, rhs.cPointer()))
}

func (this *QTextCursor) OperatorEqual(rhs *QTextCursor) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rhs)
	return (bool)(C.QTextCursor_operatorEqual(this.h, rhs.cPointer()))
}

func (this *QTextCursor) OperatorGreaterOrEqual(rhs *QTextCursor) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rhs)
	return (bool)(C.QTextCursor_operatorGreaterOrEqual(this.h, rhs.cPointer()))
}

func (this *QTextCursor) OperatorGreater(rhs *QTextCursor) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rhs)
	return (bool)(C.QTextCursor_operatorGreater(this.h, rhs.cPointer()))
}

func (this *QTextCursor) IsCopyOf(other *QTextCursor) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	return (bool)(C.QTextCursor_isCopyOf(this.h, other.cPointer()))
}

func (this *QTextCursor) BlockNumber() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTextCursor_blockNumber(this.h))
}

func (this *QTextCursor) ColumnNumber() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTextCursor_columnNumber(this.h))
}

func (this *QTextCursor) Document() *QTextDocument {
	defer runtime.KeepAlive(this)
	return newQTextDocument(C.QTextCursor_document(this.h))
}

func (this *QTextCursor) SetPosition2(pos int, mode QTextCursor__MoveMode) {
	defer runtime.KeepAlive(this)
	C.QTextCursor_setPosition2(this.h, (C.int)(pos), (C.int)(mode))
}

func (this *QTextCursor) MovePosition2(op QTextCursor__MoveOperation, param2 QTextCursor__MoveMode) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTextCursor_movePosition2(this.h, (C.int)(op), (C.int)(param2)))
}

func (this *QTextCursor) MovePosition3(op QTextCursor__MoveOperation, param2 QTextCursor__MoveMode, n int) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QTextCursor_movePosition3(this.h, (C.int)(op), (C.int)(param2), (C.int)(n)))
}

func (this *QTextCursor) InsertImage2(image *QImage, name string) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(image)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QTextCursor_insertImage2(this.h, image.cPointer(), name_ms)
}

// Delete this object from C++ memory.
func (this *QTextCursor) Delete() {
	C.QTextCursor_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QTextCursor) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QTextCursor_delete((*C.QTextCursor)(gc[0]))
	})
	this.miqtSetGC(gc)
}
