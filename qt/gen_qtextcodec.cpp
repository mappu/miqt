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

QTextCodec* QTextCodec_CodecForName(struct miqt_string name) {
	QByteArray name_QByteArray(name.data, name.len);
	return QTextCodec::codecForName(name_QByteArray);
}

QTextCodec* QTextCodec_CodecForNameWithName(const char* name) {
	return QTextCodec::codecForName(name);
}

QTextCodec* QTextCodec_CodecForMib(int mib) {
	return QTextCodec::codecForMib(static_cast<int>(mib));
}

struct miqt_array /* of struct miqt_string */  QTextCodec_AvailableCodecs() {
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

struct miqt_array /* of int */  QTextCodec_AvailableMibs() {
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

QTextCodec* QTextCodec_CodecForLocale() {
	return QTextCodec::codecForLocale();
}

void QTextCodec_SetCodecForLocale(QTextCodec* c) {
	QTextCodec::setCodecForLocale(c);
}

QTextCodec* QTextCodec_CodecForHtml(struct miqt_string ba) {
	QByteArray ba_QByteArray(ba.data, ba.len);
	return QTextCodec::codecForHtml(ba_QByteArray);
}

QTextCodec* QTextCodec_CodecForHtml2(struct miqt_string ba, QTextCodec* defaultCodec) {
	QByteArray ba_QByteArray(ba.data, ba.len);
	return QTextCodec::codecForHtml(ba_QByteArray, defaultCodec);
}

QTextCodec* QTextCodec_CodecForUtfText(struct miqt_string ba) {
	QByteArray ba_QByteArray(ba.data, ba.len);
	return QTextCodec::codecForUtfText(ba_QByteArray);
}

QTextCodec* QTextCodec_CodecForUtfText2(struct miqt_string ba, QTextCodec* defaultCodec) {
	QByteArray ba_QByteArray(ba.data, ba.len);
	return QTextCodec::codecForUtfText(ba_QByteArray, defaultCodec);
}

bool QTextCodec_CanEncode(const QTextCodec* self, QChar* param1) {
	return self->canEncode(*param1);
}

bool QTextCodec_CanEncodeWithQString(const QTextCodec* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return self->canEncode(param1_QString);
}

struct miqt_string QTextCodec_ToUnicode(const QTextCodec* self, struct miqt_string param1) {
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

struct miqt_string QTextCodec_ToUnicodeWithChars(const QTextCodec* self, const char* chars) {
	QString _ret = self->toUnicode(chars);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextCodec_FromUnicode(const QTextCodec* self, struct miqt_string uc) {
	QString uc_QString = QString::fromUtf8(uc.data, uc.len);
	QByteArray _qb = self->fromUnicode(uc_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextCodec_ToUnicode2(const QTextCodec* self, const char* in, int length) {
	QString _ret = self->toUnicode(in, static_cast<int>(length));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextCodec_FromUnicode2(const QTextCodec* self, QChar* in, int length) {
	QByteArray _qb = self->fromUnicode(in, static_cast<int>(length));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QTextDecoder* QTextCodec_MakeDecoder(const QTextCodec* self) {
	return self->makeDecoder();
}

QTextEncoder* QTextCodec_MakeEncoder(const QTextCodec* self) {
	return self->makeEncoder();
}

struct miqt_string QTextCodec_Name(const QTextCodec* self) {
	QByteArray _qb = self->name();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QTextCodec_Aliases(const QTextCodec* self) {
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

int QTextCodec_MibEnum(const QTextCodec* self) {
	return self->mibEnum();
}

struct miqt_string QTextCodec_ToUnicode3(const QTextCodec* self, const char* in, int length, QTextCodec__ConverterState* state) {
	QString _ret = self->toUnicode(in, static_cast<int>(length), state);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextCodec_FromUnicode3(const QTextCodec* self, QChar* in, int length, QTextCodec__ConverterState* state) {
	QByteArray _qb = self->fromUnicode(in, static_cast<int>(length), state);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QTextDecoder* QTextCodec_MakeDecoder1(const QTextCodec* self, int flags) {
	return self->makeDecoder(static_cast<QTextCodec::ConversionFlags>(flags));
}

QTextEncoder* QTextCodec_MakeEncoder1(const QTextCodec* self, int flags) {
	return self->makeEncoder(static_cast<QTextCodec::ConversionFlags>(flags));
}

QTextEncoder* QTextEncoder_new(QTextCodec* codec) {
	return new QTextEncoder(codec);
}

QTextEncoder* QTextEncoder_new2(QTextCodec* codec, int flags) {
	return new QTextEncoder(codec, static_cast<QTextCodec::ConversionFlags>(flags));
}

struct miqt_string QTextEncoder_FromUnicode(QTextEncoder* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QByteArray _qb = self->fromUnicode(str_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextEncoder_FromUnicode2(QTextEncoder* self, QChar* uc, int lenVal) {
	QByteArray _qb = self->fromUnicode(uc, static_cast<int>(lenVal));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QTextEncoder_HasFailure(const QTextEncoder* self) {
	return self->hasFailure();
}

void QTextEncoder_Delete(QTextEncoder* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTextEncoder*>( self );
	} else {
		delete self;
	}
}

QTextDecoder* QTextDecoder_new(QTextCodec* codec) {
	return new QTextDecoder(codec);
}

QTextDecoder* QTextDecoder_new2(QTextCodec* codec, int flags) {
	return new QTextDecoder(codec, static_cast<QTextCodec::ConversionFlags>(flags));
}

struct miqt_string QTextDecoder_ToUnicode(QTextDecoder* self, const char* chars, int lenVal) {
	QString _ret = self->toUnicode(chars, static_cast<int>(lenVal));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextDecoder_ToUnicodeWithBa(QTextDecoder* self, struct miqt_string ba) {
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

bool QTextDecoder_HasFailure(const QTextDecoder* self) {
	return self->hasFailure();
}

bool QTextDecoder_NeedsMoreData(const QTextDecoder* self) {
	return self->needsMoreData();
}

void QTextDecoder_Delete(QTextDecoder* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTextDecoder*>( self );
	} else {
		delete self;
	}
}

QTextCodec__ConverterState* QTextCodec__ConverterState_new() {
	return new QTextCodec::ConverterState();
}

QTextCodec__ConverterState* QTextCodec__ConverterState_new2(int f) {
	return new QTextCodec::ConverterState(static_cast<QTextCodec::ConversionFlags>(f));
}

void QTextCodec__ConverterState_Delete(QTextCodec__ConverterState* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QTextCodec::ConverterState*>( self );
	} else {
		delete self;
	}
}

