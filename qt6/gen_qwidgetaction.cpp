#include <QAction>
#include <QChildEvent>
#include <QEvent>
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

bool miqt_exec_callback_QWidgetAction_Event(QWidgetAction*, intptr_t, QEvent*);
bool miqt_exec_callback_QWidgetAction_EventFilter(QWidgetAction*, intptr_t, QObject*, QEvent*);
QWidget* miqt_exec_callback_QWidgetAction_CreateWidget(QWidgetAction*, intptr_t, QWidget*);
void miqt_exec_callback_QWidgetAction_DeleteWidget(QWidgetAction*, intptr_t, QWidget*);
void miqt_exec_callback_QWidgetAction_TimerEvent(QWidgetAction*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWidgetAction_ChildEvent(QWidgetAction*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWidgetAction_CustomEvent(QWidgetAction*, intptr_t, QEvent*);
void miqt_exec_callback_QWidgetAction_ConnectNotify(QWidgetAction*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWidgetAction_DisconnectNotify(QWidgetAction*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWidgetAction final : public QWidgetAction {
public:

	MiqtVirtualQWidgetAction(QObject* parent): QWidgetAction(parent) {};

	virtual ~MiqtVirtualQWidgetAction() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QWidgetAction::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QWidgetAction_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QWidgetAction::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (handle__EventFilter == 0) {
			return QWidgetAction::eventFilter(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QWidgetAction_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* param1, QEvent* param2) {

		return QWidgetAction::eventFilter(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* createWidget(QWidget* parent) override {
		if (handle__CreateWidget == 0) {
			return QWidgetAction::createWidget(parent);
		}
		
		QWidget* sigval1 = parent;

		QWidget* callback_return_value = miqt_exec_callback_QWidgetAction_CreateWidget(this, handle__CreateWidget, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_CreateWidget(QWidget* parent) {

		return QWidgetAction::createWidget(parent);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DeleteWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual void deleteWidget(QWidget* widget) override {
		if (handle__DeleteWidget == 0) {
			QWidgetAction::deleteWidget(widget);
			return;
		}
		
		QWidget* sigval1 = widget;

		miqt_exec_callback_QWidgetAction_DeleteWidget(this, handle__DeleteWidget, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DeleteWidget(QWidget* widget) {

		QWidgetAction::deleteWidget(widget);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QWidgetAction::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QWidgetAction_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QWidgetAction::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QWidgetAction::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QWidgetAction_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QWidgetAction::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QWidgetAction::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QWidgetAction_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QWidgetAction::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QWidgetAction::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWidgetAction_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QWidgetAction::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QWidgetAction::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QWidgetAction_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QWidgetAction::disconnectNotify(*signal);

	}

};

QWidgetAction* QWidgetAction_new(QObject* parent) {
	return new MiqtVirtualQWidgetAction(parent);
}

void QWidgetAction_virtbase(QWidgetAction* src, QAction** outptr_QAction) {
	*outptr_QAction = static_cast<QAction*>(src);
}

QMetaObject* QWidgetAction_MetaObject(const QWidgetAction* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWidgetAction_Metacast(QWidgetAction* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWidgetAction_Tr(const char* s) {
	QString _ret = QWidgetAction::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidgetAction_SetDefaultWidget(QWidgetAction* self, QWidget* w) {
	self->setDefaultWidget(w);
}

QWidget* QWidgetAction_DefaultWidget(const QWidgetAction* self) {
	return self->defaultWidget();
}

QWidget* QWidgetAction_RequestWidget(QWidgetAction* self, QWidget* parent) {
	return self->requestWidget(parent);
}

void QWidgetAction_ReleaseWidget(QWidgetAction* self, QWidget* widget) {
	self->releaseWidget(widget);
}

struct miqt_string QWidgetAction_Tr2(const char* s, const char* c) {
	QString _ret = QWidgetAction::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWidgetAction_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWidgetAction::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWidgetAction_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QWidgetAction_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_Event(param1);
}

bool QWidgetAction_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QWidgetAction_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_EventFilter(param1, param2);
}

bool QWidgetAction_override_virtual_CreateWidget(void* self, intptr_t slot) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CreateWidget = slot;
	return true;
}

QWidget* QWidgetAction_virtualbase_CreateWidget(void* self, QWidget* parent) {
	return ( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_CreateWidget(parent);
}

bool QWidgetAction_override_virtual_DeleteWidget(void* self, intptr_t slot) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DeleteWidget = slot;
	return true;
}

void QWidgetAction_virtualbase_DeleteWidget(void* self, QWidget* widget) {
	( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_DeleteWidget(widget);
}

bool QWidgetAction_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QWidgetAction_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_TimerEvent(event);
}

bool QWidgetAction_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QWidgetAction_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_ChildEvent(event);
}

bool QWidgetAction_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QWidgetAction_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_CustomEvent(event);
}

bool QWidgetAction_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QWidgetAction_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QWidgetAction_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWidgetAction* self_cast = dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QWidgetAction_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QWidgetAction_Delete(QWidgetAction* self) {
	delete self;
}

