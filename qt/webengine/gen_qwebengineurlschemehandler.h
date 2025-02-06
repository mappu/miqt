#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINEURLSCHEMEHANDLER_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINEURLSCHEMEHANDLER_H

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
class QWebEngineUrlRequestJob;
class QWebEngineUrlSchemeHandler;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWebEngineUrlRequestJob QWebEngineUrlRequestJob;
typedef struct QWebEngineUrlSchemeHandler QWebEngineUrlSchemeHandler;
#endif

QWebEngineUrlSchemeHandler* QWebEngineUrlSchemeHandler_new();
QWebEngineUrlSchemeHandler* QWebEngineUrlSchemeHandler_new2(QObject* parent);
void QWebEngineUrlSchemeHandler_virtbase(QWebEngineUrlSchemeHandler* src, QObject** outptr_QObject);
QMetaObject* QWebEngineUrlSchemeHandler_metaObject(const QWebEngineUrlSchemeHandler* self);
void* QWebEngineUrlSchemeHandler_metacast(QWebEngineUrlSchemeHandler* self, const char* param1);
struct miqt_string QWebEngineUrlSchemeHandler_tr(const char* s);
struct miqt_string QWebEngineUrlSchemeHandler_trUtf8(const char* s);
void QWebEngineUrlSchemeHandler_requestStarted(QWebEngineUrlSchemeHandler* self, QWebEngineUrlRequestJob* param1);
struct miqt_string QWebEngineUrlSchemeHandler_tr2(const char* s, const char* c);
struct miqt_string QWebEngineUrlSchemeHandler_tr3(const char* s, const char* c, int n);
struct miqt_string QWebEngineUrlSchemeHandler_trUtf82(const char* s, const char* c);
struct miqt_string QWebEngineUrlSchemeHandler_trUtf83(const char* s, const char* c, int n);
bool QWebEngineUrlSchemeHandler_override_virtual_requestStarted(void* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_virtualbase_requestStarted(void* self, QWebEngineUrlRequestJob* param1);
bool QWebEngineUrlSchemeHandler_override_virtual_event(void* self, intptr_t slot);
bool QWebEngineUrlSchemeHandler_virtualbase_event(void* self, QEvent* event);
bool QWebEngineUrlSchemeHandler_override_virtual_eventFilter(void* self, intptr_t slot);
bool QWebEngineUrlSchemeHandler_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QWebEngineUrlSchemeHandler_override_virtual_timerEvent(void* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QWebEngineUrlSchemeHandler_override_virtual_childEvent(void* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_virtualbase_childEvent(void* self, QChildEvent* event);
bool QWebEngineUrlSchemeHandler_override_virtual_customEvent(void* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_virtualbase_customEvent(void* self, QEvent* event);
bool QWebEngineUrlSchemeHandler_override_virtual_connectNotify(void* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QWebEngineUrlSchemeHandler_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QWebEngineUrlSchemeHandler_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QWebEngineUrlSchemeHandler_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QWebEngineUrlSchemeHandler_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QWebEngineUrlSchemeHandler_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QWebEngineUrlSchemeHandler_delete(QWebEngineUrlSchemeHandler* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
