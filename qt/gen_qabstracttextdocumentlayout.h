#ifndef GEN_QABSTRACTTEXTDOCUMENTLAYOUT_H
#define GEN_QABSTRACTTEXTDOCUMENTLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
class QTextObjectInterface;
#else
typedef struct QAbstractTextDocumentLayout QAbstractTextDocumentLayout;
typedef struct QAbstractTextDocumentLayout__PaintContext QAbstractTextDocumentLayout__PaintContext;
typedef struct QAbstractTextDocumentLayout__Selection QAbstractTextDocumentLayout__Selection;
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
typedef struct QTextObjectInterface QTextObjectInterface;
#endif

QMetaObject* QAbstractTextDocumentLayout_MetaObject(const QAbstractTextDocumentLayout* self);
struct miqt_string* QAbstractTextDocumentLayout_Tr(const char* s);
struct miqt_string* QAbstractTextDocumentLayout_TrUtf8(const char* s);
void QAbstractTextDocumentLayout_Draw(QAbstractTextDocumentLayout* self, QPainter* painter, QAbstractTextDocumentLayout__PaintContext* context);
int QAbstractTextDocumentLayout_HitTest(const QAbstractTextDocumentLayout* self, QPointF* point, uintptr_t accuracy);
struct miqt_string* QAbstractTextDocumentLayout_AnchorAt(const QAbstractTextDocumentLayout* self, QPointF* pos);
struct miqt_string* QAbstractTextDocumentLayout_ImageAt(const QAbstractTextDocumentLayout* self, QPointF* pos);
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
void QAbstractTextDocumentLayout_Update(QAbstractTextDocumentLayout* self);
void QAbstractTextDocumentLayout_connect_Update(QAbstractTextDocumentLayout* self, void* slot);
void QAbstractTextDocumentLayout_UpdateBlock(QAbstractTextDocumentLayout* self, QTextBlock* block);
void QAbstractTextDocumentLayout_connect_UpdateBlock(QAbstractTextDocumentLayout* self, void* slot);
void QAbstractTextDocumentLayout_DocumentSizeChanged(QAbstractTextDocumentLayout* self, QSizeF* newSize);
void QAbstractTextDocumentLayout_connect_DocumentSizeChanged(QAbstractTextDocumentLayout* self, void* slot);
void QAbstractTextDocumentLayout_PageCountChanged(QAbstractTextDocumentLayout* self, int newPages);
void QAbstractTextDocumentLayout_connect_PageCountChanged(QAbstractTextDocumentLayout* self, void* slot);
struct miqt_string* QAbstractTextDocumentLayout_Tr2(const char* s, const char* c);
struct miqt_string* QAbstractTextDocumentLayout_Tr3(const char* s, const char* c, int n);
struct miqt_string* QAbstractTextDocumentLayout_TrUtf82(const char* s, const char* c);
struct miqt_string* QAbstractTextDocumentLayout_TrUtf83(const char* s, const char* c, int n);
void QAbstractTextDocumentLayout_UnregisterHandler2(QAbstractTextDocumentLayout* self, int objectType, QObject* component);
void QAbstractTextDocumentLayout_Update1(QAbstractTextDocumentLayout* self, QRectF* param1);
void QAbstractTextDocumentLayout_connect_Update1(QAbstractTextDocumentLayout* self, void* slot);
void QAbstractTextDocumentLayout_Delete(QAbstractTextDocumentLayout* self);

QSizeF* QTextObjectInterface_IntrinsicSize(QTextObjectInterface* self, QTextDocument* doc, int posInDocument, QTextFormat* format);
void QTextObjectInterface_DrawObject(QTextObjectInterface* self, QPainter* painter, QRectF* rect, QTextDocument* doc, int posInDocument, QTextFormat* format);
void QTextObjectInterface_Delete(QTextObjectInterface* self);

QAbstractTextDocumentLayout__Selection* QAbstractTextDocumentLayout__Selection_new(QAbstractTextDocumentLayout__Selection* param1);
void QAbstractTextDocumentLayout__Selection_Delete(QAbstractTextDocumentLayout__Selection* self);

QAbstractTextDocumentLayout__PaintContext* QAbstractTextDocumentLayout__PaintContext_new();
QAbstractTextDocumentLayout__PaintContext* QAbstractTextDocumentLayout__PaintContext_new2(QAbstractTextDocumentLayout__PaintContext* param1);
void QAbstractTextDocumentLayout__PaintContext_Delete(QAbstractTextDocumentLayout__PaintContext* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
