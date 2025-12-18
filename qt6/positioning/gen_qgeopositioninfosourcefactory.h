#pragma once
#ifndef MIQT_QT6_POSITIONING_GEN_QGEOPOSITIONINFOSOURCEFACTORY_H
#define MIQT_QT6_POSITIONING_GEN_QGEOPOSITIONINFOSOURCEFACTORY_H

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
class QGeoSatelliteInfoSource;
class QObject;
class QVariant;
#else
typedef struct QGeoAreaMonitorSource QGeoAreaMonitorSource;
typedef struct QGeoPositionInfoSource QGeoPositionInfoSource;
typedef struct QGeoPositionInfoSourceFactory QGeoPositionInfoSourceFactory;
typedef struct QGeoSatelliteInfoSource QGeoSatelliteInfoSource;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

QGeoPositionInfoSource* QGeoPositionInfoSourceFactory_positionInfoSource(QGeoPositionInfoSourceFactory* self, QObject* parent, struct miqt_map /* of struct miqt_string to QVariant* */  parameters);
QGeoSatelliteInfoSource* QGeoPositionInfoSourceFactory_satelliteInfoSource(QGeoPositionInfoSourceFactory* self, QObject* parent, struct miqt_map /* of struct miqt_string to QVariant* */  parameters);
QGeoAreaMonitorSource* QGeoPositionInfoSourceFactory_areaMonitor(QGeoPositionInfoSourceFactory* self, QObject* parent, struct miqt_map /* of struct miqt_string to QVariant* */  parameters);
void QGeoPositionInfoSourceFactory_operatorAssign(QGeoPositionInfoSourceFactory* self, QGeoPositionInfoSourceFactory* param1);

void QGeoPositionInfoSourceFactory_delete(QGeoPositionInfoSourceFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
