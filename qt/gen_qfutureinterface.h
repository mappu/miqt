#ifndef GEN_QFUTUREINTERFACE_H
#define GEN_QFUTUREINTERFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFutureInterfaceBase;
class QMutex;
class QRunnable;
class QThreadPool;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ExceptionStore)
typedef QtPrivate::ExceptionStore QtPrivate__ExceptionStore;
#else
class QtPrivate__ExceptionStore;
#endif
#else
typedef struct QFutureInterfaceBase QFutureInterfaceBase;
typedef struct QMutex QMutex;
typedef struct QRunnable QRunnable;
typedef struct QThreadPool QThreadPool;
typedef struct QtPrivate__ExceptionStore QtPrivate__ExceptionStore;
#endif

QFutureInterfaceBase* QFutureInterfaceBase_new();
QFutureInterfaceBase* QFutureInterfaceBase_new2(QFutureInterfaceBase* other);
QFutureInterfaceBase* QFutureInterfaceBase_new3(uintptr_t initialState);
void QFutureInterfaceBase_ReportStarted(QFutureInterfaceBase* self);
void QFutureInterfaceBase_ReportFinished(QFutureInterfaceBase* self);
void QFutureInterfaceBase_ReportCanceled(QFutureInterfaceBase* self);
void QFutureInterfaceBase_ReportResultsReady(QFutureInterfaceBase* self, int beginIndex, int endIndex);
void QFutureInterfaceBase_SetRunnable(QFutureInterfaceBase* self, QRunnable* runnable);
void QFutureInterfaceBase_SetThreadPool(QFutureInterfaceBase* self, QThreadPool* pool);
void QFutureInterfaceBase_SetFilterMode(QFutureInterfaceBase* self, bool enable);
void QFutureInterfaceBase_SetProgressRange(QFutureInterfaceBase* self, int minimum, int maximum);
int QFutureInterfaceBase_ProgressMinimum(const QFutureInterfaceBase* self);
int QFutureInterfaceBase_ProgressMaximum(const QFutureInterfaceBase* self);
bool QFutureInterfaceBase_IsProgressUpdateNeeded(const QFutureInterfaceBase* self);
void QFutureInterfaceBase_SetProgressValue(QFutureInterfaceBase* self, int progressValue);
int QFutureInterfaceBase_ProgressValue(const QFutureInterfaceBase* self);
void QFutureInterfaceBase_SetProgressValueAndText(QFutureInterfaceBase* self, int progressValue, const char* progressText, size_t progressText_Strlen);
void QFutureInterfaceBase_ProgressText(const QFutureInterfaceBase* self, char** _out, int* _out_Strlen);
void QFutureInterfaceBase_SetExpectedResultCount(QFutureInterfaceBase* self, int resultCount);
int QFutureInterfaceBase_ExpectedResultCount(QFutureInterfaceBase* self);
int QFutureInterfaceBase_ResultCount(const QFutureInterfaceBase* self);
bool QFutureInterfaceBase_QueryState(const QFutureInterfaceBase* self, uintptr_t state);
bool QFutureInterfaceBase_IsRunning(const QFutureInterfaceBase* self);
bool QFutureInterfaceBase_IsStarted(const QFutureInterfaceBase* self);
bool QFutureInterfaceBase_IsCanceled(const QFutureInterfaceBase* self);
bool QFutureInterfaceBase_IsFinished(const QFutureInterfaceBase* self);
bool QFutureInterfaceBase_IsPaused(const QFutureInterfaceBase* self);
bool QFutureInterfaceBase_IsThrottled(const QFutureInterfaceBase* self);
bool QFutureInterfaceBase_IsResultReadyAt(const QFutureInterfaceBase* self, int index);
void QFutureInterfaceBase_Cancel(QFutureInterfaceBase* self);
void QFutureInterfaceBase_SetPaused(QFutureInterfaceBase* self, bool paused);
void QFutureInterfaceBase_TogglePaused(QFutureInterfaceBase* self);
void QFutureInterfaceBase_SetThrottled(QFutureInterfaceBase* self, bool enable);
void QFutureInterfaceBase_WaitForFinished(QFutureInterfaceBase* self);
bool QFutureInterfaceBase_WaitForNextResult(QFutureInterfaceBase* self);
void QFutureInterfaceBase_WaitForResult(QFutureInterfaceBase* self, int resultIndex);
void QFutureInterfaceBase_WaitForResume(QFutureInterfaceBase* self);
QMutex* QFutureInterfaceBase_Mutex(const QFutureInterfaceBase* self);
QMutex* QFutureInterfaceBase_MutexWithInt(const QFutureInterfaceBase* self, int param1);
QtPrivate__ExceptionStore* QFutureInterfaceBase_ExceptionStore(QFutureInterfaceBase* self);
bool QFutureInterfaceBase_OperatorEqual(const QFutureInterfaceBase* self, QFutureInterfaceBase* other);
bool QFutureInterfaceBase_OperatorNotEqual(const QFutureInterfaceBase* self, QFutureInterfaceBase* other);
void QFutureInterfaceBase_OperatorAssign(QFutureInterfaceBase* self, QFutureInterfaceBase* other);
void QFutureInterfaceBase_Delete(QFutureInterfaceBase* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
