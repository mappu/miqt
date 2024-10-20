#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerproperties.h>
#include "gen_qscilexerproperties.h"
#include "_cgo_export.h"

QsciLexerProperties* QsciLexerProperties_new() {
	return new QsciLexerProperties();
}

QsciLexerProperties* QsciLexerProperties_new2(QObject* parent) {
	return new QsciLexerProperties(parent);
}

QMetaObject* QsciLexerProperties_MetaObject(const QsciLexerProperties* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerProperties_Metacast(QsciLexerProperties* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerProperties_Tr(const char* s) {
	QString _ret = QsciLexerProperties::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerProperties_TrUtf8(const char* s) {
	QString _ret = QsciLexerProperties::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerProperties_Language(const QsciLexerProperties* self) {
	return (const char*) self->language();
}

const char* QsciLexerProperties_Lexer(const QsciLexerProperties* self) {
	return (const char*) self->lexer();
}

const char* QsciLexerProperties_WordCharacters(const QsciLexerProperties* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerProperties_DefaultColor(const QsciLexerProperties* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerProperties_DefaultEolFill(const QsciLexerProperties* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerProperties_DefaultFont(const QsciLexerProperties* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerProperties_DefaultPaper(const QsciLexerProperties* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

struct miqt_string QsciLexerProperties_Description(const QsciLexerProperties* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerProperties_RefreshProperties(QsciLexerProperties* self) {
	self->refreshProperties();
}

bool QsciLexerProperties_FoldCompact(const QsciLexerProperties* self) {
	return self->foldCompact();
}

void QsciLexerProperties_SetInitialSpaces(QsciLexerProperties* self, bool enable) {
	self->setInitialSpaces(enable);
}

bool QsciLexerProperties_InitialSpaces(const QsciLexerProperties* self) {
	return self->initialSpaces();
}

void QsciLexerProperties_SetFoldCompact(QsciLexerProperties* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerProperties_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerProperties::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerProperties_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerProperties::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerProperties_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerProperties::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerProperties_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerProperties::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerProperties_Delete(QsciLexerProperties* self) {
	delete self;
}

