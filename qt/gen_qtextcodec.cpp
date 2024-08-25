#include "gen_qtextcodec.h"
#include "qtextcodec.h"

#include <QByteArray>
#include <QChar>
#include <QList>
#include <QString>
#include <QTextCodec>
#include <QTextDecoder>
#include <QTextEncoder>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTextCodec* QTextCodec_CodecForName(QByteArray* name) {
	return QTextCodec::codecForName(*name);
}

QTextCodec* QTextCodec_CodecForNameWithName(char* name) {
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
	return self->canEncode(*param1);
}

bool QTextCodec_CanEncodeWithQString(QTextCodec* self, const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	return self->canEncode(param1_QString);
}

void QTextCodec_ToUnicode(QTextCodec* self, QByteArray* param1, char** _out, int* _out_Strlen) {
	QString ret = self->toUnicode(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextCodec_ToUnicodeWithChars(QTextCodec* self, char* chars, char** _out, int* _out_Strlen) {
	QString ret = self->toUnicode(chars);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QByteArray* QTextCodec_FromUnicode(QTextCodec* self, const char* uc, size_t uc_Strlen) {
	QString uc_QString = QString::fromUtf8(uc, uc_Strlen);
	QByteArray ret = self->fromUnicode(uc_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QTextCodec_Name(QTextCodec* self) {
	QByteArray ret = self->name();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QTextCodec_Aliases(QTextCodec* self, QByteArray*** _out, size_t* _out_len) {
	QList<QByteArray> ret = self->aliases();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QByteArray** __out = static_cast<QByteArray**>(malloc(sizeof(QByteArray**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QByteArray(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

int QTextCodec_MibEnum(QTextCodec* self) {
	return self->mibEnum();
}

QTextEncoder* QTextEncoder_new(QTextCodec* codec) {
	return new QTextEncoder(codec);
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
	return self->hasFailure();
}

void QTextEncoder_Delete(QTextEncoder* self) {
	delete self;
}

QTextDecoder* QTextDecoder_new(QTextCodec* codec) {
	return new QTextDecoder(codec);
}

void QTextDecoder_ToUnicode(QTextDecoder* self, char* chars, int lenVal, char** _out, int* _out_Strlen) {
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
	return self->hasFailure();
}

bool QTextDecoder_NeedsMoreData(QTextDecoder* self) {
	return self->needsMoreData();
}

void QTextDecoder_Delete(QTextDecoder* self) {
	delete self;
}

