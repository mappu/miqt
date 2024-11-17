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
class QMetaObject;
class QNetworkConfiguration;
class QNetworkConfigurationManager;
class QObject;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkConfiguration QNetworkConfiguration;
typedef struct QNetworkConfigurationManager QNetworkConfigurationManager;
typedef struct QObject QObject;
#endif

QNetworkConfigurationManager* QNetworkConfigurationManager_new();
QNetworkConfigurationManager* QNetworkConfigurationManager_new2(QObject* parent);
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
void QNetworkConfigurationManager_Delete(QNetworkConfigurationManager* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
