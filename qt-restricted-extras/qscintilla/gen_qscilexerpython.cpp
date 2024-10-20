#include <QColor>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerpython.h>
#include "gen_qscilexerpython.h"
#include "_cgo_export.h"

QsciLexerPython* QsciLexerPython_new() {
	return new QsciLexerPython();
}

QsciLexerPython* QsciLexerPython_new2(QObject* parent) {
	return new QsciLexerPython(parent);
}

QMetaObject* QsciLexerPython_MetaObject(const QsciLexerPython* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerPython_Metacast(QsciLexerPython* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerPython_Tr(const char* s) {
	QString _ret = QsciLexerPython::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPython_TrUtf8(const char* s) {
	QString _ret = QsciLexerPython::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPython_Language(const QsciLexerPython* self) {
	return (const char*) self->language();
}

const char* QsciLexerPython_Lexer(const QsciLexerPython* self) {
	return (const char*) self->lexer();
}

struct miqt_array* QsciLexerPython_AutoCompletionWordSeparators(const QsciLexerPython* self) {
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
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

int QsciLexerPython_BlockLookback(const QsciLexerPython* self) {
	return self->blockLookback();
}

const char* QsciLexerPython_BlockStart(const QsciLexerPython* self) {
	return (const char*) self->blockStart();
}

int QsciLexerPython_BraceStyle(const QsciLexerPython* self) {
	return self->braceStyle();
}

QColor* QsciLexerPython_DefaultColor(const QsciLexerPython* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerPython_DefaultEolFill(const QsciLexerPython* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerPython_DefaultFont(const QsciLexerPython* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPython_DefaultPaper(const QsciLexerPython* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

int QsciLexerPython_IndentationGuideView(const QsciLexerPython* self) {
	return self->indentationGuideView();
}

const char* QsciLexerPython_Keywords(const QsciLexerPython* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerPython_Description(const QsciLexerPython* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerPython_RefreshProperties(QsciLexerPython* self) {
	self->refreshProperties();
}

bool QsciLexerPython_FoldComments(const QsciLexerPython* self) {
	return self->foldComments();
}

void QsciLexerPython_SetFoldCompact(QsciLexerPython* self, bool fold) {
	self->setFoldCompact(fold);
}

bool QsciLexerPython_FoldCompact(const QsciLexerPython* self) {
	return self->foldCompact();
}

bool QsciLexerPython_FoldQuotes(const QsciLexerPython* self) {
	return self->foldQuotes();
}

int QsciLexerPython_IndentationWarning(const QsciLexerPython* self) {
	QsciLexerPython::IndentationWarning _ret = self->indentationWarning();
	return static_cast<int>(_ret);
}

void QsciLexerPython_SetHighlightSubidentifiers(QsciLexerPython* self, bool enabled) {
	self->setHighlightSubidentifiers(enabled);
}

bool QsciLexerPython_HighlightSubidentifiers(const QsciLexerPython* self) {
	return self->highlightSubidentifiers();
}

void QsciLexerPython_SetStringsOverNewlineAllowed(QsciLexerPython* self, bool allowed) {
	self->setStringsOverNewlineAllowed(allowed);
}

bool QsciLexerPython_StringsOverNewlineAllowed(const QsciLexerPython* self) {
	return self->stringsOverNewlineAllowed();
}

void QsciLexerPython_SetV2UnicodeAllowed(QsciLexerPython* self, bool allowed) {
	self->setV2UnicodeAllowed(allowed);
}

bool QsciLexerPython_V2UnicodeAllowed(const QsciLexerPython* self) {
	return self->v2UnicodeAllowed();
}

void QsciLexerPython_SetV3BinaryOctalAllowed(QsciLexerPython* self, bool allowed) {
	self->setV3BinaryOctalAllowed(allowed);
}

bool QsciLexerPython_V3BinaryOctalAllowed(const QsciLexerPython* self) {
	return self->v3BinaryOctalAllowed();
}

void QsciLexerPython_SetV3BytesAllowed(QsciLexerPython* self, bool allowed) {
	self->setV3BytesAllowed(allowed);
}

bool QsciLexerPython_V3BytesAllowed(const QsciLexerPython* self) {
	return self->v3BytesAllowed();
}

void QsciLexerPython_SetFoldComments(QsciLexerPython* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerPython_SetFoldQuotes(QsciLexerPython* self, bool fold) {
	self->setFoldQuotes(fold);
}

void QsciLexerPython_SetIndentationWarning(QsciLexerPython* self, int warn) {
	self->setIndentationWarning(static_cast<QsciLexerPython::IndentationWarning>(warn));
}

struct miqt_string QsciLexerPython_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerPython::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPython_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPython::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPython_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerPython::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPython_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPython::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPython_BlockStart1(const QsciLexerPython* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

void QsciLexerPython_Delete(QsciLexerPython* self) {
	delete self;
}

