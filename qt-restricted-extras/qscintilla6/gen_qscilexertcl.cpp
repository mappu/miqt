#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexertcl.h>
#include "gen_qscilexertcl.h"
#include "_cgo_export.h"

QsciLexerTCL* QsciLexerTCL_new() {
	return new QsciLexerTCL();
}

QsciLexerTCL* QsciLexerTCL_new2(QObject* parent) {
	return new QsciLexerTCL(parent);
}

QMetaObject* QsciLexerTCL_MetaObject(const QsciLexerTCL* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerTCL_Metacast(QsciLexerTCL* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerTCL_Tr(const char* s) {
	QString _ret = QsciLexerTCL::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerTCL_Language(const QsciLexerTCL* self) {
	return (const char*) self->language();
}

const char* QsciLexerTCL_Lexer(const QsciLexerTCL* self) {
	return (const char*) self->lexer();
}

int QsciLexerTCL_BraceStyle(const QsciLexerTCL* self) {
	return self->braceStyle();
}

QColor* QsciLexerTCL_DefaultColor(const QsciLexerTCL* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerTCL_DefaultEolFill(const QsciLexerTCL* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerTCL_DefaultFont(const QsciLexerTCL* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerTCL_DefaultPaper(const QsciLexerTCL* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerTCL_Keywords(const QsciLexerTCL* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerTCL_Description(const QsciLexerTCL* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerTCL_RefreshProperties(QsciLexerTCL* self) {
	self->refreshProperties();
}

void QsciLexerTCL_SetFoldComments(QsciLexerTCL* self, bool fold) {
	self->setFoldComments(fold);
}

bool QsciLexerTCL_FoldComments(const QsciLexerTCL* self) {
	return self->foldComments();
}

struct miqt_string QsciLexerTCL_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerTCL::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerTCL_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerTCL::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerTCL_Delete(QsciLexerTCL* self) {
	delete self;
}

