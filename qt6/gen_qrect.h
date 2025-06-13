#pragma once
#ifndef MIQT_QT6_GEN_QRECT_H
#define MIQT_QT6_GEN_QRECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMargins;
class QMarginsF;
class QPoint;
class QPointF;
class QRect;
class QRectF;
class QSize;
class QSizeF;
#else
typedef struct QMargins QMargins;
typedef struct QMarginsF QMarginsF;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
#endif

QRect* QRect_new();
QRect* QRect_new2(QPoint* topleft, QPoint* bottomright);
QRect* QRect_new3(QPoint* topleft, QSize* size);
QRect* QRect_new4(int left, int top, int width, int height);
QRect* QRect_new5(QRect* param1);
bool QRect_isNull(const QRect* self);
bool QRect_isEmpty(const QRect* self);
bool QRect_isValid(const QRect* self);
int QRect_left(const QRect* self);
int QRect_top(const QRect* self);
int QRect_right(const QRect* self);
int QRect_bottom(const QRect* self);
QRect* QRect_normalized(const QRect* self);
int QRect_x(const QRect* self);
int QRect_y(const QRect* self);
void QRect_setLeft(QRect* self, int pos);
void QRect_setTop(QRect* self, int pos);
void QRect_setRight(QRect* self, int pos);
void QRect_setBottom(QRect* self, int pos);
void QRect_setX(QRect* self, int x);
void QRect_setY(QRect* self, int y);
void QRect_setTopLeft(QRect* self, QPoint* p);
void QRect_setBottomRight(QRect* self, QPoint* p);
void QRect_setTopRight(QRect* self, QPoint* p);
void QRect_setBottomLeft(QRect* self, QPoint* p);
QPoint* QRect_topLeft(const QRect* self);
QPoint* QRect_bottomRight(const QRect* self);
QPoint* QRect_topRight(const QRect* self);
QPoint* QRect_bottomLeft(const QRect* self);
QPoint* QRect_center(const QRect* self);
void QRect_moveLeft(QRect* self, int pos);
void QRect_moveTop(QRect* self, int pos);
void QRect_moveRight(QRect* self, int pos);
void QRect_moveBottom(QRect* self, int pos);
void QRect_moveTopLeft(QRect* self, QPoint* p);
void QRect_moveBottomRight(QRect* self, QPoint* p);
void QRect_moveTopRight(QRect* self, QPoint* p);
void QRect_moveBottomLeft(QRect* self, QPoint* p);
void QRect_moveCenter(QRect* self, QPoint* p);
void QRect_translate(QRect* self, int dx, int dy);
void QRect_translateWithQPoint(QRect* self, QPoint* p);
QRect* QRect_translated(const QRect* self, int dx, int dy);
QRect* QRect_translatedWithQPoint(const QRect* self, QPoint* p);
QRect* QRect_transposed(const QRect* self);
void QRect_moveTo(QRect* self, int x, int t);
void QRect_moveToWithQPoint(QRect* self, QPoint* p);
void QRect_setRect(QRect* self, int x, int y, int w, int h);
void QRect_getRect(const QRect* self, int* x, int* y, int* w, int* h);
void QRect_setCoords(QRect* self, int x1, int y1, int x2, int y2);
void QRect_getCoords(const QRect* self, int* x1, int* y1, int* x2, int* y2);
void QRect_adjust(QRect* self, int x1, int y1, int x2, int y2);
QRect* QRect_adjusted(const QRect* self, int x1, int y1, int x2, int y2);
QSize* QRect_size(const QRect* self);
int QRect_width(const QRect* self);
int QRect_height(const QRect* self);
void QRect_setWidth(QRect* self, int w);
void QRect_setHeight(QRect* self, int h);
void QRect_setSize(QRect* self, QSize* s);
QRect* QRect_operatorBitwiseOr(const QRect* self, QRect* r);
QRect* QRect_operatorBitwiseAnd(const QRect* self, QRect* r);
void QRect_operatorBitwiseOrAssign(QRect* self, QRect* r);
void QRect_operatorBitwiseAndAssign(QRect* self, QRect* r);
bool QRect_contains(const QRect* self, QRect* r);
bool QRect_containsWithQPoint(const QRect* self, QPoint* p);
bool QRect_contains2(const QRect* self, int x, int y);
bool QRect_contains3(const QRect* self, int x, int y, bool proper);
QRect* QRect_united(const QRect* self, QRect* other);
QRect* QRect_intersected(const QRect* self, QRect* other);
bool QRect_intersects(const QRect* self, QRect* r);
QRect* QRect_marginsAdded(const QRect* self, QMargins* margins);
QRect* QRect_marginsRemoved(const QRect* self, QMargins* margins);
QRect* QRect_operatorPlusAssign(QRect* self, QMargins* margins);
QRect* QRect_operatorMinusAssign(QRect* self, QMargins* margins);
QRect* QRect_span(QPoint* p1, QPoint* p2);
QRectF* QRect_toRectF(const QRect* self);
bool QRect_contains4(const QRect* self, QRect* r, bool proper);
bool QRect_contains5(const QRect* self, QPoint* p, bool proper);

void QRect_delete(QRect* self);

QRectF* QRectF_new();
QRectF* QRectF_new2(QPointF* topleft, QSizeF* size);
QRectF* QRectF_new3(QPointF* topleft, QPointF* bottomRight);
QRectF* QRectF_new4(double left, double top, double width, double height);
QRectF* QRectF_new5(QRect* rect);
QRectF* QRectF_new6(QRectF* param1);
bool QRectF_isNull(const QRectF* self);
bool QRectF_isEmpty(const QRectF* self);
bool QRectF_isValid(const QRectF* self);
QRectF* QRectF_normalized(const QRectF* self);
double QRectF_left(const QRectF* self);
double QRectF_top(const QRectF* self);
double QRectF_right(const QRectF* self);
double QRectF_bottom(const QRectF* self);
double QRectF_x(const QRectF* self);
double QRectF_y(const QRectF* self);
void QRectF_setLeft(QRectF* self, double pos);
void QRectF_setTop(QRectF* self, double pos);
void QRectF_setRight(QRectF* self, double pos);
void QRectF_setBottom(QRectF* self, double pos);
void QRectF_setX(QRectF* self, double pos);
void QRectF_setY(QRectF* self, double pos);
QPointF* QRectF_topLeft(const QRectF* self);
QPointF* QRectF_bottomRight(const QRectF* self);
QPointF* QRectF_topRight(const QRectF* self);
QPointF* QRectF_bottomLeft(const QRectF* self);
QPointF* QRectF_center(const QRectF* self);
void QRectF_setTopLeft(QRectF* self, QPointF* p);
void QRectF_setBottomRight(QRectF* self, QPointF* p);
void QRectF_setTopRight(QRectF* self, QPointF* p);
void QRectF_setBottomLeft(QRectF* self, QPointF* p);
void QRectF_moveLeft(QRectF* self, double pos);
void QRectF_moveTop(QRectF* self, double pos);
void QRectF_moveRight(QRectF* self, double pos);
void QRectF_moveBottom(QRectF* self, double pos);
void QRectF_moveTopLeft(QRectF* self, QPointF* p);
void QRectF_moveBottomRight(QRectF* self, QPointF* p);
void QRectF_moveTopRight(QRectF* self, QPointF* p);
void QRectF_moveBottomLeft(QRectF* self, QPointF* p);
void QRectF_moveCenter(QRectF* self, QPointF* p);
void QRectF_translate(QRectF* self, double dx, double dy);
void QRectF_translateWithQPointF(QRectF* self, QPointF* p);
QRectF* QRectF_translated(const QRectF* self, double dx, double dy);
QRectF* QRectF_translatedWithQPointF(const QRectF* self, QPointF* p);
QRectF* QRectF_transposed(const QRectF* self);
void QRectF_moveTo(QRectF* self, double x, double y);
void QRectF_moveToWithQPointF(QRectF* self, QPointF* p);
void QRectF_setRect(QRectF* self, double x, double y, double w, double h);
void QRectF_getRect(const QRectF* self, double* x, double* y, double* w, double* h);
void QRectF_setCoords(QRectF* self, double x1, double y1, double x2, double y2);
void QRectF_getCoords(const QRectF* self, double* x1, double* y1, double* x2, double* y2);
void QRectF_adjust(QRectF* self, double x1, double y1, double x2, double y2);
QRectF* QRectF_adjusted(const QRectF* self, double x1, double y1, double x2, double y2);
QSizeF* QRectF_size(const QRectF* self);
double QRectF_width(const QRectF* self);
double QRectF_height(const QRectF* self);
void QRectF_setWidth(QRectF* self, double w);
void QRectF_setHeight(QRectF* self, double h);
void QRectF_setSize(QRectF* self, QSizeF* s);
QRectF* QRectF_operatorBitwiseOr(const QRectF* self, QRectF* r);
QRectF* QRectF_operatorBitwiseAnd(const QRectF* self, QRectF* r);
void QRectF_operatorBitwiseOrAssign(QRectF* self, QRectF* r);
void QRectF_operatorBitwiseAndAssign(QRectF* self, QRectF* r);
bool QRectF_contains(const QRectF* self, QRectF* r);
bool QRectF_containsWithQPointF(const QRectF* self, QPointF* p);
bool QRectF_contains2(const QRectF* self, double x, double y);
QRectF* QRectF_united(const QRectF* self, QRectF* other);
QRectF* QRectF_intersected(const QRectF* self, QRectF* other);
bool QRectF_intersects(const QRectF* self, QRectF* r);
QRectF* QRectF_marginsAdded(const QRectF* self, QMarginsF* margins);
QRectF* QRectF_marginsRemoved(const QRectF* self, QMarginsF* margins);
QRectF* QRectF_operatorPlusAssign(QRectF* self, QMarginsF* margins);
QRectF* QRectF_operatorMinusAssign(QRectF* self, QMarginsF* margins);
QRect* QRectF_toRect(const QRectF* self);
QRect* QRectF_toAlignedRect(const QRectF* self);

void QRectF_delete(QRectF* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
