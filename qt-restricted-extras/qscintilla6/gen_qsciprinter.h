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
class QPainter;
class QRect;
class QsciPrinter;
class QsciScintillaBase;
#else
typedef struct QPainter QPainter;
typedef struct QRect QRect;
typedef struct QsciPrinter QsciPrinter;
typedef struct QsciScintillaBase QsciScintillaBase;
#endif

QsciPrinter* QsciPrinter_new();
QsciPrinter* QsciPrinter_new2(int mode);
void QsciPrinter_FormatPage(QsciPrinter* self, QPainter* painter, bool drawing, QRect* area, int pagenr);
int QsciPrinter_Magnification(const QsciPrinter* self);
void QsciPrinter_SetMagnification(QsciPrinter* self, int magnification);
int QsciPrinter_PrintRange(QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter);
int QsciPrinter_PrintRangeWithQsb(QsciPrinter* self, QsciScintillaBase* qsb);
int QsciPrinter_WrapMode(const QsciPrinter* self);
void QsciPrinter_SetWrapMode(QsciPrinter* self, int wmode);
int QsciPrinter_PrintRange3(QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from);
int QsciPrinter_PrintRange4(QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to);
int QsciPrinter_PrintRange2(QsciPrinter* self, QsciScintillaBase* qsb, int from);
int QsciPrinter_PrintRange32(QsciPrinter* self, QsciScintillaBase* qsb, int from, int to);
void QsciPrinter_Delete(QsciPrinter* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
