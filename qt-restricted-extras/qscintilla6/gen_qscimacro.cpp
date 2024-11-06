#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscimacro.h>
#include "gen_qscimacro.h"
#include "_cgo_export.h"

QsciMacro* QsciMacro_new(QsciScintilla* parent) {
	return new QsciMacro(parent);
}

QsciMacro* QsciMacro_new2(struct miqt_string asc, QsciScintilla* parent) {
	QString asc_QString = QString::fromUtf8(asc.data, asc.len);
	return new QsciMacro(asc_QString, parent);
}

QMetaObject* QsciMacro_MetaObject(const QsciMacro* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciMacro_Metacast(QsciMacro* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciMacro_Tr(const char* s) {
	QString _ret = QsciMacro::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciMacro_Clear(QsciMacro* self) {
	self->clear();
}

bool QsciMacro_Load(QsciMacro* self, struct miqt_string asc) {
	QString asc_QString = QString::fromUtf8(asc.data, asc.len);
	return self->load(asc_QString);
}

struct miqt_string QsciMacro_Save(const QsciMacro* self) {
	QString _ret = self->save();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciMacro_Play(QsciMacro* self) {
	self->play();
}

void QsciMacro_StartRecording(QsciMacro* self) {
	self->startRecording();
}

void QsciMacro_EndRecording(QsciMacro* self) {
	self->endRecording();
}

struct miqt_string QsciMacro_Tr2(const char* s, const char* c) {
	QString _ret = QsciMacro::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciMacro_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciMacro::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciMacro_Delete(QsciMacro* self) {
	delete self;
}

