#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QXYMODELMAPPER_H
#define MIQT_QT_RESTRICTED_EXTRAS_CHARTS6_GEN_QXYMODELMAPPER_H

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
class QXYModelMapper;
class QXYSeries;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QXYModelMapper QXYModelMapper;
typedef struct QXYSeries QXYSeries;
#endif

void QXYModelMapper_virtbase(QXYModelMapper* src, QObject** outptr_QObject);
QMetaObject* QXYModelMapper_metaObject(const QXYModelMapper* self);
void* QXYModelMapper_metacast(QXYModelMapper* self, const char* param1);
struct miqt_string QXYModelMapper_tr(const char* s);
struct miqt_string QXYModelMapper_tr2(const char* s, const char* c);
struct miqt_string QXYModelMapper_tr3(const char* s, const char* c, int n);
void QXYModelMapper_delete(QXYModelMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
