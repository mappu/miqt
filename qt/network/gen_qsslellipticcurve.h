#pragma once
#ifndef MIQT_QT_NETWORK_GEN_QSSLELLIPTICCURVE_H
#define MIQT_QT_NETWORK_GEN_QSSLELLIPTICCURVE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSslEllipticCurve;
#else
typedef struct QSslEllipticCurve QSslEllipticCurve;
#endif

QSslEllipticCurve* QSslEllipticCurve_new();
QSslEllipticCurve* QSslEllipticCurve_new2(QSslEllipticCurve* param1);
QSslEllipticCurve* QSslEllipticCurve_FromShortName(struct miqt_string name);
QSslEllipticCurve* QSslEllipticCurve_FromLongName(struct miqt_string name);
struct miqt_string QSslEllipticCurve_ShortName(const QSslEllipticCurve* self);
struct miqt_string QSslEllipticCurve_LongName(const QSslEllipticCurve* self);
bool QSslEllipticCurve_IsValid(const QSslEllipticCurve* self);
bool QSslEllipticCurve_IsTlsNamedCurve(const QSslEllipticCurve* self);
void QSslEllipticCurve_Delete(QSslEllipticCurve* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
