#pragma once
#ifndef MIQT_QT6_POSITIONING_GEN_QGEOPOSITIONINFOSOURCE_H
#define MIQT_QT6_POSITIONING_GEN_QGEOPOSITIONINFOSOURCE_H

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
class QGeoPositionInfo;
class QGeoPositionInfoSource;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QGeoPositionInfo QGeoPositionInfo;
typedef struct QGeoPositionInfoSource QGeoPositionInfoSource;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QGeoPositionInfoSource* QGeoPositionInfoSource_new(QObject* parent);
void QGeoPositionInfoSource_virtbase(QGeoPositionInfoSource* src, QObject** outptr_QObject);
QMetaObject* QGeoPositionInfoSource_metaObject(const QGeoPositionInfoSource* self);
void* QGeoPositionInfoSource_metacast(QGeoPositionInfoSource* self, const char* param1);
struct miqt_string QGeoPositionInfoSource_tr(const char* s);
void QGeoPositionInfoSource_setUpdateInterval(QGeoPositionInfoSource* self, int msec);
int QGeoPositionInfoSource_updateInterval(const QGeoPositionInfoSource* self);
void QGeoPositionInfoSource_setPreferredPositioningMethods(QGeoPositionInfoSource* self, int methods);
int QGeoPositionInfoSource_preferredPositioningMethods(const QGeoPositionInfoSource* self);
QGeoPositionInfo* QGeoPositionInfoSource_lastKnownPosition(const QGeoPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly);
int QGeoPositionInfoSource_supportedPositioningMethods(const QGeoPositionInfoSource* self);
int QGeoPositionInfoSource_minimumUpdateInterval(const QGeoPositionInfoSource* self);
struct miqt_string QGeoPositionInfoSource_sourceName(const QGeoPositionInfoSource* self);
bool QGeoPositionInfoSource_setBackendProperty(QGeoPositionInfoSource* self, struct miqt_string name, QVariant* value);
QVariant* QGeoPositionInfoSource_backendProperty(const QGeoPositionInfoSource* self, struct miqt_string name);
QGeoPositionInfoSource* QGeoPositionInfoSource_createDefaultSource(QObject* parent);
QGeoPositionInfoSource* QGeoPositionInfoSource_createDefaultSource2(struct miqt_map /* of struct miqt_string to QVariant* */  parameters, QObject* parent);
QGeoPositionInfoSource* QGeoPositionInfoSource_createSource(struct miqt_string sourceName, QObject* parent);
QGeoPositionInfoSource* QGeoPositionInfoSource_createSource2(struct miqt_string sourceName, struct miqt_map /* of struct miqt_string to QVariant* */  parameters, QObject* parent);
struct miqt_array /* of struct miqt_string */  QGeoPositionInfoSource_availableSources();
int QGeoPositionInfoSource_error(const QGeoPositionInfoSource* self);
void QGeoPositionInfoSource_startUpdates(QGeoPositionInfoSource* self);
void QGeoPositionInfoSource_stopUpdates(QGeoPositionInfoSource* self);
void QGeoPositionInfoSource_requestUpdate(QGeoPositionInfoSource* self, int timeout);
void QGeoPositionInfoSource_positionUpdated(QGeoPositionInfoSource* self, QGeoPositionInfo* update);
void QGeoPositionInfoSource_connect_positionUpdated(QGeoPositionInfoSource* self, intptr_t slot);
void QGeoPositionInfoSource_errorOccurred(QGeoPositionInfoSource* self, int param1);
void QGeoPositionInfoSource_connect_errorOccurred(QGeoPositionInfoSource* self, intptr_t slot);
void QGeoPositionInfoSource_supportedPositioningMethodsChanged(QGeoPositionInfoSource* self);
void QGeoPositionInfoSource_connect_supportedPositioningMethodsChanged(QGeoPositionInfoSource* self, intptr_t slot);
struct miqt_string QGeoPositionInfoSource_tr2(const char* s, const char* c);
struct miqt_string QGeoPositionInfoSource_tr3(const char* s, const char* c, int n);

bool QGeoPositionInfoSource_override_virtual_setUpdateInterval(void* self, intptr_t slot);
void QGeoPositionInfoSource_virtualbase_setUpdateInterval(void* self, int msec);
bool QGeoPositionInfoSource_override_virtual_setPreferredPositioningMethods(void* self, intptr_t slot);
void QGeoPositionInfoSource_virtualbase_setPreferredPositioningMethods(void* self, int methods);
bool QGeoPositionInfoSource_override_virtual_lastKnownPosition(void* self, intptr_t slot);
QGeoPositionInfo* QGeoPositionInfoSource_virtualbase_lastKnownPosition(const void* self, bool fromSatellitePositioningMethodsOnly);
bool QGeoPositionInfoSource_override_virtual_supportedPositioningMethods(void* self, intptr_t slot);
int QGeoPositionInfoSource_virtualbase_supportedPositioningMethods(const void* self);
bool QGeoPositionInfoSource_override_virtual_minimumUpdateInterval(void* self, intptr_t slot);
int QGeoPositionInfoSource_virtualbase_minimumUpdateInterval(const void* self);
bool QGeoPositionInfoSource_override_virtual_setBackendProperty(void* self, intptr_t slot);
bool QGeoPositionInfoSource_virtualbase_setBackendProperty(void* self, struct miqt_string name, QVariant* value);
bool QGeoPositionInfoSource_override_virtual_backendProperty(void* self, intptr_t slot);
QVariant* QGeoPositionInfoSource_virtualbase_backendProperty(const void* self, struct miqt_string name);
bool QGeoPositionInfoSource_override_virtual_error(void* self, intptr_t slot);
int QGeoPositionInfoSource_virtualbase_error(const void* self);
bool QGeoPositionInfoSource_override_virtual_startUpdates(void* self, intptr_t slot);
void QGeoPositionInfoSource_virtualbase_startUpdates(void* self);
bool QGeoPositionInfoSource_override_virtual_stopUpdates(void* self, intptr_t slot);
void QGeoPositionInfoSource_virtualbase_stopUpdates(void* self);
bool QGeoPositionInfoSource_override_virtual_requestUpdate(void* self, intptr_t slot);
void QGeoPositionInfoSource_virtualbase_requestUpdate(void* self, int timeout);
bool QGeoPositionInfoSource_override_virtual_event(void* self, intptr_t slot);
bool QGeoPositionInfoSource_virtualbase_event(void* self, QEvent* event);
bool QGeoPositionInfoSource_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGeoPositionInfoSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGeoPositionInfoSource_override_virtual_timerEvent(void* self, intptr_t slot);
void QGeoPositionInfoSource_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGeoPositionInfoSource_override_virtual_childEvent(void* self, intptr_t slot);
void QGeoPositionInfoSource_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGeoPositionInfoSource_override_virtual_customEvent(void* self, intptr_t slot);
void QGeoPositionInfoSource_virtualbase_customEvent(void* self, QEvent* event);
bool QGeoPositionInfoSource_override_virtual_connectNotify(void* self, intptr_t slot);
void QGeoPositionInfoSource_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGeoPositionInfoSource_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGeoPositionInfoSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QGeoPositionInfoSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QGeoPositionInfoSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QGeoPositionInfoSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QGeoPositionInfoSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QGeoPositionInfoSource_delete(QGeoPositionInfoSource* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
