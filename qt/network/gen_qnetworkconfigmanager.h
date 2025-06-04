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
QMetaObject* QNetworkConfigurationManager_metaObject(const QNetworkConfigurationManager* self);
void* QNetworkConfigurationManager_metacast(QNetworkConfigurationManager* self, const char* param1);
struct miqt_string QNetworkConfigurationManager_tr(const char* s);
struct miqt_string QNetworkConfigurationManager_trUtf8(const char* s);
int QNetworkConfigurationManager_capabilities(const QNetworkConfigurationManager* self);
QNetworkConfiguration* QNetworkConfigurationManager_defaultConfiguration(const QNetworkConfigurationManager* self);
struct miqt_array /* of QNetworkConfiguration* */  QNetworkConfigurationManager_allConfigurations(const QNetworkConfigurationManager* self);
QNetworkConfiguration* QNetworkConfigurationManager_configurationFromIdentifier(const QNetworkConfigurationManager* self, struct miqt_string identifier);
bool QNetworkConfigurationManager_isOnline(const QNetworkConfigurationManager* self);
void QNetworkConfigurationManager_updateConfigurations(QNetworkConfigurationManager* self);
void QNetworkConfigurationManager_configurationAdded(QNetworkConfigurationManager* self, QNetworkConfiguration* config);
void QNetworkConfigurationManager_connect_configurationAdded(QNetworkConfigurationManager* self, intptr_t slot);
void QNetworkConfigurationManager_configurationRemoved(QNetworkConfigurationManager* self, QNetworkConfiguration* config);
void QNetworkConfigurationManager_connect_configurationRemoved(QNetworkConfigurationManager* self, intptr_t slot);
void QNetworkConfigurationManager_configurationChanged(QNetworkConfigurationManager* self, QNetworkConfiguration* config);
void QNetworkConfigurationManager_connect_configurationChanged(QNetworkConfigurationManager* self, intptr_t slot);
void QNetworkConfigurationManager_onlineStateChanged(QNetworkConfigurationManager* self, bool isOnline);
void QNetworkConfigurationManager_connect_onlineStateChanged(QNetworkConfigurationManager* self, intptr_t slot);
void QNetworkConfigurationManager_updateCompleted(QNetworkConfigurationManager* self);
void QNetworkConfigurationManager_connect_updateCompleted(QNetworkConfigurationManager* self, intptr_t slot);
struct miqt_string QNetworkConfigurationManager_tr2(const char* s, const char* c);
struct miqt_string QNetworkConfigurationManager_tr3(const char* s, const char* c, int n);
struct miqt_string QNetworkConfigurationManager_trUtf82(const char* s, const char* c);
struct miqt_string QNetworkConfigurationManager_trUtf83(const char* s, const char* c, int n);
struct miqt_array /* of QNetworkConfiguration* */  QNetworkConfigurationManager_allConfigurationsWithFlags(const QNetworkConfigurationManager* self, int flags);

bool QNetworkConfigurationManager_override_virtual_event(void* self, intptr_t slot);
bool QNetworkConfigurationManager_virtualbase_event(void* self, QEvent* event);
bool QNetworkConfigurationManager_override_virtual_eventFilter(void* self, intptr_t slot);
bool QNetworkConfigurationManager_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QNetworkConfigurationManager_override_virtual_timerEvent(void* self, intptr_t slot);
void QNetworkConfigurationManager_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QNetworkConfigurationManager_override_virtual_childEvent(void* self, intptr_t slot);
void QNetworkConfigurationManager_virtualbase_childEvent(void* self, QChildEvent* event);
bool QNetworkConfigurationManager_override_virtual_customEvent(void* self, intptr_t slot);
void QNetworkConfigurationManager_virtualbase_customEvent(void* self, QEvent* event);
bool QNetworkConfigurationManager_override_virtual_connectNotify(void* self, intptr_t slot);
void QNetworkConfigurationManager_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QNetworkConfigurationManager_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QNetworkConfigurationManager_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QNetworkConfigurationManager_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QNetworkConfigurationManager_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QNetworkConfigurationManager_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QNetworkConfigurationManager_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QNetworkConfigurationManager_delete(QNetworkConfigurationManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
