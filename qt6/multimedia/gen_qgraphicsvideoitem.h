#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QGRAPHICSVIDEOITEM_H
#define MIQT_QT6_MULTIMEDIA_GEN_QGRAPHICSVIDEOITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGraphicsItem;
class QGraphicsVideoItem;
class QMetaObject;
class QPainter;
class QPointF;
class QRectF;
class QSizeF;
class QStyleOptionGraphicsItem;
class QVideoSink;
class QWidget;
#else
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsVideoItem QGraphicsVideoItem;
typedef struct QMetaObject QMetaObject;
typedef struct QPainter QPainter;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QVideoSink QVideoSink;
typedef struct QWidget QWidget;
#endif

QGraphicsVideoItem* QGraphicsVideoItem_new();
QGraphicsVideoItem* QGraphicsVideoItem_new2(QGraphicsItem* parent);
QMetaObject* QGraphicsVideoItem_MetaObject(const QGraphicsVideoItem* self);
void* QGraphicsVideoItem_Metacast(QGraphicsVideoItem* self, const char* param1);
struct miqt_string QGraphicsVideoItem_Tr(const char* s);
QVideoSink* QGraphicsVideoItem_VideoSink(const QGraphicsVideoItem* self);
int QGraphicsVideoItem_AspectRatioMode(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_SetAspectRatioMode(QGraphicsVideoItem* self, int mode);
QPointF* QGraphicsVideoItem_Offset(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_SetOffset(QGraphicsVideoItem* self, QPointF* offset);
QSizeF* QGraphicsVideoItem_Size(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_SetSize(QGraphicsVideoItem* self, QSizeF* size);
QSizeF* QGraphicsVideoItem_NativeSize(const QGraphicsVideoItem* self);
QRectF* QGraphicsVideoItem_BoundingRect(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_Paint(QGraphicsVideoItem* self, QPainter* painter, QStyleOptionGraphicsItem* option);
int QGraphicsVideoItem_Type(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_NativeSizeChanged(QGraphicsVideoItem* self, QSizeF* size);
void QGraphicsVideoItem_connect_NativeSizeChanged(QGraphicsVideoItem* self, intptr_t slot);
struct miqt_string QGraphicsVideoItem_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsVideoItem_Tr3(const char* s, const char* c, int n);
void QGraphicsVideoItem_Paint3(QGraphicsVideoItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsVideoItem_Delete(QGraphicsVideoItem* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
