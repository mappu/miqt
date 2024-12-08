#include <QAction>
#include <QEvent>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <QWidgetAction>
#include <qwidgetaction.h>
#include "gen_qwidgetaction.h"
#include "_cgo_export.h"

class MiqtVirtualQWidgetAction : public virtual QWidgetAction {
public:

	MiqtVirtualQWidgetAction(QObject* parent): QWidgetAction(parent) {};

	virtual ~MiqtVirtualQWidgetAction() = default;

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

struct miqt_string QWidgetAction_TrUtf8(const char* s) {
	QString _ret = QWidgetAction::trUtf8(s);
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

struct miqt_string QWidgetAction_TrUtf82(const char* s, const char* c) {
	QString _ret = QWidgetAction::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWidgetAction_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QWidgetAction::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWidgetAction_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) )->handle__Event = slot;
}

bool QWidgetAction_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_Event(param1);
}

void QWidgetAction_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) )->handle__EventFilter = slot;
}

bool QWidgetAction_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_EventFilter(param1, param2);
}

void QWidgetAction_override_virtual_CreateWidget(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) )->handle__CreateWidget = slot;
}

QWidget* QWidgetAction_virtualbase_CreateWidget(void* self, QWidget* parent) {
	return ( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_CreateWidget(parent);
}

void QWidgetAction_override_virtual_DeleteWidget(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQWidgetAction*>( (QWidgetAction*)(self) )->handle__DeleteWidget = slot;
}

void QWidgetAction_virtualbase_DeleteWidget(void* self, QWidget* widget) {
	( (MiqtVirtualQWidgetAction*)(self) )->virtualbase_DeleteWidget(widget);
}

void QWidgetAction_Delete(QWidgetAction* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQWidgetAction*>( self );
	} else {
		delete self;
	}
}

