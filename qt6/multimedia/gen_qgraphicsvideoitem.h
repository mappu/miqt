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
class QEvent;
class QGraphicsItem;
class QGraphicsObject;
class QGraphicsVideoItem;
class QMetaObject;
class QObject;
class QPainter;
class QPointF;
class QRectF;
class QSizeF;
class QStyleOptionGraphicsItem;
class QTimerEvent;
class QVariant;
class QVideoSink;
class QWidget;
#else
typedef struct QEvent QEvent;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsObject QGraphicsObject;
typedef struct QGraphicsVideoItem QGraphicsVideoItem;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QVideoSink QVideoSink;
typedef struct QWidget QWidget;
#endif

QGraphicsVideoItem* QGraphicsVideoItem_new();
QGraphicsVideoItem* QGraphicsVideoItem_new2(QGraphicsItem* parent);
void QGraphicsVideoItem_virtbase(QGraphicsVideoItem* src, QGraphicsObject** outptr_QGraphicsObject);
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
void QGraphicsVideoItem_Paint(QGraphicsVideoItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
int QGraphicsVideoItem_Type(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_NativeSizeChanged(QGraphicsVideoItem* self, QSizeF* size);
void QGraphicsVideoItem_connect_NativeSizeChanged(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_TimerEvent(QGraphicsVideoItem* self, QTimerEvent* event);
QVariant* QGraphicsVideoItem_ItemChange(QGraphicsVideoItem* self, int change, QVariant* value);
struct miqt_string QGraphicsVideoItem_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsVideoItem_Tr3(const char* s, const char* c, int n);
void QGraphicsVideoItem_override_virtual_BoundingRect(void* self, intptr_t slot);
QRectF* QGraphicsVideoItem_virtualbase_BoundingRect(const void* self);
void QGraphicsVideoItem_override_virtual_Paint(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsVideoItem_override_virtual_Type(void* self, intptr_t slot);
int QGraphicsVideoItem_virtualbase_Type(const void* self);
void QGraphicsVideoItem_override_virtual_TimerEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QGraphicsVideoItem_override_virtual_ItemChange(void* self, intptr_t slot);
QVariant* QGraphicsVideoItem_virtualbase_ItemChange(void* self, int change, QVariant* value);
void QGraphicsVideoItem_override_virtual_Event(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_Event(void* self, QEvent* ev);
void QGraphicsVideoItem_Delete(QGraphicsVideoItem* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
