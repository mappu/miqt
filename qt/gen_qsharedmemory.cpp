#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSharedMemory>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qsharedmemory.h>
#include "gen_qsharedmemory.h"
#include "_cgo_export.h"

class MiqtVirtualQSharedMemory : public virtual QSharedMemory {
public:

	MiqtVirtualQSharedMemory(): QSharedMemory() {};
	MiqtVirtualQSharedMemory(const QString& key): QSharedMemory(key) {};
	MiqtVirtualQSharedMemory(QObject* parent): QSharedMemory(parent) {};
	MiqtVirtualQSharedMemory(const QString& key, QObject* parent): QSharedMemory(key, parent) {};

	virtual ~MiqtVirtualQSharedMemory() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QSharedMemory::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSharedMemory_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QSharedMemory::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSharedMemory::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSharedMemory_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSharedMemory::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QSharedMemory::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSharedMemory_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QSharedMemory::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QSharedMemory::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSharedMemory_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QSharedMemory::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSharedMemory::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSharedMemory_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSharedMemory::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSharedMemory::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSharedMemory_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSharedMemory::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSharedMemory::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSharedMemory_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSharedMemory::disconnectNotify(*signal);

	}

};

QSharedMemory* QSharedMemory_new() {
	return new MiqtVirtualQSharedMemory();
}

QSharedMemory* QSharedMemory_new2(struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new MiqtVirtualQSharedMemory(key_QString);
}

QSharedMemory* QSharedMemory_new3(QObject* parent) {
	return new MiqtVirtualQSharedMemory(parent);
}

QSharedMemory* QSharedMemory_new4(struct miqt_string key, QObject* parent) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return new MiqtVirtualQSharedMemory(key_QString, parent);
}

void QSharedMemory_virtbase(QSharedMemory* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QSharedMemory_MetaObject(const QSharedMemory* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSharedMemory_Metacast(QSharedMemory* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSharedMemory_Tr(const char* s) {
	QString _ret = QSharedMemory::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSharedMemory_TrUtf8(const char* s) {
	QString _ret = QSharedMemory::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSharedMemory_SetKey(QSharedMemory* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setKey(key_QString);
}

struct miqt_string QSharedMemory_Key(const QSharedMemory* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSharedMemory_SetNativeKey(QSharedMemory* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setNativeKey(key_QString);
}

struct miqt_string QSharedMemory_NativeKey(const QSharedMemory* self) {
	QString _ret = self->nativeKey();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSharedMemory_Create(QSharedMemory* self, int size) {
	return self->create(static_cast<int>(size));
}

int QSharedMemory_Size(const QSharedMemory* self) {
	return self->size();
}

bool QSharedMemory_Attach(QSharedMemory* self) {
	return self->attach();
}

bool QSharedMemory_IsAttached(const QSharedMemory* self) {
	return self->isAttached();
}

bool QSharedMemory_Detach(QSharedMemory* self) {
	return self->detach();
}

void* QSharedMemory_Data(QSharedMemory* self) {
	return self->data();
}

const void* QSharedMemory_ConstData(const QSharedMemory* self) {
	return (const void*) self->constData();
}

const void* QSharedMemory_Data2(const QSharedMemory* self) {
	return (const void*) self->data();
}

bool QSharedMemory_Lock(QSharedMemory* self) {
	return self->lock();
}

bool QSharedMemory_Unlock(QSharedMemory* self) {
	return self->unlock();
}

int QSharedMemory_Error(const QSharedMemory* self) {
	QSharedMemory::SharedMemoryError _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QSharedMemory_ErrorString(const QSharedMemory* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSharedMemory_Tr2(const char* s, const char* c) {
	QString _ret = QSharedMemory::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSharedMemory_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSharedMemory::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSharedMemory_TrUtf82(const char* s, const char* c) {
	QString _ret = QSharedMemory::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSharedMemory_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSharedMemory::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSharedMemory_Create2(QSharedMemory* self, int size, int mode) {
	return self->create(static_cast<int>(size), static_cast<QSharedMemory::AccessMode>(mode));
}

bool QSharedMemory_Attach1(QSharedMemory* self, int mode) {
	return self->attach(static_cast<QSharedMemory::AccessMode>(mode));
}

void QSharedMemory_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSharedMemory*>( (QSharedMemory*)(self) )->handle__Event = slot;
}

bool QSharedMemory_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSharedMemory*)(self) )->virtualbase_Event(event);
}

void QSharedMemory_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSharedMemory*>( (QSharedMemory*)(self) )->handle__EventFilter = slot;
}

bool QSharedMemory_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSharedMemory*)(self) )->virtualbase_EventFilter(watched, event);
}

void QSharedMemory_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSharedMemory*>( (QSharedMemory*)(self) )->handle__TimerEvent = slot;
}

void QSharedMemory_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSharedMemory*)(self) )->virtualbase_TimerEvent(event);
}

void QSharedMemory_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSharedMemory*>( (QSharedMemory*)(self) )->handle__ChildEvent = slot;
}

void QSharedMemory_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSharedMemory*)(self) )->virtualbase_ChildEvent(event);
}

void QSharedMemory_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSharedMemory*>( (QSharedMemory*)(self) )->handle__CustomEvent = slot;
}

void QSharedMemory_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSharedMemory*)(self) )->virtualbase_CustomEvent(event);
}

void QSharedMemory_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSharedMemory*>( (QSharedMemory*)(self) )->handle__ConnectNotify = slot;
}

void QSharedMemory_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSharedMemory*)(self) )->virtualbase_ConnectNotify(signal);
}

void QSharedMemory_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSharedMemory*>( (QSharedMemory*)(self) )->handle__DisconnectNotify = slot;
}

void QSharedMemory_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSharedMemory*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSharedMemory_Delete(QSharedMemory* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQSharedMemory*>( self );
	} else {
		delete self;
	}
}

