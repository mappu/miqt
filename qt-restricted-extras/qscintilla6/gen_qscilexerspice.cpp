#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerspice.h>
#include "gen_qscilexerspice.h"
#include "_cgo_export.h"

QsciLexerSpice* QsciLexerSpice_new() {
	return new QsciLexerSpice();
}

QsciLexerSpice* QsciLexerSpice_new2(QObject* parent) {
	return new QsciLexerSpice(parent);
}

QMetaObject* QsciLexerSpice_MetaObject(const QsciLexerSpice* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerSpice_Metacast(QsciLexerSpice* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerSpice_Tr(const char* s) {
	QString _ret = QsciLexerSpice::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerSpice_Language(const QsciLexerSpice* self) {
	return (const char*) self->language();
}

const char* QsciLexerSpice_Lexer(const QsciLexerSpice* self) {
	return (const char*) self->lexer();
}

int QsciLexerSpice_BraceStyle(const QsciLexerSpice* self) {
	return self->braceStyle();
}

const char* QsciLexerSpice_Keywords(const QsciLexerSpice* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

QColor* QsciLexerSpice_DefaultColor(const QsciLexerSpice* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerSpice_DefaultFont(const QsciLexerSpice* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

struct miqt_string QsciLexerSpice_Description(const QsciLexerSpice* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerSpice_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerSpice::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerSpice_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerSpice::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerSpice_Delete(QsciLexerSpice* self) {
	delete self;
}

