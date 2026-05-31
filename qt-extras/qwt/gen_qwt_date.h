#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_DATE_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_DATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDate;
class QDateTime;
class QwtDate;
#else
typedef struct QDate QDate;
typedef struct QDateTime QDateTime;
typedef struct QwtDate QwtDate;
#endif

QDate* QwtDate_minDate();
QDate* QwtDate_maxDate();
QDateTime* QwtDate_toDateTime(double value);
double QwtDate_toDouble(QDateTime* param1);
QDateTime* QwtDate_ceil(QDateTime* param1, int param2);
QDateTime* QwtDate_floor(QDateTime* param1, int param2);
QDate* QwtDate_dateOfWeek0(int year, int param2);
int QwtDate_weekNumber(QDate* param1, int param2);
int QwtDate_utcOffset(QDateTime* param1);
struct miqt_string QwtDate_toString(QDateTime* param1, struct miqt_string format, int param3);
QDateTime* QwtDate_toDateTime2(double value, int param2);

void QwtDate_delete(QwtDate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
