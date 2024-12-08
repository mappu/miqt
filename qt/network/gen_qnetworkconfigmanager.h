#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QNETWORKCONFIGMANAGER_H
#define MIQT_QT_NETWORK_GEN_QNETWORKCONFIGMANAGER_H

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
class QNetworkConfigurationManager;
class QObject;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkConfiguration QNetworkConfiguration;
typedef struct QNetworkConfigurationManager QNetworkConfigurationManager;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QNetworkConfigurationManager* QNetworkConfigurationManager_new();
QNetworkConfigurationManager* QNetworkConfigurationManager_new2(QObject* parent);
void QNetworkConfigurationManager_virtbase(QNetworkConfigurationManager* src, QObject** outptr_QObject);
QMetaObject* QNetworkConfigurationManager_MetaObject(const QNetworkConfigurationManager* self);
void* QNetworkConfigurationManager_Metacast(QNetworkConfigurationManager* self, const char* param1);
struct miqt_string QNetworkConfigurationManager_Tr(const char* s);
struct miqt_string QNetworkConfigurationManager_TrUtf8(const char* s);
int QNetworkConfigurationManager_Capabilities(const QNetworkConfigurationManager* self);
QNetworkConfiguration* QNetworkConfigurationManager_DefaultConfiguration(const QNetworkConfigurationManager* self);
struct miqt_array /* of QNetworkConfiguration* */  QNetworkConfigurationManager_AllConfigurations(const QNetworkConfigurationManager* self);
QNetworkConfiguration* QNetworkConfigurationManager_ConfigurationFromIdentifier(const QNetworkConfigurationManager* self, struct miqt_string identifier);
bool QNetworkConfigurationManager_IsOnline(const QNetworkConfigurationManager* self);
void QNetworkConfigurationManager_UpdateConfigurations(QNetworkConfigurationManager* self);
void QNetworkConfigurationManager_ConfigurationAdded(QNetworkConfigurationManager* self, QNetworkConfiguration* config);
void QNetworkConfigurationManager_connect_ConfigurationAdded(QNetworkConfigurationManager* self, intptr_t slot);
void QNetworkConfigurationManager_ConfigurationRemoved(QNetworkConfigurationManager* self, QNetworkConfiguration* config);
void QNetworkConfigurationManager_connect_ConfigurationRemoved(QNetworkConfigurationManager* self, intptr_t slot);
void QNetworkConfigurationManager_ConfigurationChanged(QNetworkConfigurationManager* self, QNetworkConfiguration* config);
void QNetworkConfigurationManager_connect_ConfigurationChanged(QNetworkConfigurationManager* self, intptr_t slot);
void QNetworkConfigurationManager_OnlineStateChanged(QNetworkConfigurationManager* self, bool isOnline);
void QNetworkConfigurationManager_connect_OnlineStateChanged(QNetworkConfigurationManager* self, intptr_t slot);
void QNetworkConfigurationManager_UpdateCompleted(QNetworkConfigurationManager* self);
void QNetworkConfigurationManager_connect_UpdateCompleted(QNetworkConfigurationManager* self, intptr_t slot);
struct miqt_string QNetworkConfigurationManager_Tr2(const char* s, const char* c);
struct miqt_string QNetworkConfigurationManager_Tr3(const char* s, const char* c, int n);
struct miqt_string QNetworkConfigurationManager_TrUtf82(const char* s, const char* c);
struct miqt_string QNetworkConfigurationManager_TrUtf83(const char* s, const char* c, int n);
struct miqt_array /* of QNetworkConfiguration* */  QNetworkConfigurationManager_AllConfigurations1(const QNetworkConfigurationManager* self, int flags);
void QNetworkConfigurationManager_override_virtual_Event(void* self, intptr_t slot);
bool QNetworkConfigurationManager_virtualbase_Event(void* self, QEvent* event);
void QNetworkConfigurationManager_override_virtual_EventFilter(void* self, intptr_t slot);
bool QNetworkConfigurationManager_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QNetworkConfigurationManager_override_virtual_TimerEvent(void* self, intptr_t slot);
void QNetworkConfigurationManager_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QNetworkConfigurationManager_override_virtual_ChildEvent(void* self, intptr_t slot);
void QNetworkConfigurationManager_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QNetworkConfigurationManager_override_virtual_CustomEvent(void* self, intptr_t slot);
void QNetworkConfigurationManager_virtualbase_CustomEvent(void* self, QEvent* event);
void QNetworkConfigurationManager_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QNetworkConfigurationManager_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QNetworkConfigurationManager_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QNetworkConfigurationManager_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QNetworkConfigurationManager_Delete(QNetworkConfigurationManager* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
