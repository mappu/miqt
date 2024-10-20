#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerfortran77.h>
#include "gen_qscilexerfortran77.h"
#include "_cgo_export.h"

QsciLexerFortran77* QsciLexerFortran77_new() {
	return new QsciLexerFortran77();
}

QsciLexerFortran77* QsciLexerFortran77_new2(QObject* parent) {
	return new QsciLexerFortran77(parent);
}

QMetaObject* QsciLexerFortran77_MetaObject(const QsciLexerFortran77* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerFortran77_Metacast(QsciLexerFortran77* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerFortran77_Tr(const char* s) {
	QString _ret = QsciLexerFortran77::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerFortran77_TrUtf8(const char* s) {
	QString _ret = QsciLexerFortran77::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerFortran77_Language(const QsciLexerFortran77* self) {
	return (const char*) self->language();
}

const char* QsciLexerFortran77_Lexer(const QsciLexerFortran77* self) {
	return (const char*) self->lexer();
}

int QsciLexerFortran77_BraceStyle(const QsciLexerFortran77* self) {
	return self->braceStyle();
}

QColor* QsciLexerFortran77_DefaultColor(const QsciLexerFortran77* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerFortran77_DefaultEolFill(const QsciLexerFortran77* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerFortran77_DefaultFont(const QsciLexerFortran77* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerFortran77_DefaultPaper(const QsciLexerFortran77* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerFortran77_Keywords(const QsciLexerFortran77* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerFortran77_Description(const QsciLexerFortran77* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerFortran77_RefreshProperties(QsciLexerFortran77* self) {
	self->refreshProperties();
}

bool QsciLexerFortran77_FoldCompact(const QsciLexerFortran77* self) {
	return self->foldCompact();
}

void QsciLexerFortran77_SetFoldCompact(QsciLexerFortran77* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerFortran77_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerFortran77::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerFortran77_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerFortran77::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerFortran77_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerFortran77::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerFortran77_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerFortran77::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerFortran77_Delete(QsciLexerFortran77* self) {
	delete self;
}

