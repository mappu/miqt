#ifndef GEN_QELAPSEDTIMER_H
#define GEN_QELAPSEDTIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QElapsedTimer;
#else
typedef struct QElapsedTimer QElapsedTimer;
#endif

QElapsedTimer* QElapsedTimer_new();
uintptr_t QElapsedTimer_ClockType();
bool QElapsedTimer_IsMonotonic();
void QElapsedTimer_Start(QElapsedTimer* self);
long long QElapsedTimer_Restart(QElapsedTimer* self);
void QElapsedTimer_Invalidate(QElapsedTimer* self);
bool QElapsedTimer_IsValid(const QElapsedTimer* self);
long long QElapsedTimer_NsecsElapsed(const QElapsedTimer* self);
long long QElapsedTimer_Elapsed(const QElapsedTimer* self);
bool QElapsedTimer_HasExpired(const QElapsedTimer* self, long long timeout);
long long QElapsedTimer_MsecsSinceReference(const QElapsedTimer* self);
long long QElapsedTimer_MsecsTo(const QElapsedTimer* self, QElapsedTimer* other);
long long QElapsedTimer_SecsTo(const QElapsedTimer* self, QElapsedTimer* other);
bool QElapsedTimer_OperatorEqual(const QElapsedTimer* self, QElapsedTimer* other);
bool QElapsedTimer_OperatorNotEqual(const QElapsedTimer* self, QElapsedTimer* other);
void QElapsedTimer_Delete(QElapsedTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
