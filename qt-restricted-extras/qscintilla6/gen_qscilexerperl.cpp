#include <QColor>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerperl.h>
#include "gen_qscilexerperl.h"
#include "_cgo_export.h"

QsciLexerPerl* QsciLexerPerl_new() {
	return new QsciLexerPerl();
}

QsciLexerPerl* QsciLexerPerl_new2(QObject* parent) {
	return new QsciLexerPerl(parent);
}

QMetaObject* QsciLexerPerl_MetaObject(const QsciLexerPerl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerPerl_Metacast(QsciLexerPerl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerPerl_Tr(const char* s) {
	QString _ret = QsciLexerPerl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPerl_Language(const QsciLexerPerl* self) {
	return (const char*) self->language();
}

const char* QsciLexerPerl_Lexer(const QsciLexerPerl* self) {
	return (const char*) self->lexer();
}

struct miqt_array QsciLexerPerl_AutoCompletionWordSeparators(const QsciLexerPerl* self) {
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

const char* QsciLexerPerl_BlockEnd(const QsciLexerPerl* self) {
	return (const char*) self->blockEnd();
}

const char* QsciLexerPerl_BlockStart(const QsciLexerPerl* self) {
	return (const char*) self->blockStart();
}

int QsciLexerPerl_BraceStyle(const QsciLexerPerl* self) {
	return self->braceStyle();
}

const char* QsciLexerPerl_WordCharacters(const QsciLexerPerl* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerPerl_DefaultColor(const QsciLexerPerl* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerPerl_DefaultEolFill(const QsciLexerPerl* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerPerl_DefaultFont(const QsciLexerPerl* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPerl_DefaultPaper(const QsciLexerPerl* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerPerl_Keywords(const QsciLexerPerl* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerPerl_Description(const QsciLexerPerl* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerPerl_RefreshProperties(QsciLexerPerl* self) {
	self->refreshProperties();
}

void QsciLexerPerl_SetFoldAtElse(QsciLexerPerl* self, bool fold) {
	self->setFoldAtElse(fold);
}

bool QsciLexerPerl_FoldAtElse(const QsciLexerPerl* self) {
	return self->foldAtElse();
}

bool QsciLexerPerl_FoldComments(const QsciLexerPerl* self) {
	return self->foldComments();
}

bool QsciLexerPerl_FoldCompact(const QsciLexerPerl* self) {
	return self->foldCompact();
}

void QsciLexerPerl_SetFoldPackages(QsciLexerPerl* self, bool fold) {
	self->setFoldPackages(fold);
}

bool QsciLexerPerl_FoldPackages(const QsciLexerPerl* self) {
	return self->foldPackages();
}

void QsciLexerPerl_SetFoldPODBlocks(QsciLexerPerl* self, bool fold) {
	self->setFoldPODBlocks(fold);
}

bool QsciLexerPerl_FoldPODBlocks(const QsciLexerPerl* self) {
	return self->foldPODBlocks();
}

void QsciLexerPerl_SetFoldComments(QsciLexerPerl* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerPerl_SetFoldCompact(QsciLexerPerl* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerPerl_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerPerl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPerl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPerl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPerl_BlockEnd1(const QsciLexerPerl* self, int* style) {
	return (const char*) self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerPerl_BlockStart1(const QsciLexerPerl* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

void QsciLexerPerl_Delete(QsciLexerPerl* self) {
	delete self;
}

