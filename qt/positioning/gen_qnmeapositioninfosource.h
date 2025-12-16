#pragma once
#ifndef MIQT_QT_POSITIONING_GEN_QNMEAPOSITIONINFOSOURCE_H
#define MIQT_QT_POSITIONING_GEN_QNMEAPOSITIONINFOSOURCE_H

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
class QIODevice;
class QMetaMethod;
class QMetaObject;
class QNmeaPositionInfoSource;
class QObject;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QGeoPositionInfo QGeoPositionInfo;
typedef struct QGeoPositionInfoSource QGeoPositionInfoSource;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QNmeaPositionInfoSource QNmeaPositionInfoSource;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QNmeaPositionInfoSource* QNmeaPositionInfoSource_new(int updateMode);
QNmeaPositionInfoSource* QNmeaPositionInfoSource_new2(int updateMode, QObject* parent);
void QNmeaPositionInfoSource_virtbase(QNmeaPositionInfoSource* src, QGeoPositionInfoSource** outptr_QGeoPositionInfoSource);
QMetaObject* QNmeaPositionInfoSource_metaObject(const QNmeaPositionInfoSource* self);
void* QNmeaPositionInfoSource_metacast(QNmeaPositionInfoSource* self, const char* param1);
struct miqt_string QNmeaPositionInfoSource_tr(const char* s);
struct miqt_string QNmeaPositionInfoSource_trUtf8(const char* s);
void QNmeaPositionInfoSource_setUserEquivalentRangeError(QNmeaPositionInfoSource* self, double uere);
double QNmeaPositionInfoSource_userEquivalentRangeError(const QNmeaPositionInfoSource* self);
int QNmeaPositionInfoSource_updateMode(const QNmeaPositionInfoSource* self);
void QNmeaPositionInfoSource_setDevice(QNmeaPositionInfoSource* self, QIODevice* source);
QIODevice* QNmeaPositionInfoSource_device(const QNmeaPositionInfoSource* self);
void QNmeaPositionInfoSource_setUpdateInterval(QNmeaPositionInfoSource* self, int msec);
QGeoPositionInfo* QNmeaPositionInfoSource_lastKnownPosition(const QNmeaPositionInfoSource* self);
int QNmeaPositionInfoSource_supportedPositioningMethods(const QNmeaPositionInfoSource* self);
int QNmeaPositionInfoSource_minimumUpdateInterval(const QNmeaPositionInfoSource* self);
int QNmeaPositionInfoSource_error(const QNmeaPositionInfoSource* self);
void QNmeaPositionInfoSource_startUpdates(QNmeaPositionInfoSource* self);
void QNmeaPositionInfoSource_stopUpdates(QNmeaPositionInfoSource* self);
void QNmeaPositionInfoSource_requestUpdate(QNmeaPositionInfoSource* self);
bool QNmeaPositionInfoSource_parsePosInfoFromNmeaData(QNmeaPositionInfoSource* self, const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix);
struct miqt_string QNmeaPositionInfoSource_tr2(const char* s, const char* c);
struct miqt_string QNmeaPositionInfoSource_tr3(const char* s, const char* c, int n);
struct miqt_string QNmeaPositionInfoSource_trUtf82(const char* s, const char* c);
struct miqt_string QNmeaPositionInfoSource_trUtf83(const char* s, const char* c, int n);
QGeoPositionInfo* QNmeaPositionInfoSource_lastKnownPositionWithFromSatellitePositioningMethodsOnly(const QNmeaPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly);
void QNmeaPositionInfoSource_requestUpdateWithTimeout(QNmeaPositionInfoSource* self, int timeout);

bool QNmeaPositionInfoSource_override_virtual_parsePosInfoFromNmeaData(void* self, intptr_t slot);
bool QNmeaPositionInfoSource_virtualbase_parsePosInfoFromNmeaData(void* self, const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix);
bool QNmeaPositionInfoSource_override_virtual_setUpdateInterval(void* self, intptr_t slot);
void QNmeaPositionInfoSource_virtualbase_setUpdateInterval(void* self, int msec);
bool QNmeaPositionInfoSource_override_virtual_setPreferredPositioningMethods(void* self, intptr_t slot);
void QNmeaPositionInfoSource_virtualbase_setPreferredPositioningMethods(void* self, int methods);
bool QNmeaPositionInfoSource_override_virtual_lastKnownPosition(void* self, intptr_t slot);
QGeoPositionInfo* QNmeaPositionInfoSource_virtualbase_lastKnownPosition(const void* self, bool fromSatellitePositioningMethodsOnly);
bool QNmeaPositionInfoSource_override_virtual_supportedPositioningMethods(void* self, intptr_t slot);
int QNmeaPositionInfoSource_virtualbase_supportedPositioningMethods(const void* self);
bool QNmeaPositionInfoSource_override_virtual_minimumUpdateInterval(void* self, intptr_t slot);
int QNmeaPositionInfoSource_virtualbase_minimumUpdateInterval(const void* self);
bool QNmeaPositionInfoSource_override_virtual_error(void* self, intptr_t slot);
int QNmeaPositionInfoSource_virtualbase_error(const void* self);
bool QNmeaPositionInfoSource_override_virtual_startUpdates(void* self, intptr_t slot);
void QNmeaPositionInfoSource_virtualbase_startUpdates(void* self);
bool QNmeaPositionInfoSource_override_virtual_stopUpdates(void* self, intptr_t slot);
void QNmeaPositionInfoSource_virtualbase_stopUpdates(void* self);
bool QNmeaPositionInfoSource_override_virtual_requestUpdate(void* self, intptr_t slot);
void QNmeaPositionInfoSource_virtualbase_requestUpdate(void* self, int timeout);
bool QNmeaPositionInfoSource_override_virtual_event(void* self, intptr_t slot);
bool QNmeaPositionInfoSource_virtualbase_event(void* self, QEvent* event);
bool QNmeaPositionInfoSource_override_virtual_eventFilter(void* self, intptr_t slot);
bool QNmeaPositionInfoSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QNmeaPositionInfoSource_override_virtual_timerEvent(void* self, intptr_t slot);
void QNmeaPositionInfoSource_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QNmeaPositionInfoSource_override_virtual_childEvent(void* self, intptr_t slot);
void QNmeaPositionInfoSource_virtualbase_childEvent(void* self, QChildEvent* event);
bool QNmeaPositionInfoSource_override_virtual_customEvent(void* self, intptr_t slot);
void QNmeaPositionInfoSource_virtualbase_customEvent(void* self, QEvent* event);
bool QNmeaPositionInfoSource_override_virtual_connectNotify(void* self, intptr_t slot);
void QNmeaPositionInfoSource_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QNmeaPositionInfoSource_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QNmeaPositionInfoSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QNmeaPositionInfoSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QNmeaPositionInfoSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QNmeaPositionInfoSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QNmeaPositionInfoSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QNmeaPositionInfoSource_delete(QNmeaPositionInfoSource* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
