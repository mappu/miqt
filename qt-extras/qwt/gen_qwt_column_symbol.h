#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_COLUMN_SYMBOL_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_COLUMN_SYMBOL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPainter;
class QPalette;
class QRectF;
class QwtColumnRect;
class QwtColumnSymbol;
class QwtInterval;
#else
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QRectF QRectF;
typedef struct QwtColumnRect QwtColumnRect;
typedef struct QwtColumnSymbol QwtColumnSymbol;
typedef struct QwtInterval QwtInterval;
#endif

QwtColumnRect* QwtColumnRect_new();
QRectF* QwtColumnRect_toRect(const QwtColumnRect* self);
int QwtColumnRect_orientation(const QwtColumnRect* self);
QwtInterval* QwtColumnRect_hInterval(const QwtColumnRect* self);
void QwtColumnRect_setHInterval(QwtColumnRect* self, QwtInterval* hInterval);
QwtInterval* QwtColumnRect_vInterval(const QwtColumnRect* self);
void QwtColumnRect_setVInterval(QwtColumnRect* self, QwtInterval* vInterval);
int QwtColumnRect_direction(const QwtColumnRect* self);
void QwtColumnRect_setDirection(QwtColumnRect* self, int direction);

void QwtColumnRect_delete(QwtColumnRect* self);

QwtColumnSymbol* QwtColumnSymbol_new();
QwtColumnSymbol* QwtColumnSymbol_new2(int param1);
void QwtColumnSymbol_setFrameStyle(QwtColumnSymbol* self, int frameStyle);
int QwtColumnSymbol_frameStyle(const QwtColumnSymbol* self);
void QwtColumnSymbol_setLineWidth(QwtColumnSymbol* self, int width);
int QwtColumnSymbol_lineWidth(const QwtColumnSymbol* self);
void QwtColumnSymbol_setPalette(QwtColumnSymbol* self, QPalette* palette);
QPalette* QwtColumnSymbol_palette(const QwtColumnSymbol* self);
void QwtColumnSymbol_setStyle(QwtColumnSymbol* self, int style);
int QwtColumnSymbol_style(const QwtColumnSymbol* self);
void QwtColumnSymbol_draw(const QwtColumnSymbol* self, QPainter* param1, QwtColumnRect* param2);
void QwtColumnSymbol_operatorAssign(QwtColumnSymbol* self, QwtColumnSymbol* param1);

bool QwtColumnSymbol_override_virtual_draw(void* self, intptr_t slot);
void QwtColumnSymbol_virtualbase_draw(const void* self, QPainter* param1, QwtColumnRect* param2);

void QwtColumnSymbol_protectedbase_drawBox(bool* _dynamic_cast_ok, const void* self, QPainter* param1, QwtColumnRect* param2);

void QwtColumnSymbol_delete(QwtColumnSymbol* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
