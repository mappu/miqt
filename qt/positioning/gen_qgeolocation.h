#pragma once
#ifndef MIQT_QT_POSITIONING_GEN_QGEOLOCATION_H
#define MIQT_QT_POSITIONING_GEN_QGEOLOCATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGeoAddress;
class QGeoCoordinate;
class QGeoLocation;
class QGeoRectangle;
class QVariant;
#else
typedef struct QGeoAddress QGeoAddress;
typedef struct QGeoCoordinate QGeoCoordinate;
typedef struct QGeoLocation QGeoLocation;
typedef struct QGeoRectangle QGeoRectangle;
typedef struct QVariant QVariant;
#endif

QGeoLocation* QGeoLocation_new();
QGeoLocation* QGeoLocation_new2(QGeoLocation* other);
void QGeoLocation_operatorAssign(QGeoLocation* self, QGeoLocation* other);
bool QGeoLocation_operatorEqual(const QGeoLocation* self, QGeoLocation* other);
bool QGeoLocation_operatorNotEqual(const QGeoLocation* self, QGeoLocation* other);
QGeoAddress* QGeoLocation_address(const QGeoLocation* self);
void QGeoLocation_setAddress(QGeoLocation* self, QGeoAddress* address);
QGeoCoordinate* QGeoLocation_coordinate(const QGeoLocation* self);
void QGeoLocation_setCoordinate(QGeoLocation* self, QGeoCoordinate* position);
QGeoRectangle* QGeoLocation_boundingBox(const QGeoLocation* self);
void QGeoLocation_setBoundingBox(QGeoLocation* self, QGeoRectangle* box);
struct miqt_map /* of struct miqt_string to QVariant* */  QGeoLocation_extendedAttributes(const QGeoLocation* self);
void QGeoLocation_setExtendedAttributes(QGeoLocation* self, struct miqt_map /* of struct miqt_string to QVariant* */  data);
bool QGeoLocation_isEmpty(const QGeoLocation* self);

void QGeoLocation_delete(QGeoLocation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
