#include <QBrush>
#include <QFont>
#include <QPalette>
#include <QSizeF>
#include <qwt_plot_scaleitem.h>
#include "gen_qwt_plot_scaleitem.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPlotScaleItem* QwtPlotScaleItem_new() {
	return new (std::nothrow) QwtPlotScaleItem();
}

QwtPlotScaleItem* QwtPlotScaleItem_new2(int param1) {
	return new (std::nothrow) QwtPlotScaleItem(static_cast<QwtScaleDraw::Alignment>(param1));
}

QwtPlotScaleItem* QwtPlotScaleItem_new3(int param1, const double pos) {
	return new (std::nothrow) QwtPlotScaleItem(static_cast<QwtScaleDraw::Alignment>(param1), static_cast<const double>(pos));
}

void QwtPlotScaleItem_virtbase(QwtPlotScaleItem* src, QwtPlotItem** outptr_QwtPlotItem) {
	*outptr_QwtPlotItem = static_cast<QwtPlotItem*>(src);
}

int QwtPlotScaleItem_rtti(const QwtPlotScaleItem* self) {
	return self->rtti();
}

void QwtPlotScaleItem_setScaleDiv(QwtPlotScaleItem* self, QwtScaleDiv* scaleDiv) {
	self->setScaleDiv(*scaleDiv);
}

QwtScaleDiv* QwtPlotScaleItem_scaleDiv(const QwtPlotScaleItem* self) {
	const QwtScaleDiv& _ret = self->scaleDiv();
	// Cast returned reference into pointer
	return const_cast<QwtScaleDiv*>(&_ret);
}

void QwtPlotScaleItem_setScaleDivFromAxis(QwtPlotScaleItem* self, bool on) {
	self->setScaleDivFromAxis(on);
}

bool QwtPlotScaleItem_isScaleDivFromAxis(const QwtPlotScaleItem* self) {
	return self->isScaleDivFromAxis();
}

void QwtPlotScaleItem_setPalette(QwtPlotScaleItem* self, QPalette* palette) {
	self->setPalette(*palette);
}

QPalette* QwtPlotScaleItem_palette(const QwtPlotScaleItem* self) {
	return new QPalette(self->palette());
}

void QwtPlotScaleItem_setFont(QwtPlotScaleItem* self, QFont* font) {
	self->setFont(*font);
}

QFont* QwtPlotScaleItem_font(const QwtPlotScaleItem* self) {
	return new QFont(self->font());
}

void QwtPlotScaleItem_setScaleDraw(QwtPlotScaleItem* self, QwtScaleDraw* scaleDraw) {
	self->setScaleDraw(scaleDraw);
}

QwtScaleDraw* QwtPlotScaleItem_scaleDraw(const QwtPlotScaleItem* self) {
	return (QwtScaleDraw*) self->scaleDraw();
}

QwtScaleDraw* QwtPlotScaleItem_scaleDraw2(QwtPlotScaleItem* self) {
	return self->scaleDraw();
}

void QwtPlotScaleItem_setPosition(QwtPlotScaleItem* self, double pos) {
	self->setPosition(static_cast<double>(pos));
}

double QwtPlotScaleItem_position(const QwtPlotScaleItem* self) {
	return self->position();
}

void QwtPlotScaleItem_setBorderDistance(QwtPlotScaleItem* self, int borderDistance) {
	self->setBorderDistance(static_cast<int>(borderDistance));
}

int QwtPlotScaleItem_borderDistance(const QwtPlotScaleItem* self) {
	return self->borderDistance();
}

void QwtPlotScaleItem_setAlignment(QwtPlotScaleItem* self, int alignment) {
	self->setAlignment(static_cast<QwtScaleDraw::Alignment>(alignment));
}

void QwtPlotScaleItem_updateScaleDiv(QwtPlotScaleItem* self, QwtScaleDiv* param1, QwtScaleDiv* param2) {
	self->updateScaleDiv(*param1, *param2);
}

void QwtPlotScaleItem_delete(QwtPlotScaleItem* self) {
	delete self;
}

