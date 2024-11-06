#include <QColor>
#include <QFont>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerpo.h>
#include "gen_qscilexerpo.h"
#include "_cgo_export.h"

QsciLexerPO* QsciLexerPO_new() {
	return new QsciLexerPO();
}

QsciLexerPO* QsciLexerPO_new2(QObject* parent) {
	return new QsciLexerPO(parent);
}

QMetaObject* QsciLexerPO_MetaObject(const QsciLexerPO* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerPO_Metacast(QsciLexerPO* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerPO_Tr(const char* s) {
	QString _ret = QsciLexerPO::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPO_Language(const QsciLexerPO* self) {
	return (const char*) self->language();
}

const char* QsciLexerPO_Lexer(const QsciLexerPO* self) {
	return (const char*) self->lexer();
}

QColor* QsciLexerPO_DefaultColor(const QsciLexerPO* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerPO_DefaultFont(const QsciLexerPO* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

struct miqt_string QsciLexerPO_Description(const QsciLexerPO* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerPO_RefreshProperties(QsciLexerPO* self) {
	self->refreshProperties();
}

bool QsciLexerPO_FoldComments(const QsciLexerPO* self) {
	return self->foldComments();
}

bool QsciLexerPO_FoldCompact(const QsciLexerPO* self) {
	return self->foldCompact();
}

void QsciLexerPO_SetFoldComments(QsciLexerPO* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerPO_SetFoldCompact(QsciLexerPO* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerPO_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerPO::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPO_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPO::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerPO_Delete(QsciLexerPO* self) {
	delete self;
}

