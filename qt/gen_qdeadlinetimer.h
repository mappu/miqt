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

QDeadlineTimer* QDeadlineTimer_new(QDeadlineTimer* param1);
void QDeadlineTimer_Swap(QDeadlineTimer* self, QDeadlineTimer* other);
bool QDeadlineTimer_IsForever(QDeadlineTimer* self);
bool QDeadlineTimer_HasExpired(QDeadlineTimer* self);
int64_t QDeadlineTimer_RemainingTime(QDeadlineTimer* self);
int64_t QDeadlineTimer_RemainingTimeNSecs(QDeadlineTimer* self);
int64_t QDeadlineTimer_Deadline(QDeadlineTimer* self);
int64_t QDeadlineTimer_DeadlineNSecs(QDeadlineTimer* self);
QDeadlineTimer* QDeadlineTimer_AddNSecs(QDeadlineTimer* dt, int64_t nsecs);
QDeadlineTimer* QDeadlineTimer_OperatorPlusAssign(QDeadlineTimer* self, int64_t msecs);
QDeadlineTimer* QDeadlineTimer_OperatorMinusAssign(QDeadlineTimer* self, int64_t msecs);
void QDeadlineTimer_OperatorAssign(QDeadlineTimer* self, QDeadlineTimer* param1);
void QDeadlineTimer_Delete(QDeadlineTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
