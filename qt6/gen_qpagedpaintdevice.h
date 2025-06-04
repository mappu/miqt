#pragma once
#ifndef MIQT_QT6_GEN_QPAGEDPAINTDEVICE_H
#define MIQT_QT6_GEN_QPAGEDPAINTDEVICE_H

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
class QPageRanges;
class QPageSize;
class QPagedPaintDevice;
class QPaintDevice;
#else
typedef struct QMarginsF QMarginsF;
typedef struct QPageLayout QPageLayout;
typedef struct QPageRanges QPageRanges;
typedef struct QPageSize QPageSize;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPaintDevice QPaintDevice;
#endif

void QPagedPaintDevice_virtbase(QPagedPaintDevice* src, QPaintDevice** outptr_QPaintDevice);
bool QPagedPaintDevice_newPage(QPagedPaintDevice* self);
bool QPagedPaintDevice_setPageLayout(QPagedPaintDevice* self, QPageLayout* pageLayout);
bool QPagedPaintDevice_setPageSize(QPagedPaintDevice* self, QPageSize* pageSize);
bool QPagedPaintDevice_setPageOrientation(QPagedPaintDevice* self, int orientation);
bool QPagedPaintDevice_setPageMargins(QPagedPaintDevice* self, QMarginsF* margins, int units);
QPageLayout* QPagedPaintDevice_pageLayout(const QPagedPaintDevice* self);
void QPagedPaintDevice_setPageRanges(QPagedPaintDevice* self, QPageRanges* ranges);
QPageRanges* QPagedPaintDevice_pageRanges(const QPagedPaintDevice* self);

void QPagedPaintDevice_delete(QPagedPaintDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
