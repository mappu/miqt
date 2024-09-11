#ifndef GEN_QTEXTDOCUMENT_H
#define GEN_QTEXTDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractTextDocumentLayout;
class QAbstractUndoItem;
class QByteArray;
class QChar;
class QFont;
class QMetaObject;
class QObject;
class QPagedPaintDevice;
class QPainter;
class QRectF;
class QRegExp;
class QRegularExpression;
class QSizeF;
class QTextBlock;
class QTextCursor;
class QTextDocument;
class QTextFormat;
class QTextFrame;
class QTextObject;
class QTextOption;
class QUrl;
class QVariant;
#else
typedef struct QAbstractTextDocumentLayout QAbstractTextDocumentLayout;
typedef struct QAbstractUndoItem QAbstractUndoItem;
typedef struct QByteArray QByteArray;
typedef struct QChar QChar;
typedef struct QFont QFont;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPainter QPainter;
typedef struct QRectF QRectF;
typedef struct QRegExp QRegExp;
typedef struct QRegularExpression QRegularExpression;
typedef struct QSizeF QSizeF;
typedef struct QTextBlock QTextBlock;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextFormat QTextFormat;
typedef struct QTextFrame QTextFrame;
typedef struct QTextObject QTextObject;
typedef struct QTextOption QTextOption;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

void QAbstractUndoItem_Undo(QAbstractUndoItem* self);
void QAbstractUndoItem_Redo(QAbstractUndoItem* self);
void QAbstractUndoItem_Delete(QAbstractUndoItem* self);

QTextDocument* QTextDocument_new();
QTextDocument* QTextDocument_new2(const char* text, size_t text_Strlen);
QTextDocument* QTextDocument_new3(QObject* parent);
QTextDocument* QTextDocument_new4(const char* text, size_t text_Strlen, QObject* parent);
QMetaObject* QTextDocument_MetaObject(const QTextDocument* self);
void QTextDocument_Tr(const char* s, char** _out, int* _out_Strlen);
void QTextDocument_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QTextDocument* QTextDocument_Clone(const QTextDocument* self);
bool QTextDocument_IsEmpty(const QTextDocument* self);
void QTextDocument_Clear(QTextDocument* self);
void QTextDocument_SetUndoRedoEnabled(QTextDocument* self, bool enable);
bool QTextDocument_IsUndoRedoEnabled(const QTextDocument* self);
bool QTextDocument_IsUndoAvailable(const QTextDocument* self);
bool QTextDocument_IsRedoAvailable(const QTextDocument* self);
int QTextDocument_AvailableUndoSteps(const QTextDocument* self);
int QTextDocument_AvailableRedoSteps(const QTextDocument* self);
int QTextDocument_Revision(const QTextDocument* self);
void QTextDocument_SetDocumentLayout(QTextDocument* self, QAbstractTextDocumentLayout* layout);
QAbstractTextDocumentLayout* QTextDocument_DocumentLayout(const QTextDocument* self);
void QTextDocument_SetMetaInformation(QTextDocument* self, uintptr_t info, const char* param2, size_t param2_Strlen);
void QTextDocument_MetaInformation(const QTextDocument* self, uintptr_t info, char** _out, int* _out_Strlen);
void QTextDocument_ToHtml(const QTextDocument* self, char** _out, int* _out_Strlen);
void QTextDocument_SetHtml(QTextDocument* self, const char* html, size_t html_Strlen);
void QTextDocument_ToMarkdown(const QTextDocument* self, char** _out, int* _out_Strlen);
void QTextDocument_SetMarkdown(QTextDocument* self, const char* markdown, size_t markdown_Strlen);
void QTextDocument_ToRawText(const QTextDocument* self, char** _out, int* _out_Strlen);
void QTextDocument_ToPlainText(const QTextDocument* self, char** _out, int* _out_Strlen);
void QTextDocument_SetPlainText(QTextDocument* self, const char* text, size_t text_Strlen);
QChar* QTextDocument_CharacterAt(const QTextDocument* self, int pos);
QTextCursor* QTextDocument_Find(const QTextDocument* self, const char* subString, size_t subString_Strlen);
QTextCursor* QTextDocument_Find2(const QTextDocument* self, const char* subString, size_t subString_Strlen, QTextCursor* cursor);
QTextCursor* QTextDocument_FindWithExpr(const QTextDocument* self, QRegExp* expr);
QTextCursor* QTextDocument_Find3(const QTextDocument* self, QRegExp* expr, QTextCursor* cursor);
QTextCursor* QTextDocument_Find4(const QTextDocument* self, QRegularExpression* expr);
QTextCursor* QTextDocument_Find5(const QTextDocument* self, QRegularExpression* expr, QTextCursor* cursor);
QTextFrame* QTextDocument_FrameAt(const QTextDocument* self, int pos);
QTextFrame* QTextDocument_RootFrame(const QTextDocument* self);
QTextObject* QTextDocument_Object(const QTextDocument* self, int objectIndex);
QTextObject* QTextDocument_ObjectForFormat(const QTextDocument* self, QTextFormat* param1);
QTextBlock* QTextDocument_FindBlock(const QTextDocument* self, int pos);
QTextBlock* QTextDocument_FindBlockByNumber(const QTextDocument* self, int blockNumber);
QTextBlock* QTextDocument_FindBlockByLineNumber(const QTextDocument* self, int blockNumber);
QTextBlock* QTextDocument_Begin(const QTextDocument* self);
QTextBlock* QTextDocument_End(const QTextDocument* self);
QTextBlock* QTextDocument_FirstBlock(const QTextDocument* self);
QTextBlock* QTextDocument_LastBlock(const QTextDocument* self);
void QTextDocument_SetPageSize(QTextDocument* self, QSizeF* size);
QSizeF* QTextDocument_PageSize(const QTextDocument* self);
void QTextDocument_SetDefaultFont(QTextDocument* self, QFont* font);
QFont* QTextDocument_DefaultFont(const QTextDocument* self);
int QTextDocument_PageCount(const QTextDocument* self);
bool QTextDocument_IsModified(const QTextDocument* self);
void QTextDocument_Print(const QTextDocument* self, QPagedPaintDevice* printer);
QVariant* QTextDocument_Resource(const QTextDocument* self, int typeVal, QUrl* name);
void QTextDocument_AddResource(QTextDocument* self, int typeVal, QUrl* name, QVariant* resource);
void QTextDocument_AllFormats(const QTextDocument* self, QTextFormat*** _out, size_t* _out_len);
void QTextDocument_MarkContentsDirty(QTextDocument* self, int from, int length);
void QTextDocument_SetUseDesignMetrics(QTextDocument* self, bool b);
bool QTextDocument_UseDesignMetrics(const QTextDocument* self);
void QTextDocument_DrawContents(QTextDocument* self, QPainter* painter);
void QTextDocument_SetTextWidth(QTextDocument* self, double width);
double QTextDocument_TextWidth(const QTextDocument* self);
double QTextDocument_IdealWidth(const QTextDocument* self);
double QTextDocument_IndentWidth(const QTextDocument* self);
void QTextDocument_SetIndentWidth(QTextDocument* self, double width);
double QTextDocument_DocumentMargin(const QTextDocument* self);
void QTextDocument_SetDocumentMargin(QTextDocument* self, double margin);
void QTextDocument_AdjustSize(QTextDocument* self);
QSizeF* QTextDocument_Size(const QTextDocument* self);
int QTextDocument_BlockCount(const QTextDocument* self);
int QTextDocument_LineCount(const QTextDocument* self);
int QTextDocument_CharacterCount(const QTextDocument* self);
void QTextDocument_SetDefaultStyleSheet(QTextDocument* self, const char* sheet, size_t sheet_Strlen);
void QTextDocument_DefaultStyleSheet(const QTextDocument* self, char** _out, int* _out_Strlen);
void QTextDocument_Undo(QTextDocument* self, QTextCursor* cursor);
void QTextDocument_Redo(QTextDocument* self, QTextCursor* cursor);
void QTextDocument_ClearUndoRedoStacks(QTextDocument* self);
int QTextDocument_MaximumBlockCount(const QTextDocument* self);
void QTextDocument_SetMaximumBlockCount(QTextDocument* self, int maximum);
QTextOption* QTextDocument_DefaultTextOption(const QTextDocument* self);
void QTextDocument_SetDefaultTextOption(QTextDocument* self, QTextOption* option);
QUrl* QTextDocument_BaseUrl(const QTextDocument* self);
void QTextDocument_SetBaseUrl(QTextDocument* self, QUrl* url);
uintptr_t QTextDocument_DefaultCursorMoveStyle(const QTextDocument* self);
void QTextDocument_SetDefaultCursorMoveStyle(QTextDocument* self, uintptr_t style);
void QTextDocument_ContentsChange(QTextDocument* self, int from, int charsRemoved, int charsAdded);
void QTextDocument_connect_ContentsChange(QTextDocument* self, void* slot);
void QTextDocument_ContentsChanged(QTextDocument* self);
void QTextDocument_connect_ContentsChanged(QTextDocument* self, void* slot);
void QTextDocument_UndoAvailable(QTextDocument* self, bool param1);
void QTextDocument_connect_UndoAvailable(QTextDocument* self, void* slot);
void QTextDocument_RedoAvailable(QTextDocument* self, bool param1);
void QTextDocument_connect_RedoAvailable(QTextDocument* self, void* slot);
void QTextDocument_UndoCommandAdded(QTextDocument* self);
void QTextDocument_connect_UndoCommandAdded(QTextDocument* self, void* slot);
void QTextDocument_ModificationChanged(QTextDocument* self, bool m);
void QTextDocument_connect_ModificationChanged(QTextDocument* self, void* slot);
void QTextDocument_CursorPositionChanged(QTextDocument* self, QTextCursor* cursor);
void QTextDocument_connect_CursorPositionChanged(QTextDocument* self, void* slot);
void QTextDocument_BlockCountChanged(QTextDocument* self, int newBlockCount);
void QTextDocument_connect_BlockCountChanged(QTextDocument* self, void* slot);
void QTextDocument_BaseUrlChanged(QTextDocument* self, QUrl* url);
void QTextDocument_connect_BaseUrlChanged(QTextDocument* self, void* slot);
void QTextDocument_DocumentLayoutChanged(QTextDocument* self);
void QTextDocument_connect_DocumentLayoutChanged(QTextDocument* self, void* slot);
void QTextDocument_Undo2(QTextDocument* self);
void QTextDocument_Redo2(QTextDocument* self);
void QTextDocument_SetModified(QTextDocument* self);
void QTextDocument_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTextDocument_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTextDocument_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTextDocument_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
QTextDocument* QTextDocument_Clone1(const QTextDocument* self, QObject* parent);
void QTextDocument_ToHtml1(const QTextDocument* self, QByteArray* encoding, char** _out, int* _out_Strlen);
void QTextDocument_ToMarkdown1(const QTextDocument* self, int features, char** _out, int* _out_Strlen);
void QTextDocument_SetMarkdown2(QTextDocument* self, const char* markdown, size_t markdown_Strlen, int features);
QTextCursor* QTextDocument_Find22(const QTextDocument* self, const char* subString, size_t subString_Strlen, int from);
QTextCursor* QTextDocument_Find32(const QTextDocument* self, const char* subString, size_t subString_Strlen, int from, int options);
QTextCursor* QTextDocument_Find33(const QTextDocument* self, const char* subString, size_t subString_Strlen, QTextCursor* cursor, int options);
QTextCursor* QTextDocument_Find23(const QTextDocument* self, QRegExp* expr, int from);
QTextCursor* QTextDocument_Find34(const QTextDocument* self, QRegExp* expr, int from, int options);
QTextCursor* QTextDocument_Find35(const QTextDocument* self, QRegExp* expr, QTextCursor* cursor, int options);
QTextCursor* QTextDocument_Find24(const QTextDocument* self, QRegularExpression* expr, int from);
QTextCursor* QTextDocument_Find36(const QTextDocument* self, QRegularExpression* expr, int from, int options);
QTextCursor* QTextDocument_Find37(const QTextDocument* self, QRegularExpression* expr, QTextCursor* cursor, int options);
void QTextDocument_DrawContents2(QTextDocument* self, QPainter* painter, QRectF* rect);
void QTextDocument_ClearUndoRedoStacks1(QTextDocument* self, uintptr_t historyToClear);
void QTextDocument_SetModified1(QTextDocument* self, bool m);
void QTextDocument_Delete(QTextDocument* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
