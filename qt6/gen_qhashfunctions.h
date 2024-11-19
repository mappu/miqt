#pragma once
#ifndef MIQT_QT6_GEN_QHASHFUNCTIONS_H
#define MIQT_QT6_GEN_QHASHFUNCTIONS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QHashSeed;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__QHashCombine)
typedef QtPrivate::QHashCombine QtPrivate__QHashCombine;
#else
class QtPrivate__QHashCombine;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__QHashCombineCommutative)
typedef QtPrivate::QHashCombineCommutative QtPrivate__QHashCombineCommutative;
#else
class QtPrivate__QHashCombineCommutative;
#endif
#else
typedef struct QHashSeed QHashSeed;
typedef struct QtPrivate__QHashCombine QtPrivate__QHashCombine;
typedef struct QtPrivate__QHashCombineCommutative QtPrivate__QHashCombineCommutative;
#endif

void QHashSeed_new(QHashSeed** outptr_QHashSeed);
void QHashSeed_new2(size_t d, QHashSeed** outptr_QHashSeed);
QHashSeed* QHashSeed_GlobalSeed();
void QHashSeed_SetDeterministicGlobalSeed();
void QHashSeed_ResetRandomGlobalSeed();
void QHashSeed_Delete(QHashSeed* self, bool isSubclass);

void QtPrivate__QHashCombine_new(QtPrivate__QHashCombine** outptr_QtPrivate__QHashCombine);
void QtPrivate__QHashCombine_Delete(QtPrivate__QHashCombine* self, bool isSubclass);

void QtPrivate__QHashCombineCommutative_new(QtPrivate__QHashCombineCommutative** outptr_QtPrivate__QHashCombineCommutative);
void QtPrivate__QHashCombineCommutative_Delete(QtPrivate__QHashCombineCommutative* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
