#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerjson.h>
#include "gen_qscilexerjson.h"
#include "_cgo_export.h"

QsciLexerJSON* QsciLexerJSON_new() {
	return new QsciLexerJSON();
}

QsciLexerJSON* QsciLexerJSON_new2(QObject* parent) {
	return new QsciLexerJSON(parent);
}

QMetaObject* QsciLexerJSON_MetaObject(const QsciLexerJSON* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerJSON_Metacast(QsciLexerJSON* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerJSON_Tr(const char* s) {
	QString _ret = QsciLexerJSON::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerJSON_Language(const QsciLexerJSON* self) {
	return (const char*) self->language();
}

const char* QsciLexerJSON_Lexer(const QsciLexerJSON* self) {
	return (const char*) self->lexer();
}

QColor* QsciLexerJSON_DefaultColor(const QsciLexerJSON* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerJSON_DefaultEolFill(const QsciLexerJSON* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerJSON_DefaultFont(const QsciLexerJSON* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerJSON_DefaultPaper(const QsciLexerJSON* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerJSON_Keywords(const QsciLexerJSON* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerJSON_Description(const QsciLexerJSON* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerJSON_RefreshProperties(QsciLexerJSON* self) {
	self->refreshProperties();
}

void QsciLexerJSON_SetHighlightComments(QsciLexerJSON* self, bool highlight) {
	self->setHighlightComments(highlight);
}

bool QsciLexerJSON_HighlightComments(const QsciLexerJSON* self) {
	return self->highlightComments();
}

void QsciLexerJSON_SetHighlightEscapeSequences(QsciLexerJSON* self, bool highlight) {
	self->setHighlightEscapeSequences(highlight);
}

bool QsciLexerJSON_HighlightEscapeSequences(const QsciLexerJSON* self) {
	return self->highlightEscapeSequences();
}

void QsciLexerJSON_SetFoldCompact(QsciLexerJSON* self, bool fold) {
	self->setFoldCompact(fold);
}

bool QsciLexerJSON_FoldCompact(const QsciLexerJSON* self) {
	return self->foldCompact();
}

struct miqt_string QsciLexerJSON_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerJSON::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerJSON_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerJSON::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerJSON_Delete(QsciLexerJSON* self) {
	delete self;
}

