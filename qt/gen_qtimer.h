#ifndef GEN_QTIMER_H
#define GEN_QTIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
void* QTimer_Metacast(QTimer* self, const char* param1);
struct miqt_string QTimer_Tr(const char* s);
struct miqt_string QTimer_TrUtf8(const char* s);
bool QTimer_IsActive(const QTimer* self);
int QTimer_TimerId(const QTimer* self);
void QTimer_SetInterval(QTimer* self, int msec);
int QTimer_Interval(const QTimer* self);
int QTimer_RemainingTime(const QTimer* self);
void QTimer_SetTimerType(QTimer* self, int atype);
int QTimer_TimerType(const QTimer* self);
void QTimer_SetSingleShot(QTimer* self, bool singleShot);
bool QTimer_IsSingleShot(const QTimer* self);
void QTimer_Start(QTimer* self, int msec);
void QTimer_Start2(QTimer* self);
void QTimer_Stop(QTimer* self);
struct miqt_string QTimer_Tr2(const char* s, const char* c);
struct miqt_string QTimer_Tr3(const char* s, const char* c, int n);
struct miqt_string QTimer_TrUtf82(const char* s, const char* c);
struct miqt_string QTimer_TrUtf83(const char* s, const char* c, int n);
void QTimer_Delete(QTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
