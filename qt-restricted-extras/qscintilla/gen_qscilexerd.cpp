#include <QColor>
#include <QFont>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexerd.h>
#include "gen_qscilexerd.h"
#include "_cgo_export.h"

QsciLexerD* QsciLexerD_new() {
	return new QsciLexerD();
}

QsciLexerD* QsciLexerD_new2(QObject* parent) {
	return new QsciLexerD(parent);
}

QMetaObject* QsciLexerD_MetaObject(const QsciLexerD* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerD_Metacast(QsciLexerD* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerD_Tr(const char* s) {
	QString _ret = QsciLexerD::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerD_TrUtf8(const char* s) {
	QString _ret = QsciLexerD::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerD_Language(const QsciLexerD* self) {
	return (const char*) self->language();
}

const char* QsciLexerD_Lexer(const QsciLexerD* self) {
	return (const char*) self->lexer();
}

struct miqt_array /* of struct miqt_string */  QsciLexerD_AutoCompletionWordSeparators(const QsciLexerD* self) {
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

const char* QsciLexerD_BlockEnd(const QsciLexerD* self) {
	return (const char*) self->blockEnd();
}

const char* QsciLexerD_BlockStart(const QsciLexerD* self) {
	return (const char*) self->blockStart();
}

const char* QsciLexerD_BlockStartKeyword(const QsciLexerD* self) {
	return (const char*) self->blockStartKeyword();
}

int QsciLexerD_BraceStyle(const QsciLexerD* self) {
	return self->braceStyle();
}

const char* QsciLexerD_WordCharacters(const QsciLexerD* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerD_DefaultColor(const QsciLexerD* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerD_DefaultEolFill(const QsciLexerD* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerD_DefaultFont(const QsciLexerD* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerD_DefaultPaper(const QsciLexerD* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerD_Keywords(const QsciLexerD* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerD_Description(const QsciLexerD* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerD_RefreshProperties(QsciLexerD* self) {
	self->refreshProperties();
}

bool QsciLexerD_FoldAtElse(const QsciLexerD* self) {
	return self->foldAtElse();
}

bool QsciLexerD_FoldComments(const QsciLexerD* self) {
	return self->foldComments();
}

bool QsciLexerD_FoldCompact(const QsciLexerD* self) {
	return self->foldCompact();
}

void QsciLexerD_SetFoldAtElse(QsciLexerD* self, bool fold) {
	self->setFoldAtElse(fold);
}

void QsciLexerD_SetFoldComments(QsciLexerD* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerD_SetFoldCompact(QsciLexerD* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerD_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerD::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerD_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerD::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerD_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerD::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerD_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerD::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerD_BlockEnd1(const QsciLexerD* self, int* style) {
	return (const char*) self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerD_BlockStart1(const QsciLexerD* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerD_BlockStartKeyword1(const QsciLexerD* self, int* style) {
	return (const char*) self->blockStartKeyword(static_cast<int*>(style));
}

void QsciLexerD_Delete(QsciLexerD* self) {
	delete self;
}

