#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QMEDIATIMERANGE_H
#define MIQT_QT6_MULTIMEDIA_GEN_QMEDIATIMERANGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaTimeRange;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMediaTimeRange__Interval)
typedef QMediaTimeRange::Interval QMediaTimeRange__Interval;
#else
class QMediaTimeRange__Interval;
#endif
#else
typedef struct QMediaTimeRange QMediaTimeRange;
typedef struct QMediaTimeRange__Interval QMediaTimeRange__Interval;
#endif

QMediaTimeRange* QMediaTimeRange_new();
QMediaTimeRange* QMediaTimeRange_new2(long long start, long long end);
QMediaTimeRange* QMediaTimeRange_new3(QMediaTimeRange__Interval* param1);
QMediaTimeRange* QMediaTimeRange_new4(QMediaTimeRange* rangeVal);
void QMediaTimeRange_OperatorAssign(QMediaTimeRange* self, QMediaTimeRange* param1);
void QMediaTimeRange_Swap(QMediaTimeRange* self, QMediaTimeRange* other);
void QMediaTimeRange_Detach(QMediaTimeRange* self);
void QMediaTimeRange_OperatorAssignWithQMediaTimeRangeInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* param1);
long long QMediaTimeRange_EarliestTime(const QMediaTimeRange* self);
long long QMediaTimeRange_LatestTime(const QMediaTimeRange* self);
struct miqt_array /* of QMediaTimeRange__Interval* */  QMediaTimeRange_Intervals(const QMediaTimeRange* self);
bool QMediaTimeRange_IsEmpty(const QMediaTimeRange* self);
bool QMediaTimeRange_IsContinuous(const QMediaTimeRange* self);
bool QMediaTimeRange_Contains(const QMediaTimeRange* self, long long time);
void QMediaTimeRange_AddInterval(QMediaTimeRange* self, long long start, long long end);
void QMediaTimeRange_AddIntervalWithInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* interval);
void QMediaTimeRange_AddTimeRange(QMediaTimeRange* self, QMediaTimeRange* param1);
void QMediaTimeRange_RemoveInterval(QMediaTimeRange* self, long long start, long long end);
void QMediaTimeRange_RemoveIntervalWithInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* interval);
void QMediaTimeRange_RemoveTimeRange(QMediaTimeRange* self, QMediaTimeRange* param1);
QMediaTimeRange* QMediaTimeRange_OperatorPlusAssign(QMediaTimeRange* self, QMediaTimeRange* param1);
QMediaTimeRange* QMediaTimeRange_OperatorPlusAssignWithQMediaTimeRangeInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* param1);
QMediaTimeRange* QMediaTimeRange_OperatorMinusAssign(QMediaTimeRange* self, QMediaTimeRange* param1);
QMediaTimeRange* QMediaTimeRange_OperatorMinusAssignWithQMediaTimeRangeInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* param1);
void QMediaTimeRange_Clear(QMediaTimeRange* self);
void QMediaTimeRange_Delete(QMediaTimeRange* self);

QMediaTimeRange__Interval* QMediaTimeRange__Interval_new();
QMediaTimeRange__Interval* QMediaTimeRange__Interval_new2(long long start, long long end);
QMediaTimeRange__Interval* QMediaTimeRange__Interval_new3(QMediaTimeRange__Interval* param1);
long long QMediaTimeRange__Interval_Start(const QMediaTimeRange__Interval* self);
long long QMediaTimeRange__Interval_End(const QMediaTimeRange__Interval* self);
bool QMediaTimeRange__Interval_Contains(const QMediaTimeRange__Interval* self, long long time);
bool QMediaTimeRange__Interval_IsNormal(const QMediaTimeRange__Interval* self);
QMediaTimeRange__Interval* QMediaTimeRange__Interval_Normalized(const QMediaTimeRange__Interval* self);
QMediaTimeRange__Interval* QMediaTimeRange__Interval_Translated(const QMediaTimeRange__Interval* self, long long offset);
void QMediaTimeRange__Interval_Delete(QMediaTimeRange__Interval* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
