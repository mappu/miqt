#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerjava.h>
#include "gen_qscilexerjava.h"
#include "_cgo_export.h"

QsciLexerJava* QsciLexerJava_new() {
	return new QsciLexerJava();
}

QsciLexerJava* QsciLexerJava_new2(QObject* parent) {
	return new QsciLexerJava(parent);
}

QMetaObject* QsciLexerJava_MetaObject(const QsciLexerJava* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerJava_Metacast(QsciLexerJava* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerJava_Tr(const char* s) {
	QString _ret = QsciLexerJava::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerJava_TrUtf8(const char* s) {
	QString _ret = QsciLexerJava::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerJava_Language(const QsciLexerJava* self) {
	return (const char*) self->language();
}

const char* QsciLexerJava_Keywords(const QsciLexerJava* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerJava_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerJava::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerJava_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerJava::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerJava_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerJava::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerJava_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerJava::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerJava_Delete(QsciLexerJava* self) {
	delete self;
}

