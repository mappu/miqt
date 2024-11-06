#ifndef GEN_QMEDIATIMERANGE_H
#define GEN_QMEDIATIMERANGE_H

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
void QMediaTimeInterval_OperatorAssign(QMediaTimeInterval* self, QMediaTimeInterval* param1);
long long QMediaTimeInterval_Start(const QMediaTimeInterval* self);
long long QMediaTimeInterval_End(const QMediaTimeInterval* self);
bool QMediaTimeInterval_Contains(const QMediaTimeInterval* self, long long time);
bool QMediaTimeInterval_IsNormal(const QMediaTimeInterval* self);
QMediaTimeInterval* QMediaTimeInterval_Normalized(const QMediaTimeInterval* self);
QMediaTimeInterval* QMediaTimeInterval_Translated(const QMediaTimeInterval* self, long long offset);
void QMediaTimeInterval_Delete(QMediaTimeInterval* self);

QMediaTimeRange* QMediaTimeRange_new();
QMediaTimeRange* QMediaTimeRange_new2(long long start, long long end);
QMediaTimeRange* QMediaTimeRange_new3(QMediaTimeInterval* param1);
QMediaTimeRange* QMediaTimeRange_new4(QMediaTimeRange* rangeVal);
void QMediaTimeRange_OperatorAssign(QMediaTimeRange* self, QMediaTimeRange* param1);
void QMediaTimeRange_OperatorAssignWithQMediaTimeInterval(QMediaTimeRange* self, QMediaTimeInterval* param1);
long long QMediaTimeRange_EarliestTime(const QMediaTimeRange* self);
long long QMediaTimeRange_LatestTime(const QMediaTimeRange* self);
struct miqt_array QMediaTimeRange_Intervals(const QMediaTimeRange* self);
bool QMediaTimeRange_IsEmpty(const QMediaTimeRange* self);
bool QMediaTimeRange_IsContinuous(const QMediaTimeRange* self);
bool QMediaTimeRange_Contains(const QMediaTimeRange* self, long long time);
void QMediaTimeRange_AddInterval(QMediaTimeRange* self, long long start, long long end);
void QMediaTimeRange_AddIntervalWithInterval(QMediaTimeRange* self, QMediaTimeInterval* interval);
void QMediaTimeRange_AddTimeRange(QMediaTimeRange* self, QMediaTimeRange* param1);
void QMediaTimeRange_RemoveInterval(QMediaTimeRange* self, long long start, long long end);
void QMediaTimeRange_RemoveIntervalWithInterval(QMediaTimeRange* self, QMediaTimeInterval* interval);
void QMediaTimeRange_RemoveTimeRange(QMediaTimeRange* self, QMediaTimeRange* param1);
QMediaTimeRange* QMediaTimeRange_OperatorPlusAssign(QMediaTimeRange* self, QMediaTimeRange* param1);
QMediaTimeRange* QMediaTimeRange_OperatorPlusAssignWithQMediaTimeInterval(QMediaTimeRange* self, QMediaTimeInterval* param1);
QMediaTimeRange* QMediaTimeRange_OperatorMinusAssign(QMediaTimeRange* self, QMediaTimeRange* param1);
QMediaTimeRange* QMediaTimeRange_OperatorMinusAssignWithQMediaTimeInterval(QMediaTimeRange* self, QMediaTimeInterval* param1);
void QMediaTimeRange_Clear(QMediaTimeRange* self);
void QMediaTimeRange_Delete(QMediaTimeRange* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
