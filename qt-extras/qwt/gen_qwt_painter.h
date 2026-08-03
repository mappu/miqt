#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_PAINTER_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_PAINTER_H

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
class QImage;
class QLineF;
class QPainter;
class QPainterPath;
class QPalette;
class QPixmap;
class QPoint;
class QPointF;
class QRect;
class QRectF;
class QSize;
class QTextDocument;
class QWidget;
class QwtPainter;
#else
typedef struct QBrush QBrush;
typedef struct QImage QImage;
typedef struct QLineF QLineF;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QTextDocument QTextDocument;
typedef struct QWidget QWidget;
typedef struct QwtPainter QwtPainter;
#endif

void QwtPainter_setPolylineSplitting(bool polylineSplitting);
bool QwtPainter_polylineSplitting();
void QwtPainter_setRoundingAlignment(bool roundingAlignment);
bool QwtPainter_roundingAlignment();
bool QwtPainter_roundingAlignmentWithQPainter(QPainter* param1);
void QwtPainter_drawText(QPainter* param1, double x, double y, struct miqt_string param4);
void QwtPainter_drawText2(QPainter* param1, QPointF* param2, struct miqt_string param3);
void QwtPainter_drawText3(QPainter* param1, double x, double y, double w, double h, int flags, struct miqt_string param7);
void QwtPainter_drawText4(QPainter* param1, QRectF* param2, int flags, struct miqt_string param4);
void QwtPainter_drawSimpleRichText(QPainter* param1, QRectF* param2, int flags, QTextDocument* param4);
void QwtPainter_drawRect(QPainter* param1, double x, double y, double w, double h);
void QwtPainter_drawRect2(QPainter* param1, QRectF* rect);
void QwtPainter_fillRect(QPainter* param1, QRectF* param2, QBrush* param3);
void QwtPainter_drawEllipse(QPainter* param1, QRectF* param2);
void QwtPainter_drawPie(QPainter* param1, QRectF* param2, int a, int alen);
void QwtPainter_drawLine(QPainter* param1, double x1, double y1, double x2, double y2);
void QwtPainter_drawLine2(QPainter* param1, QPointF* p1, QPointF* p2);
void QwtPainter_drawLine3(QPainter* param1, QLineF* param2);
void QwtPainter_drawPolyline2(QPainter* param1, QPointF* param2, int pointCount);
void QwtPainter_drawPolyline4(QPainter* param1, QPoint* param2, int pointCount);
void QwtPainter_drawPoint(QPainter* param1, QPoint* param2);
void QwtPainter_drawPoints2(QPainter* param1, QPoint* param2, int pointCount);
void QwtPainter_drawPoint2(QPainter* param1, double x, double y);
void QwtPainter_drawPoint3(QPainter* param1, QPointF* param2);
void QwtPainter_drawPoints4(QPainter* param1, QPointF* param2, int pointCount);
void QwtPainter_drawPath(QPainter* param1, QPainterPath* param2);
void QwtPainter_drawImage(QPainter* param1, QRectF* param2, QImage* param3);
void QwtPainter_drawPixmap(QPainter* param1, QRectF* param2, QPixmap* param3);
void QwtPainter_drawRoundFrame(QPainter* param1, QRectF* param2, QPalette* param3, int lineWidth, int frameStyle);
void QwtPainter_drawRoundedFrame(QPainter* param1, QRectF* param2, double xRadius, double yRadius, QPalette* param5, int lineWidth, int frameStyle);
void QwtPainter_drawFrame(QPainter* param1, QRectF* rect, QPalette* palette, int foregroundRole, int frameWidth, int midLineWidth, int frameStyle);
void QwtPainter_drawFocusRect(QPainter* param1, QWidget* param2);
void QwtPainter_drawFocusRect2(QPainter* param1, QWidget* param2, QRect* param3);
bool QwtPainter_isAligning(QPainter* painter);
bool QwtPainter_isX11GraphicsSystem();
void QwtPainter_fillPixmap(QWidget* param1, QPixmap* param2);
void QwtPainter_drawBackgound(QPainter* painter, QRectF* rect, QWidget* widget);
QPixmap* QwtPainter_backingStore(QWidget* param1, QSize* param2);
void QwtPainter_fillPixmap2(QWidget* param1, QPixmap* param2, QPoint* offset);

void QwtPainter_delete(QwtPainter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
