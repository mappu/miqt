#pragma once
#ifndef MIQT_QT_GEN_QSCROLLERPROPERTIES_H
#define MIQT_QT_GEN_QSCROLLERPROPERTIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QScrollerProperties;
class QVariant;
#else
typedef struct QScrollerProperties QScrollerProperties;
typedef struct QVariant QVariant;
#endif

void QScrollerProperties_new(QScrollerProperties** outptr_QScrollerProperties);
void QScrollerProperties_new2(QScrollerProperties* sp, QScrollerProperties** outptr_QScrollerProperties);
void QScrollerProperties_OperatorAssign(QScrollerProperties* self, QScrollerProperties* sp);
bool QScrollerProperties_OperatorEqual(const QScrollerProperties* self, QScrollerProperties* sp);
bool QScrollerProperties_OperatorNotEqual(const QScrollerProperties* self, QScrollerProperties* sp);
void QScrollerProperties_SetDefaultScrollerProperties(QScrollerProperties* sp);
void QScrollerProperties_UnsetDefaultScrollerProperties();
QVariant* QScrollerProperties_ScrollMetric(const QScrollerProperties* self, int metric);
void QScrollerProperties_SetScrollMetric(QScrollerProperties* self, int metric, QVariant* value);
void QScrollerProperties_Delete(QScrollerProperties* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
