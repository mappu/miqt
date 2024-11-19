#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QNETWORKINTERFACE_H
#define MIQT_QT6_NETWORK_GEN_QNETWORKINTERFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDeadlineTimer;
class QHostAddress;
class QNetworkAddressEntry;
class QNetworkInterface;
#else
typedef struct QDeadlineTimer QDeadlineTimer;
typedef struct QHostAddress QHostAddress;
typedef struct QNetworkAddressEntry QNetworkAddressEntry;
typedef struct QNetworkInterface QNetworkInterface;
#endif

void QNetworkAddressEntry_new(QNetworkAddressEntry** outptr_QNetworkAddressEntry);
void QNetworkAddressEntry_new2(QNetworkAddressEntry* other, QNetworkAddressEntry** outptr_QNetworkAddressEntry);
void QNetworkAddressEntry_OperatorAssign(QNetworkAddressEntry* self, QNetworkAddressEntry* other);
void QNetworkAddressEntry_Swap(QNetworkAddressEntry* self, QNetworkAddressEntry* other);
bool QNetworkAddressEntry_OperatorEqual(const QNetworkAddressEntry* self, QNetworkAddressEntry* other);
bool QNetworkAddressEntry_OperatorNotEqual(const QNetworkAddressEntry* self, QNetworkAddressEntry* other);
int8_t QNetworkAddressEntry_DnsEligibility(const QNetworkAddressEntry* self);
void QNetworkAddressEntry_SetDnsEligibility(QNetworkAddressEntry* self, int8_t status);
QHostAddress* QNetworkAddressEntry_Ip(const QNetworkAddressEntry* self);
void QNetworkAddressEntry_SetIp(QNetworkAddressEntry* self, QHostAddress* newIp);
QHostAddress* QNetworkAddressEntry_Netmask(const QNetworkAddressEntry* self);
void QNetworkAddressEntry_SetNetmask(QNetworkAddressEntry* self, QHostAddress* newNetmask);
int QNetworkAddressEntry_PrefixLength(const QNetworkAddressEntry* self);
void QNetworkAddressEntry_SetPrefixLength(QNetworkAddressEntry* self, int length);
QHostAddress* QNetworkAddressEntry_Broadcast(const QNetworkAddressEntry* self);
void QNetworkAddressEntry_SetBroadcast(QNetworkAddressEntry* self, QHostAddress* newBroadcast);
bool QNetworkAddressEntry_IsLifetimeKnown(const QNetworkAddressEntry* self);
QDeadlineTimer* QNetworkAddressEntry_PreferredLifetime(const QNetworkAddressEntry* self);
QDeadlineTimer* QNetworkAddressEntry_ValidityLifetime(const QNetworkAddressEntry* self);
void QNetworkAddressEntry_SetAddressLifetime(QNetworkAddressEntry* self, QDeadlineTimer* preferred, QDeadlineTimer* validity);
void QNetworkAddressEntry_ClearAddressLifetime(QNetworkAddressEntry* self);
bool QNetworkAddressEntry_IsPermanent(const QNetworkAddressEntry* self);
bool QNetworkAddressEntry_IsTemporary(const QNetworkAddressEntry* self);
void QNetworkAddressEntry_Delete(QNetworkAddressEntry* self, bool isSubclass);

void QNetworkInterface_new(QNetworkInterface** outptr_QNetworkInterface);
void QNetworkInterface_new2(QNetworkInterface* other, QNetworkInterface** outptr_QNetworkInterface);
void QNetworkInterface_OperatorAssign(QNetworkInterface* self, QNetworkInterface* other);
void QNetworkInterface_Swap(QNetworkInterface* self, QNetworkInterface* other);
bool QNetworkInterface_IsValid(const QNetworkInterface* self);
int QNetworkInterface_Index(const QNetworkInterface* self);
int QNetworkInterface_MaximumTransmissionUnit(const QNetworkInterface* self);
struct miqt_string QNetworkInterface_Name(const QNetworkInterface* self);
struct miqt_string QNetworkInterface_HumanReadableName(const QNetworkInterface* self);
int QNetworkInterface_Flags(const QNetworkInterface* self);
int QNetworkInterface_Type(const QNetworkInterface* self);
struct miqt_string QNetworkInterface_HardwareAddress(const QNetworkInterface* self);
struct miqt_array /* of QNetworkAddressEntry* */  QNetworkInterface_AddressEntries(const QNetworkInterface* self);
int QNetworkInterface_InterfaceIndexFromName(struct miqt_string name);
QNetworkInterface* QNetworkInterface_InterfaceFromName(struct miqt_string name);
QNetworkInterface* QNetworkInterface_InterfaceFromIndex(int index);
struct miqt_string QNetworkInterface_InterfaceNameFromIndex(int index);
struct miqt_array /* of QNetworkInterface* */  QNetworkInterface_AllInterfaces();
struct miqt_array /* of QHostAddress* */  QNetworkInterface_AllAddresses();
void QNetworkInterface_Delete(QNetworkInterface* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
