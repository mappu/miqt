#pragma once
#ifndef MIQT_QT6_GEN_QCOMPARE_H
#define MIQT_QT6_GEN_QCOMPARE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPartialOrdering;
#else
typedef struct QPartialOrdering QPartialOrdering;
#endif

QPartialOrdering* QPartialOrdering_new(QPartialOrdering* param1);
void QPartialOrdering_delete(QPartialOrdering* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
