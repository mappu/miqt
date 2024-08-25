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
class QPainterPath;
class QPoint;
class QPointF;
class QRect;
class QRectF;
class QSize;
class QTransform;
class QWidget;
#else
typedef struct QBrush QBrush;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsScene QGraphicsScene;
typedef struct QGraphicsView QGraphicsView;
typedef struct QMatrix QMatrix;
typedef struct QMetaObject QMetaObject;
typedef struct QPainterPath QPainterPath;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QTransform QTransform;
typedef struct QWidget QWidget;
#endif

QGraphicsView* QGraphicsView_new();
QGraphicsView* QGraphicsView_new2(QGraphicsScene* scene);
QGraphicsView* QGraphicsView_new3(QWidget* parent);
QGraphicsView* QGraphicsView_new4(QGraphicsScene* scene, QWidget* parent);
QMetaObject* QGraphicsView_MetaObject(QGraphicsView* self);
void QGraphicsView_Tr(char* s, char** _out, int* _out_Strlen);
void QGraphicsView_TrUtf8(char* s, char** _out, int* _out_Strlen);
QSize* QGraphicsView_SizeHint(QGraphicsView* self);
QRect* QGraphicsView_RubberBandRect(QGraphicsView* self);
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
void QGraphicsView_Items(QGraphicsView* self, QGraphicsItem*** _out, size_t* _out_len);
void QGraphicsView_ItemsWithPos(QGraphicsView* self, QPoint* pos, QGraphicsItem*** _out, size_t* _out_len);
void QGraphicsView_Items2(QGraphicsView* self, int x, int y, QGraphicsItem*** _out, size_t* _out_len);
QGraphicsItem* QGraphicsView_ItemAt(QGraphicsView* self, QPoint* pos);
QGraphicsItem* QGraphicsView_ItemAt2(QGraphicsView* self, int x, int y);
QPointF* QGraphicsView_MapToScene(QGraphicsView* self, QPoint* point);
QPainterPath* QGraphicsView_MapToSceneWithPath(QGraphicsView* self, QPainterPath* path);
QPoint* QGraphicsView_MapFromScene(QGraphicsView* self, QPointF* point);
QPainterPath* QGraphicsView_MapFromSceneWithPath(QGraphicsView* self, QPainterPath* path);
QPointF* QGraphicsView_MapToScene2(QGraphicsView* self, int x, int y);
QPoint* QGraphicsView_MapFromScene2(QGraphicsView* self, double x, double y);
QBrush* QGraphicsView_BackgroundBrush(QGraphicsView* self);
void QGraphicsView_SetBackgroundBrush(QGraphicsView* self, QBrush* brush);
QBrush* QGraphicsView_ForegroundBrush(QGraphicsView* self);
void QGraphicsView_SetForegroundBrush(QGraphicsView* self, QBrush* brush);
void QGraphicsView_UpdateScene(QGraphicsView* self, QRectF** rects, size_t rects_len);
void QGraphicsView_UpdateSceneRect(QGraphicsView* self, QRectF* rect);
void QGraphicsView_RubberBandChanged(QGraphicsView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint);
void QGraphicsView_connect_RubberBandChanged(QGraphicsView* self, void* slot);
void QGraphicsView_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QGraphicsView_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsView_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QGraphicsView_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGraphicsView_SetMatrix2(QGraphicsView* self, QMatrix* matrix, bool combine);
void QGraphicsView_SetTransform2(QGraphicsView* self, QTransform* matrix, bool combine);
void QGraphicsView_EnsureVisible22(QGraphicsView* self, QRectF* rect, int xmargin);
void QGraphicsView_EnsureVisible3(QGraphicsView* self, QRectF* rect, int xmargin, int ymargin);
void QGraphicsView_EnsureVisible5(QGraphicsView* self, double x, double y, double w, double h, int xmargin);
void QGraphicsView_EnsureVisible6(QGraphicsView* self, double x, double y, double w, double h, int xmargin, int ymargin);
void QGraphicsView_EnsureVisible23(QGraphicsView* self, QGraphicsItem* item, int xmargin);
void QGraphicsView_EnsureVisible32(QGraphicsView* self, QGraphicsItem* item, int xmargin, int ymargin);
void QGraphicsView_Delete(QGraphicsView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
