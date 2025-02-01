#pragma once
#ifndef MIQT_QT6_GEN_QDEADLINETIMER_H
#define MIQT_QT6_GEN_QDEADLINETIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDeadlineTimer;
#else
typedef struct QDeadlineTimer QDeadlineTimer;
#endif

QDeadlineTimer* QDeadlineTimer_new();
QDeadlineTimer* QDeadlineTimer_new2(int param1);
QDeadlineTimer* QDeadlineTimer_new3(long long msecs);
QDeadlineTimer* QDeadlineTimer_new4(QDeadlineTimer* param1);
QDeadlineTimer* QDeadlineTimer_new5(int type_);
QDeadlineTimer* QDeadlineTimer_new6(int param1, int type_);
QDeadlineTimer* QDeadlineTimer_new7(long long msecs, int type);
void QDeadlineTimer_swap(QDeadlineTimer* self, QDeadlineTimer* other);
bool QDeadlineTimer_isForever(const QDeadlineTimer* self);
bool QDeadlineTimer_hasExpired(const QDeadlineTimer* self);
int QDeadlineTimer_timerType(const QDeadlineTimer* self);
void QDeadlineTimer_setTimerType(QDeadlineTimer* self, int type);
long long QDeadlineTimer_remainingTime(const QDeadlineTimer* self);
long long QDeadlineTimer_remainingTimeNSecs(const QDeadlineTimer* self);
void QDeadlineTimer_setRemainingTime(QDeadlineTimer* self, long long msecs);
void QDeadlineTimer_setPreciseRemainingTime(QDeadlineTimer* self, long long secs);
long long QDeadlineTimer_deadline(const QDeadlineTimer* self);
long long QDeadlineTimer_deadlineNSecs(const QDeadlineTimer* self);
void QDeadlineTimer_setDeadline(QDeadlineTimer* self, long long msecs);
void QDeadlineTimer_setPreciseDeadline(QDeadlineTimer* self, long long secs);
QDeadlineTimer* QDeadlineTimer_addNSecs(QDeadlineTimer* dt, long long nsecs);
QDeadlineTimer* QDeadlineTimer_current();
QDeadlineTimer* QDeadlineTimer_operatorPlusAssign(QDeadlineTimer* self, long long msecs);
QDeadlineTimer* QDeadlineTimer_operatorMinusAssign(QDeadlineTimer* self, long long msecs);
void QDeadlineTimer_operatorAssign(QDeadlineTimer* self, QDeadlineTimer* param1);
void QDeadlineTimer_setRemainingTime2(QDeadlineTimer* self, long long msecs, int type);
void QDeadlineTimer_setPreciseRemainingTime2(QDeadlineTimer* self, long long secs, long long nsecs);
void QDeadlineTimer_setPreciseRemainingTime3(QDeadlineTimer* self, long long secs, long long nsecs, int type);
void QDeadlineTimer_setDeadline2(QDeadlineTimer* self, long long msecs, int timerType);
void QDeadlineTimer_setPreciseDeadline2(QDeadlineTimer* self, long long secs, long long nsecs);
void QDeadlineTimer_setPreciseDeadline3(QDeadlineTimer* self, long long secs, long long nsecs, int type);
QDeadlineTimer* QDeadlineTimer_current1(int timerType);
void QDeadlineTimer_delete(QDeadlineTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
