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
#include "qtextcodec.h"
#include "gen_qtextcodec.h"
#include "_cgo_export.h"

QTextCodec* QTextCodec_CodecForName(QByteArray* name) {
	return QTextCodec::codecForName(*name);
}

QTextCodec* QTextCodec_CodecForNameWithName(const char* name) {
	return QTextCodec::codecForName(name);
}

QTextCodec* QTextCodec_CodecForMib(int mib) {
	return QTextCodec::codecForMib(static_cast<int>(mib));
}

struct miqt_array* QTextCodec_AvailableCodecs() {
	QList<QByteArray> _ret = QTextCodec::availableCodecs();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** _arr = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QByteArray(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QTextCodec_AvailableMibs() {
	QList<int> _ret = QTextCodec::availableMibs();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QTextCodec* QTextCodec_CodecForLocale() {
	return QTextCodec::codecForLocale();
}

void QTextCodec_SetCodecForLocale(QTextCodec* c) {
	QTextCodec::setCodecForLocale(c);
}

QTextCodec* QTextCodec_CodecForHtml(QByteArray* ba) {
	return QTextCodec::codecForHtml(*ba);
}

QTextCodec* QTextCodec_CodecForHtml2(QByteArray* ba, QTextCodec* defaultCodec) {
	return QTextCodec::codecForHtml(*ba, defaultCodec);
}

QTextCodec* QTextCodec_CodecForUtfText(QByteArray* ba) {
	return QTextCodec::codecForUtfText(*ba);
}

QTextCodec* QTextCodec_CodecForUtfText2(QByteArray* ba, QTextCodec* defaultCodec) {
	return QTextCodec::codecForUtfText(*ba, defaultCodec);
}

bool QTextCodec_CanEncode(const QTextCodec* self, QChar* param1) {
	return self->canEncode(*param1);
}

bool QTextCodec_CanEncodeWithQString(const QTextCodec* self, struct miqt_string* param1) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	return self->canEncode(param1_QString);
}

struct miqt_string* QTextCodec_ToUnicode(const QTextCodec* self, QByteArray* param1) {
	QString _ret = self->toUnicode(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextCodec_ToUnicodeWithChars(const QTextCodec* self, const char* chars) {
	QString _ret = self->toUnicode(chars);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QByteArray* QTextCodec_FromUnicode(const QTextCodec* self, struct miqt_string* uc) {
	QString uc_QString = QString::fromUtf8(&uc->data, uc->len);
	QByteArray _ret = self->fromUnicode(uc_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

struct miqt_string* QTextCodec_ToUnicode2(const QTextCodec* self, const char* in, int length) {
	QString _ret = self->toUnicode(in, static_cast<int>(length));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QByteArray* QTextCodec_FromUnicode2(const QTextCodec* self, QChar* in, int length) {
	QByteArray _ret = self->fromUnicode(in, static_cast<int>(length));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

QTextDecoder* QTextCodec_MakeDecoder(const QTextCodec* self) {
	return self->makeDecoder();
}

QTextEncoder* QTextCodec_MakeEncoder(const QTextCodec* self) {
	return self->makeEncoder();
}

QByteArray* QTextCodec_Name(const QTextCodec* self) {
	QByteArray _ret = self->name();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

struct miqt_array* QTextCodec_Aliases(const QTextCodec* self) {
	QList<QByteArray> _ret = self->aliases();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** _arr = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QByteArray(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

int QTextCodec_MibEnum(const QTextCodec* self) {
	return self->mibEnum();
}

struct miqt_string* QTextCodec_ToUnicode3(const QTextCodec* self, const char* in, int length, QTextCodec__ConverterState* state) {
	QString _ret = self->toUnicode(in, static_cast<int>(length), state);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QByteArray* QTextCodec_FromUnicode3(const QTextCodec* self, QChar* in, int length, QTextCodec__ConverterState* state) {
	QByteArray _ret = self->fromUnicode(in, static_cast<int>(length), state);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
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

QByteArray* QTextEncoder_FromUnicode(QTextEncoder* self, struct miqt_string* str) {
	QString str_QString = QString::fromUtf8(&str->data, str->len);
	QByteArray _ret = self->fromUnicode(str_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

QByteArray* QTextEncoder_FromUnicode2(QTextEncoder* self, QChar* uc, int lenVal) {
	QByteArray _ret = self->fromUnicode(uc, static_cast<int>(lenVal));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(_ret));
}

bool QTextEncoder_HasFailure(const QTextEncoder* self) {
	return self->hasFailure();
}

void QTextEncoder_Delete(QTextEncoder* self) {
	delete self;
}

QTextDecoder* QTextDecoder_new(QTextCodec* codec) {
	return new QTextDecoder(codec);
}

QTextDecoder* QTextDecoder_new2(QTextCodec* codec, int flags) {
	return new QTextDecoder(codec, static_cast<QTextCodec::ConversionFlags>(flags));
}

struct miqt_string* QTextDecoder_ToUnicode(QTextDecoder* self, const char* chars, int lenVal) {
	QString _ret = self->toUnicode(chars, static_cast<int>(lenVal));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextDecoder_ToUnicodeWithBa(QTextDecoder* self, QByteArray* ba) {
	QString _ret = self->toUnicode(*ba);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QTextDecoder_HasFailure(const QTextDecoder* self) {
	return self->hasFailure();
}

bool QTextDecoder_NeedsMoreData(const QTextDecoder* self) {
	return self->needsMoreData();
}

void QTextDecoder_Delete(QTextDecoder* self) {
	delete self;
}

QTextCodec__ConverterState* QTextCodec__ConverterState_new() {
	return new QTextCodec::ConverterState();
}

QTextCodec__ConverterState* QTextCodec__ConverterState_new2(int f) {
	return new QTextCodec::ConverterState(static_cast<QTextCodec::ConversionFlags>(f));
}

void QTextCodec__ConverterState_Delete(QTextCodec__ConverterState* self) {
	delete self;
}

