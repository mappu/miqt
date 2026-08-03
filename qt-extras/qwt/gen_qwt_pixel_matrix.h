#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PIXEL_MATRIX_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PIXEL_MATRIX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBitArray;
class QRect;
class QwtPixelMatrix;
#else
typedef struct QBitArray QBitArray;
typedef struct QRect QRect;
typedef struct QwtPixelMatrix QwtPixelMatrix;
#endif

QwtPixelMatrix* QwtPixelMatrix_new(QRect* rect);
QwtPixelMatrix* QwtPixelMatrix_new2(QwtPixelMatrix* param1);
void QwtPixelMatrix_virtbase(QwtPixelMatrix* src, QBitArray** outptr_QBitArray);
void QwtPixelMatrix_setRect(QwtPixelMatrix* self, QRect* rect);
QRect* QwtPixelMatrix_rect(const QwtPixelMatrix* self);
bool QwtPixelMatrix_testPixel(const QwtPixelMatrix* self, int x, int y);
bool QwtPixelMatrix_testAndSetPixel(QwtPixelMatrix* self, int x, int y, bool on);
int QwtPixelMatrix_index(const QwtPixelMatrix* self, int x, int y);
void QwtPixelMatrix_operatorAssign(QwtPixelMatrix* self, QwtPixelMatrix* param1);

void QwtPixelMatrix_delete(QwtPixelMatrix* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
