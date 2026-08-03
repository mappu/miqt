#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_DICT_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PLOT_DICT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QwtPlotDict;
class QwtPlotItem;
#else
typedef struct QwtPlotDict QwtPlotDict;
typedef struct QwtPlotItem QwtPlotItem;
#endif

QwtPlotDict* QwtPlotDict_new();
void QwtPlotDict_setAutoDelete(QwtPlotDict* self, bool autoDelete);
bool QwtPlotDict_autoDelete(const QwtPlotDict* self);
struct miqt_array /* of QwtPlotItem* */  QwtPlotDict_itemList(const QwtPlotDict* self);
struct miqt_array /* of QwtPlotItem* */  QwtPlotDict_itemListWithRtti(const QwtPlotDict* self, int rtti);
void QwtPlotDict_detachItems(QwtPlotDict* self);
void QwtPlotDict_operatorAssign(QwtPlotDict* self, QwtPlotDict* param1);
void QwtPlotDict_detachItemsWithRtti(QwtPlotDict* self, int rtti);
void QwtPlotDict_detachItems2(QwtPlotDict* self, int rtti, bool autoDelete);

void QwtPlotDict_delete(QwtPlotDict* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
