#include <QColor>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexercpp.h>
#include "gen_qscilexercpp.h"
#include "_cgo_export.h"

QsciLexerCPP* QsciLexerCPP_new() {
	return new QsciLexerCPP();
}

QsciLexerCPP* QsciLexerCPP_new2(QObject* parent) {
	return new QsciLexerCPP(parent);
}

QsciLexerCPP* QsciLexerCPP_new3(QObject* parent, bool caseInsensitiveKeywords) {
	return new QsciLexerCPP(parent, caseInsensitiveKeywords);
}

QMetaObject* QsciLexerCPP_MetaObject(const QsciLexerCPP* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerCPP_Metacast(QsciLexerCPP* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerCPP_Tr(const char* s) {
	QString _ret = QsciLexerCPP::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerCPP_Language(const QsciLexerCPP* self) {
	return (const char*) self->language();
}

const char* QsciLexerCPP_Lexer(const QsciLexerCPP* self) {
	return (const char*) self->lexer();
}

struct miqt_array QsciLexerCPP_AutoCompletionWordSeparators(const QsciLexerCPP* self) {
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

const char* QsciLexerCPP_BlockEnd(const QsciLexerCPP* self) {
	return (const char*) self->blockEnd();
}

const char* QsciLexerCPP_BlockStart(const QsciLexerCPP* self) {
	return (const char*) self->blockStart();
}

const char* QsciLexerCPP_BlockStartKeyword(const QsciLexerCPP* self) {
	return (const char*) self->blockStartKeyword();
}

int QsciLexerCPP_BraceStyle(const QsciLexerCPP* self) {
	return self->braceStyle();
}

const char* QsciLexerCPP_WordCharacters(const QsciLexerCPP* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerCPP_DefaultColor(const QsciLexerCPP* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerCPP_DefaultEolFill(const QsciLexerCPP* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerCPP_DefaultFont(const QsciLexerCPP* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerCPP_DefaultPaper(const QsciLexerCPP* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerCPP_Keywords(const QsciLexerCPP* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerCPP_Description(const QsciLexerCPP* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerCPP_RefreshProperties(QsciLexerCPP* self) {
	self->refreshProperties();
}

bool QsciLexerCPP_FoldAtElse(const QsciLexerCPP* self) {
	return self->foldAtElse();
}

bool QsciLexerCPP_FoldComments(const QsciLexerCPP* self) {
	return self->foldComments();
}

bool QsciLexerCPP_FoldCompact(const QsciLexerCPP* self) {
	return self->foldCompact();
}

bool QsciLexerCPP_FoldPreprocessor(const QsciLexerCPP* self) {
	return self->foldPreprocessor();
}

bool QsciLexerCPP_StylePreprocessor(const QsciLexerCPP* self) {
	return self->stylePreprocessor();
}

void QsciLexerCPP_SetDollarsAllowed(QsciLexerCPP* self, bool allowed) {
	self->setDollarsAllowed(allowed);
}

bool QsciLexerCPP_DollarsAllowed(const QsciLexerCPP* self) {
	return self->dollarsAllowed();
}

void QsciLexerCPP_SetHighlightTripleQuotedStrings(QsciLexerCPP* self, bool enabled) {
	self->setHighlightTripleQuotedStrings(enabled);
}

bool QsciLexerCPP_HighlightTripleQuotedStrings(const QsciLexerCPP* self) {
	return self->highlightTripleQuotedStrings();
}

void QsciLexerCPP_SetHighlightHashQuotedStrings(QsciLexerCPP* self, bool enabled) {
	self->setHighlightHashQuotedStrings(enabled);
}

bool QsciLexerCPP_HighlightHashQuotedStrings(const QsciLexerCPP* self) {
	return self->highlightHashQuotedStrings();
}

void QsciLexerCPP_SetHighlightBackQuotedStrings(QsciLexerCPP* self, bool enabled) {
	self->setHighlightBackQuotedStrings(enabled);
}

bool QsciLexerCPP_HighlightBackQuotedStrings(const QsciLexerCPP* self) {
	return self->highlightBackQuotedStrings();
}

void QsciLexerCPP_SetHighlightEscapeSequences(QsciLexerCPP* self, bool enabled) {
	self->setHighlightEscapeSequences(enabled);
}

bool QsciLexerCPP_HighlightEscapeSequences(const QsciLexerCPP* self) {
	return self->highlightEscapeSequences();
}

void QsciLexerCPP_SetVerbatimStringEscapeSequencesAllowed(QsciLexerCPP* self, bool allowed) {
	self->setVerbatimStringEscapeSequencesAllowed(allowed);
}

bool QsciLexerCPP_VerbatimStringEscapeSequencesAllowed(const QsciLexerCPP* self) {
	return self->verbatimStringEscapeSequencesAllowed();
}

void QsciLexerCPP_SetFoldAtElse(QsciLexerCPP* self, bool fold) {
	self->setFoldAtElse(fold);
}

void QsciLexerCPP_SetFoldComments(QsciLexerCPP* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerCPP_SetFoldCompact(QsciLexerCPP* self, bool fold) {
	self->setFoldCompact(fold);
}

void QsciLexerCPP_SetFoldPreprocessor(QsciLexerCPP* self, bool fold) {
	self->setFoldPreprocessor(fold);
}

void QsciLexerCPP_SetStylePreprocessor(QsciLexerCPP* self, bool style) {
	self->setStylePreprocessor(style);
}

struct miqt_string QsciLexerCPP_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerCPP::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCPP_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerCPP::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerCPP_BlockEnd1(const QsciLexerCPP* self, int* style) {
	return (const char*) self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerCPP_BlockStart1(const QsciLexerCPP* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerCPP_BlockStartKeyword1(const QsciLexerCPP* self, int* style) {
	return (const char*) self->blockStartKeyword(static_cast<int*>(style));
}

void QsciLexerCPP_Delete(QsciLexerCPP* self) {
	delete self;
}

