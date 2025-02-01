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
QMetaObject* QMediaObject_metaObject(const QMediaObject* self);
void* QMediaObject_metacast(QMediaObject* self, const char* param1);
struct miqt_string QMediaObject_tr(const char* s);
struct miqt_string QMediaObject_trUtf8(const char* s);
bool QMediaObject_isAvailable(const QMediaObject* self);
int QMediaObject_availability(const QMediaObject* self);
QMediaService* QMediaObject_service(const QMediaObject* self);
int QMediaObject_notifyInterval(const QMediaObject* self);
void QMediaObject_setNotifyInterval(QMediaObject* self, int milliSeconds);
bool QMediaObject_bind(QMediaObject* self, QObject* param1);
void QMediaObject_unbind(QMediaObject* self, QObject* param1);
bool QMediaObject_isMetaDataAvailable(const QMediaObject* self);
QVariant* QMediaObject_metaData(const QMediaObject* self, struct miqt_string key);
struct miqt_array /* of struct miqt_string */  QMediaObject_availableMetaData(const QMediaObject* self);
void QMediaObject_notifyIntervalChanged(QMediaObject* self, int milliSeconds);
void QMediaObject_connect_notifyIntervalChanged(QMediaObject* self, intptr_t slot);
void QMediaObject_metaDataAvailableChanged(QMediaObject* self, bool available);
void QMediaObject_connect_metaDataAvailableChanged(QMediaObject* self, intptr_t slot);
void QMediaObject_metaDataChanged(QMediaObject* self);
void QMediaObject_connect_metaDataChanged(QMediaObject* self, intptr_t slot);
void QMediaObject_metaDataChanged2(QMediaObject* self, struct miqt_string key, QVariant* value);
void QMediaObject_connect_metaDataChanged2(QMediaObject* self, intptr_t slot);
void QMediaObject_availabilityChanged(QMediaObject* self, bool available);
void QMediaObject_connect_availabilityChanged(QMediaObject* self, intptr_t slot);
void QMediaObject_availabilityChangedWithAvailability(QMediaObject* self, int availability);
void QMediaObject_connect_availabilityChangedWithAvailability(QMediaObject* self, intptr_t slot);
struct miqt_string QMediaObject_tr2(const char* s, const char* c);
struct miqt_string QMediaObject_tr3(const char* s, const char* c, int n);
struct miqt_string QMediaObject_trUtf82(const char* s, const char* c);
struct miqt_string QMediaObject_trUtf83(const char* s, const char* c, int n);
void QMediaObject_delete(QMediaObject* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
