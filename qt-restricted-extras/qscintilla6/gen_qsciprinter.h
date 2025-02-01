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
void QsciPrinter_formatPage(QsciPrinter* self, QPainter* painter, bool drawing, QRect* area, int pagenr);
int QsciPrinter_magnification(const QsciPrinter* self);
void QsciPrinter_setMagnification(QsciPrinter* self, int magnification);
int QsciPrinter_printRange(QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to);
int QsciPrinter_printRange2(QsciPrinter* self, QsciScintillaBase* qsb, int from, int to);
int QsciPrinter_wrapMode(const QsciPrinter* self);
void QsciPrinter_setWrapMode(QsciPrinter* self, int wmode);
bool QsciPrinter_override_virtual_formatPage(void* self, intptr_t slot);
void QsciPrinter_virtualbase_formatPage(void* self, QPainter* painter, bool drawing, QRect* area, int pagenr);
bool QsciPrinter_override_virtual_setMagnification(void* self, intptr_t slot);
void QsciPrinter_virtualbase_setMagnification(void* self, int magnification);
bool QsciPrinter_override_virtual_printRange(void* self, intptr_t slot);
int QsciPrinter_virtualbase_printRange(void* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to);
bool QsciPrinter_override_virtual_printRange2(void* self, intptr_t slot);
int QsciPrinter_virtualbase_printRange2(void* self, QsciScintillaBase* qsb, int from, int to);
bool QsciPrinter_override_virtual_setWrapMode(void* self, intptr_t slot);
void QsciPrinter_virtualbase_setWrapMode(void* self, int wmode);
bool QsciPrinter_override_virtual_devType(void* self, intptr_t slot);
int QsciPrinter_virtualbase_devType(const void* self);
bool QsciPrinter_override_virtual_newPage(void* self, intptr_t slot);
bool QsciPrinter_virtualbase_newPage(void* self);
bool QsciPrinter_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QsciPrinter_virtualbase_paintEngine(const void* self);
bool QsciPrinter_override_virtual_metric(void* self, intptr_t slot);
int QsciPrinter_virtualbase_metric(const void* self, int param1);
bool QsciPrinter_override_virtual_setPageLayout(void* self, intptr_t slot);
bool QsciPrinter_virtualbase_setPageLayout(void* self, QPageLayout* pageLayout);
bool QsciPrinter_override_virtual_setPageSize(void* self, intptr_t slot);
bool QsciPrinter_virtualbase_setPageSize(void* self, QPageSize* pageSize);
bool QsciPrinter_override_virtual_setPageOrientation(void* self, intptr_t slot);
bool QsciPrinter_virtualbase_setPageOrientation(void* self, int orientation);
bool QsciPrinter_override_virtual_setPageMargins(void* self, intptr_t slot);
bool QsciPrinter_virtualbase_setPageMargins(void* self, QMarginsF* margins, int units);
bool QsciPrinter_override_virtual_setPageRanges(void* self, intptr_t slot);
void QsciPrinter_virtualbase_setPageRanges(void* self, QPageRanges* ranges);
bool QsciPrinter_override_virtual_initPainter(void* self, intptr_t slot);
void QsciPrinter_virtualbase_initPainter(const void* self, QPainter* painter);
bool QsciPrinter_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QsciPrinter_virtualbase_redirected(const void* self, QPoint* offset);
bool QsciPrinter_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QsciPrinter_virtualbase_sharedPainter(const void* self);
void QsciPrinter_delete(QsciPrinter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
