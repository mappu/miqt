#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIAOBJECT_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIAOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaObject;
class QMediaService;
class QMetaObject;
class QObject;
class QVariant;
#else
typedef struct QMediaObject QMediaObject;
typedef struct QMediaService QMediaService;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

void QMediaObject_virtbase(QMediaObject* src, QObject** outptr_QObject);
QMetaObject* QMediaObject_MetaObject(const QMediaObject* self);
void* QMediaObject_Metacast(QMediaObject* self, const char* param1);
struct miqt_string QMediaObject_Tr(const char* s);
struct miqt_string QMediaObject_TrUtf8(const char* s);
bool QMediaObject_IsAvailable(const QMediaObject* self);
int QMediaObject_Availability(const QMediaObject* self);
QMediaService* QMediaObject_Service(const QMediaObject* self);
int QMediaObject_NotifyInterval(const QMediaObject* self);
void QMediaObject_SetNotifyInterval(QMediaObject* self, int milliSeconds);
bool QMediaObject_Bind(QMediaObject* self, QObject* param1);
void QMediaObject_Unbind(QMediaObject* self, QObject* param1);
bool QMediaObject_IsMetaDataAvailable(const QMediaObject* self);
QVariant* QMediaObject_MetaData(const QMediaObject* self, struct miqt_string key);
struct miqt_array /* of struct miqt_string */  QMediaObject_AvailableMetaData(const QMediaObject* self);
void QMediaObject_NotifyIntervalChanged(QMediaObject* self, int milliSeconds);
void QMediaObject_connect_NotifyIntervalChanged(QMediaObject* self, intptr_t slot);
void QMediaObject_MetaDataAvailableChanged(QMediaObject* self, bool available);
void QMediaObject_connect_MetaDataAvailableChanged(QMediaObject* self, intptr_t slot);
void QMediaObject_MetaDataChanged(QMediaObject* self);
void QMediaObject_connect_MetaDataChanged(QMediaObject* self, intptr_t slot);
void QMediaObject_MetaDataChanged2(QMediaObject* self, struct miqt_string key, QVariant* value);
void QMediaObject_connect_MetaDataChanged2(QMediaObject* self, intptr_t slot);
void QMediaObject_AvailabilityChanged(QMediaObject* self, bool available);
void QMediaObject_connect_AvailabilityChanged(QMediaObject* self, intptr_t slot);
void QMediaObject_AvailabilityChangedWithAvailability(QMediaObject* self, int availability);
void QMediaObject_connect_AvailabilityChangedWithAvailability(QMediaObject* self, intptr_t slot);
struct miqt_string QMediaObject_Tr2(const char* s, const char* c);
struct miqt_string QMediaObject_Tr3(const char* s, const char* c, int n);
struct miqt_string QMediaObject_TrUtf82(const char* s, const char* c);
struct miqt_string QMediaObject_TrUtf83(const char* s, const char* c, int n);
void QMediaObject_Delete(QMediaObject* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
