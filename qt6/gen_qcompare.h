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

void QPartialOrdering_new(QPartialOrdering* param1, QPartialOrdering** outptr_QPartialOrdering);
void QPartialOrdering_Delete(QPartialOrdering* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
