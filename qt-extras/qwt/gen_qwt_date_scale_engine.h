#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_DATE_SCALE_ENGINE_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_DATE_SCALE_ENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDateTime;
class QwtDateScaleEngine;
class QwtInterval;
class QwtLinearScaleEngine;
class QwtScaleDiv;
class QwtScaleEngine;
#else
typedef struct QDateTime QDateTime;
typedef struct QwtDateScaleEngine QwtDateScaleEngine;
typedef struct QwtInterval QwtInterval;
typedef struct QwtLinearScaleEngine QwtLinearScaleEngine;
typedef struct QwtScaleDiv QwtScaleDiv;
typedef struct QwtScaleEngine QwtScaleEngine;
#endif

QwtDateScaleEngine* QwtDateScaleEngine_new();
QwtDateScaleEngine* QwtDateScaleEngine_new2(QwtDateScaleEngine* param1);
QwtDateScaleEngine* QwtDateScaleEngine_new3(int param1);
void QwtDateScaleEngine_virtbase(QwtDateScaleEngine* src, QwtLinearScaleEngine** outptr_QwtLinearScaleEngine);
void QwtDateScaleEngine_setTimeSpec(QwtDateScaleEngine* self, int timeSpec);
int QwtDateScaleEngine_timeSpec(const QwtDateScaleEngine* self);
void QwtDateScaleEngine_setUtcOffset(QwtDateScaleEngine* self, int seconds);
int QwtDateScaleEngine_utcOffset(const QwtDateScaleEngine* self);
void QwtDateScaleEngine_setWeek0Type(QwtDateScaleEngine* self, int week0Type);
int QwtDateScaleEngine_week0Type(const QwtDateScaleEngine* self);
void QwtDateScaleEngine_setMaxWeeks(QwtDateScaleEngine* self, int maxWeeks);
int QwtDateScaleEngine_maxWeeks(const QwtDateScaleEngine* self);
void QwtDateScaleEngine_autoScale(const QwtDateScaleEngine* self, int maxNumSteps, double* x1, double* x2, double* stepSize);
QwtScaleDiv* QwtDateScaleEngine_divideScale(const QwtDateScaleEngine* self, double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize);
int QwtDateScaleEngine_intervalType(const QwtDateScaleEngine* self, QDateTime* param1, QDateTime* param2, int maxSteps);
QDateTime* QwtDateScaleEngine_toDateTime(const QwtDateScaleEngine* self, double param1);
QDateTime* QwtDateScaleEngine_alignDate(const QwtDateScaleEngine* self, QDateTime* param1, double stepSize, int param3, bool up);
void QwtDateScaleEngine_operatorAssign(QwtDateScaleEngine* self, QwtDateScaleEngine* param1);

bool QwtDateScaleEngine_override_virtual_autoScale(void* self, intptr_t slot);
void QwtDateScaleEngine_virtualbase_autoScale(const void* self, int maxNumSteps, double* x1, double* x2, double* stepSize);
bool QwtDateScaleEngine_override_virtual_divideScale(void* self, intptr_t slot);
QwtScaleDiv* QwtDateScaleEngine_virtualbase_divideScale(const void* self, double x1, double x2, int maxMajorSteps, int maxMinorSteps, double stepSize);
bool QwtDateScaleEngine_override_virtual_intervalType(void* self, intptr_t slot);
int QwtDateScaleEngine_virtualbase_intervalType(const void* self, QDateTime* param1, QDateTime* param2, int maxSteps);
bool QwtDateScaleEngine_override_virtual_alignDate(void* self, intptr_t slot);
QDateTime* QwtDateScaleEngine_virtualbase_alignDate(const void* self, QDateTime* param1, double stepSize, int param3, bool up);

QwtInterval* QwtDateScaleEngine_protectedbase_align(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double stepSize);
void QwtDateScaleEngine_protectedbase_buildTicks(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double stepSize, int maxMinorSteps, struct miqt_array /* of double */  ticks);
struct miqt_array /* of double */  QwtDateScaleEngine_protectedbase_buildMajorTicks(bool* _dynamic_cast_ok, const void* self, QwtInterval* interval, double stepSize);
void QwtDateScaleEngine_protectedbase_buildMinorTicks(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  majorTicks, int maxMinorSteps, double stepSize, struct miqt_array /* of double */  minorTicks, struct miqt_array /* of double */  mediumTicks);
bool QwtDateScaleEngine_protectedbase_contains(bool* _dynamic_cast_ok, const void* self, QwtInterval* param1, double value);
struct miqt_array /* of double */  QwtDateScaleEngine_protectedbase_strip(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of double */  param1, QwtInterval* param2);
double QwtDateScaleEngine_protectedbase_divideInterval(bool* _dynamic_cast_ok, const void* self, double intervalSize, int numSteps);
QwtInterval* QwtDateScaleEngine_protectedbase_buildInterval(bool* _dynamic_cast_ok, const void* self, double value);

void QwtDateScaleEngine_delete(QwtDateScaleEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
