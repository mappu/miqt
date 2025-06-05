#include <QBrush>
#include <QCandlestickSet>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qcandlestickset.h>
#include "gen_qcandlestickset.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCandlestickSet_clicked(intptr_t);
void miqt_exec_callback_QCandlestickSet_hovered(intptr_t, bool);
void miqt_exec_callback_QCandlestickSet_pressed(intptr_t);
void miqt_exec_callback_QCandlestickSet_released(intptr_t);
void miqt_exec_callback_QCandlestickSet_doubleClicked(intptr_t);
void miqt_exec_callback_QCandlestickSet_timestampChanged(intptr_t);
void miqt_exec_callback_QCandlestickSet_openChanged(intptr_t);
void miqt_exec_callback_QCandlestickSet_highChanged(intptr_t);
void miqt_exec_callback_QCandlestickSet_lowChanged(intptr_t);
void miqt_exec_callback_QCandlestickSet_closeChanged(intptr_t);
void miqt_exec_callback_QCandlestickSet_brushChanged(intptr_t);
void miqt_exec_callback_QCandlestickSet_penChanged(intptr_t);
bool miqt_exec_callback_QCandlestickSet_event(QCandlestickSet*, intptr_t, QEvent*);
bool miqt_exec_callback_QCandlestickSet_eventFilter(QCandlestickSet*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QCandlestickSet_timerEvent(QCandlestickSet*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QCandlestickSet_childEvent(QCandlestickSet*, intptr_t, QChildEvent*);
void miqt_exec_callback_QCandlestickSet_customEvent(QCandlestickSet*, intptr_t, QEvent*);
void miqt_exec_callback_QCandlestickSet_connectNotify(QCandlestickSet*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QCandlestickSet_disconnectNotify(QCandlestickSet*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQCandlestickSet final : public QCandlestickSet {
public:

	MiqtVirtualQCandlestickSet(): QCandlestickSet() {}
	MiqtVirtualQCandlestickSet(qreal open, qreal high, qreal low, qreal close): QCandlestickSet(open, high, low, close) {}
	MiqtVirtualQCandlestickSet(qreal timestamp): QCandlestickSet(timestamp) {}
	MiqtVirtualQCandlestickSet(qreal timestamp, QObject* parent): QCandlestickSet(timestamp, parent) {}
	MiqtVirtualQCandlestickSet(qreal open, qreal high, qreal low, qreal close, qreal timestamp): QCandlestickSet(open, high, low, close, timestamp) {}
	MiqtVirtualQCandlestickSet(qreal open, qreal high, qreal low, qreal close, qreal timestamp, QObject* parent): QCandlestickSet(open, high, low, close, timestamp, parent) {}

	virtual ~MiqtVirtualQCandlestickSet() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QCandlestickSet::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QCandlestickSet_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QCandlestickSet_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QCandlestickSet::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QCandlestickSet_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QCandlestickSet_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QCandlestickSet::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QCandlestickSet_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QCandlestickSet_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QCandlestickSet::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QCandlestickSet_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QCandlestickSet_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QCandlestickSet::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QCandlestickSet_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QCandlestickSet_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QCandlestickSet::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QCandlestickSet_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QCandlestickSet_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QCandlestickSet::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QCandlestickSet_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QCandlestickSet_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QCandlestickSet_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QCandlestickSet_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QCandlestickSet_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QCandlestickSet_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QCandlestickSet* QCandlestickSet_new() {
	return new (std::nothrow) MiqtVirtualQCandlestickSet();
}

QCandlestickSet* QCandlestickSet_new2(double open, double high, double low, double close) {
	return new (std::nothrow) MiqtVirtualQCandlestickSet(static_cast<qreal>(open), static_cast<qreal>(high), static_cast<qreal>(low), static_cast<qreal>(close));
}

QCandlestickSet* QCandlestickSet_new3(double timestamp) {
	return new (std::nothrow) MiqtVirtualQCandlestickSet(static_cast<qreal>(timestamp));
}

QCandlestickSet* QCandlestickSet_new4(double timestamp, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQCandlestickSet(static_cast<qreal>(timestamp), parent);
}

QCandlestickSet* QCandlestickSet_new5(double open, double high, double low, double close, double timestamp) {
	return new (std::nothrow) MiqtVirtualQCandlestickSet(static_cast<qreal>(open), static_cast<qreal>(high), static_cast<qreal>(low), static_cast<qreal>(close), static_cast<qreal>(timestamp));
}

QCandlestickSet* QCandlestickSet_new6(double open, double high, double low, double close, double timestamp, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQCandlestickSet(static_cast<qreal>(open), static_cast<qreal>(high), static_cast<qreal>(low), static_cast<qreal>(close), static_cast<qreal>(timestamp), parent);
}

void QCandlestickSet_virtbase(QCandlestickSet* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QCandlestickSet_metaObject(const QCandlestickSet* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCandlestickSet_metacast(QCandlestickSet* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCandlestickSet_tr(const char* s) {
	QString _ret = QCandlestickSet::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCandlestickSet_setTimestamp(QCandlestickSet* self, double timestamp) {
	self->setTimestamp(static_cast<qreal>(timestamp));
}

double QCandlestickSet_timestamp(const QCandlestickSet* self) {
	qreal _ret = self->timestamp();
	return static_cast<double>(_ret);
}

void QCandlestickSet_setOpen(QCandlestickSet* self, double open) {
	self->setOpen(static_cast<qreal>(open));
}

double QCandlestickSet_open(const QCandlestickSet* self) {
	qreal _ret = self->open();
	return static_cast<double>(_ret);
}

void QCandlestickSet_setHigh(QCandlestickSet* self, double high) {
	self->setHigh(static_cast<qreal>(high));
}

double QCandlestickSet_high(const QCandlestickSet* self) {
	qreal _ret = self->high();
	return static_cast<double>(_ret);
}

void QCandlestickSet_setLow(QCandlestickSet* self, double low) {
	self->setLow(static_cast<qreal>(low));
}

double QCandlestickSet_low(const QCandlestickSet* self) {
	qreal _ret = self->low();
	return static_cast<double>(_ret);
}

void QCandlestickSet_setClose(QCandlestickSet* self, double close) {
	self->setClose(static_cast<qreal>(close));
}

double QCandlestickSet_close(const QCandlestickSet* self) {
	qreal _ret = self->close();
	return static_cast<double>(_ret);
}

void QCandlestickSet_setBrush(QCandlestickSet* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QCandlestickSet_brush(const QCandlestickSet* self) {
	return new QBrush(self->brush());
}

void QCandlestickSet_setPen(QCandlestickSet* self, QPen* pen) {
	self->setPen(*pen);
}

QPen* QCandlestickSet_pen(const QCandlestickSet* self) {
	return new QPen(self->pen());
}

void QCandlestickSet_clicked(QCandlestickSet* self) {
	self->clicked();
}

void QCandlestickSet_connect_clicked(QCandlestickSet* self, intptr_t slot) {
	QCandlestickSet::connect(self, static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::clicked), self, [=]() {
		miqt_exec_callback_QCandlestickSet_clicked(slot);
	});
}

void QCandlestickSet_hovered(QCandlestickSet* self, bool status) {
	self->hovered(status);
}

void QCandlestickSet_connect_hovered(QCandlestickSet* self, intptr_t slot) {
	QCandlestickSet::connect(self, static_cast<void (QCandlestickSet::*)(bool)>(&QCandlestickSet::hovered), self, [=](bool status) {
		bool sigval1 = status;
		miqt_exec_callback_QCandlestickSet_hovered(slot, sigval1);
	});
}

void QCandlestickSet_pressed(QCandlestickSet* self) {
	self->pressed();
}

void QCandlestickSet_connect_pressed(QCandlestickSet* self, intptr_t slot) {
	QCandlestickSet::connect(self, static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::pressed), self, [=]() {
		miqt_exec_callback_QCandlestickSet_pressed(slot);
	});
}

void QCandlestickSet_released(QCandlestickSet* self) {
	self->released();
}

void QCandlestickSet_connect_released(QCandlestickSet* self, intptr_t slot) {
	QCandlestickSet::connect(self, static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::released), self, [=]() {
		miqt_exec_callback_QCandlestickSet_released(slot);
	});
}

void QCandlestickSet_doubleClicked(QCandlestickSet* self) {
	self->doubleClicked();
}

void QCandlestickSet_connect_doubleClicked(QCandlestickSet* self, intptr_t slot) {
	QCandlestickSet::connect(self, static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::doubleClicked), self, [=]() {
		miqt_exec_callback_QCandlestickSet_doubleClicked(slot);
	});
}

void QCandlestickSet_timestampChanged(QCandlestickSet* self) {
	self->timestampChanged();
}

void QCandlestickSet_connect_timestampChanged(QCandlestickSet* self, intptr_t slot) {
	QCandlestickSet::connect(self, static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::timestampChanged), self, [=]() {
		miqt_exec_callback_QCandlestickSet_timestampChanged(slot);
	});
}

void QCandlestickSet_openChanged(QCandlestickSet* self) {
	self->openChanged();
}

void QCandlestickSet_connect_openChanged(QCandlestickSet* self, intptr_t slot) {
	QCandlestickSet::connect(self, static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::openChanged), self, [=]() {
		miqt_exec_callback_QCandlestickSet_openChanged(slot);
	});
}

void QCandlestickSet_highChanged(QCandlestickSet* self) {
	self->highChanged();
}

void QCandlestickSet_connect_highChanged(QCandlestickSet* self, intptr_t slot) {
	QCandlestickSet::connect(self, static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::highChanged), self, [=]() {
		miqt_exec_callback_QCandlestickSet_highChanged(slot);
	});
}

void QCandlestickSet_lowChanged(QCandlestickSet* self) {
	self->lowChanged();
}

void QCandlestickSet_connect_lowChanged(QCandlestickSet* self, intptr_t slot) {
	QCandlestickSet::connect(self, static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::lowChanged), self, [=]() {
		miqt_exec_callback_QCandlestickSet_lowChanged(slot);
	});
}

void QCandlestickSet_closeChanged(QCandlestickSet* self) {
	self->closeChanged();
}

void QCandlestickSet_connect_closeChanged(QCandlestickSet* self, intptr_t slot) {
	QCandlestickSet::connect(self, static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::closeChanged), self, [=]() {
		miqt_exec_callback_QCandlestickSet_closeChanged(slot);
	});
}

void QCandlestickSet_brushChanged(QCandlestickSet* self) {
	self->brushChanged();
}

void QCandlestickSet_connect_brushChanged(QCandlestickSet* self, intptr_t slot) {
	QCandlestickSet::connect(self, static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::brushChanged), self, [=]() {
		miqt_exec_callback_QCandlestickSet_brushChanged(slot);
	});
}

void QCandlestickSet_penChanged(QCandlestickSet* self) {
	self->penChanged();
}

void QCandlestickSet_connect_penChanged(QCandlestickSet* self, intptr_t slot) {
	QCandlestickSet::connect(self, static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::penChanged), self, [=]() {
		miqt_exec_callback_QCandlestickSet_penChanged(slot);
	});
}

struct miqt_string QCandlestickSet_tr2(const char* s, const char* c) {
	QString _ret = QCandlestickSet::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCandlestickSet_tr3(const char* s, const char* c, int n) {
	QString _ret = QCandlestickSet::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCandlestickSet_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickSet* self_cast = dynamic_cast<MiqtVirtualQCandlestickSet*>( (QCandlestickSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QCandlestickSet_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQCandlestickSet*>(self)->QCandlestickSet::event(event);
}

bool QCandlestickSet_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickSet* self_cast = dynamic_cast<MiqtVirtualQCandlestickSet*>( (QCandlestickSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QCandlestickSet_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQCandlestickSet*>(self)->QCandlestickSet::eventFilter(watched, event);
}

bool QCandlestickSet_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickSet* self_cast = dynamic_cast<MiqtVirtualQCandlestickSet*>( (QCandlestickSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QCandlestickSet_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQCandlestickSet*>(self)->QCandlestickSet::timerEvent(event);
}

bool QCandlestickSet_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickSet* self_cast = dynamic_cast<MiqtVirtualQCandlestickSet*>( (QCandlestickSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QCandlestickSet_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQCandlestickSet*>(self)->QCandlestickSet::childEvent(event);
}

bool QCandlestickSet_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickSet* self_cast = dynamic_cast<MiqtVirtualQCandlestickSet*>( (QCandlestickSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QCandlestickSet_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQCandlestickSet*>(self)->QCandlestickSet::customEvent(event);
}

bool QCandlestickSet_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickSet* self_cast = dynamic_cast<MiqtVirtualQCandlestickSet*>( (QCandlestickSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QCandlestickSet_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQCandlestickSet*>(self)->QCandlestickSet::connectNotify(*signal);
}

bool QCandlestickSet_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCandlestickSet* self_cast = dynamic_cast<MiqtVirtualQCandlestickSet*>( (QCandlestickSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QCandlestickSet_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQCandlestickSet*>(self)->QCandlestickSet::disconnectNotify(*signal);
}

QObject* QCandlestickSet_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCandlestickSet* self_cast = dynamic_cast<MiqtVirtualQCandlestickSet*>( (QCandlestickSet*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QCandlestickSet_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCandlestickSet* self_cast = dynamic_cast<MiqtVirtualQCandlestickSet*>( (QCandlestickSet*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QCandlestickSet_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQCandlestickSet* self_cast = dynamic_cast<MiqtVirtualQCandlestickSet*>( (QCandlestickSet*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QCandlestickSet_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQCandlestickSet* self_cast = dynamic_cast<MiqtVirtualQCandlestickSet*>( (QCandlestickSet*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QCandlestickSet_delete(QCandlestickSet* self) {
	delete self;
}

