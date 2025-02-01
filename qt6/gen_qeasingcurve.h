#pragma once
#ifndef MIQT_QT6_GEN_QEASINGCURVE_H
#define MIQT_QT6_GEN_QEASINGCURVE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEasingCurve;
class QPointF;
#else
typedef struct QEasingCurve QEasingCurve;
typedef struct QPointF QPointF;
#endif

QEasingCurve* QEasingCurve_new();
QEasingCurve* QEasingCurve_new2(QEasingCurve* other);
QEasingCurve* QEasingCurve_new3(int type);
void QEasingCurve_operatorAssign(QEasingCurve* self, QEasingCurve* other);
void QEasingCurve_swap(QEasingCurve* self, QEasingCurve* other);
bool QEasingCurve_operatorEqual(const QEasingCurve* self, QEasingCurve* other);
bool QEasingCurve_operatorNotEqual(const QEasingCurve* self, QEasingCurve* other);
double QEasingCurve_amplitude(const QEasingCurve* self);
void QEasingCurve_setAmplitude(QEasingCurve* self, double amplitude);
double QEasingCurve_period(const QEasingCurve* self);
void QEasingCurve_setPeriod(QEasingCurve* self, double period);
double QEasingCurve_overshoot(const QEasingCurve* self);
void QEasingCurve_setOvershoot(QEasingCurve* self, double overshoot);
void QEasingCurve_addCubicBezierSegment(QEasingCurve* self, QPointF* c1, QPointF* c2, QPointF* endPoint);
void QEasingCurve_addTCBSegment(QEasingCurve* self, QPointF* nextPoint, double t, double c, double b);
struct miqt_array /* of QPointF* */  QEasingCurve_toCubicSpline(const QEasingCurve* self);
int QEasingCurve_type(const QEasingCurve* self);
void QEasingCurve_setType(QEasingCurve* self, int type);
double QEasingCurve_valueForProgress(const QEasingCurve* self, double progress);
void QEasingCurve_delete(QEasingCurve* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
