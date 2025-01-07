#include <QByteArray>
#include <QWebEngineUrlScheme>
#include <qwebengineurlscheme.h>
#include "gen_qwebengineurlscheme.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebEngineUrlScheme* QWebEngineUrlScheme_new() {
	return new QWebEngineUrlScheme();
}

QWebEngineUrlScheme* QWebEngineUrlScheme_new2(struct miqt_string name) {
	QByteArray name_QByteArray(name.data, name.len);
	return new QWebEngineUrlScheme(name_QByteArray);
}

QWebEngineUrlScheme* QWebEngineUrlScheme_new3(QWebEngineUrlScheme* that) {
	return new QWebEngineUrlScheme(*that);
}

void QWebEngineUrlScheme_OperatorAssign(QWebEngineUrlScheme* self, QWebEngineUrlScheme* that) {
	self->operator=(*that);
}

bool QWebEngineUrlScheme_OperatorEqual(const QWebEngineUrlScheme* self, QWebEngineUrlScheme* that) {
	return (*self == *that);
}

bool QWebEngineUrlScheme_OperatorNotEqual(const QWebEngineUrlScheme* self, QWebEngineUrlScheme* that) {
	return (*self != *that);
}

struct miqt_string QWebEngineUrlScheme_Name(const QWebEngineUrlScheme* self) {
	QByteArray _qb = self->name();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QWebEngineUrlScheme_SetName(QWebEngineUrlScheme* self, struct miqt_string newValue) {
	QByteArray newValue_QByteArray(newValue.data, newValue.len);
	self->setName(newValue_QByteArray);
}

int QWebEngineUrlScheme_Syntax(const QWebEngineUrlScheme* self) {
	QWebEngineUrlScheme::Syntax _ret = self->syntax();
	return static_cast<int>(_ret);
}

void QWebEngineUrlScheme_SetSyntax(QWebEngineUrlScheme* self, int newValue) {
	self->setSyntax(static_cast<QWebEngineUrlScheme::Syntax>(newValue));
}

int QWebEngineUrlScheme_DefaultPort(const QWebEngineUrlScheme* self) {
	return self->defaultPort();
}

void QWebEngineUrlScheme_SetDefaultPort(QWebEngineUrlScheme* self, int newValue) {
	self->setDefaultPort(static_cast<int>(newValue));
}

int QWebEngineUrlScheme_Flags(const QWebEngineUrlScheme* self) {
	QWebEngineUrlScheme::Flags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QWebEngineUrlScheme_SetFlags(QWebEngineUrlScheme* self, int newValue) {
	self->setFlags(static_cast<QWebEngineUrlScheme::Flags>(newValue));
}

void QWebEngineUrlScheme_RegisterScheme(QWebEngineUrlScheme* scheme) {
	QWebEngineUrlScheme::registerScheme(*scheme);
}

QWebEngineUrlScheme* QWebEngineUrlScheme_SchemeByName(struct miqt_string name) {
	QByteArray name_QByteArray(name.data, name.len);
	return new QWebEngineUrlScheme(QWebEngineUrlScheme::schemeByName(name_QByteArray));
}

void QWebEngineUrlScheme_Delete(QWebEngineUrlScheme* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineUrlScheme*>( self );
	} else {
		delete self;
	}
}

