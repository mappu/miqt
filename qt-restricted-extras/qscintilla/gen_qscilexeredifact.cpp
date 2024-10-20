#include <QColor>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexeredifact.h>
#include "gen_qscilexeredifact.h"
#include "_cgo_export.h"

QsciLexerEDIFACT* QsciLexerEDIFACT_new() {
	return new QsciLexerEDIFACT();
}

QsciLexerEDIFACT* QsciLexerEDIFACT_new2(QObject* parent) {
	return new QsciLexerEDIFACT(parent);
}

QMetaObject* QsciLexerEDIFACT_MetaObject(const QsciLexerEDIFACT* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerEDIFACT_Metacast(QsciLexerEDIFACT* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerEDIFACT_Tr(const char* s) {
	QString _ret = QsciLexerEDIFACT::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerEDIFACT_TrUtf8(const char* s) {
	QString _ret = QsciLexerEDIFACT::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerEDIFACT_Language(const QsciLexerEDIFACT* self) {
	return (const char*) self->language();
}

const char* QsciLexerEDIFACT_Lexer(const QsciLexerEDIFACT* self) {
	return (const char*) self->lexer();
}

QColor* QsciLexerEDIFACT_DefaultColor(const QsciLexerEDIFACT* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

struct miqt_string QsciLexerEDIFACT_Description(const QsciLexerEDIFACT* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerEDIFACT_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerEDIFACT::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerEDIFACT_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerEDIFACT::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerEDIFACT_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerEDIFACT::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerEDIFACT_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerEDIFACT::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerEDIFACT_Delete(QsciLexerEDIFACT* self) {
	delete self;
}

