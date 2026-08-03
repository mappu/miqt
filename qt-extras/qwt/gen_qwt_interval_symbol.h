#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_INTERVAL_SYMBOL_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_INTERVAL_SYMBOL_H

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
class QPainter;
class QPen;
class QPointF;
class QwtIntervalSymbol;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPainter QPainter;
typedef struct QPen QPen;
typedef struct QPointF QPointF;
typedef struct QwtIntervalSymbol QwtIntervalSymbol;
#endif

QwtIntervalSymbol* QwtIntervalSymbol_new();
QwtIntervalSymbol* QwtIntervalSymbol_new2(QwtIntervalSymbol* param1);
QwtIntervalSymbol* QwtIntervalSymbol_new3(int param1);
void QwtIntervalSymbol_operatorAssign(QwtIntervalSymbol* self, QwtIntervalSymbol* param1);
bool QwtIntervalSymbol_operatorEqual(const QwtIntervalSymbol* self, QwtIntervalSymbol* param1);
bool QwtIntervalSymbol_operatorNotEqual(const QwtIntervalSymbol* self, QwtIntervalSymbol* param1);
void QwtIntervalSymbol_setWidth(QwtIntervalSymbol* self, int width);
int QwtIntervalSymbol_width(const QwtIntervalSymbol* self);
void QwtIntervalSymbol_setBrush(QwtIntervalSymbol* self, QBrush* brush);
QBrush* QwtIntervalSymbol_brush(const QwtIntervalSymbol* self);
void QwtIntervalSymbol_setPen(QwtIntervalSymbol* self, QColor* param1);
void QwtIntervalSymbol_setPenWithPen(QwtIntervalSymbol* self, QPen* pen);
QPen* QwtIntervalSymbol_pen(const QwtIntervalSymbol* self);
void QwtIntervalSymbol_setStyle(QwtIntervalSymbol* self, int style);
int QwtIntervalSymbol_style(const QwtIntervalSymbol* self);
void QwtIntervalSymbol_draw(const QwtIntervalSymbol* self, QPainter* param1, int param2, QPointF* from, QPointF* to);
void QwtIntervalSymbol_setPen2(QwtIntervalSymbol* self, QColor* param1, double width);
void QwtIntervalSymbol_setPen3(QwtIntervalSymbol* self, QColor* param1, double width, int param3);

bool QwtIntervalSymbol_override_virtual_draw(void* self, intptr_t slot);
void QwtIntervalSymbol_virtualbase_draw(const void* self, QPainter* param1, int param2, QPointF* from, QPointF* to);

void QwtIntervalSymbol_delete(QwtIntervalSymbol* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
