#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QSSLELLIPTICCURVE_H
#define MIQT_QT6_NETWORK_GEN_QSSLELLIPTICCURVE_H

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
QSslEllipticCurve* QSslEllipticCurve_fromShortName(struct miqt_string name);
QSslEllipticCurve* QSslEllipticCurve_fromLongName(struct miqt_string name);
struct miqt_string QSslEllipticCurve_shortName(const QSslEllipticCurve* self);
struct miqt_string QSslEllipticCurve_longName(const QSslEllipticCurve* self);
bool QSslEllipticCurve_isValid(const QSslEllipticCurve* self);
bool QSslEllipticCurve_isTlsNamedCurve(const QSslEllipticCurve* self);
void QSslEllipticCurve_delete(QSslEllipticCurve* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
