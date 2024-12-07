#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QNETWORKSESSION_H
#define MIQT_QT_NETWORK_GEN_QNETWORKSESSION_H

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
class QNetworkConfiguration;
class QNetworkInterface;
class QNetworkSession;
class QObject;
class QTimerEvent;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkConfiguration QNetworkConfiguration;
typedef struct QNetworkInterface QNetworkInterface;
typedef struct QNetworkSession QNetworkSession;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QNetworkSession* QNetworkSession_new(QNetworkConfiguration* connConfig);
QNetworkSession* QNetworkSession_new2(QNetworkConfiguration* connConfig, QObject* parent);
void QNetworkSession_virtbase(QNetworkSession* src, QObject** outptr_QObject);
QMetaObject* QNetworkSession_MetaObject(const QNetworkSession* self);
void* QNetworkSession_Metacast(QNetworkSession* self, const char* param1);
struct miqt_string QNetworkSession_Tr(const char* s);
struct miqt_string QNetworkSession_TrUtf8(const char* s);
bool QNetworkSession_IsOpen(const QNetworkSession* self);
QNetworkConfiguration* QNetworkSession_Configuration(const QNetworkSession* self);
QNetworkInterface* QNetworkSession_Interface(const QNetworkSession* self);
int QNetworkSession_State(const QNetworkSession* self);
int QNetworkSession_Error(const QNetworkSession* self);
struct miqt_string QNetworkSession_ErrorString(const QNetworkSession* self);
QVariant* QNetworkSession_SessionProperty(const QNetworkSession* self, struct miqt_string key);
void QNetworkSession_SetSessionProperty(QNetworkSession* self, struct miqt_string key, QVariant* value);
unsigned long long QNetworkSession_BytesWritten(const QNetworkSession* self);
unsigned long long QNetworkSession_BytesReceived(const QNetworkSession* self);
unsigned long long QNetworkSession_ActiveTime(const QNetworkSession* self);
int QNetworkSession_UsagePolicies(const QNetworkSession* self);
bool QNetworkSession_WaitForOpened(QNetworkSession* self);
void QNetworkSession_Open(QNetworkSession* self);
void QNetworkSession_Close(QNetworkSession* self);
void QNetworkSession_Stop(QNetworkSession* self);
void QNetworkSession_Migrate(QNetworkSession* self);
void QNetworkSession_Ignore(QNetworkSession* self);
void QNetworkSession_Accept(QNetworkSession* self);
void QNetworkSession_Reject(QNetworkSession* self);
void QNetworkSession_StateChanged(QNetworkSession* self, int param1);
void QNetworkSession_connect_StateChanged(QNetworkSession* self, intptr_t slot);
void QNetworkSession_Opened(QNetworkSession* self);
void QNetworkSession_connect_Opened(QNetworkSession* self, intptr_t slot);
void QNetworkSession_Closed(QNetworkSession* self);
void QNetworkSession_connect_Closed(QNetworkSession* self, intptr_t slot);
void QNetworkSession_ErrorWithQNetworkSessionSessionError(QNetworkSession* self, int param1);
void QNetworkSession_connect_ErrorWithQNetworkSessionSessionError(QNetworkSession* self, intptr_t slot);
void QNetworkSession_PreferredConfigurationChanged(QNetworkSession* self, QNetworkConfiguration* config, bool isSeamless);
void QNetworkSession_connect_PreferredConfigurationChanged(QNetworkSession* self, intptr_t slot);
void QNetworkSession_NewConfigurationActivated(QNetworkSession* self);
void QNetworkSession_connect_NewConfigurationActivated(QNetworkSession* self, intptr_t slot);
void QNetworkSession_UsagePoliciesChanged(QNetworkSession* self, int usagePolicies);
void QNetworkSession_connect_UsagePoliciesChanged(QNetworkSession* self, intptr_t slot);
void QNetworkSession_ConnectNotify(QNetworkSession* self, QMetaMethod* signal);
void QNetworkSession_DisconnectNotify(QNetworkSession* self, QMetaMethod* signal);
struct miqt_string QNetworkSession_Tr2(const char* s, const char* c);
struct miqt_string QNetworkSession_Tr3(const char* s, const char* c, int n);
struct miqt_string QNetworkSession_TrUtf82(const char* s, const char* c);
struct miqt_string QNetworkSession_TrUtf83(const char* s, const char* c, int n);
bool QNetworkSession_WaitForOpened1(QNetworkSession* self, int msecs);
void QNetworkSession_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QNetworkSession_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QNetworkSession_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QNetworkSession_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QNetworkSession_override_virtual_Event(void* self, intptr_t slot);
bool QNetworkSession_virtualbase_Event(void* self, QEvent* event);
void QNetworkSession_override_virtual_EventFilter(void* self, intptr_t slot);
bool QNetworkSession_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QNetworkSession_override_virtual_TimerEvent(void* self, intptr_t slot);
void QNetworkSession_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QNetworkSession_override_virtual_ChildEvent(void* self, intptr_t slot);
void QNetworkSession_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QNetworkSession_override_virtual_CustomEvent(void* self, intptr_t slot);
void QNetworkSession_virtualbase_CustomEvent(void* self, QEvent* event);
void QNetworkSession_Delete(QNetworkSession* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
