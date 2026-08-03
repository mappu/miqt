#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_SYMBOL_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_SYMBOL_H

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
class QPainterPath;
class QPen;
class QPixmap;
class QPointF;
class QRect;
class QRectF;
class QSize;
class QwtGraphic;
class QwtSymbol;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPen QPen;
typedef struct QPixmap QPixmap;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QwtGraphic QwtGraphic;
typedef struct QwtSymbol QwtSymbol;
#endif

QwtSymbol* QwtSymbol_new();
QwtSymbol* QwtSymbol_new2(int param1, QBrush* param2, QPen* param3, QSize* param4);
QwtSymbol* QwtSymbol_new3(QPainterPath* param1, QBrush* param2, QPen* param3);
QwtSymbol* QwtSymbol_new4(int param1);
void QwtSymbol_setCachePolicy(QwtSymbol* self, int cachePolicy);
int QwtSymbol_cachePolicy(const QwtSymbol* self);
void QwtSymbol_setSize(QwtSymbol* self, QSize* size);
void QwtSymbol_setSizeWithWidth(QwtSymbol* self, int width);
QSize* QwtSymbol_size(const QwtSymbol* self);
void QwtSymbol_setPinPoint(QwtSymbol* self, QPointF* pos);
QPointF* QwtSymbol_pinPoint(const QwtSymbol* self);
void QwtSymbol_setPinPointEnabled(QwtSymbol* self, bool pinPointEnabled);
bool QwtSymbol_isPinPointEnabled(const QwtSymbol* self);
void QwtSymbol_setColor(QwtSymbol* self, QColor* color);
void QwtSymbol_setBrush(QwtSymbol* self, QBrush* brush);
QBrush* QwtSymbol_brush(const QwtSymbol* self);
void QwtSymbol_setPen(QwtSymbol* self, QColor* param1);
void QwtSymbol_setPenWithPen(QwtSymbol* self, QPen* pen);
QPen* QwtSymbol_pen(const QwtSymbol* self);
void QwtSymbol_setStyle(QwtSymbol* self, int style);
int QwtSymbol_style(const QwtSymbol* self);
void QwtSymbol_setPath(QwtSymbol* self, QPainterPath* path);
QPainterPath* QwtSymbol_path(const QwtSymbol* self);
void QwtSymbol_setPixmap(QwtSymbol* self, QPixmap* pixmap);
QPixmap* QwtSymbol_pixmap(const QwtSymbol* self);
void QwtSymbol_setGraphic(QwtSymbol* self, QwtGraphic* graphic);
QwtGraphic* QwtSymbol_graphic(const QwtSymbol* self);
void QwtSymbol_setSvgDocument(QwtSymbol* self, struct miqt_string svgDocument);
void QwtSymbol_drawSymbol(const QwtSymbol* self, QPainter* param1, QRectF* param2);
void QwtSymbol_drawSymbol2(const QwtSymbol* self, QPainter* param1, QPointF* param2);
void QwtSymbol_drawSymbols2(const QwtSymbol* self, QPainter* param1, QPointF* param2, int numPoints);
QRect* QwtSymbol_boundingRect(const QwtSymbol* self);
void QwtSymbol_invalidateCache(QwtSymbol* self);
void QwtSymbol_renderSymbols(const QwtSymbol* self, QPainter* param1, QPointF* param2, int numPoints);
void QwtSymbol_setSize2(QwtSymbol* self, int width, int height);
void QwtSymbol_setPinPoint2(QwtSymbol* self, QPointF* pos, bool enable);
void QwtSymbol_setPen2(QwtSymbol* self, QColor* param1, double width);
void QwtSymbol_setPen3(QwtSymbol* self, QColor* param1, double width, int param3);

bool QwtSymbol_override_virtual_setColor(void* self, intptr_t slot);
void QwtSymbol_virtualbase_setColor(void* self, QColor* color);
bool QwtSymbol_override_virtual_boundingRect(void* self, intptr_t slot);
QRect* QwtSymbol_virtualbase_boundingRect(const void* self);
bool QwtSymbol_override_virtual_renderSymbols(void* self, intptr_t slot);
void QwtSymbol_virtualbase_renderSymbols(const void* self, QPainter* param1, QPointF* param2, int numPoints);

void QwtSymbol_delete(QwtSymbol* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
