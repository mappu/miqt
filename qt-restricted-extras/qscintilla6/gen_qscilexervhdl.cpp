#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexervhdl.h>
#include "gen_qscilexervhdl.h"
#include "_cgo_export.h"

QsciLexerVHDL* QsciLexerVHDL_new() {
	return new QsciLexerVHDL();
}

QsciLexerVHDL* QsciLexerVHDL_new2(QObject* parent) {
	return new QsciLexerVHDL(parent);
}

QMetaObject* QsciLexerVHDL_MetaObject(const QsciLexerVHDL* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerVHDL_Metacast(QsciLexerVHDL* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerVHDL_Tr(const char* s) {
	QString _ret = QsciLexerVHDL::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerVHDL_Language(const QsciLexerVHDL* self) {
	return (const char*) self->language();
}

const char* QsciLexerVHDL_Lexer(const QsciLexerVHDL* self) {
	return (const char*) self->lexer();
}

int QsciLexerVHDL_BraceStyle(const QsciLexerVHDL* self) {
	return self->braceStyle();
}

QColor* QsciLexerVHDL_DefaultColor(const QsciLexerVHDL* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerVHDL_DefaultEolFill(const QsciLexerVHDL* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerVHDL_DefaultFont(const QsciLexerVHDL* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerVHDL_DefaultPaper(const QsciLexerVHDL* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerVHDL_Keywords(const QsciLexerVHDL* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerVHDL_Description(const QsciLexerVHDL* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerVHDL_RefreshProperties(QsciLexerVHDL* self) {
	self->refreshProperties();
}

bool QsciLexerVHDL_FoldComments(const QsciLexerVHDL* self) {
	return self->foldComments();
}

bool QsciLexerVHDL_FoldCompact(const QsciLexerVHDL* self) {
	return self->foldCompact();
}

bool QsciLexerVHDL_FoldAtElse(const QsciLexerVHDL* self) {
	return self->foldAtElse();
}

bool QsciLexerVHDL_FoldAtBegin(const QsciLexerVHDL* self) {
	return self->foldAtBegin();
}

bool QsciLexerVHDL_FoldAtParenthesis(const QsciLexerVHDL* self) {
	return self->foldAtParenthesis();
}

void QsciLexerVHDL_SetFoldComments(QsciLexerVHDL* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerVHDL_SetFoldCompact(QsciLexerVHDL* self, bool fold) {
	self->setFoldCompact(fold);
}

void QsciLexerVHDL_SetFoldAtElse(QsciLexerVHDL* self, bool fold) {
	self->setFoldAtElse(fold);
}

void QsciLexerVHDL_SetFoldAtBegin(QsciLexerVHDL* self, bool fold) {
	self->setFoldAtBegin(fold);
}

void QsciLexerVHDL_SetFoldAtParenthesis(QsciLexerVHDL* self, bool fold) {
	self->setFoldAtParenthesis(fold);
}

struct miqt_string QsciLexerVHDL_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerVHDL::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerVHDL_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerVHDL::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerVHDL_Delete(QsciLexerVHDL* self) {
	delete self;
}

