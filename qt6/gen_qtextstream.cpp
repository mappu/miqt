#include <QByteArray>
#include <QChar>
#include <QIODevice>
#include <QIODeviceBase>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextStream>
#include <qtextstream.h>
#include "gen_qtextstream.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QTextStream* QTextStream_new() {
	return new QTextStream();
}

QTextStream* QTextStream_new2(QIODevice* device) {
	return new QTextStream(device);
}

QTextStream* QTextStream_new3(struct miqt_string array) {
	QByteArray array_QByteArray(array.data, array.len);
	return new QTextStream(array_QByteArray);
}

QTextStream* QTextStream_new4(struct miqt_string array, int openMode) {
	QByteArray array_QByteArray(array.data, array.len);
	return new QTextStream(array_QByteArray, static_cast<QIODeviceBase::OpenMode>(openMode));
}

void QTextStream_virtbase(QTextStream* src, QIODeviceBase** outptr_QIODeviceBase) {
	*outptr_QIODeviceBase = static_cast<QIODeviceBase*>(src);
}

void QTextStream_setEncoding(QTextStream* self, int encoding) {
	self->setEncoding(static_cast<QStringConverter::Encoding>(encoding));
}

int QTextStream_encoding(const QTextStream* self) {
	QStringConverter::Encoding _ret = self->encoding();
	return static_cast<int>(_ret);
}

void QTextStream_setAutoDetectUnicode(QTextStream* self, bool enabled) {
	self->setAutoDetectUnicode(enabled);
}

bool QTextStream_autoDetectUnicode(const QTextStream* self) {
	return self->autoDetectUnicode();
}

void QTextStream_setGenerateByteOrderMark(QTextStream* self, bool generate) {
	self->setGenerateByteOrderMark(generate);
}

bool QTextStream_generateByteOrderMark(const QTextStream* self) {
	return self->generateByteOrderMark();
}

void QTextStream_setLocale(QTextStream* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QTextStream_locale(const QTextStream* self) {
	return new QLocale(self->locale());
}

void QTextStream_setDevice(QTextStream* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QTextStream_device(const QTextStream* self) {
	return self->device();
}

struct miqt_string QTextStream_string(const QTextStream* self) {
	QString* _ret = self->string();
	// Convert QString pointer from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret->toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTextStream_status(const QTextStream* self) {
	QTextStream::Status _ret = self->status();
	return static_cast<int>(_ret);
}

void QTextStream_setStatus(QTextStream* self, int status) {
	self->setStatus(static_cast<QTextStream::Status>(status));
}

void QTextStream_resetStatus(QTextStream* self) {
	self->resetStatus();
}

bool QTextStream_atEnd(const QTextStream* self) {
	return self->atEnd();
}

void QTextStream_reset(QTextStream* self) {
	self->reset();
}

void QTextStream_flush(QTextStream* self) {
	self->flush();
}

bool QTextStream_seek(QTextStream* self, long long pos) {
	return self->seek(static_cast<qint64>(pos));
}

long long QTextStream_pos(const QTextStream* self) {
	qint64 _ret = self->pos();
	return static_cast<long long>(_ret);
}

void QTextStream_skipWhiteSpace(QTextStream* self) {
	self->skipWhiteSpace();
}

struct miqt_string QTextStream_readLine(QTextStream* self) {
	QString _ret = self->readLine();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextStream_readAll(QTextStream* self) {
	QString _ret = self->readAll();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTextStream_read(QTextStream* self, long long maxlen) {
	QString _ret = self->read(static_cast<qint64>(maxlen));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextStream_setFieldAlignment(QTextStream* self, int alignment) {
	self->setFieldAlignment(static_cast<QTextStream::FieldAlignment>(alignment));
}

int QTextStream_fieldAlignment(const QTextStream* self) {
	QTextStream::FieldAlignment _ret = self->fieldAlignment();
	return static_cast<int>(_ret);
}

void QTextStream_setPadChar(QTextStream* self, QChar* ch) {
	self->setPadChar(*ch);
}

QChar* QTextStream_padChar(const QTextStream* self) {
	return new QChar(self->padChar());
}

void QTextStream_setFieldWidth(QTextStream* self, int width) {
	self->setFieldWidth(static_cast<int>(width));
}

int QTextStream_fieldWidth(const QTextStream* self) {
	return self->fieldWidth();
}

void QTextStream_setNumberFlags(QTextStream* self, int flags) {
	self->setNumberFlags(static_cast<QTextStream::NumberFlags>(flags));
}

int QTextStream_numberFlags(const QTextStream* self) {
	QTextStream::NumberFlags _ret = self->numberFlags();
	return static_cast<int>(_ret);
}

void QTextStream_setIntegerBase(QTextStream* self, int base) {
	self->setIntegerBase(static_cast<int>(base));
}

int QTextStream_integerBase(const QTextStream* self) {
	return self->integerBase();
}

void QTextStream_setRealNumberNotation(QTextStream* self, int notation) {
	self->setRealNumberNotation(static_cast<QTextStream::RealNumberNotation>(notation));
}

int QTextStream_realNumberNotation(const QTextStream* self) {
	QTextStream::RealNumberNotation _ret = self->realNumberNotation();
	return static_cast<int>(_ret);
}

void QTextStream_setRealNumberPrecision(QTextStream* self, int precision) {
	self->setRealNumberPrecision(static_cast<int>(precision));
}

int QTextStream_realNumberPrecision(const QTextStream* self) {
	return self->realNumberPrecision();
}

QTextStream* QTextStream_operatorShiftRight(QTextStream* self, QChar* ch) {
	QTextStream& _ret = self->operator>>(*ch);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithCh(QTextStream* self, char* ch) {
	QTextStream& _ret = self->operator>>(static_cast<char&>(*ch));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithShort(QTextStream* self, int16_t* i) {
	QTextStream& _ret = self->operator>>(static_cast<short&>(*i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithUnsignedshort(QTextStream* self, uint16_t* i) {
	QTextStream& _ret = self->operator>>(static_cast<unsigned short&>(*i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithInt(QTextStream* self, int* i) {
	QTextStream& _ret = self->operator>>(static_cast<int&>(*i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithUnsignedint(QTextStream* self, unsigned int* i) {
	QTextStream& _ret = self->operator>>(static_cast<unsigned int&>(*i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithLong(QTextStream* self, long* i) {
	QTextStream& _ret = self->operator>>(static_cast<long&>(*i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithUnsignedlong(QTextStream* self, unsigned long* i) {
	QTextStream& _ret = self->operator>>(static_cast<unsigned long&>(*i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithQlonglong(QTextStream* self, long long* i) {
	QTextStream& _ret = self->operator>>(static_cast<qlonglong&>(*i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithQulonglong(QTextStream* self, unsigned long long* i) {
	QTextStream& _ret = self->operator>>(static_cast<qulonglong&>(*i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithFloat(QTextStream* self, float* f) {
	QTextStream& _ret = self->operator>>(static_cast<float&>(*f));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithDouble(QTextStream* self, double* f) {
	QTextStream& _ret = self->operator>>(static_cast<double&>(*f));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithQString(QTextStream* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QTextStream& _ret = self->operator>>(s_QString);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithArray(QTextStream* self, struct miqt_string array) {
	QByteArray array_QByteArray(array.data, array.len);
	QTextStream& _ret = self->operator>>(array_QByteArray);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithChar(QTextStream* self, char* c) {
	QTextStream& _ret = self->operator>>(c);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeft(QTextStream* self, QChar* ch) {
	QTextStream& _ret = self->operator<<(*ch);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithCh(QTextStream* self, char ch) {
	QTextStream& _ret = self->operator<<(static_cast<char>(ch));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithShort(QTextStream* self, int16_t i) {
	QTextStream& _ret = self->operator<<(static_cast<short>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithUnsignedshort(QTextStream* self, uint16_t i) {
	QTextStream& _ret = self->operator<<(static_cast<unsigned short>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithInt(QTextStream* self, int i) {
	QTextStream& _ret = self->operator<<(static_cast<int>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithUnsignedint(QTextStream* self, unsigned int i) {
	QTextStream& _ret = self->operator<<(static_cast<unsigned int>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithLong(QTextStream* self, long i) {
	QTextStream& _ret = self->operator<<(static_cast<long>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithUnsignedlong(QTextStream* self, unsigned long i) {
	QTextStream& _ret = self->operator<<(static_cast<unsigned long>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithQlonglong(QTextStream* self, long long i) {
	QTextStream& _ret = self->operator<<(static_cast<qlonglong>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithQulonglong(QTextStream* self, unsigned long long i) {
	QTextStream& _ret = self->operator<<(static_cast<qulonglong>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithFloat(QTextStream* self, float f) {
	QTextStream& _ret = self->operator<<(static_cast<float>(f));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithDouble(QTextStream* self, double f) {
	QTextStream& _ret = self->operator<<(static_cast<double>(f));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithQString(QTextStream* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	QTextStream& _ret = self->operator<<(s_QString);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithArray(QTextStream* self, struct miqt_string array) {
	QByteArray array_QByteArray(array.data, array.len);
	QTextStream& _ret = self->operator<<(array_QByteArray);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithChar(QTextStream* self, const char* c) {
	QTextStream& _ret = self->operator<<(c);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithPtr(QTextStream* self, const void* ptr) {
	QTextStream& _ret = self->operator<<(ptr);
	// Cast returned reference into pointer
	return &_ret;
}

struct miqt_string QTextStream_readLine1(QTextStream* self, long long maxlen) {
	QString _ret = self->readLine(static_cast<qint64>(maxlen));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTextStream_delete(QTextStream* self) {
	delete self;
}

