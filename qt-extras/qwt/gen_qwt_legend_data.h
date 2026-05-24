#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_LEGEND_DATA_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_LEGEND_DATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QVariant;
class QwtGraphic;
class QwtLegendData;
class QwtText;
#else
typedef struct QVariant QVariant;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtLegendData QwtLegendData;
typedef struct QwtText QwtText;
#endif

QwtLegendData* QwtLegendData_new();
QwtLegendData* QwtLegendData_new2(QwtLegendData* param1);
void QwtLegendData_setValues(QwtLegendData* self, struct miqt_map /* of int to QVariant* */  values);
struct miqt_map /* of int to QVariant* */  QwtLegendData_values(const QwtLegendData* self);
void QwtLegendData_setValue(QwtLegendData* self, int role, QVariant* param2);
QVariant* QwtLegendData_value(const QwtLegendData* self, int role);
bool QwtLegendData_hasRole(const QwtLegendData* self, int role);
bool QwtLegendData_isValid(const QwtLegendData* self);
QwtGraphic* QwtLegendData_icon(const QwtLegendData* self);
QwtText* QwtLegendData_title(const QwtLegendData* self);
int QwtLegendData_mode(const QwtLegendData* self);
void QwtLegendData_operatorAssign(QwtLegendData* self, QwtLegendData* param1);

void QwtLegendData_delete(QwtLegendData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
