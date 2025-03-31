#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QBOXPLOTMODELMAPPER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QBOXPLOTMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemModel;
class QBoxPlotModelMapper;
class QBoxPlotSeries;
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QBoxPlotModelMapper QBoxPlotModelMapper;
typedef struct QBoxPlotSeries QBoxPlotSeries;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QBoxPlotModelMapper_virtbase(QBoxPlotModelMapper* src, QObject** outptr_QObject);
QMetaObject* QBoxPlotModelMapper_metaObject(const QBoxPlotModelMapper* self);
void* QBoxPlotModelMapper_metacast(QBoxPlotModelMapper* self, const char* param1);
struct miqt_string QBoxPlotModelMapper_tr(const char* s);
struct miqt_string QBoxPlotModelMapper_tr2(const char* s, const char* c);
struct miqt_string QBoxPlotModelMapper_tr3(const char* s, const char* c, int n);
void QBoxPlotModelMapper_delete(QBoxPlotModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
