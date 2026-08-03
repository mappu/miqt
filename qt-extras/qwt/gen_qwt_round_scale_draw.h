#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_ROUND_SCALE_DRAW_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_ROUND_SCALE_DRAW_H

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
class QPalette;
class QPointF;
class QwtAbstractScaleDraw;
class QwtRoundScaleDraw;
class QwtText;
#else
typedef struct QFont QFont;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPointF QPointF;
typedef struct QwtAbstractScaleDraw QwtAbstractScaleDraw;
typedef struct QwtRoundScaleDraw QwtRoundScaleDraw;
typedef struct QwtText QwtText;
#endif

QwtRoundScaleDraw* QwtRoundScaleDraw_new();
void QwtRoundScaleDraw_virtbase(QwtRoundScaleDraw* src, QwtAbstractScaleDraw** outptr_QwtAbstractScaleDraw);
void QwtRoundScaleDraw_setRadius(QwtRoundScaleDraw* self, double radius);
double QwtRoundScaleDraw_radius(const QwtRoundScaleDraw* self);
void QwtRoundScaleDraw_moveCenter(QwtRoundScaleDraw* self, double x, double y);
void QwtRoundScaleDraw_moveCenterWithQPointF(QwtRoundScaleDraw* self, QPointF* param1);
QPointF* QwtRoundScaleDraw_center(const QwtRoundScaleDraw* self);
void QwtRoundScaleDraw_setAngleRange(QwtRoundScaleDraw* self, double angle1, double angle2);
double QwtRoundScaleDraw_extent(const QwtRoundScaleDraw* self, QFont* param1);
void QwtRoundScaleDraw_drawTick(const QwtRoundScaleDraw* self, QPainter* param1, double value, double len);
void QwtRoundScaleDraw_drawBackbone(const QwtRoundScaleDraw* self, QPainter* param1);
void QwtRoundScaleDraw_drawLabel(const QwtRoundScaleDraw* self, QPainter* param1, double val);

bool QwtRoundScaleDraw_override_virtual_extent(void* self, intptr_t slot);
double QwtRoundScaleDraw_virtualbase_extent(const void* self, QFont* param1);
bool QwtRoundScaleDraw_override_virtual_drawTick(void* self, intptr_t slot);
void QwtRoundScaleDraw_virtualbase_drawTick(const void* self, QPainter* param1, double value, double len);
bool QwtRoundScaleDraw_override_virtual_drawBackbone(void* self, intptr_t slot);
void QwtRoundScaleDraw_virtualbase_drawBackbone(const void* self, QPainter* param1);
bool QwtRoundScaleDraw_override_virtual_drawLabel(void* self, intptr_t slot);
void QwtRoundScaleDraw_virtualbase_drawLabel(const void* self, QPainter* param1, double val);
bool QwtRoundScaleDraw_override_virtual_draw(void* self, intptr_t slot);
void QwtRoundScaleDraw_virtualbase_draw(const void* self, QPainter* param1, QPalette* param2);
bool QwtRoundScaleDraw_override_virtual_label(void* self, intptr_t slot);
QwtText* QwtRoundScaleDraw_virtualbase_label(const void* self, double param1);

void QwtRoundScaleDraw_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self);
QwtText* QwtRoundScaleDraw_protectedbase_tickLabel(bool* _dynamic_cast_ok, const void* self, QFont* param1, double value);

void QwtRoundScaleDraw_delete(QwtRoundScaleDraw* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
