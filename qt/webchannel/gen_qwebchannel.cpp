#include <QChildEvent>
#include <QEvent>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWebChannel>
#include <QWebChannelAbstractTransport>
#include <qwebchannel.h>
#include "gen_qwebchannel.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWebChannel_blockUpdatesChanged(intptr_t, bool);
bool miqt_exec_callback_QWebChannel_event(QWebChannel*, intptr_t, QEvent*);
bool miqt_exec_callback_QWebChannel_eventFilter(QWebChannel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebChannel_timerEvent(QWebChannel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebChannel_childEvent(QWebChannel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebChannel_customEvent(QWebChannel*, intptr_t, QEvent*);
void miqt_exec_callback_QWebChannel_connectNotify(QWebChannel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebChannel_disconnectNotify(QWebChannel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebChannel final : public QWebChannel {
public:

	MiqtVirtualQWebChannel(): QWebChannel() {};
	MiqtVirtualQWebChannel(QObject* parent): QWebChannel(parent) {};

	virtual ~MiqtVirtualQWebChannel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QWebChannel::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QWebChannel_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QWebChannel::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QWebChannel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebChannel_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QWebChannel::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QWebChannel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebChannel_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QWebChannel::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QWebChannel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebChannel_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QWebChannel::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QWebChannel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebChannel_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QWebChannel::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QWebChannel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebChannel_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QWebChannel::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QWebChannel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebChannel_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QWebChannel::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QWebChannel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWebChannel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWebChannel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWebChannel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWebChannel* QWebChannel_new() {
	return new MiqtVirtualQWebChannel();
}

QWebChannel* QWebChannel_new2(QObject* parent) {
	return new MiqtVirtualQWebChannel(parent);
}

void QWebChannel_virtbase(QWebChannel* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebChannel_metaObject(const QWebChannel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebChannel_metacast(QWebChannel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebChannel_tr(const char* s) {
	QString _ret = QWebChannel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebChannel_trUtf8(const char* s) {
	QString _ret = QWebChannel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebChannel_registerObjects(QWebChannel* self, struct miqt_map /* of struct miqt_string to QObject* */  objects) {
	QHash<QString, QObject *> objects_QMap;
	objects_QMap.reserve(objects.len);
	struct miqt_string* objects_karr = static_cast<struct miqt_string*>(objects.keys);
	QObject** objects_varr = static_cast<QObject**>(objects.values);
	for(size_t i = 0; i < objects.len; ++i) {
		QString objects_karr_i_QString = QString::fromUtf8(objects_karr[i].data, objects_karr[i].len);
		objects_QMap[objects_karr_i_QString] = objects_varr[i];
	}
	self->registerObjects(objects_QMap);
}

struct miqt_map /* of struct miqt_string to QObject* */  QWebChannel_registeredObjects(const QWebChannel* self) {
	QHash<QString, QObject *> _ret = self->registeredObjects();
	// Convert QMap<> from C++ memory to manually-managed C memory
	struct miqt_string* _karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	QObject** _varr = static_cast<QObject**>(malloc(sizeof(QObject*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QString _hashkey_ret = _itr->first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _hashkey_b = _hashkey_ret.toUtf8();
		struct miqt_string _hashkey_ms;
		_hashkey_ms.len = _hashkey_b.length();
		_hashkey_ms.data = static_cast<char*>(malloc(_hashkey_ms.len));
		memcpy(_hashkey_ms.data, _hashkey_b.data(), _hashkey_ms.len);
		_karr[_ctr] = _hashkey_ms;
		_varr[_ctr] = _itr->second;
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

void QWebChannel_registerObject(QWebChannel* self, struct miqt_string id, QObject* object) {
	QString id_QString = QString::fromUtf8(id.data, id.len);
	self->registerObject(id_QString, object);
}

void QWebChannel_deregisterObject(QWebChannel* self, QObject* object) {
	self->deregisterObject(object);
}

bool QWebChannel_blockUpdates(const QWebChannel* self) {
	return self->blockUpdates();
}

void QWebChannel_setBlockUpdates(QWebChannel* self, bool block) {
	self->setBlockUpdates(block);
}

void QWebChannel_blockUpdatesChanged(QWebChannel* self, bool block) {
	self->blockUpdatesChanged(block);
}

void QWebChannel_connect_blockUpdatesChanged(QWebChannel* self, intptr_t slot) {
	MiqtVirtualQWebChannel::connect(self, static_cast<void (QWebChannel::*)(bool)>(&QWebChannel::blockUpdatesChanged), self, [=](bool block) {
		bool sigval1 = block;
		miqt_exec_callback_QWebChannel_blockUpdatesChanged(slot, sigval1);
	});
}

void QWebChannel_connectTo(QWebChannel* self, QWebChannelAbstractTransport* transport) {
	self->connectTo(transport);
}

void QWebChannel_disconnectFrom(QWebChannel* self, QWebChannelAbstractTransport* transport) {
	self->disconnectFrom(transport);
}

struct miqt_string QWebChannel_tr2(const char* s, const char* c) {
	QString _ret = QWebChannel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebChannel_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebChannel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebChannel_trUtf82(const char* s, const char* c) {
	QString _ret = QWebChannel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebChannel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebChannel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebChannel_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWebChannel* self_cast = dynamic_cast<MiqtVirtualQWebChannel*>( (QWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QWebChannel_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWebChannel*)(self) )->virtualbase_event(event);
}

bool QWebChannel_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWebChannel* self_cast = dynamic_cast<MiqtVirtualQWebChannel*>( (QWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWebChannel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebChannel*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QWebChannel_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebChannel* self_cast = dynamic_cast<MiqtVirtualQWebChannel*>( (QWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QWebChannel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebChannel*)(self) )->virtualbase_timerEvent(event);
}

bool QWebChannel_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebChannel* self_cast = dynamic_cast<MiqtVirtualQWebChannel*>( (QWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QWebChannel_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebChannel*)(self) )->virtualbase_childEvent(event);
}

bool QWebChannel_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebChannel* self_cast = dynamic_cast<MiqtVirtualQWebChannel*>( (QWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QWebChannel_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebChannel*)(self) )->virtualbase_customEvent(event);
}

bool QWebChannel_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebChannel* self_cast = dynamic_cast<MiqtVirtualQWebChannel*>( (QWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QWebChannel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebChannel*)(self) )->virtualbase_connectNotify(signal);
}

bool QWebChannel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebChannel* self_cast = dynamic_cast<MiqtVirtualQWebChannel*>( (QWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QWebChannel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebChannel*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QWebChannel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebChannel* self_cast = dynamic_cast<MiqtVirtualQWebChannel*>( (QWebChannel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QWebChannel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebChannel* self_cast = dynamic_cast<MiqtVirtualQWebChannel*>( (QWebChannel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QWebChannel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWebChannel* self_cast = dynamic_cast<MiqtVirtualQWebChannel*>( (QWebChannel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QWebChannel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWebChannel* self_cast = dynamic_cast<MiqtVirtualQWebChannel*>( (QWebChannel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QWebChannel_delete(QWebChannel* self) {
	delete self;
}

