#include <QColor>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerdiff.h>
#include "gen_qscilexerdiff.h"
#include "_cgo_export.h"

QsciLexerDiff* QsciLexerDiff_new() {
	return new QsciLexerDiff();
}

QsciLexerDiff* QsciLexerDiff_new2(QObject* parent) {
	return new QsciLexerDiff(parent);
}

QMetaObject* QsciLexerDiff_MetaObject(const QsciLexerDiff* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerDiff_Metacast(QsciLexerDiff* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerDiff_Tr(const char* s) {
	QString _ret = QsciLexerDiff::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerDiff_Language(const QsciLexerDiff* self) {
	return (const char*) self->language();
}

const char* QsciLexerDiff_Lexer(const QsciLexerDiff* self) {
	return (const char*) self->lexer();
}

const char* QsciLexerDiff_WordCharacters(const QsciLexerDiff* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerDiff_DefaultColor(const QsciLexerDiff* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

struct miqt_string QsciLexerDiff_Description(const QsciLexerDiff* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerDiff_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerDiff::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerDiff_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerDiff::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerDiff_Delete(QsciLexerDiff* self) {
	delete self;
}

