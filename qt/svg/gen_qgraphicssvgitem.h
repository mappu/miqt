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
QMetaObject* QGraphicsSvgItem_MetaObject(const QGraphicsSvgItem* self);
void* QGraphicsSvgItem_Metacast(QGraphicsSvgItem* self, const char* param1);
struct miqt_string QGraphicsSvgItem_Tr(const char* s);
struct miqt_string QGraphicsSvgItem_TrUtf8(const char* s);
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
struct miqt_string QGraphicsSvgItem_TrUtf82(const char* s, const char* c);
struct miqt_string QGraphicsSvgItem_TrUtf83(const char* s, const char* c, int n);
bool QGraphicsSvgItem_override_virtual_BoundingRect(void* self, intptr_t slot);
QRectF* QGraphicsSvgItem_virtualbase_BoundingRect(const void* self);
bool QGraphicsSvgItem_override_virtual_Paint(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
bool QGraphicsSvgItem_override_virtual_Type(void* self, intptr_t slot);
int QGraphicsSvgItem_virtualbase_Type(const void* self);
bool QGraphicsSvgItem_override_virtual_Event(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_Event(void* self, QEvent* ev);
bool QGraphicsSvgItem_override_virtual_EventFilter(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QGraphicsSvgItem_override_virtual_TimerEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QGraphicsSvgItem_override_virtual_ChildEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QGraphicsSvgItem_override_virtual_CustomEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_CustomEvent(void* self, QEvent* event);
bool QGraphicsSvgItem_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QGraphicsSvgItem_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
bool QGraphicsSvgItem_override_virtual_Advance(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_Advance(void* self, int phase);
bool QGraphicsSvgItem_override_virtual_Shape(void* self, intptr_t slot);
QPainterPath* QGraphicsSvgItem_virtualbase_Shape(const void* self);
bool QGraphicsSvgItem_override_virtual_Contains(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_Contains(const void* self, QPointF* point);
bool QGraphicsSvgItem_override_virtual_CollidesWithItem(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_CollidesWithItem(const void* self, QGraphicsItem* other, int mode);
bool QGraphicsSvgItem_override_virtual_CollidesWithPath(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_CollidesWithPath(const void* self, QPainterPath* path, int mode);
bool QGraphicsSvgItem_override_virtual_IsObscuredBy(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_IsObscuredBy(const void* self, QGraphicsItem* item);
bool QGraphicsSvgItem_override_virtual_OpaqueArea(void* self, intptr_t slot);
QPainterPath* QGraphicsSvgItem_virtualbase_OpaqueArea(const void* self);
bool QGraphicsSvgItem_override_virtual_SceneEventFilter(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_SceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event);
bool QGraphicsSvgItem_override_virtual_SceneEvent(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_SceneEvent(void* self, QEvent* event);
bool QGraphicsSvgItem_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event);
bool QGraphicsSvgItem_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsSvgItem_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsSvgItem_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsSvgItem_override_virtual_DropEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsSvgItem_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QGraphicsSvgItem_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QGraphicsSvgItem_override_virtual_HoverEnterEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsSvgItem_override_virtual_HoverMoveEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsSvgItem_override_virtual_HoverLeaveEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsSvgItem_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
bool QGraphicsSvgItem_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QGraphicsSvgItem_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsSvgItem_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsSvgItem_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsSvgItem_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsSvgItem_override_virtual_WheelEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event);
bool QGraphicsSvgItem_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event);
bool QGraphicsSvgItem_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QGraphicsSvgItem_virtualbase_InputMethodQuery(const void* self, int query);
bool QGraphicsSvgItem_override_virtual_ItemChange(void* self, intptr_t slot);
QVariant* QGraphicsSvgItem_virtualbase_ItemChange(void* self, int change, QVariant* value);
bool QGraphicsSvgItem_override_virtual_SupportsExtension(void* self, intptr_t slot);
bool QGraphicsSvgItem_virtualbase_SupportsExtension(const void* self, int extension);
bool QGraphicsSvgItem_override_virtual_SetExtension(void* self, intptr_t slot);
void QGraphicsSvgItem_virtualbase_SetExtension(void* self, int extension, QVariant* variant);
bool QGraphicsSvgItem_override_virtual_Extension(void* self, intptr_t slot);
QVariant* QGraphicsSvgItem_virtualbase_Extension(const void* self, QVariant* variant);
void QGraphicsSvgItem_Delete(QGraphicsSvgItem* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
