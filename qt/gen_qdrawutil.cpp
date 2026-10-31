#include <QBrush>
#include <QColor>
#include <QMargins>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QTileRules>
#include <qdrawutil.h>
#include "gen_qdrawutil.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QTileRules* QTileRules_new(int horizontalRule, int verticalRule) {
	return new (std::nothrow) QTileRules(static_cast<Qt::TileRule>(horizontalRule), static_cast<Qt::TileRule>(verticalRule));
}

QTileRules* QTileRules_new2() {
	return new (std::nothrow) QTileRules();
}

QTileRules* QTileRules_new3(QTileRules* param1) {
	return new (std::nothrow) QTileRules(*param1);
}

QTileRules* QTileRules_new4(int rule) {
	return new (std::nothrow) QTileRules(static_cast<Qt::TileRule>(rule));
}

int QTileRules_horizontal(const QTileRules* self) {
	Qt::TileRule horizontal_ret = self->horizontal;
	return static_cast<int>(horizontal_ret);
}

void QTileRules_setHorizontal(QTileRules* self, int horizontal) {
	self->horizontal = static_cast<Qt::TileRule>(horizontal);
}

int QTileRules_vertical(const QTileRules* self) {
	Qt::TileRule vertical_ret = self->vertical;
	return static_cast<int>(vertical_ret);
}

void QTileRules_setVertical(QTileRules* self, int vertical) {
	self->vertical = static_cast<Qt::TileRule>(vertical);
}

void QTileRules_delete(QTileRules* self) {
	delete self;
}

void miqt_QDrawShadeLine2(QPainter* p, int x1, int y1, int x2, int y2, QPalette* pal, bool sunken, int lineWidth, int midLineWidth) {

	qDrawShadeLine(p, static_cast<int>(x1), static_cast<int>(y1), static_cast<int>(x2), static_cast<int>(y2), *pal, sunken, static_cast<int>(lineWidth), static_cast<int>(midLineWidth));
}

void miqt_QDrawShadeLine3(QPainter* p, QPoint* p1, QPoint* p2, QPalette* pal, bool sunken, int lineWidth, int midLineWidth) {

	qDrawShadeLine(p, *p1, *p2, *pal, sunken, static_cast<int>(lineWidth), static_cast<int>(midLineWidth));
}

void miqt_QDrawShadeRect2(QPainter* p, int x, int y, int w, int h, QPalette* pal, bool sunken, int lineWidth, int midLineWidth, QBrush* fill) {

	qDrawShadeRect(p, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *pal, sunken, static_cast<int>(lineWidth), static_cast<int>(midLineWidth), fill);
}

void miqt_QDrawShadeRect3(QPainter* p, QRect* r, QPalette* pal, bool sunken, int lineWidth, int midLineWidth, QBrush* fill) {

	qDrawShadeRect(p, *r, *pal, sunken, static_cast<int>(lineWidth), static_cast<int>(midLineWidth), fill);
}

void miqt_QDrawShadePanel2(QPainter* p, int x, int y, int w, int h, QPalette* pal, bool sunken, int lineWidth, QBrush* fill) {

	qDrawShadePanel(p, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *pal, sunken, static_cast<int>(lineWidth), fill);
}

void miqt_QDrawShadePanel3(QPainter* p, QRect* r, QPalette* pal, bool sunken, int lineWidth, QBrush* fill) {

	qDrawShadePanel(p, *r, *pal, sunken, static_cast<int>(lineWidth), fill);
}

void miqt_QDrawWinButton2(QPainter* p, int x, int y, int w, int h, QPalette* pal, bool sunken, QBrush* fill) {

	qDrawWinButton(p, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *pal, sunken, fill);
}

void miqt_QDrawWinButton3(QPainter* p, QRect* r, QPalette* pal, bool sunken, QBrush* fill) {

	qDrawWinButton(p, *r, *pal, sunken, fill);
}

void miqt_QDrawWinPanel2(QPainter* p, int x, int y, int w, int h, QPalette* pal, bool sunken, QBrush* fill) {

	qDrawWinPanel(p, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *pal, sunken, fill);
}

void miqt_QDrawWinPanel3(QPainter* p, QRect* r, QPalette* pal, bool sunken, QBrush* fill) {

	qDrawWinPanel(p, *r, *pal, sunken, fill);
}

void miqt_QDrawPlainRect2(QPainter* p, int x, int y, int w, int h, QColor* param6, int lineWidth, QBrush* fill) {

	qDrawPlainRect(p, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), *param6, static_cast<int>(lineWidth), fill);
}

void miqt_QDrawPlainRect3(QPainter* p, QRect* r, QColor* param3, int lineWidth, QBrush* fill) {

	qDrawPlainRect(p, *r, *param3, static_cast<int>(lineWidth), fill);
}

void miqt_QDrawBorderPixmap2(QPainter* painter, QRect* targetRect, QMargins* targetMargins, QPixmap* pixmap, QRect* sourceRect, QMargins* sourceMargins, QTileRules* rules, int hints) {

	qDrawBorderPixmap(painter, *targetRect, *targetMargins, *pixmap, *sourceRect, *sourceMargins, *rules, static_cast<QDrawBorderPixmap::DrawingHints>(hints));
}

void miqt_QDrawBorderPixmap3(QPainter* painter, QRect* target, QMargins* margins, QPixmap* pixmap) {

	qDrawBorderPixmap(painter, *target, *margins, *pixmap);
}

