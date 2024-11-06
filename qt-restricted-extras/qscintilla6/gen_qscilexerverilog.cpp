#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerverilog.h>
#include "gen_qscilexerverilog.h"
#include "_cgo_export.h"

QsciLexerVerilog* QsciLexerVerilog_new() {
	return new QsciLexerVerilog();
}

QsciLexerVerilog* QsciLexerVerilog_new2(QObject* parent) {
	return new QsciLexerVerilog(parent);
}

QMetaObject* QsciLexerVerilog_MetaObject(const QsciLexerVerilog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerVerilog_Metacast(QsciLexerVerilog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerVerilog_Tr(const char* s) {
	QString _ret = QsciLexerVerilog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerVerilog_Language(const QsciLexerVerilog* self) {
	return (const char*) self->language();
}

const char* QsciLexerVerilog_Lexer(const QsciLexerVerilog* self) {
	return (const char*) self->lexer();
}

int QsciLexerVerilog_BraceStyle(const QsciLexerVerilog* self) {
	return self->braceStyle();
}

const char* QsciLexerVerilog_WordCharacters(const QsciLexerVerilog* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerVerilog_DefaultColor(const QsciLexerVerilog* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerVerilog_DefaultEolFill(const QsciLexerVerilog* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerVerilog_DefaultFont(const QsciLexerVerilog* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerVerilog_DefaultPaper(const QsciLexerVerilog* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerVerilog_Keywords(const QsciLexerVerilog* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerVerilog_Description(const QsciLexerVerilog* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerVerilog_RefreshProperties(QsciLexerVerilog* self) {
	self->refreshProperties();
}

void QsciLexerVerilog_SetFoldAtElse(QsciLexerVerilog* self, bool fold) {
	self->setFoldAtElse(fold);
}

bool QsciLexerVerilog_FoldAtElse(const QsciLexerVerilog* self) {
	return self->foldAtElse();
}

void QsciLexerVerilog_SetFoldComments(QsciLexerVerilog* self, bool fold) {
	self->setFoldComments(fold);
}

bool QsciLexerVerilog_FoldComments(const QsciLexerVerilog* self) {
	return self->foldComments();
}

void QsciLexerVerilog_SetFoldCompact(QsciLexerVerilog* self, bool fold) {
	self->setFoldCompact(fold);
}

bool QsciLexerVerilog_FoldCompact(const QsciLexerVerilog* self) {
	return self->foldCompact();
}

void QsciLexerVerilog_SetFoldPreprocessor(QsciLexerVerilog* self, bool fold) {
	self->setFoldPreprocessor(fold);
}

bool QsciLexerVerilog_FoldPreprocessor(const QsciLexerVerilog* self) {
	return self->foldPreprocessor();
}

void QsciLexerVerilog_SetFoldAtModule(QsciLexerVerilog* self, bool fold) {
	self->setFoldAtModule(fold);
}

bool QsciLexerVerilog_FoldAtModule(const QsciLexerVerilog* self) {
	return self->foldAtModule();
}

struct miqt_string QsciLexerVerilog_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerVerilog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerVerilog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerVerilog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerVerilog_Delete(QsciLexerVerilog* self) {
	delete self;
}

