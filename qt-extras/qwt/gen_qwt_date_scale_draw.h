#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_DATE_SCALE_DRAW_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_DATE_SCALE_DRAW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDateTime;
class QFont;
class QPainter;
class QPalette;
class QPointF;
class QSizeF;
class QTransform;
class QwtAbstractScaleDraw;
class QwtDateScaleDraw;
class QwtScaleDiv;
class QwtScaleDraw;
class QwtText;
#else
typedef struct QDateTime QDateTime;
typedef struct QFont QFont;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPointF QPointF;
typedef struct QSizeF QSizeF;
typedef struct QTransform QTransform;
typedef struct QwtAbstractScaleDraw QwtAbstractScaleDraw;
typedef struct QwtDateScaleDraw QwtDateScaleDraw;
typedef struct QwtScaleDiv QwtScaleDiv;
typedef struct QwtScaleDraw QwtScaleDraw;
typedef struct QwtText QwtText;
#endif

QwtDateScaleDraw* QwtDateScaleDraw_new();
QwtDateScaleDraw* QwtDateScaleDraw_new2(int param1);
void QwtDateScaleDraw_virtbase(QwtDateScaleDraw* src, QwtScaleDraw** outptr_QwtScaleDraw);
void QwtDateScaleDraw_setDateFormat(QwtDateScaleDraw* self, int param1, struct miqt_string param2);
struct miqt_string QwtDateScaleDraw_dateFormat(const QwtDateScaleDraw* self, int param1);
void QwtDateScaleDraw_setTimeSpec(QwtDateScaleDraw* self, int timeSpec);
int QwtDateScaleDraw_timeSpec(const QwtDateScaleDraw* self);
void QwtDateScaleDraw_setUtcOffset(QwtDateScaleDraw* self, int seconds);
int QwtDateScaleDraw_utcOffset(const QwtDateScaleDraw* self);
void QwtDateScaleDraw_setWeek0Type(QwtDateScaleDraw* self, int week0Type);
int QwtDateScaleDraw_week0Type(const QwtDateScaleDraw* self);
QwtText* QwtDateScaleDraw_label(const QwtDateScaleDraw* self, double param1);
QDateTime* QwtDateScaleDraw_toDateTime(const QwtDateScaleDraw* self, double param1);
int QwtDateScaleDraw_intervalType(const QwtDateScaleDraw* self, QwtScaleDiv* param1);
struct miqt_string QwtDateScaleDraw_dateFormatOfDate(const QwtDateScaleDraw* self, QDateTime* param1, int param2);

bool QwtDateScaleDraw_override_virtual_label(void* self, intptr_t slot);
QwtText* QwtDateScaleDraw_virtualbase_label(const void* self, double param1);
bool QwtDateScaleDraw_override_virtual_intervalType(void* self, intptr_t slot);
int QwtDateScaleDraw_virtualbase_intervalType(const void* self, QwtScaleDiv* param1);
bool QwtDateScaleDraw_override_virtual_dateFormatOfDate(void* self, intptr_t slot);
struct miqt_string QwtDateScaleDraw_virtualbase_dateFormatOfDate(const void* self, QDateTime* param1, int param2);
bool QwtDateScaleDraw_override_virtual_extent(void* self, intptr_t slot);
double QwtDateScaleDraw_virtualbase_extent(const void* self, QFont* param1);
bool QwtDateScaleDraw_override_virtual_drawTick(void* self, intptr_t slot);
void QwtDateScaleDraw_virtualbase_drawTick(const void* self, QPainter* param1, double value, double len);
bool QwtDateScaleDraw_override_virtual_drawBackbone(void* self, intptr_t slot);
void QwtDateScaleDraw_virtualbase_drawBackbone(const void* self, QPainter* param1);
bool QwtDateScaleDraw_override_virtual_drawLabel(void* self, intptr_t slot);
void QwtDateScaleDraw_virtualbase_drawLabel(const void* self, QPainter* param1, double value);
bool QwtDateScaleDraw_override_virtual_draw(void* self, intptr_t slot);
void QwtDateScaleDraw_virtualbase_draw(const void* self, QPainter* param1, QPalette* param2);

QTransform* QwtDateScaleDraw_protectedbase_labelTransformation(bool* _dynamic_cast_ok, const void* self, QPointF* param1, QSizeF* param2);
void QwtDateScaleDraw_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self);
QwtText* QwtDateScaleDraw_protectedbase_tickLabel(bool* _dynamic_cast_ok, const void* self, QFont* param1, double value);

void QwtDateScaleDraw_delete(QwtDateScaleDraw* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
