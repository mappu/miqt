#include <QByteArray>
#include <QChar>
#include <QIODevice>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextCodec>
#include <QTextStream>
#include "qtextstream.h"
#include "gen_qtextstream.h"
#include "_cgo_export.h"

QTextStream* QTextStream_new() {
	return new QTextStream();
}

QTextStream* QTextStream_new2(QIODevice* device) {
	return new QTextStream(device);
}

QTextStream* QTextStream_new3(QByteArray* array) {
	return new QTextStream(array);
}

QTextStream* QTextStream_new4(QByteArray* array) {
	return new QTextStream(*array);
}

QTextStream* QTextStream_new5(QByteArray* array, int openMode) {
	return new QTextStream(array, static_cast<QIODevice::OpenMode>(openMode));
}

QTextStream* QTextStream_new6(QByteArray* array, int openMode) {
	return new QTextStream(*array, static_cast<QIODevice::OpenMode>(openMode));
}

void QTextStream_SetCodec(QTextStream* self, QTextCodec* codec) {
	self->setCodec(codec);
}

void QTextStream_SetCodecWithCodecName(QTextStream* self, const char* codecName) {
	self->setCodec(codecName);
}

QTextCodec* QTextStream_Codec(const QTextStream* self) {
	return self->codec();
}

void QTextStream_SetAutoDetectUnicode(QTextStream* self, bool enabled) {
	self->setAutoDetectUnicode(enabled);
}

bool QTextStream_AutoDetectUnicode(const QTextStream* self) {
	return self->autoDetectUnicode();
}

void QTextStream_SetGenerateByteOrderMark(QTextStream* self, bool generate) {
	self->setGenerateByteOrderMark(generate);
}

bool QTextStream_GenerateByteOrderMark(const QTextStream* self) {
	return self->generateByteOrderMark();
}

void QTextStream_SetLocale(QTextStream* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QTextStream_Locale(const QTextStream* self) {
	return new QLocale(self->locale());
}

void QTextStream_SetDevice(QTextStream* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QTextStream_Device(const QTextStream* self) {
	return self->device();
}

struct miqt_string* QTextStream_String(const QTextStream* self) {
	QString* _ret = self->string();
	// Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret->toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int QTextStream_Status(const QTextStream* self) {
	QTextStream::Status _ret = self->status();
	return static_cast<int>(_ret);
}

void QTextStream_SetStatus(QTextStream* self, int status) {
	self->setStatus(static_cast<QTextStream::Status>(status));
}

void QTextStream_ResetStatus(QTextStream* self) {
	self->resetStatus();
}

bool QTextStream_AtEnd(const QTextStream* self) {
	return self->atEnd();
}

void QTextStream_Reset(QTextStream* self) {
	self->reset();
}

void QTextStream_Flush(QTextStream* self) {
	self->flush();
}

bool QTextStream_Seek(QTextStream* self, long long pos) {
	return self->seek(static_cast<qint64>(pos));
}

long long QTextStream_Pos(const QTextStream* self) {
	qint64 _ret = self->pos();
	return static_cast<long long>(_ret);
}

void QTextStream_SkipWhiteSpace(QTextStream* self) {
	self->skipWhiteSpace();
}

struct miqt_string* QTextStream_ReadLine(QTextStream* self) {
	QString _ret = self->readLine();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextStream_ReadAll(QTextStream* self) {
	QString _ret = self->readAll();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QTextStream_Read(QTextStream* self, long long maxlen) {
	QString _ret = self->read(static_cast<qint64>(maxlen));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTextStream_SetFieldAlignment(QTextStream* self, int alignment) {
	self->setFieldAlignment(static_cast<QTextStream::FieldAlignment>(alignment));
}

int QTextStream_FieldAlignment(const QTextStream* self) {
	QTextStream::FieldAlignment _ret = self->fieldAlignment();
	return static_cast<int>(_ret);
}

void QTextStream_SetPadChar(QTextStream* self, QChar* ch) {
	self->setPadChar(*ch);
}

QChar* QTextStream_PadChar(const QTextStream* self) {
	return new QChar(self->padChar());
}

void QTextStream_SetFieldWidth(QTextStream* self, int width) {
	self->setFieldWidth(static_cast<int>(width));
}

int QTextStream_FieldWidth(const QTextStream* self) {
	return self->fieldWidth();
}

void QTextStream_SetNumberFlags(QTextStream* self, int flags) {
	self->setNumberFlags(static_cast<QTextStream::NumberFlags>(flags));
}

int QTextStream_NumberFlags(const QTextStream* self) {
	QTextStream::NumberFlags _ret = self->numberFlags();
	return static_cast<int>(_ret);
}

void QTextStream_SetIntegerBase(QTextStream* self, int base) {
	self->setIntegerBase(static_cast<int>(base));
}

int QTextStream_IntegerBase(const QTextStream* self) {
	return self->integerBase();
}

void QTextStream_SetRealNumberNotation(QTextStream* self, int notation) {
	self->setRealNumberNotation(static_cast<QTextStream::RealNumberNotation>(notation));
}

int QTextStream_RealNumberNotation(const QTextStream* self) {
	QTextStream::RealNumberNotation _ret = self->realNumberNotation();
	return static_cast<int>(_ret);
}

void QTextStream_SetRealNumberPrecision(QTextStream* self, int precision) {
	self->setRealNumberPrecision(static_cast<int>(precision));
}

int QTextStream_RealNumberPrecision(const QTextStream* self) {
	return self->realNumberPrecision();
}

QTextStream* QTextStream_OperatorShiftRight(QTextStream* self, QChar* ch) {
	QTextStream& _ret = self->operator>>(*ch);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftRightWithCh(QTextStream* self, char* ch) {
	QTextStream& _ret = self->operator>>(static_cast<char&>(*ch));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftRightWithShort(QTextStream* self, int16_t* i) {
	QTextStream& _ret = self->operator>>(static_cast<short&>(*i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftRightWithUnsignedshort(QTextStream* self, uint16_t* i) {
	QTextStream& _ret = self->operator>>(static_cast<unsigned short&>(*i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftRightWithInt(QTextStream* self, int* i) {
	QTextStream& _ret = self->operator>>(static_cast<int&>(*i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftRightWithUnsignedint(QTextStream* self, unsigned int* i) {
	QTextStream& _ret = self->operator>>(static_cast<unsigned int&>(*i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftRightWithLong(QTextStream* self, long* i) {
	QTextStream& _ret = self->operator>>(static_cast<long&>(*i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftRightWithUnsignedlong(QTextStream* self, unsigned long* i) {
	QTextStream& _ret = self->operator>>(static_cast<unsigned long&>(*i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftRightWithQlonglong(QTextStream* self, long long* i) {
	QTextStream& _ret = self->operator>>(static_cast<qlonglong&>(*i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftRightWithQulonglong(QTextStream* self, unsigned long long* i) {
	QTextStream& _ret = self->operator>>(static_cast<qulonglong&>(*i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftRightWithFloat(QTextStream* self, float* f) {
	QTextStream& _ret = self->operator>>(static_cast<float&>(*f));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftRightWithDouble(QTextStream* self, double* f) {
	QTextStream& _ret = self->operator>>(static_cast<double&>(*f));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftRightWithQString(QTextStream* self, struct miqt_string* s) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	QTextStream& _ret = self->operator>>(s_QString);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftRightWithArray(QTextStream* self, QByteArray* array) {
	QTextStream& _ret = self->operator>>(*array);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftRightWithChar(QTextStream* self, char* c) {
	QTextStream& _ret = self->operator>>(c);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftLeft(QTextStream* self, QChar* ch) {
	QTextStream& _ret = self->operator<<(*ch);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithCh(QTextStream* self, char ch) {
	QTextStream& _ret = self->operator<<(static_cast<char>(ch));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithShort(QTextStream* self, int16_t i) {
	QTextStream& _ret = self->operator<<(static_cast<short>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithUnsignedshort(QTextStream* self, uint16_t i) {
	QTextStream& _ret = self->operator<<(static_cast<unsigned short>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithInt(QTextStream* self, int i) {
	QTextStream& _ret = self->operator<<(static_cast<int>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithUnsignedint(QTextStream* self, unsigned int i) {
	QTextStream& _ret = self->operator<<(static_cast<unsigned int>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithLong(QTextStream* self, long i) {
	QTextStream& _ret = self->operator<<(static_cast<long>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithUnsignedlong(QTextStream* self, unsigned long i) {
	QTextStream& _ret = self->operator<<(static_cast<unsigned long>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithQlonglong(QTextStream* self, long long i) {
	QTextStream& _ret = self->operator<<(static_cast<qlonglong>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithQulonglong(QTextStream* self, unsigned long long i) {
	QTextStream& _ret = self->operator<<(static_cast<qulonglong>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithFloat(QTextStream* self, float f) {
	QTextStream& _ret = self->operator<<(static_cast<float>(f));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithDouble(QTextStream* self, double f) {
	QTextStream& _ret = self->operator<<(static_cast<double>(f));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithQString(QTextStream* self, struct miqt_string* s) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	QTextStream& _ret = self->operator<<(s_QString);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithArray(QTextStream* self, QByteArray* array) {
	QTextStream& _ret = self->operator<<(*array);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithChar(QTextStream* self, const char* c) {
	QTextStream& _ret = self->operator<<(c);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_OperatorShiftLeftWithPtr(QTextStream* self, const void* ptr) {
	QTextStream& _ret = self->operator<<(ptr);
	// Cast returned reference into pointer
	return &_ret;
}

struct miqt_string* QTextStream_ReadLine1(QTextStream* self, long long maxlen) {
	QString _ret = self->readLine(static_cast<qint64>(maxlen));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QTextStream_Delete(QTextStream* self) {
	delete self;
}

