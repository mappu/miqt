#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QNETWORKCONFIGURATION_H
#define MIQT_QT_NETWORK_GEN_QNETWORKCONFIGURATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QNetworkConfiguration;
#else
typedef struct QNetworkConfiguration QNetworkConfiguration;
#endif

QNetworkConfiguration* QNetworkConfiguration_new();
QNetworkConfiguration* QNetworkConfiguration_new2(QNetworkConfiguration* other);
void QNetworkConfiguration_operatorAssign(QNetworkConfiguration* self, QNetworkConfiguration* other);
void QNetworkConfiguration_swap(QNetworkConfiguration* self, QNetworkConfiguration* other);
bool QNetworkConfiguration_operatorEqual(const QNetworkConfiguration* self, QNetworkConfiguration* other);
bool QNetworkConfiguration_operatorNotEqual(const QNetworkConfiguration* self, QNetworkConfiguration* other);
int QNetworkConfiguration_state(const QNetworkConfiguration* self);
int QNetworkConfiguration_type(const QNetworkConfiguration* self);
int QNetworkConfiguration_purpose(const QNetworkConfiguration* self);
int QNetworkConfiguration_bearerType(const QNetworkConfiguration* self);
int QNetworkConfiguration_bearerTypeFamily(const QNetworkConfiguration* self);
struct miqt_string QNetworkConfiguration_bearerTypeName(const QNetworkConfiguration* self);
struct miqt_string QNetworkConfiguration_identifier(const QNetworkConfiguration* self);
bool QNetworkConfiguration_isRoamingAvailable(const QNetworkConfiguration* self);
struct miqt_array /* of QNetworkConfiguration* */  QNetworkConfiguration_children(const QNetworkConfiguration* self);
struct miqt_string QNetworkConfiguration_name(const QNetworkConfiguration* self);
bool QNetworkConfiguration_isValid(const QNetworkConfiguration* self);
int QNetworkConfiguration_connectTimeout(const QNetworkConfiguration* self);
bool QNetworkConfiguration_setConnectTimeout(QNetworkConfiguration* self, int timeout);

void QNetworkConfiguration_delete(QNetworkConfiguration* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
