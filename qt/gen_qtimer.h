#ifndef GEN_QTIMER_H
#define GEN_QTIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QTimer;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimer QTimer;
#endif

QTimer* QTimer_new();
QTimer* QTimer_new2(QObject* parent);
QMetaObject* QTimer_MetaObject(const QTimer* self);
void QTimer_Tr(const char* s, char** _out, int* _out_Strlen);
void QTimer_TrUtf8(const char* s, char** _out, int* _out_Strlen);
bool QTimer_IsActive(const QTimer* self);
int QTimer_TimerId(const QTimer* self);
void QTimer_SetInterval(QTimer* self, int msec);
int QTimer_Interval(const QTimer* self);
int QTimer_RemainingTime(const QTimer* self);
void QTimer_SetTimerType(QTimer* self, uintptr_t atype);
uintptr_t QTimer_TimerType(const QTimer* self);
void QTimer_SetSingleShot(QTimer* self, bool singleShot);
bool QTimer_IsSingleShot(const QTimer* self);
void QTimer_Start(QTimer* self, int msec);
void QTimer_Start2(QTimer* self);
void QTimer_Stop(QTimer* self);
void QTimer_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTimer_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTimer_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTimer_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTimer_Delete(QTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
