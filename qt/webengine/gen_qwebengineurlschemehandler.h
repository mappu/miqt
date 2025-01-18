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
QMetaObject* QWebEngineUrlSchemeHandler_MetaObject(const QWebEngineUrlSchemeHandler* self);
void* QWebEngineUrlSchemeHandler_Metacast(QWebEngineUrlSchemeHandler* self, const char* param1);
struct miqt_string QWebEngineUrlSchemeHandler_Tr(const char* s);
struct miqt_string QWebEngineUrlSchemeHandler_TrUtf8(const char* s);
void QWebEngineUrlSchemeHandler_RequestStarted(QWebEngineUrlSchemeHandler* self, QWebEngineUrlRequestJob* param1);
struct miqt_string QWebEngineUrlSchemeHandler_Tr2(const char* s, const char* c);
struct miqt_string QWebEngineUrlSchemeHandler_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebEngineUrlSchemeHandler_TrUtf82(const char* s, const char* c);
struct miqt_string QWebEngineUrlSchemeHandler_TrUtf83(const char* s, const char* c, int n);
void QWebEngineUrlSchemeHandler_override_virtual_RequestStarted(void* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_virtualbase_RequestStarted(void* self, QWebEngineUrlRequestJob* param1);
void QWebEngineUrlSchemeHandler_override_virtual_Event(void* self, intptr_t slot);
bool QWebEngineUrlSchemeHandler_virtualbase_Event(void* self, QEvent* event);
void QWebEngineUrlSchemeHandler_override_virtual_EventFilter(void* self, intptr_t slot);
bool QWebEngineUrlSchemeHandler_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QWebEngineUrlSchemeHandler_override_virtual_TimerEvent(void* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QWebEngineUrlSchemeHandler_override_virtual_ChildEvent(void* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QWebEngineUrlSchemeHandler_override_virtual_CustomEvent(void* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_virtualbase_CustomEvent(void* self, QEvent* event);
void QWebEngineUrlSchemeHandler_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QWebEngineUrlSchemeHandler_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QWebEngineUrlSchemeHandler_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QWebEngineUrlSchemeHandler_Delete(QWebEngineUrlSchemeHandler* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
