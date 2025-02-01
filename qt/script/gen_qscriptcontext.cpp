#include <QList>
#include <QScriptContext>
#include <QScriptEngine>
#include <QScriptValue>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscriptcontext.h>
#include "gen_qscriptcontext.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QScriptContext* QScriptContext_parentContext(const QScriptContext* self) {
	return self->parentContext();
}

QScriptEngine* QScriptContext_engine(const QScriptContext* self) {
	return self->engine();
}

int QScriptContext_state(const QScriptContext* self) {
	QScriptContext::ExecutionState _ret = self->state();
	return static_cast<int>(_ret);
}

QScriptValue* QScriptContext_callee(const QScriptContext* self) {
	return new QScriptValue(self->callee());
}

int QScriptContext_argumentCount(const QScriptContext* self) {
	return self->argumentCount();
}

QScriptValue* QScriptContext_argument(const QScriptContext* self, int index) {
	return new QScriptValue(self->argument(static_cast<int>(index)));
}

QScriptValue* QScriptContext_argumentsObject(const QScriptContext* self) {
	return new QScriptValue(self->argumentsObject());
}

struct miqt_array /* of QScriptValue* */  QScriptContext_scopeChain(const QScriptContext* self) {
	QScriptValueList _ret = self->scopeChain();
	// Convert QList<> from C++ memory to manually-managed C memory
	QScriptValue** _arr = static_cast<QScriptValue**>(malloc(sizeof(QScriptValue*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QScriptValue(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QScriptContext_pushScope(QScriptContext* self, QScriptValue* object) {
	self->pushScope(*object);
}

QScriptValue* QScriptContext_popScope(QScriptContext* self) {
	return new QScriptValue(self->popScope());
}

QScriptValue* QScriptContext_returnValue(const QScriptContext* self) {
	return new QScriptValue(self->returnValue());
}

void QScriptContext_setReturnValue(QScriptContext* self, QScriptValue* result) {
	self->setReturnValue(*result);
}

QScriptValue* QScriptContext_activationObject(const QScriptContext* self) {
	return new QScriptValue(self->activationObject());
}

void QScriptContext_setActivationObject(QScriptContext* self, QScriptValue* activation) {
	self->setActivationObject(*activation);
}

QScriptValue* QScriptContext_thisObject(const QScriptContext* self) {
	return new QScriptValue(self->thisObject());
}

void QScriptContext_setThisObject(QScriptContext* self, QScriptValue* thisObject) {
	self->setThisObject(*thisObject);
}

bool QScriptContext_isCalledAsConstructor(const QScriptContext* self) {
	return self->isCalledAsConstructor();
}

QScriptValue* QScriptContext_throwValue(QScriptContext* self, QScriptValue* value) {
	return new QScriptValue(self->throwValue(*value));
}

QScriptValue* QScriptContext_throwError(QScriptContext* self, int error, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QScriptValue(self->throwError(static_cast<QScriptContext::Error>(error), text_QString));
}

QScriptValue* QScriptContext_throwErrorWithText(QScriptContext* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QScriptValue(self->throwError(text_QString));
}

struct miqt_array /* of struct miqt_string */  QScriptContext_backtrace(const QScriptContext* self) {
	QStringList _ret = self->backtrace();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QScriptContext_toString(const QScriptContext* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScriptContext_delete(QScriptContext* self) {
	delete self;
}

