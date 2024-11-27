#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWebEngineScript>
#include <qwebenginescript.h>
#include "gen_qwebenginescript.h"
#include "_cgo_export.h"

void QWebEngineScript_new(QWebEngineScript** outptr_QWebEngineScript) {
	QWebEngineScript* ret = new QWebEngineScript();
	*outptr_QWebEngineScript = ret;
}

void QWebEngineScript_new2(QWebEngineScript* other, QWebEngineScript** outptr_QWebEngineScript) {
	QWebEngineScript* ret = new QWebEngineScript(*other);
	*outptr_QWebEngineScript = ret;
}

void QWebEngineScript_OperatorAssign(QWebEngineScript* self, QWebEngineScript* other) {
	self->operator=(*other);
}

bool QWebEngineScript_IsNull(const QWebEngineScript* self) {
	return self->isNull();
}

struct miqt_string QWebEngineScript_Name(const QWebEngineScript* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineScript_SetName(QWebEngineScript* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

struct miqt_string QWebEngineScript_SourceCode(const QWebEngineScript* self) {
	QString _ret = self->sourceCode();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineScript_SetSourceCode(QWebEngineScript* self, struct miqt_string sourceCode) {
	QString sourceCode_QString = QString::fromUtf8(sourceCode.data, sourceCode.len);
	self->setSourceCode(sourceCode_QString);
}

int QWebEngineScript_InjectionPoint(const QWebEngineScript* self) {
	QWebEngineScript::InjectionPoint _ret = self->injectionPoint();
	return static_cast<int>(_ret);
}

void QWebEngineScript_SetInjectionPoint(QWebEngineScript* self, int injectionPoint) {
	self->setInjectionPoint(static_cast<QWebEngineScript::InjectionPoint>(injectionPoint));
}

unsigned int QWebEngineScript_WorldId(const QWebEngineScript* self) {
	quint32 _ret = self->worldId();
	return static_cast<unsigned int>(_ret);
}

void QWebEngineScript_SetWorldId(QWebEngineScript* self, unsigned int worldId) {
	self->setWorldId(static_cast<quint32>(worldId));
}

bool QWebEngineScript_RunsOnSubFrames(const QWebEngineScript* self) {
	return self->runsOnSubFrames();
}

void QWebEngineScript_SetRunsOnSubFrames(QWebEngineScript* self, bool on) {
	self->setRunsOnSubFrames(on);
}

bool QWebEngineScript_OperatorEqual(const QWebEngineScript* self, QWebEngineScript* other) {
	return (*self == *other);
}

bool QWebEngineScript_OperatorNotEqual(const QWebEngineScript* self, QWebEngineScript* other) {
	return (*self != *other);
}

void QWebEngineScript_Swap(QWebEngineScript* self, QWebEngineScript* other) {
	self->swap(*other);
}

void QWebEngineScript_Delete(QWebEngineScript* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineScript*>( self );
	} else {
		delete self;
	}
}

