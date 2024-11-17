#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QDNSLOOKUP_H
#define MIQT_QT6_NETWORK_GEN_QDNSLOOKUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QDnsDomainNameRecord;
class QDnsHostAddressRecord;
class QDnsLookup;
class QDnsMailExchangeRecord;
class QDnsServiceRecord;
class QDnsTextRecord;
class QHostAddress;
class QMetaObject;
class QObject;
#else
typedef struct QByteArray QByteArray;
typedef struct QDnsDomainNameRecord QDnsDomainNameRecord;
typedef struct QDnsHostAddressRecord QDnsHostAddressRecord;
typedef struct QDnsLookup QDnsLookup;
typedef struct QDnsMailExchangeRecord QDnsMailExchangeRecord;
typedef struct QDnsServiceRecord QDnsServiceRecord;
typedef struct QDnsTextRecord QDnsTextRecord;
typedef struct QHostAddress QHostAddress;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QDnsDomainNameRecord* QDnsDomainNameRecord_new();
QDnsDomainNameRecord* QDnsDomainNameRecord_new2(QDnsDomainNameRecord* other);
void QDnsDomainNameRecord_OperatorAssign(QDnsDomainNameRecord* self, QDnsDomainNameRecord* other);
void QDnsDomainNameRecord_Swap(QDnsDomainNameRecord* self, QDnsDomainNameRecord* other);
struct miqt_string QDnsDomainNameRecord_Name(const QDnsDomainNameRecord* self);
unsigned int QDnsDomainNameRecord_TimeToLive(const QDnsDomainNameRecord* self);
struct miqt_string QDnsDomainNameRecord_Value(const QDnsDomainNameRecord* self);
void QDnsDomainNameRecord_Delete(QDnsDomainNameRecord* self);

QDnsHostAddressRecord* QDnsHostAddressRecord_new();
QDnsHostAddressRecord* QDnsHostAddressRecord_new2(QDnsHostAddressRecord* other);
void QDnsHostAddressRecord_OperatorAssign(QDnsHostAddressRecord* self, QDnsHostAddressRecord* other);
void QDnsHostAddressRecord_Swap(QDnsHostAddressRecord* self, QDnsHostAddressRecord* other);
struct miqt_string QDnsHostAddressRecord_Name(const QDnsHostAddressRecord* self);
unsigned int QDnsHostAddressRecord_TimeToLive(const QDnsHostAddressRecord* self);
QHostAddress* QDnsHostAddressRecord_Value(const QDnsHostAddressRecord* self);
void QDnsHostAddressRecord_Delete(QDnsHostAddressRecord* self);

QDnsMailExchangeRecord* QDnsMailExchangeRecord_new();
QDnsMailExchangeRecord* QDnsMailExchangeRecord_new2(QDnsMailExchangeRecord* other);
void QDnsMailExchangeRecord_OperatorAssign(QDnsMailExchangeRecord* self, QDnsMailExchangeRecord* other);
void QDnsMailExchangeRecord_Swap(QDnsMailExchangeRecord* self, QDnsMailExchangeRecord* other);
struct miqt_string QDnsMailExchangeRecord_Exchange(const QDnsMailExchangeRecord* self);
struct miqt_string QDnsMailExchangeRecord_Name(const QDnsMailExchangeRecord* self);
uint16_t QDnsMailExchangeRecord_Preference(const QDnsMailExchangeRecord* self);
unsigned int QDnsMailExchangeRecord_TimeToLive(const QDnsMailExchangeRecord* self);
void QDnsMailExchangeRecord_Delete(QDnsMailExchangeRecord* self);

QDnsServiceRecord* QDnsServiceRecord_new();
QDnsServiceRecord* QDnsServiceRecord_new2(QDnsServiceRecord* other);
void QDnsServiceRecord_OperatorAssign(QDnsServiceRecord* self, QDnsServiceRecord* other);
void QDnsServiceRecord_Swap(QDnsServiceRecord* self, QDnsServiceRecord* other);
struct miqt_string QDnsServiceRecord_Name(const QDnsServiceRecord* self);
uint16_t QDnsServiceRecord_Port(const QDnsServiceRecord* self);
uint16_t QDnsServiceRecord_Priority(const QDnsServiceRecord* self);
struct miqt_string QDnsServiceRecord_Target(const QDnsServiceRecord* self);
unsigned int QDnsServiceRecord_TimeToLive(const QDnsServiceRecord* self);
uint16_t QDnsServiceRecord_Weight(const QDnsServiceRecord* self);
void QDnsServiceRecord_Delete(QDnsServiceRecord* self);

QDnsTextRecord* QDnsTextRecord_new();
QDnsTextRecord* QDnsTextRecord_new2(QDnsTextRecord* other);
void QDnsTextRecord_OperatorAssign(QDnsTextRecord* self, QDnsTextRecord* other);
void QDnsTextRecord_Swap(QDnsTextRecord* self, QDnsTextRecord* other);
struct miqt_string QDnsTextRecord_Name(const QDnsTextRecord* self);
unsigned int QDnsTextRecord_TimeToLive(const QDnsTextRecord* self);
struct miqt_array /* of struct miqt_string */  QDnsTextRecord_Values(const QDnsTextRecord* self);
void QDnsTextRecord_Delete(QDnsTextRecord* self);

QDnsLookup* QDnsLookup_new();
QDnsLookup* QDnsLookup_new2(int typeVal, struct miqt_string name);
QDnsLookup* QDnsLookup_new3(int typeVal, struct miqt_string name, QHostAddress* nameserver);
QDnsLookup* QDnsLookup_new4(QObject* parent);
QDnsLookup* QDnsLookup_new5(int typeVal, struct miqt_string name, QObject* parent);
QDnsLookup* QDnsLookup_new6(int typeVal, struct miqt_string name, QHostAddress* nameserver, QObject* parent);
QMetaObject* QDnsLookup_MetaObject(const QDnsLookup* self);
void* QDnsLookup_Metacast(QDnsLookup* self, const char* param1);
struct miqt_string QDnsLookup_Tr(const char* s);
int QDnsLookup_Error(const QDnsLookup* self);
struct miqt_string QDnsLookup_ErrorString(const QDnsLookup* self);
bool QDnsLookup_IsFinished(const QDnsLookup* self);
struct miqt_string QDnsLookup_Name(const QDnsLookup* self);
void QDnsLookup_SetName(QDnsLookup* self, struct miqt_string name);
int QDnsLookup_Type(const QDnsLookup* self);
void QDnsLookup_SetType(QDnsLookup* self, int typeVal);
QHostAddress* QDnsLookup_Nameserver(const QDnsLookup* self);
void QDnsLookup_SetNameserver(QDnsLookup* self, QHostAddress* nameserver);
struct miqt_array /* of QDnsDomainNameRecord* */  QDnsLookup_CanonicalNameRecords(const QDnsLookup* self);
struct miqt_array /* of QDnsHostAddressRecord* */  QDnsLookup_HostAddressRecords(const QDnsLookup* self);
struct miqt_array /* of QDnsMailExchangeRecord* */  QDnsLookup_MailExchangeRecords(const QDnsLookup* self);
struct miqt_array /* of QDnsDomainNameRecord* */  QDnsLookup_NameServerRecords(const QDnsLookup* self);
struct miqt_array /* of QDnsDomainNameRecord* */  QDnsLookup_PointerRecords(const QDnsLookup* self);
struct miqt_array /* of QDnsServiceRecord* */  QDnsLookup_ServiceRecords(const QDnsLookup* self);
struct miqt_array /* of QDnsTextRecord* */  QDnsLookup_TextRecords(const QDnsLookup* self);
void QDnsLookup_Abort(QDnsLookup* self);
void QDnsLookup_Lookup(QDnsLookup* self);
void QDnsLookup_Finished(QDnsLookup* self);
void QDnsLookup_connect_Finished(QDnsLookup* self, intptr_t slot);
void QDnsLookup_NameChanged(QDnsLookup* self, struct miqt_string name);
void QDnsLookup_connect_NameChanged(QDnsLookup* self, intptr_t slot);
void QDnsLookup_TypeChanged(QDnsLookup* self, int typeVal);
void QDnsLookup_connect_TypeChanged(QDnsLookup* self, intptr_t slot);
void QDnsLookup_NameserverChanged(QDnsLookup* self, QHostAddress* nameserver);
void QDnsLookup_connect_NameserverChanged(QDnsLookup* self, intptr_t slot);
struct miqt_string QDnsLookup_Tr2(const char* s, const char* c);
struct miqt_string QDnsLookup_Tr3(const char* s, const char* c, int n);
void QDnsLookup_Delete(QDnsLookup* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
