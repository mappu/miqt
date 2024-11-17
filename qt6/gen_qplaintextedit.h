#pragma once
#ifndef MIQT_QT6_GEN_QPLAINTEXTEDIT_H
#define MIQT_QT6_GEN_QPLAINTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__PaintContext)
typedef QAbstractTextDocumentLayout::PaintContext QAbstractTextDocumentLayout__PaintContext;
#else
class QAbstractTextDocumentLayout__PaintContext;
#endif
class QMenu;
class QMetaObject;
class QPagedPaintDevice;
class QPainter;
class QPlainTextDocumentLayout;
class QPlainTextEdit;
class QPoint;
class QPointF;
class QRect;
class QRectF;
class QRegularExpression;
class QSizeF;
class QTextBlock;
class QTextCharFormat;
class QTextCursor;
class QTextDocument;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextEdit__ExtraSelection)
typedef QTextEdit::ExtraSelection QTextEdit__ExtraSelection;
#else
class QTextEdit__ExtraSelection;
#endif
class QTextFrame;
class QUrl;
class QVariant;
class QWidget;
#else
typedef struct QAbstractTextDocumentLayout__PaintContext QAbstractTextDocumentLayout__PaintContext;
typedef struct QMenu QMenu;
typedef struct QMetaObject QMetaObject;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPainter QPainter;
typedef struct QPlainTextDocumentLayout QPlainTextDocumentLayout;
typedef struct QPlainTextEdit QPlainTextEdit;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegularExpression QRegularExpression;
typedef struct QSizeF QSizeF;
typedef struct QTextBlock QTextBlock;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextEdit__ExtraSelection QTextEdit__ExtraSelection;
typedef struct QTextFrame QTextFrame;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QPlainTextEdit* QPlainTextEdit_new(QWidget* parent);
QPlainTextEdit* QPlainTextEdit_new2();
QPlainTextEdit* QPlainTextEdit_new3(struct miqt_string text);
QPlainTextEdit* QPlainTextEdit_new4(struct miqt_string text, QWidget* parent);
QMetaObject* QPlainTextEdit_MetaObject(const QPlainTextEdit* self);
void* QPlainTextEdit_Metacast(QPlainTextEdit* self, const char* param1);
struct miqt_string QPlainTextEdit_Tr(const char* s);
void QPlainTextEdit_SetDocument(QPlainTextEdit* self, QTextDocument* document);
QTextDocument* QPlainTextEdit_Document(const QPlainTextEdit* self);
void QPlainTextEdit_SetPlaceholderText(QPlainTextEdit* self, struct miqt_string placeholderText);
struct miqt_string QPlainTextEdit_PlaceholderText(const QPlainTextEdit* self);
void QPlainTextEdit_SetTextCursor(QPlainTextEdit* self, QTextCursor* cursor);
QTextCursor* QPlainTextEdit_TextCursor(const QPlainTextEdit* self);
bool QPlainTextEdit_IsReadOnly(const QPlainTextEdit* self);
void QPlainTextEdit_SetReadOnly(QPlainTextEdit* self, bool ro);
void QPlainTextEdit_SetTextInteractionFlags(QPlainTextEdit* self, int flags);
int QPlainTextEdit_TextInteractionFlags(const QPlainTextEdit* self);
void QPlainTextEdit_MergeCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* modifier);
void QPlainTextEdit_SetCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* format);
QTextCharFormat* QPlainTextEdit_CurrentCharFormat(const QPlainTextEdit* self);
bool QPlainTextEdit_TabChangesFocus(const QPlainTextEdit* self);
void QPlainTextEdit_SetTabChangesFocus(QPlainTextEdit* self, bool b);
void QPlainTextEdit_SetDocumentTitle(QPlainTextEdit* self, struct miqt_string title);
struct miqt_string QPlainTextEdit_DocumentTitle(const QPlainTextEdit* self);
bool QPlainTextEdit_IsUndoRedoEnabled(const QPlainTextEdit* self);
void QPlainTextEdit_SetUndoRedoEnabled(QPlainTextEdit* self, bool enable);
void QPlainTextEdit_SetMaximumBlockCount(QPlainTextEdit* self, int maximum);
int QPlainTextEdit_MaximumBlockCount(const QPlainTextEdit* self);
int QPlainTextEdit_LineWrapMode(const QPlainTextEdit* self);
void QPlainTextEdit_SetLineWrapMode(QPlainTextEdit* self, int mode);
int QPlainTextEdit_WordWrapMode(const QPlainTextEdit* self);
void QPlainTextEdit_SetWordWrapMode(QPlainTextEdit* self, int policy);
void QPlainTextEdit_SetBackgroundVisible(QPlainTextEdit* self, bool visible);
bool QPlainTextEdit_BackgroundVisible(const QPlainTextEdit* self);
void QPlainTextEdit_SetCenterOnScroll(QPlainTextEdit* self, bool enabled);
bool QPlainTextEdit_CenterOnScroll(const QPlainTextEdit* self);
bool QPlainTextEdit_Find(QPlainTextEdit* self, struct miqt_string exp);
bool QPlainTextEdit_FindWithExp(QPlainTextEdit* self, QRegularExpression* exp);
struct miqt_string QPlainTextEdit_ToPlainText(const QPlainTextEdit* self);
void QPlainTextEdit_EnsureCursorVisible(QPlainTextEdit* self);
QVariant* QPlainTextEdit_LoadResource(QPlainTextEdit* self, int typeVal, QUrl* name);
QMenu* QPlainTextEdit_CreateStandardContextMenu(QPlainTextEdit* self);
QMenu* QPlainTextEdit_CreateStandardContextMenuWithPosition(QPlainTextEdit* self, QPoint* position);
QTextCursor* QPlainTextEdit_CursorForPosition(const QPlainTextEdit* self, QPoint* pos);
QRect* QPlainTextEdit_CursorRect(const QPlainTextEdit* self, QTextCursor* cursor);
QRect* QPlainTextEdit_CursorRect2(const QPlainTextEdit* self);
struct miqt_string QPlainTextEdit_AnchorAt(const QPlainTextEdit* self, QPoint* pos);
bool QPlainTextEdit_OverwriteMode(const QPlainTextEdit* self);
void QPlainTextEdit_SetOverwriteMode(QPlainTextEdit* self, bool overwrite);
double QPlainTextEdit_TabStopDistance(const QPlainTextEdit* self);
void QPlainTextEdit_SetTabStopDistance(QPlainTextEdit* self, double distance);
int QPlainTextEdit_CursorWidth(const QPlainTextEdit* self);
void QPlainTextEdit_SetCursorWidth(QPlainTextEdit* self, int width);
void QPlainTextEdit_SetExtraSelections(QPlainTextEdit* self, struct miqt_array /* of QTextEdit__ExtraSelection* */  selections);
struct miqt_array /* of QTextEdit__ExtraSelection* */  QPlainTextEdit_ExtraSelections(const QPlainTextEdit* self);
void QPlainTextEdit_MoveCursor(QPlainTextEdit* self, int operation);
bool QPlainTextEdit_CanPaste(const QPlainTextEdit* self);
void QPlainTextEdit_Print(const QPlainTextEdit* self, QPagedPaintDevice* printer);
int QPlainTextEdit_BlockCount(const QPlainTextEdit* self);
QVariant* QPlainTextEdit_InputMethodQuery(const QPlainTextEdit* self, int property);
QVariant* QPlainTextEdit_InputMethodQuery2(const QPlainTextEdit* self, int query, QVariant* argument);
void QPlainTextEdit_SetPlainText(QPlainTextEdit* self, struct miqt_string text);
void QPlainTextEdit_Cut(QPlainTextEdit* self);
void QPlainTextEdit_Copy(QPlainTextEdit* self);
void QPlainTextEdit_Paste(QPlainTextEdit* self);
void QPlainTextEdit_Undo(QPlainTextEdit* self);
void QPlainTextEdit_Redo(QPlainTextEdit* self);
void QPlainTextEdit_Clear(QPlainTextEdit* self);
void QPlainTextEdit_SelectAll(QPlainTextEdit* self);
void QPlainTextEdit_InsertPlainText(QPlainTextEdit* self, struct miqt_string text);
void QPlainTextEdit_AppendPlainText(QPlainTextEdit* self, struct miqt_string text);
void QPlainTextEdit_AppendHtml(QPlainTextEdit* self, struct miqt_string html);
void QPlainTextEdit_CenterCursor(QPlainTextEdit* self);
void QPlainTextEdit_ZoomIn(QPlainTextEdit* self);
void QPlainTextEdit_ZoomOut(QPlainTextEdit* self);
void QPlainTextEdit_TextChanged(QPlainTextEdit* self);
void QPlainTextEdit_connect_TextChanged(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_UndoAvailable(QPlainTextEdit* self, bool b);
void QPlainTextEdit_connect_UndoAvailable(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_RedoAvailable(QPlainTextEdit* self, bool b);
void QPlainTextEdit_connect_RedoAvailable(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_CopyAvailable(QPlainTextEdit* self, bool b);
void QPlainTextEdit_connect_CopyAvailable(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_SelectionChanged(QPlainTextEdit* self);
void QPlainTextEdit_connect_SelectionChanged(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_CursorPositionChanged(QPlainTextEdit* self);
void QPlainTextEdit_connect_CursorPositionChanged(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_UpdateRequest(QPlainTextEdit* self, QRect* rect, int dy);
void QPlainTextEdit_connect_UpdateRequest(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_BlockCountChanged(QPlainTextEdit* self, int newBlockCount);
void QPlainTextEdit_connect_BlockCountChanged(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_ModificationChanged(QPlainTextEdit* self, bool param1);
void QPlainTextEdit_connect_ModificationChanged(QPlainTextEdit* self, intptr_t slot);
struct miqt_string QPlainTextEdit_Tr2(const char* s, const char* c);
struct miqt_string QPlainTextEdit_Tr3(const char* s, const char* c, int n);
bool QPlainTextEdit_Find2(QPlainTextEdit* self, struct miqt_string exp, int options);
bool QPlainTextEdit_Find22(QPlainTextEdit* self, QRegularExpression* exp, int options);
void QPlainTextEdit_MoveCursor2(QPlainTextEdit* self, int operation, int mode);
void QPlainTextEdit_ZoomIn1(QPlainTextEdit* self, int rangeVal);
void QPlainTextEdit_ZoomOut1(QPlainTextEdit* self, int rangeVal);
void QPlainTextEdit_Delete(QPlainTextEdit* self);

QPlainTextDocumentLayout* QPlainTextDocumentLayout_new(QTextDocument* document);
QMetaObject* QPlainTextDocumentLayout_MetaObject(const QPlainTextDocumentLayout* self);
void* QPlainTextDocumentLayout_Metacast(QPlainTextDocumentLayout* self, const char* param1);
struct miqt_string QPlainTextDocumentLayout_Tr(const char* s);
void QPlainTextDocumentLayout_Draw(QPlainTextDocumentLayout* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2);
int QPlainTextDocumentLayout_HitTest(const QPlainTextDocumentLayout* self, QPointF* param1, int param2);
int QPlainTextDocumentLayout_PageCount(const QPlainTextDocumentLayout* self);
QSizeF* QPlainTextDocumentLayout_DocumentSize(const QPlainTextDocumentLayout* self);
QRectF* QPlainTextDocumentLayout_FrameBoundingRect(const QPlainTextDocumentLayout* self, QTextFrame* param1);
QRectF* QPlainTextDocumentLayout_BlockBoundingRect(const QPlainTextDocumentLayout* self, QTextBlock* block);
void QPlainTextDocumentLayout_EnsureBlockLayout(const QPlainTextDocumentLayout* self, QTextBlock* block);
void QPlainTextDocumentLayout_SetCursorWidth(QPlainTextDocumentLayout* self, int width);
int QPlainTextDocumentLayout_CursorWidth(const QPlainTextDocumentLayout* self);
void QPlainTextDocumentLayout_RequestUpdate(QPlainTextDocumentLayout* self);
struct miqt_string QPlainTextDocumentLayout_Tr2(const char* s, const char* c);
struct miqt_string QPlainTextDocumentLayout_Tr3(const char* s, const char* c, int n);
void QPlainTextDocumentLayout_Delete(QPlainTextDocumentLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
