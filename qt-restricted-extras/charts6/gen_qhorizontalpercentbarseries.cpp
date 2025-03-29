#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QChildEvent>
#include <QEvent>
#include <QHorizontalPercentBarSeries>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qhorizontalpercentbarseries.h>
#include "gen_qhorizontalpercentbarseries.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QHorizontalPercentBarSeries_type(const QHorizontalPercentBarSeries*, intptr_t);
bool miqt_exec_callback_QHorizontalPercentBarSeries_event(QHorizontalPercentBarSeries*, intptr_t, QEvent*);
bool miqt_exec_callback_QHorizontalPercentBarSeries_eventFilter(QHorizontalPercentBarSeries*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QHorizontalPercentBarSeries_timerEvent(QHorizontalPercentBarSeries*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QHorizontalPercentBarSeries_childEvent(QHorizontalPercentBarSeries*, intptr_t, QChildEvent*);
void miqt_exec_callback_QHorizontalPercentBarSeries_customEvent(QHorizontalPercentBarSeries*, intptr_t, QEvent*);
void miqt_exec_callback_QHorizontalPercentBarSeries_connectNotify(QHorizontalPercentBarSeries*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QHorizontalPercentBarSeries_disconnectNotify(QHorizontalPercentBarSeries*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQHorizontalPercentBarSeries final : public QHorizontalPercentBarSeries {
public:

	MiqtVirtualQHorizontalPercentBarSeries(): QHorizontalPercentBarSeries() {};
	MiqtVirtualQHorizontalPercentBarSeries(QObject* parent): QHorizontalPercentBarSeries(parent) {};

	virtual ~MiqtVirtualQHorizontalPercentBarSeries() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSeries::SeriesType type() const override {
		if (handle__type == 0) {
			return QHorizontalPercentBarSeries::type();
		}
		

		int callback_return_value = miqt_exec_callback_QHorizontalPercentBarSeries_type(this, handle__type);

		return static_cast<QAbstractSeries::SeriesType>(callback_return_value);
	}

	friend int QHorizontalPercentBarSeries_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QHorizontalPercentBarSeries::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QHorizontalPercentBarSeries_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QHorizontalPercentBarSeries_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QHorizontalPercentBarSeries::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QHorizontalPercentBarSeries_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QHorizontalPercentBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QHorizontalPercentBarSeries::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QHorizontalPercentBarSeries_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QHorizontalPercentBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QHorizontalPercentBarSeries::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QHorizontalPercentBarSeries_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QHorizontalPercentBarSeries_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QHorizontalPercentBarSeries::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QHorizontalPercentBarSeries_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QHorizontalPercentBarSeries_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QHorizontalPercentBarSeries::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QHorizontalPercentBarSeries_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QHorizontalPercentBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QHorizontalPercentBarSeries::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QHorizontalPercentBarSeries_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QHorizontalPercentBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QHorizontalPercentBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QHorizontalPercentBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QHorizontalPercentBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QHorizontalPercentBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QHorizontalPercentBarSeries* QHorizontalPercentBarSeries_new() {
	return new MiqtVirtualQHorizontalPercentBarSeries();
}

QHorizontalPercentBarSeries* QHorizontalPercentBarSeries_new2(QObject* parent) {
	return new MiqtVirtualQHorizontalPercentBarSeries(parent);
}

void QHorizontalPercentBarSeries_virtbase(QHorizontalPercentBarSeries* src, QAbstractBarSeries** outptr_QAbstractBarSeries) {
	*outptr_QAbstractBarSeries = static_cast<QAbstractBarSeries*>(src);
}

QMetaObject* QHorizontalPercentBarSeries_metaObject(const QHorizontalPercentBarSeries* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHorizontalPercentBarSeries_metacast(QHorizontalPercentBarSeries* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHorizontalPercentBarSeries_tr(const char* s) {
	QString _ret = QHorizontalPercentBarSeries::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QHorizontalPercentBarSeries_type(const QHorizontalPercentBarSeries* self) {
	QAbstractSeries::SeriesType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QHorizontalPercentBarSeries_tr2(const char* s, const char* c) {
	QString _ret = QHorizontalPercentBarSeries::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHorizontalPercentBarSeries_tr3(const char* s, const char* c, int n) {
	QString _ret = QHorizontalPercentBarSeries::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QHorizontalPercentBarSeries_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QHorizontalPercentBarSeries_virtualbase_type(const void* self) {

	MiqtVirtualQHorizontalPercentBarSeries::SeriesType _ret = ( (const MiqtVirtualQHorizontalPercentBarSeries*)(self) )->QHorizontalPercentBarSeries::type();
	return static_cast<int>(_ret);

}

bool QHorizontalPercentBarSeries_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QHorizontalPercentBarSeries_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQHorizontalPercentBarSeries*)(self) )->QHorizontalPercentBarSeries::event(event);

}

bool QHorizontalPercentBarSeries_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QHorizontalPercentBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQHorizontalPercentBarSeries*)(self) )->QHorizontalPercentBarSeries::eventFilter(watched, event);

}

bool QHorizontalPercentBarSeries_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QHorizontalPercentBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQHorizontalPercentBarSeries*)(self) )->QHorizontalPercentBarSeries::timerEvent(event);

}

bool QHorizontalPercentBarSeries_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QHorizontalPercentBarSeries_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQHorizontalPercentBarSeries*)(self) )->QHorizontalPercentBarSeries::childEvent(event);

}

bool QHorizontalPercentBarSeries_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QHorizontalPercentBarSeries_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQHorizontalPercentBarSeries*)(self) )->QHorizontalPercentBarSeries::customEvent(event);

}

bool QHorizontalPercentBarSeries_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QHorizontalPercentBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQHorizontalPercentBarSeries*)(self) )->QHorizontalPercentBarSeries::connectNotify(*signal);

}

bool QHorizontalPercentBarSeries_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QHorizontalPercentBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQHorizontalPercentBarSeries*)(self) )->QHorizontalPercentBarSeries::disconnectNotify(*signal);

}

QObject* QHorizontalPercentBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QHorizontalPercentBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QHorizontalPercentBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QHorizontalPercentBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QHorizontalPercentBarSeries_delete(QHorizontalPercentBarSeries* self) {
	delete self;
}

