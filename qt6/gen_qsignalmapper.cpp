#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSignalMapper>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qsignalmapper.h>
#include "gen_qsignalmapper.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSignalMapper_MappedInt(intptr_t, int);
void miqt_exec_callback_QSignalMapper_MappedString(intptr_t, struct miqt_string);
void miqt_exec_callback_QSignalMapper_MappedObject(intptr_t, QObject*);
bool miqt_exec_callback_QSignalMapper_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QSignalMapper_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSignalMapper_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSignalMapper_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSignalMapper_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QSignalMapper_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSignalMapper_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSignalMapper : public virtual QSignalMapper {
public:

	MiqtVirtualQSignalMapper(): QSignalMapper() {};
	MiqtVirtualQSignalMapper(QObject* parent): QSignalMapper(parent) {};

	virtual ~MiqtVirtualQSignalMapper() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QSignalMapper::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSignalMapper_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QSignalMapper::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QSignalMapper::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSignalMapper_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QSignalMapper::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QSignalMapper::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSignalMapper_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QSignalMapper::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QSignalMapper::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSignalMapper_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QSignalMapper::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QSignalMapper::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSignalMapper_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QSignalMapper::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QSignalMapper::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSignalMapper_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QSignalMapper::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QSignalMapper::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSignalMapper_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QSignalMapper::disconnectNotify(*signal);

	}

};

QSignalMapper* QSignalMapper_new() {
	return new MiqtVirtualQSignalMapper();
}

QSignalMapper* QSignalMapper_new2(QObject* parent) {
	return new MiqtVirtualQSignalMapper(parent);
}

void QSignalMapper_virtbase(QSignalMapper* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QSignalMapper_MetaObject(const QSignalMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSignalMapper_Metacast(QSignalMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSignalMapper_Tr(const char* s) {
	QString _ret = QSignalMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSignalMapper_SetMapping(QSignalMapper* self, QObject* sender, int id) {
	self->setMapping(sender, static_cast<int>(id));
}

void QSignalMapper_SetMapping2(QSignalMapper* self, QObject* sender, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setMapping(sender, text_QString);
}

void QSignalMapper_SetMapping3(QSignalMapper* self, QObject* sender, QObject* object) {
	self->setMapping(sender, object);
}

void QSignalMapper_RemoveMappings(QSignalMapper* self, QObject* sender) {
	self->removeMappings(sender);
}

QObject* QSignalMapper_Mapping(const QSignalMapper* self, int id) {
	return self->mapping(static_cast<int>(id));
}

QObject* QSignalMapper_MappingWithText(const QSignalMapper* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->mapping(text_QString);
}

QObject* QSignalMapper_MappingWithObject(const QSignalMapper* self, QObject* object) {
	return self->mapping(object);
}

void QSignalMapper_MappedInt(QSignalMapper* self, int param1) {
	self->mappedInt(static_cast<int>(param1));
}

void QSignalMapper_connect_MappedInt(QSignalMapper* self, intptr_t slot) {
	MiqtVirtualQSignalMapper::connect(self, static_cast<void (QSignalMapper::*)(int)>(&QSignalMapper::mappedInt), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QSignalMapper_MappedInt(slot, sigval1);
	});
}

void QSignalMapper_MappedString(QSignalMapper* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->mappedString(param1_QString);
}

void QSignalMapper_connect_MappedString(QSignalMapper* self, intptr_t slot) {
	MiqtVirtualQSignalMapper::connect(self, static_cast<void (QSignalMapper::*)(const QString&)>(&QSignalMapper::mappedString), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QSignalMapper_MappedString(slot, sigval1);
	});
}

void QSignalMapper_MappedObject(QSignalMapper* self, QObject* param1) {
	self->mappedObject(param1);
}

void QSignalMapper_connect_MappedObject(QSignalMapper* self, intptr_t slot) {
	MiqtVirtualQSignalMapper::connect(self, static_cast<void (QSignalMapper::*)(QObject*)>(&QSignalMapper::mappedObject), self, [=](QObject* param1) {
		QObject* sigval1 = param1;
		miqt_exec_callback_QSignalMapper_MappedObject(slot, sigval1);
	});
}

void QSignalMapper_Map(QSignalMapper* self) {
	self->map();
}

void QSignalMapper_MapWithSender(QSignalMapper* self, QObject* sender) {
	self->map(sender);
}

struct miqt_string QSignalMapper_Tr2(const char* s, const char* c) {
	QString _ret = QSignalMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSignalMapper_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSignalMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSignalMapper_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSignalMapper*>( (QSignalMapper*)(self) )->handle__Event = slot;
}

bool QSignalMapper_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSignalMapper*)(self) )->virtualbase_Event(event);
}

void QSignalMapper_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSignalMapper*>( (QSignalMapper*)(self) )->handle__EventFilter = slot;
}

bool QSignalMapper_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSignalMapper*)(self) )->virtualbase_EventFilter(watched, event);
}

void QSignalMapper_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSignalMapper*>( (QSignalMapper*)(self) )->handle__TimerEvent = slot;
}

void QSignalMapper_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSignalMapper*)(self) )->virtualbase_TimerEvent(event);
}

void QSignalMapper_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSignalMapper*>( (QSignalMapper*)(self) )->handle__ChildEvent = slot;
}

void QSignalMapper_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSignalMapper*)(self) )->virtualbase_ChildEvent(event);
}

void QSignalMapper_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSignalMapper*>( (QSignalMapper*)(self) )->handle__CustomEvent = slot;
}

void QSignalMapper_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSignalMapper*)(self) )->virtualbase_CustomEvent(event);
}

void QSignalMapper_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSignalMapper*>( (QSignalMapper*)(self) )->handle__ConnectNotify = slot;
}

void QSignalMapper_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSignalMapper*)(self) )->virtualbase_ConnectNotify(signal);
}

void QSignalMapper_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQSignalMapper*>( (QSignalMapper*)(self) )->handle__DisconnectNotify = slot;
}

void QSignalMapper_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSignalMapper*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QSignalMapper_Delete(QSignalMapper* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQSignalMapper*>( self );
	} else {
		delete self;
	}
}

