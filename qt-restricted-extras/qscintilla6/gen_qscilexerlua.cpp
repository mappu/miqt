#include <QColor>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerlua.h>
#include "gen_qscilexerlua.h"
#include "_cgo_export.h"

QsciLexerLua* QsciLexerLua_new() {
	return new QsciLexerLua();
}

QsciLexerLua* QsciLexerLua_new2(QObject* parent) {
	return new QsciLexerLua(parent);
}

QMetaObject* QsciLexerLua_MetaObject(const QsciLexerLua* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerLua_Metacast(QsciLexerLua* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerLua_Tr(const char* s) {
	QString _ret = QsciLexerLua::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerLua_Language(const QsciLexerLua* self) {
	return (const char*) self->language();
}

const char* QsciLexerLua_Lexer(const QsciLexerLua* self) {
	return (const char*) self->lexer();
}

struct miqt_array QsciLexerLua_AutoCompletionWordSeparators(const QsciLexerLua* self) {
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

const char* QsciLexerLua_BlockStart(const QsciLexerLua* self) {
	return (const char*) self->blockStart();
}

int QsciLexerLua_BraceStyle(const QsciLexerLua* self) {
	return self->braceStyle();
}

QColor* QsciLexerLua_DefaultColor(const QsciLexerLua* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerLua_DefaultEolFill(const QsciLexerLua* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerLua_DefaultFont(const QsciLexerLua* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerLua_DefaultPaper(const QsciLexerLua* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerLua_Keywords(const QsciLexerLua* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerLua_Description(const QsciLexerLua* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerLua_RefreshProperties(QsciLexerLua* self) {
	self->refreshProperties();
}

bool QsciLexerLua_FoldCompact(const QsciLexerLua* self) {
	return self->foldCompact();
}

void QsciLexerLua_SetFoldCompact(QsciLexerLua* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerLua_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerLua::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerLua_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerLua::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerLua_BlockStart1(const QsciLexerLua* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

void QsciLexerLua_Delete(QsciLexerLua* self) {
	delete self;
}

