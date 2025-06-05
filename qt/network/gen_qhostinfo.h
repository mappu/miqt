#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QHOSTINFO_H
#define MIQT_QT_NETWORK_GEN_QHOSTINFO_H

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
class QHostInfo;
#else
typedef struct QHostAddress QHostAddress;
typedef struct QHostInfo QHostInfo;
#endif

QHostInfo* QHostInfo_new();
QHostInfo* QHostInfo_new2(QHostInfo* d);
QHostInfo* QHostInfo_new3(int lookupId);
void QHostInfo_operatorAssign(QHostInfo* self, QHostInfo* d);
void QHostInfo_swap(QHostInfo* self, QHostInfo* other);
struct miqt_string QHostInfo_hostName(const QHostInfo* self);
void QHostInfo_setHostName(QHostInfo* self, struct miqt_string name);
struct miqt_array /* of QHostAddress* */  QHostInfo_addresses(const QHostInfo* self);
void QHostInfo_setAddresses(QHostInfo* self, struct miqt_array /* of QHostAddress* */  addresses);
int QHostInfo_error(const QHostInfo* self);
void QHostInfo_setError(QHostInfo* self, int error);
struct miqt_string QHostInfo_errorString(const QHostInfo* self);
void QHostInfo_setErrorString(QHostInfo* self, struct miqt_string errorString);
void QHostInfo_setLookupId(QHostInfo* self, int id);
int QHostInfo_lookupId(const QHostInfo* self);
void QHostInfo_abortHostLookup(int lookupId);
QHostInfo* QHostInfo_fromName(struct miqt_string name);
struct miqt_string QHostInfo_localHostName();
struct miqt_string QHostInfo_localDomainName();

void QHostInfo_delete(QHostInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
