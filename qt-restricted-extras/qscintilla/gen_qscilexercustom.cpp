#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscilexercustom.h>
#include "gen_qscilexercustom.h"
#include "_cgo_export.h"

QMetaObject* QsciLexerCustom_MetaObject(const QsciLexerCustom* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerCustom_Metacast(QsciLexerCustom* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerCustom_Tr(const char* s) {
	QString _ret = QsciLexerCustom::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCustom_TrUtf8(const char* s) {
	QString _ret = QsciLexerCustom::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerCustom_SetStyling(QsciLexerCustom* self, int length, int style) {
	self->setStyling(static_cast<int>(length), static_cast<int>(style));
}

void QsciLexerCustom_SetStyling2(QsciLexerCustom* self, int length, QsciStyle* style) {
	self->setStyling(static_cast<int>(length), *style);
}

void QsciLexerCustom_StartStyling(QsciLexerCustom* self, int pos) {
	self->startStyling(static_cast<int>(pos));
}

void QsciLexerCustom_StyleText(QsciLexerCustom* self, int start, int end) {
	self->styleText(static_cast<int>(start), static_cast<int>(end));
}

void QsciLexerCustom_SetEditor(QsciLexerCustom* self, QsciScintilla* editor) {
	self->setEditor(editor);
}

int QsciLexerCustom_StyleBitsNeeded(const QsciLexerCustom* self) {
	return self->styleBitsNeeded();
}

struct miqt_string QsciLexerCustom_Tr2(const char* s, const char* c) {
	QString _ret = QsciLexerCustom::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCustom_Tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerCustom::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCustom_TrUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerCustom::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCustom_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerCustom::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerCustom_StartStyling2(QsciLexerCustom* self, int pos, int styleBits) {
	self->startStyling(static_cast<int>(pos), static_cast<int>(styleBits));
}

void QsciLexerCustom_Delete(QsciLexerCustom* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QsciLexerCustom*>( self );
	} else {
		delete self;
	}
}

