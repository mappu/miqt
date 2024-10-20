#ifndef GEN_QCOMPARE_H
#define GEN_QCOMPARE_H

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
void QPartialOrdering_Delete(QPartialOrdering* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
