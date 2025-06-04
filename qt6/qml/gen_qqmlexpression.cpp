#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlContext>
#include <QQmlEngine>
#include <QQmlError>
#include <QQmlExpression>
#include <QQmlScriptString>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qqmlexpression.h>
#include "gen_qqmlexpression.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QQmlExpression_valueChanged(intptr_t);
bool miqt_exec_callback_QQmlExpression_event(QQmlExpression*, intptr_t, QEvent*);
bool miqt_exec_callback_QQmlExpression_eventFilter(QQmlExpression*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QQmlExpression_timerEvent(QQmlExpression*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QQmlExpression_childEvent(QQmlExpression*, intptr_t, QChildEvent*);
void miqt_exec_callback_QQmlExpression_customEvent(QQmlExpression*, intptr_t, QEvent*);
void miqt_exec_callback_QQmlExpression_connectNotify(QQmlExpression*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QQmlExpression_disconnectNotify(QQmlExpression*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQQmlExpression final : public QQmlExpression {
public:

	MiqtVirtualQQmlExpression(): QQmlExpression() {}
	MiqtVirtualQQmlExpression(QQmlContext* param1, QObject* param2, const QString& param3): QQmlExpression(param1, param2, param3) {}
	MiqtVirtualQQmlExpression(const QQmlScriptString& param1): QQmlExpression(param1) {}
	MiqtVirtualQQmlExpression(QQmlContext* param1, QObject* param2, const QString& param3, QObject* param4): QQmlExpression(param1, param2, param3, param4) {}
	MiqtVirtualQQmlExpression(const QQmlScriptString& param1, QQmlContext* param2): QQmlExpression(param1, param2) {}
	MiqtVirtualQQmlExpression(const QQmlScriptString& param1, QQmlContext* param2, QObject* param3): QQmlExpression(param1, param2, param3) {}
	MiqtVirtualQQmlExpression(const QQmlScriptString& param1, QQmlContext* param2, QObject* param3, QObject* param4): QQmlExpression(param1, param2, param3, param4) {}

	virtual ~MiqtVirtualQQmlExpression() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QQmlExpression::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QQmlExpression_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QQmlExpression_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QQmlExpression::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QQmlExpression_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QQmlExpression_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QQmlExpression::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QQmlExpression_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QQmlExpression_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QQmlExpression::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QQmlExpression_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QQmlExpression_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QQmlExpression::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QQmlExpression_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QQmlExpression_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QQmlExpression::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QQmlExpression_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QQmlExpression_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QQmlExpression::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QQmlExpression_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QQmlExpression_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QQmlExpression_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlExpression_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlExpression_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QQmlExpression_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QQmlExpression* QQmlExpression_new() {
	return new (std::nothrow) MiqtVirtualQQmlExpression();
}

QQmlExpression* QQmlExpression_new2(QQmlContext* param1, QObject* param2, struct miqt_string param3) {
	QString param3_QString = QString::fromUtf8(param3.data, param3.len);
	return new (std::nothrow) MiqtVirtualQQmlExpression(param1, param2, param3_QString);
}

QQmlExpression* QQmlExpression_new3(QQmlScriptString* param1) {
	return new (std::nothrow) MiqtVirtualQQmlExpression(*param1);
}

QQmlExpression* QQmlExpression_new4(QQmlContext* param1, QObject* param2, struct miqt_string param3, QObject* param4) {
	QString param3_QString = QString::fromUtf8(param3.data, param3.len);
	return new (std::nothrow) MiqtVirtualQQmlExpression(param1, param2, param3_QString, param4);
}

QQmlExpression* QQmlExpression_new5(QQmlScriptString* param1, QQmlContext* param2) {
	return new (std::nothrow) MiqtVirtualQQmlExpression(*param1, param2);
}

QQmlExpression* QQmlExpression_new6(QQmlScriptString* param1, QQmlContext* param2, QObject* param3) {
	return new (std::nothrow) MiqtVirtualQQmlExpression(*param1, param2, param3);
}

QQmlExpression* QQmlExpression_new7(QQmlScriptString* param1, QQmlContext* param2, QObject* param3, QObject* param4) {
	return new (std::nothrow) MiqtVirtualQQmlExpression(*param1, param2, param3, param4);
}

void QQmlExpression_virtbase(QQmlExpression* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QQmlExpression_metaObject(const QQmlExpression* self) {
	return (QMetaObject*) self->metaObject();
}

void* QQmlExpression_metacast(QQmlExpression* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QQmlExpression_tr(const char* s) {
	QString _ret = QQmlExpression::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QQmlEngine* QQmlExpression_engine(const QQmlExpression* self) {
	return self->engine();
}

QQmlContext* QQmlExpression_context(const QQmlExpression* self) {
	return self->context();
}

struct miqt_string QQmlExpression_expression(const QQmlExpression* self) {
	QString _ret = self->expression();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QQmlExpression_setExpression(QQmlExpression* self, struct miqt_string expression) {
	QString expression_QString = QString::fromUtf8(expression.data, expression.len);
	self->setExpression(expression_QString);
}

bool QQmlExpression_notifyOnValueChanged(const QQmlExpression* self) {
	return self->notifyOnValueChanged();
}

void QQmlExpression_setNotifyOnValueChanged(QQmlExpression* self, bool notifyOnValueChanged) {
	self->setNotifyOnValueChanged(notifyOnValueChanged);
}

struct miqt_string QQmlExpression_sourceFile(const QQmlExpression* self) {
	QString _ret = self->sourceFile();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QQmlExpression_lineNumber(const QQmlExpression* self) {
	return self->lineNumber();
}

int QQmlExpression_columnNumber(const QQmlExpression* self) {
	return self->columnNumber();
}

void QQmlExpression_setSourceLocation(QQmlExpression* self, struct miqt_string fileName, int line) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setSourceLocation(fileName_QString, static_cast<int>(line));
}

QObject* QQmlExpression_scopeObject(const QQmlExpression* self) {
	return self->scopeObject();
}

bool QQmlExpression_hasError(const QQmlExpression* self) {
	return self->hasError();
}

void QQmlExpression_clearError(QQmlExpression* self) {
	self->clearError();
}

QQmlError* QQmlExpression_error(const QQmlExpression* self) {
	return new QQmlError(self->error());
}

QVariant* QQmlExpression_evaluate(QQmlExpression* self) {
	return new QVariant(self->evaluate());
}

void QQmlExpression_valueChanged(QQmlExpression* self) {
	self->valueChanged();
}

void QQmlExpression_connect_valueChanged(QQmlExpression* self, intptr_t slot) {
	QQmlExpression::connect(self, static_cast<void (QQmlExpression::*)()>(&QQmlExpression::valueChanged), self, [=]() {
		miqt_exec_callback_QQmlExpression_valueChanged(slot);
	});
}

struct miqt_string QQmlExpression_tr2(const char* s, const char* c) {
	QString _ret = QQmlExpression::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlExpression_tr3(const char* s, const char* c, int n) {
	QString _ret = QQmlExpression::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QQmlExpression_setSourceLocation2(QQmlExpression* self, struct miqt_string fileName, int line, int column) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setSourceLocation(fileName_QString, static_cast<int>(line), static_cast<int>(column));
}

QVariant* QQmlExpression_evaluateWithValueIsUndefined(QQmlExpression* self, bool* valueIsUndefined) {
	return new QVariant(self->evaluate(valueIsUndefined));
}

bool QQmlExpression_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQQmlExpression* self_cast = dynamic_cast<MiqtVirtualQQmlExpression*>( (QQmlExpression*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QQmlExpression_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQQmlExpression*>(self)->QQmlExpression::event(event);
}

bool QQmlExpression_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQQmlExpression* self_cast = dynamic_cast<MiqtVirtualQQmlExpression*>( (QQmlExpression*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QQmlExpression_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQQmlExpression*>(self)->QQmlExpression::eventFilter(watched, event);
}

bool QQmlExpression_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlExpression* self_cast = dynamic_cast<MiqtVirtualQQmlExpression*>( (QQmlExpression*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QQmlExpression_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQQmlExpression*>(self)->QQmlExpression::timerEvent(event);
}

bool QQmlExpression_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlExpression* self_cast = dynamic_cast<MiqtVirtualQQmlExpression*>( (QQmlExpression*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QQmlExpression_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQQmlExpression*>(self)->QQmlExpression::childEvent(event);
}

bool QQmlExpression_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQQmlExpression* self_cast = dynamic_cast<MiqtVirtualQQmlExpression*>( (QQmlExpression*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QQmlExpression_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQQmlExpression*>(self)->QQmlExpression::customEvent(event);
}

bool QQmlExpression_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQQmlExpression* self_cast = dynamic_cast<MiqtVirtualQQmlExpression*>( (QQmlExpression*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QQmlExpression_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQQmlExpression*>(self)->QQmlExpression::connectNotify(*signal);
}

bool QQmlExpression_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQQmlExpression* self_cast = dynamic_cast<MiqtVirtualQQmlExpression*>( (QQmlExpression*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QQmlExpression_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQQmlExpression*>(self)->QQmlExpression::disconnectNotify(*signal);
}

QObject* QQmlExpression_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQQmlExpression* self_cast = dynamic_cast<MiqtVirtualQQmlExpression*>( (QQmlExpression*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QQmlExpression_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQQmlExpression* self_cast = dynamic_cast<MiqtVirtualQQmlExpression*>( (QQmlExpression*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QQmlExpression_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQQmlExpression* self_cast = dynamic_cast<MiqtVirtualQQmlExpression*>( (QQmlExpression*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QQmlExpression_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQQmlExpression* self_cast = dynamic_cast<MiqtVirtualQQmlExpression*>( (QQmlExpression*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QQmlExpression_delete(QQmlExpression* self) {
	delete self;
}

