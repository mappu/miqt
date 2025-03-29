#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QPIEMODELMAPPER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QPIEMODELMAPPER_H

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
class QMetaMethod;
class QMetaObject;
class QObject;
class QPieModelMapper;
class QPieSeries;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPieModelMapper QPieModelMapper;
typedef struct QPieSeries QPieSeries;
#endif

void QPieModelMapper_virtbase(QPieModelMapper* src, QObject** outptr_QObject);
QMetaObject* QPieModelMapper_metaObject(const QPieModelMapper* self);
void* QPieModelMapper_metacast(QPieModelMapper* self, const char* param1);
struct miqt_string QPieModelMapper_tr(const char* s);
struct miqt_string QPieModelMapper_tr2(const char* s, const char* c);
struct miqt_string QPieModelMapper_tr3(const char* s, const char* c, int n);
void QPieModelMapper_delete(QPieModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
