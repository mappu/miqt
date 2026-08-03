#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_SYSTEM_CLOCK_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_SYSTEM_CLOCK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QwtSystemClock;
#else
typedef struct QwtSystemClock QwtSystemClock;
#endif

QwtSystemClock* QwtSystemClock_new();
bool QwtSystemClock_isNull(const QwtSystemClock* self);
void QwtSystemClock_start(QwtSystemClock* self);
double QwtSystemClock_restart(QwtSystemClock* self);
double QwtSystemClock_elapsed(const QwtSystemClock* self);
void QwtSystemClock_operatorAssign(QwtSystemClock* self, QwtSystemClock* param1);

void QwtSystemClock_delete(QwtSystemClock* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
