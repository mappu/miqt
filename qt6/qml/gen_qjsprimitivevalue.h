#pragma once
#ifndef MIQT_QT6_QML_GEN_QJSPRIMITIVEVALUE_H
#define MIQT_QT6_QML_GEN_QJSPRIMITIVEVALUE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QJSPrimitiveNull;
class QJSPrimitiveUndefined;
class QJSPrimitiveValue;
class QMetaType;
class QVariant;
#else
typedef struct QJSPrimitiveNull QJSPrimitiveNull;
typedef struct QJSPrimitiveUndefined QJSPrimitiveUndefined;
typedef struct QJSPrimitiveValue QJSPrimitiveValue;
typedef struct QMetaType QMetaType;
typedef struct QVariant QVariant;
#endif

QJSPrimitiveUndefined* QJSPrimitiveUndefined_new();
QJSPrimitiveUndefined* QJSPrimitiveUndefined_new2(QJSPrimitiveUndefined* param1);
void QJSPrimitiveUndefined_delete(QJSPrimitiveUndefined* self);

QJSPrimitiveNull* QJSPrimitiveNull_new();
QJSPrimitiveNull* QJSPrimitiveNull_new2(QJSPrimitiveNull* param1);
void QJSPrimitiveNull_delete(QJSPrimitiveNull* self);

QJSPrimitiveValue* QJSPrimitiveValue_new();
QJSPrimitiveValue* QJSPrimitiveValue_new2(QJSPrimitiveUndefined* undefined);
QJSPrimitiveValue* QJSPrimitiveValue_new3(QJSPrimitiveNull* null);
QJSPrimitiveValue* QJSPrimitiveValue_new4(bool value);
QJSPrimitiveValue* QJSPrimitiveValue_new5(int value);
QJSPrimitiveValue* QJSPrimitiveValue_new6(double value);
QJSPrimitiveValue* QJSPrimitiveValue_new7(struct miqt_string string);
QJSPrimitiveValue* QJSPrimitiveValue_new8(QMetaType* type, const void* value);
QJSPrimitiveValue* QJSPrimitiveValue_new9(QVariant* variant);
QJSPrimitiveValue* QJSPrimitiveValue_new10(QJSPrimitiveValue* param1);
uint8_t QJSPrimitiveValue_type(const QJSPrimitiveValue* self);
bool QJSPrimitiveValue_toBoolean(const QJSPrimitiveValue* self);
int QJSPrimitiveValue_toInteger(const QJSPrimitiveValue* self);
double QJSPrimitiveValue_toDouble(const QJSPrimitiveValue* self);
struct miqt_string QJSPrimitiveValue_toString(const QJSPrimitiveValue* self);
QVariant* QJSPrimitiveValue_toVariant(const QJSPrimitiveValue* self);
QJSPrimitiveValue* QJSPrimitiveValue_operatorPlusPlus(QJSPrimitiveValue* self);
QJSPrimitiveValue* QJSPrimitiveValue_operatorPlusPlusWithInt(QJSPrimitiveValue* self, int param1);
QJSPrimitiveValue* QJSPrimitiveValue_operatorMinusMinus(QJSPrimitiveValue* self);
QJSPrimitiveValue* QJSPrimitiveValue_operatorMinusMinusWithInt(QJSPrimitiveValue* self, int param1);
QJSPrimitiveValue* QJSPrimitiveValue_operatorPlus(QJSPrimitiveValue* self);
QJSPrimitiveValue* QJSPrimitiveValue_operatorMinus(QJSPrimitiveValue* self);
bool QJSPrimitiveValue_strictlyEquals(const QJSPrimitiveValue* self, QJSPrimitiveValue* other);
bool QJSPrimitiveValue_equals(const QJSPrimitiveValue* self, QJSPrimitiveValue* other);

void QJSPrimitiveValue_delete(QJSPrimitiveValue* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
