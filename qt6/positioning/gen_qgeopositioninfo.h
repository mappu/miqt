#pragma once
#ifndef MIQT_QT6_POSITIONING_GEN_QGEOPOSITIONINFO_H
#define MIQT_QT6_POSITIONING_GEN_QGEOPOSITIONINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDateTime;
class QGeoCoordinate;
class QGeoPositionInfo;
#else
typedef struct QDateTime QDateTime;
typedef struct QGeoCoordinate QGeoCoordinate;
typedef struct QGeoPositionInfo QGeoPositionInfo;
#endif

QGeoPositionInfo* QGeoPositionInfo_new();
QGeoPositionInfo* QGeoPositionInfo_new2(QGeoCoordinate* coordinate, QDateTime* updateTime);
QGeoPositionInfo* QGeoPositionInfo_new3(QGeoPositionInfo* other);
void QGeoPositionInfo_operatorAssign(QGeoPositionInfo* self, QGeoPositionInfo* other);
void QGeoPositionInfo_swap(QGeoPositionInfo* self, QGeoPositionInfo* other);
bool QGeoPositionInfo_isValid(const QGeoPositionInfo* self);
void QGeoPositionInfo_setTimestamp(QGeoPositionInfo* self, QDateTime* timestamp);
QDateTime* QGeoPositionInfo_timestamp(const QGeoPositionInfo* self);
void QGeoPositionInfo_setCoordinate(QGeoPositionInfo* self, QGeoCoordinate* coordinate);
QGeoCoordinate* QGeoPositionInfo_coordinate(const QGeoPositionInfo* self);
void QGeoPositionInfo_setAttribute(QGeoPositionInfo* self, int attribute, double value);
double QGeoPositionInfo_attribute(const QGeoPositionInfo* self, int attribute);
void QGeoPositionInfo_removeAttribute(QGeoPositionInfo* self, int attribute);
bool QGeoPositionInfo_hasAttribute(const QGeoPositionInfo* self, int attribute);
void QGeoPositionInfo_detach(QGeoPositionInfo* self);

void QGeoPositionInfo_delete(QGeoPositionInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
