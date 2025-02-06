#pragma once
#ifndef MIQT_QT_GEN_QGRAPHICSWIDGET_H
#define MIQT_QT_GEN_QGRAPHICSWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QChildEvent;
class QCloseEvent;
class QEvent;
class QFocusEvent;
class QFont;
class QGraphicsItem;
class QGraphicsLayout;
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
class QKeySequence;
class QMarginsF;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPainter;
class QPainterPath;
class QPalette;
class QPointF;
class QRectF;
class QShowEvent;
class QSizeF;
class QStyle;
class QStyleOption;
class QStyleOptionGraphicsItem;
class QTimerEvent;
class QVariant;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsLayout QGraphicsLayout;
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
typedef struct QKeySequence QKeySequence;
typedef struct QMarginsF QMarginsF;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPalette QPalette;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QShowEvent QShowEvent;
typedef struct QSizeF QSizeF;
typedef struct QStyle QStyle;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionGraphicsItem QStyleOptionGraphicsItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QGraphicsWidget* QGraphicsWidget_new();
QGraphicsWidget* QGraphicsWidget_new2(QGraphicsItem* parent);
QGraphicsWidget* QGraphicsWidget_new3(QGraphicsItem* parent, int wFlags);
void QGraphicsWidget_virtbase(QGraphicsWidget* src, QGraphicsObject** outptr_QGraphicsObject, QGraphicsLayoutItem** outptr_QGraphicsLayoutItem);
QMetaObject* QGraphicsWidget_metaObject(const QGraphicsWidget* self);
void* QGraphicsWidget_metacast(QGraphicsWidget* self, const char* param1);
struct miqt_string QGraphicsWidget_tr(const char* s);
struct miqt_string QGraphicsWidget_trUtf8(const char* s);
QGraphicsLayout* QGraphicsWidget_layout(const QGraphicsWidget* self);
void QGraphicsWidget_setLayout(QGraphicsWidget* self, QGraphicsLayout* layout);
void QGraphicsWidget_adjustSize(QGraphicsWidget* self);
int QGraphicsWidget_layoutDirection(const QGraphicsWidget* self);
void QGraphicsWidget_setLayoutDirection(QGraphicsWidget* self, int direction);
void QGraphicsWidget_unsetLayoutDirection(QGraphicsWidget* self);
QStyle* QGraphicsWidget_style(const QGraphicsWidget* self);
void QGraphicsWidget_setStyle(QGraphicsWidget* self, QStyle* style);
QFont* QGraphicsWidget_font(const QGraphicsWidget* self);
void QGraphicsWidget_setFont(QGraphicsWidget* self, QFont* font);
QPalette* QGraphicsWidget_palette(const QGraphicsWidget* self);
void QGraphicsWidget_setPalette(QGraphicsWidget* self, QPalette* palette);
bool QGraphicsWidget_autoFillBackground(const QGraphicsWidget* self);
void QGraphicsWidget_setAutoFillBackground(QGraphicsWidget* self, bool enabled);
void QGraphicsWidget_resize(QGraphicsWidget* self, QSizeF* size);
void QGraphicsWidget_resize2(QGraphicsWidget* self, double w, double h);
QSizeF* QGraphicsWidget_size(const QGraphicsWidget* self);
void QGraphicsWidget_setGeometry(QGraphicsWidget* self, QRectF* rect);
void QGraphicsWidget_setGeometry2(QGraphicsWidget* self, double x, double y, double w, double h);
QRectF* QGraphicsWidget_rect(const QGraphicsWidget* self);
void QGraphicsWidget_setContentsMargins(QGraphicsWidget* self, double left, double top, double right, double bottom);
void QGraphicsWidget_setContentsMarginsWithMargins(QGraphicsWidget* self, QMarginsF* margins);
void QGraphicsWidget_getContentsMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom);
void QGraphicsWidget_setWindowFrameMargins(QGraphicsWidget* self, double left, double top, double right, double bottom);
void QGraphicsWidget_setWindowFrameMarginsWithMargins(QGraphicsWidget* self, QMarginsF* margins);
void QGraphicsWidget_getWindowFrameMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom);
void QGraphicsWidget_unsetWindowFrameMargins(QGraphicsWidget* self);
QRectF* QGraphicsWidget_windowFrameGeometry(const QGraphicsWidget* self);
QRectF* QGraphicsWidget_windowFrameRect(const QGraphicsWidget* self);
int QGraphicsWidget_windowFlags(const QGraphicsWidget* self);
int QGraphicsWidget_windowType(const QGraphicsWidget* self);
void QGraphicsWidget_setWindowFlags(QGraphicsWidget* self, int wFlags);
bool QGraphicsWidget_isActiveWindow(const QGraphicsWidget* self);
void QGraphicsWidget_setWindowTitle(QGraphicsWidget* self, struct miqt_string title);
struct miqt_string QGraphicsWidget_windowTitle(const QGraphicsWidget* self);
int QGraphicsWidget_focusPolicy(const QGraphicsWidget* self);
void QGraphicsWidget_setFocusPolicy(QGraphicsWidget* self, int policy);
void QGraphicsWidget_setTabOrder(QGraphicsWidget* first, QGraphicsWidget* second);
QGraphicsWidget* QGraphicsWidget_focusWidget(const QGraphicsWidget* self);
int QGraphicsWidget_grabShortcut(QGraphicsWidget* self, QKeySequence* sequence);
void QGraphicsWidget_releaseShortcut(QGraphicsWidget* self, int id);
void QGraphicsWidget_setShortcutEnabled(QGraphicsWidget* self, int id);
void QGraphicsWidget_setShortcutAutoRepeat(QGraphicsWidget* self, int id);
void QGraphicsWidget_addAction(QGraphicsWidget* self, QAction* action);
void QGraphicsWidget_addActions(QGraphicsWidget* self, struct miqt_array /* of QAction* */  actions);
void QGraphicsWidget_insertActions(QGraphicsWidget* self, QAction* before, struct miqt_array /* of QAction* */  actions);
void QGraphicsWidget_insertAction(QGraphicsWidget* self, QAction* before, QAction* action);
void QGraphicsWidget_removeAction(QGraphicsWidget* self, QAction* action);
struct miqt_array /* of QAction* */  QGraphicsWidget_actions(const QGraphicsWidget* self);
void QGraphicsWidget_setAttribute(QGraphicsWidget* self, int attribute);
bool QGraphicsWidget_testAttribute(const QGraphicsWidget* self, int attribute);
int QGraphicsWidget_type(const QGraphicsWidget* self);
void QGraphicsWidget_paint(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
void QGraphicsWidget_paintWindowFrame(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
QRectF* QGraphicsWidget_boundingRect(const QGraphicsWidget* self);
QPainterPath* QGraphicsWidget_shape(const QGraphicsWidget* self);
void QGraphicsWidget_geometryChanged(QGraphicsWidget* self);
void QGraphicsWidget_connect_geometryChanged(QGraphicsWidget* self, intptr_t slot);
void QGraphicsWidget_layoutChanged(QGraphicsWidget* self);
void QGraphicsWidget_connect_layoutChanged(QGraphicsWidget* self, intptr_t slot);
bool QGraphicsWidget_close(QGraphicsWidget* self);
void QGraphicsWidget_initStyleOption(const QGraphicsWidget* self, QStyleOption* option);
QSizeF* QGraphicsWidget_sizeHint(const QGraphicsWidget* self, int which, QSizeF* constraint);
void QGraphicsWidget_updateGeometry(QGraphicsWidget* self);
QVariant* QGraphicsWidget_itemChange(QGraphicsWidget* self, int change, QVariant* value);
QVariant* QGraphicsWidget_propertyChange(QGraphicsWidget* self, struct miqt_string propertyName, QVariant* value);
bool QGraphicsWidget_sceneEvent(QGraphicsWidget* self, QEvent* event);
bool QGraphicsWidget_windowFrameEvent(QGraphicsWidget* self, QEvent* e);
int QGraphicsWidget_windowFrameSectionAt(const QGraphicsWidget* self, QPointF* pos);
bool QGraphicsWidget_event(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_changeEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_closeEvent(QGraphicsWidget* self, QCloseEvent* event);
void QGraphicsWidget_focusInEvent(QGraphicsWidget* self, QFocusEvent* event);
bool QGraphicsWidget_focusNextPrevChild(QGraphicsWidget* self, bool next);
void QGraphicsWidget_focusOutEvent(QGraphicsWidget* self, QFocusEvent* event);
void QGraphicsWidget_hideEvent(QGraphicsWidget* self, QHideEvent* event);
void QGraphicsWidget_moveEvent(QGraphicsWidget* self, QGraphicsSceneMoveEvent* event);
void QGraphicsWidget_polishEvent(QGraphicsWidget* self);
void QGraphicsWidget_resizeEvent(QGraphicsWidget* self, QGraphicsSceneResizeEvent* event);
void QGraphicsWidget_showEvent(QGraphicsWidget* self, QShowEvent* event);
void QGraphicsWidget_hoverMoveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsWidget_hoverLeaveEvent(QGraphicsWidget* self, QGraphicsSceneHoverEvent* event);
void QGraphicsWidget_grabMouseEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_ungrabMouseEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_grabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
void QGraphicsWidget_ungrabKeyboardEvent(QGraphicsWidget* self, QEvent* event);
struct miqt_string QGraphicsWidget_tr2(const char* s, const char* c);
struct miqt_string QGraphicsWidget_tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsWidget_trUtf82(const char* s, const char* c);
struct miqt_string QGraphicsWidget_trUtf83(const char* s, const char* c, int n);
int QGraphicsWidget_grabShortcut2(QGraphicsWidget* self, QKeySequence* sequence, int context);
void QGraphicsWidget_setShortcutEnabled2(QGraphicsWidget* self, int id, bool enabled);
void QGraphicsWidget_setShortcutAutoRepeat2(QGraphicsWidget* self, int id, bool enabled);
void QGraphicsWidget_setAttribute2(QGraphicsWidget* self, int attribute, bool on);
bool QGraphicsWidget_override_virtual_setGeometry(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_setGeometry(void* self, QRectF* rect);
bool QGraphicsWidget_override_virtual_getContentsMargins(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);
bool QGraphicsWidget_override_virtual_type(void* self, intptr_t slot);
int QGraphicsWidget_virtualbase_type(const void* self);
bool QGraphicsWidget_override_virtual_paint(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
bool QGraphicsWidget_override_virtual_paintWindowFrame(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_paintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);
bool QGraphicsWidget_override_virtual_boundingRect(void* self, intptr_t slot);
QRectF* QGraphicsWidget_virtualbase_boundingRect(const void* self);
bool QGraphicsWidget_override_virtual_shape(void* self, intptr_t slot);
QPainterPath* QGraphicsWidget_virtualbase_shape(const void* self);
bool QGraphicsWidget_override_virtual_initStyleOption(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_initStyleOption(const void* self, QStyleOption* option);
bool QGraphicsWidget_override_virtual_sizeHint(void* self, intptr_t slot);
QSizeF* QGraphicsWidget_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint);
bool QGraphicsWidget_override_virtual_updateGeometry(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_updateGeometry(void* self);
bool QGraphicsWidget_override_virtual_itemChange(void* self, intptr_t slot);
QVariant* QGraphicsWidget_virtualbase_itemChange(void* self, int change, QVariant* value);
bool QGraphicsWidget_override_virtual_propertyChange(void* self, intptr_t slot);
QVariant* QGraphicsWidget_virtualbase_propertyChange(void* self, struct miqt_string propertyName, QVariant* value);
bool QGraphicsWidget_override_virtual_sceneEvent(void* self, intptr_t slot);
bool QGraphicsWidget_virtualbase_sceneEvent(void* self, QEvent* event);
bool QGraphicsWidget_override_virtual_windowFrameEvent(void* self, intptr_t slot);
bool QGraphicsWidget_virtualbase_windowFrameEvent(void* self, QEvent* e);
bool QGraphicsWidget_override_virtual_windowFrameSectionAt(void* self, intptr_t slot);
int QGraphicsWidget_virtualbase_windowFrameSectionAt(const void* self, QPointF* pos);
bool QGraphicsWidget_override_virtual_event(void* self, intptr_t slot);
bool QGraphicsWidget_virtualbase_event(void* self, QEvent* event);
bool QGraphicsWidget_override_virtual_changeEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_changeEvent(void* self, QEvent* event);
bool QGraphicsWidget_override_virtual_closeEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QGraphicsWidget_override_virtual_focusInEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QGraphicsWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QGraphicsWidget_virtualbase_focusNextPrevChild(void* self, bool next);
bool QGraphicsWidget_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QGraphicsWidget_override_virtual_hideEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QGraphicsWidget_override_virtual_moveEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_moveEvent(void* self, QGraphicsSceneMoveEvent* event);
bool QGraphicsWidget_override_virtual_polishEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_polishEvent(void* self);
bool QGraphicsWidget_override_virtual_resizeEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_resizeEvent(void* self, QGraphicsSceneResizeEvent* event);
bool QGraphicsWidget_override_virtual_showEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_showEvent(void* self, QShowEvent* event);
bool QGraphicsWidget_override_virtual_hoverMoveEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsWidget_override_virtual_hoverLeaveEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsWidget_override_virtual_grabMouseEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_grabMouseEvent(void* self, QEvent* event);
bool QGraphicsWidget_override_virtual_ungrabMouseEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_ungrabMouseEvent(void* self, QEvent* event);
bool QGraphicsWidget_override_virtual_grabKeyboardEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_grabKeyboardEvent(void* self, QEvent* event);
bool QGraphicsWidget_override_virtual_ungrabKeyboardEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_ungrabKeyboardEvent(void* self, QEvent* event);
bool QGraphicsWidget_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGraphicsWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGraphicsWidget_override_virtual_timerEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGraphicsWidget_override_virtual_childEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGraphicsWidget_override_virtual_customEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_customEvent(void* self, QEvent* event);
bool QGraphicsWidget_override_virtual_connectNotify(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGraphicsWidget_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
bool QGraphicsWidget_override_virtual_advance(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_advance(void* self, int phase);
bool QGraphicsWidget_override_virtual_contains(void* self, intptr_t slot);
bool QGraphicsWidget_virtualbase_contains(const void* self, QPointF* point);
bool QGraphicsWidget_override_virtual_collidesWithItem(void* self, intptr_t slot);
bool QGraphicsWidget_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode);
bool QGraphicsWidget_override_virtual_collidesWithPath(void* self, intptr_t slot);
bool QGraphicsWidget_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode);
bool QGraphicsWidget_override_virtual_isObscuredBy(void* self, intptr_t slot);
bool QGraphicsWidget_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item);
bool QGraphicsWidget_override_virtual_opaqueArea(void* self, intptr_t slot);
QPainterPath* QGraphicsWidget_virtualbase_opaqueArea(const void* self);
bool QGraphicsWidget_override_virtual_sceneEventFilter(void* self, intptr_t slot);
bool QGraphicsWidget_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event);
bool QGraphicsWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event);
bool QGraphicsWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsWidget_override_virtual_dropEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event);
bool QGraphicsWidget_override_virtual_hoverEnterEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event);
bool QGraphicsWidget_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QGraphicsWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QGraphicsWidget_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event);
bool QGraphicsWidget_override_virtual_wheelEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event);
bool QGraphicsWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);
bool QGraphicsWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QGraphicsWidget_virtualbase_inputMethodQuery(const void* self, int query);
bool QGraphicsWidget_override_virtual_supportsExtension(void* self, intptr_t slot);
bool QGraphicsWidget_virtualbase_supportsExtension(const void* self, int extension);
bool QGraphicsWidget_override_virtual_setExtension(void* self, intptr_t slot);
void QGraphicsWidget_virtualbase_setExtension(void* self, int extension, QVariant* variant);
bool QGraphicsWidget_override_virtual_extension(void* self, intptr_t slot);
QVariant* QGraphicsWidget_virtualbase_extension(const void* self, QVariant* variant);
void QGraphicsWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
QObject* QGraphicsWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QGraphicsWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QGraphicsWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QGraphicsWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QGraphicsWidget_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
void QGraphicsWidget_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
void QGraphicsWidget_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
void QGraphicsWidget_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item);
void QGraphicsWidget_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout);
void QGraphicsWidget_delete(QGraphicsWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
