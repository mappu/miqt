#pragma once
#ifndef MIQT_QT_GEN_QDRAWUTIL_H
#define MIQT_QT_GEN_QDRAWUTIL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QTileRules;
#else
typedef struct QTileRules QTileRules;
#endif

void QTileRules_new(int horizontalRule, int verticalRule, QTileRules** outptr_QTileRules);
void QTileRules_new2(QTileRules** outptr_QTileRules);
void QTileRules_new3(QTileRules* param1, QTileRules** outptr_QTileRules);
void QTileRules_new4(int rule, QTileRules** outptr_QTileRules);
void QTileRules_Delete(QTileRules* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
