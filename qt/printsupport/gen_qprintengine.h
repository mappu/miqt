#pragma once
#ifndef MIQT_QT_PRINTSUPPORT_GEN_QPRINTENGINE_H
#define MIQT_QT_PRINTSUPPORT_GEN_QPRINTENGINE_H

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

void QPrintEngine_SetProperty(QPrintEngine* self, int key, QVariant* value);
QVariant* QPrintEngine_Property(const QPrintEngine* self, int key);
bool QPrintEngine_NewPage(QPrintEngine* self);
bool QPrintEngine_Abort(QPrintEngine* self);
int QPrintEngine_Metric(const QPrintEngine* self, int param1);
int QPrintEngine_PrinterState(const QPrintEngine* self);
void QPrintEngine_OperatorAssign(QPrintEngine* self, QPrintEngine* param1);
void QPrintEngine_Delete(QPrintEngine* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
