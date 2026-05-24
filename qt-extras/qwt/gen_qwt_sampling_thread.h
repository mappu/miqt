#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_SAMPLING_THREAD_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_SAMPLING_THREAD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaMethod;
class QMetaObject;
class QObject;
class QThread;
class QwtSamplingThread;
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QwtSamplingThread QwtSamplingThread;
#endif

void QwtSamplingThread_virtbase(QwtSamplingThread* src, QThread** outptr_QThread);
QMetaObject* QwtSamplingThread_metaObject(const QwtSamplingThread* self);
void* QwtSamplingThread_metacast(QwtSamplingThread* self, const char* param1);
struct miqt_string QwtSamplingThread_tr(const char* s);
struct miqt_string QwtSamplingThread_trUtf8(const char* s);
double QwtSamplingThread_interval(const QwtSamplingThread* self);
double QwtSamplingThread_elapsed(const QwtSamplingThread* self);
void QwtSamplingThread_setInterval(QwtSamplingThread* self, double interval);
void QwtSamplingThread_stop(QwtSamplingThread* self);
void QwtSamplingThread_run(QwtSamplingThread* self);
void QwtSamplingThread_sample(QwtSamplingThread* self, double elapsed);
struct miqt_string QwtSamplingThread_tr2(const char* s, const char* c);
struct miqt_string QwtSamplingThread_tr3(const char* s, const char* c, int n);
struct miqt_string QwtSamplingThread_trUtf82(const char* s, const char* c);
struct miqt_string QwtSamplingThread_trUtf83(const char* s, const char* c, int n);

void QwtSamplingThread_delete(QwtSamplingThread* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
