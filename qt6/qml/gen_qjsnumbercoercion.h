#pragma once
#ifndef MIQT_QT6_QML_GEN_QJSNUMBERCOERCION_H
#define MIQT_QT6_QML_GEN_QJSNUMBERCOERCION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QJSNumberCoercion;
#else
typedef struct QJSNumberCoercion QJSNumberCoercion;
#endif

QJSNumberCoercion* QJSNumberCoercion_new(QJSNumberCoercion* param1);
bool QJSNumberCoercion_isInteger(double d);
int QJSNumberCoercion_toInteger(double d);
bool QJSNumberCoercion_equals(double lhs, double rhs);
void QJSNumberCoercion_delete(QJSNumberCoercion* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
