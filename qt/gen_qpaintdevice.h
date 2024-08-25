#ifndef GEN_QPAINTDEVICE_H
#define GEN_QPAINTDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

int QPaintDevice_DevType(QPaintDevice* self);
bool QPaintDevice_PaintingActive(QPaintDevice* self);
QPaintEngine* QPaintDevice_PaintEngine(QPaintDevice* self);
int QPaintDevice_Width(QPaintDevice* self);
int QPaintDevice_Height(QPaintDevice* self);
int QPaintDevice_WidthMM(QPaintDevice* self);
int QPaintDevice_HeightMM(QPaintDevice* self);
int QPaintDevice_LogicalDpiX(QPaintDevice* self);
int QPaintDevice_LogicalDpiY(QPaintDevice* self);
int QPaintDevice_PhysicalDpiX(QPaintDevice* self);
int QPaintDevice_PhysicalDpiY(QPaintDevice* self);
int QPaintDevice_DevicePixelRatio(QPaintDevice* self);
double QPaintDevice_DevicePixelRatioF(QPaintDevice* self);
int QPaintDevice_ColorCount(QPaintDevice* self);
int QPaintDevice_Depth(QPaintDevice* self);
double QPaintDevice_DevicePixelRatioFScale();
void QPaintDevice_Delete(QPaintDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
