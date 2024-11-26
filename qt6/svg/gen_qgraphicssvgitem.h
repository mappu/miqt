#pragma once
#ifndef MIQT_QT6_SVG_GEN_QGRAPHICSSVGITEM_H
#define MIQT_QT6_SVG_GEN_QGRAPHICSSVGITEM_H

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
class QGraphicsSvgItem;
class QMetaObject;
class QObject;
class QPainter;
class QRectF;
class QSize;
class QStyleOptionGraphicsItem;
class QSvgRenderer;
class QWidget;
#else
typedef struct QEvent QEvent;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsObject QGraphicsObject;
typedef struct QGraphicsSvgItem QGraphicsSvgItem;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QSvgRenderer QSvgRenderer;
typedef struct QWidget QWidget;
#endif

void QGraphicsSvgItem_new(QGraphicsSvgItem** outptr_QGraphicsSvgItem, QGraphicsObject** outptr_QGraphicsObject, QObject** outptr_QObject, QGraphicsItem** outptr_QGraphicsItem);
void QGraphicsSvgItem_new2(struct miqt_string fileName, QGraphicsSvgItem** outptr_QGraphicsSvgItem, QGraphicsObject** outptr_QGraphicsObject, QObject** outptr_QObject, QGraphicsItem** outptr_QGraphicsItem);
void QGraphicsSvgItem_new3(QGraphicsItem* parentItem, QGraphicsSvgItem** outptr_QGraphicsSvgItem, QGraphicsObject** outptr_QGraphicsObject, QObject** outptr_QObject, QGraphicsItem** outptr_QGraphicsItem);
void QGraphicsSvgItem_new4(struct miqt_string fileName, QGraphicsItem* parentItem, QGraphicsSvgItem** outptr_QGraphicsSvgItem, QGraphicsObject** outptr_QGraphicsObject, QObject** outptr_QObject, QGraphicsItem** outptr_QGraphicsItem);
QMetaObject* QGraphicsSvgItem_MetaObject(const QGraphicsSvgItem* self);
void* QGraphicsSvgItem_Metacast(QGraphicsSvgItem* self, const char* param1);
struct miqt_string QGraphicsSvgItem_Tr(const char* s);
void QGraphicsSvgItem_SetSharedRenderer(QGraphicsSvgItem* self, QSvgRenderer* renderer);
QSvgRenderer* QGraphicsSvgItem_Renderer(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_SetElementId(QGraphicsSvgItem* self, struct miqt_string id);
struct miqt_string QGraphicsSvgItem_ElementId(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_SetCachingEnabled(QGraphicsSvgItem* self, bool cachingEnabled);
bool QGraphicsSvgItem_IsCachingEnabled(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_SetMaximumCacheSize(QGraphicsSvgItem* self, QSize* size);
QSize* QGraphicsSvgItem_MaximumCacheSize(const QGraphicsSvgItem* self);
QRectF* QGraphicsSvgItem_BoundingRect(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_Paint(QGraphicsSvgItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
int QGraphicsSvgItem_Type(const QGraphicsSvgItem* self);
struct miqt_string QGraphicsSvgItem_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsSvgItem_Tr3(const char* s, const char* c, int n);
void QGraphicsSvgItem_override_virtual_BoundingRect(void* self, intptr_t slot);
QRectF* QGraphicsSvgItem_virtualbase_BoundingRect(const void* self);
void QGraphicsSvgItem_override_virtual_Paint(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsSvgItem_override_virtual_Type(void* self, intptr_t slot);
int QGraphicsSvgItem_virtualbase_Type(const void* self);
void QGraphicsSvgItem_override_virtual_Event(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_Event(void* self, QEvent* ev);
void QGraphicsSvgItem_Delete(QGraphicsSvgItem* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
