#pragma once
#ifndef MIQT_QT_POSITIONING_GEN_QGEOPOLYGON_H
#define MIQT_QT_POSITIONING_GEN_QGEOPOLYGON_H

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
class QGeoPolygon;
class QGeoShape;
class QVariant;
#else
typedef struct QGeoCoordinate QGeoCoordinate;
typedef struct QGeoPolygon QGeoPolygon;
typedef struct QGeoShape QGeoShape;
typedef struct QVariant QVariant;
#endif

QGeoPolygon* QGeoPolygon_new();
QGeoPolygon* QGeoPolygon_new2(struct miqt_array /* of QGeoCoordinate* */  path);
QGeoPolygon* QGeoPolygon_new3(QGeoPolygon* other);
QGeoPolygon* QGeoPolygon_new4(QGeoShape* other);
void QGeoPolygon_virtbase(QGeoPolygon* src, QGeoShape** outptr_QGeoShape);
void QGeoPolygon_operatorAssign(QGeoPolygon* self, QGeoPolygon* other);
bool QGeoPolygon_operatorEqual(const QGeoPolygon* self, QGeoPolygon* other);
bool QGeoPolygon_operatorNotEqual(const QGeoPolygon* self, QGeoPolygon* other);
void QGeoPolygon_setPath(QGeoPolygon* self, struct miqt_array /* of QGeoCoordinate* */  path);
struct miqt_array /* of QGeoCoordinate* */  QGeoPolygon_path(const QGeoPolygon* self);
void QGeoPolygon_addHole(QGeoPolygon* self, QVariant* holePath);
void QGeoPolygon_addHoleWithHolePath(QGeoPolygon* self, struct miqt_array /* of QGeoCoordinate* */  holePath);
struct miqt_array /* of QVariant* */  QGeoPolygon_hole(const QGeoPolygon* self, int index);
struct miqt_array /* of QGeoCoordinate* */  QGeoPolygon_holePath(const QGeoPolygon* self, int index);
void QGeoPolygon_removeHole(QGeoPolygon* self, int index);
int QGeoPolygon_holesCount(const QGeoPolygon* self);
void QGeoPolygon_translate(QGeoPolygon* self, double degreesLatitude, double degreesLongitude);
QGeoPolygon* QGeoPolygon_translated(const QGeoPolygon* self, double degreesLatitude, double degreesLongitude);
double QGeoPolygon_length(const QGeoPolygon* self);
int QGeoPolygon_size(const QGeoPolygon* self);
void QGeoPolygon_addCoordinate(QGeoPolygon* self, QGeoCoordinate* coordinate);
void QGeoPolygon_insertCoordinate(QGeoPolygon* self, int index, QGeoCoordinate* coordinate);
void QGeoPolygon_replaceCoordinate(QGeoPolygon* self, int index, QGeoCoordinate* coordinate);
QGeoCoordinate* QGeoPolygon_coordinateAt(const QGeoPolygon* self, int index);
bool QGeoPolygon_containsCoordinate(const QGeoPolygon* self, QGeoCoordinate* coordinate);
void QGeoPolygon_removeCoordinate(QGeoPolygon* self, QGeoCoordinate* coordinate);
void QGeoPolygon_removeCoordinateWithIndex(QGeoPolygon* self, int index);
struct miqt_string QGeoPolygon_toString(const QGeoPolygon* self);
double QGeoPolygon_lengthWithIndexFrom(const QGeoPolygon* self, int indexFrom);
double QGeoPolygon_length2(const QGeoPolygon* self, int indexFrom, int indexTo);

void QGeoPolygon_delete(QGeoPolygon* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
