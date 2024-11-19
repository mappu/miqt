#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QHOSTADDRESS_H
#define MIQT_QT_NETWORK_GEN_QHOSTADDRESS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QHostAddress;
class QIPv6Address;
#else
typedef struct QHostAddress QHostAddress;
typedef struct QIPv6Address QIPv6Address;
#endif

unsigned char QIPv6Address_OperatorSubscript(const QIPv6Address* self, int index);
void QIPv6Address_Delete(QIPv6Address* self, bool isSubclass);

void QHostAddress_new(QHostAddress** outptr_QHostAddress);
void QHostAddress_new2(unsigned int ip4Addr, QHostAddress** outptr_QHostAddress);
void QHostAddress_new3(unsigned char* ip6Addr, QHostAddress** outptr_QHostAddress);
void QHostAddress_new4(const unsigned char* ip6Addr, QHostAddress** outptr_QHostAddress);
void QHostAddress_new5(QIPv6Address* ip6Addr, QHostAddress** outptr_QHostAddress);
void QHostAddress_new6(struct miqt_string address, QHostAddress** outptr_QHostAddress);
void QHostAddress_new7(QHostAddress* copyVal, QHostAddress** outptr_QHostAddress);
void QHostAddress_new8(int address, QHostAddress** outptr_QHostAddress);
void QHostAddress_OperatorAssign(QHostAddress* self, QHostAddress* other);
void QHostAddress_OperatorAssignWithAddress(QHostAddress* self, struct miqt_string address);
void QHostAddress_OperatorAssign2(QHostAddress* self, int address);
void QHostAddress_Swap(QHostAddress* self, QHostAddress* other);
void QHostAddress_SetAddress(QHostAddress* self, unsigned int ip4Addr);
void QHostAddress_SetAddressWithIp6Addr(QHostAddress* self, unsigned char* ip6Addr);
void QHostAddress_SetAddress2(QHostAddress* self, const unsigned char* ip6Addr);
void QHostAddress_SetAddress3(QHostAddress* self, QIPv6Address* ip6Addr);
bool QHostAddress_SetAddress4(QHostAddress* self, struct miqt_string address);
void QHostAddress_SetAddress5(QHostAddress* self, int address);
int QHostAddress_Protocol(const QHostAddress* self);
unsigned int QHostAddress_ToIPv4Address(const QHostAddress* self);
unsigned int QHostAddress_ToIPv4AddressWithOk(const QHostAddress* self, bool* ok);
QIPv6Address* QHostAddress_ToIPv6Address(const QHostAddress* self);
struct miqt_string QHostAddress_ToString(const QHostAddress* self);
struct miqt_string QHostAddress_ScopeId(const QHostAddress* self);
void QHostAddress_SetScopeId(QHostAddress* self, struct miqt_string id);
bool QHostAddress_IsEqual(const QHostAddress* self, QHostAddress* address);
bool QHostAddress_OperatorEqual(const QHostAddress* self, QHostAddress* address);
bool QHostAddress_OperatorEqualWithAddress(const QHostAddress* self, int address);
bool QHostAddress_OperatorNotEqual(const QHostAddress* self, QHostAddress* address);
bool QHostAddress_OperatorNotEqualWithAddress(const QHostAddress* self, int address);
bool QHostAddress_IsNull(const QHostAddress* self);
void QHostAddress_Clear(QHostAddress* self);
bool QHostAddress_IsInSubnet(const QHostAddress* self, QHostAddress* subnet, int netmask);
bool QHostAddress_IsInSubnetWithSubnet(const QHostAddress* self, struct miqt_map /* tuple of QHostAddress* and int */  subnet);
bool QHostAddress_IsLoopback(const QHostAddress* self);
bool QHostAddress_IsGlobal(const QHostAddress* self);
bool QHostAddress_IsLinkLocal(const QHostAddress* self);
bool QHostAddress_IsSiteLocal(const QHostAddress* self);
bool QHostAddress_IsUniqueLocalUnicast(const QHostAddress* self);
bool QHostAddress_IsMulticast(const QHostAddress* self);
bool QHostAddress_IsBroadcast(const QHostAddress* self);
struct miqt_map /* tuple of QHostAddress* and int */  QHostAddress_ParseSubnet(struct miqt_string subnet);
bool QHostAddress_IsEqual2(const QHostAddress* self, QHostAddress* address, int mode);
void QHostAddress_Delete(QHostAddress* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
