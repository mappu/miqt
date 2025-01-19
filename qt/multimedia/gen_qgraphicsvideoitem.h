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
QMetaObject* QGraphicsVideoItem_MetaObject(const QGraphicsVideoItem* self);
void* QGraphicsVideoItem_Metacast(QGraphicsVideoItem* self, const char* param1);
struct miqt_string QGraphicsVideoItem_Tr(const char* s);
struct miqt_string QGraphicsVideoItem_TrUtf8(const char* s);
QMediaObject* QGraphicsVideoItem_MediaObject(const QGraphicsVideoItem* self);
QAbstractVideoSurface* QGraphicsVideoItem_VideoSurface(const QGraphicsVideoItem* self);
int QGraphicsVideoItem_AspectRatioMode(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_SetAspectRatioMode(QGraphicsVideoItem* self, int mode);
QPointF* QGraphicsVideoItem_Offset(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_SetOffset(QGraphicsVideoItem* self, QPointF* offset);
QSizeF* QGraphicsVideoItem_Size(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_SetSize(QGraphicsVideoItem* self, QSizeF* size);
QSizeF* QGraphicsVideoItem_NativeSize(const QGraphicsVideoItem* self);
QRectF* QGraphicsVideoItem_BoundingRect(const QGraphicsVideoItem* self);
void QGraphicsVideoItem_Paint(QGraphicsVideoItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsVideoItem_NativeSizeChanged(QGraphicsVideoItem* self, QSizeF* size);
void QGraphicsVideoItem_connect_NativeSizeChanged(QGraphicsVideoItem* self, intptr_t slot);
void QGraphicsVideoItem_TimerEvent(QGraphicsVideoItem* self, QTimerEvent* event);
QVariant* QGraphicsVideoItem_ItemChange(QGraphicsVideoItem* self, int change, QVariant* value);
bool QGraphicsVideoItem_SetMediaObject(QGraphicsVideoItem* self, QMediaObject* object);
struct miqt_string QGraphicsVideoItem_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsVideoItem_Tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsVideoItem_TrUtf82(const char* s, const char* c);
struct miqt_string QGraphicsVideoItem_TrUtf83(const char* s, const char* c, int n);
bool QGraphicsVideoItem_override_virtual_MediaObject(void* self, intptr_t slot);
QMediaObject* QGraphicsVideoItem_virtualbase_MediaObject(const void* self);
bool QGraphicsVideoItem_override_virtual_BoundingRect(void* self, intptr_t slot);
QRectF* QGraphicsVideoItem_virtualbase_BoundingRect(const void* self);
bool QGraphicsVideoItem_override_virtual_Paint(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
bool QGraphicsVideoItem_override_virtual_TimerEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QGraphicsVideoItem_override_virtual_ItemChange(void* self, intptr_t slot);
QVariant* QGraphicsVideoItem_virtualbase_ItemChange(void* self, int change, QVariant* value);
bool QGraphicsVideoItem_override_virtual_SetMediaObject(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_SetMediaObject(void* self, QMediaObject* object);
bool QGraphicsVideoItem_override_virtual_Event(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_Event(void* self, QEvent* ev);
bool QGraphicsVideoItem_override_virtual_EventFilter(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QGraphicsVideoItem_override_virtual_ChildEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QGraphicsVideoItem_override_virtual_CustomEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_CustomEvent(void* self, QEvent* event);
bool QGraphicsVideoItem_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QGraphicsVideoItem_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
bool QGraphicsVideoItem_override_virtual_Advance(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_Advance(void* self, int phase);
bool QGraphicsVideoItem_override_virtual_Shape(void* self, intptr_t slot);
QPainterPath* QGraphicsVideoItem_virtualbase_Shape(const void* self);
bool QGraphicsVideoItem_override_virtual_Contains(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_Contains(const void* self, QPointF* point);
bool QGraphicsVideoItem_override_virtual_CollidesWithItem(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode);
bool QGraphicsVideoItem_override_virtual_CollidesWithPath(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode);
bool QGraphicsVideoItem_override_virtual_IsObscuredBy(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item);
bool QGraphicsVideoItem_override_virtual_OpaqueArea(void* self, intptr_t slot);
QPainterPath* QGraphicsVideoItem_virtualbase_OpaqueArea(const void* self);
bool QGraphicsVideoItem_override_virtual_Type(void* self, intptr_t slot);
int QGraphicsVideoItem_virtualbase_Type(const void* self);
bool QGraphicsVideoItem_override_virtual_SceneEventFilter(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event);
bool QGraphicsVideoItem_override_virtual_SceneEvent(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_SceneEvent(void* self, QEvent* event);
bool QGraphicsVideoItem_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event);
bool QGraphicsVideoItem_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsVideoItem_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsVideoItem_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsVideoItem_override_virtual_DropEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsVideoItem_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QGraphicsVideoItem_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QGraphicsVideoItem_override_virtual_HoverEnterEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsVideoItem_override_virtual_HoverMoveEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsVideoItem_override_virtual_HoverLeaveEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsVideoItem_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
bool QGraphicsVideoItem_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QGraphicsVideoItem_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsVideoItem_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsVideoItem_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsVideoItem_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsVideoItem_override_virtual_WheelEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event);
bool QGraphicsVideoItem_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event);
bool QGraphicsVideoItem_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QGraphicsVideoItem_virtualbase_InputMethodQuery(const void* self, int query);
bool QGraphicsVideoItem_override_virtual_SupportsExtension(void* self, intptr_t slot);
bool QGraphicsVideoItem_virtualbase_SupportsExtension(const void* self, int extension);
bool QGraphicsVideoItem_override_virtual_SetExtension(void* self, intptr_t slot);
void QGraphicsVideoItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant);
bool QGraphicsVideoItem_override_virtual_Extension(void* self, intptr_t slot);
QVariant* QGraphicsVideoItem_virtualbase_Extension(const void* self, QVariant* variant);
void QGraphicsVideoItem_Delete(QGraphicsVideoItem* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
