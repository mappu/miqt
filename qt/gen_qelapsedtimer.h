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
bool QElapsedTimer_IsMonotonic();
void QElapsedTimer_Start(QElapsedTimer* self);
int64_t QElapsedTimer_Restart(QElapsedTimer* self);
void QElapsedTimer_Invalidate(QElapsedTimer* self);
bool QElapsedTimer_IsValid(QElapsedTimer* self);
int64_t QElapsedTimer_NsecsElapsed(QElapsedTimer* self);
int64_t QElapsedTimer_Elapsed(QElapsedTimer* self);
bool QElapsedTimer_HasExpired(QElapsedTimer* self, int64_t timeout);
int64_t QElapsedTimer_MsecsSinceReference(QElapsedTimer* self);
int64_t QElapsedTimer_MsecsTo(QElapsedTimer* self, QElapsedTimer* other);
int64_t QElapsedTimer_SecsTo(QElapsedTimer* self, QElapsedTimer* other);
bool QElapsedTimer_OperatorEqual(QElapsedTimer* self, QElapsedTimer* other);
bool QElapsedTimer_OperatorNotEqual(QElapsedTimer* self, QElapsedTimer* other);
void QElapsedTimer_Delete(QElapsedTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
