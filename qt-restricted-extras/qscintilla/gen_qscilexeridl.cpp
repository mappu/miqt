#include <QColor>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexeridl.h>
#include "gen_qscilexeridl.h"
#include "_cgo_export.h"

QsciLexerIDL* QsciLexerIDL_new() {
	return new QsciLexerIDL();
}

QsciLexerIDL* QsciLexerIDL_new2(QObject* parent) {
	return new QsciLexerIDL(parent);
}

QMetaObject* QsciLexerIDL_MetaObject(const QsciLexerIDL* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerIDL_Metacast(QsciLexerIDL* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerIDL_Tr(const char* s) {
	QString _ret = QsciLexerIDL::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerIDL_TrUtf8(const char* s) {
	QString _ret = QsciLexerIDL::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerIDL_Language(const QsciLexerIDL* self) {
	return (const char*) self->language();
}

QColor* QsciLexerIDL_DefaultColor(const QsciLexerIDL* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

const char* QsciLexerIDL_Keywords(const QsciLexerIDL* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerIDL_Description(const QsciLexerIDL* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerIDL_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerIDL::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerIDL_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerIDL::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerIDL_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerIDL::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerIDL_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerIDL::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerIDL_Delete(QsciLexerIDL* self) {
	delete self;
}

