#pragma once
#ifndef MIQT_QT6_POSITIONING_GEN_QNMEASATELLITEINFOSOURCE_H
#define MIQT_QT6_POSITIONING_GEN_QNMEASATELLITEINFOSOURCE_H

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
class QGeoSatelliteInfo;
class QGeoSatelliteInfoSource;
class QIODevice;
class QMetaMethod;
class QMetaObject;
class QNmeaSatelliteInfoSource;
class QObject;
class QTimerEvent;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QGeoSatelliteInfo QGeoSatelliteInfo;
typedef struct QGeoSatelliteInfoSource QGeoSatelliteInfoSource;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNmeaSatelliteInfoSource QNmeaSatelliteInfoSource;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QNmeaSatelliteInfoSource* QNmeaSatelliteInfoSource_new(int mode);
QNmeaSatelliteInfoSource* QNmeaSatelliteInfoSource_new2(int mode, QObject* parent);
void QNmeaSatelliteInfoSource_virtbase(QNmeaSatelliteInfoSource* src, QGeoSatelliteInfoSource** outptr_QGeoSatelliteInfoSource);
QMetaObject* QNmeaSatelliteInfoSource_metaObject(const QNmeaSatelliteInfoSource* self);
void* QNmeaSatelliteInfoSource_metacast(QNmeaSatelliteInfoSource* self, const char* param1);
struct miqt_string QNmeaSatelliteInfoSource_tr(const char* s);
int QNmeaSatelliteInfoSource_updateMode(const QNmeaSatelliteInfoSource* self);
void QNmeaSatelliteInfoSource_setDevice(QNmeaSatelliteInfoSource* self, QIODevice* source);
QIODevice* QNmeaSatelliteInfoSource_device(const QNmeaSatelliteInfoSource* self);
void QNmeaSatelliteInfoSource_setUpdateInterval(QNmeaSatelliteInfoSource* self, int msec);
int QNmeaSatelliteInfoSource_minimumUpdateInterval(const QNmeaSatelliteInfoSource* self);
int QNmeaSatelliteInfoSource_error(const QNmeaSatelliteInfoSource* self);
bool QNmeaSatelliteInfoSource_setBackendProperty(QNmeaSatelliteInfoSource* self, struct miqt_string name, QVariant* value);
QVariant* QNmeaSatelliteInfoSource_backendProperty(const QNmeaSatelliteInfoSource* self, struct miqt_string name);
void QNmeaSatelliteInfoSource_startUpdates(QNmeaSatelliteInfoSource* self);
void QNmeaSatelliteInfoSource_stopUpdates(QNmeaSatelliteInfoSource* self);
void QNmeaSatelliteInfoSource_requestUpdate(QNmeaSatelliteInfoSource* self, int timeout);
int QNmeaSatelliteInfoSource_parseSatellitesInUseFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, struct miqt_array /* of int */  pnrsInUse);
int QNmeaSatelliteInfoSource_parseSatelliteInfoFromNmea(QNmeaSatelliteInfoSource* self, const char* data, int size, struct miqt_array /* of QGeoSatelliteInfo* */  infos, int* system);
struct miqt_string QNmeaSatelliteInfoSource_tr2(const char* s, const char* c);
struct miqt_string QNmeaSatelliteInfoSource_tr3(const char* s, const char* c, int n);

bool QNmeaSatelliteInfoSource_override_virtual_setUpdateInterval(void* self, intptr_t slot);
void QNmeaSatelliteInfoSource_virtualbase_setUpdateInterval(void* self, int msec);
bool QNmeaSatelliteInfoSource_override_virtual_minimumUpdateInterval(void* self, intptr_t slot);
int QNmeaSatelliteInfoSource_virtualbase_minimumUpdateInterval(const void* self);
bool QNmeaSatelliteInfoSource_override_virtual_error(void* self, intptr_t slot);
int QNmeaSatelliteInfoSource_virtualbase_error(const void* self);
bool QNmeaSatelliteInfoSource_override_virtual_setBackendProperty(void* self, intptr_t slot);
bool QNmeaSatelliteInfoSource_virtualbase_setBackendProperty(void* self, struct miqt_string name, QVariant* value);
bool QNmeaSatelliteInfoSource_override_virtual_backendProperty(void* self, intptr_t slot);
QVariant* QNmeaSatelliteInfoSource_virtualbase_backendProperty(const void* self, struct miqt_string name);
bool QNmeaSatelliteInfoSource_override_virtual_startUpdates(void* self, intptr_t slot);
void QNmeaSatelliteInfoSource_virtualbase_startUpdates(void* self);
bool QNmeaSatelliteInfoSource_override_virtual_stopUpdates(void* self, intptr_t slot);
void QNmeaSatelliteInfoSource_virtualbase_stopUpdates(void* self);
bool QNmeaSatelliteInfoSource_override_virtual_requestUpdate(void* self, intptr_t slot);
void QNmeaSatelliteInfoSource_virtualbase_requestUpdate(void* self, int timeout);
bool QNmeaSatelliteInfoSource_override_virtual_parseSatellitesInUseFromNmea(void* self, intptr_t slot);
int QNmeaSatelliteInfoSource_virtualbase_parseSatellitesInUseFromNmea(void* self, const char* data, int size, struct miqt_array /* of int */  pnrsInUse);
bool QNmeaSatelliteInfoSource_override_virtual_parseSatelliteInfoFromNmea(void* self, intptr_t slot);
int QNmeaSatelliteInfoSource_virtualbase_parseSatelliteInfoFromNmea(void* self, const char* data, int size, struct miqt_array /* of QGeoSatelliteInfo* */  infos, int* system);
bool QNmeaSatelliteInfoSource_override_virtual_event(void* self, intptr_t slot);
bool QNmeaSatelliteInfoSource_virtualbase_event(void* self, QEvent* event);
bool QNmeaSatelliteInfoSource_override_virtual_eventFilter(void* self, intptr_t slot);
bool QNmeaSatelliteInfoSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QNmeaSatelliteInfoSource_override_virtual_timerEvent(void* self, intptr_t slot);
void QNmeaSatelliteInfoSource_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QNmeaSatelliteInfoSource_override_virtual_childEvent(void* self, intptr_t slot);
void QNmeaSatelliteInfoSource_virtualbase_childEvent(void* self, QChildEvent* event);
bool QNmeaSatelliteInfoSource_override_virtual_customEvent(void* self, intptr_t slot);
void QNmeaSatelliteInfoSource_virtualbase_customEvent(void* self, QEvent* event);
bool QNmeaSatelliteInfoSource_override_virtual_connectNotify(void* self, intptr_t slot);
void QNmeaSatelliteInfoSource_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QNmeaSatelliteInfoSource_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QNmeaSatelliteInfoSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QNmeaSatelliteInfoSource_protectedbase_setError(bool* _dynamic_cast_ok, void* self, int satelliteError);
QObject* QNmeaSatelliteInfoSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QNmeaSatelliteInfoSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QNmeaSatelliteInfoSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QNmeaSatelliteInfoSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QNmeaSatelliteInfoSource_delete(QNmeaSatelliteInfoSource* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
