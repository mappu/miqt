#pragma once
#ifndef MIQT_QT6_GEN_QICONENGINEPLUGIN_H
#define MIQT_QT6_GEN_QICONENGINEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QIconEngine;
class QIconEnginePlugin;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIconEngine QIconEngine;
typedef struct QIconEnginePlugin QIconEnginePlugin;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QIconEnginePlugin* QIconEnginePlugin_new();
QIconEnginePlugin* QIconEnginePlugin_new2(QObject* parent);
void QIconEnginePlugin_virtbase(QIconEnginePlugin* src, QObject** outptr_QObject);
QMetaObject* QIconEnginePlugin_metaObject(const QIconEnginePlugin* self);
void* QIconEnginePlugin_metacast(QIconEnginePlugin* self, const char* param1);
struct miqt_string QIconEnginePlugin_tr(const char* s);
QIconEngine* QIconEnginePlugin_create(QIconEnginePlugin* self, struct miqt_string filename);
struct miqt_string QIconEnginePlugin_tr2(const char* s, const char* c);
struct miqt_string QIconEnginePlugin_tr3(const char* s, const char* c, int n);

bool QIconEnginePlugin_override_virtual_create(void* self, intptr_t slot);
QIconEngine* QIconEnginePlugin_virtualbase_create(void* self, struct miqt_string filename);
bool QIconEnginePlugin_override_virtual_event(void* self, intptr_t slot);
bool QIconEnginePlugin_virtualbase_event(void* self, QEvent* event);
bool QIconEnginePlugin_override_virtual_eventFilter(void* self, intptr_t slot);
bool QIconEnginePlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QIconEnginePlugin_override_virtual_timerEvent(void* self, intptr_t slot);
void QIconEnginePlugin_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QIconEnginePlugin_override_virtual_childEvent(void* self, intptr_t slot);
void QIconEnginePlugin_virtualbase_childEvent(void* self, QChildEvent* event);
bool QIconEnginePlugin_override_virtual_customEvent(void* self, intptr_t slot);
void QIconEnginePlugin_virtualbase_customEvent(void* self, QEvent* event);
bool QIconEnginePlugin_override_virtual_connectNotify(void* self, intptr_t slot);
void QIconEnginePlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QIconEnginePlugin_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QIconEnginePlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QIconEnginePlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QIconEnginePlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QIconEnginePlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QIconEnginePlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QIconEnginePlugin_delete(QIconEnginePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
