#pragma once
#ifndef MIQT_QT6_GEN_QDRAWUTIL_H
#define MIQT_QT6_GEN_QDRAWUTIL_H

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

QTileRules* QTileRules_new(int horizontalRule, int verticalRule);
QTileRules* QTileRules_new2();
QTileRules* QTileRules_new3(QTileRules* param1);
QTileRules* QTileRules_new4(int rule);
int QTileRules_horizontal(const QTileRules* self);
void QTileRules_setHorizontal(QTileRules* self, int horizontal);
int QTileRules_vertical(const QTileRules* self);
void QTileRules_setVertical(QTileRules* self, int vertical);

void QTileRules_delete(QTileRules* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
