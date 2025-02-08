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
class QChildEvent;
class QDnsDomainNameRecord;
class QDnsHostAddressRecord;
class QDnsLookup;
class QDnsMailExchangeRecord;
class QDnsServiceRecord;
class QDnsTextRecord;
class QEvent;
class QHostAddress;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QDnsDomainNameRecord QDnsDomainNameRecord;
typedef struct QDnsHostAddressRecord QDnsHostAddressRecord;
typedef struct QDnsLookup QDnsLookup;
typedef struct QDnsMailExchangeRecord QDnsMailExchangeRecord;
typedef struct QDnsServiceRecord QDnsServiceRecord;
typedef struct QDnsTextRecord QDnsTextRecord;
typedef struct QEvent QEvent;
typedef struct QHostAddress QHostAddress;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QDnsDomainNameRecord* QDnsDomainNameRecord_new();
QDnsDomainNameRecord* QDnsDomainNameRecord_new2(QDnsDomainNameRecord* other);
void QDnsDomainNameRecord_operatorAssign(QDnsDomainNameRecord* self, QDnsDomainNameRecord* other);
void QDnsDomainNameRecord_swap(QDnsDomainNameRecord* self, QDnsDomainNameRecord* other);
struct miqt_string QDnsDomainNameRecord_name(const QDnsDomainNameRecord* self);
unsigned int QDnsDomainNameRecord_timeToLive(const QDnsDomainNameRecord* self);
struct miqt_string QDnsDomainNameRecord_value(const QDnsDomainNameRecord* self);
void QDnsDomainNameRecord_delete(QDnsDomainNameRecord* self);

QDnsHostAddressRecord* QDnsHostAddressRecord_new();
QDnsHostAddressRecord* QDnsHostAddressRecord_new2(QDnsHostAddressRecord* other);
void QDnsHostAddressRecord_operatorAssign(QDnsHostAddressRecord* self, QDnsHostAddressRecord* other);
void QDnsHostAddressRecord_swap(QDnsHostAddressRecord* self, QDnsHostAddressRecord* other);
struct miqt_string QDnsHostAddressRecord_name(const QDnsHostAddressRecord* self);
unsigned int QDnsHostAddressRecord_timeToLive(const QDnsHostAddressRecord* self);
QHostAddress* QDnsHostAddressRecord_value(const QDnsHostAddressRecord* self);
void QDnsHostAddressRecord_delete(QDnsHostAddressRecord* self);

QDnsMailExchangeRecord* QDnsMailExchangeRecord_new();
QDnsMailExchangeRecord* QDnsMailExchangeRecord_new2(QDnsMailExchangeRecord* other);
void QDnsMailExchangeRecord_operatorAssign(QDnsMailExchangeRecord* self, QDnsMailExchangeRecord* other);
void QDnsMailExchangeRecord_swap(QDnsMailExchangeRecord* self, QDnsMailExchangeRecord* other);
struct miqt_string QDnsMailExchangeRecord_exchange(const QDnsMailExchangeRecord* self);
struct miqt_string QDnsMailExchangeRecord_name(const QDnsMailExchangeRecord* self);
uint16_t QDnsMailExchangeRecord_preference(const QDnsMailExchangeRecord* self);
unsigned int QDnsMailExchangeRecord_timeToLive(const QDnsMailExchangeRecord* self);
void QDnsMailExchangeRecord_delete(QDnsMailExchangeRecord* self);

QDnsServiceRecord* QDnsServiceRecord_new();
QDnsServiceRecord* QDnsServiceRecord_new2(QDnsServiceRecord* other);
void QDnsServiceRecord_operatorAssign(QDnsServiceRecord* self, QDnsServiceRecord* other);
void QDnsServiceRecord_swap(QDnsServiceRecord* self, QDnsServiceRecord* other);
struct miqt_string QDnsServiceRecord_name(const QDnsServiceRecord* self);
uint16_t QDnsServiceRecord_port(const QDnsServiceRecord* self);
uint16_t QDnsServiceRecord_priority(const QDnsServiceRecord* self);
struct miqt_string QDnsServiceRecord_target(const QDnsServiceRecord* self);
unsigned int QDnsServiceRecord_timeToLive(const QDnsServiceRecord* self);
uint16_t QDnsServiceRecord_weight(const QDnsServiceRecord* self);
void QDnsServiceRecord_delete(QDnsServiceRecord* self);

QDnsTextRecord* QDnsTextRecord_new();
QDnsTextRecord* QDnsTextRecord_new2(QDnsTextRecord* other);
void QDnsTextRecord_operatorAssign(QDnsTextRecord* self, QDnsTextRecord* other);
void QDnsTextRecord_swap(QDnsTextRecord* self, QDnsTextRecord* other);
struct miqt_string QDnsTextRecord_name(const QDnsTextRecord* self);
unsigned int QDnsTextRecord_timeToLive(const QDnsTextRecord* self);
struct miqt_array /* of struct miqt_string */  QDnsTextRecord_values(const QDnsTextRecord* self);
void QDnsTextRecord_delete(QDnsTextRecord* self);

QDnsLookup* QDnsLookup_new();
QDnsLookup* QDnsLookup_new2(int type, struct miqt_string name);
QDnsLookup* QDnsLookup_new3(int type, struct miqt_string name, QHostAddress* nameserver);
QDnsLookup* QDnsLookup_new4(QObject* parent);
QDnsLookup* QDnsLookup_new5(int type, struct miqt_string name, QObject* parent);
QDnsLookup* QDnsLookup_new6(int type, struct miqt_string name, QHostAddress* nameserver, QObject* parent);
void QDnsLookup_virtbase(QDnsLookup* src, QObject** outptr_QObject);
QMetaObject* QDnsLookup_metaObject(const QDnsLookup* self);
void* QDnsLookup_metacast(QDnsLookup* self, const char* param1);
struct miqt_string QDnsLookup_tr(const char* s);
int QDnsLookup_error(const QDnsLookup* self);
struct miqt_string QDnsLookup_errorString(const QDnsLookup* self);
bool QDnsLookup_isFinished(const QDnsLookup* self);
struct miqt_string QDnsLookup_name(const QDnsLookup* self);
void QDnsLookup_setName(QDnsLookup* self, struct miqt_string name);
int QDnsLookup_type(const QDnsLookup* self);
void QDnsLookup_setType(QDnsLookup* self, int type);
QHostAddress* QDnsLookup_nameserver(const QDnsLookup* self);
void QDnsLookup_setNameserver(QDnsLookup* self, QHostAddress* nameserver);
struct miqt_array /* of QDnsDomainNameRecord* */  QDnsLookup_canonicalNameRecords(const QDnsLookup* self);
struct miqt_array /* of QDnsHostAddressRecord* */  QDnsLookup_hostAddressRecords(const QDnsLookup* self);
struct miqt_array /* of QDnsMailExchangeRecord* */  QDnsLookup_mailExchangeRecords(const QDnsLookup* self);
struct miqt_array /* of QDnsDomainNameRecord* */  QDnsLookup_nameServerRecords(const QDnsLookup* self);
struct miqt_array /* of QDnsDomainNameRecord* */  QDnsLookup_pointerRecords(const QDnsLookup* self);
struct miqt_array /* of QDnsServiceRecord* */  QDnsLookup_serviceRecords(const QDnsLookup* self);
struct miqt_array /* of QDnsTextRecord* */  QDnsLookup_textRecords(const QDnsLookup* self);
void QDnsLookup_abort(QDnsLookup* self);
void QDnsLookup_lookup(QDnsLookup* self);
void QDnsLookup_finished(QDnsLookup* self);
void QDnsLookup_connect_finished(QDnsLookup* self, intptr_t slot);
void QDnsLookup_nameChanged(QDnsLookup* self, struct miqt_string name);
void QDnsLookup_connect_nameChanged(QDnsLookup* self, intptr_t slot);
void QDnsLookup_typeChanged(QDnsLookup* self, int type);
void QDnsLookup_connect_typeChanged(QDnsLookup* self, intptr_t slot);
void QDnsLookup_nameserverChanged(QDnsLookup* self, QHostAddress* nameserver);
void QDnsLookup_connect_nameserverChanged(QDnsLookup* self, intptr_t slot);
struct miqt_string QDnsLookup_tr2(const char* s, const char* c);
struct miqt_string QDnsLookup_tr3(const char* s, const char* c, int n);
bool QDnsLookup_override_virtual_event(void* self, intptr_t slot);
bool QDnsLookup_virtualbase_event(void* self, QEvent* event);
bool QDnsLookup_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDnsLookup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QDnsLookup_override_virtual_timerEvent(void* self, intptr_t slot);
void QDnsLookup_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QDnsLookup_override_virtual_childEvent(void* self, intptr_t slot);
void QDnsLookup_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDnsLookup_override_virtual_customEvent(void* self, intptr_t slot);
void QDnsLookup_virtualbase_customEvent(void* self, QEvent* event);
bool QDnsLookup_override_virtual_connectNotify(void* self, intptr_t slot);
void QDnsLookup_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDnsLookup_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDnsLookup_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QDnsLookup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QDnsLookup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QDnsLookup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QDnsLookup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QDnsLookup_delete(QDnsLookup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
