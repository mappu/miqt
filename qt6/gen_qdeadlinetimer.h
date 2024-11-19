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

void QDeadlineTimer_new(QDeadlineTimer** outptr_QDeadlineTimer);
void QDeadlineTimer_new2(int param1, QDeadlineTimer** outptr_QDeadlineTimer);
void QDeadlineTimer_new3(long long msecs, QDeadlineTimer** outptr_QDeadlineTimer);
void QDeadlineTimer_new4(QDeadlineTimer* param1, QDeadlineTimer** outptr_QDeadlineTimer);
void QDeadlineTimer_new5(int type_, QDeadlineTimer** outptr_QDeadlineTimer);
void QDeadlineTimer_new6(int param1, int type_, QDeadlineTimer** outptr_QDeadlineTimer);
void QDeadlineTimer_new7(long long msecs, int typeVal, QDeadlineTimer** outptr_QDeadlineTimer);
void QDeadlineTimer_Swap(QDeadlineTimer* self, QDeadlineTimer* other);
bool QDeadlineTimer_IsForever(const QDeadlineTimer* self);
bool QDeadlineTimer_HasExpired(const QDeadlineTimer* self);
int QDeadlineTimer_TimerType(const QDeadlineTimer* self);
void QDeadlineTimer_SetTimerType(QDeadlineTimer* self, int typeVal);
long long QDeadlineTimer_RemainingTime(const QDeadlineTimer* self);
long long QDeadlineTimer_RemainingTimeNSecs(const QDeadlineTimer* self);
void QDeadlineTimer_SetRemainingTime(QDeadlineTimer* self, long long msecs);
void QDeadlineTimer_SetPreciseRemainingTime(QDeadlineTimer* self, long long secs);
long long QDeadlineTimer_Deadline(const QDeadlineTimer* self);
long long QDeadlineTimer_DeadlineNSecs(const QDeadlineTimer* self);
void QDeadlineTimer_SetDeadline(QDeadlineTimer* self, long long msecs);
void QDeadlineTimer_SetPreciseDeadline(QDeadlineTimer* self, long long secs);
QDeadlineTimer* QDeadlineTimer_AddNSecs(QDeadlineTimer* dt, long long nsecs);
QDeadlineTimer* QDeadlineTimer_Current();
QDeadlineTimer* QDeadlineTimer_OperatorPlusAssign(QDeadlineTimer* self, long long msecs);
QDeadlineTimer* QDeadlineTimer_OperatorMinusAssign(QDeadlineTimer* self, long long msecs);
void QDeadlineTimer_OperatorAssign(QDeadlineTimer* self, QDeadlineTimer* param1);
void QDeadlineTimer_SetRemainingTime2(QDeadlineTimer* self, long long msecs, int typeVal);
void QDeadlineTimer_SetPreciseRemainingTime2(QDeadlineTimer* self, long long secs, long long nsecs);
void QDeadlineTimer_SetPreciseRemainingTime3(QDeadlineTimer* self, long long secs, long long nsecs, int typeVal);
void QDeadlineTimer_SetDeadline2(QDeadlineTimer* self, long long msecs, int timerType);
void QDeadlineTimer_SetPreciseDeadline2(QDeadlineTimer* self, long long secs, long long nsecs);
void QDeadlineTimer_SetPreciseDeadline3(QDeadlineTimer* self, long long secs, long long nsecs, int typeVal);
QDeadlineTimer* QDeadlineTimer_Current1(int timerType);
void QDeadlineTimer_Delete(QDeadlineTimer* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
