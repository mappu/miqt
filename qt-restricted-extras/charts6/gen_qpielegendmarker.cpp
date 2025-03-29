#include <QChildEvent>
#include <QEvent>
#include <QLegend>
#include <QLegendMarker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPieLegendMarker>
#include <QPieSeries>
#include <QPieSlice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpielegendmarker.h>
#include "gen_qpielegendmarker.h"

#ifdef __cplusplus
extern "C" {
#endif

int miqt_exec_callback_QPieLegendMarker_type(QPieLegendMarker*, intptr_t);
QPieSeries* miqt_exec_callback_QPieLegendMarker_series(QPieLegendMarker*, intptr_t);
bool miqt_exec_callback_QPieLegendMarker_event(QPieLegendMarker*, intptr_t, QEvent*);
bool miqt_exec_callback_QPieLegendMarker_eventFilter(QPieLegendMarker*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPieLegendMarker_timerEvent(QPieLegendMarker*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPieLegendMarker_childEvent(QPieLegendMarker*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPieLegendMarker_customEvent(QPieLegendMarker*, intptr_t, QEvent*);
void miqt_exec_callback_QPieLegendMarker_connectNotify(QPieLegendMarker*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPieLegendMarker_disconnectNotify(QPieLegendMarker*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPieLegendMarker final : public QPieLegendMarker {
public:

	MiqtVirtualQPieLegendMarker(QPieSeries* series, QPieSlice* slice, QLegend* legend): QPieLegendMarker(series, slice, legend) {};
	MiqtVirtualQPieLegendMarker(QPieSeries* series, QPieSlice* slice, QLegend* legend, QObject* parent): QPieLegendMarker(series, slice, legend, parent) {};

	virtual ~MiqtVirtualQPieLegendMarker() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QLegendMarker::LegendMarkerType type() override {
		if (handle__type == 0) {
			return QPieLegendMarker::type();
		}
		

		int callback_return_value = miqt_exec_callback_QPieLegendMarker_type(this, handle__type);

		return static_cast<QLegendMarker::LegendMarkerType>(callback_return_value);
	}

	friend int QPieLegendMarker_virtualbase_type(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__series = 0;

	// Subclass to allow providing a Go implementation
	virtual QPieSeries* series() override {
		if (handle__series == 0) {
			return QPieLegendMarker::series();
		}
		

		QPieSeries* callback_return_value = miqt_exec_callback_QPieLegendMarker_series(this, handle__series);

		return callback_return_value;
	}

	friend QPieSeries* QPieLegendMarker_virtualbase_series(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPieLegendMarker::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPieLegendMarker_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QPieLegendMarker_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPieLegendMarker::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPieLegendMarker_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QPieLegendMarker_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPieLegendMarker::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPieLegendMarker_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QPieLegendMarker_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPieLegendMarker::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPieLegendMarker_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QPieLegendMarker_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPieLegendMarker::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPieLegendMarker_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QPieLegendMarker_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPieLegendMarker::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPieLegendMarker_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QPieLegendMarker_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPieLegendMarker::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPieLegendMarker_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QPieLegendMarker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QPieLegendMarker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPieLegendMarker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPieLegendMarker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPieLegendMarker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPieLegendMarker* QPieLegendMarker_new(QPieSeries* series, QPieSlice* slice, QLegend* legend) {
	return new MiqtVirtualQPieLegendMarker(series, slice, legend);
}

QPieLegendMarker* QPieLegendMarker_new2(QPieSeries* series, QPieSlice* slice, QLegend* legend, QObject* parent) {
	return new MiqtVirtualQPieLegendMarker(series, slice, legend, parent);
}

void QPieLegendMarker_virtbase(QPieLegendMarker* src, QLegendMarker** outptr_QLegendMarker) {
	*outptr_QLegendMarker = static_cast<QLegendMarker*>(src);
}

QMetaObject* QPieLegendMarker_metaObject(const QPieLegendMarker* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPieLegendMarker_metacast(QPieLegendMarker* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPieLegendMarker_tr(const char* s) {
	QString _ret = QPieLegendMarker::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPieLegendMarker_type(QPieLegendMarker* self) {
	QLegendMarker::LegendMarkerType _ret = self->type();
	return static_cast<int>(_ret);
}

QPieSeries* QPieLegendMarker_series(QPieLegendMarker* self) {
	return self->series();
}

QPieSlice* QPieLegendMarker_slice(QPieLegendMarker* self) {
	return self->slice();
}

struct miqt_string QPieLegendMarker_tr2(const char* s, const char* c) {
	QString _ret = QPieLegendMarker::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPieLegendMarker_tr3(const char* s, const char* c, int n) {
	QString _ret = QPieLegendMarker::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPieLegendMarker_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQPieLegendMarker* self_cast = dynamic_cast<MiqtVirtualQPieLegendMarker*>( (QPieLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QPieLegendMarker_virtualbase_type(void* self) {

	MiqtVirtualQPieLegendMarker::LegendMarkerType _ret = ( (MiqtVirtualQPieLegendMarker*)(self) )->QPieLegendMarker::type();
	return static_cast<int>(_ret);

}

bool QPieLegendMarker_override_virtual_series(void* self, intptr_t slot) {
	MiqtVirtualQPieLegendMarker* self_cast = dynamic_cast<MiqtVirtualQPieLegendMarker*>( (QPieLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__series = slot;
	return true;
}

QPieSeries* QPieLegendMarker_virtualbase_series(void* self) {

	return ( (MiqtVirtualQPieLegendMarker*)(self) )->QPieLegendMarker::series();

}

bool QPieLegendMarker_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQPieLegendMarker* self_cast = dynamic_cast<MiqtVirtualQPieLegendMarker*>( (QPieLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPieLegendMarker_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQPieLegendMarker*)(self) )->QPieLegendMarker::event(event);

}

bool QPieLegendMarker_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQPieLegendMarker* self_cast = dynamic_cast<MiqtVirtualQPieLegendMarker*>( (QPieLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPieLegendMarker_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQPieLegendMarker*)(self) )->QPieLegendMarker::eventFilter(watched, event);

}

bool QPieLegendMarker_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQPieLegendMarker* self_cast = dynamic_cast<MiqtVirtualQPieLegendMarker*>( (QPieLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPieLegendMarker_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQPieLegendMarker*)(self) )->QPieLegendMarker::timerEvent(event);

}

bool QPieLegendMarker_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQPieLegendMarker* self_cast = dynamic_cast<MiqtVirtualQPieLegendMarker*>( (QPieLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPieLegendMarker_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQPieLegendMarker*)(self) )->QPieLegendMarker::childEvent(event);

}

bool QPieLegendMarker_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQPieLegendMarker* self_cast = dynamic_cast<MiqtVirtualQPieLegendMarker*>( (QPieLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPieLegendMarker_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQPieLegendMarker*)(self) )->QPieLegendMarker::customEvent(event);

}

bool QPieLegendMarker_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPieLegendMarker* self_cast = dynamic_cast<MiqtVirtualQPieLegendMarker*>( (QPieLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPieLegendMarker_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQPieLegendMarker*)(self) )->QPieLegendMarker::connectNotify(*signal);

}

bool QPieLegendMarker_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQPieLegendMarker* self_cast = dynamic_cast<MiqtVirtualQPieLegendMarker*>( (QPieLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPieLegendMarker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQPieLegendMarker*)(self) )->QPieLegendMarker::disconnectNotify(*signal);

}

QObject* QPieLegendMarker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPieLegendMarker* self_cast = dynamic_cast<MiqtVirtualQPieLegendMarker*>( (QPieLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPieLegendMarker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPieLegendMarker* self_cast = dynamic_cast<MiqtVirtualQPieLegendMarker*>( (QPieLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPieLegendMarker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPieLegendMarker* self_cast = dynamic_cast<MiqtVirtualQPieLegendMarker*>( (QPieLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPieLegendMarker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPieLegendMarker* self_cast = dynamic_cast<MiqtVirtualQPieLegendMarker*>( (QPieLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPieLegendMarker_delete(QPieLegendMarker* self) {
	delete self;
}

