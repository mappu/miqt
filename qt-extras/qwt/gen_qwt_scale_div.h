#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_SCALE_DIV_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_SCALE_DIV_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QwtInterval;
class QwtScaleDiv;
#else
typedef struct QwtInterval QwtInterval;
typedef struct QwtScaleDiv QwtScaleDiv;
#endif

QwtScaleDiv* QwtScaleDiv_new();
QwtScaleDiv* QwtScaleDiv_new2(QwtInterval* param1, struct miqt_array /* of double */  param2);
QwtScaleDiv* QwtScaleDiv_new3(double lowerBound, double upperBound, struct miqt_array /* of double */  param3);
QwtScaleDiv* QwtScaleDiv_new4(double lowerBound, double upperBound, struct miqt_array /* of double */  minorTicks, struct miqt_array /* of double */  mediumTicks, struct miqt_array /* of double */  majorTicks);
QwtScaleDiv* QwtScaleDiv_new5(QwtScaleDiv* param1);
QwtScaleDiv* QwtScaleDiv_new6(double lowerBound);
QwtScaleDiv* QwtScaleDiv_new7(double lowerBound, double upperBound);
bool QwtScaleDiv_operatorEqual(const QwtScaleDiv* self, QwtScaleDiv* param1);
bool QwtScaleDiv_operatorNotEqual(const QwtScaleDiv* self, QwtScaleDiv* param1);
void QwtScaleDiv_setInterval(QwtScaleDiv* self, double lowerBound, double upperBound);
void QwtScaleDiv_setIntervalWithInterval(QwtScaleDiv* self, QwtInterval* interval);
QwtInterval* QwtScaleDiv_interval(const QwtScaleDiv* self);
void QwtScaleDiv_setLowerBound(QwtScaleDiv* self, double lowerBound);
double QwtScaleDiv_lowerBound(const QwtScaleDiv* self);
void QwtScaleDiv_setUpperBound(QwtScaleDiv* self, double upperBound);
double QwtScaleDiv_upperBound(const QwtScaleDiv* self);
double QwtScaleDiv_range(const QwtScaleDiv* self);
bool QwtScaleDiv_contains(const QwtScaleDiv* self, double value);
void QwtScaleDiv_setTicks(QwtScaleDiv* self, int tickType, struct miqt_array /* of double */  param2);
struct miqt_array /* of double */  QwtScaleDiv_ticks(const QwtScaleDiv* self, int tickType);
bool QwtScaleDiv_isEmpty(const QwtScaleDiv* self);
bool QwtScaleDiv_isIncreasing(const QwtScaleDiv* self);
void QwtScaleDiv_invert(QwtScaleDiv* self);
QwtScaleDiv* QwtScaleDiv_inverted(const QwtScaleDiv* self);
QwtScaleDiv* QwtScaleDiv_bounded(const QwtScaleDiv* self, double lowerBound, double upperBound);
void QwtScaleDiv_operatorAssign(QwtScaleDiv* self, QwtScaleDiv* param1);

void QwtScaleDiv_delete(QwtScaleDiv* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
