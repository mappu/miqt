#pragma once
#ifndef MIQT_QT_GEN_QEASINGCURVE_H
#define MIQT_QT_GEN_QEASINGCURVE_H

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
QEasingCurve* QEasingCurve_new3(int typeVal);
void QEasingCurve_OperatorAssign(QEasingCurve* self, QEasingCurve* other);
void QEasingCurve_Swap(QEasingCurve* self, QEasingCurve* other);
bool QEasingCurve_OperatorEqual(const QEasingCurve* self, QEasingCurve* other);
bool QEasingCurve_OperatorNotEqual(const QEasingCurve* self, QEasingCurve* other);
double QEasingCurve_Amplitude(const QEasingCurve* self);
void QEasingCurve_SetAmplitude(QEasingCurve* self, double amplitude);
double QEasingCurve_Period(const QEasingCurve* self);
void QEasingCurve_SetPeriod(QEasingCurve* self, double period);
double QEasingCurve_Overshoot(const QEasingCurve* self);
void QEasingCurve_SetOvershoot(QEasingCurve* self, double overshoot);
void QEasingCurve_AddCubicBezierSegment(QEasingCurve* self, QPointF* c1, QPointF* c2, QPointF* endPoint);
void QEasingCurve_AddTCBSegment(QEasingCurve* self, QPointF* nextPoint, double t, double c, double b);
struct miqt_array /* of QPointF* */  QEasingCurve_ToCubicSpline(const QEasingCurve* self);
int QEasingCurve_Type(const QEasingCurve* self);
void QEasingCurve_SetType(QEasingCurve* self, int typeVal);
double QEasingCurve_ValueForProgress(const QEasingCurve* self, double progress);
void QEasingCurve_Delete(QEasingCurve* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
