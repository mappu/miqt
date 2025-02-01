#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QSOUND_H
#define MIQT_QT_MULTIMEDIA_GEN_QSOUND_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSound;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSound QSound;
typedef struct QTimerEvent QTimerEvent;
#endif

QSound* QSound_new(struct miqt_string filename);
QSound* QSound_new2(struct miqt_string filename, QObject* parent);
void QSound_virtbase(QSound* src, QObject** outptr_QObject);
QMetaObject* QSound_metaObject(const QSound* self);
void* QSound_metacast(QSound* self, const char* param1);
struct miqt_string QSound_tr(const char* s);
struct miqt_string QSound_trUtf8(const char* s);
void QSound_play(struct miqt_string filename);
int QSound_loops(const QSound* self);
int QSound_loopsRemaining(const QSound* self);
void QSound_setLoops(QSound* self, int loops);
struct miqt_string QSound_fileName(const QSound* self);
bool QSound_isFinished(const QSound* self);
void QSound_play2(QSound* self);
void QSound_stop(QSound* self);
struct miqt_string QSound_tr2(const char* s, const char* c);
struct miqt_string QSound_tr3(const char* s, const char* c, int n);
struct miqt_string QSound_trUtf82(const char* s, const char* c);
struct miqt_string QSound_trUtf83(const char* s, const char* c, int n);
bool QSound_override_virtual_event(void* self, intptr_t slot);
bool QSound_virtualbase_event(void* self, QEvent* event);
bool QSound_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSound_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSound_override_virtual_timerEvent(void* self, intptr_t slot);
void QSound_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSound_override_virtual_childEvent(void* self, intptr_t slot);
void QSound_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSound_override_virtual_customEvent(void* self, intptr_t slot);
void QSound_virtualbase_customEvent(void* self, QEvent* event);
bool QSound_override_virtual_connectNotify(void* self, intptr_t slot);
void QSound_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSound_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSound_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QSound_delete(QSound* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
