#pragma once
#ifndef MIQT_QT_GEN_QGRAPHICSPROXYWIDGET_H
#define MIQT_QT_GEN_QGRAPHICSPROXYWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCloseEvent;
class QEvent;
class QFocusEvent;
class QGraphicsItem;
class QGraphicsLayoutItem;
class QGraphicsObject;
class QGraphicsProxyWidget;
class QGraphicsSceneContextMenuEvent;
class QGraphicsSceneDragDropEvent;
class QGraphicsSceneHoverEvent;
class QGraphicsSceneMouseEvent;
class QGraphicsSceneMoveEvent;
class QGraphicsSceneResizeEvent;
class QGraphicsSceneWheelEvent;
class QGraphicsWidget;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMetaObject;
class QObject;
class QPainter;
class QPainterPath;
class QPointF;
class QRectF;
class QShowEvent;
class QSizeF;
class QStyleOption;
class QStyleOptionGraphicsItem;
class QVariant;
class QWidget;
#else
typedef struct QCloseEvent QCloseEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QGraphicsObject QGraphicsObject;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QGraphicsSceneContextMenuEvent QGraphicsSceneContextMenuEvent;
typedef struct QGraphicsSceneDragDropEvent QGraphicsSceneDragDropEvent;
typedef struct QGraphicsSceneHoverEvent QGraphicsSceneHoverEvent;
typedef struct QGraphicsSceneMouseEvent QGraphicsSceneMouseEvent;
typedef struct QGraphicsSceneMoveEvent QGraphicsSceneMoveEvent;
typedef struct QGraphicsSceneResizeEvent QGraphicsSceneResizeEvent;
typedef struct QGraphicsSceneWheelEvent QGraphicsSceneWheelEvent;
typedef struct QGraphicsWidget QGraphicsWidget;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QShowEvent QShowEvent;
typedef struct QSizeF QSizeF;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QGraphicsProxyWidget* QGraphicsProxyWidget_new();
QGraphicsProxyWidget* QGraphicsProxyWidget_new2(QGraphicsItem* parent);
QGraphicsProxyWidget* QGraphicsProxyWidget_new3(QGraphicsItem* parent, int wFlags);
void QGraphicsProxyWidget_virtbase(QGraphicsProxyWidget* src, QGraphicsWidget** outptr_QGraphicsWidget);
QMetaObject* QGraphicsProxyWidget_MetaObject(const QGraphicsProxyWidget* self);
void* QGraphicsProxyWidget_Metacast(QGraphicsProxyWidget* self, const char* param1);
struct miqt_string QGraphicsProxyWidget_Tr(const char* s);
struct miqt_string QGraphicsProxyWidget_TrUtf8(const char* s);
void QGraphicsProxyWidget_SetWidget(QGraphicsProxyWidget* self, QWidget* widget);
QWidget* QGraphicsProxyWidget_Widget(const QGraphicsProxyWidget* self);
QRectF* QGraphicsProxyWidget_SubWidgetRect(const QGraphicsProxyWidget* self, QWidget* widget);
void QGraphicsProxyWidget_SetGeometry(QGraphicsProxyWidget* self, QRectF* rect);
void QGraphicsProxyWidget_Paint(QGraphicsProxyWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
int QGraphicsProxyWidget_Type(const QGraphicsProxyWidget* self);
QGraphicsProxyWidget* QGraphicsProxyWidget_CreateProxyForChildWidget(QGraphicsProxyWidget* self, QWidget* child);
QVariant* QGraphicsProxyWidget_ItemChange(QGraphicsProxyWidget* self, int change, QVariant* value);
bool QGraphicsProxyWidget_Event(QGraphicsProxyWidget* self, QEvent* event);
bool QGraphicsProxyWidget_EventFilter(QGraphicsProxyWidget* self, QObject* object, QEvent* event);
void QGraphicsProxyWidget_ShowEvent(QGraphicsProxyWidget* self, QShowEvent* event);
void QGraphicsProxyWidget_HideEvent(QGraphicsProxyWidget* self, QHideEvent* event);
void QGraphicsProxyWidget_ContextMenuEvent(QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event);
void QGraphicsProxyWidget_DragEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsProxyWidget_DragLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsProxyWidget_DragMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsProxyWidget_DropEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsProxyWidget_HoverEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsProxyWidget_HoverLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsProxyWidget_HoverMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsProxyWidget_GrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
void QGraphicsProxyWidget_UngrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
void QGraphicsProxyWidget_MouseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsProxyWidget_MousePressEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsProxyWidget_MouseReleaseEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsProxyWidget_MouseDoubleClickEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsProxyWidget_WheelEvent(QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event);
void QGraphicsProxyWidget_KeyPressEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
void QGraphicsProxyWidget_KeyReleaseEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
void QGraphicsProxyWidget_FocusInEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
void QGraphicsProxyWidget_FocusOutEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
bool QGraphicsProxyWidget_FocusNextPrevChild(QGraphicsProxyWidget* self, bool next);
QVariant* QGraphicsProxyWidget_InputMethodQuery(const QGraphicsProxyWidget* self, int query);
void QGraphicsProxyWidget_InputMethodEvent(QGraphicsProxyWidget* self, QInputMethodEvent* event);
QSizeF* QGraphicsProxyWidget_SizeHint(const QGraphicsProxyWidget* self, int which, QSizeF* constraint);
void QGraphicsProxyWidget_ResizeEvent(QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event);
struct miqt_string QGraphicsProxyWidget_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsProxyWidget_Tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsProxyWidget_TrUtf82(const char* s, const char* c);
struct miqt_string QGraphicsProxyWidget_TrUtf83(const char* s, const char* c, int n);
bool QGraphicsProxyWidget_override_virtual_SetGeometry(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_SetGeometry(void* self, QRectF* rect);
bool QGraphicsProxyWidget_override_virtual_Paint(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_Paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
bool QGraphicsProxyWidget_override_virtual_Type(void* self, intptr_t slot);
int QGraphicsProxyWidget_virtualbase_Type(const void* self);
bool QGraphicsProxyWidget_override_virtual_ItemChange(void* self, intptr_t slot);
QVariant* QGraphicsProxyWidget_virtualbase_ItemChange(void* self, int change, QVariant* value);
bool QGraphicsProxyWidget_override_virtual_Event(void* self, intptr_t slot);
bool QGraphicsProxyWidget_virtualbase_Event(void* self, QEvent* event);
bool QGraphicsProxyWidget_override_virtual_EventFilter(void* self, intptr_t slot);
bool QGraphicsProxyWidget_virtualbase_EventFilter(void* self, QObject* object, QEvent* event);
bool QGraphicsProxyWidget_override_virtual_ShowEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QGraphicsProxyWidget_override_virtual_HideEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QGraphicsProxyWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_ContextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event);
bool QGraphicsProxyWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_DragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsProxyWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_DragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsProxyWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_DragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsProxyWidget_override_virtual_DropEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_DropEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsProxyWidget_override_virtual_HoverEnterEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_HoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsProxyWidget_override_virtual_HoverLeaveEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_HoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsProxyWidget_override_virtual_HoverMoveEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_HoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsProxyWidget_override_virtual_GrabMouseEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_GrabMouseEvent(void* self, QEvent* event);
bool QGraphicsProxyWidget_override_virtual_UngrabMouseEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_UngrabMouseEvent(void* self, QEvent* event);
bool QGraphicsProxyWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_MouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsProxyWidget_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_MousePressEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsProxyWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_MouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsProxyWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_MouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsProxyWidget_override_virtual_WheelEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_WheelEvent(void* self, QGraphicsSceneWheelEvent* event);
bool QGraphicsProxyWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
bool QGraphicsProxyWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QGraphicsProxyWidget_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QGraphicsProxyWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QGraphicsProxyWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QGraphicsProxyWidget_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QGraphicsProxyWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QGraphicsProxyWidget_virtualbase_InputMethodQuery(const void* self, int query);
bool QGraphicsProxyWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event);
bool QGraphicsProxyWidget_override_virtual_SizeHint(void* self, intptr_t slot);
QSizeF* QGraphicsProxyWidget_virtualbase_SizeHint(const void* self, int which, QSizeF* constraint);
bool QGraphicsProxyWidget_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_ResizeEvent(void* self, QGraphicsSceneResizeEvent* event);
bool QGraphicsProxyWidget_override_virtual_GetContentsMargins(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_GetContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);
bool QGraphicsProxyWidget_override_virtual_PaintWindowFrame(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_PaintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
bool QGraphicsProxyWidget_override_virtual_BoundingRect(void* self, intptr_t slot);
QRectF* QGraphicsProxyWidget_virtualbase_BoundingRect(const void* self);
bool QGraphicsProxyWidget_override_virtual_Shape(void* self, intptr_t slot);
QPainterPath* QGraphicsProxyWidget_virtualbase_Shape(const void* self);
bool QGraphicsProxyWidget_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_InitStyleOption(const void* self, QStyleOption* option);
bool QGraphicsProxyWidget_override_virtual_UpdateGeometry(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_UpdateGeometry(void* self);
bool QGraphicsProxyWidget_override_virtual_PropertyChange(void* self, intptr_t slot);
QVariant* QGraphicsProxyWidget_virtualbase_PropertyChange(void* self, struct miqt_string propertyName, QVariant* value);
bool QGraphicsProxyWidget_override_virtual_SceneEvent(void* self, intptr_t slot);
bool QGraphicsProxyWidget_virtualbase_SceneEvent(void* self, QEvent* event);
bool QGraphicsProxyWidget_override_virtual_WindowFrameEvent(void* self, intptr_t slot);
bool QGraphicsProxyWidget_virtualbase_WindowFrameEvent(void* self, QEvent* e);
bool QGraphicsProxyWidget_override_virtual_WindowFrameSectionAt(void* self, intptr_t slot);
int QGraphicsProxyWidget_virtualbase_WindowFrameSectionAt(const void* self, QPointF* pos);
bool QGraphicsProxyWidget_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_ChangeEvent(void* self, QEvent* event);
bool QGraphicsProxyWidget_override_virtual_CloseEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QGraphicsProxyWidget_override_virtual_MoveEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_MoveEvent(void* self, QGraphicsSceneMoveEvent* event);
bool QGraphicsProxyWidget_override_virtual_PolishEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_PolishEvent(void* self);
bool QGraphicsProxyWidget_override_virtual_GrabKeyboardEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_GrabKeyboardEvent(void* self, QEvent* event);
bool QGraphicsProxyWidget_override_virtual_UngrabKeyboardEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_UngrabKeyboardEvent(void* self, QEvent* event);
void QGraphicsProxyWidget_Delete(QGraphicsProxyWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
