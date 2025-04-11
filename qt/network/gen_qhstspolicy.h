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

QHstsPolicy* QHstsPolicy_new();
QHstsPolicy* QHstsPolicy_new2(QDateTime* expiry, int flags, struct miqt_string host);
QHstsPolicy* QHstsPolicy_new3(QHstsPolicy* rhs);
QHstsPolicy* QHstsPolicy_new4(QDateTime* expiry, int flags, struct miqt_string host, int mode);
void QHstsPolicy_operatorAssign(QHstsPolicy* self, QHstsPolicy* rhs);
void QHstsPolicy_swap(QHstsPolicy* self, QHstsPolicy* other);
void QHstsPolicy_setHost(QHstsPolicy* self, struct miqt_string host);
struct miqt_string QHstsPolicy_host(const QHstsPolicy* self);
void QHstsPolicy_setExpiry(QHstsPolicy* self, QDateTime* expiry);
QDateTime* QHstsPolicy_expiry(const QHstsPolicy* self);
void QHstsPolicy_setIncludesSubDomains(QHstsPolicy* self, bool include);
bool QHstsPolicy_includesSubDomains(const QHstsPolicy* self);
bool QHstsPolicy_isExpired(const QHstsPolicy* self);
void QHstsPolicy_setHost2(QHstsPolicy* self, struct miqt_string host, int mode);
struct miqt_string QHstsPolicy_hostWithOptions(const QHstsPolicy* self, int options);
void QHstsPolicy_delete(QHstsPolicy* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
