#include <QColor>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexercoffeescript.h>
#include "gen_qscilexercoffeescript.h"
#include "_cgo_export.h"

QsciLexerCoffeeScript* QsciLexerCoffeeScript_new() {
	return new QsciLexerCoffeeScript();
}

QsciLexerCoffeeScript* QsciLexerCoffeeScript_new2(QObject* parent) {
	return new QsciLexerCoffeeScript(parent);
}

QMetaObject* QsciLexerCoffeeScript_MetaObject(const QsciLexerCoffeeScript* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerCoffeeScript_Metacast(QsciLexerCoffeeScript* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerCoffeeScript_Tr(const char* s) {
	QString _ret = QsciLexerCoffeeScript::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerCoffeeScript_Language(const QsciLexerCoffeeScript* self) {
	return (const char*) self->language();
}

const char* QsciLexerCoffeeScript_Lexer(const QsciLexerCoffeeScript* self) {
	return (const char*) self->lexer();
}

struct miqt_array /* of struct miqt_string */  QsciLexerCoffeeScript_AutoCompletionWordSeparators(const QsciLexerCoffeeScript* self) {
	QStringList _ret = self->autoCompletionWordSeparators();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

const char* QsciLexerCoffeeScript_BlockEnd(const QsciLexerCoffeeScript* self) {
	return (const char*) self->blockEnd();
}

const char* QsciLexerCoffeeScript_BlockStart(const QsciLexerCoffeeScript* self) {
	return (const char*) self->blockStart();
}

const char* QsciLexerCoffeeScript_BlockStartKeyword(const QsciLexerCoffeeScript* self) {
	return (const char*) self->blockStartKeyword();
}

int QsciLexerCoffeeScript_BraceStyle(const QsciLexerCoffeeScript* self) {
	return self->braceStyle();
}

const char* QsciLexerCoffeeScript_WordCharacters(const QsciLexerCoffeeScript* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerCoffeeScript_DefaultColor(const QsciLexerCoffeeScript* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerCoffeeScript_DefaultEolFill(const QsciLexerCoffeeScript* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerCoffeeScript_DefaultFont(const QsciLexerCoffeeScript* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerCoffeeScript_DefaultPaper(const QsciLexerCoffeeScript* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerCoffeeScript_Keywords(const QsciLexerCoffeeScript* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerCoffeeScript_Description(const QsciLexerCoffeeScript* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerCoffeeScript_RefreshProperties(QsciLexerCoffeeScript* self) {
	self->refreshProperties();
}

bool QsciLexerCoffeeScript_DollarsAllowed(const QsciLexerCoffeeScript* self) {
	return self->dollarsAllowed();
}

void QsciLexerCoffeeScript_SetDollarsAllowed(QsciLexerCoffeeScript* self, bool allowed) {
	self->setDollarsAllowed(allowed);
}

bool QsciLexerCoffeeScript_FoldComments(const QsciLexerCoffeeScript* self) {
	return self->foldComments();
}

void QsciLexerCoffeeScript_SetFoldComments(QsciLexerCoffeeScript* self, bool fold) {
	self->setFoldComments(fold);
}

bool QsciLexerCoffeeScript_FoldCompact(const QsciLexerCoffeeScript* self) {
	return self->foldCompact();
}

void QsciLexerCoffeeScript_SetFoldCompact(QsciLexerCoffeeScript* self, bool fold) {
	self->setFoldCompact(fold);
}

bool QsciLexerCoffeeScript_StylePreprocessor(const QsciLexerCoffeeScript* self) {
	return self->stylePreprocessor();
}

void QsciLexerCoffeeScript_SetStylePreprocessor(QsciLexerCoffeeScript* self, bool style) {
	self->setStylePreprocessor(style);
}

struct miqt_string QsciLexerCoffeeScript_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerCoffeeScript::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCoffeeScript_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerCoffeeScript::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerCoffeeScript_BlockEnd1(const QsciLexerCoffeeScript* self, int* style) {
	return (const char*) self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerCoffeeScript_BlockStart1(const QsciLexerCoffeeScript* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerCoffeeScript_BlockStartKeyword1(const QsciLexerCoffeeScript* self, int* style) {
	return (const char*) self->blockStartKeyword(static_cast<int*>(style));
}

void QsciLexerCoffeeScript_Delete(QsciLexerCoffeeScript* self) {
	delete self;
}

