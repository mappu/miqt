#include <QCalendar>
#define WORKAROUND_INNER_CLASS_DEFINITION_QCalendar__YearMonthDay
#include <QDate>
#include <QList>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qcalendar.h"

#include "gen_qcalendar.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QCalendar* QCalendar_new() {
	return new QCalendar();
}

QCalendar* QCalendar_new2(uintptr_t system) {
	return new QCalendar(static_cast<QCalendar::System>(system));
}

bool QCalendar_IsValid(QCalendar* self) {
	return const_cast<const QCalendar*>(self)->isValid();
}

int QCalendar_DaysInMonth(QCalendar* self, int month) {
	return const_cast<const QCalendar*>(self)->daysInMonth(static_cast<int>(month));
}

int QCalendar_DaysInYear(QCalendar* self, int year) {
	return const_cast<const QCalendar*>(self)->daysInYear(static_cast<int>(year));
}

int QCalendar_MonthsInYear(QCalendar* self, int year) {
	return const_cast<const QCalendar*>(self)->monthsInYear(static_cast<int>(year));
}

bool QCalendar_IsDateValid(QCalendar* self, int year, int month, int day) {
	return const_cast<const QCalendar*>(self)->isDateValid(static_cast<int>(year), static_cast<int>(month), static_cast<int>(day));
}

bool QCalendar_IsLeapYear(QCalendar* self, int year) {
	return const_cast<const QCalendar*>(self)->isLeapYear(static_cast<int>(year));
}

bool QCalendar_IsGregorian(QCalendar* self) {
	return const_cast<const QCalendar*>(self)->isGregorian();
}

bool QCalendar_IsLunar(QCalendar* self) {
	return const_cast<const QCalendar*>(self)->isLunar();
}

bool QCalendar_IsLuniSolar(QCalendar* self) {
	return const_cast<const QCalendar*>(self)->isLuniSolar();
}

bool QCalendar_IsSolar(QCalendar* self) {
	return const_cast<const QCalendar*>(self)->isSolar();
}

bool QCalendar_IsProleptic(QCalendar* self) {
	return const_cast<const QCalendar*>(self)->isProleptic();
}

bool QCalendar_HasYearZero(QCalendar* self) {
	return const_cast<const QCalendar*>(self)->hasYearZero();
}

int QCalendar_MaximumDaysInMonth(QCalendar* self) {
	return const_cast<const QCalendar*>(self)->maximumDaysInMonth();
}

int QCalendar_MinimumDaysInMonth(QCalendar* self) {
	return const_cast<const QCalendar*>(self)->minimumDaysInMonth();
}

int QCalendar_MaximumMonthsInYear(QCalendar* self) {
	return const_cast<const QCalendar*>(self)->maximumMonthsInYear();
}

void QCalendar_Name(QCalendar* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QCalendar*>(self)->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDate* QCalendar_DateFromParts(QCalendar* self, int year, int month, int day) {
	QDate ret = const_cast<const QCalendar*>(self)->dateFromParts(static_cast<int>(year), static_cast<int>(month), static_cast<int>(day));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QDate* QCalendar_DateFromPartsWithParts(QCalendar* self, QCalendar__YearMonthDay* parts) {
	QDate ret = const_cast<const QCalendar*>(self)->dateFromParts(*parts);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QCalendar__YearMonthDay* QCalendar_PartsFromDate(QCalendar* self, QDate* date) {
	QCalendar::YearMonthDay ret = const_cast<const QCalendar*>(self)->partsFromDate(*date);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCalendar::YearMonthDay*>(new QCalendar::YearMonthDay(ret));
}

int QCalendar_DayOfWeek(QCalendar* self, QDate* date) {
	return const_cast<const QCalendar*>(self)->dayOfWeek(*date);
}

void QCalendar_MonthName(QCalendar* self, QLocale* locale, int month, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QCalendar*>(self)->monthName(*locale, static_cast<int>(month));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCalendar_StandaloneMonthName(QCalendar* self, QLocale* locale, int month, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QCalendar*>(self)->standaloneMonthName(*locale, static_cast<int>(month));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCalendar_WeekDayName(QCalendar* self, QLocale* locale, int day, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QCalendar*>(self)->weekDayName(*locale, static_cast<int>(day));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCalendar_StandaloneWeekDayName(QCalendar* self, QLocale* locale, int day, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QCalendar*>(self)->standaloneWeekDayName(*locale, static_cast<int>(day));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCalendar_AvailableCalendars(char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = QCalendar::availableCalendars();
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

int QCalendar_DaysInMonth2(QCalendar* self, int month, int year) {
	return const_cast<const QCalendar*>(self)->daysInMonth(static_cast<int>(month), static_cast<int>(year));
}

void QCalendar_MonthName3(QCalendar* self, QLocale* locale, int month, int year, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QCalendar*>(self)->monthName(*locale, static_cast<int>(month), static_cast<int>(year));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCalendar_MonthName4(QCalendar* self, QLocale* locale, int month, int year, uintptr_t format, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QCalendar*>(self)->monthName(*locale, static_cast<int>(month), static_cast<int>(year), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCalendar_StandaloneMonthName3(QCalendar* self, QLocale* locale, int month, int year, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QCalendar*>(self)->standaloneMonthName(*locale, static_cast<int>(month), static_cast<int>(year));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCalendar_StandaloneMonthName4(QCalendar* self, QLocale* locale, int month, int year, uintptr_t format, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QCalendar*>(self)->standaloneMonthName(*locale, static_cast<int>(month), static_cast<int>(year), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCalendar_WeekDayName3(QCalendar* self, QLocale* locale, int day, uintptr_t format, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QCalendar*>(self)->weekDayName(*locale, static_cast<int>(day), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCalendar_StandaloneWeekDayName3(QCalendar* self, QLocale* locale, int day, uintptr_t format, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QCalendar*>(self)->standaloneWeekDayName(*locale, static_cast<int>(day), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCalendar_Delete(QCalendar* self) {
	delete self;
}

QCalendar__YearMonthDay* QCalendar__YearMonthDay_new() {
	return new QCalendar::YearMonthDay();
}

QCalendar__YearMonthDay* QCalendar__YearMonthDay_new2(int y) {
	return new QCalendar::YearMonthDay(static_cast<int>(y));
}

QCalendar__YearMonthDay* QCalendar__YearMonthDay_new3(int y, int m) {
	return new QCalendar::YearMonthDay(static_cast<int>(y), static_cast<int>(m));
}

QCalendar__YearMonthDay* QCalendar__YearMonthDay_new4(int y, int m, int d) {
	return new QCalendar::YearMonthDay(static_cast<int>(y), static_cast<int>(m), static_cast<int>(d));
}

bool QCalendar__YearMonthDay_IsValid(QCalendar__YearMonthDay* self) {
	return const_cast<const QCalendar::YearMonthDay*>(self)->isValid();
}

void QCalendar__YearMonthDay_Delete(QCalendar__YearMonthDay* self) {
	delete self;
}

