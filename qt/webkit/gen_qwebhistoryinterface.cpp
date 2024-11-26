#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWebHistoryInterface>
#include <qwebhistoryinterface.h>
#include "gen_qwebhistoryinterface.h"
#include "_cgo_export.h"

class MiqtVirtualQWebHistoryInterface : public virtual QWebHistoryInterface {
public:

	MiqtVirtualQWebHistoryInterface(): QWebHistoryInterface() {};
	MiqtVirtualQWebHistoryInterface(QObject* parent): QWebHistoryInterface(parent) {};

	virtual ~MiqtVirtualQWebHistoryInterface() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HistoryContains = 0;

	// Subclass to allow providing a Go implementation
	virtual bool historyContains(const QString& url) const override {
		if (handle__HistoryContains == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		
		const QString url_ret = url;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray url_b = url_ret.toUtf8();
		struct miqt_string url_ms;
		url_ms.len = url_b.length();
		url_ms.data = static_cast<char*>(malloc(url_ms.len));
		memcpy(url_ms.data, url_b.data(), url_ms.len);
		struct miqt_string sigval1 = url_ms;

		bool callback_return_value = miqt_exec_callback_QWebHistoryInterface_HistoryContains(const_cast<MiqtVirtualQWebHistoryInterface*>(this), handle__HistoryContains, sigval1);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__AddHistoryEntry = 0;

	// Subclass to allow providing a Go implementation
	virtual void addHistoryEntry(const QString& url) override {
		if (handle__AddHistoryEntry == 0) {
			return; // Pure virtual, there is no base we can call
		}
		
		const QString url_ret = url;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray url_b = url_ret.toUtf8();
		struct miqt_string url_ms;
		url_ms.len = url_b.length();
		url_ms.data = static_cast<char*>(malloc(url_ms.len));
		memcpy(url_ms.data, url_b.data(), url_ms.len);
		struct miqt_string sigval1 = url_ms;

		miqt_exec_callback_QWebHistoryInterface_AddHistoryEntry(this, handle__AddHistoryEntry, sigval1);

		
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QWebHistoryInterface::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QWebHistoryInterface_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QWebHistoryInterface::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QWebHistoryInterface::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QWebHistoryInterface_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QWebHistoryInterface::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QWebHistoryInterface::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWebHistoryInterface_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QWebHistoryInterface::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QWebHistoryInterface::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWebHistoryInterface_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QWebHistoryInterface::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QWebHistoryInterface::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWebHistoryInterface_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QWebHistoryInterface::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QWebHistoryInterface::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebHistoryInterface_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QWebHistoryInterface::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QWebHistoryInterface::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWebHistoryInterface_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QWebHistoryInterface::disconnectNotify(*signal);

	}

};

void QWebHistoryInterface_new(QWebHistoryInterface** outptr_QWebHistoryInterface, QObject** outptr_QObject) {
	MiqtVirtualQWebHistoryInterface* ret = new MiqtVirtualQWebHistoryInterface();
	*outptr_QWebHistoryInterface = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

void QWebHistoryInterface_new2(QObject* parent, QWebHistoryInterface** outptr_QWebHistoryInterface, QObject** outptr_QObject) {
	MiqtVirtualQWebHistoryInterface* ret = new MiqtVirtualQWebHistoryInterface(parent);
	*outptr_QWebHistoryInterface = ret;
	*outptr_QObject = static_cast<QObject*>(ret);
}

QMetaObject* QWebHistoryInterface_MetaObject(const QWebHistoryInterface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebHistoryInterface_Metacast(QWebHistoryInterface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebHistoryInterface_Tr(const char* s) {
	QString _ret = QWebHistoryInterface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebHistoryInterface_TrUtf8(const char* s) {
	QString _ret = QWebHistoryInterface::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebHistoryInterface_SetDefaultInterface(QWebHistoryInterface* defaultInterface) {
	QWebHistoryInterface::setDefaultInterface(defaultInterface);
}

QWebHistoryInterface* QWebHistoryInterface_DefaultInterface() {
	return QWebHistoryInterface::defaultInterface();
}

bool QWebHistoryInterface_HistoryContains(const QWebHistoryInterface* self, struct miqt_string url) {
	QString url_QString = QString::fromUtf8(url.data, url.len);
	return self->historyContains(url_QString);
}

void QWebHistoryInterface_AddHistoryEntry(QWebHistoryInterface* self, struct miqt_string url) {
	QString url_QString = QString::fromUtf8(url.data, url.len);
	self->addHistoryEntry(url_QString);
}

struct miqt_string QWebHistoryInterface_Tr2(const char* s, const char* c) {
	QString _ret = QWebHistoryInterface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebHistoryInterface_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebHistoryInterface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebHistoryInterface_TrUtf82(const char* s, const char* c) {
	QString _ret = QWebHistoryInterface::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebHistoryInterface_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebHistoryInterface::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebHistoryInterface_override_virtual_HistoryContains(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebHistoryInterface*>( (QWebHistoryInterface*)(self) )->handle__HistoryContains = slot;
}

void QWebHistoryInterface_override_virtual_AddHistoryEntry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebHistoryInterface*>( (QWebHistoryInterface*)(self) )->handle__AddHistoryEntry = slot;
}

void QWebHistoryInterface_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebHistoryInterface*>( (QWebHistoryInterface*)(self) )->handle__Event = slot;
}

bool QWebHistoryInterface_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQWebHistoryInterface*)(self) )->virtualbase_Event(event);
}

void QWebHistoryInterface_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebHistoryInterface*>( (QWebHistoryInterface*)(self) )->handle__EventFilter = slot;
}

bool QWebHistoryInterface_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQWebHistoryInterface*)(self) )->virtualbase_EventFilter(watched, event);
}

void QWebHistoryInterface_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebHistoryInterface*>( (QWebHistoryInterface*)(self) )->handle__TimerEvent = slot;
}

void QWebHistoryInterface_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWebHistoryInterface*)(self) )->virtualbase_TimerEvent(event);
}

void QWebHistoryInterface_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebHistoryInterface*>( (QWebHistoryInterface*)(self) )->handle__ChildEvent = slot;
}

void QWebHistoryInterface_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWebHistoryInterface*)(self) )->virtualbase_ChildEvent(event);
}

void QWebHistoryInterface_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebHistoryInterface*>( (QWebHistoryInterface*)(self) )->handle__CustomEvent = slot;
}

void QWebHistoryInterface_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWebHistoryInterface*)(self) )->virtualbase_CustomEvent(event);
}

void QWebHistoryInterface_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebHistoryInterface*>( (QWebHistoryInterface*)(self) )->handle__ConnectNotify = slot;
}

void QWebHistoryInterface_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebHistoryInterface*)(self) )->virtualbase_ConnectNotify(signal);
}

void QWebHistoryInterface_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWebHistoryInterface*>( (QWebHistoryInterface*)(self) )->handle__DisconnectNotify = slot;
}

void QWebHistoryInterface_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWebHistoryInterface*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QWebHistoryInterface_Delete(QWebHistoryInterface* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQWebHistoryInterface*>( self );
	} else {
		delete self;
	}
}

