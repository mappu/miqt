#pragma once
#ifndef MIQT_QT_SVG_GEN_QGRAPHICSSVGITEM_H
#define MIQT_QT_SVG_GEN_QGRAPHICSSVGITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QFocusEvent;
class QGraphicsItem;
class QGraphicsObject;
class QGraphicsSceneContextMenuEvent;
class QGraphicsSceneDragDropEvent;
class QGraphicsSceneHoverEvent;
class QGraphicsSceneMouseEvent;
class QGraphicsSceneWheelEvent;
class QGraphicsSvgItem;
class QInputMethodEvent;
class QKeyEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPainter;
class QPainterPath;
class QPointF;
class QRectF;
class QSize;
class QStyleOptionGraphicsItem;
class QSvgRenderer;
class QTimerEvent;
class QVariant;
class QWidget;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsObject QGraphicsObject;
typedef struct QGraphicsSceneContextMenuEvent QGraphicsSceneContextMenuEvent;
typedef struct QGraphicsSceneDragDropEvent QGraphicsSceneDragDropEvent;
typedef struct QGraphicsSceneHoverEvent QGraphicsSceneHoverEvent;
typedef struct QGraphicsSceneMouseEvent QGraphicsSceneMouseEvent;
typedef struct QGraphicsSceneWheelEvent QGraphicsSceneWheelEvent;
typedef struct QGraphicsSvgItem QGraphicsSvgItem;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QSvgRenderer QSvgRenderer;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QGraphicsSvgItem* QGraphicsSvgItem_new();
QGraphicsSvgItem* QGraphicsSvgItem_new2(struct miqt_string fileName);
QGraphicsSvgItem* QGraphicsSvgItem_new3(QGraphicsItem* parentItem);
QGraphicsSvgItem* QGraphicsSvgItem_new4(struct miqt_string fileName, QGraphicsItem* parentItem);
void QGraphicsSvgItem_virtbase(QGraphicsSvgItem* src, QGraphicsObject** outptr_QGraphicsObject);
QMetaObject* QGraphicsSvgItem_metaObject(const QGraphicsSvgItem* self);
void* QGraphicsSvgItem_metacast(QGraphicsSvgItem* self, const char* param1);
struct miqt_string QGraphicsSvgItem_tr(const char* s);
struct miqt_string QGraphicsSvgItem_trUtf8(const char* s);
void QGraphicsSvgItem_setSharedRenderer(QGraphicsSvgItem* self, QSvgRenderer* renderer);
QSvgRenderer* QGraphicsSvgItem_renderer(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_setElementId(QGraphicsSvgItem* self, struct miqt_string id);
struct miqt_string QGraphicsSvgItem_elementId(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_setCachingEnabled(QGraphicsSvgItem* self, bool cachingEnabled);
bool QGraphicsSvgItem_isCachingEnabled(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_setMaximumCacheSize(QGraphicsSvgItem* self, QSize* size);
QSize* QGraphicsSvgItem_maximumCacheSize(const QGraphicsSvgItem* self);
QRectF* QGraphicsSvgItem_boundingRect(const QGraphicsSvgItem* self);
void QGraphicsSvgItem_paint(QGraphicsSvgItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
int QGraphicsSvgItem_type(const QGraphicsSvgItem* self);
struct miqt_string QGraphicsSvgItem_tr2(const char* s, const char* c);
struct miqt_string QGraphicsSvgItem_tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsSvgItem_trUtf82(const char* s, const char* c);
struct miqt_string QGraphicsSvgItem_trUtf83(const char* s, const char* c, int n);
bool QGraphicsSvgItem_override_virtual_boundingRect(void* self, intptr_t slot);
QRectF* QGraphicsSvgItem_virtualbase_boundingRect(const void* self);
bool QGraphicsSvgItem_override_virtual_paint(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
bool QGraphicsSvgItem_override_virtual_type(void* self, intptr_t slot);
int QGraphicsSvgItem_virtualbase_type(const void* self);
bool QGraphicsSvgItem_override_virtual_event(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_event(void* self, QEvent* ev);
bool QGraphicsSvgItem_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGraphicsSvgItem_override_virtual_timerEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGraphicsSvgItem_override_virtual_childEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGraphicsSvgItem_override_virtual_customEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_customEvent(void* self, QEvent* event);
bool QGraphicsSvgItem_override_virtual_connectNotify(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGraphicsSvgItem_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QGraphicsSvgItem_override_virtual_advance(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_advance(void* self, int phase);
bool QGraphicsSvgItem_override_virtual_shape(void* self, intptr_t slot);
QPainterPath* QGraphicsSvgItem_virtualbase_shape(const void* self);
bool QGraphicsSvgItem_override_virtual_contains(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_contains(const void* self, QPointF* point);
bool QGraphicsSvgItem_override_virtual_collidesWithItem(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode);
bool QGraphicsSvgItem_override_virtual_collidesWithPath(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode);
bool QGraphicsSvgItem_override_virtual_isObscuredBy(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item);
bool QGraphicsSvgItem_override_virtual_opaqueArea(void* self, intptr_t slot);
QPainterPath* QGraphicsSvgItem_virtualbase_opaqueArea(const void* self);
bool QGraphicsSvgItem_override_virtual_sceneEventFilter(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event);
bool QGraphicsSvgItem_override_virtual_sceneEvent(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_sceneEvent(void* self, QEvent* event);
bool QGraphicsSvgItem_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event);
bool QGraphicsSvgItem_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsSvgItem_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsSvgItem_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsSvgItem_override_virtual_dropEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsSvgItem_override_virtual_focusInEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QGraphicsSvgItem_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QGraphicsSvgItem_override_virtual_hoverEnterEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsSvgItem_override_virtual_hoverMoveEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsSvgItem_override_virtual_hoverLeaveEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsSvgItem_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QGraphicsSvgItem_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QGraphicsSvgItem_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsSvgItem_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsSvgItem_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsSvgItem_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsSvgItem_override_virtual_wheelEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event);
bool QGraphicsSvgItem_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);
bool QGraphicsSvgItem_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QGraphicsSvgItem_virtualbase_inputMethodQuery(const void* self, int query);
bool QGraphicsSvgItem_override_virtual_itemChange(void* self, intptr_t slot);
QVariant* QGraphicsSvgItem_virtualbase_itemChange(void* self, int change, QVariant* value);
bool QGraphicsSvgItem_override_virtual_supportsExtension(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_supportsExtension(const void* self, int extension);
bool QGraphicsSvgItem_override_virtual_setExtension(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_setExtension(void* self, int extension, QVariant* variant);
bool QGraphicsSvgItem_override_virtual_extension(void* self, intptr_t slot);
QVariant* QGraphicsSvgItem_virtualbase_extension(const void* self, QVariant* variant);
void QGraphicsSvgItem_delete(QGraphicsSvgItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
