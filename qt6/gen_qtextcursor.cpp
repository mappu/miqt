#include <QImage>
#include <QString>
#include <QByteArray>
#include <cstring>
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
#include <qtextcursor.h>
#include "gen_qtextcursor.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

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

void QTextCursor_operatorAssign(QTextCursor* self, QTextCursor* other) {
	self->operator=(*other);
}

void QTextCursor_swap(QTextCursor* self, QTextCursor* other) {
	self->swap(*other);
}

bool QTextCursor_isNull(const QTextCursor* self) {
	return self->isNull();
}

void QTextCursor_setPosition(QTextCursor* self, int pos) {
	self->setPosition(static_cast<int>(pos));
}

int QTextCursor_position(const QTextCursor* self) {
	return self->position();
}

int QTextCursor_positionInBlock(const QTextCursor* self) {
	return self->positionInBlock();
}

int QTextCursor_anchor(const QTextCursor* self) {
	return self->anchor();
}

void QTextCursor_insertText(QTextCursor* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertText(text_QString);
}

void QTextCursor_insertText2(QTextCursor* self, struct miqt_string text, QTextCharFormat* format) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertText(text_QString, *format);
}

bool QTextCursor_movePosition(QTextCursor* self, int op) {
	return self->movePosition(static_cast<QTextCursor::MoveOperation>(op));
}

bool QTextCursor_visualNavigation(const QTextCursor* self) {
	return self->visualNavigation();
}

void QTextCursor_setVisualNavigation(QTextCursor* self, bool b) {
	self->setVisualNavigation(b);
}

void QTextCursor_setVerticalMovementX(QTextCursor* self, int x) {
	self->setVerticalMovementX(static_cast<int>(x));
}

int QTextCursor_verticalMovementX(const QTextCursor* self) {
	return self->verticalMovementX();
}

void QTextCursor_setKeepPositionOnInsert(QTextCursor* self, bool b) {
	self->setKeepPositionOnInsert(b);
}

bool QTextCursor_keepPositionOnInsert(const QTextCursor* self) {
	return self->keepPositionOnInsert();
}

void QTextCursor_deleteChar(QTextCursor* self) {
	self->deleteChar();
}

void QTextCursor_deletePreviousChar(QTextCursor* self) {
	self->deletePreviousChar();
}

void QTextCursor_select(QTextCursor* self, int selection) {
	self->select(static_cast<QTextCursor::SelectionType>(selection));
}

bool QTextCursor_hasSelection(const QTextCursor* self) {
	return self->hasSelection();
}

bool QTextCursor_hasComplexSelection(const QTextCursor* self) {
	return self->hasComplexSelection();
}

void QTextCursor_removeSelectedText(QTextCursor* self) {
	self->removeSelectedText();
}

void QTextCursor_clearSelection(QTextCursor* self) {
	self->clearSelection();
}

int QTextCursor_selectionStart(const QTextCursor* self) {
	return self->selectionStart();
}

int QTextCursor_selectionEnd(const QTextCursor* self) {
	return self->selectionEnd();
}

struct miqt_string QTextCursor_selectedText(const QTextCursor* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QTextDocumentFragment* QTextCursor_selection(const QTextCursor* self) {
	return new QTextDocumentFragment(self->selection());
}

void QTextCursor_selectedTableCells(const QTextCursor* self, int* firstRow, int* numRows, int* firstColumn, int* numColumns) {
	self->selectedTableCells(static_cast<int*>(firstRow), static_cast<int*>(numRows), static_cast<int*>(firstColumn), static_cast<int*>(numColumns));
}

QTextBlock* QTextCursor_block(const QTextCursor* self) {
	return new QTextBlock(self->block());
}

QTextCharFormat* QTextCursor_charFormat(const QTextCursor* self) {
	return new QTextCharFormat(self->charFormat());
}

void QTextCursor_setCharFormat(QTextCursor* self, QTextCharFormat* format) {
	self->setCharFormat(*format);
}

void QTextCursor_mergeCharFormat(QTextCursor* self, QTextCharFormat* modifier) {
	self->mergeCharFormat(*modifier);
}

QTextBlockFormat* QTextCursor_blockFormat(const QTextCursor* self) {
	return new QTextBlockFormat(self->blockFormat());
}

void QTextCursor_setBlockFormat(QTextCursor* self, QTextBlockFormat* format) {
	self->setBlockFormat(*format);
}

void QTextCursor_mergeBlockFormat(QTextCursor* self, QTextBlockFormat* modifier) {
	self->mergeBlockFormat(*modifier);
}

QTextCharFormat* QTextCursor_blockCharFormat(const QTextCursor* self) {
	return new QTextCharFormat(self->blockCharFormat());
}

void QTextCursor_setBlockCharFormat(QTextCursor* self, QTextCharFormat* format) {
	self->setBlockCharFormat(*format);
}

void QTextCursor_mergeBlockCharFormat(QTextCursor* self, QTextCharFormat* modifier) {
	self->mergeBlockCharFormat(*modifier);
}

bool QTextCursor_atBlockStart(const QTextCursor* self) {
	return self->atBlockStart();
}

bool QTextCursor_atBlockEnd(const QTextCursor* self) {
	return self->atBlockEnd();
}

bool QTextCursor_atStart(const QTextCursor* self) {
	return self->atStart();
}

bool QTextCursor_atEnd(const QTextCursor* self) {
	return self->atEnd();
}

void QTextCursor_insertBlock(QTextCursor* self) {
	self->insertBlock();
}

void QTextCursor_insertBlockWithFormat(QTextCursor* self, QTextBlockFormat* format) {
	self->insertBlock(*format);
}

void QTextCursor_insertBlock2(QTextCursor* self, QTextBlockFormat* format, QTextCharFormat* charFormat) {
	self->insertBlock(*format, *charFormat);
}

QTextList* QTextCursor_insertList(QTextCursor* self, QTextListFormat* format) {
	return self->insertList(*format);
}

QTextList* QTextCursor_insertListWithStyle(QTextCursor* self, int style) {
	return self->insertList(static_cast<QTextListFormat::Style>(style));
}

QTextList* QTextCursor_createList(QTextCursor* self, QTextListFormat* format) {
	return self->createList(*format);
}

QTextList* QTextCursor_createListWithStyle(QTextCursor* self, int style) {
	return self->createList(static_cast<QTextListFormat::Style>(style));
}

QTextList* QTextCursor_currentList(const QTextCursor* self) {
	return self->currentList();
}

QTextTable* QTextCursor_insertTable(QTextCursor* self, int rows, int cols, QTextTableFormat* format) {
	return self->insertTable(static_cast<int>(rows), static_cast<int>(cols), *format);
}

QTextTable* QTextCursor_insertTable2(QTextCursor* self, int rows, int cols) {
	return self->insertTable(static_cast<int>(rows), static_cast<int>(cols));
}

QTextTable* QTextCursor_currentTable(const QTextCursor* self) {
	return self->currentTable();
}

QTextFrame* QTextCursor_insertFrame(QTextCursor* self, QTextFrameFormat* format) {
	return self->insertFrame(*format);
}

QTextFrame* QTextCursor_currentFrame(const QTextCursor* self) {
	return self->currentFrame();
}

void QTextCursor_insertFragment(QTextCursor* self, QTextDocumentFragment* fragment) {
	self->insertFragment(*fragment);
}

void QTextCursor_insertHtml(QTextCursor* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->insertHtml(html_QString);
}

void QTextCursor_insertMarkdown(QTextCursor* self, struct miqt_string markdown) {
	QString markdown_QString = QString::fromUtf8(markdown.data, markdown.len);
	self->insertMarkdown(markdown_QString);
}

void QTextCursor_insertImage(QTextCursor* self, QTextImageFormat* format, int alignment) {
	self->insertImage(*format, static_cast<QTextFrameFormat::Position>(alignment));
}

void QTextCursor_insertImageWithFormat(QTextCursor* self, QTextImageFormat* format) {
	self->insertImage(*format);
}

void QTextCursor_insertImageWithName(QTextCursor* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->insertImage(name_QString);
}

void QTextCursor_insertImageWithImage(QTextCursor* self, QImage* image) {
	self->insertImage(*image);
}

void QTextCursor_beginEditBlock(QTextCursor* self) {
	self->beginEditBlock();
}

void QTextCursor_joinPreviousEditBlock(QTextCursor* self) {
	self->joinPreviousEditBlock();
}

void QTextCursor_endEditBlock(QTextCursor* self) {
	self->endEditBlock();
}

bool QTextCursor_operatorNotEqual(const QTextCursor* self, QTextCursor* rhs) {
	return (*self != *rhs);
}

bool QTextCursor_operatorLesser(const QTextCursor* self, QTextCursor* rhs) {
	return (*self < *rhs);
}

bool QTextCursor_operatorLesserOrEqual(const QTextCursor* self, QTextCursor* rhs) {
	return (*self <= *rhs);
}

bool QTextCursor_operatorEqual(const QTextCursor* self, QTextCursor* rhs) {
	return (*self == *rhs);
}

bool QTextCursor_operatorGreaterOrEqual(const QTextCursor* self, QTextCursor* rhs) {
	return (*self >= *rhs);
}

bool QTextCursor_operatorGreater(const QTextCursor* self, QTextCursor* rhs) {
	return (*self > *rhs);
}

bool QTextCursor_isCopyOf(const QTextCursor* self, QTextCursor* other) {
	return self->isCopyOf(*other);
}

int QTextCursor_blockNumber(const QTextCursor* self) {
	return self->blockNumber();
}

int QTextCursor_columnNumber(const QTextCursor* self) {
	return self->columnNumber();
}

QTextDocument* QTextCursor_document(const QTextCursor* self) {
	return self->document();
}

void QTextCursor_setPosition2(QTextCursor* self, int pos, int mode) {
	self->setPosition(static_cast<int>(pos), static_cast<QTextCursor::MoveMode>(mode));
}

bool QTextCursor_movePosition2(QTextCursor* self, int op, int param2) {
	return self->movePosition(static_cast<QTextCursor::MoveOperation>(op), static_cast<QTextCursor::MoveMode>(param2));
}

bool QTextCursor_movePosition3(QTextCursor* self, int op, int param2, int n) {
	return self->movePosition(static_cast<QTextCursor::MoveOperation>(op), static_cast<QTextCursor::MoveMode>(param2), static_cast<int>(n));
}

void QTextCursor_insertMarkdown2(QTextCursor* self, struct miqt_string markdown, int features) {
	QString markdown_QString = QString::fromUtf8(markdown.data, markdown.len);
	self->insertMarkdown(markdown_QString, static_cast<QTextDocument::MarkdownFeatures>(features));
}

void QTextCursor_insertImage2(QTextCursor* self, QImage* image, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->insertImage(*image, name_QString);
}

void QTextCursor_delete(QTextCursor* self) {
	delete self;
}

