#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerbash.h>
#include "gen_qscilexerbash.h"
#include "_cgo_export.h"

QsciLexerBash* QsciLexerBash_new() {
	return new QsciLexerBash();
}

QsciLexerBash* QsciLexerBash_new2(QObject* parent) {
	return new QsciLexerBash(parent);
}

QMetaObject* QsciLexerBash_MetaObject(const QsciLexerBash* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerBash_Metacast(QsciLexerBash* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerBash_Tr(const char* s) {
	QString _ret = QsciLexerBash::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerBash_TrUtf8(const char* s) {
	QString _ret = QsciLexerBash::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerBash_Language(const QsciLexerBash* self) {
	return (const char*) self->language();
}

const char* QsciLexerBash_Lexer(const QsciLexerBash* self) {
	return (const char*) self->lexer();
}

int QsciLexerBash_BraceStyle(const QsciLexerBash* self) {
	return self->braceStyle();
}

const char* QsciLexerBash_WordCharacters(const QsciLexerBash* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerBash_DefaultColor(const QsciLexerBash* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerBash_DefaultEolFill(const QsciLexerBash* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerBash_DefaultFont(const QsciLexerBash* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerBash_DefaultPaper(const QsciLexerBash* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerBash_Keywords(const QsciLexerBash* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerBash_Description(const QsciLexerBash* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerBash_RefreshProperties(QsciLexerBash* self) {
	self->refreshProperties();
}

bool QsciLexerBash_FoldComments(const QsciLexerBash* self) {
	return self->foldComments();
}

bool QsciLexerBash_FoldCompact(const QsciLexerBash* self) {
	return self->foldCompact();
}

void QsciLexerBash_SetFoldComments(QsciLexerBash* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerBash_SetFoldCompact(QsciLexerBash* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerBash_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerBash::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerBash_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerBash::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerBash_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerBash::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerBash_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerBash::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerBash_Delete(QsciLexerBash* self) {
	delete self;
}

