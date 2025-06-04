#pragma once
#ifndef MIQT_QT6_GEN_QBASICTIMER_H
#define MIQT_QT6_GEN_QBASICTIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBasicTimer;
class QObject;
#else
typedef struct QBasicTimer QBasicTimer;
typedef struct QObject QObject;
#endif

QBasicTimer* QBasicTimer_new();
void QBasicTimer_swap(QBasicTimer* self, QBasicTimer* other);
bool QBasicTimer_isActive(const QBasicTimer* self);
int QBasicTimer_timerId(const QBasicTimer* self);
void QBasicTimer_start(QBasicTimer* self, int msec, QObject* obj);
void QBasicTimer_start2(QBasicTimer* self, int msec, int timerType, QObject* obj);
void QBasicTimer_stop(QBasicTimer* self);

void QBasicTimer_delete(QBasicTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
