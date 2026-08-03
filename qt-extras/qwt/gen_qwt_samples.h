#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_SAMPLES_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_SAMPLES_H

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
class QwtIntervalSample;
class QwtOHLCSample;
class QwtSetSample;
#else
typedef struct QwtInterval QwtInterval;
typedef struct QwtIntervalSample QwtIntervalSample;
typedef struct QwtOHLCSample QwtOHLCSample;
typedef struct QwtSetSample QwtSetSample;
#endif

QwtIntervalSample* QwtIntervalSample_new();
QwtIntervalSample* QwtIntervalSample_new2(double param1, QwtInterval* param2);
QwtIntervalSample* QwtIntervalSample_new3(double value, double min, double max);
QwtIntervalSample* QwtIntervalSample_new4(QwtIntervalSample* param1);
bool QwtIntervalSample_operatorEqual(const QwtIntervalSample* self, QwtIntervalSample* param1);
bool QwtIntervalSample_operatorNotEqual(const QwtIntervalSample* self, QwtIntervalSample* param1);
double QwtIntervalSample_value(const QwtIntervalSample* self);
void QwtIntervalSample_setValue(QwtIntervalSample* self, double value);
QwtInterval* QwtIntervalSample_interval(const QwtIntervalSample* self);
void QwtIntervalSample_setInterval(QwtIntervalSample* self, QwtInterval* interval);

void QwtIntervalSample_delete(QwtIntervalSample* self);

QwtSetSample* QwtSetSample_new();
QwtSetSample* QwtSetSample_new2(double param1);
QwtSetSample* QwtSetSample_new3(QwtSetSample* param1);
QwtSetSample* QwtSetSample_new4(double param1, struct miqt_array /* of double */  param2);
bool QwtSetSample_operatorEqual(const QwtSetSample* self, QwtSetSample* other);
bool QwtSetSample_operatorNotEqual(const QwtSetSample* self, QwtSetSample* other);
double QwtSetSample_added(const QwtSetSample* self);
double QwtSetSample_value(const QwtSetSample* self);
void QwtSetSample_setValue(QwtSetSample* self, double value);
void QwtSetSample_setSet(QwtSetSample* self, struct miqt_array /* of double */  set);
void QwtSetSample_operatorAssign(QwtSetSample* self, QwtSetSample* param1);

void QwtSetSample_delete(QwtSetSample* self);

QwtOHLCSample* QwtOHLCSample_new();
QwtOHLCSample* QwtOHLCSample_new2(QwtOHLCSample* param1);
QwtOHLCSample* QwtOHLCSample_new3(double time);
QwtOHLCSample* QwtOHLCSample_new4(double time, double open);
QwtOHLCSample* QwtOHLCSample_new5(double time, double open, double high);
QwtOHLCSample* QwtOHLCSample_new6(double time, double open, double high, double low);
QwtOHLCSample* QwtOHLCSample_new7(double time, double open, double high, double low, double close);
QwtInterval* QwtOHLCSample_boundingInterval(const QwtOHLCSample* self);
bool QwtOHLCSample_isValid(const QwtOHLCSample* self);
double QwtOHLCSample_time(const QwtOHLCSample* self);
void QwtOHLCSample_setTime(QwtOHLCSample* self, double time);
double QwtOHLCSample_open(const QwtOHLCSample* self);
void QwtOHLCSample_setOpen(QwtOHLCSample* self, double open);
double QwtOHLCSample_high(const QwtOHLCSample* self);
void QwtOHLCSample_setHigh(QwtOHLCSample* self, double high);
double QwtOHLCSample_low(const QwtOHLCSample* self);
void QwtOHLCSample_setLow(QwtOHLCSample* self, double low);
double QwtOHLCSample_close(const QwtOHLCSample* self);
void QwtOHLCSample_setClose(QwtOHLCSample* self, double close);

void QwtOHLCSample_delete(QwtOHLCSample* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
