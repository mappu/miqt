#include <QBrush>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QPieSeries>
#include <QPieSlice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpieslice.h>
#include "gen_qpieslice.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QPieSlice_clicked(intptr_t);
void miqt_exec_callback_QPieSlice_hovered(intptr_t, bool);
void miqt_exec_callback_QPieSlice_pressed(intptr_t);
void miqt_exec_callback_QPieSlice_released(intptr_t);
void miqt_exec_callback_QPieSlice_doubleClicked(intptr_t);
void miqt_exec_callback_QPieSlice_labelChanged(intptr_t);
void miqt_exec_callback_QPieSlice_valueChanged(intptr_t);
void miqt_exec_callback_QPieSlice_labelVisibleChanged(intptr_t);
void miqt_exec_callback_QPieSlice_penChanged(intptr_t);
void miqt_exec_callback_QPieSlice_brushChanged(intptr_t);
void miqt_exec_callback_QPieSlice_labelBrushChanged(intptr_t);
void miqt_exec_callback_QPieSlice_labelFontChanged(intptr_t);
void miqt_exec_callback_QPieSlice_percentageChanged(intptr_t);
void miqt_exec_callback_QPieSlice_startAngleChanged(intptr_t);
void miqt_exec_callback_QPieSlice_angleSpanChanged(intptr_t);
void miqt_exec_callback_QPieSlice_colorChanged(intptr_t);
void miqt_exec_callback_QPieSlice_borderColorChanged(intptr_t);
void miqt_exec_callback_QPieSlice_borderWidthChanged(intptr_t);
void miqt_exec_callback_QPieSlice_labelColorChanged(intptr_t);
bool miqt_exec_callback_QPieSlice_event(QPieSlice*, intptr_t, QEvent*);
bool miqt_exec_callback_QPieSlice_eventFilter(QPieSlice*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPieSlice_timerEvent(QPieSlice*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPieSlice_childEvent(QPieSlice*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPieSlice_customEvent(QPieSlice*, intptr_t, QEvent*);
void miqt_exec_callback_QPieSlice_connectNotify(QPieSlice*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPieSlice_disconnectNotify(QPieSlice*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPieSlice final : public QPieSlice {
public:

	MiqtVirtualQPieSlice(): QPieSlice() {};
	MiqtVirtualQPieSlice(QString label, qreal value): QPieSlice(label, value) {};
	MiqtVirtualQPieSlice(QObject* parent): QPieSlice(parent) {};
	MiqtVirtualQPieSlice(QString label, qreal value, QObject* parent): QPieSlice(label, value, parent) {};

	virtual ~MiqtVirtualQPieSlice() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPieSlice::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPieSlice_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QPieSlice_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPieSlice::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPieSlice_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QPieSlice_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPieSlice::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPieSlice_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QPieSlice_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPieSlice::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPieSlice_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QPieSlice_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPieSlice::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPieSlice_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QPieSlice_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPieSlice::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPieSlice_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QPieSlice_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPieSlice::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPieSlice_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QPieSlice_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QPieSlice_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPieSlice_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPieSlice_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPieSlice_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPieSlice* QPieSlice_new() {
	return new MiqtVirtualQPieSlice();
}

QPieSlice* QPieSlice_new2(struct miqt_string label, double value) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return new MiqtVirtualQPieSlice(label_QString, static_cast<qreal>(value));
}

QPieSlice* QPieSlice_new3(QObject* parent) {
	return new MiqtVirtualQPieSlice(parent);
}

QPieSlice* QPieSlice_new4(struct miqt_string label, double value, QObject* parent) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return new MiqtVirtualQPieSlice(label_QString, static_cast<qreal>(value), parent);
}

void QPieSlice_virtbase(QPieSlice* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QPieSlice_metaObject(const QPieSlice* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPieSlice_metacast(QPieSlice* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPieSlice_tr(const char* s) {
	QString _ret = QPieSlice::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPieSlice_setLabel(QPieSlice* self, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->setLabel(label_QString);
}

struct miqt_string QPieSlice_label(const QPieSlice* self) {
	QString _ret = self->label();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPieSlice_setValue(QPieSlice* self, double value) {
	self->setValue(static_cast<qreal>(value));
}

double QPieSlice_value(const QPieSlice* self) {
	qreal _ret = self->value();
	return static_cast<double>(_ret);
}

void QPieSlice_setLabelVisible(QPieSlice* self) {
	self->setLabelVisible();
}

bool QPieSlice_isLabelVisible(const QPieSlice* self) {
	return self->isLabelVisible();
}

int QPieSlice_labelPosition(QPieSlice* self) {
	QPieSlice::LabelPosition _ret = self->labelPosition();
	return static_cast<int>(_ret);
}

void QPieSlice_setLabelPosition(QPieSlice* self, int position) {
	self->setLabelPosition(static_cast<QPieSlice::LabelPosition>(position));
}

void QPieSlice_setExploded(QPieSlice* self) {
	self->setExploded();
}

bool QPieSlice_isExploded(const QPieSlice* self) {
	return self->isExploded();
}

void QPieSlice_setPen(QPieSlice* self, QPen* pen) {
	self->setPen(*pen);
}

QPen* QPieSlice_pen(const QPieSlice* self) {
	return new QPen(self->pen());
}

QColor* QPieSlice_borderColor(QPieSlice* self) {
	return new QColor(self->borderColor());
}

void QPieSlice_setBorderColor(QPieSlice* self, QColor* color) {
	self->setBorderColor(*color);
}

int QPieSlice_borderWidth(QPieSlice* self) {
	return self->borderWidth();
}

void QPieSlice_setBorderWidth(QPieSlice* self, int width) {
	self->setBorderWidth(static_cast<int>(width));
}

void QPieSlice_setBrush(QPieSlice* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QPieSlice_brush(const QPieSlice* self) {
	return new QBrush(self->brush());
}

QColor* QPieSlice_color(QPieSlice* self) {
	return new QColor(self->color());
}

void QPieSlice_setColor(QPieSlice* self, QColor* color) {
	self->setColor(*color);
}

void QPieSlice_setLabelBrush(QPieSlice* self, QBrush* brush) {
	self->setLabelBrush(*brush);
}

QBrush* QPieSlice_labelBrush(const QPieSlice* self) {
	return new QBrush(self->labelBrush());
}

QColor* QPieSlice_labelColor(QPieSlice* self) {
	return new QColor(self->labelColor());
}

void QPieSlice_setLabelColor(QPieSlice* self, QColor* color) {
	self->setLabelColor(*color);
}

void QPieSlice_setLabelFont(QPieSlice* self, QFont* font) {
	self->setLabelFont(*font);
}

QFont* QPieSlice_labelFont(const QPieSlice* self) {
	return new QFont(self->labelFont());
}

void QPieSlice_setLabelArmLengthFactor(QPieSlice* self, double factor) {
	self->setLabelArmLengthFactor(static_cast<qreal>(factor));
}

double QPieSlice_labelArmLengthFactor(const QPieSlice* self) {
	qreal _ret = self->labelArmLengthFactor();
	return static_cast<double>(_ret);
}

void QPieSlice_setExplodeDistanceFactor(QPieSlice* self, double factor) {
	self->setExplodeDistanceFactor(static_cast<qreal>(factor));
}

double QPieSlice_explodeDistanceFactor(const QPieSlice* self) {
	qreal _ret = self->explodeDistanceFactor();
	return static_cast<double>(_ret);
}

double QPieSlice_percentage(const QPieSlice* self) {
	qreal _ret = self->percentage();
	return static_cast<double>(_ret);
}

double QPieSlice_startAngle(const QPieSlice* self) {
	qreal _ret = self->startAngle();
	return static_cast<double>(_ret);
}

double QPieSlice_angleSpan(const QPieSlice* self) {
	qreal _ret = self->angleSpan();
	return static_cast<double>(_ret);
}

QPieSeries* QPieSlice_series(const QPieSlice* self) {
	return self->series();
}

void QPieSlice_clicked(QPieSlice* self) {
	self->clicked();
}

void QPieSlice_connect_clicked(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)()>(&QPieSlice::clicked), self, [=]() {
		miqt_exec_callback_QPieSlice_clicked(slot);
	});
}

void QPieSlice_hovered(QPieSlice* self, bool state) {
	self->hovered(state);
}

void QPieSlice_connect_hovered(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)(bool)>(&QPieSlice::hovered), self, [=](bool state) {
		bool sigval1 = state;
		miqt_exec_callback_QPieSlice_hovered(slot, sigval1);
	});
}

void QPieSlice_pressed(QPieSlice* self) {
	self->pressed();
}

void QPieSlice_connect_pressed(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)()>(&QPieSlice::pressed), self, [=]() {
		miqt_exec_callback_QPieSlice_pressed(slot);
	});
}

void QPieSlice_released(QPieSlice* self) {
	self->released();
}

void QPieSlice_connect_released(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)()>(&QPieSlice::released), self, [=]() {
		miqt_exec_callback_QPieSlice_released(slot);
	});
}

void QPieSlice_doubleClicked(QPieSlice* self) {
	self->doubleClicked();
}

void QPieSlice_connect_doubleClicked(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)()>(&QPieSlice::doubleClicked), self, [=]() {
		miqt_exec_callback_QPieSlice_doubleClicked(slot);
	});
}

void QPieSlice_labelChanged(QPieSlice* self) {
	self->labelChanged();
}

void QPieSlice_connect_labelChanged(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)()>(&QPieSlice::labelChanged), self, [=]() {
		miqt_exec_callback_QPieSlice_labelChanged(slot);
	});
}

void QPieSlice_valueChanged(QPieSlice* self) {
	self->valueChanged();
}

void QPieSlice_connect_valueChanged(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)()>(&QPieSlice::valueChanged), self, [=]() {
		miqt_exec_callback_QPieSlice_valueChanged(slot);
	});
}

void QPieSlice_labelVisibleChanged(QPieSlice* self) {
	self->labelVisibleChanged();
}

void QPieSlice_connect_labelVisibleChanged(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)()>(&QPieSlice::labelVisibleChanged), self, [=]() {
		miqt_exec_callback_QPieSlice_labelVisibleChanged(slot);
	});
}

void QPieSlice_penChanged(QPieSlice* self) {
	self->penChanged();
}

void QPieSlice_connect_penChanged(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)()>(&QPieSlice::penChanged), self, [=]() {
		miqt_exec_callback_QPieSlice_penChanged(slot);
	});
}

void QPieSlice_brushChanged(QPieSlice* self) {
	self->brushChanged();
}

void QPieSlice_connect_brushChanged(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)()>(&QPieSlice::brushChanged), self, [=]() {
		miqt_exec_callback_QPieSlice_brushChanged(slot);
	});
}

void QPieSlice_labelBrushChanged(QPieSlice* self) {
	self->labelBrushChanged();
}

void QPieSlice_connect_labelBrushChanged(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)()>(&QPieSlice::labelBrushChanged), self, [=]() {
		miqt_exec_callback_QPieSlice_labelBrushChanged(slot);
	});
}

void QPieSlice_labelFontChanged(QPieSlice* self) {
	self->labelFontChanged();
}

void QPieSlice_connect_labelFontChanged(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)()>(&QPieSlice::labelFontChanged), self, [=]() {
		miqt_exec_callback_QPieSlice_labelFontChanged(slot);
	});
}

void QPieSlice_percentageChanged(QPieSlice* self) {
	self->percentageChanged();
}

void QPieSlice_connect_percentageChanged(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)()>(&QPieSlice::percentageChanged), self, [=]() {
		miqt_exec_callback_QPieSlice_percentageChanged(slot);
	});
}

void QPieSlice_startAngleChanged(QPieSlice* self) {
	self->startAngleChanged();
}

void QPieSlice_connect_startAngleChanged(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)()>(&QPieSlice::startAngleChanged), self, [=]() {
		miqt_exec_callback_QPieSlice_startAngleChanged(slot);
	});
}

void QPieSlice_angleSpanChanged(QPieSlice* self) {
	self->angleSpanChanged();
}

void QPieSlice_connect_angleSpanChanged(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)()>(&QPieSlice::angleSpanChanged), self, [=]() {
		miqt_exec_callback_QPieSlice_angleSpanChanged(slot);
	});
}

void QPieSlice_colorChanged(QPieSlice* self) {
	self->colorChanged();
}

void QPieSlice_connect_colorChanged(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)()>(&QPieSlice::colorChanged), self, [=]() {
		miqt_exec_callback_QPieSlice_colorChanged(slot);
	});
}

void QPieSlice_borderColorChanged(QPieSlice* self) {
	self->borderColorChanged();
}

void QPieSlice_connect_borderColorChanged(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)()>(&QPieSlice::borderColorChanged), self, [=]() {
		miqt_exec_callback_QPieSlice_borderColorChanged(slot);
	});
}

void QPieSlice_borderWidthChanged(QPieSlice* self) {
	self->borderWidthChanged();
}

void QPieSlice_connect_borderWidthChanged(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)()>(&QPieSlice::borderWidthChanged), self, [=]() {
		miqt_exec_callback_QPieSlice_borderWidthChanged(slot);
	});
}

void QPieSlice_labelColorChanged(QPieSlice* self) {
	self->labelColorChanged();
}

void QPieSlice_connect_labelColorChanged(QPieSlice* self, intptr_t slot) {
	MiqtVirtualQPieSlice::connect(self, static_cast<void (QPieSlice::*)()>(&QPieSlice::labelColorChanged), self, [=]() {
		miqt_exec_callback_QPieSlice_labelColorChanged(slot);
	});
}

struct miqt_string QPieSlice_tr2(const char* s, const char* c) {
	QString _ret = QPieSlice::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPieSlice_tr3(const char* s, const char* c, int n) {
	QString _ret = QPieSlice::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPieSlice_setLabelVisible1(QPieSlice* self, bool visible) {
	self->setLabelVisible(visible);
}

void QPieSlice_setExploded1(QPieSlice* self, bool exploded) {
	self->setExploded(exploded);
}

bool QPieSlice_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPieSlice* self_cast = dynamic_cast<MiqtVirtualQPieSlice*>( (QPieSlice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPieSlice_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQPieSlice*)(self) )->QPieSlice::event(event);

}

bool QPieSlice_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPieSlice* self_cast = dynamic_cast<MiqtVirtualQPieSlice*>( (QPieSlice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPieSlice_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQPieSlice*)(self) )->QPieSlice::eventFilter(watched, event);

}

bool QPieSlice_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPieSlice* self_cast = dynamic_cast<MiqtVirtualQPieSlice*>( (QPieSlice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPieSlice_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQPieSlice*)(self) )->QPieSlice::timerEvent(event);

}

bool QPieSlice_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPieSlice* self_cast = dynamic_cast<MiqtVirtualQPieSlice*>( (QPieSlice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPieSlice_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQPieSlice*)(self) )->QPieSlice::childEvent(event);

}

bool QPieSlice_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPieSlice* self_cast = dynamic_cast<MiqtVirtualQPieSlice*>( (QPieSlice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPieSlice_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQPieSlice*)(self) )->QPieSlice::customEvent(event);

}

bool QPieSlice_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPieSlice* self_cast = dynamic_cast<MiqtVirtualQPieSlice*>( (QPieSlice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPieSlice_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQPieSlice*)(self) )->QPieSlice::connectNotify(*signal);

}

bool QPieSlice_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPieSlice* self_cast = dynamic_cast<MiqtVirtualQPieSlice*>( (QPieSlice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPieSlice_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQPieSlice*)(self) )->QPieSlice::disconnectNotify(*signal);

}

QObject* QPieSlice_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPieSlice* self_cast = dynamic_cast<MiqtVirtualQPieSlice*>( (QPieSlice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPieSlice_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPieSlice* self_cast = dynamic_cast<MiqtVirtualQPieSlice*>( (QPieSlice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPieSlice_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPieSlice* self_cast = dynamic_cast<MiqtVirtualQPieSlice*>( (QPieSlice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPieSlice_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPieSlice* self_cast = dynamic_cast<MiqtVirtualQPieSlice*>( (QPieSlice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPieSlice_delete(QPieSlice* self) {
	delete self;
}

