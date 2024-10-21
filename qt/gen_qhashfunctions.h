#ifndef GEN_QHASHFUNCTIONS_H
#define GEN_QHASHFUNCTIONS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
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
typedef struct QtPrivate__QHashCombine QtPrivate__QHashCombine;
typedef struct QtPrivate__QHashCombineCommutative QtPrivate__QHashCombineCommutative;
#endif

QtPrivate__QHashCombine* QtPrivate__QHashCombine_new();
void QtPrivate__QHashCombine_Delete(QtPrivate__QHashCombine* self);

QtPrivate__QHashCombineCommutative* QtPrivate__QHashCombineCommutative_new();
void QtPrivate__QHashCombineCommutative_Delete(QtPrivate__QHashCombineCommutative* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
