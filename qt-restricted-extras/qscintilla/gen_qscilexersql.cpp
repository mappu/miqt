#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexersql.h>
#include "gen_qscilexersql.h"
#include "_cgo_export.h"

QsciLexerSQL* QsciLexerSQL_new() {
	return new QsciLexerSQL();
}

QsciLexerSQL* QsciLexerSQL_new2(QObject* parent) {
	return new QsciLexerSQL(parent);
}

QMetaObject* QsciLexerSQL_MetaObject(const QsciLexerSQL* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerSQL_Metacast(QsciLexerSQL* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerSQL_Tr(const char* s) {
	QString _ret = QsciLexerSQL::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerSQL_TrUtf8(const char* s) {
	QString _ret = QsciLexerSQL::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerSQL_Language(const QsciLexerSQL* self) {
	return (const char*) self->language();
}

const char* QsciLexerSQL_Lexer(const QsciLexerSQL* self) {
	return (const char*) self->lexer();
}

int QsciLexerSQL_BraceStyle(const QsciLexerSQL* self) {
	return self->braceStyle();
}

QColor* QsciLexerSQL_DefaultColor(const QsciLexerSQL* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerSQL_DefaultEolFill(const QsciLexerSQL* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerSQL_DefaultFont(const QsciLexerSQL* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerSQL_DefaultPaper(const QsciLexerSQL* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerSQL_Keywords(const QsciLexerSQL* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerSQL_Description(const QsciLexerSQL* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerSQL_RefreshProperties(QsciLexerSQL* self) {
	self->refreshProperties();
}

bool QsciLexerSQL_BackslashEscapes(const QsciLexerSQL* self) {
	return self->backslashEscapes();
}

void QsciLexerSQL_SetDottedWords(QsciLexerSQL* self, bool enable) {
	self->setDottedWords(enable);
}

bool QsciLexerSQL_DottedWords(const QsciLexerSQL* self) {
	return self->dottedWords();
}

void QsciLexerSQL_SetFoldAtElse(QsciLexerSQL* self, bool fold) {
	self->setFoldAtElse(fold);
}

bool QsciLexerSQL_FoldAtElse(const QsciLexerSQL* self) {
	return self->foldAtElse();
}

bool QsciLexerSQL_FoldComments(const QsciLexerSQL* self) {
	return self->foldComments();
}

bool QsciLexerSQL_FoldCompact(const QsciLexerSQL* self) {
	return self->foldCompact();
}

void QsciLexerSQL_SetFoldOnlyBegin(QsciLexerSQL* self, bool fold) {
	self->setFoldOnlyBegin(fold);
}

bool QsciLexerSQL_FoldOnlyBegin(const QsciLexerSQL* self) {
	return self->foldOnlyBegin();
}

void QsciLexerSQL_SetHashComments(QsciLexerSQL* self, bool enable) {
	self->setHashComments(enable);
}

bool QsciLexerSQL_HashComments(const QsciLexerSQL* self) {
	return self->hashComments();
}

void QsciLexerSQL_SetQuotedIdentifiers(QsciLexerSQL* self, bool enable) {
	self->setQuotedIdentifiers(enable);
}

bool QsciLexerSQL_QuotedIdentifiers(const QsciLexerSQL* self) {
	return self->quotedIdentifiers();
}

void QsciLexerSQL_SetBackslashEscapes(QsciLexerSQL* self, bool enable) {
	self->setBackslashEscapes(enable);
}

void QsciLexerSQL_SetFoldComments(QsciLexerSQL* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerSQL_SetFoldCompact(QsciLexerSQL* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerSQL_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerSQL::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerSQL_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerSQL::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerSQL_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerSQL::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerSQL_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerSQL::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerSQL_Delete(QsciLexerSQL* self) {
	delete self;
}

