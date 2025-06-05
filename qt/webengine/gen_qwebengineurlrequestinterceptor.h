#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINEURLREQUESTINTERCEPTOR_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINEURLREQUESTINTERCEPTOR_H

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
class QTimerEvent;
class QWebEngineUrlRequestInfo;
class QWebEngineUrlRequestInterceptor;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWebEngineUrlRequestInfo QWebEngineUrlRequestInfo;
typedef struct QWebEngineUrlRequestInterceptor QWebEngineUrlRequestInterceptor;
#endif

QWebEngineUrlRequestInterceptor* QWebEngineUrlRequestInterceptor_new();
QWebEngineUrlRequestInterceptor* QWebEngineUrlRequestInterceptor_new2(QObject* p);
void QWebEngineUrlRequestInterceptor_virtbase(QWebEngineUrlRequestInterceptor* src, QObject** outptr_QObject);
QMetaObject* QWebEngineUrlRequestInterceptor_metaObject(const QWebEngineUrlRequestInterceptor* self);
void* QWebEngineUrlRequestInterceptor_metacast(QWebEngineUrlRequestInterceptor* self, const char* param1);
struct miqt_string QWebEngineUrlRequestInterceptor_tr(const char* s);
struct miqt_string QWebEngineUrlRequestInterceptor_trUtf8(const char* s);
void QWebEngineUrlRequestInterceptor_interceptRequest(QWebEngineUrlRequestInterceptor* self, QWebEngineUrlRequestInfo* info);
struct miqt_string QWebEngineUrlRequestInterceptor_tr2(const char* s, const char* c);
struct miqt_string QWebEngineUrlRequestInterceptor_tr3(const char* s, const char* c, int n);
struct miqt_string QWebEngineUrlRequestInterceptor_trUtf82(const char* s, const char* c);
struct miqt_string QWebEngineUrlRequestInterceptor_trUtf83(const char* s, const char* c, int n);

bool QWebEngineUrlRequestInterceptor_override_virtual_interceptRequest(void* self, intptr_t slot);
void QWebEngineUrlRequestInterceptor_virtualbase_interceptRequest(void* self, QWebEngineUrlRequestInfo* info);
bool QWebEngineUrlRequestInterceptor_override_virtual_event(void* self, intptr_t slot);
bool QWebEngineUrlRequestInterceptor_virtualbase_event(void* self, QEvent* event);
bool QWebEngineUrlRequestInterceptor_override_virtual_eventFilter(void* self, intptr_t slot);
bool QWebEngineUrlRequestInterceptor_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QWebEngineUrlRequestInterceptor_override_virtual_timerEvent(void* self, intptr_t slot);
void QWebEngineUrlRequestInterceptor_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QWebEngineUrlRequestInterceptor_override_virtual_childEvent(void* self, intptr_t slot);
void QWebEngineUrlRequestInterceptor_virtualbase_childEvent(void* self, QChildEvent* event);
bool QWebEngineUrlRequestInterceptor_override_virtual_customEvent(void* self, intptr_t slot);
void QWebEngineUrlRequestInterceptor_virtualbase_customEvent(void* self, QEvent* event);
bool QWebEngineUrlRequestInterceptor_override_virtual_connectNotify(void* self, intptr_t slot);
void QWebEngineUrlRequestInterceptor_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QWebEngineUrlRequestInterceptor_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QWebEngineUrlRequestInterceptor_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QWebEngineUrlRequestInterceptor_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QWebEngineUrlRequestInterceptor_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QWebEngineUrlRequestInterceptor_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QWebEngineUrlRequestInterceptor_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QWebEngineUrlRequestInterceptor_delete(QWebEngineUrlRequestInterceptor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
