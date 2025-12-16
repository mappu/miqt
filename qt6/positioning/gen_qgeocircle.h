#pragma once
#ifndef MIQT_QT6_POSITIONING_GEN_QGEOCIRCLE_H
#define MIQT_QT6_POSITIONING_GEN_QGEOCIRCLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGeoCircle;
class QGeoCoordinate;
class QGeoShape;
#else
typedef struct QGeoCircle QGeoCircle;
typedef struct QGeoCoordinate QGeoCoordinate;
typedef struct QGeoShape QGeoShape;
#endif

QGeoCircle* QGeoCircle_new();
QGeoCircle* QGeoCircle_new2(QGeoCoordinate* center);
QGeoCircle* QGeoCircle_new3(QGeoCircle* other);
QGeoCircle* QGeoCircle_new4(QGeoShape* other);
QGeoCircle* QGeoCircle_new5(QGeoCoordinate* center, double radius);
void QGeoCircle_virtbase(QGeoCircle* src, QGeoShape** outptr_QGeoShape);
void QGeoCircle_operatorAssign(QGeoCircle* self, QGeoCircle* other);
void QGeoCircle_setCenter(QGeoCircle* self, QGeoCoordinate* center);
QGeoCoordinate* QGeoCircle_center(const QGeoCircle* self);
void QGeoCircle_setRadius(QGeoCircle* self, double radius);
double QGeoCircle_radius(const QGeoCircle* self);
void QGeoCircle_translate(QGeoCircle* self, double degreesLatitude, double degreesLongitude);
QGeoCircle* QGeoCircle_translated(const QGeoCircle* self, double degreesLatitude, double degreesLongitude);
void QGeoCircle_extendCircle(QGeoCircle* self, QGeoCoordinate* coordinate);
struct miqt_string QGeoCircle_toString(const QGeoCircle* self);

void QGeoCircle_delete(QGeoCircle* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
