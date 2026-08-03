#pragma once
#ifndef MIQT_QT6_POSITIONING_GEN_QGEOADDRESS_H
#define MIQT_QT6_POSITIONING_GEN_QGEOADDRESS_H

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
#else
typedef struct QGeoAddress QGeoAddress;
#endif

QGeoAddress* QGeoAddress_new();
QGeoAddress* QGeoAddress_new2(QGeoAddress* other);
void QGeoAddress_operatorAssign(QGeoAddress* self, QGeoAddress* other);
void QGeoAddress_swap(QGeoAddress* self, QGeoAddress* other);
struct miqt_string QGeoAddress_text(const QGeoAddress* self);
void QGeoAddress_setText(QGeoAddress* self, struct miqt_string text);
struct miqt_string QGeoAddress_country(const QGeoAddress* self);
void QGeoAddress_setCountry(QGeoAddress* self, struct miqt_string country);
struct miqt_string QGeoAddress_countryCode(const QGeoAddress* self);
void QGeoAddress_setCountryCode(QGeoAddress* self, struct miqt_string countryCode);
struct miqt_string QGeoAddress_state(const QGeoAddress* self);
void QGeoAddress_setState(QGeoAddress* self, struct miqt_string state);
struct miqt_string QGeoAddress_county(const QGeoAddress* self);
void QGeoAddress_setCounty(QGeoAddress* self, struct miqt_string county);
struct miqt_string QGeoAddress_city(const QGeoAddress* self);
void QGeoAddress_setCity(QGeoAddress* self, struct miqt_string city);
struct miqt_string QGeoAddress_district(const QGeoAddress* self);
void QGeoAddress_setDistrict(QGeoAddress* self, struct miqt_string district);
struct miqt_string QGeoAddress_postalCode(const QGeoAddress* self);
void QGeoAddress_setPostalCode(QGeoAddress* self, struct miqt_string postalCode);
struct miqt_string QGeoAddress_street(const QGeoAddress* self);
void QGeoAddress_setStreet(QGeoAddress* self, struct miqt_string street);
struct miqt_string QGeoAddress_streetNumber(const QGeoAddress* self);
void QGeoAddress_setStreetNumber(QGeoAddress* self, struct miqt_string streetNumber);
bool QGeoAddress_isEmpty(const QGeoAddress* self);
void QGeoAddress_clear(QGeoAddress* self);
bool QGeoAddress_isTextGenerated(const QGeoAddress* self);

void QGeoAddress_delete(QGeoAddress* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
