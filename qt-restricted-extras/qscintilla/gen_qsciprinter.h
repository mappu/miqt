#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCIPRINTER_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCIPRINTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPagedPaintDevice;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QPagedPaintDevice__Margins)
typedef QPagedPaintDevice::Margins QPagedPaintDevice__Margins;
#else
class QPagedPaintDevice__Margins;
#endif
class QPaintDevice;
class QPaintEngine;
class QPainter;
class QPrinter;
class QRect;
class QSizeF;
class QsciPrinter;
class QsciScintillaBase;
#else
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPagedPaintDevice__Margins QPagedPaintDevice__Margins;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPainter QPainter;
typedef struct QPrinter QPrinter;
typedef struct QRect QRect;
typedef struct QSizeF QSizeF;
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
void QsciPrinter_override_virtual_FormatPage(void* self, intptr_t slot);
void QsciPrinter_virtualbase_FormatPage(void* self, QPainter* painter, bool drawing, QRect* area, int pagenr);
void QsciPrinter_override_virtual_SetMagnification(void* self, intptr_t slot);
void QsciPrinter_virtualbase_SetMagnification(void* self, int magnification);
void QsciPrinter_override_virtual_PrintRange(void* self, intptr_t slot);
int QsciPrinter_virtualbase_PrintRange(void* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to);
void QsciPrinter_override_virtual_PrintRange2(void* self, intptr_t slot);
int QsciPrinter_virtualbase_PrintRange2(void* self, QsciScintillaBase* qsb, int from, int to);
void QsciPrinter_override_virtual_SetWrapMode(void* self, intptr_t slot);
void QsciPrinter_virtualbase_SetWrapMode(void* self, int wmode);
void QsciPrinter_override_virtual_DevType(void* self, intptr_t slot);
int QsciPrinter_virtualbase_DevType(const void* self);
void QsciPrinter_override_virtual_SetPageSize(void* self, intptr_t slot);
void QsciPrinter_virtualbase_SetPageSize(void* self, int pageSize);
void QsciPrinter_override_virtual_SetPageSizeMM(void* self, intptr_t slot);
void QsciPrinter_virtualbase_SetPageSizeMM(void* self, QSizeF* size);
void QsciPrinter_override_virtual_NewPage(void* self, intptr_t slot);
bool QsciPrinter_virtualbase_NewPage(void* self);
void QsciPrinter_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QsciPrinter_virtualbase_PaintEngine(const void* self);
void QsciPrinter_override_virtual_SetMargins(void* self, intptr_t slot);
void QsciPrinter_virtualbase_SetMargins(void* self, QPagedPaintDevice__Margins* m);
void QsciPrinter_override_virtual_Metric(void* self, intptr_t slot);
int QsciPrinter_virtualbase_Metric(const void* self, int param1);
void QsciPrinter_Delete(QsciPrinter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
