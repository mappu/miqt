#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_SPLINE_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_SPLINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QwtSpline;
#else
typedef struct QwtSpline QwtSpline;
#endif

QwtSpline* QwtSpline_new();
QwtSpline* QwtSpline_new2(QwtSpline* param1);
void QwtSpline_operatorAssign(QwtSpline* self, QwtSpline* param1);
void QwtSpline_setSplineType(QwtSpline* self, int splineType);
int QwtSpline_splineType(const QwtSpline* self);
void QwtSpline_reset(QwtSpline* self);
bool QwtSpline_isValid(const QwtSpline* self);
double QwtSpline_value(const QwtSpline* self, double x);
struct miqt_array /* of double */  QwtSpline_coefficientsA(const QwtSpline* self);
struct miqt_array /* of double */  QwtSpline_coefficientsB(const QwtSpline* self);
struct miqt_array /* of double */  QwtSpline_coefficientsC(const QwtSpline* self);

void QwtSpline_delete(QwtSpline* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
