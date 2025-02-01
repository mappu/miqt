#pragma once
#ifndef MIQT_QT6_GEN_QGRAPHICSPROXYWIDGET_H
#define MIQT_QT6_GEN_QGRAPHICSPROXYWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
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
class QMetaMethod;
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
class QTimerEvent;
class QVariant;
class QWidget;
#else
typedef struct QChildEvent QChildEvent;
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
typedef struct QMetaMethod QMetaMethod;
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
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QGraphicsProxyWidget* QGraphicsProxyWidget_new();
QGraphicsProxyWidget* QGraphicsProxyWidget_new2(QGraphicsItem* parent);
QGraphicsProxyWidget* QGraphicsProxyWidget_new3(QGraphicsItem* parent, int wFlags);
void QGraphicsProxyWidget_virtbase(QGraphicsProxyWidget* src, QGraphicsWidget** outptr_QGraphicsWidget);
QMetaObject* QGraphicsProxyWidget_metaObject(const QGraphicsProxyWidget* self);
void* QGraphicsProxyWidget_metacast(QGraphicsProxyWidget* self, const char* param1);
struct miqt_string QGraphicsProxyWidget_tr(const char* s);
void QGraphicsProxyWidget_setWidget(QGraphicsProxyWidget* self, QWidget* widget);
QWidget* QGraphicsProxyWidget_widget(const QGraphicsProxyWidget* self);
QRectF* QGraphicsProxyWidget_subWidgetRect(const QGraphicsProxyWidget* self, QWidget* widget);
void QGraphicsProxyWidget_setGeometry(QGraphicsProxyWidget* self, QRectF* rect);
void QGraphicsProxyWidget_paint(QGraphicsProxyWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
int QGraphicsProxyWidget_type(const QGraphicsProxyWidget* self);
QGraphicsProxyWidget* QGraphicsProxyWidget_createProxyForChildWidget(QGraphicsProxyWidget* self, QWidget* child);
QVariant* QGraphicsProxyWidget_itemChange(QGraphicsProxyWidget* self, int change, QVariant* value);
bool QGraphicsProxyWidget_event(QGraphicsProxyWidget* self, QEvent* event);
bool QGraphicsProxyWidget_eventFilter(QGraphicsProxyWidget* self, QObject* object, QEvent* event);
void QGraphicsProxyWidget_showEvent(QGraphicsProxyWidget* self, QShowEvent* event);
void QGraphicsProxyWidget_hideEvent(QGraphicsProxyWidget* self, QHideEvent* event);
void QGraphicsProxyWidget_contextMenuEvent(QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event);
void QGraphicsProxyWidget_dragEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsProxyWidget_dragLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsProxyWidget_dragMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsProxyWidget_dropEvent(QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsProxyWidget_hoverEnterEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsProxyWidget_hoverLeaveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsProxyWidget_hoverMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsProxyWidget_grabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
void QGraphicsProxyWidget_ungrabMouseEvent(QGraphicsProxyWidget* self, QEvent* event);
void QGraphicsProxyWidget_mouseMoveEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsProxyWidget_mousePressEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsProxyWidget_mouseReleaseEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsProxyWidget_mouseDoubleClickEvent(QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event);
void QGraphicsProxyWidget_wheelEvent(QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event);
void QGraphicsProxyWidget_keyPressEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
void QGraphicsProxyWidget_keyReleaseEvent(QGraphicsProxyWidget* self, QKeyEvent* event);
void QGraphicsProxyWidget_focusInEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
void QGraphicsProxyWidget_focusOutEvent(QGraphicsProxyWidget* self, QFocusEvent* event);
bool QGraphicsProxyWidget_focusNextPrevChild(QGraphicsProxyWidget* self, bool next);
QVariant* QGraphicsProxyWidget_inputMethodQuery(const QGraphicsProxyWidget* self, int query);
void QGraphicsProxyWidget_inputMethodEvent(QGraphicsProxyWidget* self, QInputMethodEvent* event);
QSizeF* QGraphicsProxyWidget_sizeHint(const QGraphicsProxyWidget* self, int which, QSizeF* constraint);
void QGraphicsProxyWidget_resizeEvent(QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event);
struct miqt_string QGraphicsProxyWidget_tr2(const char* s, const char* c);
struct miqt_string QGraphicsProxyWidget_tr3(const char* s, const char* c, int n);
bool QGraphicsProxyWidget_override_virtual_setGeometry(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_setGeometry(void* self, QRectF* rect);
bool QGraphicsProxyWidget_override_virtual_paint(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
bool QGraphicsProxyWidget_override_virtual_type(void* self, intptr_t slot);
int QGraphicsProxyWidget_virtualbase_type(const void* self);
bool QGraphicsProxyWidget_override_virtual_itemChange(void* self, intptr_t slot);
QVariant* QGraphicsProxyWidget_virtualbase_itemChange(void* self, int change, QVariant* value);
bool QGraphicsProxyWidget_override_virtual_event(void* self, intptr_t slot);
bool QGraphicsProxyWidget_virtualbase_event(void* self, QEvent* event);
bool QGraphicsProxyWidget_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGraphicsProxyWidget_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);
bool QGraphicsProxyWidget_override_virtual_showEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_showEvent(void* self, QShowEvent* event);
bool QGraphicsProxyWidget_override_virtual_hideEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QGraphicsProxyWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event);
bool QGraphicsProxyWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsProxyWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsProxyWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsProxyWidget_override_virtual_dropEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsProxyWidget_override_virtual_hoverEnterEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsProxyWidget_override_virtual_hoverLeaveEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsProxyWidget_override_virtual_hoverMoveEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsProxyWidget_override_virtual_grabMouseEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_grabMouseEvent(void* self, QEvent* event);
bool QGraphicsProxyWidget_override_virtual_ungrabMouseEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_ungrabMouseEvent(void* self, QEvent* event);
bool QGraphicsProxyWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsProxyWidget_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsProxyWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsProxyWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsProxyWidget_override_virtual_wheelEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event);
bool QGraphicsProxyWidget_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QGraphicsProxyWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QGraphicsProxyWidget_override_virtual_focusInEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QGraphicsProxyWidget_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QGraphicsProxyWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QGraphicsProxyWidget_virtualbase_focusNextPrevChild(void* self, bool next);
bool QGraphicsProxyWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QGraphicsProxyWidget_virtualbase_inputMethodQuery(const void* self, int query);
bool QGraphicsProxyWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);
bool QGraphicsProxyWidget_override_virtual_sizeHint(void* self, intptr_t slot);
QSizeF* QGraphicsProxyWidget_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint);
bool QGraphicsProxyWidget_override_virtual_resizeEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_resizeEvent(void* self, QGraphicsSceneResizeEvent* event);
bool QGraphicsProxyWidget_override_virtual_getContentsMargins(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);
bool QGraphicsProxyWidget_override_virtual_paintWindowFrame(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_paintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
bool QGraphicsProxyWidget_override_virtual_boundingRect(void* self, intptr_t slot);
QRectF* QGraphicsProxyWidget_virtualbase_boundingRect(const void* self);
bool QGraphicsProxyWidget_override_virtual_shape(void* self, intptr_t slot);
QPainterPath* QGraphicsProxyWidget_virtualbase_shape(const void* self);
bool QGraphicsProxyWidget_override_virtual_initStyleOption(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_initStyleOption(const void* self, QStyleOption* option);
bool QGraphicsProxyWidget_override_virtual_updateGeometry(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_updateGeometry(void* self);
bool QGraphicsProxyWidget_override_virtual_propertyChange(void* self, intptr_t slot);
QVariant* QGraphicsProxyWidget_virtualbase_propertyChange(void* self, struct miqt_string propertyName, QVariant* value);
bool QGraphicsProxyWidget_override_virtual_sceneEvent(void* self, intptr_t slot);
bool QGraphicsProxyWidget_virtualbase_sceneEvent(void* self, QEvent* event);
bool QGraphicsProxyWidget_override_virtual_windowFrameEvent(void* self, intptr_t slot);
bool QGraphicsProxyWidget_virtualbase_windowFrameEvent(void* self, QEvent* e);
bool QGraphicsProxyWidget_override_virtual_windowFrameSectionAt(void* self, intptr_t slot);
int QGraphicsProxyWidget_virtualbase_windowFrameSectionAt(const void* self, QPointF* pos);
bool QGraphicsProxyWidget_override_virtual_changeEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_changeEvent(void* self, QEvent* event);
bool QGraphicsProxyWidget_override_virtual_closeEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QGraphicsProxyWidget_override_virtual_moveEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_moveEvent(void* self, QGraphicsSceneMoveEvent* event);
bool QGraphicsProxyWidget_override_virtual_polishEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_polishEvent(void* self);
bool QGraphicsProxyWidget_override_virtual_grabKeyboardEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_grabKeyboardEvent(void* self, QEvent* event);
bool QGraphicsProxyWidget_override_virtual_ungrabKeyboardEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_ungrabKeyboardEvent(void* self, QEvent* event);
bool QGraphicsProxyWidget_override_virtual_timerEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGraphicsProxyWidget_override_virtual_childEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGraphicsProxyWidget_override_virtual_customEvent(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_customEvent(void* self, QEvent* event);
bool QGraphicsProxyWidget_override_virtual_connectNotify(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGraphicsProxyWidget_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QGraphicsProxyWidget_override_virtual_advance(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_advance(void* self, int phase);
bool QGraphicsProxyWidget_override_virtual_contains(void* self, intptr_t slot);
bool QGraphicsProxyWidget_virtualbase_contains(const void* self, QPointF* point);
bool QGraphicsProxyWidget_override_virtual_collidesWithItem(void* self, intptr_t slot);
bool QGraphicsProxyWidget_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode);
bool QGraphicsProxyWidget_override_virtual_collidesWithPath(void* self, intptr_t slot);
bool QGraphicsProxyWidget_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode);
bool QGraphicsProxyWidget_override_virtual_isObscuredBy(void* self, intptr_t slot);
bool QGraphicsProxyWidget_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item);
bool QGraphicsProxyWidget_override_virtual_opaqueArea(void* self, intptr_t slot);
QPainterPath* QGraphicsProxyWidget_virtualbase_opaqueArea(const void* self);
bool QGraphicsProxyWidget_override_virtual_sceneEventFilter(void* self, intptr_t slot);
bool QGraphicsProxyWidget_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event);
bool QGraphicsProxyWidget_override_virtual_supportsExtension(void* self, intptr_t slot);
bool QGraphicsProxyWidget_virtualbase_supportsExtension(const void* self, int extension);
bool QGraphicsProxyWidget_override_virtual_setExtension(void* self, intptr_t slot);
void QGraphicsProxyWidget_virtualbase_setExtension(void* self, int extension, QVariant* variant);
bool QGraphicsProxyWidget_override_virtual_extension(void* self, intptr_t slot);
QVariant* QGraphicsProxyWidget_virtualbase_extension(const void* self, QVariant* variant);
bool QGraphicsProxyWidget_override_virtual_isEmpty(void* self, intptr_t slot);
bool QGraphicsProxyWidget_virtualbase_isEmpty(const void* self);
void QGraphicsProxyWidget_delete(QGraphicsProxyWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
