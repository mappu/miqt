#pragma once
#ifndef MIQT_QT6_GEN_QPROPERTYPRIVATE_H
#define MIQT_QT6_GEN_QPROPERTYPRIVATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPropertyProxyBindingData;
class QUntypedPropertyData;
#else
typedef struct QPropertyProxyBindingData QPropertyProxyBindingData;
typedef struct QUntypedPropertyData QUntypedPropertyData;
#endif

void QUntypedPropertyData_delete(QUntypedPropertyData* self);

uintptr_t QPropertyProxyBindingData_dPtr(const QPropertyProxyBindingData* self);
void QPropertyProxyBindingData_setDPtr(QPropertyProxyBindingData* self, uintptr_t d_ptr);
QUntypedPropertyData* QPropertyProxyBindingData_propertyData(const QPropertyProxyBindingData* self);
void QPropertyProxyBindingData_setPropertyData(QPropertyProxyBindingData* self, QUntypedPropertyData* propertyData);

void QPropertyProxyBindingData_delete(QPropertyProxyBindingData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
