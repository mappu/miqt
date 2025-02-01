#pragma once
#ifndef MIQT_QT6_PRINTSUPPORT_GEN_QPRINTENGINE_H
#define MIQT_QT6_PRINTSUPPORT_GEN_QPRINTENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPrintEngine;
class QVariant;
#else
typedef struct QPrintEngine QPrintEngine;
typedef struct QVariant QVariant;
#endif

void QPrintEngine_setProperty(QPrintEngine* self, int key, QVariant* value);
QVariant* QPrintEngine_property(const QPrintEngine* self, int key);
bool QPrintEngine_newPage(QPrintEngine* self);
bool QPrintEngine_abort(QPrintEngine* self);
int QPrintEngine_metric(const QPrintEngine* self, int param1);
int QPrintEngine_printerState(const QPrintEngine* self);
void QPrintEngine_operatorAssign(QPrintEngine* self, QPrintEngine* param1);
void QPrintEngine_delete(QPrintEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
