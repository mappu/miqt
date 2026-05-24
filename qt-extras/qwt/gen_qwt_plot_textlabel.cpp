#include <QBrush>
#include <QRectF>
#include <QSizeF>
#include <qwt_plot_textlabel.h>
#include "gen_qwt_plot_textlabel.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPlotTextLabel* QwtPlotTextLabel_new() {
	return new (std::nothrow) QwtPlotTextLabel();
}

void QwtPlotTextLabel_virtbase(QwtPlotTextLabel* src, QwtPlotItem** outptr_QwtPlotItem) {
	*outptr_QwtPlotItem = static_cast<QwtPlotItem*>(src);
}

int QwtPlotTextLabel_rtti(const QwtPlotTextLabel* self) {
	return self->rtti();
}

void QwtPlotTextLabel_setText(QwtPlotTextLabel* self, QwtText* text) {
	self->setText(*text);
}

QwtText* QwtPlotTextLabel_text(const QwtPlotTextLabel* self) {
	return new QwtText(self->text());
}

void QwtPlotTextLabel_setMargin(QwtPlotTextLabel* self, int margin) {
	self->setMargin(static_cast<int>(margin));
}

int QwtPlotTextLabel_margin(const QwtPlotTextLabel* self) {
	return self->margin();
}

QRectF* QwtPlotTextLabel_textRect(const QwtPlotTextLabel* self, QRectF* param1, QSizeF* param2) {
	return new QRectF(self->textRect(*param1, *param2));
}

void QwtPlotTextLabel_delete(QwtPlotTextLabel* self) {
	delete self;
}

