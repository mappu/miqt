#include <QChildEvent>
#include <QEvent>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlWebChannel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <QWebChannel>
#include <qqmlwebchannel.h>
#include "gen_qqmlwebchannel.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QQmlWebChannel_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QQmlWebChannel_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QQmlWebChannel_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QQmlWebChannel_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QQmlWebChannel_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QQmlWebChannel_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QQmlWebChannel_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQQmlWebChannel final : public QQmlWebChannel {
public:

	MiqtVirtualQQmlWebChannel(): QQmlWebChannel() {};
	MiqtVirtualQQmlWebChannel(QObject* parent): QQmlWebChannel(parent) {};

	virtual ~MiqtVirtualQQmlWebChannel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QQmlWebChannel::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QQmlWebChannel_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QQmlWebChannel::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QQmlWebChannel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QQmlWebChannel_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QQmlWebChannel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QQmlWebChannel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QQmlWebChannel_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QQmlWebChannel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QQmlWebChannel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QQmlWebChannel_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QQmlWebChannel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QQmlWebChannel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QQmlWebChannel_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QQmlWebChannel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QQmlWebChannel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QQmlWebChannel_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QQmlWebChannel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QQmlWebChannel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QQmlWebChannel_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QQmlWebChannel::disconnectNotify(*signal);

	}

};

QQmlWebChannel* QQmlWebChannel_new() {
	return new MiqtVirtualQQmlWebChannel();
}

QQmlWebChannel* QQmlWebChannel_new2(QObject* parent) {
	return new MiqtVirtualQQmlWebChannel(parent);
}

void QQmlWebChannel_virtbase(QQmlWebChannel* src, QWebChannel** outptr_QWebChannel) {
	*outptr_QWebChannel = static_cast<QWebChannel*>(src);
}

QMetaObject* QQmlWebChannel_MetaObject(const QQmlWebChannel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QQmlWebChannel_Metacast(QQmlWebChannel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QQmlWebChannel_Tr(const char* s) {
	QString _ret = QQmlWebChannel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QQmlWebChannel_RegisterObjects(QQmlWebChannel* self, struct miqt_map /* of struct miqt_string to QVariant* */  objects) {
	QVariantMap objects_QMap;
	struct miqt_string* objects_karr = static_cast<struct miqt_string*>(objects.keys);
	QVariant** objects_varr = static_cast<QVariant**>(objects.values);
	for(size_t i = 0; i < objects.len; ++i) {
		QString objects_karr_i_QString = QString::fromUtf8(objects_karr[i].data, objects_karr[i].len);
		objects_QMap[objects_karr_i_QString] = *(objects_varr[i]);
	}
	self->registerObjects(objects_QMap);
}

void QQmlWebChannel_ConnectTo(QQmlWebChannel* self, QObject* transport) {
	self->connectTo(transport);
}

void QQmlWebChannel_DisconnectFrom(QQmlWebChannel* self, QObject* transport) {
	self->disconnectFrom(transport);
}

struct miqt_string QQmlWebChannel_Tr2(const char* s, const char* c) {
	QString _ret = QQmlWebChannel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlWebChannel_Tr3(const char* s, const char* c, int n) {
	QString _ret = QQmlWebChannel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QQmlWebChannel_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQQmlWebChannel* self_cast = dynamic_cast<MiqtVirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QQmlWebChannel_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQQmlWebChannel*)(self) )->virtualbase_Event(event);
}

bool QQmlWebChannel_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQQmlWebChannel* self_cast = dynamic_cast<MiqtVirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QQmlWebChannel_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQQmlWebChannel*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QQmlWebChannel_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlWebChannel* self_cast = dynamic_cast<MiqtVirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QQmlWebChannel_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQQmlWebChannel*)(self) )->virtualbase_TimerEvent(event);
}

bool QQmlWebChannel_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlWebChannel* self_cast = dynamic_cast<MiqtVirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QQmlWebChannel_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQQmlWebChannel*)(self) )->virtualbase_ChildEvent(event);
}

bool QQmlWebChannel_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlWebChannel* self_cast = dynamic_cast<MiqtVirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QQmlWebChannel_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQQmlWebChannel*)(self) )->virtualbase_CustomEvent(event);
}

bool QQmlWebChannel_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQQmlWebChannel* self_cast = dynamic_cast<MiqtVirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QQmlWebChannel_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQQmlWebChannel*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QQmlWebChannel_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQQmlWebChannel* self_cast = dynamic_cast<MiqtVirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QQmlWebChannel_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQQmlWebChannel*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QQmlWebChannel_Delete(QQmlWebChannel* self) {
	delete self;
}

