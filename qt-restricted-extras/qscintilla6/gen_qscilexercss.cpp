#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexercss.h>
#include "gen_qscilexercss.h"
#include "_cgo_export.h"

QsciLexerCSS* QsciLexerCSS_new() {
	return new QsciLexerCSS();
}

QsciLexerCSS* QsciLexerCSS_new2(QObject* parent) {
	return new QsciLexerCSS(parent);
}

QMetaObject* QsciLexerCSS_MetaObject(const QsciLexerCSS* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerCSS_Metacast(QsciLexerCSS* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerCSS_Tr(const char* s) {
	QString _ret = QsciLexerCSS::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerCSS_Language(const QsciLexerCSS* self) {
	return (const char*) self->language();
}

const char* QsciLexerCSS_Lexer(const QsciLexerCSS* self) {
	return (const char*) self->lexer();
}

const char* QsciLexerCSS_BlockEnd(const QsciLexerCSS* self) {
	return (const char*) self->blockEnd();
}

const char* QsciLexerCSS_BlockStart(const QsciLexerCSS* self) {
	return (const char*) self->blockStart();
}

const char* QsciLexerCSS_WordCharacters(const QsciLexerCSS* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerCSS_DefaultColor(const QsciLexerCSS* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerCSS_DefaultFont(const QsciLexerCSS* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

const char* QsciLexerCSS_Keywords(const QsciLexerCSS* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerCSS_Description(const QsciLexerCSS* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerCSS_RefreshProperties(QsciLexerCSS* self) {
	self->refreshProperties();
}

bool QsciLexerCSS_FoldComments(const QsciLexerCSS* self) {
	return self->foldComments();
}

bool QsciLexerCSS_FoldCompact(const QsciLexerCSS* self) {
	return self->foldCompact();
}

void QsciLexerCSS_SetHSSLanguage(QsciLexerCSS* self, bool enabled) {
	self->setHSSLanguage(enabled);
}

bool QsciLexerCSS_HSSLanguage(const QsciLexerCSS* self) {
	return self->HSSLanguage();
}

void QsciLexerCSS_SetLessLanguage(QsciLexerCSS* self, bool enabled) {
	self->setLessLanguage(enabled);
}

bool QsciLexerCSS_LessLanguage(const QsciLexerCSS* self) {
	return self->LessLanguage();
}

void QsciLexerCSS_SetSCSSLanguage(QsciLexerCSS* self, bool enabled) {
	self->setSCSSLanguage(enabled);
}

bool QsciLexerCSS_SCSSLanguage(const QsciLexerCSS* self) {
	return self->SCSSLanguage();
}

void QsciLexerCSS_SetFoldComments(QsciLexerCSS* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerCSS_SetFoldCompact(QsciLexerCSS* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerCSS_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerCSS::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCSS_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerCSS::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerCSS_BlockEnd1(const QsciLexerCSS* self, int* style) {
	return (const char*) self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerCSS_BlockStart1(const QsciLexerCSS* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

void QsciLexerCSS_Delete(QsciLexerCSS* self) {
	delete self;
}

