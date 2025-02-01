#pragma once
#ifndef MIQT_QT6_GEN_QVARLENGTHARRAY_H
#define MIQT_QT6_GEN_QVARLENGTHARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QVLABaseBase;
#else
typedef struct QVLABaseBase QVLABaseBase;
#endif

ptrdiff_t QVLABaseBase_capacity(const QVLABaseBase* self);
ptrdiff_t QVLABaseBase_size(const QVLABaseBase* self);
bool QVLABaseBase_empty(const QVLABaseBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
