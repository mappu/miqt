#pragma once
#ifndef MIQT_QT_GEN_QRECT_H
#define MIQT_QT_GEN_QRECT_H

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

struct miqt_qrect QRect_new();
struct miqt_qrect QRect_new2(struct miqt_qpoint topleft, struct miqt_qpoint bottomright);
struct miqt_qrect QRect_new3(struct miqt_qpoint topleft, struct miqt_qsize size);
struct miqt_qrect QRect_new4(int left, int top, int width, int height);
struct miqt_qrect QRect_new5(struct miqt_qrect param1);
bool QRect_isNull(struct miqt_qrect self_cabi);
bool QRect_isEmpty(struct miqt_qrect self_cabi);
bool QRect_isValid(struct miqt_qrect self_cabi);
int QRect_left(struct miqt_qrect self_cabi);
int QRect_top(struct miqt_qrect self_cabi);
int QRect_right(struct miqt_qrect self_cabi);
int QRect_bottom(struct miqt_qrect self_cabi);
struct miqt_qrect QRect_normalized(struct miqt_qrect self_cabi);
int QRect_x(struct miqt_qrect self_cabi);
int QRect_y(struct miqt_qrect self_cabi);
void QRect_setLeft(QRect* self, int pos);
void QRect_setTop(QRect* self, int pos);
void QRect_setRight(QRect* self, int pos);
void QRect_setBottom(QRect* self, int pos);
void QRect_setX(QRect* self, int x);
void QRect_setY(QRect* self, int y);
void QRect_setTopLeft(QRect* self, struct miqt_qpoint p);
void QRect_setBottomRight(QRect* self, struct miqt_qpoint p);
void QRect_setTopRight(QRect* self, struct miqt_qpoint p);
void QRect_setBottomLeft(QRect* self, struct miqt_qpoint p);
struct miqt_qpoint QRect_topLeft(struct miqt_qrect self_cabi);
struct miqt_qpoint QRect_bottomRight(struct miqt_qrect self_cabi);
struct miqt_qpoint QRect_topRight(struct miqt_qrect self_cabi);
struct miqt_qpoint QRect_bottomLeft(struct miqt_qrect self_cabi);
struct miqt_qpoint QRect_center(struct miqt_qrect self_cabi);
void QRect_moveLeft(QRect* self, int pos);
void QRect_moveTop(QRect* self, int pos);
void QRect_moveRight(QRect* self, int pos);
void QRect_moveBottom(QRect* self, int pos);
void QRect_moveTopLeft(QRect* self, struct miqt_qpoint p);
void QRect_moveBottomRight(QRect* self, struct miqt_qpoint p);
void QRect_moveTopRight(QRect* self, struct miqt_qpoint p);
void QRect_moveBottomLeft(QRect* self, struct miqt_qpoint p);
void QRect_moveCenter(QRect* self, struct miqt_qpoint p);
void QRect_translate(QRect* self, int dx, int dy);
void QRect_translateWithQPoint(QRect* self, struct miqt_qpoint p);
struct miqt_qrect QRect_translated(struct miqt_qrect self_cabi, int dx, int dy);
struct miqt_qrect QRect_translatedWithQPoint(struct miqt_qrect self_cabi, struct miqt_qpoint p);
struct miqt_qrect QRect_transposed(struct miqt_qrect self_cabi);
void QRect_moveTo(QRect* self, int x, int t);
void QRect_moveToWithQPoint(QRect* self, struct miqt_qpoint p);
void QRect_setRect(QRect* self, int x, int y, int w, int h);
void QRect_getRect(struct miqt_qrect self_cabi, int* x, int* y, int* w, int* h);
void QRect_setCoords(QRect* self, int x1, int y1, int x2, int y2);
void QRect_getCoords(struct miqt_qrect self_cabi, int* x1, int* y1, int* x2, int* y2);
void QRect_adjust(QRect* self, int x1, int y1, int x2, int y2);
struct miqt_qrect QRect_adjusted(struct miqt_qrect self_cabi, int x1, int y1, int x2, int y2);
struct miqt_qsize QRect_size(struct miqt_qrect self_cabi);
int QRect_width(struct miqt_qrect self_cabi);
int QRect_height(struct miqt_qrect self_cabi);
void QRect_setWidth(QRect* self, int w);
void QRect_setHeight(QRect* self, int h);
void QRect_setSize(QRect* self, struct miqt_qsize s);
struct miqt_qrect QRect_operatorBitwiseOr(struct miqt_qrect self_cabi, struct miqt_qrect r);
struct miqt_qrect QRect_operatorBitwiseAnd(struct miqt_qrect self_cabi, struct miqt_qrect r);
void QRect_operatorBitwiseOrAssign(QRect* self, struct miqt_qrect r);
void QRect_operatorBitwiseAndAssign(QRect* self, struct miqt_qrect r);
bool QRect_contains(struct miqt_qrect self_cabi, struct miqt_qrect r);
bool QRect_containsWithQPoint(struct miqt_qrect self_cabi, struct miqt_qpoint p);
bool QRect_contains2(struct miqt_qrect self_cabi, int x, int y);
bool QRect_contains3(struct miqt_qrect self_cabi, int x, int y, bool proper);
struct miqt_qrect QRect_united(struct miqt_qrect self_cabi, struct miqt_qrect other);
struct miqt_qrect QRect_intersected(struct miqt_qrect self_cabi, struct miqt_qrect other);
bool QRect_intersects(struct miqt_qrect self_cabi, struct miqt_qrect r);
struct miqt_qrect QRect_marginsAdded(struct miqt_qrect self_cabi, struct miqt_qmargins margins);
struct miqt_qrect QRect_marginsRemoved(struct miqt_qrect self_cabi, struct miqt_qmargins margins);
QRect* QRect_operatorPlusAssign(QRect* self, struct miqt_qmargins margins);
QRect* QRect_operatorMinusAssign(QRect* self, struct miqt_qmargins margins);
void QRect_operatorAssign(QRect* self, struct miqt_qrect param1);
bool QRect_contains4(struct miqt_qrect self_cabi, struct miqt_qrect r, bool proper);
bool QRect_contains5(struct miqt_qrect self_cabi, struct miqt_qpoint p, bool proper);


struct miqt_qrectf QRectF_new();
struct miqt_qrectf QRectF_new2(struct miqt_qpointf topleft, struct miqt_qsizef size);
struct miqt_qrectf QRectF_new3(struct miqt_qpointf topleft, struct miqt_qpointf bottomRight);
struct miqt_qrectf QRectF_new4(double left, double top, double width, double height);
struct miqt_qrectf QRectF_new5(struct miqt_qrect rect);
struct miqt_qrectf QRectF_new6(struct miqt_qrectf param1);
bool QRectF_isNull(struct miqt_qrectf self_cabi);
bool QRectF_isEmpty(struct miqt_qrectf self_cabi);
bool QRectF_isValid(struct miqt_qrectf self_cabi);
struct miqt_qrectf QRectF_normalized(struct miqt_qrectf self_cabi);
double QRectF_left(struct miqt_qrectf self_cabi);
double QRectF_top(struct miqt_qrectf self_cabi);
double QRectF_right(struct miqt_qrectf self_cabi);
double QRectF_bottom(struct miqt_qrectf self_cabi);
double QRectF_x(struct miqt_qrectf self_cabi);
double QRectF_y(struct miqt_qrectf self_cabi);
void QRectF_setLeft(QRectF* self, double pos);
void QRectF_setTop(QRectF* self, double pos);
void QRectF_setRight(QRectF* self, double pos);
void QRectF_setBottom(QRectF* self, double pos);
void QRectF_setX(QRectF* self, double pos);
void QRectF_setY(QRectF* self, double pos);
struct miqt_qpointf QRectF_topLeft(struct miqt_qrectf self_cabi);
struct miqt_qpointf QRectF_bottomRight(struct miqt_qrectf self_cabi);
struct miqt_qpointf QRectF_topRight(struct miqt_qrectf self_cabi);
struct miqt_qpointf QRectF_bottomLeft(struct miqt_qrectf self_cabi);
struct miqt_qpointf QRectF_center(struct miqt_qrectf self_cabi);
void QRectF_setTopLeft(QRectF* self, struct miqt_qpointf p);
void QRectF_setBottomRight(QRectF* self, struct miqt_qpointf p);
void QRectF_setTopRight(QRectF* self, struct miqt_qpointf p);
void QRectF_setBottomLeft(QRectF* self, struct miqt_qpointf p);
void QRectF_moveLeft(QRectF* self, double pos);
void QRectF_moveTop(QRectF* self, double pos);
void QRectF_moveRight(QRectF* self, double pos);
void QRectF_moveBottom(QRectF* self, double pos);
void QRectF_moveTopLeft(QRectF* self, struct miqt_qpointf p);
void QRectF_moveBottomRight(QRectF* self, struct miqt_qpointf p);
void QRectF_moveTopRight(QRectF* self, struct miqt_qpointf p);
void QRectF_moveBottomLeft(QRectF* self, struct miqt_qpointf p);
void QRectF_moveCenter(QRectF* self, struct miqt_qpointf p);
void QRectF_translate(QRectF* self, double dx, double dy);
void QRectF_translateWithQPointF(QRectF* self, struct miqt_qpointf p);
struct miqt_qrectf QRectF_translated(struct miqt_qrectf self_cabi, double dx, double dy);
struct miqt_qrectf QRectF_translatedWithQPointF(struct miqt_qrectf self_cabi, struct miqt_qpointf p);
struct miqt_qrectf QRectF_transposed(struct miqt_qrectf self_cabi);
void QRectF_moveTo(QRectF* self, double x, double y);
void QRectF_moveToWithQPointF(QRectF* self, struct miqt_qpointf p);
void QRectF_setRect(QRectF* self, double x, double y, double w, double h);
void QRectF_getRect(struct miqt_qrectf self_cabi, double* x, double* y, double* w, double* h);
void QRectF_setCoords(QRectF* self, double x1, double y1, double x2, double y2);
void QRectF_getCoords(struct miqt_qrectf self_cabi, double* x1, double* y1, double* x2, double* y2);
void QRectF_adjust(QRectF* self, double x1, double y1, double x2, double y2);
struct miqt_qrectf QRectF_adjusted(struct miqt_qrectf self_cabi, double x1, double y1, double x2, double y2);
struct miqt_qsizef QRectF_size(struct miqt_qrectf self_cabi);
double QRectF_width(struct miqt_qrectf self_cabi);
double QRectF_height(struct miqt_qrectf self_cabi);
void QRectF_setWidth(QRectF* self, double w);
void QRectF_setHeight(QRectF* self, double h);
void QRectF_setSize(QRectF* self, struct miqt_qsizef s);
struct miqt_qrectf QRectF_operatorBitwiseOr(struct miqt_qrectf self_cabi, struct miqt_qrectf r);
struct miqt_qrectf QRectF_operatorBitwiseAnd(struct miqt_qrectf self_cabi, struct miqt_qrectf r);
void QRectF_operatorBitwiseOrAssign(QRectF* self, struct miqt_qrectf r);
void QRectF_operatorBitwiseAndAssign(QRectF* self, struct miqt_qrectf r);
bool QRectF_contains(struct miqt_qrectf self_cabi, struct miqt_qrectf r);
bool QRectF_containsWithQPointF(struct miqt_qrectf self_cabi, struct miqt_qpointf p);
bool QRectF_contains2(struct miqt_qrectf self_cabi, double x, double y);
struct miqt_qrectf QRectF_united(struct miqt_qrectf self_cabi, struct miqt_qrectf other);
struct miqt_qrectf QRectF_intersected(struct miqt_qrectf self_cabi, struct miqt_qrectf other);
bool QRectF_intersects(struct miqt_qrectf self_cabi, struct miqt_qrectf r);
struct miqt_qrectf QRectF_marginsAdded(struct miqt_qrectf self_cabi, struct miqt_qmarginsf margins);
struct miqt_qrectf QRectF_marginsRemoved(struct miqt_qrectf self_cabi, struct miqt_qmarginsf margins);
QRectF* QRectF_operatorPlusAssign(QRectF* self, struct miqt_qmarginsf margins);
QRectF* QRectF_operatorMinusAssign(QRectF* self, struct miqt_qmarginsf margins);
struct miqt_qrect QRectF_toRect(struct miqt_qrectf self_cabi);
struct miqt_qrect QRectF_toAlignedRect(struct miqt_qrectf self_cabi);
void QRectF_operatorAssign(QRectF* self, struct miqt_qrectf param1);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
