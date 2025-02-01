#pragma once
#ifndef MIQT_QT6_GEN_QFUTUREWATCHER_H
#define MIQT_QT6_GEN_QFUTUREWATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEvent;
class QFutureWatcherBase;
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QEvent QEvent;
typedef struct QFutureWatcherBase QFutureWatcherBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QFutureWatcherBase_virtbase(QFutureWatcherBase* src, QObject** outptr_QObject);
QMetaObject* QFutureWatcherBase_metaObject(const QFutureWatcherBase* self);
void* QFutureWatcherBase_metacast(QFutureWatcherBase* self, const char* param1);
struct miqt_string QFutureWatcherBase_tr(const char* s);
int QFutureWatcherBase_progressValue(const QFutureWatcherBase* self);
int QFutureWatcherBase_progressMinimum(const QFutureWatcherBase* self);
int QFutureWatcherBase_progressMaximum(const QFutureWatcherBase* self);
struct miqt_string QFutureWatcherBase_progressText(const QFutureWatcherBase* self);
bool QFutureWatcherBase_isStarted(const QFutureWatcherBase* self);
bool QFutureWatcherBase_isFinished(const QFutureWatcherBase* self);
bool QFutureWatcherBase_isRunning(const QFutureWatcherBase* self);
bool QFutureWatcherBase_isCanceled(const QFutureWatcherBase* self);
bool QFutureWatcherBase_isPaused(const QFutureWatcherBase* self);
bool QFutureWatcherBase_isSuspending(const QFutureWatcherBase* self);
bool QFutureWatcherBase_isSuspended(const QFutureWatcherBase* self);
void QFutureWatcherBase_waitForFinished(QFutureWatcherBase* self);
void QFutureWatcherBase_setPendingResultsLimit(QFutureWatcherBase* self, int limit);
bool QFutureWatcherBase_event(QFutureWatcherBase* self, QEvent* event);
void QFutureWatcherBase_started(QFutureWatcherBase* self);
void QFutureWatcherBase_connect_started(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_finished(QFutureWatcherBase* self);
void QFutureWatcherBase_connect_finished(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_canceled(QFutureWatcherBase* self);
void QFutureWatcherBase_connect_canceled(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_paused(QFutureWatcherBase* self);
void QFutureWatcherBase_connect_paused(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_suspending(QFutureWatcherBase* self);
void QFutureWatcherBase_connect_suspending(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_suspended(QFutureWatcherBase* self);
void QFutureWatcherBase_connect_suspended(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_resumed(QFutureWatcherBase* self);
void QFutureWatcherBase_connect_resumed(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_resultReadyAt(QFutureWatcherBase* self, int resultIndex);
void QFutureWatcherBase_connect_resultReadyAt(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_resultsReadyAt(QFutureWatcherBase* self, int beginIndex, int endIndex);
void QFutureWatcherBase_connect_resultsReadyAt(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_progressRangeChanged(QFutureWatcherBase* self, int minimum, int maximum);
void QFutureWatcherBase_connect_progressRangeChanged(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_progressValueChanged(QFutureWatcherBase* self, int progressValue);
void QFutureWatcherBase_connect_progressValueChanged(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_progressTextChanged(QFutureWatcherBase* self, struct miqt_string progressText);
void QFutureWatcherBase_connect_progressTextChanged(QFutureWatcherBase* self, intptr_t slot);
void QFutureWatcherBase_cancel(QFutureWatcherBase* self);
void QFutureWatcherBase_setSuspended(QFutureWatcherBase* self, bool suspend);
void QFutureWatcherBase_suspend(QFutureWatcherBase* self);
void QFutureWatcherBase_resume(QFutureWatcherBase* self);
void QFutureWatcherBase_toggleSuspended(QFutureWatcherBase* self);
void QFutureWatcherBase_setPaused(QFutureWatcherBase* self, bool paused);
void QFutureWatcherBase_pause(QFutureWatcherBase* self);
void QFutureWatcherBase_togglePaused(QFutureWatcherBase* self);
void QFutureWatcherBase_connectNotify(QFutureWatcherBase* self, QMetaMethod* signal);
void QFutureWatcherBase_disconnectNotify(QFutureWatcherBase* self, QMetaMethod* signal);
struct miqt_string QFutureWatcherBase_tr2(const char* s, const char* c);
struct miqt_string QFutureWatcherBase_tr3(const char* s, const char* c, int n);
void QFutureWatcherBase_delete(QFutureWatcherBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
