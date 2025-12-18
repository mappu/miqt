#pragma once
#ifndef MIQT_QT6_POSITIONING_GEN_QGEOSATELLITEINFO_H
#define MIQT_QT6_POSITIONING_GEN_QGEOSATELLITEINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGeoSatelliteInfo;
#else
typedef struct QGeoSatelliteInfo QGeoSatelliteInfo;
#endif

QGeoSatelliteInfo* QGeoSatelliteInfo_new();
QGeoSatelliteInfo* QGeoSatelliteInfo_new2(QGeoSatelliteInfo* other);
void QGeoSatelliteInfo_operatorAssign(QGeoSatelliteInfo* self, QGeoSatelliteInfo* other);
void QGeoSatelliteInfo_swap(QGeoSatelliteInfo* self, QGeoSatelliteInfo* other);
void QGeoSatelliteInfo_setSatelliteSystem(QGeoSatelliteInfo* self, int system);
int QGeoSatelliteInfo_satelliteSystem(const QGeoSatelliteInfo* self);
void QGeoSatelliteInfo_setSatelliteIdentifier(QGeoSatelliteInfo* self, int satId);
int QGeoSatelliteInfo_satelliteIdentifier(const QGeoSatelliteInfo* self);
void QGeoSatelliteInfo_setSignalStrength(QGeoSatelliteInfo* self, int signalStrength);
int QGeoSatelliteInfo_signalStrength(const QGeoSatelliteInfo* self);
void QGeoSatelliteInfo_setAttribute(QGeoSatelliteInfo* self, int attribute, double value);
double QGeoSatelliteInfo_attribute(const QGeoSatelliteInfo* self, int attribute);
void QGeoSatelliteInfo_removeAttribute(QGeoSatelliteInfo* self, int attribute);
bool QGeoSatelliteInfo_hasAttribute(const QGeoSatelliteInfo* self, int attribute);
void QGeoSatelliteInfo_detach(QGeoSatelliteInfo* self);

void QGeoSatelliteInfo_delete(QGeoSatelliteInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
