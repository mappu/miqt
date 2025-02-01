#pragma once
#ifndef MIQT_QT_GEN_QGRAPHICSVIEW_H
#define MIQT_QT_GEN_QGRAPHICSVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractScrollArea;
class QActionEvent;
class QBrush;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QGraphicsItem;
class QGraphicsScene;
class QGraphicsView;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMatrix;
class QMetaMethod;
class QMetaObject;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPainterPath;
class QPoint;
class QPointF;
class QRect;
class QRectF;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QTransform;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QActionEvent QActionEvent;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsScene QGraphicsScene;
typedef struct QGraphicsView QGraphicsView;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMatrix QMatrix;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QGraphicsView* QGraphicsView_new(QWidget* parent);
QGraphicsView* QGraphicsView_new2();
QGraphicsView* QGraphicsView_new3(QGraphicsScene* scene);
QGraphicsView* QGraphicsView_new4(QGraphicsScene* scene, QWidget* parent);
void QGraphicsView_virtbase(QGraphicsView* src, QAbstractScrollArea** outptr_QAbstractScrollArea);
QMetaObject* QGraphicsView_metaObject(const QGraphicsView* self);
void* QGraphicsView_metacast(QGraphicsView* self, const char* param1);
struct miqt_string QGraphicsView_tr(const char* s);
struct miqt_string QGraphicsView_trUtf8(const char* s);
QSize* QGraphicsView_sizeHint(const QGraphicsView* self);
int QGraphicsView_renderHints(const QGraphicsView* self);
void QGraphicsView_setRenderHint(QGraphicsView* self, int hint);
void QGraphicsView_setRenderHints(QGraphicsView* self, int hints);
int QGraphicsView_alignment(const QGraphicsView* self);
void QGraphicsView_setAlignment(QGraphicsView* self, int alignment);
int QGraphicsView_transformationAnchor(const QGraphicsView* self);
void QGraphicsView_setTransformationAnchor(QGraphicsView* self, int anchor);
int QGraphicsView_resizeAnchor(const QGraphicsView* self);
void QGraphicsView_setResizeAnchor(QGraphicsView* self, int anchor);
int QGraphicsView_viewportUpdateMode(const QGraphicsView* self);
void QGraphicsView_setViewportUpdateMode(QGraphicsView* self, int mode);
int QGraphicsView_optimizationFlags(const QGraphicsView* self);
void QGraphicsView_setOptimizationFlag(QGraphicsView* self, int flag);
void QGraphicsView_setOptimizationFlags(QGraphicsView* self, int flags);
int QGraphicsView_dragMode(const QGraphicsView* self);
void QGraphicsView_setDragMode(QGraphicsView* self, int mode);
int QGraphicsView_rubberBandSelectionMode(const QGraphicsView* self);
void QGraphicsView_setRubberBandSelectionMode(QGraphicsView* self, int mode);
QRect* QGraphicsView_rubberBandRect(const QGraphicsView* self);
int QGraphicsView_cacheMode(const QGraphicsView* self);
void QGraphicsView_setCacheMode(QGraphicsView* self, int mode);
void QGraphicsView_resetCachedContent(QGraphicsView* self);
bool QGraphicsView_isInteractive(const QGraphicsView* self);
void QGraphicsView_setInteractive(QGraphicsView* self, bool allowed);
QGraphicsScene* QGraphicsView_scene(const QGraphicsView* self);
void QGraphicsView_setScene(QGraphicsView* self, QGraphicsScene* scene);
QRectF* QGraphicsView_sceneRect(const QGraphicsView* self);
void QGraphicsView_setSceneRect(QGraphicsView* self, QRectF* rect);
void QGraphicsView_setSceneRect2(QGraphicsView* self, double x, double y, double w, double h);
QMatrix* QGraphicsView_matrix(const QGraphicsView* self);
void QGraphicsView_setMatrix(QGraphicsView* self, QMatrix* matrix);
void QGraphicsView_resetMatrix(QGraphicsView* self);
QTransform* QGraphicsView_transform(const QGraphicsView* self);
QTransform* QGraphicsView_viewportTransform(const QGraphicsView* self);
bool QGraphicsView_isTransformed(const QGraphicsView* self);
void QGraphicsView_setTransform(QGraphicsView* self, QTransform* matrix);
void QGraphicsView_resetTransform(QGraphicsView* self);
void QGraphicsView_rotate(QGraphicsView* self, double angle);
void QGraphicsView_scale(QGraphicsView* self, double sx, double sy);
void QGraphicsView_shear(QGraphicsView* self, double sh, double sv);
void QGraphicsView_translate(QGraphicsView* self, double dx, double dy);
void QGraphicsView_centerOn(QGraphicsView* self, QPointF* pos);
void QGraphicsView_centerOn2(QGraphicsView* self, double x, double y);
void QGraphicsView_centerOnWithItem(QGraphicsView* self, QGraphicsItem* item);
void QGraphicsView_ensureVisible(QGraphicsView* self, QRectF* rect);
void QGraphicsView_ensureVisible2(QGraphicsView* self, double x, double y, double w, double h);
void QGraphicsView_ensureVisibleWithItem(QGraphicsView* self, QGraphicsItem* item);
void QGraphicsView_fitInView(QGraphicsView* self, QRectF* rect);
void QGraphicsView_fitInView2(QGraphicsView* self, double x, double y, double w, double h);
void QGraphicsView_fitInViewWithItem(QGraphicsView* self, QGraphicsItem* item);
void QGraphicsView_render(QGraphicsView* self, QPainter* painter);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_items(const QGraphicsView* self);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_itemsWithPos(const QGraphicsView* self, QPoint* pos);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_items2(const QGraphicsView* self, int x, int y);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_itemsWithRect(const QGraphicsView* self, QRect* rect);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_items3(const QGraphicsView* self, int x, int y, int w, int h);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_itemsWithPath(const QGraphicsView* self, QPainterPath* path);
QGraphicsItem* QGraphicsView_itemAt(const QGraphicsView* self, QPoint* pos);
QGraphicsItem* QGraphicsView_itemAt2(const QGraphicsView* self, int x, int y);
QPointF* QGraphicsView_mapToScene(const QGraphicsView* self, QPoint* point);
QPainterPath* QGraphicsView_mapToSceneWithPath(const QGraphicsView* self, QPainterPath* path);
QPoint* QGraphicsView_mapFromScene(const QGraphicsView* self, QPointF* point);
QPainterPath* QGraphicsView_mapFromSceneWithPath(const QGraphicsView* self, QPainterPath* path);
QPointF* QGraphicsView_mapToScene2(const QGraphicsView* self, int x, int y);
QPoint* QGraphicsView_mapFromScene2(const QGraphicsView* self, double x, double y);
QVariant* QGraphicsView_inputMethodQuery(const QGraphicsView* self, int query);
QBrush* QGraphicsView_backgroundBrush(const QGraphicsView* self);
void QGraphicsView_setBackgroundBrush(QGraphicsView* self, QBrush* brush);
QBrush* QGraphicsView_foregroundBrush(const QGraphicsView* self);
void QGraphicsView_setForegroundBrush(QGraphicsView* self, QBrush* brush);
void QGraphicsView_updateScene(QGraphicsView* self, struct miqt_array /* of QRectF* */  rects);
void QGraphicsView_invalidateScene(QGraphicsView* self);
void QGraphicsView_updateSceneRect(QGraphicsView* self, QRectF* rect);
void QGraphicsView_rubberBandChanged(QGraphicsView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint);
void QGraphicsView_connect_rubberBandChanged(QGraphicsView* self, intptr_t slot);
void QGraphicsView_setupViewport(QGraphicsView* self, QWidget* widget);
bool QGraphicsView_event(QGraphicsView* self, QEvent* event);
bool QGraphicsView_viewportEvent(QGraphicsView* self, QEvent* event);
void QGraphicsView_contextMenuEvent(QGraphicsView* self, QContextMenuEvent* event);
void QGraphicsView_dragEnterEvent(QGraphicsView* self, QDragEnterEvent* event);
void QGraphicsView_dragLeaveEvent(QGraphicsView* self, QDragLeaveEvent* event);
void QGraphicsView_dragMoveEvent(QGraphicsView* self, QDragMoveEvent* event);
void QGraphicsView_dropEvent(QGraphicsView* self, QDropEvent* event);
void QGraphicsView_focusInEvent(QGraphicsView* self, QFocusEvent* event);
bool QGraphicsView_focusNextPrevChild(QGraphicsView* self, bool next);
void QGraphicsView_focusOutEvent(QGraphicsView* self, QFocusEvent* event);
void QGraphicsView_keyPressEvent(QGraphicsView* self, QKeyEvent* event);
void QGraphicsView_keyReleaseEvent(QGraphicsView* self, QKeyEvent* event);
void QGraphicsView_mouseDoubleClickEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_mousePressEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_mouseMoveEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_mouseReleaseEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_wheelEvent(QGraphicsView* self, QWheelEvent* event);
void QGraphicsView_paintEvent(QGraphicsView* self, QPaintEvent* event);
void QGraphicsView_resizeEvent(QGraphicsView* self, QResizeEvent* event);
void QGraphicsView_scrollContentsBy(QGraphicsView* self, int dx, int dy);
void QGraphicsView_showEvent(QGraphicsView* self, QShowEvent* event);
void QGraphicsView_inputMethodEvent(QGraphicsView* self, QInputMethodEvent* event);
void QGraphicsView_drawBackground(QGraphicsView* self, QPainter* painter, QRectF* rect);
void QGraphicsView_drawForeground(QGraphicsView* self, QPainter* painter, QRectF* rect);
struct miqt_string QGraphicsView_tr2(const char* s, const char* c);
struct miqt_string QGraphicsView_tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsView_trUtf82(const char* s, const char* c);
struct miqt_string QGraphicsView_trUtf83(const char* s, const char* c, int n);
void QGraphicsView_setRenderHint2(QGraphicsView* self, int hint, bool enabled);
void QGraphicsView_setOptimizationFlag2(QGraphicsView* self, int flag, bool enabled);
void QGraphicsView_setMatrix2(QGraphicsView* self, QMatrix* matrix, bool combine);
void QGraphicsView_setTransform2(QGraphicsView* self, QTransform* matrix, bool combine);
void QGraphicsView_ensureVisible22(QGraphicsView* self, QRectF* rect, int xmargin);
void QGraphicsView_ensureVisible3(QGraphicsView* self, QRectF* rect, int xmargin, int ymargin);
void QGraphicsView_ensureVisible5(QGraphicsView* self, double x, double y, double w, double h, int xmargin);
void QGraphicsView_ensureVisible6(QGraphicsView* self, double x, double y, double w, double h, int xmargin, int ymargin);
void QGraphicsView_ensureVisible23(QGraphicsView* self, QGraphicsItem* item, int xmargin);
void QGraphicsView_ensureVisible32(QGraphicsView* self, QGraphicsItem* item, int xmargin, int ymargin);
void QGraphicsView_fitInView22(QGraphicsView* self, QRectF* rect, int aspectRadioMode);
void QGraphicsView_fitInView5(QGraphicsView* self, double x, double y, double w, double h, int aspectRadioMode);
void QGraphicsView_fitInView23(QGraphicsView* self, QGraphicsItem* item, int aspectRadioMode);
void QGraphicsView_render2(QGraphicsView* self, QPainter* painter, QRectF* target);
void QGraphicsView_render3(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source);
void QGraphicsView_render4(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source, int aspectRatioMode);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_items22(const QGraphicsView* self, QRect* rect, int mode);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_items5(const QGraphicsView* self, int x, int y, int w, int h, int mode);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_items24(const QGraphicsView* self, QPainterPath* path, int mode);
void QGraphicsView_invalidateScene1(QGraphicsView* self, QRectF* rect);
void QGraphicsView_invalidateScene2(QGraphicsView* self, QRectF* rect, int layers);
bool QGraphicsView_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QGraphicsView_virtualbase_sizeHint(const void* self);
bool QGraphicsView_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QGraphicsView_virtualbase_inputMethodQuery(const void* self, int query);
bool QGraphicsView_override_virtual_setupViewport(void* self, intptr_t slot);
void QGraphicsView_virtualbase_setupViewport(void* self, QWidget* widget);
bool QGraphicsView_override_virtual_event(void* self, intptr_t slot);
bool QGraphicsView_virtualbase_event(void* self, QEvent* event);
bool QGraphicsView_override_virtual_viewportEvent(void* self, intptr_t slot);
bool QGraphicsView_virtualbase_viewportEvent(void* self, QEvent* event);
bool QGraphicsView_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QGraphicsView_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QGraphicsView_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QGraphicsView_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QGraphicsView_override_virtual_dropEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QGraphicsView_override_virtual_focusInEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QGraphicsView_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QGraphicsView_virtualbase_focusNextPrevChild(void* self, bool next);
bool QGraphicsView_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QGraphicsView_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QGraphicsView_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QGraphicsView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QGraphicsView_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QGraphicsView_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QGraphicsView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QGraphicsView_override_virtual_wheelEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QGraphicsView_override_virtual_paintEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QGraphicsView_override_virtual_resizeEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QGraphicsView_override_virtual_scrollContentsBy(void* self, intptr_t slot);
void QGraphicsView_virtualbase_scrollContentsBy(void* self, int dx, int dy);
bool QGraphicsView_override_virtual_showEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_showEvent(void* self, QShowEvent* event);
bool QGraphicsView_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);
bool QGraphicsView_override_virtual_drawBackground(void* self, intptr_t slot);
void QGraphicsView_virtualbase_drawBackground(void* self, QPainter* painter, QRectF* rect);
bool QGraphicsView_override_virtual_drawForeground(void* self, intptr_t slot);
void QGraphicsView_virtualbase_drawForeground(void* self, QPainter* painter, QRectF* rect);
bool QGraphicsView_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QGraphicsView_virtualbase_minimumSizeHint(const void* self);
bool QGraphicsView_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGraphicsView_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QGraphicsView_override_virtual_viewportSizeHint(void* self, intptr_t slot);
QSize* QGraphicsView_virtualbase_viewportSizeHint(const void* self);
bool QGraphicsView_override_virtual_changeEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_changeEvent(void* self, QEvent* param1);
bool QGraphicsView_override_virtual_devType(void* self, intptr_t slot);
int QGraphicsView_virtualbase_devType(const void* self);
bool QGraphicsView_override_virtual_setVisible(void* self, intptr_t slot);
void QGraphicsView_virtualbase_setVisible(void* self, bool visible);
bool QGraphicsView_override_virtual_heightForWidth(void* self, intptr_t slot);
int QGraphicsView_virtualbase_heightForWidth(const void* self, int param1);
bool QGraphicsView_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QGraphicsView_virtualbase_hasHeightForWidth(const void* self);
bool QGraphicsView_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QGraphicsView_virtualbase_paintEngine(const void* self);
bool QGraphicsView_override_virtual_enterEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_enterEvent(void* self, QEvent* event);
bool QGraphicsView_override_virtual_leaveEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_leaveEvent(void* self, QEvent* event);
bool QGraphicsView_override_virtual_moveEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QGraphicsView_override_virtual_closeEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QGraphicsView_override_virtual_tabletEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QGraphicsView_override_virtual_actionEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QGraphicsView_override_virtual_hideEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QGraphicsView_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QGraphicsView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QGraphicsView_override_virtual_metric(void* self, intptr_t slot);
int QGraphicsView_virtualbase_metric(const void* self, int param1);
bool QGraphicsView_override_virtual_initPainter(void* self, intptr_t slot);
void QGraphicsView_virtualbase_initPainter(const void* self, QPainter* painter);
bool QGraphicsView_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QGraphicsView_virtualbase_redirected(const void* self, QPoint* offset);
bool QGraphicsView_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QGraphicsView_virtualbase_sharedPainter(const void* self);
bool QGraphicsView_override_virtual_timerEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGraphicsView_override_virtual_childEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGraphicsView_override_virtual_customEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_customEvent(void* self, QEvent* event);
bool QGraphicsView_override_virtual_connectNotify(void* self, intptr_t slot);
void QGraphicsView_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGraphicsView_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGraphicsView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QGraphicsView_delete(QGraphicsView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
