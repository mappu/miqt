#ifndef GEN_QTOUCHDEVICE_H
#define GEN_QTOUCHDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QTouchDevice;
#else
typedef struct QTouchDevice QTouchDevice;
#endif

QTouchDevice* QTouchDevice_new();
struct miqt_array* QTouchDevice_Devices();
struct miqt_string* QTouchDevice_Name(const QTouchDevice* self);
int QTouchDevice_Type(const QTouchDevice* self);
int QTouchDevice_Capabilities(const QTouchDevice* self);
int QTouchDevice_MaximumTouchPoints(const QTouchDevice* self);
void QTouchDevice_SetName(QTouchDevice* self, struct miqt_string* name);
void QTouchDevice_SetType(QTouchDevice* self, int devType);
void QTouchDevice_SetCapabilities(QTouchDevice* self, int caps);
void QTouchDevice_SetMaximumTouchPoints(QTouchDevice* self, int max);
void QTouchDevice_Delete(QTouchDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
