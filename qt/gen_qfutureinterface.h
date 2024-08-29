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
int QFutureInterfaceBase_ProgressMinimum(QFutureInterfaceBase* self);
int QFutureInterfaceBase_ProgressMaximum(QFutureInterfaceBase* self);
bool QFutureInterfaceBase_IsProgressUpdateNeeded(QFutureInterfaceBase* self);
void QFutureInterfaceBase_SetProgressValue(QFutureInterfaceBase* self, int progressValue);
int QFutureInterfaceBase_ProgressValue(QFutureInterfaceBase* self);
void QFutureInterfaceBase_SetProgressValueAndText(QFutureInterfaceBase* self, int progressValue, const char* progressText, size_t progressText_Strlen);
void QFutureInterfaceBase_ProgressText(QFutureInterfaceBase* self, char** _out, int* _out_Strlen);
void QFutureInterfaceBase_SetExpectedResultCount(QFutureInterfaceBase* self, int resultCount);
int QFutureInterfaceBase_ExpectedResultCount(QFutureInterfaceBase* self);
int QFutureInterfaceBase_ResultCount(QFutureInterfaceBase* self);
bool QFutureInterfaceBase_QueryState(QFutureInterfaceBase* self, uintptr_t state);
bool QFutureInterfaceBase_IsRunning(QFutureInterfaceBase* self);
bool QFutureInterfaceBase_IsStarted(QFutureInterfaceBase* self);
bool QFutureInterfaceBase_IsCanceled(QFutureInterfaceBase* self);
bool QFutureInterfaceBase_IsFinished(QFutureInterfaceBase* self);
bool QFutureInterfaceBase_IsPaused(QFutureInterfaceBase* self);
bool QFutureInterfaceBase_IsThrottled(QFutureInterfaceBase* self);
bool QFutureInterfaceBase_IsResultReadyAt(QFutureInterfaceBase* self, int index);
void QFutureInterfaceBase_Cancel(QFutureInterfaceBase* self);
void QFutureInterfaceBase_SetPaused(QFutureInterfaceBase* self, bool paused);
void QFutureInterfaceBase_TogglePaused(QFutureInterfaceBase* self);
void QFutureInterfaceBase_SetThrottled(QFutureInterfaceBase* self, bool enable);
void QFutureInterfaceBase_WaitForFinished(QFutureInterfaceBase* self);
bool QFutureInterfaceBase_WaitForNextResult(QFutureInterfaceBase* self);
void QFutureInterfaceBase_WaitForResult(QFutureInterfaceBase* self, int resultIndex);
void QFutureInterfaceBase_WaitForResume(QFutureInterfaceBase* self);
QMutex* QFutureInterfaceBase_Mutex(QFutureInterfaceBase* self);
QMutex* QFutureInterfaceBase_MutexWithInt(QFutureInterfaceBase* self, int param1);
QtPrivate__ExceptionStore* QFutureInterfaceBase_ExceptionStore(QFutureInterfaceBase* self);
bool QFutureInterfaceBase_OperatorEqual(QFutureInterfaceBase* self, QFutureInterfaceBase* other);
bool QFutureInterfaceBase_OperatorNotEqual(QFutureInterfaceBase* self, QFutureInterfaceBase* other);
void QFutureInterfaceBase_OperatorAssign(QFutureInterfaceBase* self, QFutureInterfaceBase* other);
void QFutureInterfaceBase_Delete(QFutureInterfaceBase* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
