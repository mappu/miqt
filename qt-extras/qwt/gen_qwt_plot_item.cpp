#include <QBrush>
#include <QList>
#include <QRectF>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qwt_plot_item.h>
#include "gen_qwt_plot_item.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QwtPlotItem_attach(QwtPlotItem* self, QwtPlot* plot) {
	self->attach(plot);
}

void QwtPlotItem_detach(QwtPlotItem* self) {
	self->detach();
}

QwtPlot* QwtPlotItem_plot(const QwtPlotItem* self) {
	return self->plot();
}

void QwtPlotItem_setTitle(QwtPlotItem* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setTitle(title_QString);
}

void QwtPlotItem_setTitleWithTitle(QwtPlotItem* self, QwtText* title) {
	self->setTitle(*title);
}

QwtText* QwtPlotItem_title(const QwtPlotItem* self) {
	const QwtText& _ret = self->title();
	// Cast returned reference into pointer
	return const_cast<QwtText*>(&_ret);
}

int QwtPlotItem_rtti(const QwtPlotItem* self) {
	return self->rtti();
}

void QwtPlotItem_setItemAttribute(QwtPlotItem* self, int param1) {
	self->setItemAttribute(static_cast<QwtPlotItem::ItemAttribute>(param1));
}

bool QwtPlotItem_testItemAttribute(const QwtPlotItem* self, int param1) {
	return self->testItemAttribute(static_cast<QwtPlotItem::ItemAttribute>(param1));
}

void QwtPlotItem_setItemInterest(QwtPlotItem* self, int param1) {
	self->setItemInterest(static_cast<QwtPlotItem::ItemInterest>(param1));
}

bool QwtPlotItem_testItemInterest(const QwtPlotItem* self, int param1) {
	return self->testItemInterest(static_cast<QwtPlotItem::ItemInterest>(param1));
}

void QwtPlotItem_setRenderHint(QwtPlotItem* self, int param1) {
	self->setRenderHint(static_cast<QwtPlotItem::RenderHint>(param1));
}

bool QwtPlotItem_testRenderHint(const QwtPlotItem* self, int param1) {
	return self->testRenderHint(static_cast<QwtPlotItem::RenderHint>(param1));
}

void QwtPlotItem_setRenderThreadCount(QwtPlotItem* self, unsigned int numThreads) {
	self->setRenderThreadCount(static_cast<uint>(numThreads));
}

unsigned int QwtPlotItem_renderThreadCount(const QwtPlotItem* self) {
	uint _ret = self->renderThreadCount();
	return static_cast<unsigned int>(_ret);
}

void QwtPlotItem_setLegendIconSize(QwtPlotItem* self, QSize* legendIconSize) {
	self->setLegendIconSize(*legendIconSize);
}

QSize* QwtPlotItem_legendIconSize(const QwtPlotItem* self) {
	return new QSize(self->legendIconSize());
}

double QwtPlotItem_z(const QwtPlotItem* self) {
	return self->z();
}

void QwtPlotItem_setZ(QwtPlotItem* self, double z) {
	self->setZ(static_cast<double>(z));
}

void QwtPlotItem_show(QwtPlotItem* self) {
	self->show();
}

void QwtPlotItem_hide(QwtPlotItem* self) {
	self->hide();
}

void QwtPlotItem_setVisible(QwtPlotItem* self, bool visible) {
	self->setVisible(visible);
}

bool QwtPlotItem_isVisible(const QwtPlotItem* self) {
	return self->isVisible();
}

void QwtPlotItem_setAxes(QwtPlotItem* self, int xAxis, int yAxis) {
	self->setAxes(static_cast<int>(xAxis), static_cast<int>(yAxis));
}

void QwtPlotItem_setXAxis(QwtPlotItem* self, int axis) {
	self->setXAxis(static_cast<int>(axis));
}

int QwtPlotItem_xAxis(const QwtPlotItem* self) {
	return self->xAxis();
}

void QwtPlotItem_setYAxis(QwtPlotItem* self, int axis) {
	self->setYAxis(static_cast<int>(axis));
}

int QwtPlotItem_yAxis(const QwtPlotItem* self) {
	return self->yAxis();
}

void QwtPlotItem_itemChanged(QwtPlotItem* self) {
	self->itemChanged();
}

void QwtPlotItem_legendChanged(QwtPlotItem* self) {
	self->legendChanged();
}

QRectF* QwtPlotItem_boundingRect(const QwtPlotItem* self) {
	return new QRectF(self->boundingRect());
}

void QwtPlotItem_updateScaleDiv(QwtPlotItem* self, QwtScaleDiv* param1, QwtScaleDiv* param2) {
	self->updateScaleDiv(*param1, *param2);
}

void QwtPlotItem_updateLegend(QwtPlotItem* self, QwtPlotItem* param1, struct miqt_array /* of QwtLegendData* */  param2) {
	QList<QwtLegendData> param2_QList;
	param2_QList.reserve(param2.len);
	QwtLegendData** param2_arr = static_cast<QwtLegendData**>(param2.data);
	for(size_t i = 0; i < param2.len; ++i) {
		param2_QList.push_back(*(param2_arr[i]));
	}
	self->updateLegend(param1, param2_QList);
}

struct miqt_array /* of QwtLegendData* */  QwtPlotItem_legendData(const QwtPlotItem* self) {
	QList<QwtLegendData> _ret = self->legendData();
	// Convert QList<> from C++ memory to manually-managed C memory
	QwtLegendData** _arr = static_cast<QwtLegendData**>(malloc(sizeof(QwtLegendData*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QwtLegendData(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QwtGraphic* QwtPlotItem_legendIcon(const QwtPlotItem* self, int index, QSizeF* param2) {
	return new QwtGraphic(self->legendIcon(static_cast<int>(index), *param2));
}

void QwtPlotItem_setItemAttribute2(QwtPlotItem* self, int param1, bool on) {
	self->setItemAttribute(static_cast<QwtPlotItem::ItemAttribute>(param1), on);
}

void QwtPlotItem_setItemInterest2(QwtPlotItem* self, int param1, bool on) {
	self->setItemInterest(static_cast<QwtPlotItem::ItemInterest>(param1), on);
}

void QwtPlotItem_setRenderHint2(QwtPlotItem* self, int param1, bool on) {
	self->setRenderHint(static_cast<QwtPlotItem::RenderHint>(param1), on);
}

void QwtPlotItem_delete(QwtPlotItem* self) {
	delete self;
}

