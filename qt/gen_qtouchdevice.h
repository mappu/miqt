#pragma once
#ifndef MIQT_QT_GEN_QTOUCHDEVICE_H
#define MIQT_QT_GEN_QTOUCHDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QTouchDevice;
#else
typedef struct QTouchDevice QTouchDevice;
#endif

QTouchDevice* QTouchDevice_new();
struct miqt_array /* of QTouchDevice* */  QTouchDevice_devices();
struct miqt_string QTouchDevice_name(const QTouchDevice* self);
int QTouchDevice_type(const QTouchDevice* self);
int QTouchDevice_capabilities(const QTouchDevice* self);
int QTouchDevice_maximumTouchPoints(const QTouchDevice* self);
void QTouchDevice_setName(QTouchDevice* self, struct miqt_string name);
void QTouchDevice_setType(QTouchDevice* self, int devType);
void QTouchDevice_setCapabilities(QTouchDevice* self, int caps);
void QTouchDevice_setMaximumTouchPoints(QTouchDevice* self, int max);
void QTouchDevice_delete(QTouchDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
