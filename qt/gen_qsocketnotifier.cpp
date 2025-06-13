#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSocketDescriptor>
#include <QSocketNotifier>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qsocketnotifier.h>
#include "gen_qsocketnotifier.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSocketNotifier_activated(intptr_t, QSocketDescriptor*, int);
bool miqt_exec_callback_QSocketNotifier_event(QSocketNotifier*, intptr_t, QEvent*);
bool miqt_exec_callback_QSocketNotifier_eventFilter(QSocketNotifier*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSocketNotifier_timerEvent(QSocketNotifier*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSocketNotifier_childEvent(QSocketNotifier*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSocketNotifier_customEvent(QSocketNotifier*, intptr_t, QEvent*);
void miqt_exec_callback_QSocketNotifier_connectNotify(QSocketNotifier*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSocketNotifier_disconnectNotify(QSocketNotifier*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSocketNotifier final : public QSocketNotifier {
public:

	MiqtVirtualQSocketNotifier(qintptr socket, QSocketNotifier::Type param2): QSocketNotifier(socket, param2) {}
	MiqtVirtualQSocketNotifier(qintptr socket, QSocketNotifier::Type param2, QObject* parent): QSocketNotifier(socket, param2, parent) {}

	virtual ~MiqtVirtualQSocketNotifier() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QSocketNotifier::event(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QSocketNotifier_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QSocketNotifier_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSocketNotifier::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QSocketNotifier_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSocketNotifier_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSocketNotifier::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QSocketNotifier_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QSocketNotifier_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSocketNotifier::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QSocketNotifier_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QSocketNotifier_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSocketNotifier::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSocketNotifier_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QSocketNotifier_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSocketNotifier::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSocketNotifier_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QSocketNotifier_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSocketNotifier::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSocketNotifier_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QSocketNotifier_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QSocketNotifier_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSocketNotifier_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSocketNotifier_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSocketNotifier_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSocketNotifier* QSocketNotifier_new(intptr_t socket, int param2) {
	return new (std::nothrow) MiqtVirtualQSocketNotifier((qintptr)(socket), static_cast<QSocketNotifier::Type>(param2));
}

QSocketNotifier* QSocketNotifier_new2(intptr_t socket, int param2, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQSocketNotifier((qintptr)(socket), static_cast<QSocketNotifier::Type>(param2), parent);
}

void QSocketNotifier_virtbase(QSocketNotifier* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QSocketNotifier_metaObject(const QSocketNotifier* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSocketNotifier_metacast(QSocketNotifier* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSocketNotifier_tr(const char* s) {
	QString _ret = QSocketNotifier::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSocketNotifier_trUtf8(const char* s) {
	QString _ret = QSocketNotifier::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

intptr_t QSocketNotifier_socket(const QSocketNotifier* self) {
	qintptr _ret = self->socket();
	return (intptr_t)(_ret);
}

int QSocketNotifier_type(const QSocketNotifier* self) {
	QSocketNotifier::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QSocketNotifier_isEnabled(const QSocketNotifier* self) {
	return self->isEnabled();
}

void QSocketNotifier_setEnabled(QSocketNotifier* self, bool enabled) {
	self->setEnabled(enabled);
}

struct miqt_string QSocketNotifier_tr2(const char* s, const char* c) {
	QString _ret = QSocketNotifier::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSocketNotifier_tr3(const char* s, const char* c, int n) {
	QString _ret = QSocketNotifier::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSocketNotifier_trUtf82(const char* s, const char* c) {
	QString _ret = QSocketNotifier::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSocketNotifier_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSocketNotifier::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSocketNotifier_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSocketNotifier* self_cast = dynamic_cast<MiqtVirtualQSocketNotifier*>( (QSocketNotifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QSocketNotifier_virtualbase_event(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQSocketNotifier*>(self)->QSocketNotifier::event(param1);
}

bool QSocketNotifier_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSocketNotifier* self_cast = dynamic_cast<MiqtVirtualQSocketNotifier*>( (QSocketNotifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSocketNotifier_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQSocketNotifier*>(self)->QSocketNotifier::eventFilter(watched, event);
}

bool QSocketNotifier_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSocketNotifier* self_cast = dynamic_cast<MiqtVirtualQSocketNotifier*>( (QSocketNotifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QSocketNotifier_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQSocketNotifier*>(self)->QSocketNotifier::timerEvent(event);
}

bool QSocketNotifier_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSocketNotifier* self_cast = dynamic_cast<MiqtVirtualQSocketNotifier*>( (QSocketNotifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QSocketNotifier_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQSocketNotifier*>(self)->QSocketNotifier::childEvent(event);
}

bool QSocketNotifier_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSocketNotifier* self_cast = dynamic_cast<MiqtVirtualQSocketNotifier*>( (QSocketNotifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QSocketNotifier_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSocketNotifier*>(self)->QSocketNotifier::customEvent(event);
}

bool QSocketNotifier_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSocketNotifier* self_cast = dynamic_cast<MiqtVirtualQSocketNotifier*>( (QSocketNotifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QSocketNotifier_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSocketNotifier*>(self)->QSocketNotifier::connectNotify(*signal);
}

bool QSocketNotifier_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSocketNotifier* self_cast = dynamic_cast<MiqtVirtualQSocketNotifier*>( (QSocketNotifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSocketNotifier_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSocketNotifier*>(self)->QSocketNotifier::disconnectNotify(*signal);
}

QObject* QSocketNotifier_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSocketNotifier* self_cast = dynamic_cast<MiqtVirtualQSocketNotifier*>( (QSocketNotifier*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QSocketNotifier_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSocketNotifier* self_cast = dynamic_cast<MiqtVirtualQSocketNotifier*>( (QSocketNotifier*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QSocketNotifier_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSocketNotifier* self_cast = dynamic_cast<MiqtVirtualQSocketNotifier*>( (QSocketNotifier*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QSocketNotifier_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSocketNotifier* self_cast = dynamic_cast<MiqtVirtualQSocketNotifier*>( (QSocketNotifier*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QSocketNotifier_connect_activated(QSocketNotifier* self, intptr_t slot) {
	QSocketNotifier::connect(self, &QSocketNotifier::activated, self, [=](QSocketDescriptor socket, QSocketNotifier::Type activationEvent) {
		QSocketDescriptor* sigval1 = new QSocketDescriptor(socket);
		QSocketNotifier::Type activationEvent_ret = activationEvent;
		int sigval2 = static_cast<int>(activationEvent_ret);
		miqt_exec_callback_QSocketNotifier_activated(slot, sigval1, sigval2);
	});
}

void QSocketNotifier_delete(QSocketNotifier* self) {
	delete self;
}

QSocketDescriptor* QSocketDescriptor_new() {
#if defined(Q_OS_LINUX)
	return new (std::nothrow) QSocketDescriptor();
#else
	return nullptr;
#endif
}

QSocketDescriptor* QSocketDescriptor_new2(QSocketDescriptor* param1) {
	return new (std::nothrow) QSocketDescriptor(*param1);
}

QSocketDescriptor* QSocketDescriptor_new3(int descriptor) {
#if defined(Q_OS_LINUX)
	return new (std::nothrow) QSocketDescriptor(static_cast<QSocketDescriptor::DescriptorType>(descriptor));
#else
	return nullptr;
#endif
}

int QSocketDescriptor_ToInt(const QSocketDescriptor* self) {
#if defined(Q_OS_LINUX)
	QSocketDescriptor::DescriptorType _ret = self->operator int();
	return static_cast<int>(_ret);
#else
	int _ret_unavailable;
	return _ret_unavailable;
#endif
}

bool QSocketDescriptor_isValid(const QSocketDescriptor* self) {
	return self->isValid();
}

void QSocketDescriptor_delete(QSocketDescriptor* self) {
	delete self;
}

