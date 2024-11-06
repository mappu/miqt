#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexeroctave.h>
#include "gen_qscilexeroctave.h"
#include "_cgo_export.h"

QsciLexerOctave* QsciLexerOctave_new() {
	return new QsciLexerOctave();
}

QsciLexerOctave* QsciLexerOctave_new2(QObject* parent) {
	return new QsciLexerOctave(parent);
}

QMetaObject* QsciLexerOctave_MetaObject(const QsciLexerOctave* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerOctave_Metacast(QsciLexerOctave* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerOctave_Tr(const char* s) {
	QString _ret = QsciLexerOctave::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerOctave_Language(const QsciLexerOctave* self) {
	return (const char*) self->language();
}

const char* QsciLexerOctave_Lexer(const QsciLexerOctave* self) {
	return (const char*) self->lexer();
}

const char* QsciLexerOctave_Keywords(const QsciLexerOctave* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerOctave_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerOctave::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerOctave_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerOctave::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerOctave_Delete(QsciLexerOctave* self) {
	delete self;
}

