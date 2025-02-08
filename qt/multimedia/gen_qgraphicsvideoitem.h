#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QGRAPHICSVIDEOITEM_H
#define MIQT_QT_MULTIMEDIA_GEN_QGRAPHICSVIDEOITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractVideoSurface;
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
class QGraphicsVideoItem;
class QInputMethodEvent;
class QKeyEvent;
class QMediaBindableInterface;
class QMediaObject;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPainter;
class QPainterPath;
class QPointF;
class QRectF;
class QSizeF;
class QStyleOptionGraphicsItem;
class QTimerEvent;
class QVariant;
class QWidget;
#else
typedef struct QAbstractVideoSurface QAbstractVideoSurface;
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
typedef struct QGraphicsVideoItem QGraphicsVideoItem;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMediaBindableInterface QMediaBindableInterface;
typedef struct QMediaObject QMediaObject;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QGraphicsVideoItem* QGraphicsVideoItem_new();
QGraphicsVideoItem* QGraphicsVideoItem_new2(QGraphicsItem* parent);
void QGraphicsVideoItem_virtbase(QGraphicsVideoItem* src, QGraphicsObject** outptr_QGraphicsObject, QMediaBindableInterface** outptr_QMediaBindableInterface);
QMetaObject* QGraphicsVideoItem_metaObject(const QGraphicsVideoItem* self);
void* QGraphicsVideoItem_metacast(QGraphicsVideoItem* self, const char* param1);
struct miqt_string QGraphicsVideoItem_tr(const char* s);
struct miqt_string QGraphicsVideoItem_trUtf8(const char* s);
QMediaObject* QGraphicsVideoItem_mediaObject(const QGraphicsVideoItem* self);
QAbstractVideoSurface* QGraphicsVideoItem_videoSurface(const QGraphicsVideoItem* self);
int QGraphicsVideoItem_aspectRatioMode(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_setAspectRatioMode(QGraphicsVideoItem* self, int mode);
QPointF* QGraphicsVideoItem_offset(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_setOffset(QGraphicsVideoItem* self, QPointF* offset);
QSizeF* QGraphicsVideoItem_size(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_setSize(QGraphicsVideoItem* self, QSizeF* size);
QSizeF* QGraphicsVideoItem_nativeSize(const QGraphicsVideoItem* self);
QRectF* QGraphicsVideoItem_boundingRect(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_paint(QGraphicsVideoItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsVideoItem_nativeSizeChanged(QGraphicsVideoItem* self, QSizeF* size);
void QGraphicsVideoItem_connect_nativeSizeChanged(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_timerEvent(QGraphicsVideoItem* self, QTimerEvent* event);
QVariant* QGraphicsVideoItem_itemChange(QGraphicsVideoItem* self, int change, QVariant* value);
bool QGraphicsVideoItem_setMediaObject(QGraphicsVideoItem* self, QMediaObject* object);
struct miqt_string QGraphicsVideoItem_tr2(const char* s, const char* c);
struct miqt_string QGraphicsVideoItem_tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsVideoItem_trUtf82(const char* s, const char* c);
struct miqt_string QGraphicsVideoItem_trUtf83(const char* s, const char* c, int n);
bool QGraphicsVideoItem_override_virtual_mediaObject(void* self, intptr_t slot);
QMediaObject* QGraphicsVideoItem_virtualbase_mediaObject(const void* self);
bool QGraphicsVideoItem_override_virtual_boundingRect(void* self, intptr_t slot);
QRectF* QGraphicsVideoItem_virtualbase_boundingRect(const void* self);
bool QGraphicsVideoItem_override_virtual_paint(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
bool QGraphicsVideoItem_override_virtual_timerEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGraphicsVideoItem_override_virtual_itemChange(void* self, intptr_t slot);
QVariant* QGraphicsVideoItem_virtualbase_itemChange(void* self, int change, QVariant* value);
bool QGraphicsVideoItem_override_virtual_setMediaObject(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_setMediaObject(void* self, QMediaObject* object);
bool QGraphicsVideoItem_override_virtual_event(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_event(void* self, QEvent* ev);
bool QGraphicsVideoItem_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGraphicsVideoItem_override_virtual_childEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGraphicsVideoItem_override_virtual_customEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_customEvent(void* self, QEvent* event);
bool QGraphicsVideoItem_override_virtual_connectNotify(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGraphicsVideoItem_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QGraphicsVideoItem_override_virtual_advance(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_advance(void* self, int phase);
bool QGraphicsVideoItem_override_virtual_shape(void* self, intptr_t slot);
QPainterPath* QGraphicsVideoItem_virtualbase_shape(const void* self);
bool QGraphicsVideoItem_override_virtual_contains(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_contains(const void* self, QPointF* point);
bool QGraphicsVideoItem_override_virtual_collidesWithItem(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode);
bool QGraphicsVideoItem_override_virtual_collidesWithPath(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode);
bool QGraphicsVideoItem_override_virtual_isObscuredBy(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item);
bool QGraphicsVideoItem_override_virtual_opaqueArea(void* self, intptr_t slot);
QPainterPath* QGraphicsVideoItem_virtualbase_opaqueArea(const void* self);
bool QGraphicsVideoItem_override_virtual_type(void* self, intptr_t slot);
int QGraphicsVideoItem_virtualbase_type(const void* self);
bool QGraphicsVideoItem_override_virtual_sceneEventFilter(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event);
bool QGraphicsVideoItem_override_virtual_sceneEvent(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_sceneEvent(void* self, QEvent* event);
bool QGraphicsVideoItem_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event);
bool QGraphicsVideoItem_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsVideoItem_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsVideoItem_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsVideoItem_override_virtual_dropEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsVideoItem_override_virtual_focusInEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QGraphicsVideoItem_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QGraphicsVideoItem_override_virtual_hoverEnterEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsVideoItem_override_virtual_hoverMoveEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsVideoItem_override_virtual_hoverLeaveEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsVideoItem_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QGraphicsVideoItem_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QGraphicsVideoItem_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsVideoItem_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsVideoItem_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsVideoItem_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsVideoItem_override_virtual_wheelEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event);
bool QGraphicsVideoItem_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);
bool QGraphicsVideoItem_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QGraphicsVideoItem_virtualbase_inputMethodQuery(const void* self, int query);
bool QGraphicsVideoItem_override_virtual_supportsExtension(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_supportsExtension(const void* self, int extension);
bool QGraphicsVideoItem_override_virtual_setExtension(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_setExtension(void* self, int extension, QVariant* variant);
bool QGraphicsVideoItem_override_virtual_extension(void* self, intptr_t slot);
QVariant* QGraphicsVideoItem_virtualbase_extension(const void* self, QVariant* variant);
void QGraphicsVideoItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
QObject* QGraphicsVideoItem_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QGraphicsVideoItem_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QGraphicsVideoItem_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QGraphicsVideoItem_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QGraphicsVideoItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
void QGraphicsVideoItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
void QGraphicsVideoItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
void QGraphicsVideoItem_delete(QGraphicsVideoItem* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
