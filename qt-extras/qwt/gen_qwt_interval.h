#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_INTERVAL_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_INTERVAL_H

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
#else
typedef struct QwtInterval QwtInterval;
#endif

QwtInterval* QwtInterval_new();
QwtInterval* QwtInterval_new2(double minValue, double maxValue);
QwtInterval* QwtInterval_new3(QwtInterval* param1);
QwtInterval* QwtInterval_new4(double minValue, double maxValue, int param3);
void QwtInterval_setInterval(QwtInterval* self, double minValue, double maxValue);
QwtInterval* QwtInterval_normalized(const QwtInterval* self);
QwtInterval* QwtInterval_inverted(const QwtInterval* self);
QwtInterval* QwtInterval_limited(const QwtInterval* self, double lowerBound, double upperBound);
bool QwtInterval_operatorEqual(const QwtInterval* self, QwtInterval* param1);
bool QwtInterval_operatorNotEqual(const QwtInterval* self, QwtInterval* param1);
void QwtInterval_setBorderFlags(QwtInterval* self, int borderFlags);
int QwtInterval_borderFlags(const QwtInterval* self);
double QwtInterval_minValue(const QwtInterval* self);
double QwtInterval_maxValue(const QwtInterval* self);
double QwtInterval_width(const QwtInterval* self);
void QwtInterval_setMinValue(QwtInterval* self, double minValue);
void QwtInterval_setMaxValue(QwtInterval* self, double maxValue);
bool QwtInterval_contains(const QwtInterval* self, double value);
bool QwtInterval_intersects(const QwtInterval* self, QwtInterval* param1);
QwtInterval* QwtInterval_intersect(const QwtInterval* self, QwtInterval* param1);
QwtInterval* QwtInterval_unite(const QwtInterval* self, QwtInterval* param1);
QwtInterval* QwtInterval_operatorBitwiseOr(const QwtInterval* self, QwtInterval* param1);
QwtInterval* QwtInterval_operatorBitwiseAnd(const QwtInterval* self, QwtInterval* param1);
void QwtInterval_operatorBitwiseOrAssign(QwtInterval* self, QwtInterval* param1);
void QwtInterval_operatorBitwiseAndAssign(QwtInterval* self, QwtInterval* param1);
QwtInterval* QwtInterval_extend(const QwtInterval* self, double value);
QwtInterval* QwtInterval_operatorBitwiseOrWithDouble(const QwtInterval* self, double param1);
void QwtInterval_operatorBitwiseOrAssignWithDouble(QwtInterval* self, double param1);
bool QwtInterval_isValid(const QwtInterval* self);
bool QwtInterval_isNull(const QwtInterval* self);
void QwtInterval_invalidate(QwtInterval* self);
QwtInterval* QwtInterval_symmetrize(const QwtInterval* self, double value);
void QwtInterval_setInterval2(QwtInterval* self, double minValue, double maxValue, int param3);

void QwtInterval_delete(QwtInterval* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
