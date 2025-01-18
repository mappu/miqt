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

bool miqt_exec_callback_QSocketNotifier_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QSocketNotifier_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSocketNotifier_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSocketNotifier_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSocketNotifier_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSocketNotifier_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSocketNotifier_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSocketNotifier final : public QSocketNotifier {
public:

	MiqtVirtualQSocketNotifier(QSocketNotifier::Type param1): QSocketNotifier(param1) {};
	MiqtVirtualQSocketNotifier(qintptr socket, QSocketNotifier::Type param2): QSocketNotifier(socket, param2) {};
	MiqtVirtualQSocketNotifier(QSocketNotifier::Type param1, QObject* parent): QSocketNotifier(param1, parent) {};
	MiqtVirtualQSocketNotifier(qintptr socket, QSocketNotifier::Type param2, QObject* parent): QSocketNotifier(socket, param2, parent) {};

	virtual ~MiqtVirtualQSocketNotifier() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QSocketNotifier::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QSocketNotifier_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QSocketNotifier::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSocketNotifier::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSocketNotifier_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSocketNotifier::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QSocketNotifier::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSocketNotifier_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QSocketNotifier::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QSocketNotifier::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSocketNotifier_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QSocketNotifier::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSocketNotifier::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSocketNotifier_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSocketNotifier::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSocketNotifier::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSocketNotifier_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSocketNotifier::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSocketNotifier::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSocketNotifier_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSocketNotifier::disconnectNotify(*signal);

	}

};

QSocketNotifier* QSocketNotifier_new(int param1) {
	return new MiqtVirtualQSocketNotifier(static_cast<QSocketNotifier::Type>(param1));
}

QSocketNotifier* QSocketNotifier_new2(intptr_t socket, int param2) {
	return new MiqtVirtualQSocketNotifier((qintptr)(socket), static_cast<QSocketNotifier::Type>(param2));
}

QSocketNotifier* QSocketNotifier_new3(int param1, QObject* parent) {
	return new MiqtVirtualQSocketNotifier(static_cast<QSocketNotifier::Type>(param1), parent);
}

QSocketNotifier* QSocketNotifier_new4(intptr_t socket, int param2, QObject* parent) {
	return new MiqtVirtualQSocketNotifier((qintptr)(socket), static_cast<QSocketNotifier::Type>(param2), parent);
}

void QSocketNotifier_virtbase(QSocketNotifier* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QSocketNotifier_MetaObject(const QSocketNotifier* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSocketNotifier_Metacast(QSocketNotifier* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSocketNotifier_Tr(const char* s) {
	QString _ret = QSocketNotifier::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSocketNotifier_SetSocket(QSocketNotifier* self, intptr_t socket) {
	self->setSocket((qintptr)(socket));
}

intptr_t QSocketNotifier_Socket(const QSocketNotifier* self) {
	qintptr _ret = self->socket();
	return (intptr_t)(_ret);
}

int QSocketNotifier_Type(const QSocketNotifier* self) {
	QSocketNotifier::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QSocketNotifier_IsValid(const QSocketNotifier* self) {
	return self->isValid();
}

bool QSocketNotifier_IsEnabled(const QSocketNotifier* self) {
	return self->isEnabled();
}

void QSocketNotifier_SetEnabled(QSocketNotifier* self, bool enabled) {
	self->setEnabled(enabled);
}

struct miqt_string QSocketNotifier_Tr2(const char* s, const char* c) {
	QString _ret = QSocketNotifier::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSocketNotifier_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSocketNotifier::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSocketNotifier_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQSocketNotifier* self_cast = dynamic_cast<MiqtVirtualQSocketNotifier*>( (QSocketNotifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QSocketNotifier_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQSocketNotifier*)(self) )->virtualbase_Event(param1);
}

bool QSocketNotifier_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSocketNotifier* self_cast = dynamic_cast<MiqtVirtualQSocketNotifier*>( (QSocketNotifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QSocketNotifier_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSocketNotifier*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QSocketNotifier_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSocketNotifier* self_cast = dynamic_cast<MiqtVirtualQSocketNotifier*>( (QSocketNotifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QSocketNotifier_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSocketNotifier*)(self) )->virtualbase_TimerEvent(event);
}

bool QSocketNotifier_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQSocketNotifier* self_cast = dynamic_cast<MiqtVirtualQSocketNotifier*>( (QSocketNotifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QSocketNotifier_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSocketNotifier*)(self) )->virtualbase_ChildEvent(event);
}

bool QSocketNotifier_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQSocketNotifier* self_cast = dynamic_cast<MiqtVirtualQSocketNotifier*>( (QSocketNotifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QSocketNotifier_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSocketNotifier*)(self) )->virtualbase_CustomEvent(event);
}

bool QSocketNotifier_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSocketNotifier* self_cast = dynamic_cast<MiqtVirtualQSocketNotifier*>( (QSocketNotifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QSocketNotifier_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSocketNotifier*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QSocketNotifier_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSocketNotifier* self_cast = dynamic_cast<MiqtVirtualQSocketNotifier*>( (QSocketNotifier*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QSocketNotifier_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSocketNotifier*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSocketNotifier_Delete(QSocketNotifier* self) {
	delete self;
}

QSocketDescriptor* QSocketDescriptor_new() {
	return new QSocketDescriptor();
}

QSocketDescriptor* QSocketDescriptor_new2(QSocketDescriptor* param1) {
	return new QSocketDescriptor(*param1);
}

QSocketDescriptor* QSocketDescriptor_new3(int descriptor) {
#ifndef Q_OS_LINUX
	return nullptr;
#else
	return new QSocketDescriptor(static_cast<QSocketDescriptor::DescriptorType>(descriptor));
#endif
}

int QSocketDescriptor_ToInt(const QSocketDescriptor* self) {
#ifdef Q_OS_LINUX
	QSocketDescriptor::DescriptorType _ret = self->operator int();
	return static_cast<int>(_ret);
#else
	int _ret_invalidOS;
	return _ret_invalidOS;
#endif
}

bool QSocketDescriptor_IsValid(const QSocketDescriptor* self) {
	return self->isValid();
}

void QSocketDescriptor_Delete(QSocketDescriptor* self) {
	delete self;
}

