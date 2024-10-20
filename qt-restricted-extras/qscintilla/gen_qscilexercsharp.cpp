#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexercsharp.h>
#include "gen_qscilexercsharp.h"
#include "_cgo_export.h"

QsciLexerCSharp* QsciLexerCSharp_new() {
	return new QsciLexerCSharp();
}

QsciLexerCSharp* QsciLexerCSharp_new2(QObject* parent) {
	return new QsciLexerCSharp(parent);
}

QMetaObject* QsciLexerCSharp_MetaObject(const QsciLexerCSharp* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerCSharp_Metacast(QsciLexerCSharp* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerCSharp_Tr(const char* s) {
	QString _ret = QsciLexerCSharp::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCSharp_TrUtf8(const char* s) {
	QString _ret = QsciLexerCSharp::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerCSharp_Language(const QsciLexerCSharp* self) {
	return (const char*) self->language();
}

QColor* QsciLexerCSharp_DefaultColor(const QsciLexerCSharp* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerCSharp_DefaultEolFill(const QsciLexerCSharp* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerCSharp_DefaultFont(const QsciLexerCSharp* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerCSharp_DefaultPaper(const QsciLexerCSharp* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerCSharp_Keywords(const QsciLexerCSharp* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerCSharp_Description(const QsciLexerCSharp* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCSharp_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerCSharp::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCSharp_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerCSharp::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCSharp_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerCSharp::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCSharp_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerCSharp::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerCSharp_Delete(QsciLexerCSharp* self) {
	delete self;
}

