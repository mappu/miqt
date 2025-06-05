#pragma once
#ifndef MIQT_QT_GEN_QFUTUREINTERFACE_H
#define MIQT_QT_GEN_QFUTUREINTERFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFutureInterfaceBase;
class QMutex;
class QRunnable;
class QThreadPool;
#else
typedef struct QFutureInterfaceBase QFutureInterfaceBase;
typedef struct QMutex QMutex;
typedef struct QRunnable QRunnable;
typedef struct QThreadPool QThreadPool;
#endif

QFutureInterfaceBase* QFutureInterfaceBase_new();
QFutureInterfaceBase* QFutureInterfaceBase_new2(QFutureInterfaceBase* other);
QFutureInterfaceBase* QFutureInterfaceBase_new3(int initialState);
void QFutureInterfaceBase_reportStarted(QFutureInterfaceBase* self);
void QFutureInterfaceBase_reportFinished(QFutureInterfaceBase* self);
void QFutureInterfaceBase_reportCanceled(QFutureInterfaceBase* self);
void QFutureInterfaceBase_reportResultsReady(QFutureInterfaceBase* self, int beginIndex, int endIndex);
void QFutureInterfaceBase_setRunnable(QFutureInterfaceBase* self, QRunnable* runnable);
void QFutureInterfaceBase_setThreadPool(QFutureInterfaceBase* self, QThreadPool* pool);
void QFutureInterfaceBase_setFilterMode(QFutureInterfaceBase* self, bool enable);
void QFutureInterfaceBase_setProgressRange(QFutureInterfaceBase* self, int minimum, int maximum);
int QFutureInterfaceBase_progressMinimum(const QFutureInterfaceBase* self);
int QFutureInterfaceBase_progressMaximum(const QFutureInterfaceBase* self);
bool QFutureInterfaceBase_isProgressUpdateNeeded(const QFutureInterfaceBase* self);
void QFutureInterfaceBase_setProgressValue(QFutureInterfaceBase* self, int progressValue);
int QFutureInterfaceBase_progressValue(const QFutureInterfaceBase* self);
void QFutureInterfaceBase_setProgressValueAndText(QFutureInterfaceBase* self, int progressValue, struct miqt_string progressText);
struct miqt_string QFutureInterfaceBase_progressText(const QFutureInterfaceBase* self);
void QFutureInterfaceBase_setExpectedResultCount(QFutureInterfaceBase* self, int resultCount);
int QFutureInterfaceBase_expectedResultCount(QFutureInterfaceBase* self);
int QFutureInterfaceBase_resultCount(const QFutureInterfaceBase* self);
bool QFutureInterfaceBase_queryState(const QFutureInterfaceBase* self, int state);
bool QFutureInterfaceBase_isRunning(const QFutureInterfaceBase* self);
bool QFutureInterfaceBase_isStarted(const QFutureInterfaceBase* self);
bool QFutureInterfaceBase_isCanceled(const QFutureInterfaceBase* self);
bool QFutureInterfaceBase_isFinished(const QFutureInterfaceBase* self);
bool QFutureInterfaceBase_isPaused(const QFutureInterfaceBase* self);
bool QFutureInterfaceBase_isThrottled(const QFutureInterfaceBase* self);
bool QFutureInterfaceBase_isResultReadyAt(const QFutureInterfaceBase* self, int index);
void QFutureInterfaceBase_cancel(QFutureInterfaceBase* self);
void QFutureInterfaceBase_setPaused(QFutureInterfaceBase* self, bool paused);
void QFutureInterfaceBase_togglePaused(QFutureInterfaceBase* self);
void QFutureInterfaceBase_setThrottled(QFutureInterfaceBase* self, bool enable);
void QFutureInterfaceBase_waitForFinished(QFutureInterfaceBase* self);
bool QFutureInterfaceBase_waitForNextResult(QFutureInterfaceBase* self);
void QFutureInterfaceBase_waitForResult(QFutureInterfaceBase* self, int resultIndex);
void QFutureInterfaceBase_waitForResume(QFutureInterfaceBase* self);
QMutex* QFutureInterfaceBase_mutex(const QFutureInterfaceBase* self);
QMutex* QFutureInterfaceBase_mutexWithInt(const QFutureInterfaceBase* self, int param1);
bool QFutureInterfaceBase_operatorEqual(const QFutureInterfaceBase* self, QFutureInterfaceBase* other);
bool QFutureInterfaceBase_operatorNotEqual(const QFutureInterfaceBase* self, QFutureInterfaceBase* other);
void QFutureInterfaceBase_operatorAssign(QFutureInterfaceBase* self, QFutureInterfaceBase* other);

void QFutureInterfaceBase_delete(QFutureInterfaceBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
