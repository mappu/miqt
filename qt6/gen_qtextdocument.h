#pragma once
#ifndef MIQT_QT6_GEN_QTEXTDOCUMENT_H
#define MIQT_QT6_GEN_QTEXTDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractTextDocumentLayout;
class QAbstractUndoItem;
class QChar;
class QChildEvent;
class QEvent;
class QFont;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPagedPaintDevice;
class QPainter;
class QRectF;
class QRegularExpression;
class QSizeF;
class QTextBlock;
class QTextCursor;
class QTextDocument;
class QTextFormat;
class QTextFrame;
class QTextObject;
class QTextOption;
class QTimerEvent;
class QUrl;
class QVariant;
#else
typedef struct QAbstractTextDocumentLayout QAbstractTextDocumentLayout;
typedef struct QAbstractUndoItem QAbstractUndoItem;
typedef struct QChar QChar;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPainter QPainter;
typedef struct QRectF QRectF;
typedef struct QRegularExpression QRegularExpression;
typedef struct QSizeF QSizeF;
typedef struct QTextBlock QTextBlock;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextFormat QTextFormat;
typedef struct QTextFrame QTextFrame;
typedef struct QTextObject QTextObject;
typedef struct QTextOption QTextOption;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

void QAbstractUndoItem_Undo(QAbstractUndoItem* self);
void QAbstractUndoItem_Redo(QAbstractUndoItem* self);
void QAbstractUndoItem_OperatorAssign(QAbstractUndoItem* self, QAbstractUndoItem* param1);
void QAbstractUndoItem_Delete(QAbstractUndoItem* self, bool isSubclass);

QTextDocument* QTextDocument_new();
QTextDocument* QTextDocument_new2(struct miqt_string text);
QTextDocument* QTextDocument_new3(QObject* parent);
QTextDocument* QTextDocument_new4(struct miqt_string text, QObject* parent);
void QTextDocument_virtbase(QTextDocument* src, QObject** outptr_QObject);
QMetaObject* QTextDocument_MetaObject(const QTextDocument* self);
void* QTextDocument_Metacast(QTextDocument* self, const char* param1);
struct miqt_string QTextDocument_Tr(const char* s);
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
void QTextDocument_SetMetaInformation(QTextDocument* self, int info, struct miqt_string param2);
struct miqt_string QTextDocument_MetaInformation(const QTextDocument* self, int info);
struct miqt_string QTextDocument_ToHtml(const QTextDocument* self);
void QTextDocument_SetHtml(QTextDocument* self, struct miqt_string html);
struct miqt_string QTextDocument_ToMarkdown(const QTextDocument* self);
void QTextDocument_SetMarkdown(QTextDocument* self, struct miqt_string markdown);
struct miqt_string QTextDocument_ToRawText(const QTextDocument* self);
struct miqt_string QTextDocument_ToPlainText(const QTextDocument* self);
void QTextDocument_SetPlainText(QTextDocument* self, struct miqt_string text);
QChar* QTextDocument_CharacterAt(const QTextDocument* self, int pos);
QTextCursor* QTextDocument_Find(const QTextDocument* self, struct miqt_string subString);
QTextCursor* QTextDocument_Find2(const QTextDocument* self, struct miqt_string subString, QTextCursor* cursor);
QTextCursor* QTextDocument_FindWithExpr(const QTextDocument* self, QRegularExpression* expr);
QTextCursor* QTextDocument_Find3(const QTextDocument* self, QRegularExpression* expr, QTextCursor* cursor);
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
void QTextDocument_SetSuperScriptBaseline(QTextDocument* self, double baseline);
double QTextDocument_SuperScriptBaseline(const QTextDocument* self);
void QTextDocument_SetSubScriptBaseline(QTextDocument* self, double baseline);
double QTextDocument_SubScriptBaseline(const QTextDocument* self);
void QTextDocument_SetBaselineOffset(QTextDocument* self, double baseline);
double QTextDocument_BaselineOffset(const QTextDocument* self);
int QTextDocument_PageCount(const QTextDocument* self);
bool QTextDocument_IsModified(const QTextDocument* self);
void QTextDocument_Print(const QTextDocument* self, QPagedPaintDevice* printer);
QVariant* QTextDocument_Resource(const QTextDocument* self, int typeVal, QUrl* name);
void QTextDocument_AddResource(QTextDocument* self, int typeVal, QUrl* name, QVariant* resource);
struct miqt_array /* of QTextFormat* */  QTextDocument_AllFormats(const QTextDocument* self);
void QTextDocument_MarkContentsDirty(QTextDocument* self, int from, int length);
void QTextDocument_SetUseDesignMetrics(QTextDocument* self, bool b);
bool QTextDocument_UseDesignMetrics(const QTextDocument* self);
void QTextDocument_SetLayoutEnabled(QTextDocument* self, bool b);
bool QTextDocument_IsLayoutEnabled(const QTextDocument* self);
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
void QTextDocument_SetDefaultStyleSheet(QTextDocument* self, struct miqt_string sheet);
struct miqt_string QTextDocument_DefaultStyleSheet(const QTextDocument* self);
void QTextDocument_Undo(QTextDocument* self, QTextCursor* cursor);
void QTextDocument_Redo(QTextDocument* self, QTextCursor* cursor);
void QTextDocument_ClearUndoRedoStacks(QTextDocument* self);
int QTextDocument_MaximumBlockCount(const QTextDocument* self);
void QTextDocument_SetMaximumBlockCount(QTextDocument* self, int maximum);
QTextOption* QTextDocument_DefaultTextOption(const QTextDocument* self);
void QTextDocument_SetDefaultTextOption(QTextDocument* self, QTextOption* option);
QUrl* QTextDocument_BaseUrl(const QTextDocument* self);
void QTextDocument_SetBaseUrl(QTextDocument* self, QUrl* url);
int QTextDocument_DefaultCursorMoveStyle(const QTextDocument* self);
void QTextDocument_SetDefaultCursorMoveStyle(QTextDocument* self, int style);
void QTextDocument_ContentsChange(QTextDocument* self, int from, int charsRemoved, int charsAdded);
void QTextDocument_connect_ContentsChange(QTextDocument* self, intptr_t slot);
void QTextDocument_ContentsChanged(QTextDocument* self);
void QTextDocument_connect_ContentsChanged(QTextDocument* self, intptr_t slot);
void QTextDocument_UndoAvailable(QTextDocument* self, bool param1);
void QTextDocument_connect_UndoAvailable(QTextDocument* self, intptr_t slot);
void QTextDocument_RedoAvailable(QTextDocument* self, bool param1);
void QTextDocument_connect_RedoAvailable(QTextDocument* self, intptr_t slot);
void QTextDocument_UndoCommandAdded(QTextDocument* self);
void QTextDocument_connect_UndoCommandAdded(QTextDocument* self, intptr_t slot);
void QTextDocument_ModificationChanged(QTextDocument* self, bool m);
void QTextDocument_connect_ModificationChanged(QTextDocument* self, intptr_t slot);
void QTextDocument_CursorPositionChanged(QTextDocument* self, QTextCursor* cursor);
void QTextDocument_connect_CursorPositionChanged(QTextDocument* self, intptr_t slot);
void QTextDocument_BlockCountChanged(QTextDocument* self, int newBlockCount);
void QTextDocument_connect_BlockCountChanged(QTextDocument* self, intptr_t slot);
void QTextDocument_BaseUrlChanged(QTextDocument* self, QUrl* url);
void QTextDocument_connect_BaseUrlChanged(QTextDocument* self, intptr_t slot);
void QTextDocument_DocumentLayoutChanged(QTextDocument* self);
void QTextDocument_connect_DocumentLayoutChanged(QTextDocument* self, intptr_t slot);
void QTextDocument_Undo2(QTextDocument* self);
void QTextDocument_Redo2(QTextDocument* self);
void QTextDocument_AppendUndoItem(QTextDocument* self, QAbstractUndoItem* param1);
void QTextDocument_SetModified(QTextDocument* self);
QTextObject* QTextDocument_CreateObject(QTextDocument* self, QTextFormat* f);
QVariant* QTextDocument_LoadResource(QTextDocument* self, int typeVal, QUrl* name);
struct miqt_string QTextDocument_Tr2(const char* s, const char* c);
struct miqt_string QTextDocument_Tr3(const char* s, const char* c, int n);
QTextDocument* QTextDocument_Clone1(const QTextDocument* self, QObject* parent);
struct miqt_string QTextDocument_ToMarkdown1(const QTextDocument* self, int features);
void QTextDocument_SetMarkdown2(QTextDocument* self, struct miqt_string markdown, int features);
QTextCursor* QTextDocument_Find22(const QTextDocument* self, struct miqt_string subString, int from);
QTextCursor* QTextDocument_Find32(const QTextDocument* self, struct miqt_string subString, int from, int options);
QTextCursor* QTextDocument_Find33(const QTextDocument* self, struct miqt_string subString, QTextCursor* cursor, int options);
QTextCursor* QTextDocument_Find23(const QTextDocument* self, QRegularExpression* expr, int from);
QTextCursor* QTextDocument_Find34(const QTextDocument* self, QRegularExpression* expr, int from, int options);
QTextCursor* QTextDocument_Find35(const QTextDocument* self, QRegularExpression* expr, QTextCursor* cursor, int options);
void QTextDocument_DrawContents2(QTextDocument* self, QPainter* painter, QRectF* rect);
void QTextDocument_ClearUndoRedoStacks1(QTextDocument* self, int historyToClear);
void QTextDocument_SetModified1(QTextDocument* self, bool m);
void QTextDocument_override_virtual_Clear(void* self, intptr_t slot);
void QTextDocument_virtualbase_Clear(void* self);
void QTextDocument_override_virtual_CreateObject(void* self, intptr_t slot);
QTextObject* QTextDocument_virtualbase_CreateObject(void* self, QTextFormat* f);
void QTextDocument_override_virtual_LoadResource(void* self, intptr_t slot);
QVariant* QTextDocument_virtualbase_LoadResource(void* self, int typeVal, QUrl* name);
void QTextDocument_override_virtual_Event(void* self, intptr_t slot);
bool QTextDocument_virtualbase_Event(void* self, QEvent* event);
void QTextDocument_override_virtual_EventFilter(void* self, intptr_t slot);
bool QTextDocument_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QTextDocument_override_virtual_TimerEvent(void* self, intptr_t slot);
void QTextDocument_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QTextDocument_override_virtual_ChildEvent(void* self, intptr_t slot);
void QTextDocument_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QTextDocument_override_virtual_CustomEvent(void* self, intptr_t slot);
void QTextDocument_virtualbase_CustomEvent(void* self, QEvent* event);
void QTextDocument_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QTextDocument_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QTextDocument_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QTextDocument_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QTextDocument_Delete(QTextDocument* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
