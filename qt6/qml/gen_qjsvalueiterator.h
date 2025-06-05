#pragma once
#ifndef MIQT_QT6_QML_GEN_QJSVALUEITERATOR_H
#define MIQT_QT6_QML_GEN_QJSVALUEITERATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QJSValue;
class QJSValueIterator;
#else
typedef struct QJSValue QJSValue;
typedef struct QJSValueIterator QJSValueIterator;
#endif

QJSValueIterator* QJSValueIterator_new(QJSValue* value);
bool QJSValueIterator_hasNext(const QJSValueIterator* self);
bool QJSValueIterator_next(QJSValueIterator* self);
struct miqt_string QJSValueIterator_name(const QJSValueIterator* self);
QJSValue* QJSValueIterator_value(const QJSValueIterator* self);
void QJSValueIterator_operatorAssign(QJSValueIterator* self, QJSValue* value);

void QJSValueIterator_delete(QJSValueIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
