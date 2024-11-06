#include <QColor>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerpascal.h>
#include "gen_qscilexerpascal.h"
#include "_cgo_export.h"

QsciLexerPascal* QsciLexerPascal_new() {
	return new QsciLexerPascal();
}

QsciLexerPascal* QsciLexerPascal_new2(QObject* parent) {
	return new QsciLexerPascal(parent);
}

QMetaObject* QsciLexerPascal_MetaObject(const QsciLexerPascal* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerPascal_Metacast(QsciLexerPascal* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerPascal_Tr(const char* s) {
	QString _ret = QsciLexerPascal::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPascal_Language(const QsciLexerPascal* self) {
	return (const char*) self->language();
}

const char* QsciLexerPascal_Lexer(const QsciLexerPascal* self) {
	return (const char*) self->lexer();
}

struct miqt_array QsciLexerPascal_AutoCompletionWordSeparators(const QsciLexerPascal* self) {
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

const char* QsciLexerPascal_BlockEnd(const QsciLexerPascal* self) {
	return (const char*) self->blockEnd();
}

const char* QsciLexerPascal_BlockStart(const QsciLexerPascal* self) {
	return (const char*) self->blockStart();
}

const char* QsciLexerPascal_BlockStartKeyword(const QsciLexerPascal* self) {
	return (const char*) self->blockStartKeyword();
}

int QsciLexerPascal_BraceStyle(const QsciLexerPascal* self) {
	return self->braceStyle();
}

QColor* QsciLexerPascal_DefaultColor(const QsciLexerPascal* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerPascal_DefaultEolFill(const QsciLexerPascal* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerPascal_DefaultFont(const QsciLexerPascal* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPascal_DefaultPaper(const QsciLexerPascal* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerPascal_Keywords(const QsciLexerPascal* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerPascal_Description(const QsciLexerPascal* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerPascal_RefreshProperties(QsciLexerPascal* self) {
	self->refreshProperties();
}

bool QsciLexerPascal_FoldComments(const QsciLexerPascal* self) {
	return self->foldComments();
}

bool QsciLexerPascal_FoldCompact(const QsciLexerPascal* self) {
	return self->foldCompact();
}

bool QsciLexerPascal_FoldPreprocessor(const QsciLexerPascal* self) {
	return self->foldPreprocessor();
}

void QsciLexerPascal_SetSmartHighlighting(QsciLexerPascal* self, bool enabled) {
	self->setSmartHighlighting(enabled);
}

bool QsciLexerPascal_SmartHighlighting(const QsciLexerPascal* self) {
	return self->smartHighlighting();
}

void QsciLexerPascal_SetFoldComments(QsciLexerPascal* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerPascal_SetFoldCompact(QsciLexerPascal* self, bool fold) {
	self->setFoldCompact(fold);
}

void QsciLexerPascal_SetFoldPreprocessor(QsciLexerPascal* self, bool fold) {
	self->setFoldPreprocessor(fold);
}

struct miqt_string QsciLexerPascal_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerPascal::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPascal_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPascal::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPascal_BlockEnd1(const QsciLexerPascal* self, int* style) {
	return (const char*) self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerPascal_BlockStart1(const QsciLexerPascal* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerPascal_BlockStartKeyword1(const QsciLexerPascal* self, int* style) {
	return (const char*) self->blockStartKeyword(static_cast<int*>(style));
}

void QsciLexerPascal_Delete(QsciLexerPascal* self) {
	delete self;
}

