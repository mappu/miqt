#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_CURVE_FITTER_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_CURVE_FITTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QwtCurveFitter;
class QwtSpline;
class QwtSplineCurveFitter;
class QwtWeedingCurveFitter;
#else
typedef struct QwtCurveFitter QwtCurveFitter;
typedef struct QwtSpline QwtSpline;
typedef struct QwtSplineCurveFitter QwtSplineCurveFitter;
typedef struct QwtWeedingCurveFitter QwtWeedingCurveFitter;
#endif

void QwtCurveFitter_delete(QwtCurveFitter* self);

QwtSplineCurveFitter* QwtSplineCurveFitter_new();
void QwtSplineCurveFitter_virtbase(QwtSplineCurveFitter* src, QwtCurveFitter** outptr_QwtCurveFitter);
void QwtSplineCurveFitter_setFitMode(QwtSplineCurveFitter* self, int fitMode);
int QwtSplineCurveFitter_fitMode(const QwtSplineCurveFitter* self);
void QwtSplineCurveFitter_setSpline(QwtSplineCurveFitter* self, QwtSpline* spline);
QwtSpline* QwtSplineCurveFitter_spline(const QwtSplineCurveFitter* self);
QwtSpline* QwtSplineCurveFitter_spline2(QwtSplineCurveFitter* self);
void QwtSplineCurveFitter_setSplineSize(QwtSplineCurveFitter* self, int splineSize);
int QwtSplineCurveFitter_splineSize(const QwtSplineCurveFitter* self);

void QwtSplineCurveFitter_delete(QwtSplineCurveFitter* self);

QwtWeedingCurveFitter* QwtWeedingCurveFitter_new();
QwtWeedingCurveFitter* QwtWeedingCurveFitter_new2(double tolerance);
void QwtWeedingCurveFitter_virtbase(QwtWeedingCurveFitter* src, QwtCurveFitter** outptr_QwtCurveFitter);
void QwtWeedingCurveFitter_setTolerance(QwtWeedingCurveFitter* self, double tolerance);
double QwtWeedingCurveFitter_tolerance(const QwtWeedingCurveFitter* self);
void QwtWeedingCurveFitter_setChunkSize(QwtWeedingCurveFitter* self, unsigned int chunkSize);
unsigned int QwtWeedingCurveFitter_chunkSize(const QwtWeedingCurveFitter* self);

void QwtWeedingCurveFitter_delete(QwtWeedingCurveFitter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
