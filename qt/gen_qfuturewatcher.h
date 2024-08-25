#ifndef GEN_QFUTUREWATCHER_H
#define GEN_QFUTUREWATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEvent;
class QFutureWatcherBase;
class QMetaObject;
#else
typedef struct QEvent QEvent;
typedef struct QFutureWatcherBase QFutureWatcherBase;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QFutureWatcherBase_MetaObject(QFutureWatcherBase* self);
void QFutureWatcherBase_Tr(char* s, char** _out, int* _out_Strlen);
void QFutureWatcherBase_TrUtf8(char* s, char** _out, int* _out_Strlen);
int QFutureWatcherBase_ProgressValue(QFutureWatcherBase* self);
int QFutureWatcherBase_ProgressMinimum(QFutureWatcherBase* self);
int QFutureWatcherBase_ProgressMaximum(QFutureWatcherBase* self);
void QFutureWatcherBase_ProgressText(QFutureWatcherBase* self, char** _out, int* _out_Strlen);
bool QFutureWatcherBase_IsStarted(QFutureWatcherBase* self);
bool QFutureWatcherBase_IsFinished(QFutureWatcherBase* self);
bool QFutureWatcherBase_IsRunning(QFutureWatcherBase* self);
bool QFutureWatcherBase_IsCanceled(QFutureWatcherBase* self);
bool QFutureWatcherBase_IsPaused(QFutureWatcherBase* self);
void QFutureWatcherBase_WaitForFinished(QFutureWatcherBase* self);
void QFutureWatcherBase_SetPendingResultsLimit(QFutureWatcherBase* self, int limit);
bool QFutureWatcherBase_Event(QFutureWatcherBase* self, QEvent* event);
void QFutureWatcherBase_Started(QFutureWatcherBase* self);
void QFutureWatcherBase_connect_Started(QFutureWatcherBase* self, void* slot);
void QFutureWatcherBase_Finished(QFutureWatcherBase* self);
void QFutureWatcherBase_connect_Finished(QFutureWatcherBase* self, void* slot);
void QFutureWatcherBase_Canceled(QFutureWatcherBase* self);
void QFutureWatcherBase_connect_Canceled(QFutureWatcherBase* self, void* slot);
void QFutureWatcherBase_Paused(QFutureWatcherBase* self);
void QFutureWatcherBase_connect_Paused(QFutureWatcherBase* self, void* slot);
void QFutureWatcherBase_Resumed(QFutureWatcherBase* self);
void QFutureWatcherBase_connect_Resumed(QFutureWatcherBase* self, void* slot);
void QFutureWatcherBase_ResultReadyAt(QFutureWatcherBase* self, int resultIndex);
void QFutureWatcherBase_connect_ResultReadyAt(QFutureWatcherBase* self, void* slot);
void QFutureWatcherBase_ResultsReadyAt(QFutureWatcherBase* self, int beginIndex, int endIndex);
void QFutureWatcherBase_connect_ResultsReadyAt(QFutureWatcherBase* self, void* slot);
void QFutureWatcherBase_ProgressRangeChanged(QFutureWatcherBase* self, int minimum, int maximum);
void QFutureWatcherBase_connect_ProgressRangeChanged(QFutureWatcherBase* self, void* slot);
void QFutureWatcherBase_ProgressValueChanged(QFutureWatcherBase* self, int progressValue);
void QFutureWatcherBase_connect_ProgressValueChanged(QFutureWatcherBase* self, void* slot);
void QFutureWatcherBase_ProgressTextChanged(QFutureWatcherBase* self, const char* progressText, size_t progressText_Strlen);
void QFutureWatcherBase_connect_ProgressTextChanged(QFutureWatcherBase* self, void* slot);
void QFutureWatcherBase_Cancel(QFutureWatcherBase* self);
void QFutureWatcherBase_SetPaused(QFutureWatcherBase* self, bool paused);
void QFutureWatcherBase_Pause(QFutureWatcherBase* self);
void QFutureWatcherBase_Resume(QFutureWatcherBase* self);
void QFutureWatcherBase_TogglePaused(QFutureWatcherBase* self);
void QFutureWatcherBase_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QFutureWatcherBase_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QFutureWatcherBase_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QFutureWatcherBase_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QFutureWatcherBase_Delete(QFutureWatcherBase* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
