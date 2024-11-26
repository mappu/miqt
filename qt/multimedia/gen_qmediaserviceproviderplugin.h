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
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QMediaServiceProviderHint_new(QMediaServiceProviderHint** outptr_QMediaServiceProviderHint);
void QMediaServiceProviderHint_new2(struct miqt_string mimeType, struct miqt_array /* of struct miqt_string */  codecs, QMediaServiceProviderHint** outptr_QMediaServiceProviderHint);
void QMediaServiceProviderHint_new3(struct miqt_string device, QMediaServiceProviderHint** outptr_QMediaServiceProviderHint);
void QMediaServiceProviderHint_new4(int position, QMediaServiceProviderHint** outptr_QMediaServiceProviderHint);
void QMediaServiceProviderHint_new5(int features, QMediaServiceProviderHint** outptr_QMediaServiceProviderHint);
void QMediaServiceProviderHint_new6(QMediaServiceProviderHint* other, QMediaServiceProviderHint** outptr_QMediaServiceProviderHint);
void QMediaServiceProviderHint_OperatorAssign(QMediaServiceProviderHint* self, QMediaServiceProviderHint* other);
bool QMediaServiceProviderHint_OperatorEqual(const QMediaServiceProviderHint* self, QMediaServiceProviderHint* other);
bool QMediaServiceProviderHint_OperatorNotEqual(const QMediaServiceProviderHint* self, QMediaServiceProviderHint* other);
bool QMediaServiceProviderHint_IsNull(const QMediaServiceProviderHint* self);
int QMediaServiceProviderHint_Type(const QMediaServiceProviderHint* self);
struct miqt_string QMediaServiceProviderHint_MimeType(const QMediaServiceProviderHint* self);
struct miqt_array /* of struct miqt_string */  QMediaServiceProviderHint_Codecs(const QMediaServiceProviderHint* self);
struct miqt_string QMediaServiceProviderHint_Device(const QMediaServiceProviderHint* self);
int QMediaServiceProviderHint_CameraPosition(const QMediaServiceProviderHint* self);
int QMediaServiceProviderHint_Features(const QMediaServiceProviderHint* self);
void QMediaServiceProviderHint_Delete(QMediaServiceProviderHint* self, bool isSubclass);

QMediaService* QMediaServiceProviderFactoryInterface_Create(QMediaServiceProviderFactoryInterface* self, struct miqt_string key);
void QMediaServiceProviderFactoryInterface_Release(QMediaServiceProviderFactoryInterface* self, QMediaService* service);
void QMediaServiceProviderFactoryInterface_OperatorAssign(QMediaServiceProviderFactoryInterface* self, QMediaServiceProviderFactoryInterface* param1);
void QMediaServiceProviderFactoryInterface_Delete(QMediaServiceProviderFactoryInterface* self, bool isSubclass);

int QMediaServiceSupportedFormatsInterface_HasSupport(const QMediaServiceSupportedFormatsInterface* self, struct miqt_string mimeType, struct miqt_array /* of struct miqt_string */  codecs);
struct miqt_array /* of struct miqt_string */  QMediaServiceSupportedFormatsInterface_SupportedMimeTypes(const QMediaServiceSupportedFormatsInterface* self);
void QMediaServiceSupportedFormatsInterface_OperatorAssign(QMediaServiceSupportedFormatsInterface* self, QMediaServiceSupportedFormatsInterface* param1);
void QMediaServiceSupportedFormatsInterface_Delete(QMediaServiceSupportedFormatsInterface* self, bool isSubclass);

struct miqt_array /* of struct miqt_string */  QMediaServiceSupportedDevicesInterface_Devices(const QMediaServiceSupportedDevicesInterface* self, struct miqt_string service);
struct miqt_string QMediaServiceSupportedDevicesInterface_DeviceDescription(QMediaServiceSupportedDevicesInterface* self, struct miqt_string service, struct miqt_string device);
void QMediaServiceSupportedDevicesInterface_OperatorAssign(QMediaServiceSupportedDevicesInterface* self, QMediaServiceSupportedDevicesInterface* param1);
void QMediaServiceSupportedDevicesInterface_Delete(QMediaServiceSupportedDevicesInterface* self, bool isSubclass);

struct miqt_string QMediaServiceDefaultDeviceInterface_DefaultDevice(const QMediaServiceDefaultDeviceInterface* self, struct miqt_string service);
void QMediaServiceDefaultDeviceInterface_OperatorAssign(QMediaServiceDefaultDeviceInterface* self, QMediaServiceDefaultDeviceInterface* param1);
void QMediaServiceDefaultDeviceInterface_Delete(QMediaServiceDefaultDeviceInterface* self, bool isSubclass);

int QMediaServiceCameraInfoInterface_CameraPosition(const QMediaServiceCameraInfoInterface* self, struct miqt_string device);
int QMediaServiceCameraInfoInterface_CameraOrientation(const QMediaServiceCameraInfoInterface* self, struct miqt_string device);
void QMediaServiceCameraInfoInterface_OperatorAssign(QMediaServiceCameraInfoInterface* self, QMediaServiceCameraInfoInterface* param1);
void QMediaServiceCameraInfoInterface_Delete(QMediaServiceCameraInfoInterface* self, bool isSubclass);

int QMediaServiceFeaturesInterface_SupportedFeatures(const QMediaServiceFeaturesInterface* self, struct miqt_string service);
void QMediaServiceFeaturesInterface_OperatorAssign(QMediaServiceFeaturesInterface* self, QMediaServiceFeaturesInterface* param1);
void QMediaServiceFeaturesInterface_Delete(QMediaServiceFeaturesInterface* self, bool isSubclass);

QMetaObject* QMediaServiceProviderPlugin_MetaObject(const QMediaServiceProviderPlugin* self);
void* QMediaServiceProviderPlugin_Metacast(QMediaServiceProviderPlugin* self, const char* param1);
struct miqt_string QMediaServiceProviderPlugin_Tr(const char* s);
struct miqt_string QMediaServiceProviderPlugin_TrUtf8(const char* s);
QMediaService* QMediaServiceProviderPlugin_Create(QMediaServiceProviderPlugin* self, struct miqt_string key);
void QMediaServiceProviderPlugin_Release(QMediaServiceProviderPlugin* self, QMediaService* service);
struct miqt_string QMediaServiceProviderPlugin_Tr2(const char* s, const char* c);
struct miqt_string QMediaServiceProviderPlugin_Tr3(const char* s, const char* c, int n);
struct miqt_string QMediaServiceProviderPlugin_TrUtf82(const char* s, const char* c);
struct miqt_string QMediaServiceProviderPlugin_TrUtf83(const char* s, const char* c, int n);
void QMediaServiceProviderPlugin_Delete(QMediaServiceProviderPlugin* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
