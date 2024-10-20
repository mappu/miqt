#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerpostscript.h>
#include "gen_qscilexerpostscript.h"
#include "_cgo_export.h"

QsciLexerPostScript* QsciLexerPostScript_new() {
	return new QsciLexerPostScript();
}

QsciLexerPostScript* QsciLexerPostScript_new2(QObject* parent) {
	return new QsciLexerPostScript(parent);
}

QMetaObject* QsciLexerPostScript_MetaObject(const QsciLexerPostScript* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerPostScript_Metacast(QsciLexerPostScript* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerPostScript_Tr(const char* s) {
	QString _ret = QsciLexerPostScript::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPostScript_TrUtf8(const char* s) {
	QString _ret = QsciLexerPostScript::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPostScript_Language(const QsciLexerPostScript* self) {
	return (const char*) self->language();
}

const char* QsciLexerPostScript_Lexer(const QsciLexerPostScript* self) {
	return (const char*) self->lexer();
}

int QsciLexerPostScript_BraceStyle(const QsciLexerPostScript* self) {
	return self->braceStyle();
}

QColor* QsciLexerPostScript_DefaultColor(const QsciLexerPostScript* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerPostScript_DefaultFont(const QsciLexerPostScript* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPostScript_DefaultPaper(const QsciLexerPostScript* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerPostScript_Keywords(const QsciLexerPostScript* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerPostScript_Description(const QsciLexerPostScript* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerPostScript_RefreshProperties(QsciLexerPostScript* self) {
	self->refreshProperties();
}

bool QsciLexerPostScript_Tokenize(const QsciLexerPostScript* self) {
	return self->tokenize();
}

int QsciLexerPostScript_Level(const QsciLexerPostScript* self) {
	return self->level();
}

bool QsciLexerPostScript_FoldCompact(const QsciLexerPostScript* self) {
	return self->foldCompact();
}

bool QsciLexerPostScript_FoldAtElse(const QsciLexerPostScript* self) {
	return self->foldAtElse();
}

void QsciLexerPostScript_SetTokenize(QsciLexerPostScript* self, bool tokenize) {
	self->setTokenize(tokenize);
}

void QsciLexerPostScript_SetLevel(QsciLexerPostScript* self, int level) {
	self->setLevel(static_cast<int>(level));
}

void QsciLexerPostScript_SetFoldCompact(QsciLexerPostScript* self, bool fold) {
	self->setFoldCompact(fold);
}

void QsciLexerPostScript_SetFoldAtElse(QsciLexerPostScript* self, bool fold) {
	self->setFoldAtElse(fold);
}

struct miqt_string QsciLexerPostScript_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerPostScript::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPostScript_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPostScript::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPostScript_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerPostScript::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPostScript_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPostScript::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerPostScript_Delete(QsciLexerPostScript* self) {
	delete self;
}

