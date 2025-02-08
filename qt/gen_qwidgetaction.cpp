#include <QAction>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <QWidgetAction>
#include <qwidgetaction.h>
#include "gen_qwidgetaction.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QWidgetAction_event(QWidgetAction*, intptr_t, QEvent*);
bool miqt_exec_callback_QWidgetAction_eventFilter(QWidgetAction*, intptr_t, QObject*, QEvent*);
QWidget* miqt_exec_callback_QWidgetAction_createWidget(QWidgetAction*, intptr_t, QWidget*);
void miqt_exec_callback_QWidgetAction_deleteWidget(QWidgetAction*, intptr_t, QWidget*);
void miqt_exec_callback_QWidgetAction_timerEvent(QWidgetAction*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWidgetAction_childEvent(QWidgetAction*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWidgetAction_customEvent(QWidgetAction*, intptr_t, QEvent*);
void miqt_exec_callback_QWidgetAction_connectNotify(QWidgetAction*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWidgetAction_disconnectNotify(QWidgetAction*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWidgetAction final : public QWidgetAction {
public:

	MiqtVirtualQWidgetAction(QObject* parent): QWidgetAction(parent) {};

	virtual ~MiqtVirtualQWidgetAction() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QWidgetAction::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QWidgetAction_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* param1) {

		return QWidgetAction::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__eventFilter == 0) {
			return QWidgetAction::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QWidgetAction_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* param1, QEvent* param2) {

		return QWidgetAction::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* createWidget(QWidget* parent) override {
		if (handle__createWidget == 0) {
			return QWidgetAction::createWidget(parent);
		}
		
		QWidget* sigval1 = parent;

		QWidget* callback_return_value = miqt_exec_callback_QWidgetAction_createWidget(this, handle__createWidget, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_createWidget(QWidget* parent) {

		return QWidgetAction::createWidget(parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__deleteWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual void deleteWidget(QWidget* widget) override {
		if (handle__deleteWidget == 0) {
			QWidgetAction::deleteWidget(widget);
			return;
		}
		
		QWidget* sigval1 = widget;

		miqt_exec_callback_QWidgetAction_deleteWidget(this, handle__deleteWidget, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_deleteWidget(QWidget* widget) {

		QWidgetAction::deleteWidget(widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QWidgetAction::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWidgetAction_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QWidgetAction::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QWidgetAction::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWidgetAction_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QWidgetAction::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QWidgetAction::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWidgetAction_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QWidgetAction::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QWidgetAction::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWidgetAction_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QWidgetAction::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QWidgetAction::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWidgetAction_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QWidgetAction::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend struct miqt_array /* of QWidget* */  QWidgetAction_protectedbase_createdWidgets(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QWidgetAction_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWidgetAction_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWidgetAction_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWidgetAction_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWidgetAction* QWidgetAction_new(QObject* parent) {
	return new MiqtVirtualQWidgetAction(parent);
}

void QWidgetAction_virtbase(QWidgetAction* src, QAction** outptr_QAction) {
	*outptr_QAction = static_cast<QAction*>(src);
}

QMetaObject* QWidgetAction_metaObject(const QWidgetAction* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWidgetAction_metacast(QWidgetAction* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWidgetAction_tr(const char* s) {
	QString _ret = QWidgetAction::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWidgetAction_trUtf8(const char* s) {
	QString _ret = QWidgetAction::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidgetAction_setDefaultWidget(QWidgetAction* self, QWidget* w) {
	self->setDefaultWidget(w);
}

QWidget* QWidgetAction_defaultWidget(const QWidgetAction* self) {
	return self->defaultWidget();
}

QWidget* QWidgetAction_requestWidget(QWidgetAction* self, QWidget* parent) {
	return self->requestWidget(parent);
}

void QWidgetAction_releaseWidget(QWidgetAction* self, QWidget* widget) {
	self->releaseWidget(widget);
}

struct miqt_string QWidgetAction_tr2(const char* s, const char* c) {
	QString _ret = QWidgetAction::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWidgetAction_tr3(const char* s, const char* c, int n) {
	QString _ret = QWidgetAction::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWidgetAction_trUtf82(const char* s, const char* c) {
	QString _ret = QWidgetAction::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWidgetAction_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QWidgetAction::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWidgetAction_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QWidgetAction_virtualbase_event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_event(param1);
}

bool QWidgetAction_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWidgetAction_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_eventFilter(param1, param2);
}

bool QWidgetAction_override_virtual_createWidget(void* self, intptr_t slot) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createWidget = slot;
	return true;
}

QWidget* QWidgetAction_virtualbase_createWidget(void* self, QWidget* parent) {
	return ( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_createWidget(parent);
}

bool QWidgetAction_override_virtual_deleteWidget(void* self, intptr_t slot) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__deleteWidget = slot;
	return true;
}

void QWidgetAction_virtualbase_deleteWidget(void* self, QWidget* widget) {
	( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_deleteWidget(widget);
}

bool QWidgetAction_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QWidgetAction_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_timerEvent(event);
}

bool QWidgetAction_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QWidgetAction_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_childEvent(event);
}

bool QWidgetAction_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QWidgetAction_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_customEvent(event);
}

bool QWidgetAction_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QWidgetAction_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_connectNotify(signal);
}

bool QWidgetAction_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QWidgetAction_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_disconnectNotify(signal);
}

struct miqt_array /* of QWidget* */  QWidgetAction_protectedbase_createdWidgets(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_array){};
	}
	
	*_dynamic_cast_ok = true;
	
	QList<QWidget *> _ret = self_cast->createdWidgets();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;

}

QObject* QWidgetAction_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QWidgetAction_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QWidgetAction_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QWidgetAction_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QWidgetAction_delete(QWidgetAction* self) {
	delete self;
}

