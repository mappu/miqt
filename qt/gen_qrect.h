#ifndef GEN_QRECT_H
#define GEN_QRECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
bool QRect_IsNull(QRect* self);
bool QRect_IsEmpty(QRect* self);
bool QRect_IsValid(QRect* self);
int QRect_Left(QRect* self);
int QRect_Top(QRect* self);
int QRect_Right(QRect* self);
int QRect_Bottom(QRect* self);
QRect* QRect_Normalized(QRect* self);
int QRect_X(QRect* self);
int QRect_Y(QRect* self);
void QRect_SetLeft(QRect* self, int pos);
void QRect_SetTop(QRect* self, int pos);
void QRect_SetRight(QRect* self, int pos);
void QRect_SetBottom(QRect* self, int pos);
void QRect_SetX(QRect* self, int x);
void QRect_SetY(QRect* self, int y);
void QRect_SetTopLeft(QRect* self, QPoint* p);
void QRect_SetBottomRight(QRect* self, QPoint* p);
void QRect_SetTopRight(QRect* self, QPoint* p);
void QRect_SetBottomLeft(QRect* self, QPoint* p);
QPoint* QRect_TopLeft(QRect* self);
QPoint* QRect_BottomRight(QRect* self);
QPoint* QRect_TopRight(QRect* self);
QPoint* QRect_BottomLeft(QRect* self);
QPoint* QRect_Center(QRect* self);
void QRect_MoveLeft(QRect* self, int pos);
void QRect_MoveTop(QRect* self, int pos);
void QRect_MoveRight(QRect* self, int pos);
void QRect_MoveBottom(QRect* self, int pos);
void QRect_MoveTopLeft(QRect* self, QPoint* p);
void QRect_MoveBottomRight(QRect* self, QPoint* p);
void QRect_MoveTopRight(QRect* self, QPoint* p);
void QRect_MoveBottomLeft(QRect* self, QPoint* p);
void QRect_MoveCenter(QRect* self, QPoint* p);
void QRect_Translate(QRect* self, int dx, int dy);
void QRect_TranslateWithQPoint(QRect* self, QPoint* p);
QRect* QRect_Translated(QRect* self, int dx, int dy);
QRect* QRect_TranslatedWithQPoint(QRect* self, QPoint* p);
QRect* QRect_Transposed(QRect* self);
void QRect_MoveTo(QRect* self, int x, int t);
void QRect_MoveToWithQPoint(QRect* self, QPoint* p);
void QRect_SetRect(QRect* self, int x, int y, int w, int h);
void QRect_GetRect(QRect* self, int* x, int* y, int* w, int* h);
void QRect_SetCoords(QRect* self, int x1, int y1, int x2, int y2);
void QRect_GetCoords(QRect* self, int* x1, int* y1, int* x2, int* y2);
void QRect_Adjust(QRect* self, int x1, int y1, int x2, int y2);
QRect* QRect_Adjusted(QRect* self, int x1, int y1, int x2, int y2);
QSize* QRect_Size(QRect* self);
int QRect_Width(QRect* self);
int QRect_Height(QRect* self);
void QRect_SetWidth(QRect* self, int w);
void QRect_SetHeight(QRect* self, int h);
void QRect_SetSize(QRect* self, QSize* s);
QRect* QRect_OperatorBitwiseOr(QRect* self, QRect* r);
QRect* QRect_OperatorBitwiseAnd(QRect* self, QRect* r);
void QRect_OperatorBitwiseOrAssign(QRect* self, QRect* r);
void QRect_OperatorBitwiseAndAssign(QRect* self, QRect* r);
bool QRect_Contains(QRect* self, QRect* r);
bool QRect_ContainsWithQPoint(QRect* self, QPoint* p);
bool QRect_Contains2(QRect* self, int x, int y);
bool QRect_Contains3(QRect* self, int x, int y, bool proper);
QRect* QRect_United(QRect* self, QRect* other);
QRect* QRect_Intersected(QRect* self, QRect* other);
bool QRect_Intersects(QRect* self, QRect* r);
QRect* QRect_MarginsAdded(QRect* self, QMargins* margins);
QRect* QRect_MarginsRemoved(QRect* self, QMargins* margins);
QRect* QRect_OperatorPlusAssign(QRect* self, QMargins* margins);
QRect* QRect_OperatorMinusAssign(QRect* self, QMargins* margins);
bool QRect_Contains22(QRect* self, QRect* r, bool proper);
bool QRect_Contains23(QRect* self, QPoint* p, bool proper);
void QRect_Delete(QRect* self);

QRectF* QRectF_new();
QRectF* QRectF_new2(QPointF* topleft, QSizeF* size);
QRectF* QRectF_new3(QPointF* topleft, QPointF* bottomRight);
QRectF* QRectF_new4(double left, double top, double width, double height);
QRectF* QRectF_new5(QRect* rect);
QRectF* QRectF_new6(QRectF* param1);
bool QRectF_IsNull(QRectF* self);
bool QRectF_IsEmpty(QRectF* self);
bool QRectF_IsValid(QRectF* self);
QRectF* QRectF_Normalized(QRectF* self);
double QRectF_Left(QRectF* self);
double QRectF_Top(QRectF* self);
double QRectF_Right(QRectF* self);
double QRectF_Bottom(QRectF* self);
double QRectF_X(QRectF* self);
double QRectF_Y(QRectF* self);
void QRectF_SetLeft(QRectF* self, double pos);
void QRectF_SetTop(QRectF* self, double pos);
void QRectF_SetRight(QRectF* self, double pos);
void QRectF_SetBottom(QRectF* self, double pos);
void QRectF_SetX(QRectF* self, double pos);
void QRectF_SetY(QRectF* self, double pos);
QPointF* QRectF_TopLeft(QRectF* self);
QPointF* QRectF_BottomRight(QRectF* self);
QPointF* QRectF_TopRight(QRectF* self);
QPointF* QRectF_BottomLeft(QRectF* self);
QPointF* QRectF_Center(QRectF* self);
void QRectF_SetTopLeft(QRectF* self, QPointF* p);
void QRectF_SetBottomRight(QRectF* self, QPointF* p);
void QRectF_SetTopRight(QRectF* self, QPointF* p);
void QRectF_SetBottomLeft(QRectF* self, QPointF* p);
void QRectF_MoveLeft(QRectF* self, double pos);
void QRectF_MoveTop(QRectF* self, double pos);
void QRectF_MoveRight(QRectF* self, double pos);
void QRectF_MoveBottom(QRectF* self, double pos);
void QRectF_MoveTopLeft(QRectF* self, QPointF* p);
void QRectF_MoveBottomRight(QRectF* self, QPointF* p);
void QRectF_MoveTopRight(QRectF* self, QPointF* p);
void QRectF_MoveBottomLeft(QRectF* self, QPointF* p);
void QRectF_MoveCenter(QRectF* self, QPointF* p);
void QRectF_Translate(QRectF* self, double dx, double dy);
void QRectF_TranslateWithQPointF(QRectF* self, QPointF* p);
QRectF* QRectF_Translated(QRectF* self, double dx, double dy);
QRectF* QRectF_TranslatedWithQPointF(QRectF* self, QPointF* p);
QRectF* QRectF_Transposed(QRectF* self);
void QRectF_MoveTo(QRectF* self, double x, double y);
void QRectF_MoveToWithQPointF(QRectF* self, QPointF* p);
void QRectF_SetRect(QRectF* self, double x, double y, double w, double h);
void QRectF_GetRect(QRectF* self, double* x, double* y, double* w, double* h);
void QRectF_SetCoords(QRectF* self, double x1, double y1, double x2, double y2);
void QRectF_GetCoords(QRectF* self, double* x1, double* y1, double* x2, double* y2);
void QRectF_Adjust(QRectF* self, double x1, double y1, double x2, double y2);
QRectF* QRectF_Adjusted(QRectF* self, double x1, double y1, double x2, double y2);
QSizeF* QRectF_Size(QRectF* self);
double QRectF_Width(QRectF* self);
double QRectF_Height(QRectF* self);
void QRectF_SetWidth(QRectF* self, double w);
void QRectF_SetHeight(QRectF* self, double h);
void QRectF_SetSize(QRectF* self, QSizeF* s);
QRectF* QRectF_OperatorBitwiseOr(QRectF* self, QRectF* r);
QRectF* QRectF_OperatorBitwiseAnd(QRectF* self, QRectF* r);
void QRectF_OperatorBitwiseOrAssign(QRectF* self, QRectF* r);
void QRectF_OperatorBitwiseAndAssign(QRectF* self, QRectF* r);
bool QRectF_Contains(QRectF* self, QRectF* r);
bool QRectF_ContainsWithQPointF(QRectF* self, QPointF* p);
bool QRectF_Contains2(QRectF* self, double x, double y);
QRectF* QRectF_United(QRectF* self, QRectF* other);
QRectF* QRectF_Intersected(QRectF* self, QRectF* other);
bool QRectF_Intersects(QRectF* self, QRectF* r);
QRectF* QRectF_MarginsAdded(QRectF* self, QMarginsF* margins);
QRectF* QRectF_MarginsRemoved(QRectF* self, QMarginsF* margins);
QRectF* QRectF_OperatorPlusAssign(QRectF* self, QMarginsF* margins);
QRectF* QRectF_OperatorMinusAssign(QRectF* self, QMarginsF* margins);
QRect* QRectF_ToRect(QRectF* self);
QRect* QRectF_ToAlignedRect(QRectF* self);
void QRectF_Delete(QRectF* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
