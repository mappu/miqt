#ifndef GEN_QHSTSPOLICY_H
#define GEN_QHSTSPOLICY_H

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
struct miqt_string QHstsPolicy_Host1(const QHstsPolicy* self, unsigned int options);
void QHstsPolicy_Delete(QHstsPolicy* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
