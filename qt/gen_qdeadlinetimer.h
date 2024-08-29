#ifndef GEN_QDEADLINETIMER_H
#define GEN_QDEADLINETIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDeadlineTimer;
#else
typedef struct QDeadlineTimer QDeadlineTimer;
#endif

QDeadlineTimer* QDeadlineTimer_new();
QDeadlineTimer* QDeadlineTimer_new2(uintptr_t param1);
QDeadlineTimer* QDeadlineTimer_new3(long long msecs);
QDeadlineTimer* QDeadlineTimer_new4(QDeadlineTimer* param1);
QDeadlineTimer* QDeadlineTimer_new5(uintptr_t type_);
QDeadlineTimer* QDeadlineTimer_new6(uintptr_t param1, uintptr_t type_);
QDeadlineTimer* QDeadlineTimer_new7(long long msecs, uintptr_t typeVal);
void QDeadlineTimer_Swap(QDeadlineTimer* self, QDeadlineTimer* other);
bool QDeadlineTimer_IsForever(QDeadlineTimer* self);
bool QDeadlineTimer_HasExpired(QDeadlineTimer* self);
uintptr_t QDeadlineTimer_TimerType(QDeadlineTimer* self);
void QDeadlineTimer_SetTimerType(QDeadlineTimer* self, uintptr_t typeVal);
long long QDeadlineTimer_RemainingTime(QDeadlineTimer* self);
long long QDeadlineTimer_RemainingTimeNSecs(QDeadlineTimer* self);
void QDeadlineTimer_SetRemainingTime(QDeadlineTimer* self, long long msecs);
void QDeadlineTimer_SetPreciseRemainingTime(QDeadlineTimer* self, long long secs);
long long QDeadlineTimer_Deadline(QDeadlineTimer* self);
long long QDeadlineTimer_DeadlineNSecs(QDeadlineTimer* self);
void QDeadlineTimer_SetDeadline(QDeadlineTimer* self, long long msecs);
void QDeadlineTimer_SetPreciseDeadline(QDeadlineTimer* self, long long secs);
QDeadlineTimer* QDeadlineTimer_AddNSecs(QDeadlineTimer* dt, long long nsecs);
QDeadlineTimer* QDeadlineTimer_Current();
QDeadlineTimer* QDeadlineTimer_OperatorPlusAssign(QDeadlineTimer* self, long long msecs);
QDeadlineTimer* QDeadlineTimer_OperatorMinusAssign(QDeadlineTimer* self, long long msecs);
void QDeadlineTimer_OperatorAssign(QDeadlineTimer* self, QDeadlineTimer* param1);
void QDeadlineTimer_SetRemainingTime2(QDeadlineTimer* self, long long msecs, uintptr_t typeVal);
void QDeadlineTimer_SetPreciseRemainingTime2(QDeadlineTimer* self, long long secs, long long nsecs);
void QDeadlineTimer_SetPreciseRemainingTime3(QDeadlineTimer* self, long long secs, long long nsecs, uintptr_t typeVal);
void QDeadlineTimer_SetDeadline2(QDeadlineTimer* self, long long msecs, uintptr_t timerType);
void QDeadlineTimer_SetPreciseDeadline2(QDeadlineTimer* self, long long secs, long long nsecs);
void QDeadlineTimer_SetPreciseDeadline3(QDeadlineTimer* self, long long secs, long long nsecs, uintptr_t typeVal);
QDeadlineTimer* QDeadlineTimer_Current1(uintptr_t timerType);
void QDeadlineTimer_Delete(QDeadlineTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
