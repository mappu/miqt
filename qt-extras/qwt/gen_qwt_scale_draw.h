#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_SCALE_DRAW_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_SCALE_DRAW_H

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
class QRect;
class QRectF;
class QSizeF;
class QTransform;
class QwtAbstractScaleDraw;
class QwtScaleDraw;
class QwtText;
#else
typedef struct QFont QFont;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSizeF QSizeF;
typedef struct QTransform QTransform;
typedef struct QwtAbstractScaleDraw QwtAbstractScaleDraw;
typedef struct QwtScaleDraw QwtScaleDraw;
typedef struct QwtText QwtText;
#endif

QwtScaleDraw* QwtScaleDraw_new();
void QwtScaleDraw_virtbase(QwtScaleDraw* src, QwtAbstractScaleDraw** outptr_QwtAbstractScaleDraw);
void QwtScaleDraw_getBorderDistHint(const QwtScaleDraw* self, QFont* param1, int* start, int* end);
int QwtScaleDraw_minLabelDist(const QwtScaleDraw* self, QFont* param1);
int QwtScaleDraw_minLength(const QwtScaleDraw* self, QFont* param1);
double QwtScaleDraw_extent(const QwtScaleDraw* self, QFont* param1);
void QwtScaleDraw_move(QwtScaleDraw* self, double x, double y);
void QwtScaleDraw_moveWithQPointF(QwtScaleDraw* self, QPointF* param1);
void QwtScaleDraw_setLength(QwtScaleDraw* self, double length);
int QwtScaleDraw_alignment(const QwtScaleDraw* self);
void QwtScaleDraw_setAlignment(QwtScaleDraw* self, int alignment);
int QwtScaleDraw_orientation(const QwtScaleDraw* self);
QPointF* QwtScaleDraw_pos(const QwtScaleDraw* self);
double QwtScaleDraw_length(const QwtScaleDraw* self);
void QwtScaleDraw_setLabelAlignment(QwtScaleDraw* self, int labelAlignment);
int QwtScaleDraw_labelAlignment(const QwtScaleDraw* self);
void QwtScaleDraw_setLabelRotation(QwtScaleDraw* self, double rotation);
double QwtScaleDraw_labelRotation(const QwtScaleDraw* self);
int QwtScaleDraw_maxLabelHeight(const QwtScaleDraw* self, QFont* param1);
int QwtScaleDraw_maxLabelWidth(const QwtScaleDraw* self, QFont* param1);
QPointF* QwtScaleDraw_labelPosition(const QwtScaleDraw* self, double value);
QRectF* QwtScaleDraw_labelRect(const QwtScaleDraw* self, QFont* param1, double value);
QSizeF* QwtScaleDraw_labelSize(const QwtScaleDraw* self, QFont* param1, double value);
QRect* QwtScaleDraw_boundingLabelRect(const QwtScaleDraw* self, QFont* param1, double value);
void QwtScaleDraw_drawTick(const QwtScaleDraw* self, QPainter* param1, double value, double len);
void QwtScaleDraw_drawBackbone(const QwtScaleDraw* self, QPainter* param1);
void QwtScaleDraw_drawLabel(const QwtScaleDraw* self, QPainter* param1, double value);

bool QwtScaleDraw_override_virtual_extent(void* self, intptr_t slot);
double QwtScaleDraw_virtualbase_extent(const void* self, QFont* param1);
bool QwtScaleDraw_override_virtual_drawTick(void* self, intptr_t slot);
void QwtScaleDraw_virtualbase_drawTick(const void* self, QPainter* param1, double value, double len);
bool QwtScaleDraw_override_virtual_drawBackbone(void* self, intptr_t slot);
void QwtScaleDraw_virtualbase_drawBackbone(const void* self, QPainter* param1);
bool QwtScaleDraw_override_virtual_drawLabel(void* self, intptr_t slot);
void QwtScaleDraw_virtualbase_drawLabel(const void* self, QPainter* param1, double value);
bool QwtScaleDraw_override_virtual_draw(void* self, intptr_t slot);
void QwtScaleDraw_virtualbase_draw(const void* self, QPainter* param1, QPalette* param2);
bool QwtScaleDraw_override_virtual_label(void* self, intptr_t slot);
QwtText* QwtScaleDraw_virtualbase_label(const void* self, double param1);

QTransform* QwtScaleDraw_protectedbase_labelTransformation(bool* _dynamic_cast_ok, const void* self, QPointF* param1, QSizeF* param2);
void QwtScaleDraw_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self);
QwtText* QwtScaleDraw_protectedbase_tickLabel(bool* _dynamic_cast_ok, const void* self, QFont* param1, double value);

void QwtScaleDraw_delete(QwtScaleDraw* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
