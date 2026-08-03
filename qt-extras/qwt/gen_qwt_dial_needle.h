#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_DIAL_NEEDLE_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_DIAL_NEEDLE_H

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
class QPalette;
class QPointF;
class QwtCompassMagnetNeedle;
class QwtCompassWindArrow;
class QwtDialNeedle;
class QwtDialSimpleNeedle;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPointF QPointF;
typedef struct QwtCompassMagnetNeedle QwtCompassMagnetNeedle;
typedef struct QwtCompassWindArrow QwtCompassWindArrow;
typedef struct QwtDialNeedle QwtDialNeedle;
typedef struct QwtDialSimpleNeedle QwtDialSimpleNeedle;
#endif

QwtDialNeedle* QwtDialNeedle_new();
QwtDialNeedle* QwtDialNeedle_new2(QwtDialNeedle* param1);
void QwtDialNeedle_setPalette(QwtDialNeedle* self, QPalette* palette);
QPalette* QwtDialNeedle_palette(const QwtDialNeedle* self);
void QwtDialNeedle_draw(const QwtDialNeedle* self, QPainter* painter, QPointF* center, double length, double direction, int param5);
void QwtDialNeedle_drawNeedle(const QwtDialNeedle* self, QPainter* painter, double length, int colorGroup);
void QwtDialNeedle_drawKnob(const QwtDialNeedle* self, QPainter* param1, double width, QBrush* param3, bool sunken);
void QwtDialNeedle_operatorAssign(QwtDialNeedle* self, QwtDialNeedle* param1);

bool QwtDialNeedle_override_virtual_setPalette(void* self, intptr_t slot);
void QwtDialNeedle_virtualbase_setPalette(void* self, QPalette* palette);
bool QwtDialNeedle_override_virtual_draw(void* self, intptr_t slot);
void QwtDialNeedle_virtualbase_draw(const void* self, QPainter* painter, QPointF* center, double length, double direction, int param5);
bool QwtDialNeedle_override_virtual_drawNeedle(void* self, intptr_t slot);
void QwtDialNeedle_virtualbase_drawNeedle(const void* self, QPainter* painter, double length, int colorGroup);
bool QwtDialNeedle_override_virtual_drawKnob(void* self, intptr_t slot);
void QwtDialNeedle_virtualbase_drawKnob(const void* self, QPainter* param1, double width, QBrush* param3, bool sunken);

void QwtDialNeedle_delete(QwtDialNeedle* self);

QwtDialSimpleNeedle* QwtDialSimpleNeedle_new(int param1);
QwtDialSimpleNeedle* QwtDialSimpleNeedle_new2(QwtDialSimpleNeedle* param1);
QwtDialSimpleNeedle* QwtDialSimpleNeedle_new3(int param1, bool hasKnob);
QwtDialSimpleNeedle* QwtDialSimpleNeedle_new4(int param1, bool hasKnob, QColor* mid);
QwtDialSimpleNeedle* QwtDialSimpleNeedle_new5(int param1, bool hasKnob, QColor* mid, QColor* base);
void QwtDialSimpleNeedle_virtbase(QwtDialSimpleNeedle* src, QwtDialNeedle** outptr_QwtDialNeedle);
void QwtDialSimpleNeedle_setWidth(QwtDialSimpleNeedle* self, double width);
double QwtDialSimpleNeedle_width(const QwtDialSimpleNeedle* self);
void QwtDialSimpleNeedle_drawNeedle(const QwtDialSimpleNeedle* self, QPainter* param1, double length, int param3);
void QwtDialSimpleNeedle_operatorAssign(QwtDialSimpleNeedle* self, QwtDialSimpleNeedle* param1);

bool QwtDialSimpleNeedle_override_virtual_drawNeedle(void* self, intptr_t slot);
void QwtDialSimpleNeedle_virtualbase_drawNeedle(const void* self, QPainter* param1, double length, int param3);
bool QwtDialSimpleNeedle_override_virtual_setPalette(void* self, intptr_t slot);
void QwtDialSimpleNeedle_virtualbase_setPalette(void* self, QPalette* palette);
bool QwtDialSimpleNeedle_override_virtual_draw(void* self, intptr_t slot);
void QwtDialSimpleNeedle_virtualbase_draw(const void* self, QPainter* painter, QPointF* center, double length, double direction, int param5);
bool QwtDialSimpleNeedle_override_virtual_drawKnob(void* self, intptr_t slot);
void QwtDialSimpleNeedle_virtualbase_drawKnob(const void* self, QPainter* param1, double width, QBrush* param3, bool sunken);

void QwtDialSimpleNeedle_delete(QwtDialSimpleNeedle* self);

QwtCompassMagnetNeedle* QwtCompassMagnetNeedle_new();
QwtCompassMagnetNeedle* QwtCompassMagnetNeedle_new2(QwtCompassMagnetNeedle* param1);
QwtCompassMagnetNeedle* QwtCompassMagnetNeedle_new3(int param1);
QwtCompassMagnetNeedle* QwtCompassMagnetNeedle_new4(int param1, QColor* light);
QwtCompassMagnetNeedle* QwtCompassMagnetNeedle_new5(int param1, QColor* light, QColor* dark);
void QwtCompassMagnetNeedle_virtbase(QwtCompassMagnetNeedle* src, QwtDialNeedle** outptr_QwtDialNeedle);
void QwtCompassMagnetNeedle_drawNeedle(const QwtCompassMagnetNeedle* self, QPainter* param1, double length, int param3);
void QwtCompassMagnetNeedle_operatorAssign(QwtCompassMagnetNeedle* self, QwtCompassMagnetNeedle* param1);

bool QwtCompassMagnetNeedle_override_virtual_drawNeedle(void* self, intptr_t slot);
void QwtCompassMagnetNeedle_virtualbase_drawNeedle(const void* self, QPainter* param1, double length, int param3);
bool QwtCompassMagnetNeedle_override_virtual_setPalette(void* self, intptr_t slot);
void QwtCompassMagnetNeedle_virtualbase_setPalette(void* self, QPalette* palette);
bool QwtCompassMagnetNeedle_override_virtual_draw(void* self, intptr_t slot);
void QwtCompassMagnetNeedle_virtualbase_draw(const void* self, QPainter* painter, QPointF* center, double length, double direction, int param5);
bool QwtCompassMagnetNeedle_override_virtual_drawKnob(void* self, intptr_t slot);
void QwtCompassMagnetNeedle_virtualbase_drawKnob(const void* self, QPainter* param1, double width, QBrush* param3, bool sunken);

void QwtCompassMagnetNeedle_delete(QwtCompassMagnetNeedle* self);

QwtCompassWindArrow* QwtCompassWindArrow_new(int param1);
QwtCompassWindArrow* QwtCompassWindArrow_new2(QwtCompassWindArrow* param1);
QwtCompassWindArrow* QwtCompassWindArrow_new3(int param1, QColor* light);
QwtCompassWindArrow* QwtCompassWindArrow_new4(int param1, QColor* light, QColor* dark);
void QwtCompassWindArrow_virtbase(QwtCompassWindArrow* src, QwtDialNeedle** outptr_QwtDialNeedle);
void QwtCompassWindArrow_drawNeedle(const QwtCompassWindArrow* self, QPainter* param1, double length, int param3);
void QwtCompassWindArrow_operatorAssign(QwtCompassWindArrow* self, QwtCompassWindArrow* param1);

bool QwtCompassWindArrow_override_virtual_drawNeedle(void* self, intptr_t slot);
void QwtCompassWindArrow_virtualbase_drawNeedle(const void* self, QPainter* param1, double length, int param3);
bool QwtCompassWindArrow_override_virtual_setPalette(void* self, intptr_t slot);
void QwtCompassWindArrow_virtualbase_setPalette(void* self, QPalette* palette);
bool QwtCompassWindArrow_override_virtual_draw(void* self, intptr_t slot);
void QwtCompassWindArrow_virtualbase_draw(const void* self, QPainter* painter, QPointF* center, double length, double direction, int param5);
bool QwtCompassWindArrow_override_virtual_drawKnob(void* self, intptr_t slot);
void QwtCompassWindArrow_virtualbase_drawKnob(const void* self, QPainter* param1, double width, QBrush* param3, bool sunken);

void QwtCompassWindArrow_delete(QwtCompassWindArrow* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
