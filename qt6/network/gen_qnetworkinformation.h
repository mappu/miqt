#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QNETWORKINFORMATION_H
#define MIQT_QT6_NETWORK_GEN_QNETWORKINFORMATION_H

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
class QNetworkInformation;
class QObject;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkInformation QNetworkInformation;
typedef struct QObject QObject;
#endif

QMetaObject* QNetworkInformation_MetaObject(const QNetworkInformation* self);
void* QNetworkInformation_Metacast(QNetworkInformation* self, const char* param1);
struct miqt_string QNetworkInformation_Tr(const char* s);
int QNetworkInformation_Reachability(const QNetworkInformation* self);
bool QNetworkInformation_IsBehindCaptivePortal(const QNetworkInformation* self);
int QNetworkInformation_TransportMedium(const QNetworkInformation* self);
bool QNetworkInformation_IsMetered(const QNetworkInformation* self);
struct miqt_string QNetworkInformation_BackendName(const QNetworkInformation* self);
bool QNetworkInformation_Supports(const QNetworkInformation* self, int features);
int QNetworkInformation_SupportedFeatures(const QNetworkInformation* self);
bool QNetworkInformation_LoadDefaultBackend();
bool QNetworkInformation_LoadBackendByFeatures(int features);
bool QNetworkInformation_LoadWithFeatures(int features);
struct miqt_array /* of struct miqt_string */  QNetworkInformation_AvailableBackends();
QNetworkInformation* QNetworkInformation_Instance();
void QNetworkInformation_ReachabilityChanged(QNetworkInformation* self, int newReachability);
void QNetworkInformation_connect_ReachabilityChanged(QNetworkInformation* self, intptr_t slot);
void QNetworkInformation_IsBehindCaptivePortalChanged(QNetworkInformation* self, bool state);
void QNetworkInformation_connect_IsBehindCaptivePortalChanged(QNetworkInformation* self, intptr_t slot);
void QNetworkInformation_TransportMediumChanged(QNetworkInformation* self, int current);
void QNetworkInformation_connect_TransportMediumChanged(QNetworkInformation* self, intptr_t slot);
void QNetworkInformation_IsMeteredChanged(QNetworkInformation* self, bool isMetered);
void QNetworkInformation_connect_IsMeteredChanged(QNetworkInformation* self, intptr_t slot);
struct miqt_string QNetworkInformation_Tr2(const char* s, const char* c);
struct miqt_string QNetworkInformation_Tr3(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
