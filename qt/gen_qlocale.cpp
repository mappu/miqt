#include <QCalendar>
#include <QChar>
#include <QDate>
#include <QDateTime>
#include <QList>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTime>
#include "qlocale.h"

#include "gen_qlocale.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QLocale* QLocale_new() {
	return new QLocale();
}

QLocale* QLocale_new2(const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	return new QLocale(name_QString);
}

QLocale* QLocale_new3(uintptr_t language) {
	return new QLocale(static_cast<QLocale::Language>(language));
}

QLocale* QLocale_new4(uintptr_t language, uintptr_t script, uintptr_t country) {
	return new QLocale(static_cast<QLocale::Language>(language), static_cast<QLocale::Script>(script), static_cast<QLocale::Country>(country));
}

QLocale* QLocale_new5(QLocale* other) {
	return new QLocale(*other);
}

QLocale* QLocale_new6(uintptr_t language, uintptr_t country) {
	return new QLocale(static_cast<QLocale::Language>(language), static_cast<QLocale::Country>(country));
}

void QLocale_OperatorAssign(QLocale* self, QLocale* other) {
	self->operator=(*other);
}

void QLocale_Swap(QLocale* self, QLocale* other) {
	self->swap(*other);
}

uintptr_t QLocale_Language(QLocale* self) {
	QLocale::Language ret = const_cast<const QLocale*>(self)->language();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QLocale_Script(QLocale* self) {
	QLocale::Script ret = const_cast<const QLocale*>(self)->script();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QLocale_Country(QLocale* self) {
	QLocale::Country ret = const_cast<const QLocale*>(self)->country();
	return static_cast<uintptr_t>(ret);
}

void QLocale_Name(QLocale* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_Bcp47Name(QLocale* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->bcp47Name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_NativeLanguageName(QLocale* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->nativeLanguageName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_NativeCountryName(QLocale* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->nativeCountryName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int16_t QLocale_ToShort(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return const_cast<const QLocale*>(self)->toShort(s_QString);
}

uint16_t QLocale_ToUShort(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return const_cast<const QLocale*>(self)->toUShort(s_QString);
}

int QLocale_ToInt(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return const_cast<const QLocale*>(self)->toInt(s_QString);
}

unsigned int QLocale_ToUInt(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return const_cast<const QLocale*>(self)->toUInt(s_QString);
}

long QLocale_ToLong(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return const_cast<const QLocale*>(self)->toLong(s_QString);
}

unsigned long QLocale_ToULong(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return const_cast<const QLocale*>(self)->toULong(s_QString);
}

int64_t QLocale_ToLongLong(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return const_cast<const QLocale*>(self)->toLongLong(s_QString);
}

uint64_t QLocale_ToULongLong(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return const_cast<const QLocale*>(self)->toULongLong(s_QString);
}

float QLocale_ToFloat(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return const_cast<const QLocale*>(self)->toFloat(s_QString);
}

double QLocale_ToDouble(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return const_cast<const QLocale*>(self)->toDouble(s_QString);
}

void QLocale_ToString(QLocale* self, int64_t i, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toString((qlonglong)(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithQulonglong(QLocale* self, uint64_t i, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toString((qulonglong)(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithLong(QLocale* self, long i, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toString(static_cast<long>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithUlong(QLocale* self, unsigned long i, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toString(static_cast<ulong>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithShort(QLocale* self, int16_t i, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toString(static_cast<short>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithUshort(QLocale* self, uint16_t i, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toString(static_cast<ushort>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithInt(QLocale* self, int i, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toString(static_cast<int>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithUint(QLocale* self, unsigned int i, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toString(static_cast<uint>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithDouble(QLocale* self, double i, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toString(static_cast<double>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithFloat(QLocale* self, float i, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toString(static_cast<float>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToString2(QLocale* self, QDate* date, const char* formatStr, size_t formatStr_Strlen, char** _out, int* _out_Strlen) {
	QString formatStr_QString = QString::fromUtf8(formatStr, formatStr_Strlen);
	QString ret = const_cast<const QLocale*>(self)->toString(*date, formatStr_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToString3(QLocale* self, QTime* time, const char* formatStr, size_t formatStr_Strlen, char** _out, int* _out_Strlen) {
	QString formatStr_QString = QString::fromUtf8(formatStr, formatStr_Strlen);
	QString ret = const_cast<const QLocale*>(self)->toString(*time, formatStr_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToString4(QLocale* self, QDateTime* dateTime, const char* format, size_t format_Strlen, char** _out, int* _out_Strlen) {
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QString ret = const_cast<const QLocale*>(self)->toString(*dateTime, format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithDate(QLocale* self, QDate* date, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toString(*date);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithTime(QLocale* self, QTime* time, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toString(*time);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithDateTime(QLocale* self, QDateTime* dateTime, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toString(*dateTime);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToString9(QLocale* self, QDate* date, uintptr_t format, QCalendar* cal, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toString(*date, static_cast<QLocale::FormatType>(format), *cal);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToString10(QLocale* self, QDateTime* dateTime, uintptr_t format, QCalendar* cal, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toString(*dateTime, static_cast<QLocale::FormatType>(format), *cal);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_DateFormat(QLocale* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->dateFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_TimeFormat(QLocale* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->timeFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_DateTimeFormat(QLocale* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->dateTimeFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDate* QLocale_ToDate(QLocale* self, const char* stringVal, size_t stringVal_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QDate ret = const_cast<const QLocale*>(self)->toDate(stringVal_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QTime* QLocale_ToTime(QLocale* self, const char* stringVal, size_t stringVal_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QTime ret = const_cast<const QLocale*>(self)->toTime(stringVal_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

QDateTime* QLocale_ToDateTime(QLocale* self, const char* stringVal, size_t stringVal_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QDateTime ret = const_cast<const QLocale*>(self)->toDateTime(stringVal_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDate* QLocale_ToDate2(QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QDate ret = const_cast<const QLocale*>(self)->toDate(stringVal_QString, format_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QTime* QLocale_ToTime2(QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QTime ret = const_cast<const QLocale*>(self)->toTime(stringVal_QString, format_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

QDateTime* QLocale_ToDateTime2(QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QDateTime ret = const_cast<const QLocale*>(self)->toDateTime(stringVal_QString, format_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDate* QLocale_ToDate3(QLocale* self, const char* stringVal, size_t stringVal_Strlen, uintptr_t format, QCalendar* cal) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QDate ret = const_cast<const QLocale*>(self)->toDate(stringVal_QString, static_cast<QLocale::FormatType>(format), *cal);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QDateTime* QLocale_ToDateTime3(QLocale* self, const char* stringVal, size_t stringVal_Strlen, uintptr_t format, QCalendar* cal) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QDateTime ret = const_cast<const QLocale*>(self)->toDateTime(stringVal_QString, static_cast<QLocale::FormatType>(format), *cal);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDate* QLocale_ToDate4(QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen, QCalendar* cal) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QDate ret = const_cast<const QLocale*>(self)->toDate(stringVal_QString, format_QString, *cal);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QDateTime* QLocale_ToDateTime4(QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen, QCalendar* cal) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QDateTime ret = const_cast<const QLocale*>(self)->toDateTime(stringVal_QString, format_QString, *cal);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QTime* QLocale_ToTime3(QLocale* self, const char* stringVal, size_t stringVal_Strlen, uintptr_t format, QCalendar* cal) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QTime ret = const_cast<const QLocale*>(self)->toTime(stringVal_QString, static_cast<QLocale::FormatType>(format), *cal);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

QTime* QLocale_ToTime4(QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen, QCalendar* cal) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QTime ret = const_cast<const QLocale*>(self)->toTime(stringVal_QString, format_QString, *cal);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

QChar* QLocale_DecimalPoint(QLocale* self) {
	QChar ret = const_cast<const QLocale*>(self)->decimalPoint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QLocale_GroupSeparator(QLocale* self) {
	QChar ret = const_cast<const QLocale*>(self)->groupSeparator();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QLocale_Percent(QLocale* self) {
	QChar ret = const_cast<const QLocale*>(self)->percent();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QLocale_ZeroDigit(QLocale* self) {
	QChar ret = const_cast<const QLocale*>(self)->zeroDigit();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QLocale_NegativeSign(QLocale* self) {
	QChar ret = const_cast<const QLocale*>(self)->negativeSign();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QLocale_PositiveSign(QLocale* self) {
	QChar ret = const_cast<const QLocale*>(self)->positiveSign();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QLocale_Exponential(QLocale* self) {
	QChar ret = const_cast<const QLocale*>(self)->exponential();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

void QLocale_MonthName(QLocale* self, int param1, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->monthName(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_StandaloneMonthName(QLocale* self, int param1, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->standaloneMonthName(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_DayName(QLocale* self, int param1, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->dayName(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_StandaloneDayName(QLocale* self, int param1, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->standaloneDayName(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QLocale_FirstDayOfWeek(QLocale* self) {
	Qt::DayOfWeek ret = const_cast<const QLocale*>(self)->firstDayOfWeek();
	return static_cast<uintptr_t>(ret);
}

void QLocale_Weekdays(QLocale* self, uintptr_t** _out, size_t* _out_len) {
	QList<Qt::DayOfWeek> ret = const_cast<const QLocale*>(self)->weekdays();
	// Convert QList<> from C++ memory to manually-managed C memory
	uintptr_t* __out = static_cast<uintptr_t*>(malloc(sizeof(uintptr_t) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QLocale_AmText(QLocale* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->amText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_PmText(QLocale* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->pmText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QLocale_MeasurementSystem(QLocale* self) {
	QLocale::MeasurementSystem ret = const_cast<const QLocale*>(self)->measurementSystem();
	return static_cast<uintptr_t>(ret);
}

QLocale* QLocale_Collation(QLocale* self) {
	QLocale ret = const_cast<const QLocale*>(self)->collation();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLocale*>(new QLocale(ret));
}

uintptr_t QLocale_TextDirection(QLocale* self) {
	Qt::LayoutDirection ret = const_cast<const QLocale*>(self)->textDirection();
	return static_cast<uintptr_t>(ret);
}

void QLocale_ToUpper(QLocale* self, const char* str, size_t str_Strlen, char** _out, int* _out_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QString ret = const_cast<const QLocale*>(self)->toUpper(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToLower(QLocale* self, const char* str, size_t str_Strlen, char** _out, int* _out_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QString ret = const_cast<const QLocale*>(self)->toLower(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_CurrencySymbol(QLocale* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->currencySymbol();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyString(QLocale* self, int64_t param1, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toCurrencyString((qlonglong)(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyStringWithQulonglong(QLocale* self, uint64_t param1, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toCurrencyString((qulonglong)(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyStringWithShort(QLocale* self, int16_t param1, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toCurrencyString(static_cast<short>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyStringWithUshort(QLocale* self, uint16_t param1, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toCurrencyString(static_cast<ushort>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyStringWithInt(QLocale* self, int param1, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toCurrencyString(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyStringWithUint(QLocale* self, unsigned int param1, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toCurrencyString(static_cast<uint>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyStringWithDouble(QLocale* self, double param1, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toCurrencyString(static_cast<double>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyString2(QLocale* self, double param1, const char* symbol, size_t symbol_Strlen, int precision, char** _out, int* _out_Strlen) {
	QString symbol_QString = QString::fromUtf8(symbol, symbol_Strlen);
	QString ret = const_cast<const QLocale*>(self)->toCurrencyString(static_cast<double>(param1), symbol_QString, static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyStringWithFloat(QLocale* self, float i, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->toCurrencyString(static_cast<float>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyString3(QLocale* self, float i, const char* symbol, size_t symbol_Strlen, int precision, char** _out, int* _out_Strlen) {
	QString symbol_QString = QString::fromUtf8(symbol, symbol_Strlen);
	QString ret = const_cast<const QLocale*>(self)->toCurrencyString(static_cast<float>(i), symbol_QString, static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_FormattedDataSize(QLocale* self, long long bytes, char** _out, int* _out_Strlen) {
	QString ret = self->formattedDataSize(static_cast<qint64>(bytes));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_FormattedDataSizeWithBytes(QLocale* self, long long bytes, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QLocale*>(self)->formattedDataSize(static_cast<qint64>(bytes));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_UiLanguages(QLocale* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = const_cast<const QLocale*>(self)->uiLanguages();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

bool QLocale_OperatorEqual(QLocale* self, QLocale* other) {
	return const_cast<const QLocale*>(self)->operator==(*other);
}

bool QLocale_OperatorNotEqual(QLocale* self, QLocale* other) {
	return const_cast<const QLocale*>(self)->operator!=(*other);
}

void QLocale_LanguageToString(uintptr_t language, char** _out, int* _out_Strlen) {
	QString ret = QLocale::languageToString(static_cast<QLocale::Language>(language));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_CountryToString(uintptr_t country, char** _out, int* _out_Strlen) {
	QString ret = QLocale::countryToString(static_cast<QLocale::Country>(country));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ScriptToString(uintptr_t script, char** _out, int* _out_Strlen) {
	QString ret = QLocale::scriptToString(static_cast<QLocale::Script>(script));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_SetDefault(QLocale* locale) {
	QLocale::setDefault(*locale);
}

QLocale* QLocale_C() {
	QLocale ret = QLocale::c();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLocale*>(new QLocale(ret));
}

QLocale* QLocale_System() {
	QLocale ret = QLocale::system();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLocale*>(new QLocale(ret));
}

void QLocale_MatchingLocales(uintptr_t language, uintptr_t script, uintptr_t country, QLocale*** _out, size_t* _out_len) {
	QList<QLocale> ret = QLocale::matchingLocales(static_cast<QLocale::Language>(language), static_cast<QLocale::Script>(script), static_cast<QLocale::Country>(country));
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QLocale** __out = static_cast<QLocale**>(malloc(sizeof(QLocale**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QLocale(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QLocale_CountriesForLanguage(uintptr_t lang, uintptr_t** _out, size_t* _out_len) {
	QList<QLocale::Country> ret = QLocale::countriesForLanguage(static_cast<QLocale::Language>(lang));
	// Convert QList<> from C++ memory to manually-managed C memory
	uintptr_t* __out = static_cast<uintptr_t*>(malloc(sizeof(uintptr_t) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QLocale_SetNumberOptions(QLocale* self, int options) {
	self->setNumberOptions(static_cast<QLocale::NumberOptions>(options));
}

int QLocale_NumberOptions(QLocale* self) {
	QLocale::NumberOptions ret = const_cast<const QLocale*>(self)->numberOptions();
	return static_cast<int>(ret);
}

void QLocale_QuoteString(QLocale* self, const char* str, size_t str_Strlen, char** _out, int* _out_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QString ret = const_cast<const QLocale*>(self)->quoteString(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_CreateSeparatedList(QLocale* self, char** strl, uint64_t* strl_Lengths, size_t strl_len, char** _out, int* _out_Strlen) {
	QList<QString> strl_QList;
	strl_QList.reserve(strl_len);
	for(size_t i = 0; i < strl_len; ++i) {
		strl_QList.push_back(QString::fromUtf8(strl[i], strl_Lengths[i]));
	}
	QString ret = const_cast<const QLocale*>(self)->createSeparatedList(strl_QList);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int16_t QLocale_ToShort2(QLocale* self, const char* s, size_t s_Strlen, bool* ok) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toShort(s_QString, ok);
}

uint16_t QLocale_ToUShort2(QLocale* self, const char* s, size_t s_Strlen, bool* ok) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toUShort(s_QString, ok);
}

int QLocale_ToInt2(QLocale* self, const char* s, size_t s_Strlen, bool* ok) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toInt(s_QString, ok);
}

unsigned int QLocale_ToUInt2(QLocale* self, const char* s, size_t s_Strlen, bool* ok) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toUInt(s_QString, ok);
}

long QLocale_ToLong2(QLocale* self, const char* s, size_t s_Strlen, bool* ok) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toLong(s_QString, ok);
}

unsigned long QLocale_ToULong2(QLocale* self, const char* s, size_t s_Strlen, bool* ok) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toULong(s_QString, ok);
}

int64_t QLocale_ToLongLong2(QLocale* self, const char* s, size_t s_Strlen, bool* ok) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toLongLong(s_QString, ok);
}

uint64_t QLocale_ToULongLong2(QLocale* self, const char* s, size_t s_Strlen, bool* ok) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toULongLong(s_QString, ok);
}

float QLocale_ToFloat2(QLocale* self, const char* s, size_t s_Strlen, bool* ok) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toFloat(s_QString, ok);
}

double QLocale_ToDouble2(QLocale* self, const char* s, size_t s_Strlen, bool* ok) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toDouble(s_QString, ok);
}

void QLocale_ToString22(QLocale* self, double i, char f, char** _out, int* _out_Strlen) {
	QString ret = self->toString(static_cast<double>(i), static_cast<char>(f));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToString32(QLocale* self, double i, char f, int prec, char** _out, int* _out_Strlen) {
	QString ret = self->toString(static_cast<double>(i), static_cast<char>(f), static_cast<int>(prec));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToString23(QLocale* self, float i, char f, char** _out, int* _out_Strlen) {
	QString ret = self->toString(static_cast<float>(i), static_cast<char>(f));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToString33(QLocale* self, float i, char f, int prec, char** _out, int* _out_Strlen) {
	QString ret = self->toString(static_cast<float>(i), static_cast<char>(f), static_cast<int>(prec));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToString24(QLocale* self, QDate* date, uintptr_t format, char** _out, int* _out_Strlen) {
	QString ret = self->toString(*date, static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToString25(QLocale* self, QTime* time, uintptr_t format, char** _out, int* _out_Strlen) {
	QString ret = self->toString(*time, static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToString26(QLocale* self, QDateTime* dateTime, uintptr_t format, char** _out, int* _out_Strlen) {
	QString ret = self->toString(*dateTime, static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_DateFormat1(QLocale* self, uintptr_t format, char** _out, int* _out_Strlen) {
	QString ret = self->dateFormat(static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_TimeFormat1(QLocale* self, uintptr_t format, char** _out, int* _out_Strlen) {
	QString ret = self->timeFormat(static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_DateTimeFormat1(QLocale* self, uintptr_t format, char** _out, int* _out_Strlen) {
	QString ret = self->dateTimeFormat(static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDate* QLocale_ToDate22(QLocale* self, const char* stringVal, size_t stringVal_Strlen, uintptr_t param2) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QDate ret = self->toDate(stringVal_QString, static_cast<QLocale::FormatType>(param2));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QTime* QLocale_ToTime22(QLocale* self, const char* stringVal, size_t stringVal_Strlen, uintptr_t param2) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QTime ret = self->toTime(stringVal_QString, static_cast<QLocale::FormatType>(param2));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

QDateTime* QLocale_ToDateTime22(QLocale* self, const char* stringVal, size_t stringVal_Strlen, uintptr_t format) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QDateTime ret = self->toDateTime(stringVal_QString, static_cast<QLocale::FormatType>(format));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

void QLocale_MonthName2(QLocale* self, int param1, uintptr_t format, char** _out, int* _out_Strlen) {
	QString ret = self->monthName(static_cast<int>(param1), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_StandaloneMonthName2(QLocale* self, int param1, uintptr_t format, char** _out, int* _out_Strlen) {
	QString ret = self->standaloneMonthName(static_cast<int>(param1), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_DayName2(QLocale* self, int param1, uintptr_t format, char** _out, int* _out_Strlen) {
	QString ret = self->dayName(static_cast<int>(param1), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_StandaloneDayName2(QLocale* self, int param1, uintptr_t format, char** _out, int* _out_Strlen) {
	QString ret = self->standaloneDayName(static_cast<int>(param1), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_CurrencySymbol1(QLocale* self, uintptr_t param1, char** _out, int* _out_Strlen) {
	QString ret = self->currencySymbol(static_cast<QLocale::CurrencySymbolFormat>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyString22(QLocale* self, int64_t param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen) {
	QString symbol_QString = QString::fromUtf8(symbol, symbol_Strlen);
	QString ret = self->toCurrencyString((qlonglong)(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyString23(QLocale* self, uint64_t param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen) {
	QString symbol_QString = QString::fromUtf8(symbol, symbol_Strlen);
	QString ret = self->toCurrencyString((qulonglong)(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyString24(QLocale* self, int16_t param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen) {
	QString symbol_QString = QString::fromUtf8(symbol, symbol_Strlen);
	QString ret = self->toCurrencyString(static_cast<short>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyString25(QLocale* self, uint16_t param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen) {
	QString symbol_QString = QString::fromUtf8(symbol, symbol_Strlen);
	QString ret = self->toCurrencyString(static_cast<ushort>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyString26(QLocale* self, int param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen) {
	QString symbol_QString = QString::fromUtf8(symbol, symbol_Strlen);
	QString ret = self->toCurrencyString(static_cast<int>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyString27(QLocale* self, unsigned int param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen) {
	QString symbol_QString = QString::fromUtf8(symbol, symbol_Strlen);
	QString ret = self->toCurrencyString(static_cast<uint>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyString28(QLocale* self, double param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen) {
	QString symbol_QString = QString::fromUtf8(symbol, symbol_Strlen);
	QString ret = self->toCurrencyString(static_cast<double>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyString29(QLocale* self, float i, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen) {
	QString symbol_QString = QString::fromUtf8(symbol, symbol_Strlen);
	QString ret = self->toCurrencyString(static_cast<float>(i), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_FormattedDataSize2(QLocale* self, long long bytes, int precision, char** _out, int* _out_Strlen) {
	QString ret = self->formattedDataSize(static_cast<qint64>(bytes), static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_FormattedDataSize3(QLocale* self, long long bytes, int precision, int format, char** _out, int* _out_Strlen) {
	QString ret = self->formattedDataSize(static_cast<qint64>(bytes), static_cast<int>(precision), static_cast<QLocale::DataSizeFormats>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_FormattedDataSize22(QLocale* self, long long bytes, int precision, char** _out, int* _out_Strlen) {
	QString ret = self->formattedDataSize(static_cast<qint64>(bytes), static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_FormattedDataSize32(QLocale* self, long long bytes, int precision, int format, char** _out, int* _out_Strlen) {
	QString ret = self->formattedDataSize(static_cast<qint64>(bytes), static_cast<int>(precision), static_cast<QLocale::DataSizeFormats>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_QuoteString2(QLocale* self, const char* str, size_t str_Strlen, uintptr_t style, char** _out, int* _out_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QString ret = self->quoteString(str_QString, static_cast<QLocale::QuotationStyle>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_Delete(QLocale* self) {
	delete self;
}

