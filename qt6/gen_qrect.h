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

void QRect_new(QRect** outptr_QRect);
void QRect_new2(QPoint* topleft, QPoint* bottomright, QRect** outptr_QRect);
void QRect_new3(QPoint* topleft, QSize* size, QRect** outptr_QRect);
void QRect_new4(int left, int top, int width, int height, QRect** outptr_QRect);
void QRect_new5(QRect* param1, QRect** outptr_QRect);
bool QRect_IsNull(const QRect* self);
bool QRect_IsEmpty(const QRect* self);
bool QRect_IsValid(const QRect* self);
int QRect_Left(const QRect* self);
int QRect_Top(const QRect* self);
int QRect_Right(const QRect* self);
int QRect_Bottom(const QRect* self);
QRect* QRect_Normalized(const QRect* self);
int QRect_X(const QRect* self);
int QRect_Y(const QRect* self);
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
QPoint* QRect_TopLeft(const QRect* self);
QPoint* QRect_BottomRight(const QRect* self);
QPoint* QRect_TopRight(const QRect* self);
QPoint* QRect_BottomLeft(const QRect* self);
QPoint* QRect_Center(const QRect* self);
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
QRect* QRect_Translated(const QRect* self, int dx, int dy);
QRect* QRect_TranslatedWithQPoint(const QRect* self, QPoint* p);
QRect* QRect_Transposed(const QRect* self);
void QRect_MoveTo(QRect* self, int x, int t);
void QRect_MoveToWithQPoint(QRect* self, QPoint* p);
void QRect_SetRect(QRect* self, int x, int y, int w, int h);
void QRect_GetRect(const QRect* self, int* x, int* y, int* w, int* h);
void QRect_SetCoords(QRect* self, int x1, int y1, int x2, int y2);
void QRect_GetCoords(const QRect* self, int* x1, int* y1, int* x2, int* y2);
void QRect_Adjust(QRect* self, int x1, int y1, int x2, int y2);
QRect* QRect_Adjusted(const QRect* self, int x1, int y1, int x2, int y2);
QSize* QRect_Size(const QRect* self);
int QRect_Width(const QRect* self);
int QRect_Height(const QRect* self);
void QRect_SetWidth(QRect* self, int w);
void QRect_SetHeight(QRect* self, int h);
void QRect_SetSize(QRect* self, QSize* s);
QRect* QRect_OperatorBitwiseOr(const QRect* self, QRect* r);
QRect* QRect_OperatorBitwiseAnd(const QRect* self, QRect* r);
void QRect_OperatorBitwiseOrAssign(QRect* self, QRect* r);
void QRect_OperatorBitwiseAndAssign(QRect* self, QRect* r);
bool QRect_Contains(const QRect* self, QRect* r);
bool QRect_ContainsWithQPoint(const QRect* self, QPoint* p);
bool QRect_Contains2(const QRect* self, int x, int y);
bool QRect_Contains3(const QRect* self, int x, int y, bool proper);
QRect* QRect_United(const QRect* self, QRect* other);
QRect* QRect_Intersected(const QRect* self, QRect* other);
bool QRect_Intersects(const QRect* self, QRect* r);
QRect* QRect_MarginsAdded(const QRect* self, QMargins* margins);
QRect* QRect_MarginsRemoved(const QRect* self, QMargins* margins);
QRect* QRect_OperatorPlusAssign(QRect* self, QMargins* margins);
QRect* QRect_OperatorMinusAssign(QRect* self, QMargins* margins);
QRect* QRect_Span(QPoint* p1, QPoint* p2);
QRectF* QRect_ToRectF(const QRect* self);
bool QRect_Contains22(const QRect* self, QRect* r, bool proper);
bool QRect_Contains23(const QRect* self, QPoint* p, bool proper);
void QRect_Delete(QRect* self, bool isSubclass);

void QRectF_new(QRectF** outptr_QRectF);
void QRectF_new2(QPointF* topleft, QSizeF* size, QRectF** outptr_QRectF);
void QRectF_new3(QPointF* topleft, QPointF* bottomRight, QRectF** outptr_QRectF);
void QRectF_new4(double left, double top, double width, double height, QRectF** outptr_QRectF);
void QRectF_new5(QRect* rect, QRectF** outptr_QRectF);
void QRectF_new6(QRectF* param1, QRectF** outptr_QRectF);
bool QRectF_IsNull(const QRectF* self);
bool QRectF_IsEmpty(const QRectF* self);
bool QRectF_IsValid(const QRectF* self);
QRectF* QRectF_Normalized(const QRectF* self);
double QRectF_Left(const QRectF* self);
double QRectF_Top(const QRectF* self);
double QRectF_Right(const QRectF* self);
double QRectF_Bottom(const QRectF* self);
double QRectF_X(const QRectF* self);
double QRectF_Y(const QRectF* self);
void QRectF_SetLeft(QRectF* self, double pos);
void QRectF_SetTop(QRectF* self, double pos);
void QRectF_SetRight(QRectF* self, double pos);
void QRectF_SetBottom(QRectF* self, double pos);
void QRectF_SetX(QRectF* self, double pos);
void QRectF_SetY(QRectF* self, double pos);
QPointF* QRectF_TopLeft(const QRectF* self);
QPointF* QRectF_BottomRight(const QRectF* self);
QPointF* QRectF_TopRight(const QRectF* self);
QPointF* QRectF_BottomLeft(const QRectF* self);
QPointF* QRectF_Center(const QRectF* self);
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
QRectF* QRectF_Translated(const QRectF* self, double dx, double dy);
QRectF* QRectF_TranslatedWithQPointF(const QRectF* self, QPointF* p);
QRectF* QRectF_Transposed(const QRectF* self);
void QRectF_MoveTo(QRectF* self, double x, double y);
void QRectF_MoveToWithQPointF(QRectF* self, QPointF* p);
void QRectF_SetRect(QRectF* self, double x, double y, double w, double h);
void QRectF_GetRect(const QRectF* self, double* x, double* y, double* w, double* h);
void QRectF_SetCoords(QRectF* self, double x1, double y1, double x2, double y2);
void QRectF_GetCoords(const QRectF* self, double* x1, double* y1, double* x2, double* y2);
void QRectF_Adjust(QRectF* self, double x1, double y1, double x2, double y2);
QRectF* QRectF_Adjusted(const QRectF* self, double x1, double y1, double x2, double y2);
QSizeF* QRectF_Size(const QRectF* self);
double QRectF_Width(const QRectF* self);
double QRectF_Height(const QRectF* self);
void QRectF_SetWidth(QRectF* self, double w);
void QRectF_SetHeight(QRectF* self, double h);
void QRectF_SetSize(QRectF* self, QSizeF* s);
QRectF* QRectF_OperatorBitwiseOr(const QRectF* self, QRectF* r);
QRectF* QRectF_OperatorBitwiseAnd(const QRectF* self, QRectF* r);
void QRectF_OperatorBitwiseOrAssign(QRectF* self, QRectF* r);
void QRectF_OperatorBitwiseAndAssign(QRectF* self, QRectF* r);
bool QRectF_Contains(const QRectF* self, QRectF* r);
bool QRectF_ContainsWithQPointF(const QRectF* self, QPointF* p);
bool QRectF_Contains2(const QRectF* self, double x, double y);
QRectF* QRectF_United(const QRectF* self, QRectF* other);
QRectF* QRectF_Intersected(const QRectF* self, QRectF* other);
bool QRectF_Intersects(const QRectF* self, QRectF* r);
QRectF* QRectF_MarginsAdded(const QRectF* self, QMarginsF* margins);
QRectF* QRectF_MarginsRemoved(const QRectF* self, QMarginsF* margins);
QRectF* QRectF_OperatorPlusAssign(QRectF* self, QMarginsF* margins);
QRectF* QRectF_OperatorMinusAssign(QRectF* self, QMarginsF* margins);
QRect* QRectF_ToRect(const QRectF* self);
QRect* QRectF_ToAlignedRect(const QRectF* self);
void QRectF_Delete(QRectF* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
