#pragma once
#ifndef MIQT_QT6_POSITIONING_GEN_QGEORECTANGLE_H
#define MIQT_QT6_POSITIONING_GEN_QGEORECTANGLE_H

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
class QGeoRectangle;
class QGeoShape;
#else
typedef struct QGeoCoordinate QGeoCoordinate;
typedef struct QGeoRectangle QGeoRectangle;
typedef struct QGeoShape QGeoShape;
#endif

QGeoRectangle* QGeoRectangle_new();
QGeoRectangle* QGeoRectangle_new2(QGeoCoordinate* center, double degreesWidth, double degreesHeight);
QGeoRectangle* QGeoRectangle_new3(QGeoCoordinate* topLeft, QGeoCoordinate* bottomRight);
QGeoRectangle* QGeoRectangle_new4(struct miqt_array /* of QGeoCoordinate* */  coordinates);
QGeoRectangle* QGeoRectangle_new5(QGeoRectangle* other);
QGeoRectangle* QGeoRectangle_new6(QGeoShape* other);
void QGeoRectangle_virtbase(QGeoRectangle* src, QGeoShape** outptr_QGeoShape);
void QGeoRectangle_operatorAssign(QGeoRectangle* self, QGeoRectangle* other);
void QGeoRectangle_setTopLeft(QGeoRectangle* self, QGeoCoordinate* topLeft);
QGeoCoordinate* QGeoRectangle_topLeft(const QGeoRectangle* self);
void QGeoRectangle_setTopRight(QGeoRectangle* self, QGeoCoordinate* topRight);
QGeoCoordinate* QGeoRectangle_topRight(const QGeoRectangle* self);
void QGeoRectangle_setBottomLeft(QGeoRectangle* self, QGeoCoordinate* bottomLeft);
QGeoCoordinate* QGeoRectangle_bottomLeft(const QGeoRectangle* self);
void QGeoRectangle_setBottomRight(QGeoRectangle* self, QGeoCoordinate* bottomRight);
QGeoCoordinate* QGeoRectangle_bottomRight(const QGeoRectangle* self);
void QGeoRectangle_setCenter(QGeoRectangle* self, QGeoCoordinate* center);
QGeoCoordinate* QGeoRectangle_center(const QGeoRectangle* self);
void QGeoRectangle_setWidth(QGeoRectangle* self, double degreesWidth);
double QGeoRectangle_width(const QGeoRectangle* self);
void QGeoRectangle_setHeight(QGeoRectangle* self, double degreesHeight);
double QGeoRectangle_height(const QGeoRectangle* self);
bool QGeoRectangle_contains(const QGeoRectangle* self, QGeoRectangle* rectangle);
bool QGeoRectangle_intersects(const QGeoRectangle* self, QGeoRectangle* rectangle);
void QGeoRectangle_translate(QGeoRectangle* self, double degreesLatitude, double degreesLongitude);
QGeoRectangle* QGeoRectangle_translated(const QGeoRectangle* self, double degreesLatitude, double degreesLongitude);
void QGeoRectangle_extendRectangle(QGeoRectangle* self, QGeoCoordinate* coordinate);
QGeoRectangle* QGeoRectangle_united(const QGeoRectangle* self, QGeoRectangle* rectangle);
QGeoRectangle* QGeoRectangle_operatorBitwiseOr(const QGeoRectangle* self, QGeoRectangle* rectangle);
void QGeoRectangle_operatorBitwiseOrAssign(QGeoRectangle* self, QGeoRectangle* rectangle);
struct miqt_string QGeoRectangle_toString(const QGeoRectangle* self);

void QGeoRectangle_delete(QGeoRectangle* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
