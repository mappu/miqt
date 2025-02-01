#pragma once
#ifndef MIQT_QT6_GEN_QPAINTDEVICE_H
#define MIQT_QT6_GEN_QPAINTDEVICE_H

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
class QPainter;
class QPoint;
#else
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
#endif

int QPaintDevice_devType(const QPaintDevice* self);
bool QPaintDevice_paintingActive(const QPaintDevice* self);
QPaintEngine* QPaintDevice_paintEngine(const QPaintDevice* self);
int QPaintDevice_width(const QPaintDevice* self);
int QPaintDevice_height(const QPaintDevice* self);
int QPaintDevice_widthMM(const QPaintDevice* self);
int QPaintDevice_heightMM(const QPaintDevice* self);
int QPaintDevice_logicalDpiX(const QPaintDevice* self);
int QPaintDevice_logicalDpiY(const QPaintDevice* self);
int QPaintDevice_physicalDpiX(const QPaintDevice* self);
int QPaintDevice_physicalDpiY(const QPaintDevice* self);
double QPaintDevice_devicePixelRatio(const QPaintDevice* self);
double QPaintDevice_devicePixelRatioF(const QPaintDevice* self);
int QPaintDevice_colorCount(const QPaintDevice* self);
int QPaintDevice_depth(const QPaintDevice* self);
double QPaintDevice_devicePixelRatioFScale();
int QPaintDevice_metric(const QPaintDevice* self, int metric);
void QPaintDevice_initPainter(const QPaintDevice* self, QPainter* painter);
QPaintDevice* QPaintDevice_redirected(const QPaintDevice* self, QPoint* offset);
QPainter* QPaintDevice_sharedPainter(const QPaintDevice* self);
void QPaintDevice_delete(QPaintDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
