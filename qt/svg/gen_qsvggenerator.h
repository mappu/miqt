#pragma once
#ifndef MIQT_QT_SVG_GEN_QSVGGENERATOR_H
#define MIQT_QT_SVG_GEN_QSVGGENERATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIODevice;
class QPaintDevice;
class QPaintEngine;
class QPainter;
class QPoint;
class QRect;
class QRectF;
class QSize;
class QSvgGenerator;
#else
typedef struct QIODevice QIODevice;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QSvgGenerator QSvgGenerator;
#endif

QSvgGenerator* QSvgGenerator_new();
void QSvgGenerator_virtbase(QSvgGenerator* src, QPaintDevice** outptr_QPaintDevice);
struct miqt_string QSvgGenerator_title(const QSvgGenerator* self);
void QSvgGenerator_setTitle(QSvgGenerator* self, struct miqt_string title);
struct miqt_string QSvgGenerator_description(const QSvgGenerator* self);
void QSvgGenerator_setDescription(QSvgGenerator* self, struct miqt_string description);
QSize* QSvgGenerator_size(const QSvgGenerator* self);
void QSvgGenerator_setSize(QSvgGenerator* self, QSize* size);
QRect* QSvgGenerator_viewBox(const QSvgGenerator* self);
QRectF* QSvgGenerator_viewBoxF(const QSvgGenerator* self);
void QSvgGenerator_setViewBox(QSvgGenerator* self, QRect* viewBox);
void QSvgGenerator_setViewBoxWithViewBox(QSvgGenerator* self, QRectF* viewBox);
struct miqt_string QSvgGenerator_fileName(const QSvgGenerator* self);
void QSvgGenerator_setFileName(QSvgGenerator* self, struct miqt_string fileName);
QIODevice* QSvgGenerator_outputDevice(const QSvgGenerator* self);
void QSvgGenerator_setOutputDevice(QSvgGenerator* self, QIODevice* outputDevice);
void QSvgGenerator_setResolution(QSvgGenerator* self, int dpi);
int QSvgGenerator_resolution(const QSvgGenerator* self);
QPaintEngine* QSvgGenerator_paintEngine(const QSvgGenerator* self);
int QSvgGenerator_metric(const QSvgGenerator* self, int metric);
bool QSvgGenerator_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QSvgGenerator_virtualbase_paintEngine(const void* self);
bool QSvgGenerator_override_virtual_metric(void* self, intptr_t slot);
int QSvgGenerator_virtualbase_metric(const void* self, int metric);
bool QSvgGenerator_override_virtual_devType(void* self, intptr_t slot);
int QSvgGenerator_virtualbase_devType(const void* self);
bool QSvgGenerator_override_virtual_initPainter(void* self, intptr_t slot);
void QSvgGenerator_virtualbase_initPainter(const void* self, QPainter* painter);
bool QSvgGenerator_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QSvgGenerator_virtualbase_redirected(const void* self, QPoint* offset);
bool QSvgGenerator_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QSvgGenerator_virtualbase_sharedPainter(const void* self);
void QSvgGenerator_delete(QSvgGenerator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
