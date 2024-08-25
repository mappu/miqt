#ifndef GEN_QPAGEDPAINTDEVICE_H
#define GEN_QPAGEDPAINTDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMarginsF;
class QPageLayout;
class QPageSize;
class QPagedPaintDevice;
class QSizeF;
#else
typedef struct QMarginsF QMarginsF;
typedef struct QPageLayout QPageLayout;
typedef struct QPageSize QPageSize;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QSizeF QSizeF;
#endif

bool QPagedPaintDevice_NewPage(QPagedPaintDevice* self);
bool QPagedPaintDevice_SetPageLayout(QPagedPaintDevice* self, QPageLayout* pageLayout);
bool QPagedPaintDevice_SetPageSize(QPagedPaintDevice* self, QPageSize* pageSize);
bool QPagedPaintDevice_SetPageMargins(QPagedPaintDevice* self, QMarginsF* margins);
QPageLayout* QPagedPaintDevice_PageLayout(QPagedPaintDevice* self);
void QPagedPaintDevice_SetPageSizeMM(QPagedPaintDevice* self, QSizeF* size);
QSizeF* QPagedPaintDevice_PageSizeMM(QPagedPaintDevice* self);
void QPagedPaintDevice_Delete(QPagedPaintDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
