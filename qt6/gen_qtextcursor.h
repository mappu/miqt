#pragma once
#ifndef MIQT_QT6_GEN_QTEXTCURSOR_H
#define MIQT_QT6_GEN_QTEXTCURSOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QImage;
class QTextBlock;
class QTextBlockFormat;
class QTextCharFormat;
class QTextCursor;
class QTextDocument;
class QTextDocumentFragment;
class QTextFrame;
class QTextFrameFormat;
class QTextImageFormat;
class QTextList;
class QTextListFormat;
class QTextTable;
class QTextTableFormat;
#else
typedef struct QImage QImage;
typedef struct QTextBlock QTextBlock;
typedef struct QTextBlockFormat QTextBlockFormat;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextDocumentFragment QTextDocumentFragment;
typedef struct QTextFrame QTextFrame;
typedef struct QTextFrameFormat QTextFrameFormat;
typedef struct QTextImageFormat QTextImageFormat;
typedef struct QTextList QTextList;
typedef struct QTextListFormat QTextListFormat;
typedef struct QTextTable QTextTable;
typedef struct QTextTableFormat QTextTableFormat;
#endif

QTextCursor* QTextCursor_new();
QTextCursor* QTextCursor_new2(QTextDocument* document);
QTextCursor* QTextCursor_new3(QTextFrame* frame);
QTextCursor* QTextCursor_new4(QTextBlock* block);
QTextCursor* QTextCursor_new5(QTextCursor* cursor);
void QTextCursor_operatorAssign(QTextCursor* self, QTextCursor* other);
void QTextCursor_swap(QTextCursor* self, QTextCursor* other);
bool QTextCursor_isNull(const QTextCursor* self);
void QTextCursor_setPosition(QTextCursor* self, int pos);
int QTextCursor_position(const QTextCursor* self);
int QTextCursor_positionInBlock(const QTextCursor* self);
int QTextCursor_anchor(const QTextCursor* self);
void QTextCursor_insertText(QTextCursor* self, struct miqt_string text);
void QTextCursor_insertText2(QTextCursor* self, struct miqt_string text, QTextCharFormat* format);
bool QTextCursor_movePosition(QTextCursor* self, int op);
bool QTextCursor_visualNavigation(const QTextCursor* self);
void QTextCursor_setVisualNavigation(QTextCursor* self, bool b);
void QTextCursor_setVerticalMovementX(QTextCursor* self, int x);
int QTextCursor_verticalMovementX(const QTextCursor* self);
void QTextCursor_setKeepPositionOnInsert(QTextCursor* self, bool b);
bool QTextCursor_keepPositionOnInsert(const QTextCursor* self);
void QTextCursor_deleteChar(QTextCursor* self);
void QTextCursor_deletePreviousChar(QTextCursor* self);
void QTextCursor_select(QTextCursor* self, int selection);
bool QTextCursor_hasSelection(const QTextCursor* self);
bool QTextCursor_hasComplexSelection(const QTextCursor* self);
void QTextCursor_removeSelectedText(QTextCursor* self);
void QTextCursor_clearSelection(QTextCursor* self);
int QTextCursor_selectionStart(const QTextCursor* self);
int QTextCursor_selectionEnd(const QTextCursor* self);
struct miqt_string QTextCursor_selectedText(const QTextCursor* self);
QTextDocumentFragment* QTextCursor_selection(const QTextCursor* self);
void QTextCursor_selectedTableCells(const QTextCursor* self, int* firstRow, int* numRows, int* firstColumn, int* numColumns);
QTextBlock* QTextCursor_block(const QTextCursor* self);
QTextCharFormat* QTextCursor_charFormat(const QTextCursor* self);
void QTextCursor_setCharFormat(QTextCursor* self, QTextCharFormat* format);
void QTextCursor_mergeCharFormat(QTextCursor* self, QTextCharFormat* modifier);
QTextBlockFormat* QTextCursor_blockFormat(const QTextCursor* self);
void QTextCursor_setBlockFormat(QTextCursor* self, QTextBlockFormat* format);
void QTextCursor_mergeBlockFormat(QTextCursor* self, QTextBlockFormat* modifier);
QTextCharFormat* QTextCursor_blockCharFormat(const QTextCursor* self);
void QTextCursor_setBlockCharFormat(QTextCursor* self, QTextCharFormat* format);
void QTextCursor_mergeBlockCharFormat(QTextCursor* self, QTextCharFormat* modifier);
bool QTextCursor_atBlockStart(const QTextCursor* self);
bool QTextCursor_atBlockEnd(const QTextCursor* self);
bool QTextCursor_atStart(const QTextCursor* self);
bool QTextCursor_atEnd(const QTextCursor* self);
void QTextCursor_insertBlock(QTextCursor* self);
void QTextCursor_insertBlockWithFormat(QTextCursor* self, QTextBlockFormat* format);
void QTextCursor_insertBlock2(QTextCursor* self, QTextBlockFormat* format, QTextCharFormat* charFormat);
QTextList* QTextCursor_insertList(QTextCursor* self, QTextListFormat* format);
QTextList* QTextCursor_insertListWithStyle(QTextCursor* self, int style);
QTextList* QTextCursor_createList(QTextCursor* self, QTextListFormat* format);
QTextList* QTextCursor_createListWithStyle(QTextCursor* self, int style);
QTextList* QTextCursor_currentList(const QTextCursor* self);
QTextTable* QTextCursor_insertTable(QTextCursor* self, int rows, int cols, QTextTableFormat* format);
QTextTable* QTextCursor_insertTable2(QTextCursor* self, int rows, int cols);
QTextTable* QTextCursor_currentTable(const QTextCursor* self);
QTextFrame* QTextCursor_insertFrame(QTextCursor* self, QTextFrameFormat* format);
QTextFrame* QTextCursor_currentFrame(const QTextCursor* self);
void QTextCursor_insertFragment(QTextCursor* self, QTextDocumentFragment* fragment);
void QTextCursor_insertHtml(QTextCursor* self, struct miqt_string html);
void QTextCursor_insertMarkdown(QTextCursor* self, struct miqt_string markdown);
void QTextCursor_insertImage(QTextCursor* self, QTextImageFormat* format, int alignment);
void QTextCursor_insertImageWithFormat(QTextCursor* self, QTextImageFormat* format);
void QTextCursor_insertImageWithName(QTextCursor* self, struct miqt_string name);
void QTextCursor_insertImageWithImage(QTextCursor* self, QImage* image);
void QTextCursor_beginEditBlock(QTextCursor* self);
void QTextCursor_joinPreviousEditBlock(QTextCursor* self);
void QTextCursor_endEditBlock(QTextCursor* self);
bool QTextCursor_operatorNotEqual(const QTextCursor* self, QTextCursor* rhs);
bool QTextCursor_operatorLesser(const QTextCursor* self, QTextCursor* rhs);
bool QTextCursor_operatorLesserOrEqual(const QTextCursor* self, QTextCursor* rhs);
bool QTextCursor_operatorEqual(const QTextCursor* self, QTextCursor* rhs);
bool QTextCursor_operatorGreaterOrEqual(const QTextCursor* self, QTextCursor* rhs);
bool QTextCursor_operatorGreater(const QTextCursor* self, QTextCursor* rhs);
bool QTextCursor_isCopyOf(const QTextCursor* self, QTextCursor* other);
int QTextCursor_blockNumber(const QTextCursor* self);
int QTextCursor_columnNumber(const QTextCursor* self);
QTextDocument* QTextCursor_document(const QTextCursor* self);
void QTextCursor_setPosition2(QTextCursor* self, int pos, int mode);
bool QTextCursor_movePosition2(QTextCursor* self, int op, int param2);
bool QTextCursor_movePosition3(QTextCursor* self, int op, int param2, int n);
void QTextCursor_insertMarkdown2(QTextCursor* self, struct miqt_string markdown, int features);
void QTextCursor_insertImage2(QTextCursor* self, QImage* image, struct miqt_string name);

void QTextCursor_delete(QTextCursor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
