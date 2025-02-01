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

void QWebEngineUrlScheme_operatorAssign(QWebEngineUrlScheme* self, QWebEngineUrlScheme* that) {
	self->operator=(*that);
}

bool QWebEngineUrlScheme_operatorEqual(const QWebEngineUrlScheme* self, QWebEngineUrlScheme* that) {
	return (*self == *that);
}

bool QWebEngineUrlScheme_operatorNotEqual(const QWebEngineUrlScheme* self, QWebEngineUrlScheme* that) {
	return (*self != *that);
}

struct miqt_string QWebEngineUrlScheme_name(const QWebEngineUrlScheme* self) {
	QByteArray _qb = self->name();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QWebEngineUrlScheme_setName(QWebEngineUrlScheme* self, struct miqt_string newValue) {
	QByteArray newValue_QByteArray(newValue.data, newValue.len);
	self->setName(newValue_QByteArray);
}

int QWebEngineUrlScheme_syntax(const QWebEngineUrlScheme* self) {
	QWebEngineUrlScheme::Syntax _ret = self->syntax();
	return static_cast<int>(_ret);
}

void QWebEngineUrlScheme_setSyntax(QWebEngineUrlScheme* self, int newValue) {
	self->setSyntax(static_cast<QWebEngineUrlScheme::Syntax>(newValue));
}

int QWebEngineUrlScheme_defaultPort(const QWebEngineUrlScheme* self) {
	return self->defaultPort();
}

void QWebEngineUrlScheme_setDefaultPort(QWebEngineUrlScheme* self, int newValue) {
	self->setDefaultPort(static_cast<int>(newValue));
}

int QWebEngineUrlScheme_flags(const QWebEngineUrlScheme* self) {
	QWebEngineUrlScheme::Flags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QWebEngineUrlScheme_setFlags(QWebEngineUrlScheme* self, int newValue) {
	self->setFlags(static_cast<QWebEngineUrlScheme::Flags>(newValue));
}

void QWebEngineUrlScheme_registerScheme(QWebEngineUrlScheme* scheme) {
	QWebEngineUrlScheme::registerScheme(*scheme);
}

QWebEngineUrlScheme* QWebEngineUrlScheme_schemeByName(struct miqt_string name) {
	QByteArray name_QByteArray(name.data, name.len);
	return new QWebEngineUrlScheme(QWebEngineUrlScheme::schemeByName(name_QByteArray));
}

void QWebEngineUrlScheme_delete(QWebEngineUrlScheme* self) {
	delete self;
}

