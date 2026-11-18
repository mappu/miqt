#pragma once
#ifndef MIQT_QT6_GEN_QDRAWUTIL_H
#define MIQT_QT6_GEN_QDRAWUTIL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QColor;
class QMargins;
class QPainter;
class QPalette;
class QPixmap;
class QPoint;
class QRect;
class QTileRules;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QMargins QMargins;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QTileRules QTileRules;
#endif

QTileRules* QTileRules_new(int horizontalRule, int verticalRule);
QTileRules* QTileRules_new2();
QTileRules* QTileRules_new3(QTileRules* param1);
QTileRules* QTileRules_new4(int rule);
int QTileRules_horizontal(const QTileRules* self);
void QTileRules_setHorizontal(QTileRules* self, int horizontal);
int QTileRules_vertical(const QTileRules* self);
void QTileRules_setVertical(QTileRules* self, int vertical);

void QTileRules_delete(QTileRules* self);

void miqt_QDrawShadeLine2(QPainter* p, int x1, int y1, int x2, int y2, QPalette* pal, bool sunken, int lineWidth, int midLineWidth);
void miqt_QDrawShadeLine3(QPainter* p, QPoint* p1, QPoint* p2, QPalette* pal, bool sunken, int lineWidth, int midLineWidth);
void miqt_QDrawShadeRect2(QPainter* p, int x, int y, int w, int h, QPalette* pal, bool sunken, int lineWidth, int midLineWidth, QBrush* fill);
void miqt_QDrawShadeRect3(QPainter* p, QRect* r, QPalette* pal, bool sunken, int lineWidth, int midLineWidth, QBrush* fill);
void miqt_QDrawShadePanel2(QPainter* p, int x, int y, int w, int h, QPalette* pal, bool sunken, int lineWidth, QBrush* fill);
void miqt_QDrawShadePanel3(QPainter* p, QRect* r, QPalette* pal, bool sunken, int lineWidth, QBrush* fill);
void miqt_QDrawWinButton2(QPainter* p, int x, int y, int w, int h, QPalette* pal, bool sunken, QBrush* fill);
void miqt_QDrawWinButton3(QPainter* p, QRect* r, QPalette* pal, bool sunken, QBrush* fill);
void miqt_QDrawWinPanel2(QPainter* p, int x, int y, int w, int h, QPalette* pal, bool sunken, QBrush* fill);
void miqt_QDrawWinPanel3(QPainter* p, QRect* r, QPalette* pal, bool sunken, QBrush* fill);
void miqt_QDrawPlainRect2(QPainter* p, int x, int y, int w, int h, QColor* param6, int lineWidth, QBrush* fill);
void miqt_QDrawPlainRect3(QPainter* p, QRect* r, QColor* param3, int lineWidth, QBrush* fill);
void miqt_QDrawBorderPixmap2(QPainter* painter, QRect* targetRect, QMargins* targetMargins, QPixmap* pixmap, QRect* sourceRect, QMargins* sourceMargins, QTileRules* rules, int hints);
void miqt_QDrawBorderPixmap3(QPainter* painter, QRect* target, QMargins* margins, QPixmap* pixmap);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
