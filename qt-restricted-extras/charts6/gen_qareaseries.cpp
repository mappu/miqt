#include <QAbstractSeries>
#include <QAreaSeries>
#include <QBrush>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QLineSeries>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qareaseries.h>
#include "gen_qareaseries.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAreaSeries_clicked(intptr_t, QPointF*);
void miqt_exec_callback_QAreaSeries_hovered(intptr_t, QPointF*, bool);
void miqt_exec_callback_QAreaSeries_pressed(intptr_t, QPointF*);
void miqt_exec_callback_QAreaSeries_released(intptr_t, QPointF*);
void miqt_exec_callback_QAreaSeries_doubleClicked(intptr_t, QPointF*);
void miqt_exec_callback_QAreaSeries_selected(intptr_t);
void miqt_exec_callback_QAreaSeries_colorChanged(intptr_t, QColor*);
void miqt_exec_callback_QAreaSeries_borderColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QAreaSeries_pointLabelsFormatChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QAreaSeries_pointLabelsVisibilityChanged(intptr_t, bool);
void miqt_exec_callback_QAreaSeries_pointLabelsFontChanged(intptr_t, QFont*);
void miqt_exec_callback_QAreaSeries_pointLabelsColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QAreaSeries_pointLabelsClippingChanged(intptr_t, bool);
int miqt_exec_callback_QAreaSeries_type(const QAreaSeries*, intptr_t);
bool miqt_exec_callback_QAreaSeries_event(QAreaSeries*, intptr_t, QEvent*);
bool miqt_exec_callback_QAreaSeries_eventFilter(QAreaSeries*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAreaSeries_timerEvent(QAreaSeries*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAreaSeries_childEvent(QAreaSeries*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAreaSeries_customEvent(QAreaSeries*, intptr_t, QEvent*);
void miqt_exec_callback_QAreaSeries_connectNotify(QAreaSeries*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAreaSeries_disconnectNotify(QAreaSeries*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAreaSeries final : public QAreaSeries {
public:

	MiqtVirtualQAreaSeries(): QAreaSeries() {}
	MiqtVirtualQAreaSeries(QLineSeries* upperSeries): QAreaSeries(upperSeries) {}
	MiqtVirtualQAreaSeries(QObject* parent): QAreaSeries(parent) {}
	MiqtVirtualQAreaSeries(QLineSeries* upperSeries, QLineSeries* lowerSeries): QAreaSeries(upperSeries, lowerSeries) {}

	virtual ~MiqtVirtualQAreaSeries() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSeries::SeriesType type() const override {
		if (handle__type == 0) {
			return QAreaSeries::type();
		}

		int callback_return_value = miqt_exec_callback_QAreaSeries_type(this, handle__type);
		return static_cast<QAbstractSeries::SeriesType>(callback_return_value);
	}

	friend int QAreaSeries_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAreaSeries::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QAreaSeries_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QAreaSeries_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAreaSeries::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QAreaSeries_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAreaSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAreaSeries::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QAreaSeries_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QAreaSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAreaSeries::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QAreaSeries_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QAreaSeries_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAreaSeries::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QAreaSeries_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QAreaSeries_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAreaSeries::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAreaSeries_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QAreaSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAreaSeries::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAreaSeries_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QAreaSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QAreaSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAreaSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAreaSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAreaSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAreaSeries* QAreaSeries_new() {
	return new (std::nothrow) MiqtVirtualQAreaSeries();
}

QAreaSeries* QAreaSeries_new2(QLineSeries* upperSeries) {
	return new (std::nothrow) MiqtVirtualQAreaSeries(upperSeries);
}

QAreaSeries* QAreaSeries_new3(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAreaSeries(parent);
}

QAreaSeries* QAreaSeries_new4(QLineSeries* upperSeries, QLineSeries* lowerSeries) {
	return new (std::nothrow) MiqtVirtualQAreaSeries(upperSeries, lowerSeries);
}

void QAreaSeries_virtbase(QAreaSeries* src, QAbstractSeries** outptr_QAbstractSeries) {
	*outptr_QAbstractSeries = static_cast<QAbstractSeries*>(src);
}

QMetaObject* QAreaSeries_metaObject(const QAreaSeries* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAreaSeries_metacast(QAreaSeries* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAreaSeries_tr(const char* s) {
	QString _ret = QAreaSeries::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAreaSeries_type(const QAreaSeries* self) {
	QAbstractSeries::SeriesType _ret = self->type();
	return static_cast<int>(_ret);
}

void QAreaSeries_setUpperSeries(QAreaSeries* self, QLineSeries* series) {
	self->setUpperSeries(series);
}

QLineSeries* QAreaSeries_upperSeries(const QAreaSeries* self) {
	return self->upperSeries();
}

void QAreaSeries_setLowerSeries(QAreaSeries* self, QLineSeries* series) {
	self->setLowerSeries(series);
}

QLineSeries* QAreaSeries_lowerSeries(const QAreaSeries* self) {
	return self->lowerSeries();
}

void QAreaSeries_setPen(QAreaSeries* self, QPen* pen) {
	self->setPen(*pen);
}

QPen* QAreaSeries_pen(const QAreaSeries* self) {
	return new QPen(self->pen());
}

void QAreaSeries_setBrush(QAreaSeries* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QAreaSeries_brush(const QAreaSeries* self) {
	return new QBrush(self->brush());
}

void QAreaSeries_setColor(QAreaSeries* self, QColor* color) {
	self->setColor(*color);
}

QColor* QAreaSeries_color(const QAreaSeries* self) {
	return new QColor(self->color());
}

void QAreaSeries_setBorderColor(QAreaSeries* self, QColor* color) {
	self->setBorderColor(*color);
}

QColor* QAreaSeries_borderColor(const QAreaSeries* self) {
	return new QColor(self->borderColor());
}

void QAreaSeries_setPointsVisible(QAreaSeries* self) {
	self->setPointsVisible();
}

bool QAreaSeries_pointsVisible(const QAreaSeries* self) {
	return self->pointsVisible();
}

void QAreaSeries_setPointLabelsFormat(QAreaSeries* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	self->setPointLabelsFormat(format_QString);
}

struct miqt_string QAreaSeries_pointLabelsFormat(const QAreaSeries* self) {
	QString _ret = self->pointLabelsFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAreaSeries_setPointLabelsVisible(QAreaSeries* self) {
	self->setPointLabelsVisible();
}

bool QAreaSeries_pointLabelsVisible(const QAreaSeries* self) {
	return self->pointLabelsVisible();
}

void QAreaSeries_setPointLabelsFont(QAreaSeries* self, QFont* font) {
	self->setPointLabelsFont(*font);
}

QFont* QAreaSeries_pointLabelsFont(const QAreaSeries* self) {
	return new QFont(self->pointLabelsFont());
}

void QAreaSeries_setPointLabelsColor(QAreaSeries* self, QColor* color) {
	self->setPointLabelsColor(*color);
}

QColor* QAreaSeries_pointLabelsColor(const QAreaSeries* self) {
	return new QColor(self->pointLabelsColor());
}

void QAreaSeries_setPointLabelsClipping(QAreaSeries* self) {
	self->setPointLabelsClipping();
}

bool QAreaSeries_pointLabelsClipping(const QAreaSeries* self) {
	return self->pointLabelsClipping();
}

void QAreaSeries_clicked(QAreaSeries* self, QPointF* point) {
	self->clicked(*point);
}

void QAreaSeries_connect_clicked(QAreaSeries* self, intptr_t slot) {
	QAreaSeries::connect(self, static_cast<void (QAreaSeries::*)(const QPointF&)>(&QAreaSeries::clicked), self, [=](const QPointF& point) {
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		miqt_exec_callback_QAreaSeries_clicked(slot, sigval1);
	});
}

void QAreaSeries_hovered(QAreaSeries* self, QPointF* point, bool state) {
	self->hovered(*point, state);
}

void QAreaSeries_connect_hovered(QAreaSeries* self, intptr_t slot) {
	QAreaSeries::connect(self, static_cast<void (QAreaSeries::*)(const QPointF&, bool)>(&QAreaSeries::hovered), self, [=](const QPointF& point, bool state) {
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		bool sigval2 = state;
		miqt_exec_callback_QAreaSeries_hovered(slot, sigval1, sigval2);
	});
}

void QAreaSeries_pressed(QAreaSeries* self, QPointF* point) {
	self->pressed(*point);
}

void QAreaSeries_connect_pressed(QAreaSeries* self, intptr_t slot) {
	QAreaSeries::connect(self, static_cast<void (QAreaSeries::*)(const QPointF&)>(&QAreaSeries::pressed), self, [=](const QPointF& point) {
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		miqt_exec_callback_QAreaSeries_pressed(slot, sigval1);
	});
}

void QAreaSeries_released(QAreaSeries* self, QPointF* point) {
	self->released(*point);
}

void QAreaSeries_connect_released(QAreaSeries* self, intptr_t slot) {
	QAreaSeries::connect(self, static_cast<void (QAreaSeries::*)(const QPointF&)>(&QAreaSeries::released), self, [=](const QPointF& point) {
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		miqt_exec_callback_QAreaSeries_released(slot, sigval1);
	});
}

void QAreaSeries_doubleClicked(QAreaSeries* self, QPointF* point) {
	self->doubleClicked(*point);
}

void QAreaSeries_connect_doubleClicked(QAreaSeries* self, intptr_t slot) {
	QAreaSeries::connect(self, static_cast<void (QAreaSeries::*)(const QPointF&)>(&QAreaSeries::doubleClicked), self, [=](const QPointF& point) {
		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		miqt_exec_callback_QAreaSeries_doubleClicked(slot, sigval1);
	});
}

void QAreaSeries_selected(QAreaSeries* self) {
	self->selected();
}

void QAreaSeries_connect_selected(QAreaSeries* self, intptr_t slot) {
	QAreaSeries::connect(self, static_cast<void (QAreaSeries::*)()>(&QAreaSeries::selected), self, [=]() {
		miqt_exec_callback_QAreaSeries_selected(slot);
	});
}

void QAreaSeries_colorChanged(QAreaSeries* self, QColor* color) {
	self->colorChanged(*color);
}

void QAreaSeries_connect_colorChanged(QAreaSeries* self, intptr_t slot) {
	QAreaSeries::connect(self, static_cast<void (QAreaSeries::*)(QColor)>(&QAreaSeries::colorChanged), self, [=](QColor color) {
		QColor* sigval1 = new QColor(color);
		miqt_exec_callback_QAreaSeries_colorChanged(slot, sigval1);
	});
}

void QAreaSeries_borderColorChanged(QAreaSeries* self, QColor* color) {
	self->borderColorChanged(*color);
}

void QAreaSeries_connect_borderColorChanged(QAreaSeries* self, intptr_t slot) {
	QAreaSeries::connect(self, static_cast<void (QAreaSeries::*)(QColor)>(&QAreaSeries::borderColorChanged), self, [=](QColor color) {
		QColor* sigval1 = new QColor(color);
		miqt_exec_callback_QAreaSeries_borderColorChanged(slot, sigval1);
	});
}

void QAreaSeries_pointLabelsFormatChanged(QAreaSeries* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	self->pointLabelsFormatChanged(format_QString);
}

void QAreaSeries_connect_pointLabelsFormatChanged(QAreaSeries* self, intptr_t slot) {
	QAreaSeries::connect(self, static_cast<void (QAreaSeries::*)(const QString&)>(&QAreaSeries::pointLabelsFormatChanged), self, [=](const QString& format) {
		const QString format_ret = format;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray format_b = format_ret.toUtf8();
		struct miqt_string format_ms;
		format_ms.len = format_b.length();
		format_ms.data = static_cast<char*>(malloc(format_ms.len));
		memcpy(format_ms.data, format_b.data(), format_ms.len);
		struct miqt_string sigval1 = format_ms;
		miqt_exec_callback_QAreaSeries_pointLabelsFormatChanged(slot, sigval1);
	});
}

void QAreaSeries_pointLabelsVisibilityChanged(QAreaSeries* self, bool visible) {
	self->pointLabelsVisibilityChanged(visible);
}

void QAreaSeries_connect_pointLabelsVisibilityChanged(QAreaSeries* self, intptr_t slot) {
	QAreaSeries::connect(self, static_cast<void (QAreaSeries::*)(bool)>(&QAreaSeries::pointLabelsVisibilityChanged), self, [=](bool visible) {
		bool sigval1 = visible;
		miqt_exec_callback_QAreaSeries_pointLabelsVisibilityChanged(slot, sigval1);
	});
}

void QAreaSeries_pointLabelsFontChanged(QAreaSeries* self, QFont* font) {
	self->pointLabelsFontChanged(*font);
}

void QAreaSeries_connect_pointLabelsFontChanged(QAreaSeries* self, intptr_t slot) {
	QAreaSeries::connect(self, static_cast<void (QAreaSeries::*)(const QFont&)>(&QAreaSeries::pointLabelsFontChanged), self, [=](const QFont& font) {
		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		miqt_exec_callback_QAreaSeries_pointLabelsFontChanged(slot, sigval1);
	});
}

void QAreaSeries_pointLabelsColorChanged(QAreaSeries* self, QColor* color) {
	self->pointLabelsColorChanged(*color);
}

void QAreaSeries_connect_pointLabelsColorChanged(QAreaSeries* self, intptr_t slot) {
	QAreaSeries::connect(self, static_cast<void (QAreaSeries::*)(const QColor&)>(&QAreaSeries::pointLabelsColorChanged), self, [=](const QColor& color) {
		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QAreaSeries_pointLabelsColorChanged(slot, sigval1);
	});
}

void QAreaSeries_pointLabelsClippingChanged(QAreaSeries* self, bool clipping) {
	self->pointLabelsClippingChanged(clipping);
}

void QAreaSeries_connect_pointLabelsClippingChanged(QAreaSeries* self, intptr_t slot) {
	QAreaSeries::connect(self, static_cast<void (QAreaSeries::*)(bool)>(&QAreaSeries::pointLabelsClippingChanged), self, [=](bool clipping) {
		bool sigval1 = clipping;
		miqt_exec_callback_QAreaSeries_pointLabelsClippingChanged(slot, sigval1);
	});
}

struct miqt_string QAreaSeries_tr2(const char* s, const char* c) {
	QString _ret = QAreaSeries::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAreaSeries_tr3(const char* s, const char* c, int n) {
	QString _ret = QAreaSeries::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAreaSeries_setPointsVisibleWithVisible(QAreaSeries* self, bool visible) {
	self->setPointsVisible(visible);
}

void QAreaSeries_setPointLabelsVisibleWithVisible(QAreaSeries* self, bool visible) {
	self->setPointLabelsVisible(visible);
}

void QAreaSeries_setPointLabelsClippingWithEnabled(QAreaSeries* self, bool enabled) {
	self->setPointLabelsClipping(enabled);
}

bool QAreaSeries_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQAreaSeries* self_cast = dynamic_cast<MiqtVirtualQAreaSeries*>( (QAreaSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = slot;
	return true;
}

int QAreaSeries_virtualbase_type(const void* self) {
	MiqtVirtualQAreaSeries::SeriesType _ret = static_cast<const MiqtVirtualQAreaSeries*>(self)->QAreaSeries::type();
	return static_cast<int>(_ret);
}

bool QAreaSeries_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQAreaSeries* self_cast = dynamic_cast<MiqtVirtualQAreaSeries*>( (QAreaSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QAreaSeries_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQAreaSeries*>(self)->QAreaSeries::event(event);
}

bool QAreaSeries_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAreaSeries* self_cast = dynamic_cast<MiqtVirtualQAreaSeries*>( (QAreaSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAreaSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQAreaSeries*>(self)->QAreaSeries::eventFilter(watched, event);
}

bool QAreaSeries_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAreaSeries* self_cast = dynamic_cast<MiqtVirtualQAreaSeries*>( (QAreaSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QAreaSeries_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQAreaSeries*>(self)->QAreaSeries::timerEvent(event);
}

bool QAreaSeries_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQAreaSeries* self_cast = dynamic_cast<MiqtVirtualQAreaSeries*>( (QAreaSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QAreaSeries_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQAreaSeries*>(self)->QAreaSeries::childEvent(event);
}

bool QAreaSeries_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQAreaSeries* self_cast = dynamic_cast<MiqtVirtualQAreaSeries*>( (QAreaSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QAreaSeries_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQAreaSeries*>(self)->QAreaSeries::customEvent(event);
}

bool QAreaSeries_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAreaSeries* self_cast = dynamic_cast<MiqtVirtualQAreaSeries*>( (QAreaSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QAreaSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAreaSeries*>(self)->QAreaSeries::connectNotify(*signal);
}

bool QAreaSeries_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAreaSeries* self_cast = dynamic_cast<MiqtVirtualQAreaSeries*>( (QAreaSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAreaSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAreaSeries*>(self)->QAreaSeries::disconnectNotify(*signal);
}

QObject* QAreaSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAreaSeries* self_cast = dynamic_cast<MiqtVirtualQAreaSeries*>( (QAreaSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QAreaSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAreaSeries* self_cast = dynamic_cast<MiqtVirtualQAreaSeries*>( (QAreaSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QAreaSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAreaSeries* self_cast = dynamic_cast<MiqtVirtualQAreaSeries*>( (QAreaSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QAreaSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAreaSeries* self_cast = dynamic_cast<MiqtVirtualQAreaSeries*>( (QAreaSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QAreaSeries_delete(QAreaSeries* self) {
	delete self;
}

