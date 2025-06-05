#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIASERVICEPROVIDERPLUGIN_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIASERVICEPROVIDERPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaService;
class QMediaServiceCameraInfoInterface;
class QMediaServiceDefaultDeviceInterface;
class QMediaServiceFeaturesInterface;
class QMediaServiceProviderFactoryInterface;
class QMediaServiceProviderHint;
class QMediaServiceProviderPlugin;
class QMediaServiceSupportedDevicesInterface;
class QMediaServiceSupportedFormatsInterface;
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QMediaService QMediaService;
typedef struct QMediaServiceCameraInfoInterface QMediaServiceCameraInfoInterface;
typedef struct QMediaServiceDefaultDeviceInterface QMediaServiceDefaultDeviceInterface;
typedef struct QMediaServiceFeaturesInterface QMediaServiceFeaturesInterface;
typedef struct QMediaServiceProviderFactoryInterface QMediaServiceProviderFactoryInterface;
typedef struct QMediaServiceProviderHint QMediaServiceProviderHint;
typedef struct QMediaServiceProviderPlugin QMediaServiceProviderPlugin;
typedef struct QMediaServiceSupportedDevicesInterface QMediaServiceSupportedDevicesInterface;
typedef struct QMediaServiceSupportedFormatsInterface QMediaServiceSupportedFormatsInterface;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMediaServiceProviderHint* QMediaServiceProviderHint_new();
QMediaServiceProviderHint* QMediaServiceProviderHint_new2(struct miqt_string mimeType, struct miqt_array /* of struct miqt_string */  codecs);
QMediaServiceProviderHint* QMediaServiceProviderHint_new3(struct miqt_string device);
QMediaServiceProviderHint* QMediaServiceProviderHint_new4(int position);
QMediaServiceProviderHint* QMediaServiceProviderHint_new5(int features);
QMediaServiceProviderHint* QMediaServiceProviderHint_new6(QMediaServiceProviderHint* other);
void QMediaServiceProviderHint_operatorAssign(QMediaServiceProviderHint* self, QMediaServiceProviderHint* other);
bool QMediaServiceProviderHint_operatorEqual(const QMediaServiceProviderHint* self, QMediaServiceProviderHint* other);
bool QMediaServiceProviderHint_operatorNotEqual(const QMediaServiceProviderHint* self, QMediaServiceProviderHint* other);
bool QMediaServiceProviderHint_isNull(const QMediaServiceProviderHint* self);
int QMediaServiceProviderHint_type(const QMediaServiceProviderHint* self);
struct miqt_string QMediaServiceProviderHint_mimeType(const QMediaServiceProviderHint* self);
struct miqt_array /* of struct miqt_string */  QMediaServiceProviderHint_codecs(const QMediaServiceProviderHint* self);
struct miqt_string QMediaServiceProviderHint_device(const QMediaServiceProviderHint* self);
int QMediaServiceProviderHint_cameraPosition(const QMediaServiceProviderHint* self);
int QMediaServiceProviderHint_features(const QMediaServiceProviderHint* self);

void QMediaServiceProviderHint_delete(QMediaServiceProviderHint* self);

QMediaService* QMediaServiceProviderFactoryInterface_create(QMediaServiceProviderFactoryInterface* self, struct miqt_string key);
void QMediaServiceProviderFactoryInterface_release(QMediaServiceProviderFactoryInterface* self, QMediaService* service);
void QMediaServiceProviderFactoryInterface_operatorAssign(QMediaServiceProviderFactoryInterface* self, QMediaServiceProviderFactoryInterface* param1);

void QMediaServiceProviderFactoryInterface_delete(QMediaServiceProviderFactoryInterface* self);

int QMediaServiceSupportedFormatsInterface_hasSupport(const QMediaServiceSupportedFormatsInterface* self, struct miqt_string mimeType, struct miqt_array /* of struct miqt_string */  codecs);
struct miqt_array /* of struct miqt_string */  QMediaServiceSupportedFormatsInterface_supportedMimeTypes(const QMediaServiceSupportedFormatsInterface* self);
void QMediaServiceSupportedFormatsInterface_operatorAssign(QMediaServiceSupportedFormatsInterface* self, QMediaServiceSupportedFormatsInterface* param1);

void QMediaServiceSupportedFormatsInterface_delete(QMediaServiceSupportedFormatsInterface* self);

struct miqt_array /* of struct miqt_string */  QMediaServiceSupportedDevicesInterface_devices(const QMediaServiceSupportedDevicesInterface* self, struct miqt_string service);
struct miqt_string QMediaServiceSupportedDevicesInterface_deviceDescription(QMediaServiceSupportedDevicesInterface* self, struct miqt_string service, struct miqt_string device);
void QMediaServiceSupportedDevicesInterface_operatorAssign(QMediaServiceSupportedDevicesInterface* self, QMediaServiceSupportedDevicesInterface* param1);

void QMediaServiceSupportedDevicesInterface_delete(QMediaServiceSupportedDevicesInterface* self);

struct miqt_string QMediaServiceDefaultDeviceInterface_defaultDevice(const QMediaServiceDefaultDeviceInterface* self, struct miqt_string service);
void QMediaServiceDefaultDeviceInterface_operatorAssign(QMediaServiceDefaultDeviceInterface* self, QMediaServiceDefaultDeviceInterface* param1);

void QMediaServiceDefaultDeviceInterface_delete(QMediaServiceDefaultDeviceInterface* self);

int QMediaServiceCameraInfoInterface_cameraPosition(const QMediaServiceCameraInfoInterface* self, struct miqt_string device);
int QMediaServiceCameraInfoInterface_cameraOrientation(const QMediaServiceCameraInfoInterface* self, struct miqt_string device);
void QMediaServiceCameraInfoInterface_operatorAssign(QMediaServiceCameraInfoInterface* self, QMediaServiceCameraInfoInterface* param1);

void QMediaServiceCameraInfoInterface_delete(QMediaServiceCameraInfoInterface* self);

int QMediaServiceFeaturesInterface_supportedFeatures(const QMediaServiceFeaturesInterface* self, struct miqt_string service);
void QMediaServiceFeaturesInterface_operatorAssign(QMediaServiceFeaturesInterface* self, QMediaServiceFeaturesInterface* param1);

void QMediaServiceFeaturesInterface_delete(QMediaServiceFeaturesInterface* self);

void QMediaServiceProviderPlugin_virtbase(QMediaServiceProviderPlugin* src, QObject** outptr_QObject, QMediaServiceProviderFactoryInterface** outptr_QMediaServiceProviderFactoryInterface);
QMetaObject* QMediaServiceProviderPlugin_metaObject(const QMediaServiceProviderPlugin* self);
void* QMediaServiceProviderPlugin_metacast(QMediaServiceProviderPlugin* self, const char* param1);
struct miqt_string QMediaServiceProviderPlugin_tr(const char* s);
struct miqt_string QMediaServiceProviderPlugin_trUtf8(const char* s);
QMediaService* QMediaServiceProviderPlugin_create(QMediaServiceProviderPlugin* self, struct miqt_string key);
void QMediaServiceProviderPlugin_release(QMediaServiceProviderPlugin* self, QMediaService* service);
struct miqt_string QMediaServiceProviderPlugin_tr2(const char* s, const char* c);
struct miqt_string QMediaServiceProviderPlugin_tr3(const char* s, const char* c, int n);
struct miqt_string QMediaServiceProviderPlugin_trUtf82(const char* s, const char* c);
struct miqt_string QMediaServiceProviderPlugin_trUtf83(const char* s, const char* c, int n);

void QMediaServiceProviderPlugin_delete(QMediaServiceProviderPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
