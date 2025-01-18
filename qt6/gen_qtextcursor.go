package qt6

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
	h *C.QTextCursor
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

	return newQTextCursor(C.QTextCursor_new2(document.cPointer()))
}

// NewQTextCursor3 constructs a new QTextCursor object.
func NewQTextCursor3(frame *QTextFrame) *QTextCursor {

	return newQTextCursor(C.QTextCursor_new3(frame.cPointer()))
}

// NewQTextCursor4 constructs a new QTextCursor object.
func NewQTextCursor4(block *QTextBlock) *QTextCursor {

	return newQTextCursor(C.QTextCursor_new4(block.cPointer()))
}

// NewQTextCursor5 constructs a new QTextCursor object.
func NewQTextCursor5(cursor *QTextCursor) *QTextCursor {

	return newQTextCursor(C.QTextCursor_new5(cursor.cPointer()))
}

func (this *QTextCursor) OperatorAssign(other *QTextCursor) {
	C.QTextCursor_OperatorAssign(this.h, other.cPointer())
}

func (this *QTextCursor) Swap(other *QTextCursor) {
	C.QTextCursor_Swap(this.h, other.cPointer())
}

func (this *QTextCursor) IsNull() bool {
	return (bool)(C.QTextCursor_IsNull(this.h))
}

func (this *QTextCursor) SetPosition(pos int) {
	C.QTextCursor_SetPosition(this.h, (C.int)(pos))
}

func (this *QTextCursor) Position() int {
	return (int)(C.QTextCursor_Position(this.h))
}

func (this *QTextCursor) PositionInBlock() int {
	return (int)(C.QTextCursor_PositionInBlock(this.h))
}

func (this *QTextCursor) Anchor() int {
	return (int)(C.QTextCursor_Anchor(this.h))
}

func (this *QTextCursor) InsertText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTextCursor_InsertText(this.h, text_ms)
}

func (this *QTextCursor) InsertText2(text string, format *QTextCharFormat) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QTextCursor_InsertText2(this.h, text_ms, format.cPointer())
}

func (this *QTextCursor) MovePosition(op QTextCursor__MoveOperation) bool {
	return (bool)(C.QTextCursor_MovePosition(this.h, (C.int)(op)))
}

func (this *QTextCursor) VisualNavigation() bool {
	return (bool)(C.QTextCursor_VisualNavigation(this.h))
}

func (this *QTextCursor) SetVisualNavigation(b bool) {
	C.QTextCursor_SetVisualNavigation(this.h, (C.bool)(b))
}

func (this *QTextCursor) SetVerticalMovementX(x int) {
	C.QTextCursor_SetVerticalMovementX(this.h, (C.int)(x))
}

func (this *QTextCursor) VerticalMovementX() int {
	return (int)(C.QTextCursor_VerticalMovementX(this.h))
}

func (this *QTextCursor) SetKeepPositionOnInsert(b bool) {
	C.QTextCursor_SetKeepPositionOnInsert(this.h, (C.bool)(b))
}

func (this *QTextCursor) KeepPositionOnInsert() bool {
	return (bool)(C.QTextCursor_KeepPositionOnInsert(this.h))
}

func (this *QTextCursor) DeleteChar() {
	C.QTextCursor_DeleteChar(this.h)
}

func (this *QTextCursor) DeletePreviousChar() {
	C.QTextCursor_DeletePreviousChar(this.h)
}

func (this *QTextCursor) Select(selection QTextCursor__SelectionType) {
	C.QTextCursor_Select(this.h, (C.int)(selection))
}

func (this *QTextCursor) HasSelection() bool {
	return (bool)(C.QTextCursor_HasSelection(this.h))
}

func (this *QTextCursor) HasComplexSelection() bool {
	return (bool)(C.QTextCursor_HasComplexSelection(this.h))
}

func (this *QTextCursor) RemoveSelectedText() {
	C.QTextCursor_RemoveSelectedText(this.h)
}

func (this *QTextCursor) ClearSelection() {
	C.QTextCursor_ClearSelection(this.h)
}

func (this *QTextCursor) SelectionStart() int {
	return (int)(C.QTextCursor_SelectionStart(this.h))
}

func (this *QTextCursor) SelectionEnd() int {
	return (int)(C.QTextCursor_SelectionEnd(this.h))
}

func (this *QTextCursor) SelectedText() string {
	var _ms C.struct_miqt_string = C.QTextCursor_SelectedText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextCursor) Selection() *QTextDocumentFragment {
	_goptr := newQTextDocumentFragment(C.QTextCursor_Selection(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCursor) SelectedTableCells(firstRow *int, numRows *int, firstColumn *int, numColumns *int) {
	C.QTextCursor_SelectedTableCells(this.h, (*C.int)(unsafe.Pointer(firstRow)), (*C.int)(unsafe.Pointer(numRows)), (*C.int)(unsafe.Pointer(firstColumn)), (*C.int)(unsafe.Pointer(numColumns)))
}

func (this *QTextCursor) Block() *QTextBlock {
	_goptr := newQTextBlock(C.QTextCursor_Block(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCursor) CharFormat() *QTextCharFormat {
	_goptr := newQTextCharFormat(C.QTextCursor_CharFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCursor) SetCharFormat(format *QTextCharFormat) {
	C.QTextCursor_SetCharFormat(this.h, format.cPointer())
}

func (this *QTextCursor) MergeCharFormat(modifier *QTextCharFormat) {
	C.QTextCursor_MergeCharFormat(this.h, modifier.cPointer())
}

func (this *QTextCursor) BlockFormat() *QTextBlockFormat {
	_goptr := newQTextBlockFormat(C.QTextCursor_BlockFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCursor) SetBlockFormat(format *QTextBlockFormat) {
	C.QTextCursor_SetBlockFormat(this.h, format.cPointer())
}

func (this *QTextCursor) MergeBlockFormat(modifier *QTextBlockFormat) {
	C.QTextCursor_MergeBlockFormat(this.h, modifier.cPointer())
}

func (this *QTextCursor) BlockCharFormat() *QTextCharFormat {
	_goptr := newQTextCharFormat(C.QTextCursor_BlockCharFormat(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextCursor) SetBlockCharFormat(format *QTextCharFormat) {
	C.QTextCursor_SetBlockCharFormat(this.h, format.cPointer())
}

func (this *QTextCursor) MergeBlockCharFormat(modifier *QTextCharFormat) {
	C.QTextCursor_MergeBlockCharFormat(this.h, modifier.cPointer())
}

func (this *QTextCursor) AtBlockStart() bool {
	return (bool)(C.QTextCursor_AtBlockStart(this.h))
}

func (this *QTextCursor) AtBlockEnd() bool {
	return (bool)(C.QTextCursor_AtBlockEnd(this.h))
}

func (this *QTextCursor) AtStart() bool {
	return (bool)(C.QTextCursor_AtStart(this.h))
}

func (this *QTextCursor) AtEnd() bool {
	return (bool)(C.QTextCursor_AtEnd(this.h))
}

func (this *QTextCursor) InsertBlock() {
	C.QTextCursor_InsertBlock(this.h)
}

func (this *QTextCursor) InsertBlockWithFormat(format *QTextBlockFormat) {
	C.QTextCursor_InsertBlockWithFormat(this.h, format.cPointer())
}

func (this *QTextCursor) InsertBlock2(format *QTextBlockFormat, charFormat *QTextCharFormat) {
	C.QTextCursor_InsertBlock2(this.h, format.cPointer(), charFormat.cPointer())
}

func (this *QTextCursor) InsertList(format *QTextListFormat) *QTextList {
	return newQTextList(C.QTextCursor_InsertList(this.h, format.cPointer()))
}

func (this *QTextCursor) InsertListWithStyle(style QTextListFormat__Style) *QTextList {
	return newQTextList(C.QTextCursor_InsertListWithStyle(this.h, (C.int)(style)))
}

func (this *QTextCursor) CreateList(format *QTextListFormat) *QTextList {
	return newQTextList(C.QTextCursor_CreateList(this.h, format.cPointer()))
}

func (this *QTextCursor) CreateListWithStyle(style QTextListFormat__Style) *QTextList {
	return newQTextList(C.QTextCursor_CreateListWithStyle(this.h, (C.int)(style)))
}

func (this *QTextCursor) CurrentList() *QTextList {
	return newQTextList(C.QTextCursor_CurrentList(this.h))
}

func (this *QTextCursor) InsertTable(rows int, cols int, format *QTextTableFormat) *QTextTable {
	return newQTextTable(C.QTextCursor_InsertTable(this.h, (C.int)(rows), (C.int)(cols), format.cPointer()))
}

func (this *QTextCursor) InsertTable2(rows int, cols int) *QTextTable {
	return newQTextTable(C.QTextCursor_InsertTable2(this.h, (C.int)(rows), (C.int)(cols)))
}

func (this *QTextCursor) CurrentTable() *QTextTable {
	return newQTextTable(C.QTextCursor_CurrentTable(this.h))
}

func (this *QTextCursor) InsertFrame(format *QTextFrameFormat) *QTextFrame {
	return newQTextFrame(C.QTextCursor_InsertFrame(this.h, format.cPointer()))
}

func (this *QTextCursor) CurrentFrame() *QTextFrame {
	return newQTextFrame(C.QTextCursor_CurrentFrame(this.h))
}

func (this *QTextCursor) InsertFragment(fragment *QTextDocumentFragment) {
	C.QTextCursor_InsertFragment(this.h, fragment.cPointer())
}

func (this *QTextCursor) InsertHtml(html string) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QTextCursor_InsertHtml(this.h, html_ms)
}

func (this *QTextCursor) InsertMarkdown(markdown string) {
	markdown_ms := C.struct_miqt_string{}
	markdown_ms.data = C.CString(markdown)
	markdown_ms.len = C.size_t(len(markdown))
	defer C.free(unsafe.Pointer(markdown_ms.data))
	C.QTextCursor_InsertMarkdown(this.h, markdown_ms)
}

func (this *QTextCursor) InsertImage(format *QTextImageFormat, alignment QTextFrameFormat__Position) {
	C.QTextCursor_InsertImage(this.h, format.cPointer(), (C.int)(alignment))
}

func (this *QTextCursor) InsertImageWithFormat(format *QTextImageFormat) {
	C.QTextCursor_InsertImageWithFormat(this.h, format.cPointer())
}

func (this *QTextCursor) InsertImageWithName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QTextCursor_InsertImageWithName(this.h, name_ms)
}

func (this *QTextCursor) InsertImageWithImage(image *QImage) {
	C.QTextCursor_InsertImageWithImage(this.h, image.cPointer())
}

func (this *QTextCursor) BeginEditBlock() {
	C.QTextCursor_BeginEditBlock(this.h)
}

func (this *QTextCursor) JoinPreviousEditBlock() {
	C.QTextCursor_JoinPreviousEditBlock(this.h)
}

func (this *QTextCursor) EndEditBlock() {
	C.QTextCursor_EndEditBlock(this.h)
}

func (this *QTextCursor) OperatorNotEqual(rhs *QTextCursor) bool {
	return (bool)(C.QTextCursor_OperatorNotEqual(this.h, rhs.cPointer()))
}

func (this *QTextCursor) OperatorLesser(rhs *QTextCursor) bool {
	return (bool)(C.QTextCursor_OperatorLesser(this.h, rhs.cPointer()))
}

func (this *QTextCursor) OperatorLesserOrEqual(rhs *QTextCursor) bool {
	return (bool)(C.QTextCursor_OperatorLesserOrEqual(this.h, rhs.cPointer()))
}

func (this *QTextCursor) OperatorEqual(rhs *QTextCursor) bool {
	return (bool)(C.QTextCursor_OperatorEqual(this.h, rhs.cPointer()))
}

func (this *QTextCursor) OperatorGreaterOrEqual(rhs *QTextCursor) bool {
	return (bool)(C.QTextCursor_OperatorGreaterOrEqual(this.h, rhs.cPointer()))
}

func (this *QTextCursor) OperatorGreater(rhs *QTextCursor) bool {
	return (bool)(C.QTextCursor_OperatorGreater(this.h, rhs.cPointer()))
}

func (this *QTextCursor) IsCopyOf(other *QTextCursor) bool {
	return (bool)(C.QTextCursor_IsCopyOf(this.h, other.cPointer()))
}

func (this *QTextCursor) BlockNumber() int {
	return (int)(C.QTextCursor_BlockNumber(this.h))
}

func (this *QTextCursor) ColumnNumber() int {
	return (int)(C.QTextCursor_ColumnNumber(this.h))
}

func (this *QTextCursor) Document() *QTextDocument {
	return newQTextDocument(C.QTextCursor_Document(this.h))
}

func (this *QTextCursor) SetPosition2(pos int, mode QTextCursor__MoveMode) {
	C.QTextCursor_SetPosition2(this.h, (C.int)(pos), (C.int)(mode))
}

func (this *QTextCursor) MovePosition2(op QTextCursor__MoveOperation, param2 QTextCursor__MoveMode) bool {
	return (bool)(C.QTextCursor_MovePosition2(this.h, (C.int)(op), (C.int)(param2)))
}

func (this *QTextCursor) MovePosition3(op QTextCursor__MoveOperation, param2 QTextCursor__MoveMode, n int) bool {
	return (bool)(C.QTextCursor_MovePosition3(this.h, (C.int)(op), (C.int)(param2), (C.int)(n)))
}

func (this *QTextCursor) InsertMarkdown2(markdown string, features QTextDocument__MarkdownFeature) {
	markdown_ms := C.struct_miqt_string{}
	markdown_ms.data = C.CString(markdown)
	markdown_ms.len = C.size_t(len(markdown))
	defer C.free(unsafe.Pointer(markdown_ms.data))
	C.QTextCursor_InsertMarkdown2(this.h, markdown_ms, (C.int)(features))
}

func (this *QTextCursor) InsertImage2(image *QImage, name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QTextCursor_InsertImage2(this.h, image.cPointer(), name_ms)
}

// Delete this object from C++ memory.
func (this *QTextCursor) Delete() {
	C.QTextCursor_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextCursor) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextCursor) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
