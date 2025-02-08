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

void miqt_exec_callback_QSignalMapper_mappedInt(intptr_t, int);
void miqt_exec_callback_QSignalMapper_mappedString(intptr_t, struct miqt_string);
void miqt_exec_callback_QSignalMapper_mappedObject(intptr_t, QObject*);
bool miqt_exec_callback_QSignalMapper_event(QSignalMapper*, intptr_t, QEvent*);
bool miqt_exec_callback_QSignalMapper_eventFilter(QSignalMapper*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSignalMapper_timerEvent(QSignalMapper*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSignalMapper_childEvent(QSignalMapper*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSignalMapper_customEvent(QSignalMapper*, intptr_t, QEvent*);
void miqt_exec_callback_QSignalMapper_connectNotify(QSignalMapper*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSignalMapper_disconnectNotify(QSignalMapper*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSignalMapper final : public QSignalMapper {
public:

	MiqtVirtualQSignalMapper(): QSignalMapper() {};
	MiqtVirtualQSignalMapper(QObject* parent): QSignalMapper(parent) {};

	virtual ~MiqtVirtualQSignalMapper() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSignalMapper::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSignalMapper_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QSignalMapper::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSignalMapper::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSignalMapper_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QSignalMapper::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSignalMapper::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSignalMapper_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QSignalMapper::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSignalMapper::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSignalMapper_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QSignalMapper::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSignalMapper::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSignalMapper_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QSignalMapper::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSignalMapper::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSignalMapper_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QSignalMapper::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSignalMapper::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSignalMapper_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QSignalMapper::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QSignalMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSignalMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSignalMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSignalMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
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

QMetaObject* QSignalMapper_metaObject(const QSignalMapper* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSignalMapper_metacast(QSignalMapper* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSignalMapper_tr(const char* s) {
	QString _ret = QSignalMapper::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSignalMapper_setMapping(QSignalMapper* self, QObject* sender, int id) {
	self->setMapping(sender, static_cast<int>(id));
}

void QSignalMapper_setMapping2(QSignalMapper* self, QObject* sender, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setMapping(sender, text_QString);
}

void QSignalMapper_setMapping3(QSignalMapper* self, QObject* sender, QObject* object) {
	self->setMapping(sender, object);
}

void QSignalMapper_removeMappings(QSignalMapper* self, QObject* sender) {
	self->removeMappings(sender);
}

QObject* QSignalMapper_mapping(const QSignalMapper* self, int id) {
	return self->mapping(static_cast<int>(id));
}

QObject* QSignalMapper_mappingWithText(const QSignalMapper* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->mapping(text_QString);
}

QObject* QSignalMapper_mappingWithObject(const QSignalMapper* self, QObject* object) {
	return self->mapping(object);
}

void QSignalMapper_mappedInt(QSignalMapper* self, int param1) {
	self->mappedInt(static_cast<int>(param1));
}

void QSignalMapper_connect_mappedInt(QSignalMapper* self, intptr_t slot) {
	MiqtVirtualQSignalMapper::connect(self, static_cast<void (QSignalMapper::*)(int)>(&QSignalMapper::mappedInt), self, [=](int param1) {
		int sigval1 = param1;
		miqt_exec_callback_QSignalMapper_mappedInt(slot, sigval1);
	});
}

void QSignalMapper_mappedString(QSignalMapper* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->mappedString(param1_QString);
}

void QSignalMapper_connect_mappedString(QSignalMapper* self, intptr_t slot) {
	MiqtVirtualQSignalMapper::connect(self, static_cast<void (QSignalMapper::*)(const QString&)>(&QSignalMapper::mappedString), self, [=](const QString& param1) {
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QSignalMapper_mappedString(slot, sigval1);
	});
}

void QSignalMapper_mappedObject(QSignalMapper* self, QObject* param1) {
	self->mappedObject(param1);
}

void QSignalMapper_connect_mappedObject(QSignalMapper* self, intptr_t slot) {
	MiqtVirtualQSignalMapper::connect(self, static_cast<void (QSignalMapper::*)(QObject*)>(&QSignalMapper::mappedObject), self, [=](QObject* param1) {
		QObject* sigval1 = param1;
		miqt_exec_callback_QSignalMapper_mappedObject(slot, sigval1);
	});
}

void QSignalMapper_map(QSignalMapper* self) {
	self->map();
}

void QSignalMapper_mapWithSender(QSignalMapper* self, QObject* sender) {
	self->map(sender);
}

struct miqt_string QSignalMapper_tr2(const char* s, const char* c) {
	QString _ret = QSignalMapper::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSignalMapper_tr3(const char* s, const char* c, int n) {
	QString _ret = QSignalMapper::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSignalMapper_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSignalMapper* self_cast = dynamic_cast<MiqtVirtualQSignalMapper*>( (QSignalMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QSignalMapper_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSignalMapper*)(self) )->virtualbase_event(event);
}

bool QSignalMapper_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSignalMapper* self_cast = dynamic_cast<MiqtVirtualQSignalMapper*>( (QSignalMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSignalMapper_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSignalMapper*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QSignalMapper_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSignalMapper* self_cast = dynamic_cast<MiqtVirtualQSignalMapper*>( (QSignalMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QSignalMapper_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSignalMapper*)(self) )->virtualbase_timerEvent(event);
}

bool QSignalMapper_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSignalMapper* self_cast = dynamic_cast<MiqtVirtualQSignalMapper*>( (QSignalMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QSignalMapper_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSignalMapper*)(self) )->virtualbase_childEvent(event);
}

bool QSignalMapper_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSignalMapper* self_cast = dynamic_cast<MiqtVirtualQSignalMapper*>( (QSignalMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QSignalMapper_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSignalMapper*)(self) )->virtualbase_customEvent(event);
}

bool QSignalMapper_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSignalMapper* self_cast = dynamic_cast<MiqtVirtualQSignalMapper*>( (QSignalMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QSignalMapper_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSignalMapper*)(self) )->virtualbase_connectNotify(signal);
}

bool QSignalMapper_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSignalMapper* self_cast = dynamic_cast<MiqtVirtualQSignalMapper*>( (QSignalMapper*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSignalMapper_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSignalMapper*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QSignalMapper_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSignalMapper* self_cast = dynamic_cast<MiqtVirtualQSignalMapper*>( (QSignalMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QSignalMapper_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSignalMapper* self_cast = dynamic_cast<MiqtVirtualQSignalMapper*>( (QSignalMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QSignalMapper_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSignalMapper* self_cast = dynamic_cast<MiqtVirtualQSignalMapper*>( (QSignalMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QSignalMapper_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSignalMapper* self_cast = dynamic_cast<MiqtVirtualQSignalMapper*>( (QSignalMapper*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QSignalMapper_delete(QSignalMapper* self) {
	delete self;
}

