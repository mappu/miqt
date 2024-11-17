#pragma once
#ifndef MIQT_QT_GEN_QPAINTDEVICE_H
#define MIQT_QT_GEN_QPAINTDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPaintDevice;
class QPaintEngine;
#else
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
#endif

int QPaintDevice_DevType(const QPaintDevice* self);
bool QPaintDevice_PaintingActive(const QPaintDevice* self);
QPaintEngine* QPaintDevice_PaintEngine(const QPaintDevice* self);
int QPaintDevice_Width(const QPaintDevice* self);
int QPaintDevice_Height(const QPaintDevice* self);
int QPaintDevice_WidthMM(const QPaintDevice* self);
int QPaintDevice_HeightMM(const QPaintDevice* self);
int QPaintDevice_LogicalDpiX(const QPaintDevice* self);
int QPaintDevice_LogicalDpiY(const QPaintDevice* self);
int QPaintDevice_PhysicalDpiX(const QPaintDevice* self);
int QPaintDevice_PhysicalDpiY(const QPaintDevice* self);
int QPaintDevice_DevicePixelRatio(const QPaintDevice* self);
double QPaintDevice_DevicePixelRatioF(const QPaintDevice* self);
int QPaintDevice_ColorCount(const QPaintDevice* self);
int QPaintDevice_Depth(const QPaintDevice* self);
double QPaintDevice_DevicePixelRatioFScale();
void QPaintDevice_Delete(QPaintDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
