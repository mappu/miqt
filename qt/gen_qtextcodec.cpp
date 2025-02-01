#include <QByteArray>
#include <QChar>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextCodec>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextCodec__ConverterState
#include <QTextDecoder>
#include <QTextEncoder>
#include <qtextcodec.h>
#include "gen_qtextcodec.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QTextCodec* QTextCodec_codecForName(struct miqt_string name) {
	QByteArray name_QByteArray(name.data, name.len);
	return QTextCodec::codecForName(name_QByteArray);
}

QTextCodec* QTextCodec_codecForNameWithName(const char* name) {
	return QTextCodec::codecForName(name);
}

QTextCodec* QTextCodec_codecForMib(int mib) {
	return QTextCodec::codecForMib(static_cast<int>(mib));
}

struct miqt_array /* of struct miqt_string */  QTextCodec_availableCodecs() {
	QList<QByteArray> _ret = QTextCodec::availableCodecs();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QTextCodec_availableMibs() {
	QList<int> _ret = QTextCodec::availableMibs();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QTextCodec* QTextCodec_codecForLocale() {
	return QTextCodec::codecForLocale();
}

void QTextCodec_setCodecForLocale(QTextCodec* c) {
	QTextCodec::setCodecForLocale(c);
}

QTextCodec* QTextCodec_codecForHtml(struct miqt_string ba) {
	QByteArray ba_QByteArray(ba.data, ba.len);
	return QTextCodec::codecForHtml(ba_QByteArray);
}

QTextCodec* QTextCodec_codecForHtml2(struct miqt_string ba, QTextCodec* defaultCodec) {
	QByteArray ba_QByteArray(ba.data, ba.len);
	return QTextCodec::codecForHtml(ba_QByteArray, defaultCodec);
}

QTextCodec* QTextCodec_codecForUtfText(struct miqt_string ba) {
	QByteArray ba_QByteArray(ba.data, ba.len);
	return QTextCodec::codecForUtfText(ba_QByteArray);
}

QTextCodec* QTextCodec_codecForUtfText2(struct miqt_string ba, QTextCodec* defaultCodec) {
	QByteArray ba_QByteArray(ba.data, ba.len);
	return QTextCodec::codecForUtfText(ba_QByteArray, defaultCodec);
}

bool QTextCodec_canEncode(const QTextCodec* self, QChar* param1) {
	return self->canEncode(*param1);
}

bool QTextCodec_canEncodeWithQString(const QTextCodec* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return self->canEncode(param1_QString);
}

struct miqt_string QTextCodec_toUnicode(const QTextCodec* self, struct miqt_string param1) {
	QByteArray param1_QByteArray(param1.data, param1.len);
	QString _ret = self->toUnicode(param1_QByteArray);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextCodec_toUnicodeWithChars(const QTextCodec* self, const char* chars) {
	QString _ret = self->toUnicode(chars);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextCodec_fromUnicode(const QTextCodec* self, struct miqt_string uc) {
	QString uc_QString = QString::fromUtf8(uc.data, uc.len);
	QByteArray _qb = self->fromUnicode(uc_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextCodec_toUnicode2(const QTextCodec* self, const char* in, int length) {
	QString _ret = self->toUnicode(in, static_cast<int>(length));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextCodec_fromUnicode2(const QTextCodec* self, QChar* in, int length) {
	QByteArray _qb = self->fromUnicode(in, static_cast<int>(length));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QTextDecoder* QTextCodec_makeDecoder(const QTextCodec* self) {
	return self->makeDecoder();
}

QTextEncoder* QTextCodec_makeEncoder(const QTextCodec* self) {
	return self->makeEncoder();
}

struct miqt_string QTextCodec_name(const QTextCodec* self) {
	QByteArray _qb = self->name();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QTextCodec_aliases(const QTextCodec* self) {
	QList<QByteArray> _ret = self->aliases();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QTextCodec_mibEnum(const QTextCodec* self) {
	return self->mibEnum();
}

struct miqt_string QTextCodec_toUnicode3(const QTextCodec* self, const char* in, int length, QTextCodec__ConverterState* state) {
	QString _ret = self->toUnicode(in, static_cast<int>(length), state);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextCodec_fromUnicode3(const QTextCodec* self, QChar* in, int length, QTextCodec__ConverterState* state) {
	QByteArray _qb = self->fromUnicode(in, static_cast<int>(length), state);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QTextDecoder* QTextCodec_makeDecoder1(const QTextCodec* self, int flags) {
	return self->makeDecoder(static_cast<QTextCodec::ConversionFlags>(flags));
}

QTextEncoder* QTextCodec_makeEncoder1(const QTextCodec* self, int flags) {
	return self->makeEncoder(static_cast<QTextCodec::ConversionFlags>(flags));
}

QTextEncoder* QTextEncoder_new(QTextCodec* codec) {
	return new QTextEncoder(codec);
}

QTextEncoder* QTextEncoder_new2(QTextCodec* codec, int flags) {
	return new QTextEncoder(codec, static_cast<QTextCodec::ConversionFlags>(flags));
}

struct miqt_string QTextEncoder_fromUnicode(QTextEncoder* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QByteArray _qb = self->fromUnicode(str_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextEncoder_fromUnicode2(QTextEncoder* self, QChar* uc, int len) {
	QByteArray _qb = self->fromUnicode(uc, static_cast<int>(len));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QTextEncoder_hasFailure(const QTextEncoder* self) {
	return self->hasFailure();
}

void QTextEncoder_delete(QTextEncoder* self) {
	delete self;
}

QTextDecoder* QTextDecoder_new(QTextCodec* codec) {
	return new QTextDecoder(codec);
}

QTextDecoder* QTextDecoder_new2(QTextCodec* codec, int flags) {
	return new QTextDecoder(codec, static_cast<QTextCodec::ConversionFlags>(flags));
}

struct miqt_string QTextDecoder_toUnicode(QTextDecoder* self, const char* chars, int len) {
	QString _ret = self->toUnicode(chars, static_cast<int>(len));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextDecoder_toUnicodeWithBa(QTextDecoder* self, struct miqt_string ba) {
	QByteArray ba_QByteArray(ba.data, ba.len);
	QString _ret = self->toUnicode(ba_QByteArray);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTextDecoder_hasFailure(const QTextDecoder* self) {
	return self->hasFailure();
}

bool QTextDecoder_needsMoreData(const QTextDecoder* self) {
	return self->needsMoreData();
}

void QTextDecoder_delete(QTextDecoder* self) {
	delete self;
}

QTextCodec__ConverterState* QTextCodec__ConverterState_new() {
	return new QTextCodec::ConverterState();
}

QTextCodec__ConverterState* QTextCodec__ConverterState_new2(int f) {
	return new QTextCodec::ConverterState(static_cast<QTextCodec::ConversionFlags>(f));
}

void QTextCodec__ConverterState_delete(QTextCodec__ConverterState* self) {
	delete self;
}

