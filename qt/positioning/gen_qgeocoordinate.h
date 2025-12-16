#pragma once
#ifndef MIQT_QT_POSITIONING_GEN_QGEOCOORDINATE_H
#define MIQT_QT_POSITIONING_GEN_QGEOCOORDINATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGeoCoordinate;
#else
typedef struct QGeoCoordinate QGeoCoordinate;
#endif

QGeoCoordinate* QGeoCoordinate_new();
QGeoCoordinate* QGeoCoordinate_new2(double latitude, double longitude);
QGeoCoordinate* QGeoCoordinate_new3(double latitude, double longitude, double altitude);
QGeoCoordinate* QGeoCoordinate_new4(QGeoCoordinate* other);
void QGeoCoordinate_operatorAssign(QGeoCoordinate* self, QGeoCoordinate* other);
bool QGeoCoordinate_operatorEqual(const QGeoCoordinate* self, QGeoCoordinate* other);
bool QGeoCoordinate_operatorNotEqual(const QGeoCoordinate* self, QGeoCoordinate* other);
bool QGeoCoordinate_isValid(const QGeoCoordinate* self);
int QGeoCoordinate_type(const QGeoCoordinate* self);
void QGeoCoordinate_setLatitude(QGeoCoordinate* self, double latitude);
double QGeoCoordinate_latitude(const QGeoCoordinate* self);
void QGeoCoordinate_setLongitude(QGeoCoordinate* self, double longitude);
double QGeoCoordinate_longitude(const QGeoCoordinate* self);
void QGeoCoordinate_setAltitude(QGeoCoordinate* self, double altitude);
double QGeoCoordinate_altitude(const QGeoCoordinate* self);
double QGeoCoordinate_distanceTo(const QGeoCoordinate* self, QGeoCoordinate* other);
double QGeoCoordinate_azimuthTo(const QGeoCoordinate* self, QGeoCoordinate* other);
QGeoCoordinate* QGeoCoordinate_atDistanceAndAzimuth(const QGeoCoordinate* self, double distance, double azimuth);
struct miqt_string QGeoCoordinate_toString(const QGeoCoordinate* self);
QGeoCoordinate* QGeoCoordinate_atDistanceAndAzimuth2(const QGeoCoordinate* self, double distance, double azimuth, double distanceUp);
struct miqt_string QGeoCoordinate_toStringWithFormat(const QGeoCoordinate* self, int format);

void QGeoCoordinate_delete(QGeoCoordinate* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
