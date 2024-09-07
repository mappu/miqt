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

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTextCodec* QTextCodec_CodecForName(QByteArray* name) {
	return QTextCodec::codecForName(*name);
}

QTextCodec* QTextCodec_CodecForNameWithName(const char* name) {
	return QTextCodec::codecForName(name);
}

QTextCodec* QTextCodec_CodecForMib(int mib) {
	return QTextCodec::codecForMib(static_cast<int>(mib));
}

void QTextCodec_AvailableCodecs(QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = QTextCodec::availableCodecs();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QTextCodec_AvailableMibs(int** _out, size_t* _out_len) {
	QList<int> ret = QTextCodec::availableMibs();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* __out = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
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

bool QTextCodec_CanEncode(QTextCodec* self, QChar* param1) {
	return const_cast<const QTextCodec*>(self)->canEncode(*param1);
}

bool QTextCodec_CanEncodeWithQString(QTextCodec* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	return const_cast<const QTextCodec*>(self)->canEncode(param1_QString);
}

void QTextCodec_ToUnicode(QTextCodec* self, QByteArray* param1, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextCodec*>(self)->toUnicode(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextCodec_ToUnicodeWithChars(QTextCodec* self, const char* chars, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextCodec*>(self)->toUnicode(chars);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QByteArray* QTextCodec_FromUnicode(QTextCodec* self, const char* uc, size_t uc_Strlen) {
	QString uc_QString = QString::fromUtf8(uc, uc_Strlen);
	QByteArray ret = const_cast<const QTextCodec*>(self)->fromUnicode(uc_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QTextCodec_ToUnicode2(QTextCodec* self, const char* in, int length, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextCodec*>(self)->toUnicode(in, static_cast<int>(length));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QByteArray* QTextCodec_FromUnicode2(QTextCodec* self, QChar* in, int length) {
	QByteArray ret = const_cast<const QTextCodec*>(self)->fromUnicode(in, static_cast<int>(length));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QTextDecoder* QTextCodec_MakeDecoder(QTextCodec* self) {
	return const_cast<const QTextCodec*>(self)->makeDecoder();
}

QTextEncoder* QTextCodec_MakeEncoder(QTextCodec* self) {
	return const_cast<const QTextCodec*>(self)->makeEncoder();
}

QByteArray* QTextCodec_Name(QTextCodec* self) {
	QByteArray ret = const_cast<const QTextCodec*>(self)->name();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QTextCodec_Aliases(QTextCodec* self, QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = const_cast<const QTextCodec*>(self)->aliases();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

int QTextCodec_MibEnum(QTextCodec* self) {
	return const_cast<const QTextCodec*>(self)->mibEnum();
}

void QTextCodec_ToUnicode3(QTextCodec* self, const char* in, int length, QTextCodec__ConverterState* state, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QTextCodec*>(self)->toUnicode(in, static_cast<int>(length), state);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QByteArray* QTextCodec_FromUnicode3(QTextCodec* self, QChar* in, int length, QTextCodec__ConverterState* state) {
	QByteArray ret = const_cast<const QTextCodec*>(self)->fromUnicode(in, static_cast<int>(length), state);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QTextDecoder* QTextCodec_MakeDecoder1(QTextCodec* self, int flags) {
	return const_cast<const QTextCodec*>(self)->makeDecoder(static_cast<QTextCodec::ConversionFlags>(flags));
}

QTextEncoder* QTextCodec_MakeEncoder1(QTextCodec* self, int flags) {
	return const_cast<const QTextCodec*>(self)->makeEncoder(static_cast<QTextCodec::ConversionFlags>(flags));
}

QTextEncoder* QTextEncoder_new(QTextCodec* codec) {
	return new QTextEncoder(codec);
}

QTextEncoder* QTextEncoder_new2(QTextCodec* codec, int flags) {
	return new QTextEncoder(codec, static_cast<QTextCodec::ConversionFlags>(flags));
}

QByteArray* QTextEncoder_FromUnicode(QTextEncoder* self, const char* str, size_t str_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QByteArray ret = self->fromUnicode(str_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QTextEncoder_FromUnicode2(QTextEncoder* self, QChar* uc, int lenVal) {
	QByteArray ret = self->fromUnicode(uc, static_cast<int>(lenVal));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

bool QTextEncoder_HasFailure(QTextEncoder* self) {
	return const_cast<const QTextEncoder*>(self)->hasFailure();
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

void QTextDecoder_ToUnicode(QTextDecoder* self, const char* chars, int lenVal, char** _out, int* _out_Strlen) {
	QString ret = self->toUnicode(chars, static_cast<int>(lenVal));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextDecoder_ToUnicodeWithBa(QTextDecoder* self, QByteArray* ba, char** _out, int* _out_Strlen) {
	QString ret = self->toUnicode(*ba);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QTextDecoder_HasFailure(QTextDecoder* self) {
	return const_cast<const QTextDecoder*>(self)->hasFailure();
}

bool QTextDecoder_NeedsMoreData(QTextDecoder* self) {
	return const_cast<const QTextDecoder*>(self)->needsMoreData();
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

