#pragma once
#ifndef MIQT_QT_POSITIONING_GEN_QGEOSATELLITEINFOSOURCE_H
#define MIQT_QT_POSITIONING_GEN_QGEOSATELLITEINFOSOURCE_H

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
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QGeoSatelliteInfo QGeoSatelliteInfo;
typedef struct QGeoSatelliteInfoSource QGeoSatelliteInfoSource;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_new(QObject* parent);
void QGeoSatelliteInfoSource_virtbase(QGeoSatelliteInfoSource* src, QObject** outptr_QObject);
QMetaObject* QGeoSatelliteInfoSource_metaObject(const QGeoSatelliteInfoSource* self);
void* QGeoSatelliteInfoSource_metacast(QGeoSatelliteInfoSource* self, const char* param1);
struct miqt_string QGeoSatelliteInfoSource_tr(const char* s);
struct miqt_string QGeoSatelliteInfoSource_trUtf8(const char* s);
QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_createDefaultSource(QObject* parent);
QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_createSource(struct miqt_string sourceName, QObject* parent);
QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_createDefaultSource2(struct miqt_map /* of struct miqt_string to QVariant* */  parameters, QObject* parent);
QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_createSource2(struct miqt_string sourceName, struct miqt_map /* of struct miqt_string to QVariant* */  parameters, QObject* parent);
struct miqt_array /* of struct miqt_string */  QGeoSatelliteInfoSource_availableSources();
struct miqt_string QGeoSatelliteInfoSource_sourceName(const QGeoSatelliteInfoSource* self);
void QGeoSatelliteInfoSource_setUpdateInterval(QGeoSatelliteInfoSource* self, int msec);
int QGeoSatelliteInfoSource_updateInterval(const QGeoSatelliteInfoSource* self);
int QGeoSatelliteInfoSource_minimumUpdateInterval(const QGeoSatelliteInfoSource* self);
int QGeoSatelliteInfoSource_error(const QGeoSatelliteInfoSource* self);
void QGeoSatelliteInfoSource_startUpdates(QGeoSatelliteInfoSource* self);
void QGeoSatelliteInfoSource_stopUpdates(QGeoSatelliteInfoSource* self);
void QGeoSatelliteInfoSource_requestUpdate(QGeoSatelliteInfoSource* self, int timeout);
void QGeoSatelliteInfoSource_satellitesInViewUpdated(QGeoSatelliteInfoSource* self, struct miqt_array /* of QGeoSatelliteInfo* */  satellites);
void QGeoSatelliteInfoSource_connect_satellitesInViewUpdated(QGeoSatelliteInfoSource* self, intptr_t slot);
void QGeoSatelliteInfoSource_satellitesInUseUpdated(QGeoSatelliteInfoSource* self, struct miqt_array /* of QGeoSatelliteInfo* */  satellites);
void QGeoSatelliteInfoSource_connect_satellitesInUseUpdated(QGeoSatelliteInfoSource* self, intptr_t slot);
void QGeoSatelliteInfoSource_requestTimeout(QGeoSatelliteInfoSource* self);
void QGeoSatelliteInfoSource_connect_requestTimeout(QGeoSatelliteInfoSource* self, intptr_t slot);
void QGeoSatelliteInfoSource_errorWithQGeoSatelliteInfoSourceError(QGeoSatelliteInfoSource* self, int param1);
void QGeoSatelliteInfoSource_connect_errorWithQGeoSatelliteInfoSourceError(QGeoSatelliteInfoSource* self, intptr_t slot);
struct miqt_string QGeoSatelliteInfoSource_tr2(const char* s, const char* c);
struct miqt_string QGeoSatelliteInfoSource_tr3(const char* s, const char* c, int n);
struct miqt_string QGeoSatelliteInfoSource_trUtf82(const char* s, const char* c);
struct miqt_string QGeoSatelliteInfoSource_trUtf83(const char* s, const char* c, int n);

bool QGeoSatelliteInfoSource_override_virtual_setUpdateInterval(void* self, intptr_t slot);
void QGeoSatelliteInfoSource_virtualbase_setUpdateInterval(void* self, int msec);
bool QGeoSatelliteInfoSource_override_virtual_minimumUpdateInterval(void* self, intptr_t slot);
int QGeoSatelliteInfoSource_virtualbase_minimumUpdateInterval(const void* self);
bool QGeoSatelliteInfoSource_override_virtual_error(void* self, intptr_t slot);
int QGeoSatelliteInfoSource_virtualbase_error(const void* self);
bool QGeoSatelliteInfoSource_override_virtual_startUpdates(void* self, intptr_t slot);
void QGeoSatelliteInfoSource_virtualbase_startUpdates(void* self);
bool QGeoSatelliteInfoSource_override_virtual_stopUpdates(void* self, intptr_t slot);
void QGeoSatelliteInfoSource_virtualbase_stopUpdates(void* self);
bool QGeoSatelliteInfoSource_override_virtual_requestUpdate(void* self, intptr_t slot);
void QGeoSatelliteInfoSource_virtualbase_requestUpdate(void* self, int timeout);
bool QGeoSatelliteInfoSource_override_virtual_event(void* self, intptr_t slot);
bool QGeoSatelliteInfoSource_virtualbase_event(void* self, QEvent* event);
bool QGeoSatelliteInfoSource_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGeoSatelliteInfoSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGeoSatelliteInfoSource_override_virtual_timerEvent(void* self, intptr_t slot);
void QGeoSatelliteInfoSource_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGeoSatelliteInfoSource_override_virtual_childEvent(void* self, intptr_t slot);
void QGeoSatelliteInfoSource_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGeoSatelliteInfoSource_override_virtual_customEvent(void* self, intptr_t slot);
void QGeoSatelliteInfoSource_virtualbase_customEvent(void* self, QEvent* event);
bool QGeoSatelliteInfoSource_override_virtual_connectNotify(void* self, intptr_t slot);
void QGeoSatelliteInfoSource_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGeoSatelliteInfoSource_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGeoSatelliteInfoSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QGeoSatelliteInfoSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QGeoSatelliteInfoSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QGeoSatelliteInfoSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QGeoSatelliteInfoSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QGeoSatelliteInfoSource_delete(QGeoSatelliteInfoSource* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
