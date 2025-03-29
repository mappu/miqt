#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPercentBarSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpercentbarseries.h>
#include "gen_qpercentbarseries.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QPercentBarSeries_type(const QPercentBarSeries*, intptr_t);
bool miqt_exec_callback_QPercentBarSeries_event(QPercentBarSeries*, intptr_t, QEvent*);
bool miqt_exec_callback_QPercentBarSeries_eventFilter(QPercentBarSeries*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPercentBarSeries_timerEvent(QPercentBarSeries*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPercentBarSeries_childEvent(QPercentBarSeries*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPercentBarSeries_customEvent(QPercentBarSeries*, intptr_t, QEvent*);
void miqt_exec_callback_QPercentBarSeries_connectNotify(QPercentBarSeries*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPercentBarSeries_disconnectNotify(QPercentBarSeries*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPercentBarSeries final : public QPercentBarSeries {
public:

	MiqtVirtualQPercentBarSeries(): QPercentBarSeries() {};
	MiqtVirtualQPercentBarSeries(QObject* parent): QPercentBarSeries(parent) {};

	virtual ~MiqtVirtualQPercentBarSeries() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSeries::SeriesType type() const override {
		if (handle__type == 0) {
			return QPercentBarSeries::type();
		}
		

		int callback_return_value = miqt_exec_callback_QPercentBarSeries_type(this, handle__type);

		return static_cast<QAbstractSeries::SeriesType>(callback_return_value);
	}

	friend int QPercentBarSeries_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPercentBarSeries::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPercentBarSeries_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QPercentBarSeries_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPercentBarSeries::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPercentBarSeries_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QPercentBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPercentBarSeries::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPercentBarSeries_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QPercentBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPercentBarSeries::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPercentBarSeries_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QPercentBarSeries_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPercentBarSeries::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPercentBarSeries_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QPercentBarSeries_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPercentBarSeries::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPercentBarSeries_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QPercentBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPercentBarSeries::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPercentBarSeries_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QPercentBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QPercentBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPercentBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPercentBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPercentBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPercentBarSeries* QPercentBarSeries_new() {
	return new MiqtVirtualQPercentBarSeries();
}

QPercentBarSeries* QPercentBarSeries_new2(QObject* parent) {
	return new MiqtVirtualQPercentBarSeries(parent);
}

void QPercentBarSeries_virtbase(QPercentBarSeries* src, QAbstractBarSeries** outptr_QAbstractBarSeries) {
	*outptr_QAbstractBarSeries = static_cast<QAbstractBarSeries*>(src);
}

QMetaObject* QPercentBarSeries_metaObject(const QPercentBarSeries* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPercentBarSeries_metacast(QPercentBarSeries* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPercentBarSeries_tr(const char* s) {
	QString _ret = QPercentBarSeries::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPercentBarSeries_type(const QPercentBarSeries* self) {
	QAbstractSeries::SeriesType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QPercentBarSeries_tr2(const char* s, const char* c) {
	QString _ret = QPercentBarSeries::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPercentBarSeries_tr3(const char* s, const char* c, int n) {
	QString _ret = QPercentBarSeries::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPercentBarSeries_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQPercentBarSeries*>( (QPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QPercentBarSeries_virtualbase_type(const void* self) {

	MiqtVirtualQPercentBarSeries::SeriesType _ret = ( (const MiqtVirtualQPercentBarSeries*)(self) )->QPercentBarSeries::type();
	return static_cast<int>(_ret);

}

bool QPercentBarSeries_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQPercentBarSeries*>( (QPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPercentBarSeries_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQPercentBarSeries*)(self) )->QPercentBarSeries::event(event);

}

bool QPercentBarSeries_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQPercentBarSeries*>( (QPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPercentBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQPercentBarSeries*)(self) )->QPercentBarSeries::eventFilter(watched, event);

}

bool QPercentBarSeries_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQPercentBarSeries*>( (QPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPercentBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQPercentBarSeries*)(self) )->QPercentBarSeries::timerEvent(event);

}

bool QPercentBarSeries_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQPercentBarSeries*>( (QPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPercentBarSeries_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQPercentBarSeries*)(self) )->QPercentBarSeries::childEvent(event);

}

bool QPercentBarSeries_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQPercentBarSeries*>( (QPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPercentBarSeries_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQPercentBarSeries*)(self) )->QPercentBarSeries::customEvent(event);

}

bool QPercentBarSeries_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQPercentBarSeries*>( (QPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPercentBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQPercentBarSeries*)(self) )->QPercentBarSeries::connectNotify(*signal);

}

bool QPercentBarSeries_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQPercentBarSeries*>( (QPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPercentBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQPercentBarSeries*)(self) )->QPercentBarSeries::disconnectNotify(*signal);

}

QObject* QPercentBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQPercentBarSeries*>( (QPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPercentBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQPercentBarSeries*>( (QPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPercentBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQPercentBarSeries*>( (QPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPercentBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQPercentBarSeries*>( (QPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPercentBarSeries_delete(QPercentBarSeries* self) {
	delete self;
}

