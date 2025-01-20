#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCIPRINTER_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCIPRINTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

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
class QPaintEngine;
class QPainter;
class QPoint;
class QPrinter;
class QRect;
class QsciPrinter;
class QsciScintillaBase;
#else
typedef struct QMarginsF QMarginsF;
typedef struct QPageLayout QPageLayout;
typedef struct QPageRanges QPageRanges;
typedef struct QPageSize QPageSize;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QPrinter QPrinter;
typedef struct QRect QRect;
typedef struct QsciPrinter QsciPrinter;
typedef struct QsciScintillaBase QsciScintillaBase;
#endif

QsciPrinter* QsciPrinter_new();
QsciPrinter* QsciPrinter_new2(int mode);
void QsciPrinter_virtbase(QsciPrinter* src, QPrinter** outptr_QPrinter);
void QsciPrinter_FormatPage(QsciPrinter* self, QPainter* painter, bool drawing, QRect* area, int pagenr);
int QsciPrinter_Magnification(const QsciPrinter* self);
void QsciPrinter_SetMagnification(QsciPrinter* self, int magnification);
int QsciPrinter_PrintRange(QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to);
int QsciPrinter_PrintRange2(QsciPrinter* self, QsciScintillaBase* qsb, int from, int to);
int QsciPrinter_WrapMode(const QsciPrinter* self);
void QsciPrinter_SetWrapMode(QsciPrinter* self, int wmode);
bool QsciPrinter_override_virtual_FormatPage(void* self, intptr_t slot);
void QsciPrinter_virtualbase_FormatPage(void* self, QPainter* painter, bool drawing, QRect* area, int pagenr);
bool QsciPrinter_override_virtual_SetMagnification(void* self, intptr_t slot);
void QsciPrinter_virtualbase_SetMagnification(void* self, int magnification);
bool QsciPrinter_override_virtual_PrintRange(void* self, intptr_t slot);
int QsciPrinter_virtualbase_PrintRange(void* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to);
bool QsciPrinter_override_virtual_PrintRange2(void* self, intptr_t slot);
int QsciPrinter_virtualbase_PrintRange2(void* self, QsciScintillaBase* qsb, int from, int to);
bool QsciPrinter_override_virtual_SetWrapMode(void* self, intptr_t slot);
void QsciPrinter_virtualbase_SetWrapMode(void* self, int wmode);
bool QsciPrinter_override_virtual_DevType(void* self, intptr_t slot);
int QsciPrinter_virtualbase_DevType(const void* self);
bool QsciPrinter_override_virtual_NewPage(void* self, intptr_t slot);
bool QsciPrinter_virtualbase_NewPage(void* self);
bool QsciPrinter_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QsciPrinter_virtualbase_PaintEngine(const void* self);
bool QsciPrinter_override_virtual_Metric(void* self, intptr_t slot);
int QsciPrinter_virtualbase_Metric(const void* self, int param1);
bool QsciPrinter_override_virtual_SetPageLayout(void* self, intptr_t slot);
bool QsciPrinter_virtualbase_SetPageLayout(void* self, QPageLayout* pageLayout);
bool QsciPrinter_override_virtual_SetPageSize(void* self, intptr_t slot);
bool QsciPrinter_virtualbase_SetPageSize(void* self, QPageSize* pageSize);
bool QsciPrinter_override_virtual_SetPageOrientation(void* self, intptr_t slot);
bool QsciPrinter_virtualbase_SetPageOrientation(void* self, int orientation);
bool QsciPrinter_override_virtual_SetPageMargins(void* self, intptr_t slot);
bool QsciPrinter_virtualbase_SetPageMargins(void* self, QMarginsF* margins, int units);
bool QsciPrinter_override_virtual_SetPageRanges(void* self, intptr_t slot);
void QsciPrinter_virtualbase_SetPageRanges(void* self, QPageRanges* ranges);
bool QsciPrinter_override_virtual_InitPainter(void* self, intptr_t slot);
void QsciPrinter_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QsciPrinter_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QsciPrinter_virtualbase_Redirected(const void* self, QPoint* offset);
bool QsciPrinter_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QsciPrinter_virtualbase_SharedPainter(const void* self);
void QsciPrinter_Delete(QsciPrinter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
