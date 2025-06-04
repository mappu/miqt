#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIATIMERANGE_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIATIMERANGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaTimeInterval;
class QMediaTimeRange;
#else
typedef struct QMediaTimeInterval QMediaTimeInterval;
typedef struct QMediaTimeRange QMediaTimeRange;
#endif

QMediaTimeInterval* QMediaTimeInterval_new();
QMediaTimeInterval* QMediaTimeInterval_new2(long long start, long long end);
QMediaTimeInterval* QMediaTimeInterval_new3(QMediaTimeInterval* param1);
void QMediaTimeInterval_operatorAssign(QMediaTimeInterval* self, QMediaTimeInterval* param1);
long long QMediaTimeInterval_start(const QMediaTimeInterval* self);
long long QMediaTimeInterval_end(const QMediaTimeInterval* self);
bool QMediaTimeInterval_contains(const QMediaTimeInterval* self, long long time);
bool QMediaTimeInterval_isNormal(const QMediaTimeInterval* self);
QMediaTimeInterval* QMediaTimeInterval_normalized(const QMediaTimeInterval* self);
QMediaTimeInterval* QMediaTimeInterval_translated(const QMediaTimeInterval* self, long long offset);

void QMediaTimeInterval_delete(QMediaTimeInterval* self);

QMediaTimeRange* QMediaTimeRange_new();
QMediaTimeRange* QMediaTimeRange_new2(long long start, long long end);
QMediaTimeRange* QMediaTimeRange_new3(QMediaTimeInterval* param1);
QMediaTimeRange* QMediaTimeRange_new4(QMediaTimeRange* range);
void QMediaTimeRange_operatorAssign(QMediaTimeRange* self, QMediaTimeRange* param1);
void QMediaTimeRange_operatorAssignWithQMediaTimeInterval(QMediaTimeRange* self, QMediaTimeInterval* param1);
long long QMediaTimeRange_earliestTime(const QMediaTimeRange* self);
long long QMediaTimeRange_latestTime(const QMediaTimeRange* self);
struct miqt_array /* of QMediaTimeInterval* */  QMediaTimeRange_intervals(const QMediaTimeRange* self);
bool QMediaTimeRange_isEmpty(const QMediaTimeRange* self);
bool QMediaTimeRange_isContinuous(const QMediaTimeRange* self);
bool QMediaTimeRange_contains(const QMediaTimeRange* self, long long time);
void QMediaTimeRange_addInterval(QMediaTimeRange* self, long long start, long long end);
void QMediaTimeRange_addIntervalWithInterval(QMediaTimeRange* self, QMediaTimeInterval* interval);
void QMediaTimeRange_addTimeRange(QMediaTimeRange* self, QMediaTimeRange* param1);
void QMediaTimeRange_removeInterval(QMediaTimeRange* self, long long start, long long end);
void QMediaTimeRange_removeIntervalWithInterval(QMediaTimeRange* self, QMediaTimeInterval* interval);
void QMediaTimeRange_removeTimeRange(QMediaTimeRange* self, QMediaTimeRange* param1);
QMediaTimeRange* QMediaTimeRange_operatorPlusAssign(QMediaTimeRange* self, QMediaTimeRange* param1);
QMediaTimeRange* QMediaTimeRange_operatorPlusAssignWithQMediaTimeInterval(QMediaTimeRange* self, QMediaTimeInterval* param1);
QMediaTimeRange* QMediaTimeRange_operatorMinusAssign(QMediaTimeRange* self, QMediaTimeRange* param1);
QMediaTimeRange* QMediaTimeRange_operatorMinusAssignWithQMediaTimeInterval(QMediaTimeRange* self, QMediaTimeInterval* param1);
void QMediaTimeRange_clear(QMediaTimeRange* self);

void QMediaTimeRange_delete(QMediaTimeRange* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
