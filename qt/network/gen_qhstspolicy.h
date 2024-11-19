#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QHSTSPOLICY_H
#define MIQT_QT_NETWORK_GEN_QHSTSPOLICY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDateTime;
class QHstsPolicy;
#else
typedef struct QDateTime QDateTime;
typedef struct QHstsPolicy QHstsPolicy;
#endif

void QHstsPolicy_new(QHstsPolicy** outptr_QHstsPolicy);
void QHstsPolicy_new2(QDateTime* expiry, int flags, struct miqt_string host, QHstsPolicy** outptr_QHstsPolicy);
void QHstsPolicy_new3(QHstsPolicy* rhs, QHstsPolicy** outptr_QHstsPolicy);
void QHstsPolicy_new4(QDateTime* expiry, int flags, struct miqt_string host, int mode, QHstsPolicy** outptr_QHstsPolicy);
void QHstsPolicy_OperatorAssign(QHstsPolicy* self, QHstsPolicy* rhs);
void QHstsPolicy_Swap(QHstsPolicy* self, QHstsPolicy* other);
void QHstsPolicy_SetHost(QHstsPolicy* self, struct miqt_string host);
struct miqt_string QHstsPolicy_Host(const QHstsPolicy* self);
void QHstsPolicy_SetExpiry(QHstsPolicy* self, QDateTime* expiry);
QDateTime* QHstsPolicy_Expiry(const QHstsPolicy* self);
void QHstsPolicy_SetIncludesSubDomains(QHstsPolicy* self, bool include);
bool QHstsPolicy_IncludesSubDomains(const QHstsPolicy* self);
bool QHstsPolicy_IsExpired(const QHstsPolicy* self);
void QHstsPolicy_SetHost2(QHstsPolicy* self, struct miqt_string host, int mode);
struct miqt_string QHstsPolicy_Host1(const QHstsPolicy* self, int options);
void QHstsPolicy_Delete(QHstsPolicy* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
