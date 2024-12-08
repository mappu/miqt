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
struct miqt_string QSvgGenerator_Title(const QSvgGenerator* self);
void QSvgGenerator_SetTitle(QSvgGenerator* self, struct miqt_string title);
struct miqt_string QSvgGenerator_Description(const QSvgGenerator* self);
void QSvgGenerator_SetDescription(QSvgGenerator* self, struct miqt_string description);
QSize* QSvgGenerator_Size(const QSvgGenerator* self);
void QSvgGenerator_SetSize(QSvgGenerator* self, QSize* size);
QRect* QSvgGenerator_ViewBox(const QSvgGenerator* self);
QRectF* QSvgGenerator_ViewBoxF(const QSvgGenerator* self);
void QSvgGenerator_SetViewBox(QSvgGenerator* self, QRect* viewBox);
void QSvgGenerator_SetViewBoxWithViewBox(QSvgGenerator* self, QRectF* viewBox);
struct miqt_string QSvgGenerator_FileName(const QSvgGenerator* self);
void QSvgGenerator_SetFileName(QSvgGenerator* self, struct miqt_string fileName);
QIODevice* QSvgGenerator_OutputDevice(const QSvgGenerator* self);
void QSvgGenerator_SetOutputDevice(QSvgGenerator* self, QIODevice* outputDevice);
void QSvgGenerator_SetResolution(QSvgGenerator* self, int dpi);
int QSvgGenerator_Resolution(const QSvgGenerator* self);
QPaintEngine* QSvgGenerator_PaintEngine(const QSvgGenerator* self);
int QSvgGenerator_Metric(const QSvgGenerator* self, int metric);
void QSvgGenerator_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QSvgGenerator_virtualbase_PaintEngine(const void* self);
void QSvgGenerator_override_virtual_Metric(void* self, intptr_t slot);
int QSvgGenerator_virtualbase_Metric(const void* self, int metric);
void QSvgGenerator_override_virtual_DevType(void* self, intptr_t slot);
int QSvgGenerator_virtualbase_DevType(const void* self);
void QSvgGenerator_override_virtual_InitPainter(void* self, intptr_t slot);
void QSvgGenerator_virtualbase_InitPainter(const void* self, QPainter* painter);
void QSvgGenerator_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QSvgGenerator_virtualbase_Redirected(const void* self, QPoint* offset);
void QSvgGenerator_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QSvgGenerator_virtualbase_SharedPainter(const void* self);
void QSvgGenerator_Delete(QSvgGenerator* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
