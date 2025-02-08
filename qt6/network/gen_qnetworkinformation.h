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
class QMetaMethod;
class QMetaObject;
class QNetworkInformation;
class QObject;
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkInformation QNetworkInformation;
typedef struct QObject QObject;
#endif

void QNetworkInformation_virtbase(QNetworkInformation* src, QObject** outptr_QObject);
QMetaObject* QNetworkInformation_metaObject(const QNetworkInformation* self);
void* QNetworkInformation_metacast(QNetworkInformation* self, const char* param1);
struct miqt_string QNetworkInformation_tr(const char* s);
int QNetworkInformation_reachability(const QNetworkInformation* self);
bool QNetworkInformation_isBehindCaptivePortal(const QNetworkInformation* self);
int QNetworkInformation_transportMedium(const QNetworkInformation* self);
bool QNetworkInformation_isMetered(const QNetworkInformation* self);
struct miqt_string QNetworkInformation_backendName(const QNetworkInformation* self);
bool QNetworkInformation_supports(const QNetworkInformation* self, int features);
int QNetworkInformation_supportedFeatures(const QNetworkInformation* self);
bool QNetworkInformation_loadDefaultBackend();
bool QNetworkInformation_loadBackendByFeatures(int features);
bool QNetworkInformation_loadWithFeatures(int features);
struct miqt_array /* of struct miqt_string */  QNetworkInformation_availableBackends();
QNetworkInformation* QNetworkInformation_instance();
void QNetworkInformation_reachabilityChanged(QNetworkInformation* self, int newReachability);
void QNetworkInformation_connect_reachabilityChanged(QNetworkInformation* self, intptr_t slot);
void QNetworkInformation_isBehindCaptivePortalChanged(QNetworkInformation* self, bool state);
void QNetworkInformation_connect_isBehindCaptivePortalChanged(QNetworkInformation* self, intptr_t slot);
void QNetworkInformation_transportMediumChanged(QNetworkInformation* self, int current);
void QNetworkInformation_connect_transportMediumChanged(QNetworkInformation* self, intptr_t slot);
void QNetworkInformation_isMeteredChanged(QNetworkInformation* self, bool isMetered);
void QNetworkInformation_connect_isMeteredChanged(QNetworkInformation* self, intptr_t slot);
struct miqt_string QNetworkInformation_tr2(const char* s, const char* c);
struct miqt_string QNetworkInformation_tr3(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
