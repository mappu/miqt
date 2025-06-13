#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineScript>
#include <qwebenginescript.h>
#include "gen_qwebenginescript.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebEngineScript* QWebEngineScript_new() {
	return new (std::nothrow) QWebEngineScript();
}

QWebEngineScript* QWebEngineScript_new2(QWebEngineScript* other) {
	return new (std::nothrow) QWebEngineScript(*other);
}

void QWebEngineScript_operatorAssign(QWebEngineScript* self, QWebEngineScript* other) {
	self->operator=(*other);
}

struct miqt_string QWebEngineScript_name(const QWebEngineScript* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineScript_setName(QWebEngineScript* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

QUrl* QWebEngineScript_sourceUrl(const QWebEngineScript* self) {
	return new QUrl(self->sourceUrl());
}

void QWebEngineScript_setSourceUrl(QWebEngineScript* self, QUrl* url) {
	self->setSourceUrl(*url);
}

struct miqt_string QWebEngineScript_sourceCode(const QWebEngineScript* self) {
	QString _ret = self->sourceCode();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineScript_setSourceCode(QWebEngineScript* self, struct miqt_string sourceCode) {
	QString sourceCode_QString = QString::fromUtf8(sourceCode.data, sourceCode.len);
	self->setSourceCode(sourceCode_QString);
}

int QWebEngineScript_injectionPoint(const QWebEngineScript* self) {
	QWebEngineScript::InjectionPoint _ret = self->injectionPoint();
	return static_cast<int>(_ret);
}

void QWebEngineScript_setInjectionPoint(QWebEngineScript* self, int injectionPoint) {
	self->setInjectionPoint(static_cast<QWebEngineScript::InjectionPoint>(injectionPoint));
}

unsigned int QWebEngineScript_worldId(const QWebEngineScript* self) {
	quint32 _ret = self->worldId();
	return static_cast<unsigned int>(_ret);
}

void QWebEngineScript_setWorldId(QWebEngineScript* self, unsigned int worldId) {
	self->setWorldId(static_cast<quint32>(worldId));
}

bool QWebEngineScript_runsOnSubFrames(const QWebEngineScript* self) {
	return self->runsOnSubFrames();
}

void QWebEngineScript_setRunsOnSubFrames(QWebEngineScript* self, bool on) {
	self->setRunsOnSubFrames(on);
}

bool QWebEngineScript_operatorEqual(const QWebEngineScript* self, QWebEngineScript* other) {
	return (*self == *other);
}

bool QWebEngineScript_operatorNotEqual(const QWebEngineScript* self, QWebEngineScript* other) {
	return (*self != *other);
}

void QWebEngineScript_swap(QWebEngineScript* self, QWebEngineScript* other) {
	self->swap(*other);
}

void QWebEngineScript_delete(QWebEngineScript* self) {
	delete self;
}

