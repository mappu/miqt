#include <QByteArray>
#include <QChar>
#include <QIODevice>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextCodec>
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
	return new (std::nothrow) QTextStream();
}

QTextStream* QTextStream_new2(QIODevice* device) {
	return new (std::nothrow) QTextStream(device);
}

QTextStream* QTextStream_new3(struct miqt_string array) {
	QByteArray array_QByteArray(array.data, array.len);
	return new (std::nothrow) QTextStream(array_QByteArray);
}

QTextStream* QTextStream_new4(struct miqt_string array, int openMode) {
	QByteArray array_QByteArray(array.data, array.len);
	return new (std::nothrow) QTextStream(array_QByteArray, static_cast<QIODevice::OpenMode>(openMode));
}

void QTextStream_setCodec(QTextStream* self, QTextCodec* codec) {
	self->setCodec(codec);
}

void QTextStream_setCodecWithCodecName(QTextStream* self, const char* codecName) {
	self->setCodec(codecName);
}

QTextCodec* QTextStream_codec(const QTextStream* self) {
	return self->codec();
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

QTextStream* QTextStream_operatorShiftRightWithShort(QTextStream* self, short* i) {
	QTextStream& _ret = self->operator>>(static_cast<short&>(*i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftRightWithUnsignedshort(QTextStream* self, unsigned short* i) {
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

QTextStream* QTextStream_operatorShiftLeftWithShort(QTextStream* self, short i) {
	QTextStream& _ret = self->operator<<(static_cast<short>(i));
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* QTextStream_operatorShiftLeftWithUnsignedshort(QTextStream* self, unsigned short i) {
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

struct miqt_string QTextStream_readLineWithMaxlen(QTextStream* self, long long maxlen) {
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

QTextStream* miqt_BinWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::bin(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_OctWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::oct(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_DecWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::dec(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_HexWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::hex(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_ShowbaseWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::showbase(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_ForcesignWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::forcesign(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_ForcepointWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::forcepoint(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_NoshowbaseWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::noshowbase(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_NoforcesignWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::noforcesign(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_NoforcepointWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::noforcepoint(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_UppercasebaseWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::uppercasebase(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_UppercasedigitsWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::uppercasedigits(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_LowercasebaseWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::lowercasebase(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_LowercasedigitsWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::lowercasedigits(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_FixedWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::fixed(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_ScientificWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::scientific(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_LeftWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::left(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_RightWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::right(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_CenterWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::center(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_EndlWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::endl(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_FlushWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::flush(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_ResetWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::reset(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_BomWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::bom(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_WsWithQTextStream(QTextStream* s) {

	QTextStream& _ret = Qt::ws(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_BinWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::bin(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_OctWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::oct(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_DecWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::dec(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_HexWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::hex(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_ShowbaseWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::showbase(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_ForcesignWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::forcesign(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_ForcepointWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::forcepoint(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_NoshowbaseWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::noshowbase(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_NoforcesignWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::noforcesign(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_NoforcepointWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::noforcepoint(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_UppercasebaseWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::uppercasebase(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_UppercasedigitsWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::uppercasedigits(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_LowercasebaseWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::lowercasebase(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_LowercasedigitsWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::lowercasedigits(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_FixedWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::fixed(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_ScientificWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::scientific(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_LeftWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::left(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_RightWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::right(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_CenterWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::center(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_EndlWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::endl(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_FlushWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::flush(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_ResetWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::reset(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_BomWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::bom(*s);
	// Cast returned reference into pointer
	return &_ret;
}

QTextStream* miqt_QTextStreamFunctions_WsWithQTextStream(QTextStream* s) {

	QTextStream& _ret = QTextStreamFunctions::ws(*s);
	// Cast returned reference into pointer
	return &_ret;
}

