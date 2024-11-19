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

void QNetworkConfiguration_new(QNetworkConfiguration** outptr_QNetworkConfiguration);
void QNetworkConfiguration_new2(QNetworkConfiguration* other, QNetworkConfiguration** outptr_QNetworkConfiguration);
void QNetworkConfiguration_OperatorAssign(QNetworkConfiguration* self, QNetworkConfiguration* other);
void QNetworkConfiguration_Swap(QNetworkConfiguration* self, QNetworkConfiguration* other);
bool QNetworkConfiguration_OperatorEqual(const QNetworkConfiguration* self, QNetworkConfiguration* other);
bool QNetworkConfiguration_OperatorNotEqual(const QNetworkConfiguration* self, QNetworkConfiguration* other);
int QNetworkConfiguration_State(const QNetworkConfiguration* self);
int QNetworkConfiguration_Type(const QNetworkConfiguration* self);
int QNetworkConfiguration_Purpose(const QNetworkConfiguration* self);
int QNetworkConfiguration_BearerType(const QNetworkConfiguration* self);
int QNetworkConfiguration_BearerTypeFamily(const QNetworkConfiguration* self);
struct miqt_string QNetworkConfiguration_BearerTypeName(const QNetworkConfiguration* self);
struct miqt_string QNetworkConfiguration_Identifier(const QNetworkConfiguration* self);
bool QNetworkConfiguration_IsRoamingAvailable(const QNetworkConfiguration* self);
struct miqt_array /* of QNetworkConfiguration* */  QNetworkConfiguration_Children(const QNetworkConfiguration* self);
struct miqt_string QNetworkConfiguration_Name(const QNetworkConfiguration* self);
bool QNetworkConfiguration_IsValid(const QNetworkConfiguration* self);
int QNetworkConfiguration_ConnectTimeout(const QNetworkConfiguration* self);
bool QNetworkConfiguration_SetConnectTimeout(QNetworkConfiguration* self, int timeout);
void QNetworkConfiguration_Delete(QNetworkConfiguration* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
