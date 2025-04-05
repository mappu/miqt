#include <QQmlScriptString>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qqmlscriptstring.h>
#include "gen_qqmlscriptstring.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QQmlScriptString* QQmlScriptString_new() {
	return new QQmlScriptString();
}

QQmlScriptString* QQmlScriptString_new2(QQmlScriptString* param1) {
	return new QQmlScriptString(*param1);
}

void QQmlScriptString_operatorAssign(QQmlScriptString* self, QQmlScriptString* param1) {
	self->operator=(*param1);
}

bool QQmlScriptString_operatorEqual(const QQmlScriptString* self, QQmlScriptString* param1) {
	return (*self == *param1);
}

bool QQmlScriptString_operatorNotEqual(const QQmlScriptString* self, QQmlScriptString* param1) {
	return (*self != *param1);
}

bool QQmlScriptString_isEmpty(const QQmlScriptString* self) {
	return self->isEmpty();
}

bool QQmlScriptString_isUndefinedLiteral(const QQmlScriptString* self) {
	return self->isUndefinedLiteral();
}

bool QQmlScriptString_isNullLiteral(const QQmlScriptString* self) {
	return self->isNullLiteral();
}

struct miqt_string QQmlScriptString_stringLiteral(const QQmlScriptString* self) {
	QString _ret = self->stringLiteral();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QQmlScriptString_numberLiteral(const QQmlScriptString* self, bool* ok) {
	qreal _ret = self->numberLiteral(ok);
	return static_cast<double>(_ret);
}

bool QQmlScriptString_booleanLiteral(const QQmlScriptString* self, bool* ok) {
	return self->booleanLiteral(ok);
}

void QQmlScriptString_delete(QQmlScriptString* self) {
	delete self;
}

