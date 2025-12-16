#pragma once
#ifndef MIQT_QT6_POSITIONING_GEN_QGEOAREAMONITORSOURCE_H
#define MIQT_QT6_POSITIONING_GEN_QGEOAREAMONITORSOURCE_H

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
class QGeoAreaMonitorInfo;
class QGeoAreaMonitorSource;
class QGeoPositionInfo;
class QGeoPositionInfoSource;
class QGeoShape;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QGeoAreaMonitorInfo QGeoAreaMonitorInfo;
typedef struct QGeoAreaMonitorSource QGeoAreaMonitorSource;
typedef struct QGeoPositionInfo QGeoPositionInfo;
typedef struct QGeoPositionInfoSource QGeoPositionInfoSource;
typedef struct QGeoShape QGeoShape;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QGeoAreaMonitorSource* QGeoAreaMonitorSource_new(QObject* parent);
void QGeoAreaMonitorSource_virtbase(QGeoAreaMonitorSource* src, QObject** outptr_QObject);
QMetaObject* QGeoAreaMonitorSource_metaObject(const QGeoAreaMonitorSource* self);
void* QGeoAreaMonitorSource_metacast(QGeoAreaMonitorSource* self, const char* param1);
struct miqt_string QGeoAreaMonitorSource_tr(const char* s);
QGeoAreaMonitorSource* QGeoAreaMonitorSource_createDefaultSource(QObject* parent);
QGeoAreaMonitorSource* QGeoAreaMonitorSource_createSource(struct miqt_string sourceName, QObject* parent);
struct miqt_array /* of struct miqt_string */  QGeoAreaMonitorSource_availableSources();
void QGeoAreaMonitorSource_setPositionInfoSource(QGeoAreaMonitorSource* self, QGeoPositionInfoSource* source);
QGeoPositionInfoSource* QGeoAreaMonitorSource_positionInfoSource(const QGeoAreaMonitorSource* self);
struct miqt_string QGeoAreaMonitorSource_sourceName(const QGeoAreaMonitorSource* self);
int QGeoAreaMonitorSource_error(const QGeoAreaMonitorSource* self);
int QGeoAreaMonitorSource_supportedAreaMonitorFeatures(const QGeoAreaMonitorSource* self);
bool QGeoAreaMonitorSource_startMonitoring(QGeoAreaMonitorSource* self, QGeoAreaMonitorInfo* monitor);
bool QGeoAreaMonitorSource_stopMonitoring(QGeoAreaMonitorSource* self, QGeoAreaMonitorInfo* monitor);
bool QGeoAreaMonitorSource_requestUpdate(QGeoAreaMonitorSource* self, QGeoAreaMonitorInfo* monitor, const char* signal);
struct miqt_array /* of QGeoAreaMonitorInfo* */  QGeoAreaMonitorSource_activeMonitors(const QGeoAreaMonitorSource* self);
struct miqt_array /* of QGeoAreaMonitorInfo* */  QGeoAreaMonitorSource_activeMonitorsWithLookupArea(const QGeoAreaMonitorSource* self, QGeoShape* lookupArea);
bool QGeoAreaMonitorSource_setBackendProperty(QGeoAreaMonitorSource* self, struct miqt_string name, QVariant* value);
QVariant* QGeoAreaMonitorSource_backendProperty(const QGeoAreaMonitorSource* self, struct miqt_string name);
void QGeoAreaMonitorSource_areaEntered(QGeoAreaMonitorSource* self, QGeoAreaMonitorInfo* monitor, QGeoPositionInfo* update);
void QGeoAreaMonitorSource_connect_areaEntered(QGeoAreaMonitorSource* self, intptr_t slot);
void QGeoAreaMonitorSource_areaExited(QGeoAreaMonitorSource* self, QGeoAreaMonitorInfo* monitor, QGeoPositionInfo* update);
void QGeoAreaMonitorSource_connect_areaExited(QGeoAreaMonitorSource* self, intptr_t slot);
void QGeoAreaMonitorSource_monitorExpired(QGeoAreaMonitorSource* self, QGeoAreaMonitorInfo* monitor);
void QGeoAreaMonitorSource_connect_monitorExpired(QGeoAreaMonitorSource* self, intptr_t slot);
void QGeoAreaMonitorSource_errorOccurred(QGeoAreaMonitorSource* self, int error);
void QGeoAreaMonitorSource_connect_errorOccurred(QGeoAreaMonitorSource* self, intptr_t slot);
struct miqt_string QGeoAreaMonitorSource_tr2(const char* s, const char* c);
struct miqt_string QGeoAreaMonitorSource_tr3(const char* s, const char* c, int n);

bool QGeoAreaMonitorSource_override_virtual_setPositionInfoSource(void* self, intptr_t slot);
void QGeoAreaMonitorSource_virtualbase_setPositionInfoSource(void* self, QGeoPositionInfoSource* source);
bool QGeoAreaMonitorSource_override_virtual_positionInfoSource(void* self, intptr_t slot);
QGeoPositionInfoSource* QGeoAreaMonitorSource_virtualbase_positionInfoSource(const void* self);
bool QGeoAreaMonitorSource_override_virtual_error(void* self, intptr_t slot);
int QGeoAreaMonitorSource_virtualbase_error(const void* self);
bool QGeoAreaMonitorSource_override_virtual_supportedAreaMonitorFeatures(void* self, intptr_t slot);
int QGeoAreaMonitorSource_virtualbase_supportedAreaMonitorFeatures(const void* self);
bool QGeoAreaMonitorSource_override_virtual_startMonitoring(void* self, intptr_t slot);
bool QGeoAreaMonitorSource_virtualbase_startMonitoring(void* self, QGeoAreaMonitorInfo* monitor);
bool QGeoAreaMonitorSource_override_virtual_stopMonitoring(void* self, intptr_t slot);
bool QGeoAreaMonitorSource_virtualbase_stopMonitoring(void* self, QGeoAreaMonitorInfo* monitor);
bool QGeoAreaMonitorSource_override_virtual_requestUpdate(void* self, intptr_t slot);
bool QGeoAreaMonitorSource_virtualbase_requestUpdate(void* self, QGeoAreaMonitorInfo* monitor, const char* signal);
bool QGeoAreaMonitorSource_override_virtual_activeMonitors(void* self, intptr_t slot);
struct miqt_array /* of QGeoAreaMonitorInfo* */  QGeoAreaMonitorSource_virtualbase_activeMonitors(const void* self);
bool QGeoAreaMonitorSource_override_virtual_activeMonitorsWithLookupArea(void* self, intptr_t slot);
struct miqt_array /* of QGeoAreaMonitorInfo* */  QGeoAreaMonitorSource_virtualbase_activeMonitorsWithLookupArea(const void* self, QGeoShape* lookupArea);
bool QGeoAreaMonitorSource_override_virtual_setBackendProperty(void* self, intptr_t slot);
bool QGeoAreaMonitorSource_virtualbase_setBackendProperty(void* self, struct miqt_string name, QVariant* value);
bool QGeoAreaMonitorSource_override_virtual_backendProperty(void* self, intptr_t slot);
QVariant* QGeoAreaMonitorSource_virtualbase_backendProperty(const void* self, struct miqt_string name);
bool QGeoAreaMonitorSource_override_virtual_event(void* self, intptr_t slot);
bool QGeoAreaMonitorSource_virtualbase_event(void* self, QEvent* event);
bool QGeoAreaMonitorSource_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGeoAreaMonitorSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGeoAreaMonitorSource_override_virtual_timerEvent(void* self, intptr_t slot);
void QGeoAreaMonitorSource_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGeoAreaMonitorSource_override_virtual_childEvent(void* self, intptr_t slot);
void QGeoAreaMonitorSource_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGeoAreaMonitorSource_override_virtual_customEvent(void* self, intptr_t slot);
void QGeoAreaMonitorSource_virtualbase_customEvent(void* self, QEvent* event);
bool QGeoAreaMonitorSource_override_virtual_connectNotify(void* self, intptr_t slot);
void QGeoAreaMonitorSource_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGeoAreaMonitorSource_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGeoAreaMonitorSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QGeoAreaMonitorSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QGeoAreaMonitorSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QGeoAreaMonitorSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QGeoAreaMonitorSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QGeoAreaMonitorSource_delete(QGeoAreaMonitorSource* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
