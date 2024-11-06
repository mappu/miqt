#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerxml.h>
#include "gen_qscilexerxml.h"
#include "_cgo_export.h"

QsciLexerXML* QsciLexerXML_new() {
	return new QsciLexerXML();
}

QsciLexerXML* QsciLexerXML_new2(QObject* parent) {
	return new QsciLexerXML(parent);
}

QMetaObject* QsciLexerXML_MetaObject(const QsciLexerXML* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerXML_Metacast(QsciLexerXML* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerXML_Tr(const char* s) {
	QString _ret = QsciLexerXML::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerXML_Language(const QsciLexerXML* self) {
	return (const char*) self->language();
}

const char* QsciLexerXML_Lexer(const QsciLexerXML* self) {
	return (const char*) self->lexer();
}

QColor* QsciLexerXML_DefaultColor(const QsciLexerXML* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerXML_DefaultEolFill(const QsciLexerXML* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerXML_DefaultFont(const QsciLexerXML* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerXML_DefaultPaper(const QsciLexerXML* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerXML_Keywords(const QsciLexerXML* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

void QsciLexerXML_RefreshProperties(QsciLexerXML* self) {
	self->refreshProperties();
}

void QsciLexerXML_SetScriptsStyled(QsciLexerXML* self, bool styled) {
	self->setScriptsStyled(styled);
}

bool QsciLexerXML_ScriptsStyled(const QsciLexerXML* self) {
	return self->scriptsStyled();
}

struct miqt_string QsciLexerXML_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerXML::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerXML_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerXML::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerXML_Delete(QsciLexerXML* self) {
	delete self;
}

