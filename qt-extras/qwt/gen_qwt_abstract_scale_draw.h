#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_ABSTRACT_SCALE_DRAW_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_ABSTRACT_SCALE_DRAW_H

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
class QwtAbstractScaleDraw;
class QwtScaleDiv;
class QwtText;
class QwtTransform;
#else
typedef struct QFont QFont;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QwtAbstractScaleDraw QwtAbstractScaleDraw;
typedef struct QwtScaleDiv QwtScaleDiv;
typedef struct QwtText QwtText;
typedef struct QwtTransform QwtTransform;
#endif

QwtAbstractScaleDraw* QwtAbstractScaleDraw_new();
void QwtAbstractScaleDraw_setScaleDiv(QwtAbstractScaleDraw* self, QwtScaleDiv* scaleDiv);
QwtScaleDiv* QwtAbstractScaleDraw_scaleDiv(const QwtAbstractScaleDraw* self);
void QwtAbstractScaleDraw_setTransformation(QwtAbstractScaleDraw* self, QwtTransform* transformation);
void QwtAbstractScaleDraw_enableComponent(QwtAbstractScaleDraw* self, int param1);
bool QwtAbstractScaleDraw_hasComponent(const QwtAbstractScaleDraw* self, int param1);
void QwtAbstractScaleDraw_setTickLength(QwtAbstractScaleDraw* self, int param1, double length);
double QwtAbstractScaleDraw_tickLength(const QwtAbstractScaleDraw* self, int param1);
double QwtAbstractScaleDraw_maxTickLength(const QwtAbstractScaleDraw* self);
void QwtAbstractScaleDraw_setSpacing(QwtAbstractScaleDraw* self, double spacing);
double QwtAbstractScaleDraw_spacing(const QwtAbstractScaleDraw* self);
void QwtAbstractScaleDraw_setPenWidth(QwtAbstractScaleDraw* self, int width);
int QwtAbstractScaleDraw_penWidth(const QwtAbstractScaleDraw* self);
void QwtAbstractScaleDraw_draw(const QwtAbstractScaleDraw* self, QPainter* param1, QPalette* param2);
QwtText* QwtAbstractScaleDraw_label(const QwtAbstractScaleDraw* self, double param1);
double QwtAbstractScaleDraw_extent(const QwtAbstractScaleDraw* self, QFont* font);
void QwtAbstractScaleDraw_setMinimumExtent(QwtAbstractScaleDraw* self, double minimumExtent);
double QwtAbstractScaleDraw_minimumExtent(const QwtAbstractScaleDraw* self);
void QwtAbstractScaleDraw_drawTick(const QwtAbstractScaleDraw* self, QPainter* painter, double value, double len);
void QwtAbstractScaleDraw_drawBackbone(const QwtAbstractScaleDraw* self, QPainter* painter);
void QwtAbstractScaleDraw_drawLabel(const QwtAbstractScaleDraw* self, QPainter* painter, double value);
void QwtAbstractScaleDraw_enableComponent2(QwtAbstractScaleDraw* self, int param1, bool enable);

bool QwtAbstractScaleDraw_override_virtual_draw(void* self, intptr_t slot);
void QwtAbstractScaleDraw_virtualbase_draw(const void* self, QPainter* param1, QPalette* param2);
bool QwtAbstractScaleDraw_override_virtual_label(void* self, intptr_t slot);
QwtText* QwtAbstractScaleDraw_virtualbase_label(const void* self, double param1);
bool QwtAbstractScaleDraw_override_virtual_extent(void* self, intptr_t slot);
double QwtAbstractScaleDraw_virtualbase_extent(const void* self, QFont* font);
bool QwtAbstractScaleDraw_override_virtual_drawTick(void* self, intptr_t slot);
void QwtAbstractScaleDraw_virtualbase_drawTick(const void* self, QPainter* painter, double value, double len);
bool QwtAbstractScaleDraw_override_virtual_drawBackbone(void* self, intptr_t slot);
void QwtAbstractScaleDraw_virtualbase_drawBackbone(const void* self, QPainter* painter);
bool QwtAbstractScaleDraw_override_virtual_drawLabel(void* self, intptr_t slot);
void QwtAbstractScaleDraw_virtualbase_drawLabel(const void* self, QPainter* painter, double value);

void QwtAbstractScaleDraw_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self);
QwtText* QwtAbstractScaleDraw_protectedbase_tickLabel(bool* _dynamic_cast_ok, const void* self, QFont* param1, double value);

void QwtAbstractScaleDraw_delete(QwtAbstractScaleDraw* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
