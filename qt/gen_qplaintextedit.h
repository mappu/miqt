#ifndef GEN_QPLAINTEXTEDIT_H
#define GEN_QPLAINTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
class QRegExp;
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
typedef struct QRegExp QRegExp;
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

QPlainTextEdit* QPlainTextEdit_new();
QPlainTextEdit* QPlainTextEdit_new2(const char* text, size_t text_Strlen);
QPlainTextEdit* QPlainTextEdit_new3(QWidget* parent);
QPlainTextEdit* QPlainTextEdit_new4(const char* text, size_t text_Strlen, QWidget* parent);
QMetaObject* QPlainTextEdit_MetaObject(QPlainTextEdit* self);
void QPlainTextEdit_Tr(const char* s, char** _out, int* _out_Strlen);
void QPlainTextEdit_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QPlainTextEdit_SetDocument(QPlainTextEdit* self, QTextDocument* document);
QTextDocument* QPlainTextEdit_Document(QPlainTextEdit* self);
void QPlainTextEdit_SetPlaceholderText(QPlainTextEdit* self, const char* placeholderText, size_t placeholderText_Strlen);
void QPlainTextEdit_PlaceholderText(QPlainTextEdit* self, char** _out, int* _out_Strlen);
void QPlainTextEdit_SetTextCursor(QPlainTextEdit* self, QTextCursor* cursor);
QTextCursor* QPlainTextEdit_TextCursor(QPlainTextEdit* self);
bool QPlainTextEdit_IsReadOnly(QPlainTextEdit* self);
void QPlainTextEdit_SetReadOnly(QPlainTextEdit* self, bool ro);
void QPlainTextEdit_SetTextInteractionFlags(QPlainTextEdit* self, int flags);
int QPlainTextEdit_TextInteractionFlags(QPlainTextEdit* self);
void QPlainTextEdit_MergeCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* modifier);
void QPlainTextEdit_SetCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* format);
QTextCharFormat* QPlainTextEdit_CurrentCharFormat(QPlainTextEdit* self);
bool QPlainTextEdit_TabChangesFocus(QPlainTextEdit* self);
void QPlainTextEdit_SetTabChangesFocus(QPlainTextEdit* self, bool b);
void QPlainTextEdit_SetDocumentTitle(QPlainTextEdit* self, const char* title, size_t title_Strlen);
void QPlainTextEdit_DocumentTitle(QPlainTextEdit* self, char** _out, int* _out_Strlen);
bool QPlainTextEdit_IsUndoRedoEnabled(QPlainTextEdit* self);
void QPlainTextEdit_SetUndoRedoEnabled(QPlainTextEdit* self, bool enable);
void QPlainTextEdit_SetMaximumBlockCount(QPlainTextEdit* self, int maximum);
int QPlainTextEdit_MaximumBlockCount(QPlainTextEdit* self);
uintptr_t QPlainTextEdit_LineWrapMode(QPlainTextEdit* self);
void QPlainTextEdit_SetLineWrapMode(QPlainTextEdit* self, uintptr_t mode);
uintptr_t QPlainTextEdit_WordWrapMode(QPlainTextEdit* self);
void QPlainTextEdit_SetWordWrapMode(QPlainTextEdit* self, uintptr_t policy);
void QPlainTextEdit_SetBackgroundVisible(QPlainTextEdit* self, bool visible);
bool QPlainTextEdit_BackgroundVisible(QPlainTextEdit* self);
void QPlainTextEdit_SetCenterOnScroll(QPlainTextEdit* self, bool enabled);
bool QPlainTextEdit_CenterOnScroll(QPlainTextEdit* self);
bool QPlainTextEdit_Find(QPlainTextEdit* self, const char* exp, size_t exp_Strlen);
bool QPlainTextEdit_FindWithExp(QPlainTextEdit* self, QRegExp* exp);
bool QPlainTextEdit_Find2(QPlainTextEdit* self, QRegularExpression* exp);
void QPlainTextEdit_ToPlainText(QPlainTextEdit* self, char** _out, int* _out_Strlen);
void QPlainTextEdit_EnsureCursorVisible(QPlainTextEdit* self);
QVariant* QPlainTextEdit_LoadResource(QPlainTextEdit* self, int typeVal, QUrl* name);
QMenu* QPlainTextEdit_CreateStandardContextMenu(QPlainTextEdit* self);
QMenu* QPlainTextEdit_CreateStandardContextMenuWithPosition(QPlainTextEdit* self, QPoint* position);
QTextCursor* QPlainTextEdit_CursorForPosition(QPlainTextEdit* self, QPoint* pos);
QRect* QPlainTextEdit_CursorRect(QPlainTextEdit* self, QTextCursor* cursor);
QRect* QPlainTextEdit_CursorRect2(QPlainTextEdit* self);
void QPlainTextEdit_AnchorAt(QPlainTextEdit* self, QPoint* pos, char** _out, int* _out_Strlen);
bool QPlainTextEdit_OverwriteMode(QPlainTextEdit* self);
void QPlainTextEdit_SetOverwriteMode(QPlainTextEdit* self, bool overwrite);
int QPlainTextEdit_TabStopWidth(QPlainTextEdit* self);
void QPlainTextEdit_SetTabStopWidth(QPlainTextEdit* self, int width);
double QPlainTextEdit_TabStopDistance(QPlainTextEdit* self);
void QPlainTextEdit_SetTabStopDistance(QPlainTextEdit* self, double distance);
int QPlainTextEdit_CursorWidth(QPlainTextEdit* self);
void QPlainTextEdit_SetCursorWidth(QPlainTextEdit* self, int width);
void QPlainTextEdit_SetExtraSelections(QPlainTextEdit* self, QTextEdit__ExtraSelection** selections, size_t selections_len);
void QPlainTextEdit_ExtraSelections(QPlainTextEdit* self, QTextEdit__ExtraSelection*** _out, size_t* _out_len);
void QPlainTextEdit_MoveCursor(QPlainTextEdit* self, uintptr_t operation);
bool QPlainTextEdit_CanPaste(QPlainTextEdit* self);
void QPlainTextEdit_Print(QPlainTextEdit* self, QPagedPaintDevice* printer);
int QPlainTextEdit_BlockCount(QPlainTextEdit* self);
QVariant* QPlainTextEdit_InputMethodQuery(QPlainTextEdit* self, uintptr_t property);
QVariant* QPlainTextEdit_InputMethodQuery2(QPlainTextEdit* self, uintptr_t query, QVariant* argument);
void QPlainTextEdit_SetPlainText(QPlainTextEdit* self, const char* text, size_t text_Strlen);
void QPlainTextEdit_Cut(QPlainTextEdit* self);
void QPlainTextEdit_Copy(QPlainTextEdit* self);
void QPlainTextEdit_Paste(QPlainTextEdit* self);
void QPlainTextEdit_Undo(QPlainTextEdit* self);
void QPlainTextEdit_Redo(QPlainTextEdit* self);
void QPlainTextEdit_Clear(QPlainTextEdit* self);
void QPlainTextEdit_SelectAll(QPlainTextEdit* self);
void QPlainTextEdit_InsertPlainText(QPlainTextEdit* self, const char* text, size_t text_Strlen);
void QPlainTextEdit_AppendPlainText(QPlainTextEdit* self, const char* text, size_t text_Strlen);
void QPlainTextEdit_AppendHtml(QPlainTextEdit* self, const char* html, size_t html_Strlen);
void QPlainTextEdit_CenterCursor(QPlainTextEdit* self);
void QPlainTextEdit_ZoomIn(QPlainTextEdit* self);
void QPlainTextEdit_ZoomOut(QPlainTextEdit* self);
void QPlainTextEdit_TextChanged(QPlainTextEdit* self);
void QPlainTextEdit_connect_TextChanged(QPlainTextEdit* self, void* slot);
void QPlainTextEdit_UndoAvailable(QPlainTextEdit* self, bool b);
void QPlainTextEdit_connect_UndoAvailable(QPlainTextEdit* self, void* slot);
void QPlainTextEdit_RedoAvailable(QPlainTextEdit* self, bool b);
void QPlainTextEdit_connect_RedoAvailable(QPlainTextEdit* self, void* slot);
void QPlainTextEdit_CopyAvailable(QPlainTextEdit* self, bool b);
void QPlainTextEdit_connect_CopyAvailable(QPlainTextEdit* self, void* slot);
void QPlainTextEdit_SelectionChanged(QPlainTextEdit* self);
void QPlainTextEdit_connect_SelectionChanged(QPlainTextEdit* self, void* slot);
void QPlainTextEdit_CursorPositionChanged(QPlainTextEdit* self);
void QPlainTextEdit_connect_CursorPositionChanged(QPlainTextEdit* self, void* slot);
void QPlainTextEdit_UpdateRequest(QPlainTextEdit* self, QRect* rect, int dy);
void QPlainTextEdit_connect_UpdateRequest(QPlainTextEdit* self, void* slot);
void QPlainTextEdit_BlockCountChanged(QPlainTextEdit* self, int newBlockCount);
void QPlainTextEdit_connect_BlockCountChanged(QPlainTextEdit* self, void* slot);
void QPlainTextEdit_ModificationChanged(QPlainTextEdit* self, bool param1);
void QPlainTextEdit_connect_ModificationChanged(QPlainTextEdit* self, void* slot);
void QPlainTextEdit_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QPlainTextEdit_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QPlainTextEdit_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QPlainTextEdit_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
bool QPlainTextEdit_Find22(QPlainTextEdit* self, const char* exp, size_t exp_Strlen, int options);
bool QPlainTextEdit_Find23(QPlainTextEdit* self, QRegExp* exp, int options);
bool QPlainTextEdit_Find24(QPlainTextEdit* self, QRegularExpression* exp, int options);
void QPlainTextEdit_MoveCursor2(QPlainTextEdit* self, uintptr_t operation, uintptr_t mode);
void QPlainTextEdit_ZoomIn1(QPlainTextEdit* self, int rangeVal);
void QPlainTextEdit_ZoomOut1(QPlainTextEdit* self, int rangeVal);
void QPlainTextEdit_Delete(QPlainTextEdit* self);

QPlainTextDocumentLayout* QPlainTextDocumentLayout_new(QTextDocument* document);
QMetaObject* QPlainTextDocumentLayout_MetaObject(QPlainTextDocumentLayout* self);
void QPlainTextDocumentLayout_Tr(const char* s, char** _out, int* _out_Strlen);
void QPlainTextDocumentLayout_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QPlainTextDocumentLayout_Draw(QPlainTextDocumentLayout* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2);
int QPlainTextDocumentLayout_HitTest(QPlainTextDocumentLayout* self, QPointF* param1, uintptr_t param2);
int QPlainTextDocumentLayout_PageCount(QPlainTextDocumentLayout* self);
QSizeF* QPlainTextDocumentLayout_DocumentSize(QPlainTextDocumentLayout* self);
QRectF* QPlainTextDocumentLayout_FrameBoundingRect(QPlainTextDocumentLayout* self, QTextFrame* param1);
QRectF* QPlainTextDocumentLayout_BlockBoundingRect(QPlainTextDocumentLayout* self, QTextBlock* block);
void QPlainTextDocumentLayout_EnsureBlockLayout(QPlainTextDocumentLayout* self, QTextBlock* block);
void QPlainTextDocumentLayout_SetCursorWidth(QPlainTextDocumentLayout* self, int width);
int QPlainTextDocumentLayout_CursorWidth(QPlainTextDocumentLayout* self);
void QPlainTextDocumentLayout_RequestUpdate(QPlainTextDocumentLayout* self);
void QPlainTextDocumentLayout_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QPlainTextDocumentLayout_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QPlainTextDocumentLayout_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QPlainTextDocumentLayout_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QPlainTextDocumentLayout_Delete(QPlainTextDocumentLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
