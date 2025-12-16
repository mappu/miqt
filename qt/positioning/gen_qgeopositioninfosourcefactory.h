#pragma once
#ifndef MIQT_QT_POSITIONING_GEN_QGEOPOSITIONINFOSOURCEFACTORY_H
#define MIQT_QT_POSITIONING_GEN_QGEOPOSITIONINFOSOURCEFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGeoAreaMonitorSource;
class QGeoPositionInfoSource;
class QGeoPositionInfoSourceFactory;
class QGeoPositionInfoSourceFactoryV2;
class QGeoSatelliteInfoSource;
class QObject;
class QVariant;
#else
typedef struct QGeoAreaMonitorSource QGeoAreaMonitorSource;
typedef struct QGeoPositionInfoSource QGeoPositionInfoSource;
typedef struct QGeoPositionInfoSourceFactory QGeoPositionInfoSourceFactory;
typedef struct QGeoPositionInfoSourceFactoryV2 QGeoPositionInfoSourceFactoryV2;
typedef struct QGeoSatelliteInfoSource QGeoSatelliteInfoSource;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

QGeoPositionInfoSourceFactory* QGeoPositionInfoSourceFactory_new(QGeoPositionInfoSourceFactory* param1);
QGeoPositionInfoSource* QGeoPositionInfoSourceFactory_positionInfoSource(QGeoPositionInfoSourceFactory* self, QObject* parent);
QGeoSatelliteInfoSource* QGeoPositionInfoSourceFactory_satelliteInfoSource(QGeoPositionInfoSourceFactory* self, QObject* parent);
QGeoAreaMonitorSource* QGeoPositionInfoSourceFactory_areaMonitor(QGeoPositionInfoSourceFactory* self, QObject* parent);
void QGeoPositionInfoSourceFactory_operatorAssign(QGeoPositionInfoSourceFactory* self, QGeoPositionInfoSourceFactory* param1);

bool QGeoPositionInfoSourceFactory_override_virtual_positionInfoSource(void* self, intptr_t slot);
QGeoPositionInfoSource* QGeoPositionInfoSourceFactory_virtualbase_positionInfoSource(void* self, QObject* parent);
bool QGeoPositionInfoSourceFactory_override_virtual_satelliteInfoSource(void* self, intptr_t slot);
QGeoSatelliteInfoSource* QGeoPositionInfoSourceFactory_virtualbase_satelliteInfoSource(void* self, QObject* parent);
bool QGeoPositionInfoSourceFactory_override_virtual_areaMonitor(void* self, intptr_t slot);
QGeoAreaMonitorSource* QGeoPositionInfoSourceFactory_virtualbase_areaMonitor(void* self, QObject* parent);

void QGeoPositionInfoSourceFactory_delete(QGeoPositionInfoSourceFactory* self);

QGeoPositionInfoSourceFactoryV2* QGeoPositionInfoSourceFactoryV2_new(QGeoPositionInfoSourceFactoryV2* param1);
void QGeoPositionInfoSourceFactoryV2_virtbase(QGeoPositionInfoSourceFactoryV2* src, QGeoPositionInfoSourceFactory** outptr_QGeoPositionInfoSourceFactory);
QGeoPositionInfoSource* QGeoPositionInfoSourceFactoryV2_positionInfoSourceWithParameters(QGeoPositionInfoSourceFactoryV2* self, QObject* parent, struct miqt_map /* of struct miqt_string to QVariant* */  parameters);
QGeoSatelliteInfoSource* QGeoPositionInfoSourceFactoryV2_satelliteInfoSourceWithParameters(QGeoPositionInfoSourceFactoryV2* self, QObject* parent, struct miqt_map /* of struct miqt_string to QVariant* */  parameters);
QGeoAreaMonitorSource* QGeoPositionInfoSourceFactoryV2_areaMonitorWithParameters(QGeoPositionInfoSourceFactoryV2* self, QObject* parent, struct miqt_map /* of struct miqt_string to QVariant* */  parameters);
void QGeoPositionInfoSourceFactoryV2_operatorAssign(QGeoPositionInfoSourceFactoryV2* self, QGeoPositionInfoSourceFactoryV2* param1);

bool QGeoPositionInfoSourceFactoryV2_override_virtual_positionInfoSourceWithParameters(void* self, intptr_t slot);
QGeoPositionInfoSource* QGeoPositionInfoSourceFactoryV2_virtualbase_positionInfoSourceWithParameters(void* self, QObject* parent, struct miqt_map /* of struct miqt_string to QVariant* */  parameters);
bool QGeoPositionInfoSourceFactoryV2_override_virtual_satelliteInfoSourceWithParameters(void* self, intptr_t slot);
QGeoSatelliteInfoSource* QGeoPositionInfoSourceFactoryV2_virtualbase_satelliteInfoSourceWithParameters(void* self, QObject* parent, struct miqt_map /* of struct miqt_string to QVariant* */  parameters);
bool QGeoPositionInfoSourceFactoryV2_override_virtual_areaMonitorWithParameters(void* self, intptr_t slot);
QGeoAreaMonitorSource* QGeoPositionInfoSourceFactoryV2_virtualbase_areaMonitorWithParameters(void* self, QObject* parent, struct miqt_map /* of struct miqt_string to QVariant* */  parameters);
bool QGeoPositionInfoSourceFactoryV2_override_virtual_positionInfoSource(void* self, intptr_t slot);
QGeoPositionInfoSource* QGeoPositionInfoSourceFactoryV2_virtualbase_positionInfoSource(void* self, QObject* parent);
bool QGeoPositionInfoSourceFactoryV2_override_virtual_satelliteInfoSource(void* self, intptr_t slot);
QGeoSatelliteInfoSource* QGeoPositionInfoSourceFactoryV2_virtualbase_satelliteInfoSource(void* self, QObject* parent);
bool QGeoPositionInfoSourceFactoryV2_override_virtual_areaMonitor(void* self, intptr_t slot);
QGeoAreaMonitorSource* QGeoPositionInfoSourceFactoryV2_virtualbase_areaMonitor(void* self, QObject* parent);

void QGeoPositionInfoSourceFactoryV2_delete(QGeoPositionInfoSourceFactoryV2* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
