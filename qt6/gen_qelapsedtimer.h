#pragma once
#ifndef MIQT_QT6_GEN_QELAPSEDTIMER_H
#define MIQT_QT6_GEN_QELAPSEDTIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QElapsedTimer;
#else
typedef struct QElapsedTimer QElapsedTimer;
#endif

QElapsedTimer* QElapsedTimer_new();
int QElapsedTimer_clockType();
bool QElapsedTimer_isMonotonic();
void QElapsedTimer_start(QElapsedTimer* self);
long long QElapsedTimer_restart(QElapsedTimer* self);
void QElapsedTimer_invalidate(QElapsedTimer* self);
bool QElapsedTimer_isValid(const QElapsedTimer* self);
long long QElapsedTimer_nsecsElapsed(const QElapsedTimer* self);
long long QElapsedTimer_elapsed(const QElapsedTimer* self);
bool QElapsedTimer_hasExpired(const QElapsedTimer* self, long long timeout);
long long QElapsedTimer_msecsSinceReference(const QElapsedTimer* self);
long long QElapsedTimer_msecsTo(const QElapsedTimer* self, QElapsedTimer* other);
long long QElapsedTimer_secsTo(const QElapsedTimer* self, QElapsedTimer* other);

void QElapsedTimer_delete(QElapsedTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
