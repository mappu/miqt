#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexermarkdown.h>
#include "gen_qscilexermarkdown.h"
#include "_cgo_export.h"

QsciLexerMarkdown* QsciLexerMarkdown_new() {
	return new QsciLexerMarkdown();
}

QsciLexerMarkdown* QsciLexerMarkdown_new2(QObject* parent) {
	return new QsciLexerMarkdown(parent);
}

QMetaObject* QsciLexerMarkdown_MetaObject(const QsciLexerMarkdown* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerMarkdown_Metacast(QsciLexerMarkdown* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerMarkdown_Tr(const char* s) {
	QString _ret = QsciLexerMarkdown::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMarkdown_TrUtf8(const char* s) {
	QString _ret = QsciLexerMarkdown::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerMarkdown_Language(const QsciLexerMarkdown* self) {
	return (const char*) self->language();
}

const char* QsciLexerMarkdown_Lexer(const QsciLexerMarkdown* self) {
	return (const char*) self->lexer();
}

QColor* QsciLexerMarkdown_DefaultColor(const QsciLexerMarkdown* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerMarkdown_DefaultFont(const QsciLexerMarkdown* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerMarkdown_DefaultPaper(const QsciLexerMarkdown* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

struct miqt_string QsciLexerMarkdown_Description(const QsciLexerMarkdown* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMarkdown_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerMarkdown::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMarkdown_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerMarkdown::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMarkdown_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerMarkdown::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMarkdown_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerMarkdown::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerMarkdown_Delete(QsciLexerMarkdown* self) {
	delete self;
}

