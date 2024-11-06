#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerfortran.h>
#include "gen_qscilexerfortran.h"
#include "_cgo_export.h"

QsciLexerFortran* QsciLexerFortran_new() {
	return new QsciLexerFortran();
}

QsciLexerFortran* QsciLexerFortran_new2(QObject* parent) {
	return new QsciLexerFortran(parent);
}

QMetaObject* QsciLexerFortran_MetaObject(const QsciLexerFortran* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerFortran_Metacast(QsciLexerFortran* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerFortran_Tr(const char* s) {
	QString _ret = QsciLexerFortran::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerFortran_Language(const QsciLexerFortran* self) {
	return (const char*) self->language();
}

const char* QsciLexerFortran_Lexer(const QsciLexerFortran* self) {
	return (const char*) self->lexer();
}

const char* QsciLexerFortran_Keywords(const QsciLexerFortran* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerFortran_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerFortran::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerFortran_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerFortran::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerFortran_Delete(QsciLexerFortran* self) {
	delete self;
}

