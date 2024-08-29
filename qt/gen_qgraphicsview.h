#ifndef GEN_QGRAPHICSVIEW_H
#define GEN_QGRAPHICSVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QGraphicsItem;
class QGraphicsScene;
class QGraphicsView;
class QMatrix;
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
typedef struct QMatrix QMatrix;
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

QGraphicsView* QGraphicsView_new();
QGraphicsView* QGraphicsView_new2(QGraphicsScene* scene);
QGraphicsView* QGraphicsView_new3(QWidget* parent);
QGraphicsView* QGraphicsView_new4(QGraphicsScene* scene, QWidget* parent);
QMetaObject* QGraphicsView_MetaObject(QGraphicsView* self);
void QGraphicsView_Tr(const char* s, char** _out, int* _out_Strlen);
void QGraphicsView_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QSize* QGraphicsView_SizeHint(QGraphicsView* self);
int QGraphicsView_RenderHints(QGraphicsView* self);
void QGraphicsView_SetRenderHint(QGraphicsView* self, uintptr_t hint);
void QGraphicsView_SetRenderHints(QGraphicsView* self, int hints);
int QGraphicsView_Alignment(QGraphicsView* self);
void QGraphicsView_SetAlignment(QGraphicsView* self, int alignment);
uintptr_t QGraphicsView_TransformationAnchor(QGraphicsView* self);
void QGraphicsView_SetTransformationAnchor(QGraphicsView* self, uintptr_t anchor);
uintptr_t QGraphicsView_ResizeAnchor(QGraphicsView* self);
void QGraphicsView_SetResizeAnchor(QGraphicsView* self, uintptr_t anchor);
uintptr_t QGraphicsView_ViewportUpdateMode(QGraphicsView* self);
void QGraphicsView_SetViewportUpdateMode(QGraphicsView* self, uintptr_t mode);
int QGraphicsView_OptimizationFlags(QGraphicsView* self);
void QGraphicsView_SetOptimizationFlag(QGraphicsView* self, uintptr_t flag);
void QGraphicsView_SetOptimizationFlags(QGraphicsView* self, int flags);
uintptr_t QGraphicsView_DragMode(QGraphicsView* self);
void QGraphicsView_SetDragMode(QGraphicsView* self, uintptr_t mode);
uintptr_t QGraphicsView_RubberBandSelectionMode(QGraphicsView* self);
void QGraphicsView_SetRubberBandSelectionMode(QGraphicsView* self, uintptr_t mode);
QRect* QGraphicsView_RubberBandRect(QGraphicsView* self);
int QGraphicsView_CacheMode(QGraphicsView* self);
void QGraphicsView_SetCacheMode(QGraphicsView* self, int mode);
void QGraphicsView_ResetCachedContent(QGraphicsView* self);
bool QGraphicsView_IsInteractive(QGraphicsView* self);
void QGraphicsView_SetInteractive(QGraphicsView* self, bool allowed);
QGraphicsScene* QGraphicsView_Scene(QGraphicsView* self);
void QGraphicsView_SetScene(QGraphicsView* self, QGraphicsScene* scene);
QRectF* QGraphicsView_SceneRect(QGraphicsView* self);
void QGraphicsView_SetSceneRect(QGraphicsView* self, QRectF* rect);
void QGraphicsView_SetSceneRect2(QGraphicsView* self, double x, double y, double w, double h);
QMatrix* QGraphicsView_Matrix(QGraphicsView* self);
void QGraphicsView_SetMatrix(QGraphicsView* self, QMatrix* matrix);
void QGraphicsView_ResetMatrix(QGraphicsView* self);
QTransform* QGraphicsView_Transform(QGraphicsView* self);
QTransform* QGraphicsView_ViewportTransform(QGraphicsView* self);
bool QGraphicsView_IsTransformed(QGraphicsView* self);
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
void QGraphicsView_Items(QGraphicsView* self, QGraphicsItem*** _out, size_t* _out_len);
void QGraphicsView_ItemsWithPos(QGraphicsView* self, QPoint* pos, QGraphicsItem*** _out, size_t* _out_len);
void QGraphicsView_Items2(QGraphicsView* self, int x, int y, QGraphicsItem*** _out, size_t* _out_len);
void QGraphicsView_ItemsWithRect(QGraphicsView* self, QRect* rect, QGraphicsItem*** _out, size_t* _out_len);
void QGraphicsView_Items3(QGraphicsView* self, int x, int y, int w, int h, QGraphicsItem*** _out, size_t* _out_len);
void QGraphicsView_ItemsWithPath(QGraphicsView* self, QPainterPath* path, QGraphicsItem*** _out, size_t* _out_len);
QGraphicsItem* QGraphicsView_ItemAt(QGraphicsView* self, QPoint* pos);
QGraphicsItem* QGraphicsView_ItemAt2(QGraphicsView* self, int x, int y);
QPointF* QGraphicsView_MapToScene(QGraphicsView* self, QPoint* point);
QPainterPath* QGraphicsView_MapToSceneWithPath(QGraphicsView* self, QPainterPath* path);
QPoint* QGraphicsView_MapFromScene(QGraphicsView* self, QPointF* point);
QPainterPath* QGraphicsView_MapFromSceneWithPath(QGraphicsView* self, QPainterPath* path);
QPointF* QGraphicsView_MapToScene2(QGraphicsView* self, int x, int y);
QPoint* QGraphicsView_MapFromScene2(QGraphicsView* self, double x, double y);
QVariant* QGraphicsView_InputMethodQuery(QGraphicsView* self, uintptr_t query);
QBrush* QGraphicsView_BackgroundBrush(QGraphicsView* self);
void QGraphicsView_SetBackgroundBrush(QGraphicsView* self, QBrush* brush);
QBrush* QGraphicsView_ForegroundBrush(QGraphicsView* self);
void QGraphicsView_SetForegroundBrush(QGraphicsView* self, QBrush* brush);
void QGraphicsView_UpdateScene(QGraphicsView* self, QRectF** rects, size_t rects_len);
void QGraphicsView_InvalidateScene(QGraphicsView* self);
void QGraphicsView_UpdateSceneRect(QGraphicsView* self, QRectF* rect);
void QGraphicsView_RubberBandChanged(QGraphicsView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint);
void QGraphicsView_connect_RubberBandChanged(QGraphicsView* self, void* slot);
void QGraphicsView_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGraphicsView_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsView_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGraphicsView_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsView_SetRenderHint2(QGraphicsView* self, uintptr_t hint, bool enabled);
void QGraphicsView_SetOptimizationFlag2(QGraphicsView* self, uintptr_t flag, bool enabled);
void QGraphicsView_SetMatrix2(QGraphicsView* self, QMatrix* matrix, bool combine);
void QGraphicsView_SetTransform2(QGraphicsView* self, QTransform* matrix, bool combine);
void QGraphicsView_EnsureVisible22(QGraphicsView* self, QRectF* rect, int xmargin);
void QGraphicsView_EnsureVisible3(QGraphicsView* self, QRectF* rect, int xmargin, int ymargin);
void QGraphicsView_EnsureVisible5(QGraphicsView* self, double x, double y, double w, double h, int xmargin);
void QGraphicsView_EnsureVisible6(QGraphicsView* self, double x, double y, double w, double h, int xmargin, int ymargin);
void QGraphicsView_EnsureVisible23(QGraphicsView* self, QGraphicsItem* item, int xmargin);
void QGraphicsView_EnsureVisible32(QGraphicsView* self, QGraphicsItem* item, int xmargin, int ymargin);
void QGraphicsView_FitInView22(QGraphicsView* self, QRectF* rect, uintptr_t aspectRadioMode);
void QGraphicsView_FitInView5(QGraphicsView* self, double x, double y, double w, double h, uintptr_t aspectRadioMode);
void QGraphicsView_FitInView23(QGraphicsView* self, QGraphicsItem* item, uintptr_t aspectRadioMode);
void QGraphicsView_Render2(QGraphicsView* self, QPainter* painter, QRectF* target);
void QGraphicsView_Render3(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source);
void QGraphicsView_Render4(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source, uintptr_t aspectRatioMode);
void QGraphicsView_Items22(QGraphicsView* self, QRect* rect, uintptr_t mode, QGraphicsItem*** _out, size_t* _out_len);
void QGraphicsView_Items5(QGraphicsView* self, int x, int y, int w, int h, uintptr_t mode, QGraphicsItem*** _out, size_t* _out_len);
void QGraphicsView_Items24(QGraphicsView* self, QPainterPath* path, uintptr_t mode, QGraphicsItem*** _out, size_t* _out_len);
void QGraphicsView_InvalidateScene1(QGraphicsView* self, QRectF* rect);
void QGraphicsView_InvalidateScene2(QGraphicsView* self, QRectF* rect, int layers);
void QGraphicsView_Delete(QGraphicsView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
