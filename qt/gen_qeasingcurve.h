#ifndef GEN_QEASINGCURVE_H
#define GEN_QEASINGCURVE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QEasingCurve* QEasingCurve_new(QEasingCurve* other);
void QEasingCurve_OperatorAssign(QEasingCurve* self, QEasingCurve* other);
void QEasingCurve_Swap(QEasingCurve* self, QEasingCurve* other);
bool QEasingCurve_OperatorEqual(QEasingCurve* self, QEasingCurve* other);
bool QEasingCurve_OperatorNotEqual(QEasingCurve* self, QEasingCurve* other);
double QEasingCurve_Amplitude(QEasingCurve* self);
void QEasingCurve_SetAmplitude(QEasingCurve* self, double amplitude);
double QEasingCurve_Period(QEasingCurve* self);
void QEasingCurve_SetPeriod(QEasingCurve* self, double period);
double QEasingCurve_Overshoot(QEasingCurve* self);
void QEasingCurve_SetOvershoot(QEasingCurve* self, double overshoot);
void QEasingCurve_AddCubicBezierSegment(QEasingCurve* self, QPointF* c1, QPointF* c2, QPointF* endPoint);
void QEasingCurve_AddTCBSegment(QEasingCurve* self, QPointF* nextPoint, double t, double c, double b);
void QEasingCurve_ToCubicSpline(QEasingCurve* self, QPointF*** _out, size_t* _out_len);
double QEasingCurve_ValueForProgress(QEasingCurve* self, double progress);
void QEasingCurve_Delete(QEasingCurve* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
