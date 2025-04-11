#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QHOSTADDRESS_H
#define MIQT_QT6_NETWORK_GEN_QHOSTADDRESS_H

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

unsigned char QIPv6Address_operatorSubscript(const QIPv6Address* self, int index);
void QIPv6Address_delete(QIPv6Address* self);

QHostAddress* QHostAddress_new();
QHostAddress* QHostAddress_new2(unsigned int ip4Addr);
QHostAddress* QHostAddress_new3(const unsigned char* ip6Addr);
QHostAddress* QHostAddress_new4(QIPv6Address* ip6Addr);
QHostAddress* QHostAddress_new5(struct miqt_string address);
QHostAddress* QHostAddress_new6(QHostAddress* copy);
QHostAddress* QHostAddress_new7(int address);
void QHostAddress_operatorAssign(QHostAddress* self, QHostAddress* other);
void QHostAddress_operatorAssignWithAddress(QHostAddress* self, int address);
void QHostAddress_swap(QHostAddress* self, QHostAddress* other);
void QHostAddress_setAddress(QHostAddress* self, unsigned int ip4Addr);
void QHostAddress_setAddressWithIp6Addr(QHostAddress* self, const unsigned char* ip6Addr);
void QHostAddress_setAddress2(QHostAddress* self, QIPv6Address* ip6Addr);
bool QHostAddress_setAddress3(QHostAddress* self, struct miqt_string address);
void QHostAddress_setAddress4(QHostAddress* self, int address);
int QHostAddress_protocol(const QHostAddress* self);
unsigned int QHostAddress_toIPv4Address(const QHostAddress* self);
QIPv6Address* QHostAddress_toIPv6Address(const QHostAddress* self);
struct miqt_string QHostAddress_toString(const QHostAddress* self);
struct miqt_string QHostAddress_scopeId(const QHostAddress* self);
void QHostAddress_setScopeId(QHostAddress* self, struct miqt_string id);
bool QHostAddress_isEqual(const QHostAddress* self, QHostAddress* address);
bool QHostAddress_operatorEqual(const QHostAddress* self, QHostAddress* address);
bool QHostAddress_operatorEqualWithAddress(const QHostAddress* self, int address);
bool QHostAddress_operatorNotEqual(const QHostAddress* self, QHostAddress* address);
bool QHostAddress_operatorNotEqualWithAddress(const QHostAddress* self, int address);
bool QHostAddress_isNull(const QHostAddress* self);
void QHostAddress_clear(QHostAddress* self);
bool QHostAddress_isInSubnet(const QHostAddress* self, QHostAddress* subnet, int netmask);
bool QHostAddress_isInSubnetWithSubnet(const QHostAddress* self, struct miqt_map /* tuple of QHostAddress* and int */  subnet);
bool QHostAddress_isLoopback(const QHostAddress* self);
bool QHostAddress_isGlobal(const QHostAddress* self);
bool QHostAddress_isLinkLocal(const QHostAddress* self);
bool QHostAddress_isSiteLocal(const QHostAddress* self);
bool QHostAddress_isUniqueLocalUnicast(const QHostAddress* self);
bool QHostAddress_isMulticast(const QHostAddress* self);
bool QHostAddress_isBroadcast(const QHostAddress* self);
struct miqt_map /* tuple of QHostAddress* and int */  QHostAddress_parseSubnet(struct miqt_string subnet);
unsigned int QHostAddress_toIPv4AddressWithOk(const QHostAddress* self, bool* ok);
bool QHostAddress_isEqual2(const QHostAddress* self, QHostAddress* address, int mode);
void QHostAddress_delete(QHostAddress* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
