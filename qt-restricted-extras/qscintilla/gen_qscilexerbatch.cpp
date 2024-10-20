#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerbatch.h>
#include "gen_qscilexerbatch.h"
#include "_cgo_export.h"

QsciLexerBatch* QsciLexerBatch_new() {
	return new QsciLexerBatch();
}

QsciLexerBatch* QsciLexerBatch_new2(QObject* parent) {
	return new QsciLexerBatch(parent);
}

QMetaObject* QsciLexerBatch_MetaObject(const QsciLexerBatch* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerBatch_Metacast(QsciLexerBatch* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerBatch_Tr(const char* s) {
	QString _ret = QsciLexerBatch::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerBatch_TrUtf8(const char* s) {
	QString _ret = QsciLexerBatch::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerBatch_Language(const QsciLexerBatch* self) {
	return (const char*) self->language();
}

const char* QsciLexerBatch_Lexer(const QsciLexerBatch* self) {
	return (const char*) self->lexer();
}

const char* QsciLexerBatch_WordCharacters(const QsciLexerBatch* self) {
	return (const char*) self->wordCharacters();
}

bool QsciLexerBatch_CaseSensitive(const QsciLexerBatch* self) {
	return self->caseSensitive();
}

QColor* QsciLexerBatch_DefaultColor(const QsciLexerBatch* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerBatch_DefaultEolFill(const QsciLexerBatch* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerBatch_DefaultFont(const QsciLexerBatch* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerBatch_DefaultPaper(const QsciLexerBatch* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerBatch_Keywords(const QsciLexerBatch* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerBatch_Description(const QsciLexerBatch* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerBatch_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerBatch::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerBatch_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerBatch::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerBatch_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerBatch::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerBatch_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerBatch::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerBatch_Delete(QsciLexerBatch* self) {
	delete self;
}

