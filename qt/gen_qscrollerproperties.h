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

QScrollerProperties* QScrollerProperties_new();
QScrollerProperties* QScrollerProperties_new2(QScrollerProperties* sp);
void QScrollerProperties_operatorAssign(QScrollerProperties* self, QScrollerProperties* sp);
bool QScrollerProperties_operatorEqual(const QScrollerProperties* self, QScrollerProperties* sp);
bool QScrollerProperties_operatorNotEqual(const QScrollerProperties* self, QScrollerProperties* sp);
void QScrollerProperties_setDefaultScrollerProperties(QScrollerProperties* sp);
void QScrollerProperties_unsetDefaultScrollerProperties();
QVariant* QScrollerProperties_scrollMetric(const QScrollerProperties* self, int metric);
void QScrollerProperties_setScrollMetric(QScrollerProperties* self, int metric, QVariant* value);

void QScrollerProperties_delete(QScrollerProperties* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
