#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerpov.h>
#include "gen_qscilexerpov.h"
#include "_cgo_export.h"

QsciLexerPOV* QsciLexerPOV_new() {
	return new QsciLexerPOV();
}

QsciLexerPOV* QsciLexerPOV_new2(QObject* parent) {
	return new QsciLexerPOV(parent);
}

QMetaObject* QsciLexerPOV_MetaObject(const QsciLexerPOV* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerPOV_Metacast(QsciLexerPOV* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerPOV_Tr(const char* s) {
	QString _ret = QsciLexerPOV::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPOV_TrUtf8(const char* s) {
	QString _ret = QsciLexerPOV::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPOV_Language(const QsciLexerPOV* self) {
	return (const char*) self->language();
}

const char* QsciLexerPOV_Lexer(const QsciLexerPOV* self) {
	return (const char*) self->lexer();
}

int QsciLexerPOV_BraceStyle(const QsciLexerPOV* self) {
	return self->braceStyle();
}

const char* QsciLexerPOV_WordCharacters(const QsciLexerPOV* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerPOV_DefaultColor(const QsciLexerPOV* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerPOV_DefaultEolFill(const QsciLexerPOV* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerPOV_DefaultFont(const QsciLexerPOV* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPOV_DefaultPaper(const QsciLexerPOV* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerPOV_Keywords(const QsciLexerPOV* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerPOV_Description(const QsciLexerPOV* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerPOV_RefreshProperties(QsciLexerPOV* self) {
	self->refreshProperties();
}

bool QsciLexerPOV_FoldComments(const QsciLexerPOV* self) {
	return self->foldComments();
}

bool QsciLexerPOV_FoldCompact(const QsciLexerPOV* self) {
	return self->foldCompact();
}

bool QsciLexerPOV_FoldDirectives(const QsciLexerPOV* self) {
	return self->foldDirectives();
}

void QsciLexerPOV_SetFoldComments(QsciLexerPOV* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerPOV_SetFoldCompact(QsciLexerPOV* self, bool fold) {
	self->setFoldCompact(fold);
}

void QsciLexerPOV_SetFoldDirectives(QsciLexerPOV* self, bool fold) {
	self->setFoldDirectives(fold);
}

struct miqt_string QsciLexerPOV_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerPOV::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPOV_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPOV::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPOV_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerPOV::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPOV_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPOV::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerPOV_Delete(QsciLexerPOV* self) {
	delete self;
}

