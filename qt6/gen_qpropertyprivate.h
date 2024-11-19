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

void QUntypedPropertyData_Delete(QUntypedPropertyData* self, bool isSubclass);

void QPropertyProxyBindingData_Delete(QPropertyProxyBindingData* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
