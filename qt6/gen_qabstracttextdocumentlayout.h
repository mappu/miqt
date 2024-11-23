#pragma once
#ifndef MIQT_QT6_GEN_QABSTRACTTEXTDOCUMENTLAYOUT_H
#define MIQT_QT6_GEN_QABSTRACTTEXTDOCUMENTLAYOUT_H

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__PaintContext)
typedef QAbstractTextDocumentLayout::PaintContext QAbstractTextDocumentLayout__PaintContext;
#else
class QAbstractTextDocumentLayout__PaintContext;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__Selection)
typedef QAbstractTextDocumentLayout::Selection QAbstractTextDocumentLayout__Selection;
#else
class QAbstractTextDocumentLayout__Selection;
#endif
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPaintDevice;
class QPainter;
class QPointF;
class QRectF;
class QSizeF;
class QTextBlock;
class QTextDocument;
class QTextFormat;
class QTextFrame;
class QTextInlineObject;
class QTextObjectInterface;
class QTimerEvent;
#else
typedef struct QAbstractTextDocumentLayout QAbstractTextDocumentLayout;
typedef struct QAbstractTextDocumentLayout__PaintContext QAbstractTextDocumentLayout__PaintContext;
typedef struct QAbstractTextDocumentLayout__Selection QAbstractTextDocumentLayout__Selection;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPainter QPainter;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QTextBlock QTextBlock;
typedef struct QTextDocument QTextDocument;
typedef struct QTextFormat QTextFormat;
typedef struct QTextFrame QTextFrame;
typedef struct QTextInlineObject QTextInlineObject;
typedef struct QTextObjectInterface QTextObjectInterface;
typedef struct QTimerEvent QTimerEvent;
#endif

void QAbstractTextDocumentLayout_new(QTextDocument* doc, QAbstractTextDocumentLayout** outptr_QAbstractTextDocumentLayout, QObject** outptr_QObject);
QMetaObject* QAbstractTextDocumentLayout_MetaObject(const QAbstractTextDocumentLayout* self);
void* QAbstractTextDocumentLayout_Metacast(QAbstractTextDocumentLayout* self, const char* param1);
struct miqt_string QAbstractTextDocumentLayout_Tr(const char* s);
void QAbstractTextDocumentLayout_Draw(QAbstractTextDocumentLayout* self, QPainter* painter, QAbstractTextDocumentLayout__PaintContext* context);
int QAbstractTextDocumentLayout_HitTest(const QAbstractTextDocumentLayout* self, QPointF* point, int accuracy);
struct miqt_string QAbstractTextDocumentLayout_AnchorAt(const QAbstractTextDocumentLayout* self, QPointF* pos);
struct miqt_string QAbstractTextDocumentLayout_ImageAt(const QAbstractTextDocumentLayout* self, QPointF* pos);
QTextFormat* QAbstractTextDocumentLayout_FormatAt(const QAbstractTextDocumentLayout* self, QPointF* pos);
QTextBlock* QAbstractTextDocumentLayout_BlockWithMarkerAt(const QAbstractTextDocumentLayout* self, QPointF* pos);
int QAbstractTextDocumentLayout_PageCount(const QAbstractTextDocumentLayout* self);
QSizeF* QAbstractTextDocumentLayout_DocumentSize(const QAbstractTextDocumentLayout* self);
QRectF* QAbstractTextDocumentLayout_FrameBoundingRect(const QAbstractTextDocumentLayout* self, QTextFrame* frame);
QRectF* QAbstractTextDocumentLayout_BlockBoundingRect(const QAbstractTextDocumentLayout* self, QTextBlock* block);
void QAbstractTextDocumentLayout_SetPaintDevice(QAbstractTextDocumentLayout* self, QPaintDevice* device);
QPaintDevice* QAbstractTextDocumentLayout_PaintDevice(const QAbstractTextDocumentLayout* self);
QTextDocument* QAbstractTextDocumentLayout_Document(const QAbstractTextDocumentLayout* self);
void QAbstractTextDocumentLayout_RegisterHandler(QAbstractTextDocumentLayout* self, int objectType, QObject* component);
void QAbstractTextDocumentLayout_UnregisterHandler(QAbstractTextDocumentLayout* self, int objectType);
QTextObjectInterface* QAbstractTextDocumentLayout_HandlerForObject(const QAbstractTextDocumentLayout* self, int objectType);
void QAbstractTextDocumentLayout_Update(QAbstractTextDocumentLayout* self);
void QAbstractTextDocumentLayout_connect_Update(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_UpdateBlock(QAbstractTextDocumentLayout* self, QTextBlock* block);
void QAbstractTextDocumentLayout_connect_UpdateBlock(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_DocumentSizeChanged(QAbstractTextDocumentLayout* self, QSizeF* newSize);
void QAbstractTextDocumentLayout_connect_DocumentSizeChanged(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_PageCountChanged(QAbstractTextDocumentLayout* self, int newPages);
void QAbstractTextDocumentLayout_connect_PageCountChanged(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_DocumentChanged(QAbstractTextDocumentLayout* self, int from, int charsRemoved, int charsAdded);
void QAbstractTextDocumentLayout_ResizeInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format);
void QAbstractTextDocumentLayout_PositionInlineObject(QAbstractTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format);
void QAbstractTextDocumentLayout_DrawInlineObject(QAbstractTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format);
struct miqt_string QAbstractTextDocumentLayout_Tr2(const char* s, const char* c);
struct miqt_string QAbstractTextDocumentLayout_Tr3(const char* s, const char* c, int n);
void QAbstractTextDocumentLayout_UnregisterHandler2(QAbstractTextDocumentLayout* self, int objectType, QObject* component);
void QAbstractTextDocumentLayout_Update1(QAbstractTextDocumentLayout* self, QRectF* param1);
void QAbstractTextDocumentLayout_connect_Update1(QAbstractTextDocumentLayout* self, intptr_t slot);
void QAbstractTextDocumentLayout_override_virtual_Draw(void* self, intptr_t slot);
void QAbstractTextDocumentLayout_virtualbase_Draw(void* self, QPainter* painter, QAbstractTextDocumentLayout__PaintContext* context);
void QAbstractTextDocumentLayout_override_virtual_HitTest(void* self, intptr_t slot);
int QAbstractTextDocumentLayout_virtualbase_HitTest(const void* self, QPointF* point, int accuracy);
void QAbstractTextDocumentLayout_override_virtual_PageCount(void* self, intptr_t slot);
int QAbstractTextDocumentLayout_virtualbase_PageCount(const void* self);
void QAbstractTextDocumentLayout_override_virtual_DocumentSize(void* self, intptr_t slot);
QSizeF* QAbstractTextDocumentLayout_virtualbase_DocumentSize(const void* self);
void QAbstractTextDocumentLayout_override_virtual_FrameBoundingRect(void* self, intptr_t slot);
QRectF* QAbstractTextDocumentLayout_virtualbase_FrameBoundingRect(const void* self, QTextFrame* frame);
void QAbstractTextDocumentLayout_override_virtual_BlockBoundingRect(void* self, intptr_t slot);
QRectF* QAbstractTextDocumentLayout_virtualbase_BlockBoundingRect(const void* self, QTextBlock* block);
void QAbstractTextDocumentLayout_override_virtual_DocumentChanged(void* self, intptr_t slot);
void QAbstractTextDocumentLayout_virtualbase_DocumentChanged(void* self, int from, int charsRemoved, int charsAdded);
void QAbstractTextDocumentLayout_override_virtual_ResizeInlineObject(void* self, intptr_t slot);
void QAbstractTextDocumentLayout_virtualbase_ResizeInlineObject(void* self, QTextInlineObject* item, int posInDocument, QTextFormat* format);
void QAbstractTextDocumentLayout_override_virtual_PositionInlineObject(void* self, intptr_t slot);
void QAbstractTextDocumentLayout_virtualbase_PositionInlineObject(void* self, QTextInlineObject* item, int posInDocument, QTextFormat* format);
void QAbstractTextDocumentLayout_override_virtual_DrawInlineObject(void* self, intptr_t slot);
void QAbstractTextDocumentLayout_virtualbase_DrawInlineObject(void* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format);
void QAbstractTextDocumentLayout_override_virtual_Event(void* self, intptr_t slot);
bool QAbstractTextDocumentLayout_virtualbase_Event(void* self, QEvent* event);
void QAbstractTextDocumentLayout_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAbstractTextDocumentLayout_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QAbstractTextDocumentLayout_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAbstractTextDocumentLayout_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QAbstractTextDocumentLayout_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAbstractTextDocumentLayout_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QAbstractTextDocumentLayout_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAbstractTextDocumentLayout_virtualbase_CustomEvent(void* self, QEvent* event);
void QAbstractTextDocumentLayout_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAbstractTextDocumentLayout_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QAbstractTextDocumentLayout_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAbstractTextDocumentLayout_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAbstractTextDocumentLayout_Delete(QAbstractTextDocumentLayout* self, bool isSubclass);

QSizeF* QTextObjectInterface_IntrinsicSize(QTextObjectInterface* self, QTextDocument* doc, int posInDocument, QTextFormat* format);
void QTextObjectInterface_DrawObject(QTextObjectInterface* self, QPainter* painter, QRectF* rect, QTextDocument* doc, int posInDocument, QTextFormat* format);
void QTextObjectInterface_OperatorAssign(QTextObjectInterface* self, QTextObjectInterface* param1);
void QTextObjectInterface_Delete(QTextObjectInterface* self, bool isSubclass);

void QAbstractTextDocumentLayout__Selection_new(QAbstractTextDocumentLayout__Selection* param1, QAbstractTextDocumentLayout__Selection** outptr_QAbstractTextDocumentLayout__Selection);
void QAbstractTextDocumentLayout__Selection_OperatorAssign(QAbstractTextDocumentLayout__Selection* self, QAbstractTextDocumentLayout__Selection* param1);
void QAbstractTextDocumentLayout__Selection_Delete(QAbstractTextDocumentLayout__Selection* self, bool isSubclass);

void QAbstractTextDocumentLayout__PaintContext_new(QAbstractTextDocumentLayout__PaintContext** outptr_QAbstractTextDocumentLayout__PaintContext);
void QAbstractTextDocumentLayout__PaintContext_new2(QAbstractTextDocumentLayout__PaintContext* param1, QAbstractTextDocumentLayout__PaintContext** outptr_QAbstractTextDocumentLayout__PaintContext);
void QAbstractTextDocumentLayout__PaintContext_OperatorAssign(QAbstractTextDocumentLayout__PaintContext* self, QAbstractTextDocumentLayout__PaintContext* param1);
void QAbstractTextDocumentLayout__PaintContext_Delete(QAbstractTextDocumentLayout__PaintContext* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
