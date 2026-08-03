#include <QBrush>
#include <QByteArray>
#include <QPainter>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSvgRenderer>
#include <qwt_plot_svgitem.h>
#include "gen_qwt_plot_svgitem.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPlotSvgItem* QwtPlotSvgItem_new() {
	return new (std::nothrow) QwtPlotSvgItem();
}

QwtPlotSvgItem* QwtPlotSvgItem_new2(QwtText* title) {
	return new (std::nothrow) QwtPlotSvgItem(*title);
}

QwtPlotSvgItem* QwtPlotSvgItem_new3(struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	return new (std::nothrow) QwtPlotSvgItem(title_QString);
}

void QwtPlotSvgItem_virtbase(QwtPlotSvgItem* src, QwtPlotItem** outptr_QwtPlotItem) {
	*outptr_QwtPlotItem = static_cast<QwtPlotItem*>(src);
}

bool QwtPlotSvgItem_loadFile(QwtPlotSvgItem* self, QRectF* param1, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->loadFile(*param1, fileName_QString);
}

bool QwtPlotSvgItem_loadData(QwtPlotSvgItem* self, QRectF* param1, struct miqt_string param2) {
	QByteArray param2_QByteArray(param2.data, param2.len);
	return self->loadData(*param1, param2_QByteArray);
}

QRectF* QwtPlotSvgItem_boundingRect(const QwtPlotSvgItem* self) {
	return new QRectF(self->boundingRect());
}

int QwtPlotSvgItem_rtti(const QwtPlotSvgItem* self) {
	return self->rtti();
}

void QwtPlotSvgItem_delete(QwtPlotSvgItem* self) {
	delete self;
}

