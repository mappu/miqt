#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QBARMODELMAPPER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QBARMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractBarSeries;
class QAbstractItemModel;
class QBarModelMapper;
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QAbstractBarSeries QAbstractBarSeries;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QBarModelMapper QBarModelMapper;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QBarModelMapper_virtbase(QBarModelMapper* src, QObject** outptr_QObject);
QMetaObject* QBarModelMapper_metaObject(const QBarModelMapper* self);
void* QBarModelMapper_metacast(QBarModelMapper* self, const char* param1);
struct miqt_string QBarModelMapper_tr(const char* s);
struct miqt_string QBarModelMapper_tr2(const char* s, const char* c);
struct miqt_string QBarModelMapper_tr3(const char* s, const char* c, int n);

void QBarModelMapper_delete(QBarModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
