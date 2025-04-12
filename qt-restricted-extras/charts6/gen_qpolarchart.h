#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QPOLARCHART_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QPOLARCHART_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractAxis;
class QAbstractSeries;
class QChart;
class QChildEvent;
class QCloseEvent;
class QEvent;
class QFocusEvent;
class QGraphicsItem;
class QGraphicsLayoutItem;
class QGraphicsObject;
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
class QPolarChart;
class QRectF;
class QShowEvent;
class QSizeF;
class QStyleOption;
class QStyleOptionGraphicsItem;
class QTimerEvent;
class QVariant;
class QWidget;
#else
typedef struct QAbstractAxis QAbstractAxis;
typedef struct QAbstractSeries QAbstractSeries;
typedef struct QChart QChart;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsLayoutItem QGraphicsLayoutItem;
typedef struct QGraphicsObject QGraphicsObject;
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
typedef struct QPolarChart QPolarChart;
typedef struct QRectF QRectF;
typedef struct QShowEvent QShowEvent;
typedef struct QSizeF QSizeF;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QPolarChart* QPolarChart_new();
QPolarChart* QPolarChart_new2(QGraphicsItem* parent);
QPolarChart* QPolarChart_new3(QGraphicsItem* parent, int wFlags);
void QPolarChart_virtbase(QPolarChart* src, QChart** outptr_QChart);
QMetaObject* QPolarChart_metaObject(const QPolarChart* self);
void* QPolarChart_metacast(QPolarChart* self, const char* param1);
struct miqt_string QPolarChart_tr(const char* s);
void QPolarChart_addAxis(QPolarChart* self, QAbstractAxis* axis, int polarOrientation);
struct miqt_array /* of QAbstractAxis* */  QPolarChart_axes(const QPolarChart* self);
int QPolarChart_axisPolarOrientation(QAbstractAxis* axis);
struct miqt_string QPolarChart_tr2(const char* s, const char* c);
struct miqt_string QPolarChart_tr3(const char* s, const char* c, int n);
struct miqt_array /* of QAbstractAxis* */  QPolarChart_axesWithPolarOrientation(const QPolarChart* self, int polarOrientation);
struct miqt_array /* of QAbstractAxis* */  QPolarChart_axes2(const QPolarChart* self, int polarOrientation, QAbstractSeries* series);
bool QPolarChart_override_virtual_setGeometry(void* self, intptr_t slot);
void QPolarChart_virtualbase_setGeometry(void* self, QRectF* rect);
bool QPolarChart_override_virtual_getContentsMargins(void* self, intptr_t slot);
void QPolarChart_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);
bool QPolarChart_override_virtual_type(void* self, intptr_t slot);
int QPolarChart_virtualbase_type(const void* self);
bool QPolarChart_override_virtual_paint(void* self, intptr_t slot);
void QPolarChart_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
bool QPolarChart_override_virtual_paintWindowFrame(void* self, intptr_t slot);
void QPolarChart_virtualbase_paintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
bool QPolarChart_override_virtual_boundingRect(void* self, intptr_t slot);
QRectF* QPolarChart_virtualbase_boundingRect(const void* self);
bool QPolarChart_override_virtual_shape(void* self, intptr_t slot);
QPainterPath* QPolarChart_virtualbase_shape(const void* self);
bool QPolarChart_override_virtual_initStyleOption(void* self, intptr_t slot);
void QPolarChart_virtualbase_initStyleOption(const void* self, QStyleOption* option);
bool QPolarChart_override_virtual_sizeHint(void* self, intptr_t slot);
QSizeF* QPolarChart_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint);
bool QPolarChart_override_virtual_updateGeometry(void* self, intptr_t slot);
void QPolarChart_virtualbase_updateGeometry(void* self);
bool QPolarChart_override_virtual_itemChange(void* self, intptr_t slot);
QVariant* QPolarChart_virtualbase_itemChange(void* self, int change, QVariant* value);
bool QPolarChart_override_virtual_propertyChange(void* self, intptr_t slot);
QVariant* QPolarChart_virtualbase_propertyChange(void* self, struct miqt_string propertyName, QVariant* value);
bool QPolarChart_override_virtual_sceneEvent(void* self, intptr_t slot);
bool QPolarChart_virtualbase_sceneEvent(void* self, QEvent* event);
bool QPolarChart_override_virtual_windowFrameEvent(void* self, intptr_t slot);
bool QPolarChart_virtualbase_windowFrameEvent(void* self, QEvent* e);
bool QPolarChart_override_virtual_windowFrameSectionAt(void* self, intptr_t slot);
int QPolarChart_virtualbase_windowFrameSectionAt(const void* self, QPointF* pos);
bool QPolarChart_override_virtual_event(void* self, intptr_t slot);
bool QPolarChart_virtualbase_event(void* self, QEvent* event);
bool QPolarChart_override_virtual_changeEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_changeEvent(void* self, QEvent* event);
bool QPolarChart_override_virtual_closeEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QPolarChart_override_virtual_focusInEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QPolarChart_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QPolarChart_virtualbase_focusNextPrevChild(void* self, bool next);
bool QPolarChart_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QPolarChart_override_virtual_hideEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QPolarChart_override_virtual_moveEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_moveEvent(void* self, QGraphicsSceneMoveEvent* event);
bool QPolarChart_override_virtual_polishEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_polishEvent(void* self);
bool QPolarChart_override_virtual_resizeEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_resizeEvent(void* self, QGraphicsSceneResizeEvent* event);
bool QPolarChart_override_virtual_showEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_showEvent(void* self, QShowEvent* event);
bool QPolarChart_override_virtual_hoverMoveEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QPolarChart_override_virtual_hoverLeaveEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QPolarChart_override_virtual_grabMouseEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_grabMouseEvent(void* self, QEvent* event);
bool QPolarChart_override_virtual_ungrabMouseEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_ungrabMouseEvent(void* self, QEvent* event);
bool QPolarChart_override_virtual_grabKeyboardEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_grabKeyboardEvent(void* self, QEvent* event);
bool QPolarChart_override_virtual_ungrabKeyboardEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_ungrabKeyboardEvent(void* self, QEvent* event);
bool QPolarChart_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPolarChart_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPolarChart_override_virtual_timerEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPolarChart_override_virtual_childEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPolarChart_override_virtual_customEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_customEvent(void* self, QEvent* event);
bool QPolarChart_override_virtual_connectNotify(void* self, intptr_t slot);
void QPolarChart_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPolarChart_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPolarChart_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QPolarChart_override_virtual_advance(void* self, intptr_t slot);
void QPolarChart_virtualbase_advance(void* self, int phase);
bool QPolarChart_override_virtual_contains(void* self, intptr_t slot);
bool QPolarChart_virtualbase_contains(const void* self, QPointF* point);
bool QPolarChart_override_virtual_collidesWithItem(void* self, intptr_t slot);
bool QPolarChart_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode);
bool QPolarChart_override_virtual_collidesWithPath(void* self, intptr_t slot);
bool QPolarChart_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode);
bool QPolarChart_override_virtual_isObscuredBy(void* self, intptr_t slot);
bool QPolarChart_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item);
bool QPolarChart_override_virtual_opaqueArea(void* self, intptr_t slot);
QPainterPath* QPolarChart_virtualbase_opaqueArea(const void* self);
bool QPolarChart_override_virtual_sceneEventFilter(void* self, intptr_t slot);
bool QPolarChart_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event);
bool QPolarChart_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event);
bool QPolarChart_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QPolarChart_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QPolarChart_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QPolarChart_override_virtual_dropEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QPolarChart_override_virtual_hoverEnterEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QPolarChart_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QPolarChart_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QPolarChart_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QPolarChart_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QPolarChart_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QPolarChart_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QPolarChart_override_virtual_wheelEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event);
bool QPolarChart_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QPolarChart_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);
bool QPolarChart_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QPolarChart_virtualbase_inputMethodQuery(const void* self, int query);
bool QPolarChart_override_virtual_supportsExtension(void* self, intptr_t slot);
bool QPolarChart_virtualbase_supportsExtension(const void* self, int extension);
bool QPolarChart_override_virtual_setExtension(void* self, intptr_t slot);
void QPolarChart_virtualbase_setExtension(void* self, int extension, QVariant* variant);
bool QPolarChart_override_virtual_extension(void* self, intptr_t slot);
QVariant* QPolarChart_virtualbase_extension(const void* self, QVariant* variant);
bool QPolarChart_override_virtual_isEmpty(void* self, intptr_t slot);
bool QPolarChart_virtualbase_isEmpty(const void* self);
void QPolarChart_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
QObject* QPolarChart_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPolarChart_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPolarChart_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPolarChart_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QPolarChart_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
void QPolarChart_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
void QPolarChart_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
void QPolarChart_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item);
void QPolarChart_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout);
void QPolarChart_delete(QPolarChart* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
