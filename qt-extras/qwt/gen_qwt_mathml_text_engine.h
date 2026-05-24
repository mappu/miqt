#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_MATHML_TEXT_ENGINE_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_MATHML_TEXT_ENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFont;
class QPainter;
class QRectF;
class QSizeF;
class QwtMathMLTextEngine;
class QwtTextEngine;
#else
typedef struct QFont QFont;
typedef struct QPainter QPainter;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QwtMathMLTextEngine QwtMathMLTextEngine;
typedef struct QwtTextEngine QwtTextEngine;
#endif

void QwtMathMLTextEngine_virtbase(QwtMathMLTextEngine* src, QwtTextEngine** outptr_QwtTextEngine);
double QwtMathMLTextEngine_heightForWidth(const QwtMathMLTextEngine* self, QFont* font, int flags, struct miqt_string text, double width);
QSizeF* QwtMathMLTextEngine_textSize(const QwtMathMLTextEngine* self, QFont* font, int flags, struct miqt_string text);
void QwtMathMLTextEngine_draw(const QwtMathMLTextEngine* self, QPainter* painter, QRectF* rect, int flags, struct miqt_string text);
bool QwtMathMLTextEngine_mightRender(const QwtMathMLTextEngine* self, struct miqt_string param1);
void QwtMathMLTextEngine_textMargins(const QwtMathMLTextEngine* self, QFont* param1, struct miqt_string param2, double* left, double* right, double* top, double* bottom);
void QwtMathMLTextEngine_operatorAssign(QwtMathMLTextEngine* self, QwtMathMLTextEngine* param1);

void QwtMathMLTextEngine_delete(QwtMathMLTextEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
