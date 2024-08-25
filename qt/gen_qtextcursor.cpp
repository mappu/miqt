#include "gen_qtextcursor.h"
#include "qtextcursor.h"

#include <QImage>
#include <QString>
#include <QTextBlock>
#include <QTextBlockFormat>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextDocumentFragment>
#include <QTextFrame>
#include <QTextFrameFormat>
#include <QTextImageFormat>
#include <QTextList>
#include <QTextListFormat>
#include <QTextTable>
#include <QTextTableFormat>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTextCursor* QTextCursor_new() {
	return new QTextCursor();
}

QTextCursor* QTextCursor_new2(QTextDocument* document) {
	return new QTextCursor(document);
}

QTextCursor* QTextCursor_new3(QTextFrame* frame) {
	return new QTextCursor(frame);
}

QTextCursor* QTextCursor_new4(QTextBlock* block) {
	return new QTextCursor(*block);
}

QTextCursor* QTextCursor_new5(QTextCursor* cursor) {
	return new QTextCursor(*cursor);
}

void QTextCursor_OperatorAssign(QTextCursor* self, QTextCursor* other) {
	self->operator=(*other);
}

void QTextCursor_Swap(QTextCursor* self, QTextCursor* other) {
	self->swap(*other);
}

bool QTextCursor_IsNull(QTextCursor* self) {
	return self->isNull();
}

int QTextCursor_Position(QTextCursor* self) {
	return self->position();
}

int QTextCursor_PositionInBlock(QTextCursor* self) {
	return self->positionInBlock();
}

int QTextCursor_Anchor(QTextCursor* self) {
	return self->anchor();
}

void QTextCursor_InsertText(QTextCursor* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->insertText(text_QString);
}

void QTextCursor_InsertText2(QTextCursor* self, const char* text, size_t text_Strlen, QTextCharFormat* format) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	self->insertText(text_QString, *format);
}

bool QTextCursor_VisualNavigation(QTextCursor* self) {
	return self->visualNavigation();
}

void QTextCursor_SetVisualNavigation(QTextCursor* self, bool b) {
	self->setVisualNavigation(b);
}

void QTextCursor_SetVerticalMovementX(QTextCursor* self, int x) {
	self->setVerticalMovementX(static_cast<int>(x));
}

int QTextCursor_VerticalMovementX(QTextCursor* self) {
	return self->verticalMovementX();
}

void QTextCursor_SetKeepPositionOnInsert(QTextCursor* self, bool b) {
	self->setKeepPositionOnInsert(b);
}

bool QTextCursor_KeepPositionOnInsert(QTextCursor* self) {
	return self->keepPositionOnInsert();
}

void QTextCursor_DeleteChar(QTextCursor* self) {
	self->deleteChar();
}

void QTextCursor_DeletePreviousChar(QTextCursor* self) {
	self->deletePreviousChar();
}

bool QTextCursor_HasSelection(QTextCursor* self) {
	return self->hasSelection();
}

bool QTextCursor_HasComplexSelection(QTextCursor* self) {
	return self->hasComplexSelection();
}

void QTextCursor_RemoveSelectedText(QTextCursor* self) {
	self->removeSelectedText();
}

void QTextCursor_ClearSelection(QTextCursor* self) {
	self->clearSelection();
}

int QTextCursor_SelectionStart(QTextCursor* self) {
	return self->selectionStart();
}

int QTextCursor_SelectionEnd(QTextCursor* self) {
	return self->selectionEnd();
}

void QTextCursor_SelectedText(QTextCursor* self, char** _out, int* _out_Strlen) {
	QString ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QTextDocumentFragment* QTextCursor_Selection(QTextCursor* self) {
	QTextDocumentFragment ret = self->selection();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextDocumentFragment*>(new QTextDocumentFragment(ret));
}

void QTextCursor_SelectedTableCells(QTextCursor* self, int* firstRow, int* numRows, int* firstColumn, int* numColumns) {
	self->selectedTableCells(static_cast<int*>(firstRow), static_cast<int*>(numRows), static_cast<int*>(firstColumn), static_cast<int*>(numColumns));
}

QTextBlock* QTextCursor_Block(QTextCursor* self) {
	QTextBlock ret = self->block();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlock*>(new QTextBlock(ret));
}

QTextCharFormat* QTextCursor_CharFormat(QTextCursor* self) {
	QTextCharFormat ret = self->charFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCharFormat*>(new QTextCharFormat(ret));
}

void QTextCursor_SetCharFormat(QTextCursor* self, QTextCharFormat* format) {
	self->setCharFormat(*format);
}

void QTextCursor_MergeCharFormat(QTextCursor* self, QTextCharFormat* modifier) {
	self->mergeCharFormat(*modifier);
}

QTextBlockFormat* QTextCursor_BlockFormat(QTextCursor* self) {
	QTextBlockFormat ret = self->blockFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextBlockFormat*>(new QTextBlockFormat(ret));
}

void QTextCursor_SetBlockFormat(QTextCursor* self, QTextBlockFormat* format) {
	self->setBlockFormat(*format);
}

void QTextCursor_MergeBlockFormat(QTextCursor* self, QTextBlockFormat* modifier) {
	self->mergeBlockFormat(*modifier);
}

QTextCharFormat* QTextCursor_BlockCharFormat(QTextCursor* self) {
	QTextCharFormat ret = self->blockCharFormat();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTextCharFormat*>(new QTextCharFormat(ret));
}

void QTextCursor_SetBlockCharFormat(QTextCursor* self, QTextCharFormat* format) {
	self->setBlockCharFormat(*format);
}

void QTextCursor_MergeBlockCharFormat(QTextCursor* self, QTextCharFormat* modifier) {
	self->mergeBlockCharFormat(*modifier);
}

bool QTextCursor_AtBlockStart(QTextCursor* self) {
	return self->atBlockStart();
}

bool QTextCursor_AtBlockEnd(QTextCursor* self) {
	return self->atBlockEnd();
}

bool QTextCursor_AtStart(QTextCursor* self) {
	return self->atStart();
}

bool QTextCursor_AtEnd(QTextCursor* self) {
	return self->atEnd();
}

void QTextCursor_InsertBlock(QTextCursor* self) {
	self->insertBlock();
}

void QTextCursor_InsertBlockWithFormat(QTextCursor* self, QTextBlockFormat* format) {
	self->insertBlock(*format);
}

void QTextCursor_InsertBlock2(QTextCursor* self, QTextBlockFormat* format, QTextCharFormat* charFormat) {
	self->insertBlock(*format, *charFormat);
}

QTextList* QTextCursor_InsertList(QTextCursor* self, QTextListFormat* format) {
	return self->insertList(*format);
}

QTextList* QTextCursor_CreateList(QTextCursor* self, QTextListFormat* format) {
	return self->createList(*format);
}

QTextList* QTextCursor_CurrentList(QTextCursor* self) {
	return self->currentList();
}

QTextTable* QTextCursor_InsertTable(QTextCursor* self, int rows, int cols, QTextTableFormat* format) {
	return self->insertTable(static_cast<int>(rows), static_cast<int>(cols), *format);
}

QTextTable* QTextCursor_InsertTable2(QTextCursor* self, int rows, int cols) {
	return self->insertTable(static_cast<int>(rows), static_cast<int>(cols));
}

QTextTable* QTextCursor_CurrentTable(QTextCursor* self) {
	return self->currentTable();
}

QTextFrame* QTextCursor_InsertFrame(QTextCursor* self, QTextFrameFormat* format) {
	return self->insertFrame(*format);
}

QTextFrame* QTextCursor_CurrentFrame(QTextCursor* self) {
	return self->currentFrame();
}

void QTextCursor_InsertFragment(QTextCursor* self, QTextDocumentFragment* fragment) {
	self->insertFragment(*fragment);
}

void QTextCursor_InsertHtml(QTextCursor* self, const char* html, size_t html_Strlen) {
	QString html_QString = QString::fromUtf8(html, html_Strlen);
	self->insertHtml(html_QString);
}

void QTextCursor_InsertImage(QTextCursor* self, QTextImageFormat* format) {
	self->insertImage(*format);
}

void QTextCursor_InsertImageWithName(QTextCursor* self, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->insertImage(name_QString);
}

void QTextCursor_InsertImageWithImage(QTextCursor* self, QImage* image) {
	self->insertImage(*image);
}

void QTextCursor_BeginEditBlock(QTextCursor* self) {
	self->beginEditBlock();
}

void QTextCursor_JoinPreviousEditBlock(QTextCursor* self) {
	self->joinPreviousEditBlock();
}

void QTextCursor_EndEditBlock(QTextCursor* self) {
	self->endEditBlock();
}

bool QTextCursor_OperatorNotEqual(QTextCursor* self, QTextCursor* rhs) {
	return self->operator!=(*rhs);
}

bool QTextCursor_OperatorLesser(QTextCursor* self, QTextCursor* rhs) {
	return self->operator<(*rhs);
}

bool QTextCursor_OperatorLesserOrEqual(QTextCursor* self, QTextCursor* rhs) {
	return self->operator<=(*rhs);
}

bool QTextCursor_OperatorEqual(QTextCursor* self, QTextCursor* rhs) {
	return self->operator==(*rhs);
}

bool QTextCursor_OperatorGreaterOrEqual(QTextCursor* self, QTextCursor* rhs) {
	return self->operator>=(*rhs);
}

bool QTextCursor_OperatorGreater(QTextCursor* self, QTextCursor* rhs) {
	return self->operator>(*rhs);
}

bool QTextCursor_IsCopyOf(QTextCursor* self, QTextCursor* other) {
	return self->isCopyOf(*other);
}

int QTextCursor_BlockNumber(QTextCursor* self) {
	return self->blockNumber();
}

int QTextCursor_ColumnNumber(QTextCursor* self) {
	return self->columnNumber();
}

QTextDocument* QTextCursor_Document(QTextCursor* self) {
	return self->document();
}

void QTextCursor_InsertImage2(QTextCursor* self, QImage* image, const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	self->insertImage(*image, name_QString);
}

void QTextCursor_Delete(QTextCursor* self) {
	delete self;
}

