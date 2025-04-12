#include <QAbstractSeries>
#include <QBrush>
#include <QColor>
#include <QFont>
#include <QGraphicsItem>
#include <QGraphicsLayoutItem>
#include <QGraphicsObject>
#include <QGraphicsWidget>
#include <QHideEvent>
#include <QLegend>
#include <QLegendMarker>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPen>
#include <QShowEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionGraphicsItem>
#include <QWidget>
#include <qlegend.h>
#include "gen_qlegend.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QLegend_backgroundVisibleChanged(intptr_t, bool);
void miqt_exec_callback_QLegend_colorChanged(intptr_t, QColor*);
void miqt_exec_callback_QLegend_borderColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QLegend_fontChanged(intptr_t, QFont*);
void miqt_exec_callback_QLegend_labelColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QLegend_reverseMarkersChanged(intptr_t, bool);
void miqt_exec_callback_QLegend_showToolTipsChanged(intptr_t, bool);
void miqt_exec_callback_QLegend_markerShapeChanged(intptr_t, int);
void miqt_exec_callback_QLegend_attachedToChartChanged(intptr_t, bool);
void miqt_exec_callback_QLegend_interactiveChanged(intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

void QLegend_virtbase(QLegend* src, QGraphicsWidget** outptr_QGraphicsWidget) {
	*outptr_QGraphicsWidget = static_cast<QGraphicsWidget*>(src);
}

QMetaObject* QLegend_metaObject(const QLegend* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLegend_metacast(QLegend* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLegend_tr(const char* s) {
	QString _ret = QLegend::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLegend_paint(QLegend* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QLegend_setBrush(QLegend* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QLegend_brush(const QLegend* self) {
	return new QBrush(self->brush());
}

void QLegend_setColor(QLegend* self, QColor* color) {
	self->setColor(*color);
}

QColor* QLegend_color(QLegend* self) {
	return new QColor(self->color());
}

void QLegend_setPen(QLegend* self, QPen* pen) {
	self->setPen(*pen);
}

QPen* QLegend_pen(const QLegend* self) {
	return new QPen(self->pen());
}

void QLegend_setBorderColor(QLegend* self, QColor* color) {
	self->setBorderColor(*color);
}

QColor* QLegend_borderColor(QLegend* self) {
	return new QColor(self->borderColor());
}

void QLegend_setFont(QLegend* self, QFont* font) {
	self->setFont(*font);
}

QFont* QLegend_font(const QLegend* self) {
	return new QFont(self->font());
}

void QLegend_setLabelBrush(QLegend* self, QBrush* brush) {
	self->setLabelBrush(*brush);
}

QBrush* QLegend_labelBrush(const QLegend* self) {
	return new QBrush(self->labelBrush());
}

void QLegend_setLabelColor(QLegend* self, QColor* color) {
	self->setLabelColor(*color);
}

QColor* QLegend_labelColor(const QLegend* self) {
	return new QColor(self->labelColor());
}

void QLegend_setAlignment(QLegend* self, int alignment) {
	self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

int QLegend_alignment(const QLegend* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QLegend_detachFromChart(QLegend* self) {
	self->detachFromChart();
}

void QLegend_attachToChart(QLegend* self) {
	self->attachToChart();
}

bool QLegend_isAttachedToChart(QLegend* self) {
	return self->isAttachedToChart();
}

void QLegend_setBackgroundVisible(QLegend* self) {
	self->setBackgroundVisible();
}

bool QLegend_isBackgroundVisible(const QLegend* self) {
	return self->isBackgroundVisible();
}

struct miqt_array /* of QLegendMarker* */  QLegend_markers(const QLegend* self) {
	QList<QLegendMarker *> _ret = self->markers();
	// Convert QList<> from C++ memory to manually-managed C memory
	QLegendMarker** _arr = static_cast<QLegendMarker**>(malloc(sizeof(QLegendMarker*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QLegend_reverseMarkers(QLegend* self) {
	return self->reverseMarkers();
}

void QLegend_setReverseMarkers(QLegend* self) {
	self->setReverseMarkers();
}

bool QLegend_showToolTips(const QLegend* self) {
	return self->showToolTips();
}

void QLegend_setShowToolTips(QLegend* self, bool show) {
	self->setShowToolTips(show);
}

bool QLegend_isInteractive(const QLegend* self) {
	return self->isInteractive();
}

void QLegend_setInteractive(QLegend* self, bool interactive) {
	self->setInteractive(interactive);
}

int QLegend_markerShape(const QLegend* self) {
	QLegend::MarkerShape _ret = self->markerShape();
	return static_cast<int>(_ret);
}

void QLegend_setMarkerShape(QLegend* self, int shape) {
	self->setMarkerShape(static_cast<QLegend::MarkerShape>(shape));
}

void QLegend_backgroundVisibleChanged(QLegend* self, bool visible) {
	self->backgroundVisibleChanged(visible);
}

void QLegend_connect_backgroundVisibleChanged(QLegend* self, intptr_t slot) {
	QLegend::connect(self, static_cast<void (QLegend::*)(bool)>(&QLegend::backgroundVisibleChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QLegend_backgroundVisibleChanged(slot, sigval1);
	});
}

void QLegend_colorChanged(QLegend* self, QColor* color) {
	self->colorChanged(*color);
}

void QLegend_connect_colorChanged(QLegend* self, intptr_t slot) {
	QLegend::connect(self, static_cast<void (QLegend::*)(QColor)>(&QLegend::colorChanged), self, [=](QColor color) {
		QColor* sigval1 = new QColor(color);
		miqt_exec_callback_QLegend_colorChanged(slot, sigval1);
	});
}

void QLegend_borderColorChanged(QLegend* self, QColor* color) {
	self->borderColorChanged(*color);
}

void QLegend_connect_borderColorChanged(QLegend* self, intptr_t slot) {
	QLegend::connect(self, static_cast<void (QLegend::*)(QColor)>(&QLegend::borderColorChanged), self, [=](QColor color) {
		QColor* sigval1 = new QColor(color);
		miqt_exec_callback_QLegend_borderColorChanged(slot, sigval1);
	});
}

void QLegend_fontChanged(QLegend* self, QFont* font) {
	self->fontChanged(*font);
}

void QLegend_connect_fontChanged(QLegend* self, intptr_t slot) {
	QLegend::connect(self, static_cast<void (QLegend::*)(QFont)>(&QLegend::fontChanged), self, [=](QFont font) {
		QFont* sigval1 = new QFont(font);
		miqt_exec_callback_QLegend_fontChanged(slot, sigval1);
	});
}

void QLegend_labelColorChanged(QLegend* self, QColor* color) {
	self->labelColorChanged(*color);
}

void QLegend_connect_labelColorChanged(QLegend* self, intptr_t slot) {
	QLegend::connect(self, static_cast<void (QLegend::*)(QColor)>(&QLegend::labelColorChanged), self, [=](QColor color) {
		QColor* sigval1 = new QColor(color);
		miqt_exec_callback_QLegend_labelColorChanged(slot, sigval1);
	});
}

void QLegend_reverseMarkersChanged(QLegend* self, bool reverseMarkers) {
	self->reverseMarkersChanged(reverseMarkers);
}

void QLegend_connect_reverseMarkersChanged(QLegend* self, intptr_t slot) {
	QLegend::connect(self, static_cast<void (QLegend::*)(bool)>(&QLegend::reverseMarkersChanged), self, [=](bool reverseMarkers) {
		bool sigval1 = reverseMarkers;
		miqt_exec_callback_QLegend_reverseMarkersChanged(slot, sigval1);
	});
}

void QLegend_showToolTipsChanged(QLegend* self, bool showToolTips) {
	self->showToolTipsChanged(showToolTips);
}

void QLegend_connect_showToolTipsChanged(QLegend* self, intptr_t slot) {
	QLegend::connect(self, static_cast<void (QLegend::*)(bool)>(&QLegend::showToolTipsChanged), self, [=](bool showToolTips) {
		bool sigval1 = showToolTips;
		miqt_exec_callback_QLegend_showToolTipsChanged(slot, sigval1);
	});
}

void QLegend_markerShapeChanged(QLegend* self, int shape) {
	self->markerShapeChanged(static_cast<QLegend::MarkerShape>(shape));
}

void QLegend_connect_markerShapeChanged(QLegend* self, intptr_t slot) {
	QLegend::connect(self, static_cast<void (QLegend::*)(QLegend::MarkerShape)>(&QLegend::markerShapeChanged), self, [=](QLegend::MarkerShape shape) {
		QLegend::MarkerShape shape_ret = shape;
		int sigval1 = static_cast<int>(shape_ret);
		miqt_exec_callback_QLegend_markerShapeChanged(slot, sigval1);
	});
}

void QLegend_attachedToChartChanged(QLegend* self, bool attachedToChart) {
	self->attachedToChartChanged(attachedToChart);
}

void QLegend_connect_attachedToChartChanged(QLegend* self, intptr_t slot) {
	QLegend::connect(self, static_cast<void (QLegend::*)(bool)>(&QLegend::attachedToChartChanged), self, [=](bool attachedToChart) {
		bool sigval1 = attachedToChart;
		miqt_exec_callback_QLegend_attachedToChartChanged(slot, sigval1);
	});
}

void QLegend_interactiveChanged(QLegend* self, bool interactive) {
	self->interactiveChanged(interactive);
}

void QLegend_connect_interactiveChanged(QLegend* self, intptr_t slot) {
	QLegend::connect(self, static_cast<void (QLegend::*)(bool)>(&QLegend::interactiveChanged), self, [=](bool interactive) {
		bool sigval1 = interactive;
		miqt_exec_callback_QLegend_interactiveChanged(slot, sigval1);
	});
}

struct miqt_string QLegend_tr2(const char* s, const char* c) {
	QString _ret = QLegend::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLegend_tr3(const char* s, const char* c, int n) {
	QString _ret = QLegend::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLegend_setBackgroundVisibleWithVisible(QLegend* self, bool visible) {
	self->setBackgroundVisible(visible);
}

struct miqt_array /* of QLegendMarker* */  QLegend_markersWithSeries(const QLegend* self, QAbstractSeries* series) {
	QList<QLegendMarker *> _ret = self->markers(series);
	// Convert QList<> from C++ memory to manually-managed C memory
	QLegendMarker** _arr = static_cast<QLegendMarker**>(malloc(sizeof(QLegendMarker*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QLegend_setReverseMarkersWithReverseMarkers(QLegend* self, bool reverseMarkers) {
	self->setReverseMarkers(reverseMarkers);
}

void QLegend_delete(QLegend* self) {
	delete self;
}

