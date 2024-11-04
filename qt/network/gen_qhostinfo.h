#ifndef GEN_QHOSTINFO_H
#define GEN_QHOSTINFO_H

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
void QHostInfo_OperatorAssign(QHostInfo* self, QHostInfo* d);
void QHostInfo_Swap(QHostInfo* self, QHostInfo* other);
struct miqt_string QHostInfo_HostName(const QHostInfo* self);
void QHostInfo_SetHostName(QHostInfo* self, struct miqt_string name);
struct miqt_array QHostInfo_Addresses(const QHostInfo* self);
void QHostInfo_SetAddresses(QHostInfo* self, struct miqt_array /* of QHostAddress* */ addresses);
int QHostInfo_Error(const QHostInfo* self);
void QHostInfo_SetError(QHostInfo* self, int error);
struct miqt_string QHostInfo_ErrorString(const QHostInfo* self);
void QHostInfo_SetErrorString(QHostInfo* self, struct miqt_string errorString);
void QHostInfo_SetLookupId(QHostInfo* self, int id);
int QHostInfo_LookupId(const QHostInfo* self);
void QHostInfo_AbortHostLookup(int lookupId);
QHostInfo* QHostInfo_FromName(struct miqt_string name);
struct miqt_string QHostInfo_LocalHostName();
struct miqt_string QHostInfo_LocalDomainName();
void QHostInfo_Delete(QHostInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
