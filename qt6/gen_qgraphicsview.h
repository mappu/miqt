#pragma once
#ifndef MIQT_QT6_GEN_QGRAPHICSVIEW_H
#define MIQT_QT6_GEN_QGRAPHICSVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QGraphicsItem;
class QGraphicsScene;
class QGraphicsView;
class QMetaObject;
class QPainter;
class QPainterPath;
class QPoint;
class QPointF;
class QRect;
class QRectF;
class QSize;
class QTransform;
class QVariant;
class QWidget;
#else
typedef struct QBrush QBrush;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsScene QGraphicsScene;
typedef struct QGraphicsView QGraphicsView;
typedef struct QMetaObject QMetaObject;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QGraphicsView* QGraphicsView_new(QWidget* parent);
QGraphicsView* QGraphicsView_new2();
QGraphicsView* QGraphicsView_new3(QGraphicsScene* scene);
QGraphicsView* QGraphicsView_new4(QGraphicsScene* scene, QWidget* parent);
QMetaObject* QGraphicsView_MetaObject(const QGraphicsView* self);
void* QGraphicsView_Metacast(QGraphicsView* self, const char* param1);
struct miqt_string QGraphicsView_Tr(const char* s);
QSize* QGraphicsView_SizeHint(const QGraphicsView* self);
int QGraphicsView_RenderHints(const QGraphicsView* self);
void QGraphicsView_SetRenderHint(QGraphicsView* self, int hint);
void QGraphicsView_SetRenderHints(QGraphicsView* self, int hints);
int QGraphicsView_Alignment(const QGraphicsView* self);
void QGraphicsView_SetAlignment(QGraphicsView* self, int alignment);
int QGraphicsView_TransformationAnchor(const QGraphicsView* self);
void QGraphicsView_SetTransformationAnchor(QGraphicsView* self, int anchor);
int QGraphicsView_ResizeAnchor(const QGraphicsView* self);
void QGraphicsView_SetResizeAnchor(QGraphicsView* self, int anchor);
int QGraphicsView_ViewportUpdateMode(const QGraphicsView* self);
void QGraphicsView_SetViewportUpdateMode(QGraphicsView* self, int mode);
int QGraphicsView_OptimizationFlags(const QGraphicsView* self);
void QGraphicsView_SetOptimizationFlag(QGraphicsView* self, int flag);
void QGraphicsView_SetOptimizationFlags(QGraphicsView* self, int flags);
int QGraphicsView_DragMode(const QGraphicsView* self);
void QGraphicsView_SetDragMode(QGraphicsView* self, int mode);
int QGraphicsView_RubberBandSelectionMode(const QGraphicsView* self);
void QGraphicsView_SetRubberBandSelectionMode(QGraphicsView* self, int mode);
QRect* QGraphicsView_RubberBandRect(const QGraphicsView* self);
int QGraphicsView_CacheMode(const QGraphicsView* self);
void QGraphicsView_SetCacheMode(QGraphicsView* self, int mode);
void QGraphicsView_ResetCachedContent(QGraphicsView* self);
bool QGraphicsView_IsInteractive(const QGraphicsView* self);
void QGraphicsView_SetInteractive(QGraphicsView* self, bool allowed);
QGraphicsScene* QGraphicsView_Scene(const QGraphicsView* self);
void QGraphicsView_SetScene(QGraphicsView* self, QGraphicsScene* scene);
QRectF* QGraphicsView_SceneRect(const QGraphicsView* self);
void QGraphicsView_SetSceneRect(QGraphicsView* self, QRectF* rect);
void QGraphicsView_SetSceneRect2(QGraphicsView* self, double x, double y, double w, double h);
QTransform* QGraphicsView_Transform(const QGraphicsView* self);
QTransform* QGraphicsView_ViewportTransform(const QGraphicsView* self);
bool QGraphicsView_IsTransformed(const QGraphicsView* self);
void QGraphicsView_SetTransform(QGraphicsView* self, QTransform* matrix);
void QGraphicsView_ResetTransform(QGraphicsView* self);
void QGraphicsView_Rotate(QGraphicsView* self, double angle);
void QGraphicsView_Scale(QGraphicsView* self, double sx, double sy);
void QGraphicsView_Shear(QGraphicsView* self, double sh, double sv);
void QGraphicsView_Translate(QGraphicsView* self, double dx, double dy);
void QGraphicsView_CenterOn(QGraphicsView* self, QPointF* pos);
void QGraphicsView_CenterOn2(QGraphicsView* self, double x, double y);
void QGraphicsView_CenterOnWithItem(QGraphicsView* self, QGraphicsItem* item);
void QGraphicsView_EnsureVisible(QGraphicsView* self, QRectF* rect);
void QGraphicsView_EnsureVisible2(QGraphicsView* self, double x, double y, double w, double h);
void QGraphicsView_EnsureVisibleWithItem(QGraphicsView* self, QGraphicsItem* item);
void QGraphicsView_FitInView(QGraphicsView* self, QRectF* rect);
void QGraphicsView_FitInView2(QGraphicsView* self, double x, double y, double w, double h);
void QGraphicsView_FitInViewWithItem(QGraphicsView* self, QGraphicsItem* item);
void QGraphicsView_Render(QGraphicsView* self, QPainter* painter);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_Items(const QGraphicsView* self);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_ItemsWithPos(const QGraphicsView* self, QPoint* pos);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_Items2(const QGraphicsView* self, int x, int y);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_ItemsWithRect(const QGraphicsView* self, QRect* rect);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_Items3(const QGraphicsView* self, int x, int y, int w, int h);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_ItemsWithPath(const QGraphicsView* self, QPainterPath* path);
QGraphicsItem* QGraphicsView_ItemAt(const QGraphicsView* self, QPoint* pos);
QGraphicsItem* QGraphicsView_ItemAt2(const QGraphicsView* self, int x, int y);
QPointF* QGraphicsView_MapToScene(const QGraphicsView* self, QPoint* point);
QPainterPath* QGraphicsView_MapToSceneWithPath(const QGraphicsView* self, QPainterPath* path);
QPoint* QGraphicsView_MapFromScene(const QGraphicsView* self, QPointF* point);
QPainterPath* QGraphicsView_MapFromSceneWithPath(const QGraphicsView* self, QPainterPath* path);
QPointF* QGraphicsView_MapToScene2(const QGraphicsView* self, int x, int y);
QPoint* QGraphicsView_MapFromScene2(const QGraphicsView* self, double x, double y);
QVariant* QGraphicsView_InputMethodQuery(const QGraphicsView* self, int query);
QBrush* QGraphicsView_BackgroundBrush(const QGraphicsView* self);
void QGraphicsView_SetBackgroundBrush(QGraphicsView* self, QBrush* brush);
QBrush* QGraphicsView_ForegroundBrush(const QGraphicsView* self);
void QGraphicsView_SetForegroundBrush(QGraphicsView* self, QBrush* brush);
void QGraphicsView_UpdateScene(QGraphicsView* self, struct miqt_array /* of QRectF* */  rects);
void QGraphicsView_InvalidateScene(QGraphicsView* self);
void QGraphicsView_UpdateSceneRect(QGraphicsView* self, QRectF* rect);
void QGraphicsView_RubberBandChanged(QGraphicsView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint);
void QGraphicsView_connect_RubberBandChanged(QGraphicsView* self, intptr_t slot);
struct miqt_string QGraphicsView_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsView_Tr3(const char* s, const char* c, int n);
void QGraphicsView_SetRenderHint2(QGraphicsView* self, int hint, bool enabled);
void QGraphicsView_SetOptimizationFlag2(QGraphicsView* self, int flag, bool enabled);
void QGraphicsView_SetTransform2(QGraphicsView* self, QTransform* matrix, bool combine);
void QGraphicsView_EnsureVisible22(QGraphicsView* self, QRectF* rect, int xmargin);
void QGraphicsView_EnsureVisible3(QGraphicsView* self, QRectF* rect, int xmargin, int ymargin);
void QGraphicsView_EnsureVisible5(QGraphicsView* self, double x, double y, double w, double h, int xmargin);
void QGraphicsView_EnsureVisible6(QGraphicsView* self, double x, double y, double w, double h, int xmargin, int ymargin);
void QGraphicsView_EnsureVisible23(QGraphicsView* self, QGraphicsItem* item, int xmargin);
void QGraphicsView_EnsureVisible32(QGraphicsView* self, QGraphicsItem* item, int xmargin, int ymargin);
void QGraphicsView_FitInView22(QGraphicsView* self, QRectF* rect, int aspectRadioMode);
void QGraphicsView_FitInView5(QGraphicsView* self, double x, double y, double w, double h, int aspectRadioMode);
void QGraphicsView_FitInView23(QGraphicsView* self, QGraphicsItem* item, int aspectRadioMode);
void QGraphicsView_Render2(QGraphicsView* self, QPainter* painter, QRectF* target);
void QGraphicsView_Render3(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source);
void QGraphicsView_Render4(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source, int aspectRatioMode);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_Items22(const QGraphicsView* self, QRect* rect, int mode);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_Items5(const QGraphicsView* self, int x, int y, int w, int h, int mode);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_Items24(const QGraphicsView* self, QPainterPath* path, int mode);
void QGraphicsView_InvalidateScene1(QGraphicsView* self, QRectF* rect);
void QGraphicsView_InvalidateScene2(QGraphicsView* self, QRectF* rect, int layers);
void QGraphicsView_Delete(QGraphicsView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
