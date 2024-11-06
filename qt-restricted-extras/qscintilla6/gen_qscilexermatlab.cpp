#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexermatlab.h>
#include "gen_qscilexermatlab.h"
#include "_cgo_export.h"

QsciLexerMatlab* QsciLexerMatlab_new() {
	return new QsciLexerMatlab();
}

QsciLexerMatlab* QsciLexerMatlab_new2(QObject* parent) {
	return new QsciLexerMatlab(parent);
}

QMetaObject* QsciLexerMatlab_MetaObject(const QsciLexerMatlab* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerMatlab_Metacast(QsciLexerMatlab* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerMatlab_Tr(const char* s) {
	QString _ret = QsciLexerMatlab::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerMatlab_Language(const QsciLexerMatlab* self) {
	return (const char*) self->language();
}

const char* QsciLexerMatlab_Lexer(const QsciLexerMatlab* self) {
	return (const char*) self->lexer();
}

QColor* QsciLexerMatlab_DefaultColor(const QsciLexerMatlab* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerMatlab_DefaultFont(const QsciLexerMatlab* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

const char* QsciLexerMatlab_Keywords(const QsciLexerMatlab* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerMatlab_Description(const QsciLexerMatlab* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMatlab_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerMatlab::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMatlab_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerMatlab::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerMatlab_Delete(QsciLexerMatlab* self) {
	delete self;
}

