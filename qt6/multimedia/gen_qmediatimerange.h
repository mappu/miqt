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
QMediaTimeRange* QMediaTimeRange_new4(QMediaTimeRange* range);
void QMediaTimeRange_operatorAssign(QMediaTimeRange* self, QMediaTimeRange* param1);
void QMediaTimeRange_swap(QMediaTimeRange* self, QMediaTimeRange* other);
void QMediaTimeRange_detach(QMediaTimeRange* self);
void QMediaTimeRange_operatorAssignWithQMediaTimeRangeInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* param1);
long long QMediaTimeRange_earliestTime(const QMediaTimeRange* self);
long long QMediaTimeRange_latestTime(const QMediaTimeRange* self);
struct miqt_array /* of QMediaTimeRange__Interval* */  QMediaTimeRange_intervals(const QMediaTimeRange* self);
bool QMediaTimeRange_isEmpty(const QMediaTimeRange* self);
bool QMediaTimeRange_isContinuous(const QMediaTimeRange* self);
bool QMediaTimeRange_contains(const QMediaTimeRange* self, long long time);
void QMediaTimeRange_addInterval(QMediaTimeRange* self, long long start, long long end);
void QMediaTimeRange_addIntervalWithInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* interval);
void QMediaTimeRange_addTimeRange(QMediaTimeRange* self, QMediaTimeRange* param1);
void QMediaTimeRange_removeInterval(QMediaTimeRange* self, long long start, long long end);
void QMediaTimeRange_removeIntervalWithInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* interval);
void QMediaTimeRange_removeTimeRange(QMediaTimeRange* self, QMediaTimeRange* param1);
QMediaTimeRange* QMediaTimeRange_operatorPlusAssign(QMediaTimeRange* self, QMediaTimeRange* param1);
QMediaTimeRange* QMediaTimeRange_operatorPlusAssignWithQMediaTimeRangeInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* param1);
QMediaTimeRange* QMediaTimeRange_operatorMinusAssign(QMediaTimeRange* self, QMediaTimeRange* param1);
QMediaTimeRange* QMediaTimeRange_operatorMinusAssignWithQMediaTimeRangeInterval(QMediaTimeRange* self, QMediaTimeRange__Interval* param1);
void QMediaTimeRange_clear(QMediaTimeRange* self);

void QMediaTimeRange_delete(QMediaTimeRange* self);

QMediaTimeRange__Interval* QMediaTimeRange__Interval_new();
QMediaTimeRange__Interval* QMediaTimeRange__Interval_new2(long long start, long long end);
QMediaTimeRange__Interval* QMediaTimeRange__Interval_new3(QMediaTimeRange__Interval* param1);
long long QMediaTimeRange__Interval_start(const QMediaTimeRange__Interval* self);
long long QMediaTimeRange__Interval_end(const QMediaTimeRange__Interval* self);
bool QMediaTimeRange__Interval_contains(const QMediaTimeRange__Interval* self, long long time);
bool QMediaTimeRange__Interval_isNormal(const QMediaTimeRange__Interval* self);
QMediaTimeRange__Interval* QMediaTimeRange__Interval_normalized(const QMediaTimeRange__Interval* self);
QMediaTimeRange__Interval* QMediaTimeRange__Interval_translated(const QMediaTimeRange__Interval* self, long long offset);

void QMediaTimeRange__Interval_delete(QMediaTimeRange__Interval* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
