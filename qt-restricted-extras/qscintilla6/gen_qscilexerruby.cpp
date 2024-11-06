#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerruby.h>
#include "gen_qscilexerruby.h"
#include "_cgo_export.h"

QsciLexerRuby* QsciLexerRuby_new() {
	return new QsciLexerRuby();
}

QsciLexerRuby* QsciLexerRuby_new2(QObject* parent) {
	return new QsciLexerRuby(parent);
}

QMetaObject* QsciLexerRuby_MetaObject(const QsciLexerRuby* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerRuby_Metacast(QsciLexerRuby* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerRuby_Tr(const char* s) {
	QString _ret = QsciLexerRuby::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerRuby_Language(const QsciLexerRuby* self) {
	return (const char*) self->language();
}

const char* QsciLexerRuby_Lexer(const QsciLexerRuby* self) {
	return (const char*) self->lexer();
}

const char* QsciLexerRuby_BlockEnd(const QsciLexerRuby* self) {
	return (const char*) self->blockEnd();
}

const char* QsciLexerRuby_BlockStart(const QsciLexerRuby* self) {
	return (const char*) self->blockStart();
}

const char* QsciLexerRuby_BlockStartKeyword(const QsciLexerRuby* self) {
	return (const char*) self->blockStartKeyword();
}

int QsciLexerRuby_BraceStyle(const QsciLexerRuby* self) {
	return self->braceStyle();
}

QColor* QsciLexerRuby_DefaultColor(const QsciLexerRuby* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerRuby_DefaultEolFill(const QsciLexerRuby* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerRuby_DefaultFont(const QsciLexerRuby* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerRuby_DefaultPaper(const QsciLexerRuby* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerRuby_Keywords(const QsciLexerRuby* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerRuby_Description(const QsciLexerRuby* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerRuby_RefreshProperties(QsciLexerRuby* self) {
	self->refreshProperties();
}

void QsciLexerRuby_SetFoldComments(QsciLexerRuby* self, bool fold) {
	self->setFoldComments(fold);
}

bool QsciLexerRuby_FoldComments(const QsciLexerRuby* self) {
	return self->foldComments();
}

void QsciLexerRuby_SetFoldCompact(QsciLexerRuby* self, bool fold) {
	self->setFoldCompact(fold);
}

bool QsciLexerRuby_FoldCompact(const QsciLexerRuby* self) {
	return self->foldCompact();
}

struct miqt_string QsciLexerRuby_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerRuby::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerRuby_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerRuby::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerRuby_BlockEnd1(const QsciLexerRuby* self, int* style) {
	return (const char*) self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerRuby_BlockStart1(const QsciLexerRuby* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerRuby_BlockStartKeyword1(const QsciLexerRuby* self, int* style) {
	return (const char*) self->blockStartKeyword(static_cast<int*>(style));
}

void QsciLexerRuby_Delete(QsciLexerRuby* self) {
	delete self;
}

