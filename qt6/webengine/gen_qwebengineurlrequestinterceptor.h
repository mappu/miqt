#pragma once
#ifndef MIQT_QT6_WEBENGINE_GEN_QWEBENGINEURLREQUESTINTERCEPTOR_H
#define MIQT_QT6_WEBENGINE_GEN_QWEBENGINEURLREQUESTINTERCEPTOR_H

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

void QWebEngineUrlRequestInterceptor_new(QWebEngineUrlRequestInterceptor** outptr_QWebEngineUrlRequestInterceptor, QObject** outptr_QObject);
void QWebEngineUrlRequestInterceptor_new2(QObject* p, QWebEngineUrlRequestInterceptor** outptr_QWebEngineUrlRequestInterceptor, QObject** outptr_QObject);
QMetaObject* QWebEngineUrlRequestInterceptor_MetaObject(const QWebEngineUrlRequestInterceptor* self);
void* QWebEngineUrlRequestInterceptor_Metacast(QWebEngineUrlRequestInterceptor* self, const char* param1);
struct miqt_string QWebEngineUrlRequestInterceptor_Tr(const char* s);
void QWebEngineUrlRequestInterceptor_InterceptRequest(QWebEngineUrlRequestInterceptor* self, QWebEngineUrlRequestInfo* info);
struct miqt_string QWebEngineUrlRequestInterceptor_Tr2(const char* s, const char* c);
struct miqt_string QWebEngineUrlRequestInterceptor_Tr3(const char* s, const char* c, int n);
void QWebEngineUrlRequestInterceptor_override_virtual_InterceptRequest(void* self, intptr_t slot);
void QWebEngineUrlRequestInterceptor_virtualbase_InterceptRequest(void* self, QWebEngineUrlRequestInfo* info);
void QWebEngineUrlRequestInterceptor_override_virtual_Event(void* self, intptr_t slot);
bool QWebEngineUrlRequestInterceptor_virtualbase_Event(void* self, QEvent* event);
void QWebEngineUrlRequestInterceptor_override_virtual_EventFilter(void* self, intptr_t slot);
bool QWebEngineUrlRequestInterceptor_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QWebEngineUrlRequestInterceptor_override_virtual_TimerEvent(void* self, intptr_t slot);
void QWebEngineUrlRequestInterceptor_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QWebEngineUrlRequestInterceptor_override_virtual_ChildEvent(void* self, intptr_t slot);
void QWebEngineUrlRequestInterceptor_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QWebEngineUrlRequestInterceptor_override_virtual_CustomEvent(void* self, intptr_t slot);
void QWebEngineUrlRequestInterceptor_virtualbase_CustomEvent(void* self, QEvent* event);
void QWebEngineUrlRequestInterceptor_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QWebEngineUrlRequestInterceptor_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QWebEngineUrlRequestInterceptor_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QWebEngineUrlRequestInterceptor_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QWebEngineUrlRequestInterceptor_Delete(QWebEngineUrlRequestInterceptor* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
