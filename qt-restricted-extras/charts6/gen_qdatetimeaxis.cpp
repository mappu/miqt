#include <QAbstractAxis>
#include <QChildEvent>
#include <QDateTime>
#include <QDateTimeAxis>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qdatetimeaxis.h>
#include "gen_qdatetimeaxis.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QDateTimeAxis_minChanged(intptr_t, QDateTime*);
void miqt_exec_callback_QDateTimeAxis_maxChanged(intptr_t, QDateTime*);
void miqt_exec_callback_QDateTimeAxis_rangeChanged(intptr_t, QDateTime*, QDateTime*);
void miqt_exec_callback_QDateTimeAxis_formatChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QDateTimeAxis_tickCountChanged(intptr_t, int);
int miqt_exec_callback_QDateTimeAxis_type(const QDateTimeAxis*, intptr_t);
bool miqt_exec_callback_QDateTimeAxis_event(QDateTimeAxis*, intptr_t, QEvent*);
bool miqt_exec_callback_QDateTimeAxis_eventFilter(QDateTimeAxis*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDateTimeAxis_timerEvent(QDateTimeAxis*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDateTimeAxis_childEvent(QDateTimeAxis*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDateTimeAxis_customEvent(QDateTimeAxis*, intptr_t, QEvent*);
void miqt_exec_callback_QDateTimeAxis_connectNotify(QDateTimeAxis*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDateTimeAxis_disconnectNotify(QDateTimeAxis*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDateTimeAxis final : public QDateTimeAxis {
public:

	MiqtVirtualQDateTimeAxis(): QDateTimeAxis() {};
	MiqtVirtualQDateTimeAxis(QObject* parent): QDateTimeAxis(parent) {};

	virtual ~MiqtVirtualQDateTimeAxis() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__type = 0;

	// Subclass to allow providing a Go implementation
	virtual QAbstractAxis::AxisType type() const override {
		if (handle__type == 0) {
			return QDateTimeAxis::type();
		}
		

		int callback_return_value = miqt_exec_callback_QDateTimeAxis_type(this, handle__type);

		return static_cast<QAbstractAxis::AxisType>(callback_return_value);
	}

	friend int QDateTimeAxis_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QDateTimeAxis::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QDateTimeAxis_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QDateTimeAxis_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QDateTimeAxis::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QDateTimeAxis_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QDateTimeAxis_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QDateTimeAxis::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeAxis_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QDateTimeAxis_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QDateTimeAxis::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeAxis_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QDateTimeAxis_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QDateTimeAxis::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QDateTimeAxis_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QDateTimeAxis_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QDateTimeAxis::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDateTimeAxis_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QDateTimeAxis_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QDateTimeAxis::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QDateTimeAxis_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QDateTimeAxis_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QDateTimeAxis_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDateTimeAxis_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDateTimeAxis_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDateTimeAxis_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDateTimeAxis* QDateTimeAxis_new() {
	return new MiqtVirtualQDateTimeAxis();
}

QDateTimeAxis* QDateTimeAxis_new2(QObject* parent) {
	return new MiqtVirtualQDateTimeAxis(parent);
}

void QDateTimeAxis_virtbase(QDateTimeAxis* src, QAbstractAxis** outptr_QAbstractAxis) {
	*outptr_QAbstractAxis = static_cast<QAbstractAxis*>(src);
}

QMetaObject* QDateTimeAxis_metaObject(const QDateTimeAxis* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDateTimeAxis_metacast(QDateTimeAxis* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDateTimeAxis_tr(const char* s) {
	QString _ret = QDateTimeAxis::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QDateTimeAxis_type(const QDateTimeAxis* self) {
	QAbstractAxis::AxisType _ret = self->type();
	return static_cast<int>(_ret);
}

void QDateTimeAxis_setMin(QDateTimeAxis* self, QDateTime* min) {
	self->setMin(*min);
}

QDateTime* QDateTimeAxis_min(const QDateTimeAxis* self) {
	return new QDateTime(self->min());
}

void QDateTimeAxis_setMax(QDateTimeAxis* self, QDateTime* max) {
	self->setMax(*max);
}

QDateTime* QDateTimeAxis_max(const QDateTimeAxis* self) {
	return new QDateTime(self->max());
}

void QDateTimeAxis_setRange(QDateTimeAxis* self, QDateTime* min, QDateTime* max) {
	self->setRange(*min, *max);
}

void QDateTimeAxis_setFormat(QDateTimeAxis* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	self->setFormat(format_QString);
}

struct miqt_string QDateTimeAxis_format(const QDateTimeAxis* self) {
	QString _ret = self->format();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDateTimeAxis_setTickCount(QDateTimeAxis* self, int count) {
	self->setTickCount(static_cast<int>(count));
}

int QDateTimeAxis_tickCount(const QDateTimeAxis* self) {
	return self->tickCount();
}

void QDateTimeAxis_minChanged(QDateTimeAxis* self, QDateTime* min) {
	self->minChanged(*min);
}

void QDateTimeAxis_connect_minChanged(QDateTimeAxis* self, intptr_t slot) {
	MiqtVirtualQDateTimeAxis::connect(self, static_cast<void (QDateTimeAxis::*)(QDateTime)>(&QDateTimeAxis::minChanged), self, [=](QDateTime min) {
		QDateTime* sigval1 = new QDateTime(min);
		miqt_exec_callback_QDateTimeAxis_minChanged(slot, sigval1);
	});
}

void QDateTimeAxis_maxChanged(QDateTimeAxis* self, QDateTime* max) {
	self->maxChanged(*max);
}

void QDateTimeAxis_connect_maxChanged(QDateTimeAxis* self, intptr_t slot) {
	MiqtVirtualQDateTimeAxis::connect(self, static_cast<void (QDateTimeAxis::*)(QDateTime)>(&QDateTimeAxis::maxChanged), self, [=](QDateTime max) {
		QDateTime* sigval1 = new QDateTime(max);
		miqt_exec_callback_QDateTimeAxis_maxChanged(slot, sigval1);
	});
}

void QDateTimeAxis_rangeChanged(QDateTimeAxis* self, QDateTime* min, QDateTime* max) {
	self->rangeChanged(*min, *max);
}

void QDateTimeAxis_connect_rangeChanged(QDateTimeAxis* self, intptr_t slot) {
	MiqtVirtualQDateTimeAxis::connect(self, static_cast<void (QDateTimeAxis::*)(QDateTime, QDateTime)>(&QDateTimeAxis::rangeChanged), self, [=](QDateTime min, QDateTime max) {
		QDateTime* sigval1 = new QDateTime(min);
		QDateTime* sigval2 = new QDateTime(max);
		miqt_exec_callback_QDateTimeAxis_rangeChanged(slot, sigval1, sigval2);
	});
}

void QDateTimeAxis_formatChanged(QDateTimeAxis* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	self->formatChanged(format_QString);
}

void QDateTimeAxis_connect_formatChanged(QDateTimeAxis* self, intptr_t slot) {
	MiqtVirtualQDateTimeAxis::connect(self, static_cast<void (QDateTimeAxis::*)(QString)>(&QDateTimeAxis::formatChanged), self, [=](QString format) {
		QString format_ret = format;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray format_b = format_ret.toUtf8();
		struct miqt_string format_ms;
		format_ms.len = format_b.length();
		format_ms.data = static_cast<char*>(malloc(format_ms.len));
		memcpy(format_ms.data, format_b.data(), format_ms.len);
		struct miqt_string sigval1 = format_ms;
		miqt_exec_callback_QDateTimeAxis_formatChanged(slot, sigval1);
	});
}

void QDateTimeAxis_tickCountChanged(QDateTimeAxis* self, int tick) {
	self->tickCountChanged(static_cast<int>(tick));
}

void QDateTimeAxis_connect_tickCountChanged(QDateTimeAxis* self, intptr_t slot) {
	MiqtVirtualQDateTimeAxis::connect(self, static_cast<void (QDateTimeAxis::*)(int)>(&QDateTimeAxis::tickCountChanged), self, [=](int tick) {
		int sigval1 = tick;
		miqt_exec_callback_QDateTimeAxis_tickCountChanged(slot, sigval1);
	});
}

struct miqt_string QDateTimeAxis_tr2(const char* s, const char* c) {
	QString _ret = QDateTimeAxis::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDateTimeAxis_tr3(const char* s, const char* c, int n) {
	QString _ret = QDateTimeAxis::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDateTimeAxis_override_virtual_type(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeAxis* self_cast = dynamic_cast<MiqtVirtualQDateTimeAxis*>( (QDateTimeAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__type = slot;
	return true;
}

int QDateTimeAxis_virtualbase_type(const void* self) {

	MiqtVirtualQDateTimeAxis::AxisType _ret = ( (const MiqtVirtualQDateTimeAxis*)(self) )->QDateTimeAxis::type();
	return static_cast<int>(_ret);

}

bool QDateTimeAxis_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeAxis* self_cast = dynamic_cast<MiqtVirtualQDateTimeAxis*>( (QDateTimeAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QDateTimeAxis_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQDateTimeAxis*)(self) )->QDateTimeAxis::event(event);

}

bool QDateTimeAxis_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeAxis* self_cast = dynamic_cast<MiqtVirtualQDateTimeAxis*>( (QDateTimeAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QDateTimeAxis_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQDateTimeAxis*)(self) )->QDateTimeAxis::eventFilter(watched, event);

}

bool QDateTimeAxis_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeAxis* self_cast = dynamic_cast<MiqtVirtualQDateTimeAxis*>( (QDateTimeAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QDateTimeAxis_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQDateTimeAxis*)(self) )->QDateTimeAxis::timerEvent(event);

}

bool QDateTimeAxis_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeAxis* self_cast = dynamic_cast<MiqtVirtualQDateTimeAxis*>( (QDateTimeAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QDateTimeAxis_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQDateTimeAxis*)(self) )->QDateTimeAxis::childEvent(event);

}

bool QDateTimeAxis_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeAxis* self_cast = dynamic_cast<MiqtVirtualQDateTimeAxis*>( (QDateTimeAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QDateTimeAxis_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQDateTimeAxis*)(self) )->QDateTimeAxis::customEvent(event);

}

bool QDateTimeAxis_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeAxis* self_cast = dynamic_cast<MiqtVirtualQDateTimeAxis*>( (QDateTimeAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QDateTimeAxis_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQDateTimeAxis*)(self) )->QDateTimeAxis::connectNotify(*signal);

}

bool QDateTimeAxis_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQDateTimeAxis* self_cast = dynamic_cast<MiqtVirtualQDateTimeAxis*>( (QDateTimeAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QDateTimeAxis_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQDateTimeAxis*)(self) )->QDateTimeAxis::disconnectNotify(*signal);

}

QObject* QDateTimeAxis_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDateTimeAxis* self_cast = dynamic_cast<MiqtVirtualQDateTimeAxis*>( (QDateTimeAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QDateTimeAxis_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDateTimeAxis* self_cast = dynamic_cast<MiqtVirtualQDateTimeAxis*>( (QDateTimeAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QDateTimeAxis_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDateTimeAxis* self_cast = dynamic_cast<MiqtVirtualQDateTimeAxis*>( (QDateTimeAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QDateTimeAxis_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDateTimeAxis* self_cast = dynamic_cast<MiqtVirtualQDateTimeAxis*>( (QDateTimeAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QDateTimeAxis_delete(QDateTimeAxis* self) {
	delete self;
}

