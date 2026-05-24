#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_TEXT_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_TEXT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QColor;
class QFont;
class QPainter;
class QPen;
class QRectF;
class QSizeF;
class QwtText;
class QwtTextEngine;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QFont QFont;
typedef struct QPainter QPainter;
typedef struct QPen QPen;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QwtText QwtText;
typedef struct QwtTextEngine QwtTextEngine;
#endif

QwtText* QwtText_new();
QwtText* QwtText_new2(QwtText* param1);
QwtText* QwtText_new3(struct miqt_string param1);
QwtText* QwtText_new4(struct miqt_string param1, int textFormat);
void QwtText_operatorAssign(QwtText* self, QwtText* param1);
bool QwtText_operatorEqual(const QwtText* self, QwtText* param1);
bool QwtText_operatorNotEqual(const QwtText* self, QwtText* param1);
void QwtText_setText(QwtText* self, struct miqt_string param1);
struct miqt_string QwtText_text(const QwtText* self);
bool QwtText_isNull(const QwtText* self);
bool QwtText_isEmpty(const QwtText* self);
void QwtText_setFont(QwtText* self, QFont* font);
QFont* QwtText_font(const QwtText* self);
QFont* QwtText_usedFont(const QwtText* self, QFont* param1);
void QwtText_setRenderFlags(QwtText* self, int renderFlags);
int QwtText_renderFlags(const QwtText* self);
void QwtText_setColor(QwtText* self, QColor* color);
QColor* QwtText_color(const QwtText* self);
QColor* QwtText_usedColor(const QwtText* self, QColor* param1);
void QwtText_setBorderRadius(QwtText* self, double borderRadius);
double QwtText_borderRadius(const QwtText* self);
void QwtText_setBorderPen(QwtText* self, QPen* borderPen);
QPen* QwtText_borderPen(const QwtText* self);
void QwtText_setBackgroundBrush(QwtText* self, QBrush* backgroundBrush);
QBrush* QwtText_backgroundBrush(const QwtText* self);
void QwtText_setPaintAttribute(QwtText* self, int param1);
bool QwtText_testPaintAttribute(const QwtText* self, int param1);
void QwtText_setLayoutAttribute(QwtText* self, int param1);
bool QwtText_testLayoutAttribute(const QwtText* self, int param1);
double QwtText_heightForWidth(const QwtText* self, double width);
QSizeF* QwtText_textSize(const QwtText* self);
void QwtText_draw(const QwtText* self, QPainter* painter, QRectF* rect);
QwtTextEngine* QwtText_textEngine(struct miqt_string text);
QwtTextEngine* QwtText_textEngineWithQwtTextTextFormat(int param1);
void QwtText_setTextEngine(int param1, QwtTextEngine* param2);
void QwtText_setText2(QwtText* self, struct miqt_string param1, int textFormat);
void QwtText_setPaintAttribute2(QwtText* self, int param1, bool on);
void QwtText_setLayoutAttribute2(QwtText* self, int param1, bool on);
double QwtText_heightForWidth2(const QwtText* self, double width, QFont* param2);
QSizeF* QwtText_textSizeWithQFont(const QwtText* self, QFont* param1);
QwtTextEngine* QwtText_textEngine2(struct miqt_string text, int param2);

void QwtText_delete(QwtText* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
