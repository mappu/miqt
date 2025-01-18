#pragma once
#ifndef MIQT_QT_GEN_QPAGEDPAINTDEVICE_H
#define MIQT_QT_GEN_QPAGEDPAINTDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMarginsF;
class QPageLayout;
class QPageSize;
class QPagedPaintDevice;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QPagedPaintDevice__Margins)
typedef QPagedPaintDevice::Margins QPagedPaintDevice__Margins;
#else
class QPagedPaintDevice__Margins;
#endif
class QPaintDevice;
class QPaintEngine;
class QPainter;
class QPoint;
class QSizeF;
#else
typedef struct QMarginsF QMarginsF;
typedef struct QPageLayout QPageLayout;
typedef struct QPageSize QPageSize;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPagedPaintDevice__Margins QPagedPaintDevice__Margins;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QSizeF QSizeF;
#endif

QPagedPaintDevice* QPagedPaintDevice_new();
void QPagedPaintDevice_virtbase(QPagedPaintDevice* src, QPaintDevice** outptr_QPaintDevice);
bool QPagedPaintDevice_NewPage(QPagedPaintDevice* self);
bool QPagedPaintDevice_SetPageLayout(QPagedPaintDevice* self, QPageLayout* pageLayout);
bool QPagedPaintDevice_SetPageSize(QPagedPaintDevice* self, QPageSize* pageSize);
bool QPagedPaintDevice_SetPageOrientation(QPagedPaintDevice* self, int orientation);
bool QPagedPaintDevice_SetPageMargins(QPagedPaintDevice* self, QMarginsF* margins);
bool QPagedPaintDevice_SetPageMargins2(QPagedPaintDevice* self, QMarginsF* margins, int units);
QPageLayout* QPagedPaintDevice_PageLayout(const QPagedPaintDevice* self);
void QPagedPaintDevice_SetPageSizeWithSize(QPagedPaintDevice* self, int size);
int QPagedPaintDevice_PageSize(const QPagedPaintDevice* self);
void QPagedPaintDevice_SetPageSizeMM(QPagedPaintDevice* self, QSizeF* size);
QSizeF* QPagedPaintDevice_PageSizeMM(const QPagedPaintDevice* self);
void QPagedPaintDevice_SetMargins(QPagedPaintDevice* self, QPagedPaintDevice__Margins* margins);
QPagedPaintDevice__Margins* QPagedPaintDevice_Margins(const QPagedPaintDevice* self);
void QPagedPaintDevice_override_virtual_NewPage(void* self, intptr_t slot);
bool QPagedPaintDevice_virtualbase_NewPage(void* self);
void QPagedPaintDevice_override_virtual_SetPageSizeWithSize(void* self, intptr_t slot);
void QPagedPaintDevice_virtualbase_SetPageSizeWithSize(void* self, int size);
void QPagedPaintDevice_override_virtual_SetPageSizeMM(void* self, intptr_t slot);
void QPagedPaintDevice_virtualbase_SetPageSizeMM(void* self, QSizeF* size);
void QPagedPaintDevice_override_virtual_SetMargins(void* self, intptr_t slot);
void QPagedPaintDevice_virtualbase_SetMargins(void* self, QPagedPaintDevice__Margins* margins);
void QPagedPaintDevice_override_virtual_DevType(void* self, intptr_t slot);
int QPagedPaintDevice_virtualbase_DevType(const void* self);
void QPagedPaintDevice_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QPagedPaintDevice_virtualbase_PaintEngine(const void* self);
void QPagedPaintDevice_override_virtual_Metric(void* self, intptr_t slot);
int QPagedPaintDevice_virtualbase_Metric(const void* self, int metric);
void QPagedPaintDevice_override_virtual_InitPainter(void* self, intptr_t slot);
void QPagedPaintDevice_virtualbase_InitPainter(const void* self, QPainter* painter);
void QPagedPaintDevice_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QPagedPaintDevice_virtualbase_Redirected(const void* self, QPoint* offset);
void QPagedPaintDevice_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QPagedPaintDevice_virtualbase_SharedPainter(const void* self);
void QPagedPaintDevice_Delete(QPagedPaintDevice* self);

void QPagedPaintDevice__Margins_Delete(QPagedPaintDevice__Margins* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
