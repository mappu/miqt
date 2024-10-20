#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexermakefile.h>
#include "gen_qscilexermakefile.h"
#include "_cgo_export.h"

QsciLexerMakefile* QsciLexerMakefile_new() {
	return new QsciLexerMakefile();
}

QsciLexerMakefile* QsciLexerMakefile_new2(QObject* parent) {
	return new QsciLexerMakefile(parent);
}

QMetaObject* QsciLexerMakefile_MetaObject(const QsciLexerMakefile* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerMakefile_Metacast(QsciLexerMakefile* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerMakefile_Tr(const char* s) {
	QString _ret = QsciLexerMakefile::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMakefile_TrUtf8(const char* s) {
	QString _ret = QsciLexerMakefile::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerMakefile_Language(const QsciLexerMakefile* self) {
	return (const char*) self->language();
}

const char* QsciLexerMakefile_Lexer(const QsciLexerMakefile* self) {
	return (const char*) self->lexer();
}

const char* QsciLexerMakefile_WordCharacters(const QsciLexerMakefile* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerMakefile_DefaultColor(const QsciLexerMakefile* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerMakefile_DefaultEolFill(const QsciLexerMakefile* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerMakefile_DefaultFont(const QsciLexerMakefile* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerMakefile_DefaultPaper(const QsciLexerMakefile* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

struct miqt_string QsciLexerMakefile_Description(const QsciLexerMakefile* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMakefile_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerMakefile::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMakefile_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerMakefile::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMakefile_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerMakefile::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMakefile_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerMakefile::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerMakefile_Delete(QsciLexerMakefile* self) {
	delete self;
}

