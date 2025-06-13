#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QStackedBarSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qstackedbarseries.h>
#include "gen_qstackedbarseries.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QStackedBarSeries_type(const QStackedBarSeries*, intptr_t);
bool miqt_exec_callback_QStackedBarSeries_event(QStackedBarSeries*, intptr_t, QEvent*);
bool miqt_exec_callback_QStackedBarSeries_eventFilter(QStackedBarSeries*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QStackedBarSeries_timerEvent(QStackedBarSeries*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QStackedBarSeries_childEvent(QStackedBarSeries*, intptr_t, QChildEvent*);
void miqt_exec_callback_QStackedBarSeries_customEvent(QStackedBarSeries*, intptr_t, QEvent*);
void miqt_exec_callback_QStackedBarSeries_connectNotify(QStackedBarSeries*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QStackedBarSeries_disconnectNotify(QStackedBarSeries*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQStackedBarSeries final : public QStackedBarSeries {
public:

	MiqtVirtualQStackedBarSeries(): QStackedBarSeries() {}
	MiqtVirtualQStackedBarSeries(QObject* parent): QStackedBarSeries(parent) {}

	virtual ~MiqtVirtualQStackedBarSeries() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSeries::SeriesType type() const override {
		if (handle__type == 0) {
			return QStackedBarSeries::type();
		}

		int callback_return_value = miqt_exec_callback_QStackedBarSeries_type(this, handle__type);
		return static_cast<QAbstractSeries::SeriesType>(callback_return_value);
	}

	friend int QStackedBarSeries_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QStackedBarSeries::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QStackedBarSeries_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QStackedBarSeries_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QStackedBarSeries::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QStackedBarSeries_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QStackedBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QStackedBarSeries::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QStackedBarSeries_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QStackedBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QStackedBarSeries::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QStackedBarSeries_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QStackedBarSeries_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QStackedBarSeries::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QStackedBarSeries_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QStackedBarSeries_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QStackedBarSeries::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QStackedBarSeries_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QStackedBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QStackedBarSeries::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QStackedBarSeries_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QStackedBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QStackedBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QStackedBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QStackedBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QStackedBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QStackedBarSeries* QStackedBarSeries_new() {
	return new (std::nothrow) MiqtVirtualQStackedBarSeries();
}

QStackedBarSeries* QStackedBarSeries_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQStackedBarSeries(parent);
}

void QStackedBarSeries_virtbase(QStackedBarSeries* src, QAbstractBarSeries** outptr_QAbstractBarSeries) {
	*outptr_QAbstractBarSeries = static_cast<QAbstractBarSeries*>(src);
}

QMetaObject* QStackedBarSeries_metaObject(const QStackedBarSeries* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStackedBarSeries_metacast(QStackedBarSeries* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStackedBarSeries_tr(const char* s) {
	QString _ret = QStackedBarSeries::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QStackedBarSeries_type(const QStackedBarSeries* self) {
	QAbstractSeries::SeriesType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QStackedBarSeries_tr2(const char* s, const char* c) {
	QString _ret = QStackedBarSeries::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStackedBarSeries_tr3(const char* s, const char* c, int n) {
	QString _ret = QStackedBarSeries::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QStackedBarSeries_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = slot;
	return true;
}

int QStackedBarSeries_virtualbase_type(const void* self) {
	MiqtVirtualQStackedBarSeries::SeriesType _ret = static_cast<const MiqtVirtualQStackedBarSeries*>(self)->QStackedBarSeries::type();
	return static_cast<int>(_ret);
}

bool QStackedBarSeries_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QStackedBarSeries_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQStackedBarSeries*>(self)->QStackedBarSeries::event(event);
}

bool QStackedBarSeries_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QStackedBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQStackedBarSeries*>(self)->QStackedBarSeries::eventFilter(watched, event);
}

bool QStackedBarSeries_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QStackedBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQStackedBarSeries*>(self)->QStackedBarSeries::timerEvent(event);
}

bool QStackedBarSeries_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QStackedBarSeries_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQStackedBarSeries*>(self)->QStackedBarSeries::childEvent(event);
}

bool QStackedBarSeries_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QStackedBarSeries_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQStackedBarSeries*>(self)->QStackedBarSeries::customEvent(event);
}

bool QStackedBarSeries_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QStackedBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQStackedBarSeries*>(self)->QStackedBarSeries::connectNotify(*signal);
}

bool QStackedBarSeries_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QStackedBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQStackedBarSeries*>(self)->QStackedBarSeries::disconnectNotify(*signal);
}

QObject* QStackedBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QStackedBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QStackedBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QStackedBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QStackedBarSeries_delete(QStackedBarSeries* self) {
	delete self;
}

