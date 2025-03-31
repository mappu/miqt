#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QBarSeries>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qbarseries.h>
#include "gen_qbarseries.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QBarSeries_type(const QBarSeries*, intptr_t);
bool miqt_exec_callback_QBarSeries_event(QBarSeries*, intptr_t, QEvent*);
bool miqt_exec_callback_QBarSeries_eventFilter(QBarSeries*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QBarSeries_timerEvent(QBarSeries*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QBarSeries_childEvent(QBarSeries*, intptr_t, QChildEvent*);
void miqt_exec_callback_QBarSeries_customEvent(QBarSeries*, intptr_t, QEvent*);
void miqt_exec_callback_QBarSeries_connectNotify(QBarSeries*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QBarSeries_disconnectNotify(QBarSeries*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQBarSeries final : public QBarSeries {
public:

	MiqtVirtualQBarSeries(): QBarSeries() {};
	MiqtVirtualQBarSeries(QObject* parent): QBarSeries(parent) {};

	virtual ~MiqtVirtualQBarSeries() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSeries::SeriesType type() const override {
		if (handle__type == 0) {
			return QBarSeries::type();
		}
		

		int callback_return_value = miqt_exec_callback_QBarSeries_type(this, handle__type);

		return static_cast<QAbstractSeries::SeriesType>(callback_return_value);
	}

	friend int QBarSeries_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QBarSeries::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QBarSeries_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QBarSeries_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QBarSeries::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QBarSeries_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QBarSeries::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QBarSeries_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QBarSeries::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QBarSeries_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QBarSeries_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QBarSeries::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QBarSeries_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QBarSeries_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QBarSeries::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QBarSeries_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QBarSeries::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QBarSeries_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QBarSeries* QBarSeries_new() {
	return new MiqtVirtualQBarSeries();
}

QBarSeries* QBarSeries_new2(QObject* parent) {
	return new MiqtVirtualQBarSeries(parent);
}

void QBarSeries_virtbase(QBarSeries* src, QAbstractBarSeries** outptr_QAbstractBarSeries) {
	*outptr_QAbstractBarSeries = static_cast<QAbstractBarSeries*>(src);
}

QMetaObject* QBarSeries_metaObject(const QBarSeries* self) {
	return (QMetaObject*) self->metaObject();
}

void* QBarSeries_metacast(QBarSeries* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QBarSeries_tr(const char* s) {
	QString _ret = QBarSeries::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QBarSeries_type(const QBarSeries* self) {
	QAbstractSeries::SeriesType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QBarSeries_tr2(const char* s, const char* c) {
	QString _ret = QBarSeries::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBarSeries_tr3(const char* s, const char* c, int n) {
	QString _ret = QBarSeries::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QBarSeries_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QBarSeries_virtualbase_type(const void* self) {

	MiqtVirtualQBarSeries::SeriesType _ret = ( (const MiqtVirtualQBarSeries*)(self) )->QBarSeries::type();
	return static_cast<int>(_ret);

}

bool QBarSeries_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QBarSeries_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQBarSeries*)(self) )->QBarSeries::event(event);

}

bool QBarSeries_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQBarSeries*)(self) )->QBarSeries::eventFilter(watched, event);

}

bool QBarSeries_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQBarSeries*)(self) )->QBarSeries::timerEvent(event);

}

bool QBarSeries_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QBarSeries_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQBarSeries*)(self) )->QBarSeries::childEvent(event);

}

bool QBarSeries_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QBarSeries_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQBarSeries*)(self) )->QBarSeries::customEvent(event);

}

bool QBarSeries_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQBarSeries*)(self) )->QBarSeries::connectNotify(*signal);

}

bool QBarSeries_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQBarSeries*)(self) )->QBarSeries::disconnectNotify(*signal);

}

QObject* QBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QBarSeries_delete(QBarSeries* self) {
	delete self;
}

