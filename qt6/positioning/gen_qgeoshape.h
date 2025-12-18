#pragma once
#ifndef MIQT_QT6_POSITIONING_GEN_QGEOSHAPE_H
#define MIQT_QT6_POSITIONING_GEN_QGEOSHAPE_H

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

QGeoShape* QGeoShape_new();
QGeoShape* QGeoShape_new2(QGeoShape* other);
int QGeoShape_type(const QGeoShape* self);
bool QGeoShape_isValid(const QGeoShape* self);
bool QGeoShape_isEmpty(const QGeoShape* self);
bool QGeoShape_contains(const QGeoShape* self, QGeoCoordinate* coordinate);
QGeoRectangle* QGeoShape_boundingGeoRectangle(const QGeoShape* self);
QGeoCoordinate* QGeoShape_center(const QGeoShape* self);
void QGeoShape_operatorAssign(QGeoShape* self, QGeoShape* other);
struct miqt_string QGeoShape_toString(const QGeoShape* self);

void QGeoShape_delete(QGeoShape* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
