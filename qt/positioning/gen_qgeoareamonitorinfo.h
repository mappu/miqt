#pragma once
#ifndef MIQT_QT_POSITIONING_GEN_QGEOAREAMONITORINFO_H
#define MIQT_QT_POSITIONING_GEN_QGEOAREAMONITORINFO_H

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
class QGeoAreaMonitorInfo;
class QGeoShape;
class QVariant;
#else
typedef struct QDateTime QDateTime;
typedef struct QGeoAreaMonitorInfo QGeoAreaMonitorInfo;
typedef struct QGeoShape QGeoShape;
typedef struct QVariant QVariant;
#endif

QGeoAreaMonitorInfo* QGeoAreaMonitorInfo_new();
QGeoAreaMonitorInfo* QGeoAreaMonitorInfo_new2(QGeoAreaMonitorInfo* other);
QGeoAreaMonitorInfo* QGeoAreaMonitorInfo_new3(struct miqt_string name);
void QGeoAreaMonitorInfo_operatorAssign(QGeoAreaMonitorInfo* self, QGeoAreaMonitorInfo* other);
bool QGeoAreaMonitorInfo_operatorEqual(const QGeoAreaMonitorInfo* self, QGeoAreaMonitorInfo* other);
bool QGeoAreaMonitorInfo_operatorNotEqual(const QGeoAreaMonitorInfo* self, QGeoAreaMonitorInfo* other);
struct miqt_string QGeoAreaMonitorInfo_name(const QGeoAreaMonitorInfo* self);
void QGeoAreaMonitorInfo_setName(QGeoAreaMonitorInfo* self, struct miqt_string name);
struct miqt_string QGeoAreaMonitorInfo_identifier(const QGeoAreaMonitorInfo* self);
bool QGeoAreaMonitorInfo_isValid(const QGeoAreaMonitorInfo* self);
QGeoShape* QGeoAreaMonitorInfo_area(const QGeoAreaMonitorInfo* self);
void QGeoAreaMonitorInfo_setArea(QGeoAreaMonitorInfo* self, QGeoShape* newShape);
QDateTime* QGeoAreaMonitorInfo_expiration(const QGeoAreaMonitorInfo* self);
void QGeoAreaMonitorInfo_setExpiration(QGeoAreaMonitorInfo* self, QDateTime* expiry);
bool QGeoAreaMonitorInfo_isPersistent(const QGeoAreaMonitorInfo* self);
void QGeoAreaMonitorInfo_setPersistent(QGeoAreaMonitorInfo* self, bool isPersistent);
struct miqt_map /* of struct miqt_string to QVariant* */  QGeoAreaMonitorInfo_notificationParameters(const QGeoAreaMonitorInfo* self);
void QGeoAreaMonitorInfo_setNotificationParameters(QGeoAreaMonitorInfo* self, struct miqt_map /* of struct miqt_string to QVariant* */  parameters);

void QGeoAreaMonitorInfo_delete(QGeoAreaMonitorInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
