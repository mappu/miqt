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
bool QPagedPaintDevice_newPage(QPagedPaintDevice* self);
bool QPagedPaintDevice_setPageLayout(QPagedPaintDevice* self, QPageLayout* pageLayout);
bool QPagedPaintDevice_setPageSize(QPagedPaintDevice* self, QPageSize* pageSize);
bool QPagedPaintDevice_setPageOrientation(QPagedPaintDevice* self, int orientation);
bool QPagedPaintDevice_setPageMargins(QPagedPaintDevice* self, QMarginsF* margins);
bool QPagedPaintDevice_setPageMargins2(QPagedPaintDevice* self, QMarginsF* margins, int units);
QPageLayout* QPagedPaintDevice_pageLayout(const QPagedPaintDevice* self);
void QPagedPaintDevice_setPageSizeWithSize(QPagedPaintDevice* self, int size);
int QPagedPaintDevice_pageSize(const QPagedPaintDevice* self);
void QPagedPaintDevice_setPageSizeMM(QPagedPaintDevice* self, QSizeF* size);
QSizeF* QPagedPaintDevice_pageSizeMM(const QPagedPaintDevice* self);
void QPagedPaintDevice_setMargins(QPagedPaintDevice* self, QPagedPaintDevice__Margins* margins);
QPagedPaintDevice__Margins* QPagedPaintDevice_margins(const QPagedPaintDevice* self);
bool QPagedPaintDevice_override_virtual_newPage(void* self, intptr_t slot);
bool QPagedPaintDevice_virtualbase_newPage(void* self);
bool QPagedPaintDevice_override_virtual_setPageSizeWithSize(void* self, intptr_t slot);
void QPagedPaintDevice_virtualbase_setPageSizeWithSize(void* self, int size);
bool QPagedPaintDevice_override_virtual_setPageSizeMM(void* self, intptr_t slot);
void QPagedPaintDevice_virtualbase_setPageSizeMM(void* self, QSizeF* size);
bool QPagedPaintDevice_override_virtual_setMargins(void* self, intptr_t slot);
void QPagedPaintDevice_virtualbase_setMargins(void* self, QPagedPaintDevice__Margins* margins);
bool QPagedPaintDevice_override_virtual_devType(void* self, intptr_t slot);
int QPagedPaintDevice_virtualbase_devType(const void* self);
bool QPagedPaintDevice_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QPagedPaintDevice_virtualbase_paintEngine(const void* self);
bool QPagedPaintDevice_override_virtual_metric(void* self, intptr_t slot);
int QPagedPaintDevice_virtualbase_metric(const void* self, int metric);
bool QPagedPaintDevice_override_virtual_initPainter(void* self, intptr_t slot);
void QPagedPaintDevice_virtualbase_initPainter(const void* self, QPainter* painter);
bool QPagedPaintDevice_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QPagedPaintDevice_virtualbase_redirected(const void* self, QPoint* offset);
bool QPagedPaintDevice_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QPagedPaintDevice_virtualbase_sharedPainter(const void* self);
QPageLayout* QPagedPaintDevice_protectedbase_devicePageLayout(bool* _dynamic_cast_ok, const void* self);
QPageLayout* QPagedPaintDevice_protectedbase_devicePageLayout2(bool* _dynamic_cast_ok, void* self);
void QPagedPaintDevice_delete(QPagedPaintDevice* self);

void QPagedPaintDevice__Margins_delete(QPagedPaintDevice__Margins* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
