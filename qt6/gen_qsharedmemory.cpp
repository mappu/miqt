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

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QSharedMemory_event(QSharedMemory*, intptr_t, QEvent*);
bool miqt_exec_callback_QSharedMemory_eventFilter(QSharedMemory*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSharedMemory_timerEvent(QSharedMemory*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSharedMemory_childEvent(QSharedMemory*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSharedMemory_customEvent(QSharedMemory*, intptr_t, QEvent*);
void miqt_exec_callback_QSharedMemory_connectNotify(QSharedMemory*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSharedMemory_disconnectNotify(QSharedMemory*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSharedMemory final : public QSharedMemory {
public:

	MiqtVirtualQSharedMemory(): QSharedMemory() {};
	MiqtVirtualQSharedMemory(const QString& key): QSharedMemory(key) {};
	MiqtVirtualQSharedMemory(QObject* parent): QSharedMemory(parent) {};
	MiqtVirtualQSharedMemory(const QString& key, QObject* parent): QSharedMemory(key, parent) {};

	virtual ~MiqtVirtualQSharedMemory() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSharedMemory::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSharedMemory_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QSharedMemory::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSharedMemory::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSharedMemory_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QSharedMemory::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSharedMemory::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSharedMemory_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QSharedMemory::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSharedMemory::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSharedMemory_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QSharedMemory::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSharedMemory::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSharedMemory_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QSharedMemory::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSharedMemory::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSharedMemory_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QSharedMemory::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSharedMemory::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSharedMemory_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QSharedMemory::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QSharedMemory_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSharedMemory_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSharedMemory_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSharedMemory_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QSharedMemory_metaObject(const QSharedMemory* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSharedMemory_metacast(QSharedMemory* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSharedMemory_tr(const char* s) {
	QString _ret = QSharedMemory::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSharedMemory_setKey(QSharedMemory* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setKey(key_QString);
}

struct miqt_string QSharedMemory_key(const QSharedMemory* self) {
	QString _ret = self->key();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSharedMemory_setNativeKey(QSharedMemory* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->setNativeKey(key_QString);
}

struct miqt_string QSharedMemory_nativeKey(const QSharedMemory* self) {
	QString _ret = self->nativeKey();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSharedMemory_create(QSharedMemory* self, ptrdiff_t size) {
	return self->create((qsizetype)(size));
}

ptrdiff_t QSharedMemory_size(const QSharedMemory* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

bool QSharedMemory_attach(QSharedMemory* self) {
	return self->attach();
}

bool QSharedMemory_isAttached(const QSharedMemory* self) {
	return self->isAttached();
}

bool QSharedMemory_detach(QSharedMemory* self) {
	return self->detach();
}

void* QSharedMemory_data(QSharedMemory* self) {
	return self->data();
}

const void* QSharedMemory_constData(const QSharedMemory* self) {
	return (const void*) self->constData();
}

const void* QSharedMemory_data2(const QSharedMemory* self) {
	return (const void*) self->data();
}

bool QSharedMemory_lock(QSharedMemory* self) {
	return self->lock();
}

bool QSharedMemory_unlock(QSharedMemory* self) {
	return self->unlock();
}

int QSharedMemory_error(const QSharedMemory* self) {
	QSharedMemory::SharedMemoryError _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QSharedMemory_errorString(const QSharedMemory* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSharedMemory_tr2(const char* s, const char* c) {
	QString _ret = QSharedMemory::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSharedMemory_tr3(const char* s, const char* c, int n) {
	QString _ret = QSharedMemory::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSharedMemory_create2(QSharedMemory* self, ptrdiff_t size, int mode) {
	return self->create((qsizetype)(size), static_cast<QSharedMemory::AccessMode>(mode));
}

bool QSharedMemory_attach1(QSharedMemory* self, int mode) {
	return self->attach(static_cast<QSharedMemory::AccessMode>(mode));
}

bool QSharedMemory_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSharedMemory* self_cast = dynamic_cast<MiqtVirtualQSharedMemory*>( (QSharedMemory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QSharedMemory_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSharedMemory*)(self) )->virtualbase_event(event);
}

bool QSharedMemory_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSharedMemory* self_cast = dynamic_cast<MiqtVirtualQSharedMemory*>( (QSharedMemory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSharedMemory_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSharedMemory*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QSharedMemory_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSharedMemory* self_cast = dynamic_cast<MiqtVirtualQSharedMemory*>( (QSharedMemory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QSharedMemory_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSharedMemory*)(self) )->virtualbase_timerEvent(event);
}

bool QSharedMemory_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSharedMemory* self_cast = dynamic_cast<MiqtVirtualQSharedMemory*>( (QSharedMemory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QSharedMemory_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSharedMemory*)(self) )->virtualbase_childEvent(event);
}

bool QSharedMemory_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSharedMemory* self_cast = dynamic_cast<MiqtVirtualQSharedMemory*>( (QSharedMemory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QSharedMemory_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSharedMemory*)(self) )->virtualbase_customEvent(event);
}

bool QSharedMemory_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSharedMemory* self_cast = dynamic_cast<MiqtVirtualQSharedMemory*>( (QSharedMemory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QSharedMemory_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSharedMemory*)(self) )->virtualbase_connectNotify(signal);
}

bool QSharedMemory_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSharedMemory* self_cast = dynamic_cast<MiqtVirtualQSharedMemory*>( (QSharedMemory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSharedMemory_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSharedMemory*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QSharedMemory_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSharedMemory* self_cast = dynamic_cast<MiqtVirtualQSharedMemory*>( (QSharedMemory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QSharedMemory_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSharedMemory* self_cast = dynamic_cast<MiqtVirtualQSharedMemory*>( (QSharedMemory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QSharedMemory_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSharedMemory* self_cast = dynamic_cast<MiqtVirtualQSharedMemory*>( (QSharedMemory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QSharedMemory_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSharedMemory* self_cast = dynamic_cast<MiqtVirtualQSharedMemory*>( (QSharedMemory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QSharedMemory_delete(QSharedMemory* self) {
	delete self;
}

