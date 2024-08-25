#include "gen_qtextstream.h"
#include "qtextstream.h"

#include <QByteArray>
#include <QChar>
#include <QIODevice>
#include <QLocale>
#include <QString>
#include <QTextCodec>
#include <QTextStream>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QTextStream* QTextStream_new() {
	return new QTextStream();
}

QTextStream* QTextStream_new2(QIODevice* device) {
	return new QTextStream(device);
}

void QTextStream_SetCodec(QTextStream* self, QTextCodec* codec) {
	self->setCodec(codec);
}

void QTextStream_SetCodecWithCodecName(QTextStream* self, char* codecName) {
	self->setCodec(codecName);
}

QTextCodec* QTextStream_Codec(QTextStream* self) {
	return self->codec();
}

void QTextStream_SetAutoDetectUnicode(QTextStream* self, bool enabled) {
	self->setAutoDetectUnicode(enabled);
}

bool QTextStream_AutoDetectUnicode(QTextStream* self) {
	return self->autoDetectUnicode();
}

void QTextStream_SetGenerateByteOrderMark(QTextStream* self, bool generate) {
	self->setGenerateByteOrderMark(generate);
}

bool QTextStream_GenerateByteOrderMark(QTextStream* self) {
	return self->generateByteOrderMark();
}

void QTextStream_SetLocale(QTextStream* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QTextStream_Locale(QTextStream* self) {
	QLocale ret = self->locale();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLocale*>(new QLocale(ret));
}

void QTextStream_SetDevice(QTextStream* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QTextStream_Device(QTextStream* self) {
	return self->device();
}

void QTextStream_String(QTextStream* self, char** _out, int* _out_Strlen) {
	QString* ret = self->string();
	// Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret->toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextStream_ResetStatus(QTextStream* self) {
	self->resetStatus();
}

bool QTextStream_AtEnd(QTextStream* self) {
	return self->atEnd();
}

void QTextStream_Reset(QTextStream* self) {
	self->reset();
}

void QTextStream_Flush(QTextStream* self) {
	self->flush();
}

bool QTextStream_Seek(QTextStream* self, int64_t pos) {
	return self->seek((qint64)(pos));
}

int64_t QTextStream_Pos(QTextStream* self) {
	return self->pos();
}

void QTextStream_SkipWhiteSpace(QTextStream* self) {
	self->skipWhiteSpace();
}

void QTextStream_ReadLine(QTextStream* self, char** _out, int* _out_Strlen) {
	QString ret = self->readLine();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextStream_ReadAll(QTextStream* self, char** _out, int* _out_Strlen) {
	QString ret = self->readAll();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextStream_Read(QTextStream* self, int64_t maxlen, char** _out, int* _out_Strlen) {
	QString ret = self->read((qint64)(maxlen));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextStream_SetPadChar(QTextStream* self, QChar* ch) {
	self->setPadChar(*ch);
}

QChar* QTextStream_PadChar(QTextStream* self) {
	QChar ret = self->padChar();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

void QTextStream_SetFieldWidth(QTextStream* self, int width) {
	self->setFieldWidth(static_cast<int>(width));
}

int QTextStream_FieldWidth(QTextStream* self) {
	return self->fieldWidth();
}

void QTextStream_SetIntegerBase(QTextStream* self, int base) {
	self->setIntegerBase(static_cast<int>(base));
}

int QTextStream_IntegerBase(QTextStream* self) {
	return self->integerBase();
}

void QTextStream_SetRealNumberPrecision(QTextStream* self, int precision) {
	self->setRealNumberPrecision(static_cast<int>(precision));
}

int QTextStream_RealNumberPrecision(QTextStream* self) {
	return self->realNumberPrecision();
}

QTextStream* QTextStream_OperatorShiftRight(QTextStream* self, QChar* ch) {
	QTextStream& ret = self->operator>>(*ch);
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftRightWithCh(QTextStream* self, char* ch) {
	QTextStream& ret = self->operator>>(static_cast<char&>(*ch));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftRightWithShort(QTextStream* self, int16_t* i) {
	QTextStream& ret = self->operator>>(static_cast<short&>(*i));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftRightWithUnsignedshort(QTextStream* self, uint16_t* i) {
	QTextStream& ret = self->operator>>(static_cast<unsigned short&>(*i));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftRightWithInt(QTextStream* self, int* i) {
	QTextStream& ret = self->operator>>(static_cast<int&>(*i));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftRightWithUnsignedint(QTextStream* self, unsigned int* i) {
	QTextStream& ret = self->operator>>(static_cast<unsigned int&>(*i));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftRightWithLong(QTextStream* self, long* i) {
	QTextStream& ret = self->operator>>(static_cast<long&>(*i));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftRightWithUnsignedlong(QTextStream* self, unsigned long* i) {
	QTextStream& ret = self->operator>>(static_cast<unsigned long&>(*i));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftRightWithQlonglong(QTextStream* self, int64_t* i) {
	QTextStream& ret = self->operator>>((qlonglong&)(*i));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftRightWithQulonglong(QTextStream* self, uint64_t* i) {
	QTextStream& ret = self->operator>>((qulonglong&)(*i));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftRightWithFloat(QTextStream* self, float* f) {
	QTextStream& ret = self->operator>>(static_cast<float&>(*f));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftRightWithDouble(QTextStream* self, double* f) {
	QTextStream& ret = self->operator>>(static_cast<double&>(*f));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftRightWithQString(QTextStream* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QTextStream& ret = self->operator>>(s_QString);
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftRightWithArray(QTextStream* self, QByteArray* array) {
	QTextStream& ret = self->operator>>(*array);
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftRightWithChar(QTextStream* self, char* c) {
	QTextStream& ret = self->operator>>(c);
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftLeft(QTextStream* self, QChar* ch) {
	QTextStream& ret = self->operator<<(*ch);
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithCh(QTextStream* self, char ch) {
	QTextStream& ret = self->operator<<(static_cast<char>(ch));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithShort(QTextStream* self, int16_t i) {
	QTextStream& ret = self->operator<<(static_cast<short>(i));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithUnsignedshort(QTextStream* self, uint16_t i) {
	QTextStream& ret = self->operator<<(static_cast<unsigned short>(i));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithInt(QTextStream* self, int i) {
	QTextStream& ret = self->operator<<(static_cast<int>(i));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithUnsignedint(QTextStream* self, unsigned int i) {
	QTextStream& ret = self->operator<<(static_cast<unsigned int>(i));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithLong(QTextStream* self, long i) {
	QTextStream& ret = self->operator<<(static_cast<long>(i));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithUnsignedlong(QTextStream* self, unsigned long i) {
	QTextStream& ret = self->operator<<(static_cast<unsigned long>(i));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithQlonglong(QTextStream* self, int64_t i) {
	QTextStream& ret = self->operator<<((qlonglong)(i));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithQulonglong(QTextStream* self, uint64_t i) {
	QTextStream& ret = self->operator<<((qulonglong)(i));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithFloat(QTextStream* self, float f) {
	QTextStream& ret = self->operator<<(static_cast<float>(f));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithDouble(QTextStream* self, double f) {
	QTextStream& ret = self->operator<<(static_cast<double>(f));
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithQString(QTextStream* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	QTextStream& ret = self->operator<<(s_QString);
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithArray(QTextStream* self, QByteArray* array) {
	QTextStream& ret = self->operator<<(*array);
	// Cast returned reference into pointer
	return &ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithChar(QTextStream* self, char* c) {
	QTextStream& ret = self->operator<<(c);
	// Cast returned reference into pointer
	return &ret;
}

void QTextStream_ReadLine1(QTextStream* self, int64_t maxlen, char** _out, int* _out_Strlen) {
	QString ret = self->readLine((qint64)(maxlen));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QTextStream_Delete(QTextStream* self) {
	delete self;
}

