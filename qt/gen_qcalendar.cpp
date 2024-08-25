#include "gen_qcalendar.h"
#include "qcalendar.h"

#include <QCalendar>
#include <QDate>
#include <QList>
#include <QString>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QCalendar* QCalendar_new() {
	return new QCalendar();
}

bool QCalendar_IsValid(QCalendar* self) {
	return self->isValid();
}

int QCalendar_DaysInMonth(QCalendar* self, int month) {
	return self->daysInMonth(static_cast<int>(month));
}

int QCalendar_DaysInYear(QCalendar* self, int year) {
	return self->daysInYear(static_cast<int>(year));
}

int QCalendar_MonthsInYear(QCalendar* self, int year) {
	return self->monthsInYear(static_cast<int>(year));
}

bool QCalendar_IsDateValid(QCalendar* self, int year, int month, int day) {
	return self->isDateValid(static_cast<int>(year), static_cast<int>(month), static_cast<int>(day));
}

bool QCalendar_IsLeapYear(QCalendar* self, int year) {
	return self->isLeapYear(static_cast<int>(year));
}

bool QCalendar_IsGregorian(QCalendar* self) {
	return self->isGregorian();
}

bool QCalendar_IsLunar(QCalendar* self) {
	return self->isLunar();
}

bool QCalendar_IsLuniSolar(QCalendar* self) {
	return self->isLuniSolar();
}

bool QCalendar_IsSolar(QCalendar* self) {
	return self->isSolar();
}

bool QCalendar_IsProleptic(QCalendar* self) {
	return self->isProleptic();
}

bool QCalendar_HasYearZero(QCalendar* self) {
	return self->hasYearZero();
}

int QCalendar_MaximumDaysInMonth(QCalendar* self) {
	return self->maximumDaysInMonth();
}

int QCalendar_MinimumDaysInMonth(QCalendar* self) {
	return self->minimumDaysInMonth();
}

int QCalendar_MaximumMonthsInYear(QCalendar* self) {
	return self->maximumMonthsInYear();
}

void QCalendar_Name(QCalendar* self, char** _out, int* _out_Strlen) {
	QString ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDate* QCalendar_DateFromParts(QCalendar* self, int year, int month, int day) {
	QDate ret = self->dateFromParts(static_cast<int>(year), static_cast<int>(month), static_cast<int>(day));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

int QCalendar_DayOfWeek(QCalendar* self, QDate* date) {
	return self->dayOfWeek(*date);
}

void QCalendar_AvailableCalendars(char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = QCalendar::availableCalendars();
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
	return self->daysInMonth(static_cast<int>(month), static_cast<int>(year));
}

void QCalendar_Delete(QCalendar* self) {
	delete self;
}

