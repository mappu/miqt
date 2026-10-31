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

struct miqt_qrectf QwtPlotTextLabel_textRect(const QwtPlotTextLabel* self, struct miqt_qrectf param1, struct miqt_qsizef param2) {
	return miqt_to_cabi<struct miqt_qrectf>(self->textRect(miqt_from_cabi<QRectF>(param1), miqt_from_cabi<QSizeF>(param2)));
}

void QwtPlotTextLabel_delete(QwtPlotTextLabel* self) {
	delete self;
}

