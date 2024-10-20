#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexeravs.h>
#include "gen_qscilexeravs.h"
#include "_cgo_export.h"

QsciLexerAVS* QsciLexerAVS_new() {
	return new QsciLexerAVS();
}

QsciLexerAVS* QsciLexerAVS_new2(QObject* parent) {
	return new QsciLexerAVS(parent);
}

QMetaObject* QsciLexerAVS_MetaObject(const QsciLexerAVS* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerAVS_Metacast(QsciLexerAVS* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerAVS_Tr(const char* s) {
	QString _ret = QsciLexerAVS::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerAVS_TrUtf8(const char* s) {
	QString _ret = QsciLexerAVS::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerAVS_Language(const QsciLexerAVS* self) {
	return (const char*) self->language();
}

const char* QsciLexerAVS_Lexer(const QsciLexerAVS* self) {
	return (const char*) self->lexer();
}

int QsciLexerAVS_BraceStyle(const QsciLexerAVS* self) {
	return self->braceStyle();
}

const char* QsciLexerAVS_WordCharacters(const QsciLexerAVS* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerAVS_DefaultColor(const QsciLexerAVS* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerAVS_DefaultFont(const QsciLexerAVS* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

const char* QsciLexerAVS_Keywords(const QsciLexerAVS* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerAVS_Description(const QsciLexerAVS* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerAVS_RefreshProperties(QsciLexerAVS* self) {
	self->refreshProperties();
}

bool QsciLexerAVS_FoldComments(const QsciLexerAVS* self) {
	return self->foldComments();
}

bool QsciLexerAVS_FoldCompact(const QsciLexerAVS* self) {
	return self->foldCompact();
}

void QsciLexerAVS_SetFoldComments(QsciLexerAVS* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerAVS_SetFoldCompact(QsciLexerAVS* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerAVS_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerAVS::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerAVS_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerAVS::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerAVS_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerAVS::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerAVS_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerAVS::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerAVS_Delete(QsciLexerAVS* self) {
	delete self;
}

