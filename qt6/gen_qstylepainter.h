#pragma once
#ifndef MIQT_QT6_GEN_QSTYLEPAINTER_H
#define MIQT_QT6_GEN_QSTYLEPAINTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPaintDevice;
class QPainter;
class QPalette;
class QPixmap;
class QRect;
class QStyle;
class QStyleOption;
class QStyleOptionComplex;
class QStylePainter;
class QWidget;
#else
typedef struct QPaintDevice QPaintDevice;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QStyle QStyle;
typedef struct QStyleOption QStyleOption;
typedef struct QStyleOptionComplex QStyleOptionComplex;
typedef struct QStylePainter QStylePainter;
typedef struct QWidget QWidget;
#endif

QStylePainter* QStylePainter_new(QWidget* w);
QStylePainter* QStylePainter_new2();
QStylePainter* QStylePainter_new3(QPaintDevice* pd, QWidget* w);
void QStylePainter_virtbase(QStylePainter* src, QPainter** outptr_QPainter);
bool QStylePainter_begin(QStylePainter* self, QWidget* w);
bool QStylePainter_begin2(QStylePainter* self, QPaintDevice* pd, QWidget* w);
void QStylePainter_drawPrimitive(QStylePainter* self, int pe, QStyleOption* opt);
void QStylePainter_drawControl(QStylePainter* self, int ce, QStyleOption* opt);
void QStylePainter_drawComplexControl(QStylePainter* self, int cc, QStyleOptionComplex* opt);
void QStylePainter_drawItemText(QStylePainter* self, QRect* r, int flags, QPalette* pal, bool enabled, struct miqt_string text);
void QStylePainter_drawItemPixmap(QStylePainter* self, QRect* r, int flags, QPixmap* pixmap);
QStyle* QStylePainter_style(const QStylePainter* self);
void QStylePainter_drawItemText6(QStylePainter* self, QRect* r, int flags, QPalette* pal, bool enabled, struct miqt_string text, int textRole);
void QStylePainter_delete(QStylePainter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
