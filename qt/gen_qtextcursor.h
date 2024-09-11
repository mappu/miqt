#ifndef GEN_QTEXTCURSOR_H
#define GEN_QTEXTCURSOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
void QTextCursor_OperatorAssign(QTextCursor* self, QTextCursor* other);
void QTextCursor_Swap(QTextCursor* self, QTextCursor* other);
bool QTextCursor_IsNull(const QTextCursor* self);
void QTextCursor_SetPosition(QTextCursor* self, int pos);
int QTextCursor_Position(const QTextCursor* self);
int QTextCursor_PositionInBlock(const QTextCursor* self);
int QTextCursor_Anchor(const QTextCursor* self);
void QTextCursor_InsertText(QTextCursor* self, const char* text, size_t text_Strlen);
void QTextCursor_InsertText2(QTextCursor* self, const char* text, size_t text_Strlen, QTextCharFormat* format);
bool QTextCursor_MovePosition(QTextCursor* self, uintptr_t op);
bool QTextCursor_VisualNavigation(const QTextCursor* self);
void QTextCursor_SetVisualNavigation(QTextCursor* self, bool b);
void QTextCursor_SetVerticalMovementX(QTextCursor* self, int x);
int QTextCursor_VerticalMovementX(const QTextCursor* self);
void QTextCursor_SetKeepPositionOnInsert(QTextCursor* self, bool b);
bool QTextCursor_KeepPositionOnInsert(const QTextCursor* self);
void QTextCursor_DeleteChar(QTextCursor* self);
void QTextCursor_DeletePreviousChar(QTextCursor* self);
void QTextCursor_Select(QTextCursor* self, uintptr_t selection);
bool QTextCursor_HasSelection(const QTextCursor* self);
bool QTextCursor_HasComplexSelection(const QTextCursor* self);
void QTextCursor_RemoveSelectedText(QTextCursor* self);
void QTextCursor_ClearSelection(QTextCursor* self);
int QTextCursor_SelectionStart(const QTextCursor* self);
int QTextCursor_SelectionEnd(const QTextCursor* self);
void QTextCursor_SelectedText(const QTextCursor* self, char** _out, int* _out_Strlen);
QTextDocumentFragment* QTextCursor_Selection(const QTextCursor* self);
void QTextCursor_SelectedTableCells(const QTextCursor* self, int* firstRow, int* numRows, int* firstColumn, int* numColumns);
QTextBlock* QTextCursor_Block(const QTextCursor* self);
QTextCharFormat* QTextCursor_CharFormat(const QTextCursor* self);
void QTextCursor_SetCharFormat(QTextCursor* self, QTextCharFormat* format);
void QTextCursor_MergeCharFormat(QTextCursor* self, QTextCharFormat* modifier);
QTextBlockFormat* QTextCursor_BlockFormat(const QTextCursor* self);
void QTextCursor_SetBlockFormat(QTextCursor* self, QTextBlockFormat* format);
void QTextCursor_MergeBlockFormat(QTextCursor* self, QTextBlockFormat* modifier);
QTextCharFormat* QTextCursor_BlockCharFormat(const QTextCursor* self);
void QTextCursor_SetBlockCharFormat(QTextCursor* self, QTextCharFormat* format);
void QTextCursor_MergeBlockCharFormat(QTextCursor* self, QTextCharFormat* modifier);
bool QTextCursor_AtBlockStart(const QTextCursor* self);
bool QTextCursor_AtBlockEnd(const QTextCursor* self);
bool QTextCursor_AtStart(const QTextCursor* self);
bool QTextCursor_AtEnd(const QTextCursor* self);
void QTextCursor_InsertBlock(QTextCursor* self);
void QTextCursor_InsertBlockWithFormat(QTextCursor* self, QTextBlockFormat* format);
void QTextCursor_InsertBlock2(QTextCursor* self, QTextBlockFormat* format, QTextCharFormat* charFormat);
QTextList* QTextCursor_InsertList(QTextCursor* self, QTextListFormat* format);
QTextList* QTextCursor_InsertListWithStyle(QTextCursor* self, uintptr_t style);
QTextList* QTextCursor_CreateList(QTextCursor* self, QTextListFormat* format);
QTextList* QTextCursor_CreateListWithStyle(QTextCursor* self, uintptr_t style);
QTextList* QTextCursor_CurrentList(const QTextCursor* self);
QTextTable* QTextCursor_InsertTable(QTextCursor* self, int rows, int cols, QTextTableFormat* format);
QTextTable* QTextCursor_InsertTable2(QTextCursor* self, int rows, int cols);
QTextTable* QTextCursor_CurrentTable(const QTextCursor* self);
QTextFrame* QTextCursor_InsertFrame(QTextCursor* self, QTextFrameFormat* format);
QTextFrame* QTextCursor_CurrentFrame(const QTextCursor* self);
void QTextCursor_InsertFragment(QTextCursor* self, QTextDocumentFragment* fragment);
void QTextCursor_InsertHtml(QTextCursor* self, const char* html, size_t html_Strlen);
void QTextCursor_InsertImage(QTextCursor* self, QTextImageFormat* format, uintptr_t alignment);
void QTextCursor_InsertImageWithFormat(QTextCursor* self, QTextImageFormat* format);
void QTextCursor_InsertImageWithName(QTextCursor* self, const char* name, size_t name_Strlen);
void QTextCursor_InsertImageWithImage(QTextCursor* self, QImage* image);
void QTextCursor_BeginEditBlock(QTextCursor* self);
void QTextCursor_JoinPreviousEditBlock(QTextCursor* self);
void QTextCursor_EndEditBlock(QTextCursor* self);
bool QTextCursor_OperatorNotEqual(const QTextCursor* self, QTextCursor* rhs);
bool QTextCursor_OperatorLesser(const QTextCursor* self, QTextCursor* rhs);
bool QTextCursor_OperatorLesserOrEqual(const QTextCursor* self, QTextCursor* rhs);
bool QTextCursor_OperatorEqual(const QTextCursor* self, QTextCursor* rhs);
bool QTextCursor_OperatorGreaterOrEqual(const QTextCursor* self, QTextCursor* rhs);
bool QTextCursor_OperatorGreater(const QTextCursor* self, QTextCursor* rhs);
bool QTextCursor_IsCopyOf(const QTextCursor* self, QTextCursor* other);
int QTextCursor_BlockNumber(const QTextCursor* self);
int QTextCursor_ColumnNumber(const QTextCursor* self);
QTextDocument* QTextCursor_Document(const QTextCursor* self);
void QTextCursor_SetPosition2(QTextCursor* self, int pos, uintptr_t mode);
bool QTextCursor_MovePosition2(QTextCursor* self, uintptr_t op, uintptr_t param2);
bool QTextCursor_MovePosition3(QTextCursor* self, uintptr_t op, uintptr_t param2, int n);
void QTextCursor_InsertImage2(QTextCursor* self, QImage* image, const char* name, size_t name_Strlen);
void QTextCursor_Delete(QTextCursor* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
