#include <QBrush>
#include <QFont>
#include <QList>
#include <QPainter>
#include <QPen>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QSizeF>
#include <qwt_plot_legenditem.h>
#include "gen_qwt_plot_legenditem.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QwtPlotLegendItem* QwtPlotLegendItem_new() {
	return new (std::nothrow) QwtPlotLegendItem();
}

void QwtPlotLegendItem_virtbase(QwtPlotLegendItem* src, QwtPlotItem** outptr_QwtPlotItem) {
	*outptr_QwtPlotItem = static_cast<QwtPlotItem*>(src);
}

int QwtPlotLegendItem_rtti(const QwtPlotLegendItem* self) {
	return self->rtti();
}

void QwtPlotLegendItem_setAlignment(QwtPlotLegendItem* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QwtPlotLegendItem_alignment(const QwtPlotLegendItem* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QwtPlotLegendItem_setMaxColumns(QwtPlotLegendItem* self, unsigned int maxColumns) {
	self->setMaxColumns(static_cast<uint>(maxColumns));
}

unsigned int QwtPlotLegendItem_maxColumns(const QwtPlotLegendItem* self) {
	uint _ret = self->maxColumns();
	return static_cast<unsigned int>(_ret);
}

void QwtPlotLegendItem_setMargin(QwtPlotLegendItem* self, int margin) {
	self->setMargin(static_cast<int>(margin));
}

int QwtPlotLegendItem_margin(const QwtPlotLegendItem* self) {
	return self->margin();
}

void QwtPlotLegendItem_setSpacing(QwtPlotLegendItem* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

int QwtPlotLegendItem_spacing(const QwtPlotLegendItem* self) {
	return self->spacing();
}

void QwtPlotLegendItem_setItemMargin(QwtPlotLegendItem* self, int itemMargin) {
	self->setItemMargin(static_cast<int>(itemMargin));
}

int QwtPlotLegendItem_itemMargin(const QwtPlotLegendItem* self) {
	return self->itemMargin();
}

void QwtPlotLegendItem_setItemSpacing(QwtPlotLegendItem* self, int itemSpacing) {
	self->setItemSpacing(static_cast<int>(itemSpacing));
}

int QwtPlotLegendItem_itemSpacing(const QwtPlotLegendItem* self) {
	return self->itemSpacing();
}

void QwtPlotLegendItem_setFont(QwtPlotLegendItem* self, QFont* font) {
	self->setFont(*font);
}

QFont* QwtPlotLegendItem_font(const QwtPlotLegendItem* self) {
	return new QFont(self->font());
}

void QwtPlotLegendItem_setBorderDistance(QwtPlotLegendItem* self, int borderDistance) {
	self->setBorderDistance(static_cast<int>(borderDistance));
}

int QwtPlotLegendItem_borderDistance(const QwtPlotLegendItem* self) {
	return self->borderDistance();
}

void QwtPlotLegendItem_setBorderRadius(QwtPlotLegendItem* self, double borderRadius) {
	self->setBorderRadius(static_cast<double>(borderRadius));
}

double QwtPlotLegendItem_borderRadius(const QwtPlotLegendItem* self) {
	return self->borderRadius();
}

void QwtPlotLegendItem_setBorderPen(QwtPlotLegendItem* self, QPen* borderPen) {
	self->setBorderPen(*borderPen);
}

QPen* QwtPlotLegendItem_borderPen(const QwtPlotLegendItem* self) {
	return new QPen(self->borderPen());
}

void QwtPlotLegendItem_setBackgroundBrush(QwtPlotLegendItem* self, QBrush* backgroundBrush) {
	self->setBackgroundBrush(*backgroundBrush);
}

QBrush* QwtPlotLegendItem_backgroundBrush(const QwtPlotLegendItem* self) {
	return new QBrush(self->backgroundBrush());
}

void QwtPlotLegendItem_setBackgroundMode(QwtPlotLegendItem* self, int backgroundMode) {
	self->setBackgroundMode(static_cast<QwtPlotLegendItem::BackgroundMode>(backgroundMode));
}

int QwtPlotLegendItem_backgroundMode(const QwtPlotLegendItem* self) {
	QwtPlotLegendItem::BackgroundMode _ret = self->backgroundMode();
	return static_cast<int>(_ret);
}

void QwtPlotLegendItem_setTextPen(QwtPlotLegendItem* self, QPen* textPen) {
	self->setTextPen(*textPen);
}

QPen* QwtPlotLegendItem_textPen(const QwtPlotLegendItem* self) {
	return new QPen(self->textPen());
}

void QwtPlotLegendItem_clearLegend(QwtPlotLegendItem* self) {
	self->clearLegend();
}

void QwtPlotLegendItem_updateLegend(QwtPlotLegendItem* self, QwtPlotItem* param1, struct miqt_array /* of QwtLegendData* */  param2) {
	QList<QwtLegendData> param2_QList;
	param2_QList.reserve(param2.len);
	QwtLegendData** param2_arr = static_cast<QwtLegendData**>(param2.data);
	for(size_t i = 0; i < param2.len; ++i) {
		param2_QList.push_back(*(param2_arr[i]));
	}
	self->updateLegend(param1, param2_QList);
}

QRect* QwtPlotLegendItem_geometry(const QwtPlotLegendItem* self, QRectF* canvasRect) {
	return new QRect(self->geometry(*canvasRect));
}

QSize* QwtPlotLegendItem_minimumSize(const QwtPlotLegendItem* self, QwtLegendData* param1) {
	return new QSize(self->minimumSize(*param1));
}

int QwtPlotLegendItem_heightForWidth(const QwtPlotLegendItem* self, QwtLegendData* param1, int width) {
	return self->heightForWidth(*param1, static_cast<int>(width));
}

struct miqt_array /* of QwtPlotItem* */  QwtPlotLegendItem_plotItems(const QwtPlotLegendItem* self) {
	QList<const QwtPlotItem *> _ret = self->plotItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QwtPlotItem** _arr = static_cast<QwtPlotItem**>(malloc(sizeof(QwtPlotItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = (QwtPlotItem*) _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QRect* */  QwtPlotLegendItem_legendGeometries(const QwtPlotLegendItem* self, QwtPlotItem* param1) {
	QList<QRect> _ret = self->legendGeometries(param1);
	// Convert QList<> from C++ memory to manually-managed C memory
	QRect** _arr = static_cast<QRect**>(malloc(sizeof(QRect*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QRect(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QwtPlotLegendItem_delete(QwtPlotLegendItem* self) {
	delete self;
}

