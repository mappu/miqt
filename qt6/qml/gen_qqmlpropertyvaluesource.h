#pragma once
#ifndef MIQT_QT6_QML_GEN_QQMLPROPERTYVALUESOURCE_H
#define MIQT_QT6_QML_GEN_QQMLPROPERTYVALUESOURCE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QQmlProperty;
class QQmlPropertyValueSource;
#else
typedef struct QQmlProperty QQmlProperty;
typedef struct QQmlPropertyValueSource QQmlPropertyValueSource;
#endif

QQmlPropertyValueSource* QQmlPropertyValueSource_new();
void QQmlPropertyValueSource_setTarget(QQmlPropertyValueSource* self, QQmlProperty* target);
void QQmlPropertyValueSource_operatorAssign(QQmlPropertyValueSource* self, QQmlPropertyValueSource* param1);
bool QQmlPropertyValueSource_override_virtual_setTarget(void* self, intptr_t slot);
void QQmlPropertyValueSource_virtualbase_setTarget(void* self, QQmlProperty* target);
void QQmlPropertyValueSource_delete(QQmlPropertyValueSource* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
