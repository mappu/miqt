#ifndef GEN_QDRAWUTIL_H
#define GEN_QDRAWUTIL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QTileRules;
#else
typedef struct QTileRules QTileRules;
#endif

QTileRules* QTileRules_new(QTileRules* param1);
void QTileRules_Delete(QTileRules* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
