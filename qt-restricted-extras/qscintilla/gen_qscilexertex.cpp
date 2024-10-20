#include <QColor>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexertex.h>
#include "gen_qscilexertex.h"
#include "_cgo_export.h"

QsciLexerTeX* QsciLexerTeX_new() {
	return new QsciLexerTeX();
}

QsciLexerTeX* QsciLexerTeX_new2(QObject* parent) {
	return new QsciLexerTeX(parent);
}

QMetaObject* QsciLexerTeX_MetaObject(const QsciLexerTeX* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerTeX_Metacast(QsciLexerTeX* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerTeX_Tr(const char* s) {
	QString _ret = QsciLexerTeX::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerTeX_TrUtf8(const char* s) {
	QString _ret = QsciLexerTeX::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerTeX_Language(const QsciLexerTeX* self) {
	return (const char*) self->language();
}

const char* QsciLexerTeX_Lexer(const QsciLexerTeX* self) {
	return (const char*) self->lexer();
}

const char* QsciLexerTeX_WordCharacters(const QsciLexerTeX* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerTeX_DefaultColor(const QsciLexerTeX* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

const char* QsciLexerTeX_Keywords(const QsciLexerTeX* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerTeX_Description(const QsciLexerTeX* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerTeX_RefreshProperties(QsciLexerTeX* self) {
	self->refreshProperties();
}

void QsciLexerTeX_SetFoldComments(QsciLexerTeX* self, bool fold) {
	self->setFoldComments(fold);
}

bool QsciLexerTeX_FoldComments(const QsciLexerTeX* self) {
	return self->foldComments();
}

void QsciLexerTeX_SetFoldCompact(QsciLexerTeX* self, bool fold) {
	self->setFoldCompact(fold);
}

bool QsciLexerTeX_FoldCompact(const QsciLexerTeX* self) {
	return self->foldCompact();
}

void QsciLexerTeX_SetProcessComments(QsciLexerTeX* self, bool enable) {
	self->setProcessComments(enable);
}

bool QsciLexerTeX_ProcessComments(const QsciLexerTeX* self) {
	return self->processComments();
}

void QsciLexerTeX_SetProcessIf(QsciLexerTeX* self, bool enable) {
	self->setProcessIf(enable);
}

bool QsciLexerTeX_ProcessIf(const QsciLexerTeX* self) {
	return self->processIf();
}

struct miqt_string QsciLexerTeX_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerTeX::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerTeX_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerTeX::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerTeX_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerTeX::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerTeX_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerTeX::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerTeX_Delete(QsciLexerTeX* self) {
	delete self;
}

