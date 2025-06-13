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
#include <qlocale.h>
#include "gen_qlocale.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QLocale* QLocale_new() {
	return new (std::nothrow) QLocale();
}

QLocale* QLocale_new2(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) QLocale(name_QString);
}

QLocale* QLocale_new3(int language) {
	return new (std::nothrow) QLocale(static_cast<QLocale::Language>(language));
}

QLocale* QLocale_new4(int language, int script, int country) {
	return new (std::nothrow) QLocale(static_cast<QLocale::Language>(language), static_cast<QLocale::Script>(script), static_cast<QLocale::Country>(country));
}

QLocale* QLocale_new5(QLocale* other) {
	return new (std::nothrow) QLocale(*other);
}

QLocale* QLocale_new6(int language, int country) {
	return new (std::nothrow) QLocale(static_cast<QLocale::Language>(language), static_cast<QLocale::Country>(country));
}

void QLocale_operatorAssign(QLocale* self, QLocale* other) {
	self->operator=(*other);
}

void QLocale_swap(QLocale* self, QLocale* other) {
	self->swap(*other);
}

int QLocale_language(const QLocale* self) {
	QLocale::Language _ret = self->language();
	return static_cast<int>(_ret);
}

int QLocale_script(const QLocale* self) {
	QLocale::Script _ret = self->script();
	return static_cast<int>(_ret);
}

int QLocale_country(const QLocale* self) {
	QLocale::Country _ret = self->country();
	return static_cast<int>(_ret);
}

struct miqt_string QLocale_name(const QLocale* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_bcp47Name(const QLocale* self) {
	QString _ret = self->bcp47Name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_nativeLanguageName(const QLocale* self) {
	QString _ret = self->nativeLanguageName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_nativeCountryName(const QLocale* self) {
	QString _ret = self->nativeCountryName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

short QLocale_toShort(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toShort(s_QString);
}

unsigned short QLocale_toUShort(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	ushort _ret = self->toUShort(s_QString);
	return static_cast<unsigned short>(_ret);
}

int QLocale_toInt(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toInt(s_QString);
}

unsigned int QLocale_toUInt(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	uint _ret = self->toUInt(s_QString);
	return static_cast<unsigned int>(_ret);
}

long QLocale_toLong(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toLong(s_QString);
}

unsigned long QLocale_toULong(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	ulong _ret = self->toULong(s_QString);
	return static_cast<unsigned long>(_ret);
}

long long QLocale_toLongLong(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	qlonglong _ret = self->toLongLong(s_QString);
	return static_cast<long long>(_ret);
}

unsigned long long QLocale_toULongLong(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	qulonglong _ret = self->toULongLong(s_QString);
	return static_cast<unsigned long long>(_ret);
}

float QLocale_toFloat(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toFloat(s_QString);
}

double QLocale_toDouble(const QLocale* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toDouble(s_QString);
}

struct miqt_string QLocale_toString(const QLocale* self, long long i) {
	QString _ret = self->toString(static_cast<qlonglong>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithQulonglong(const QLocale* self, unsigned long long i) {
	QString _ret = self->toString(static_cast<qulonglong>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithLong(const QLocale* self, long i) {
	QString _ret = self->toString(static_cast<long>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithUlong(const QLocale* self, unsigned long i) {
	QString _ret = self->toString(static_cast<ulong>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithShort(const QLocale* self, short i) {
	QString _ret = self->toString(static_cast<short>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithUshort(const QLocale* self, unsigned short i) {
	QString _ret = self->toString(static_cast<ushort>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithInt(const QLocale* self, int i) {
	QString _ret = self->toString(static_cast<int>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithUint(const QLocale* self, unsigned int i) {
	QString _ret = self->toString(static_cast<uint>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithDouble(const QLocale* self, double i) {
	QString _ret = self->toString(static_cast<double>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithFloat(const QLocale* self, float i) {
	QString _ret = self->toString(static_cast<float>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toString2(const QLocale* self, QDate* date, struct miqt_string formatStr) {
	QString formatStr_QString = QString::fromUtf8(formatStr.data, formatStr.len);
	QString _ret = self->toString(*date, formatStr_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toString3(const QLocale* self, QTime* time, struct miqt_string formatStr) {
	QString formatStr_QString = QString::fromUtf8(formatStr.data, formatStr.len);
	QString _ret = self->toString(*time, formatStr_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toString4(const QLocale* self, QDateTime* dateTime, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	QString _ret = self->toString(*dateTime, format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithDate(const QLocale* self, QDate* date) {
	QString _ret = self->toString(*date);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithTime(const QLocale* self, QTime* time) {
	QString _ret = self->toString(*time);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toStringWithDateTime(const QLocale* self, QDateTime* dateTime) {
	QString _ret = self->toString(*dateTime);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toString9(const QLocale* self, QDate* date, int format, QCalendar* cal) {
	QString _ret = self->toString(*date, static_cast<QLocale::FormatType>(format), *cal);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toString10(const QLocale* self, QDateTime* dateTime, int format, QCalendar* cal) {
	QString _ret = self->toString(*dateTime, static_cast<QLocale::FormatType>(format), *cal);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_dateFormat(const QLocale* self) {
	QString _ret = self->dateFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_timeFormat(const QLocale* self) {
	QString _ret = self->timeFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_dateTimeFormat(const QLocale* self) {
	QString _ret = self->dateTimeFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDate* QLocale_toDate(const QLocale* self, struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QDate(self->toDate(string_QString));
}

QTime* QLocale_toTime(const QLocale* self, struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QTime(self->toTime(string_QString));
}

QDateTime* QLocale_toDateTime(const QLocale* self, struct miqt_string string) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QDateTime(self->toDateTime(string_QString));
}

QDate* QLocale_toDate2(const QLocale* self, struct miqt_string string, struct miqt_string format) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDate(self->toDate(string_QString, format_QString));
}

QTime* QLocale_toTime2(const QLocale* self, struct miqt_string string, struct miqt_string format) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QTime(self->toTime(string_QString, format_QString));
}

QDateTime* QLocale_toDateTime2(const QLocale* self, struct miqt_string string, struct miqt_string format) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDateTime(self->toDateTime(string_QString, format_QString));
}

QDate* QLocale_toDate3(const QLocale* self, struct miqt_string string, int format, QCalendar* cal) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QDate(self->toDate(string_QString, static_cast<QLocale::FormatType>(format), *cal));
}

QDateTime* QLocale_toDateTime3(const QLocale* self, struct miqt_string string, int format, QCalendar* cal) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QDateTime(self->toDateTime(string_QString, static_cast<QLocale::FormatType>(format), *cal));
}

QDate* QLocale_toDate4(const QLocale* self, struct miqt_string string, struct miqt_string format, QCalendar* cal) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDate(self->toDate(string_QString, format_QString, *cal));
}

QDateTime* QLocale_toDateTime4(const QLocale* self, struct miqt_string string, struct miqt_string format, QCalendar* cal) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QDateTime(self->toDateTime(string_QString, format_QString, *cal));
}

QTime* QLocale_toTime3(const QLocale* self, struct miqt_string string, int format, QCalendar* cal) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QTime(self->toTime(string_QString, static_cast<QLocale::FormatType>(format), *cal));
}

QTime* QLocale_toTime4(const QLocale* self, struct miqt_string string, struct miqt_string format, QCalendar* cal) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	QString format_QString = QString::fromUtf8(format.data, format.len);
	return new QTime(self->toTime(string_QString, format_QString, *cal));
}

QChar* QLocale_decimalPoint(const QLocale* self) {
	return new QChar(self->decimalPoint());
}

QChar* QLocale_groupSeparator(const QLocale* self) {
	return new QChar(self->groupSeparator());
}

QChar* QLocale_percent(const QLocale* self) {
	return new QChar(self->percent());
}

QChar* QLocale_zeroDigit(const QLocale* self) {
	return new QChar(self->zeroDigit());
}

QChar* QLocale_negativeSign(const QLocale* self) {
	return new QChar(self->negativeSign());
}

QChar* QLocale_positiveSign(const QLocale* self) {
	return new QChar(self->positiveSign());
}

QChar* QLocale_exponential(const QLocale* self) {
	return new QChar(self->exponential());
}

struct miqt_string QLocale_monthName(const QLocale* self, int param1) {
	QString _ret = self->monthName(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_standaloneMonthName(const QLocale* self, int param1) {
	QString _ret = self->standaloneMonthName(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_dayName(const QLocale* self, int param1) {
	QString _ret = self->dayName(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_standaloneDayName(const QLocale* self, int param1) {
	QString _ret = self->standaloneDayName(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QLocale_firstDayOfWeek(const QLocale* self) {
	Qt::DayOfWeek _ret = self->firstDayOfWeek();
	return static_cast<int>(_ret);
}

struct miqt_array /* of int */  QLocale_weekdays(const QLocale* self) {
	QList<Qt::DayOfWeek> _ret = self->weekdays();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		Qt::DayOfWeek _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QLocale_amText(const QLocale* self) {
	QString _ret = self->amText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_pmText(const QLocale* self) {
	QString _ret = self->pmText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QLocale_measurementSystem(const QLocale* self) {
	QLocale::MeasurementSystem _ret = self->measurementSystem();
	return static_cast<int>(_ret);
}

QLocale* QLocale_collation(const QLocale* self) {
	return new QLocale(self->collation());
}

int QLocale_textDirection(const QLocale* self) {
	Qt::LayoutDirection _ret = self->textDirection();
	return static_cast<int>(_ret);
}

struct miqt_string QLocale_toUpper(const QLocale* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QString _ret = self->toUpper(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toLower(const QLocale* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QString _ret = self->toLower(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_currencySymbol(const QLocale* self) {
	QString _ret = self->currencySymbol();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString(const QLocale* self, long long param1) {
	QString _ret = self->toCurrencyString(static_cast<qlonglong>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyStringWithQulonglong(const QLocale* self, unsigned long long param1) {
	QString _ret = self->toCurrencyString(static_cast<qulonglong>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyStringWithShort(const QLocale* self, short param1) {
	QString _ret = self->toCurrencyString(static_cast<short>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyStringWithUshort(const QLocale* self, unsigned short param1) {
	QString _ret = self->toCurrencyString(static_cast<ushort>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyStringWithInt(const QLocale* self, int param1) {
	QString _ret = self->toCurrencyString(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyStringWithUint(const QLocale* self, unsigned int param1) {
	QString _ret = self->toCurrencyString(static_cast<uint>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyStringWithDouble(const QLocale* self, double param1) {
	QString _ret = self->toCurrencyString(static_cast<double>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString2(const QLocale* self, double param1, struct miqt_string symbol, int precision) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<double>(param1), symbol_QString, static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyStringWithFloat(const QLocale* self, float i) {
	QString _ret = self->toCurrencyString(static_cast<float>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString3(const QLocale* self, float i, struct miqt_string symbol, int precision) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<float>(i), symbol_QString, static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_formattedDataSize(QLocale* self, long long bytes) {
	QString _ret = self->formattedDataSize(static_cast<qint64>(bytes));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_formattedDataSizeWithBytes(const QLocale* self, long long bytes) {
	QString _ret = self->formattedDataSize(static_cast<qint64>(bytes));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QLocale_uiLanguages(const QLocale* self) {
	QStringList _ret = self->uiLanguages();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QLocale_operatorEqual(const QLocale* self, QLocale* other) {
	return (*self == *other);
}

bool QLocale_operatorNotEqual(const QLocale* self, QLocale* other) {
	return (*self != *other);
}

struct miqt_string QLocale_languageToString(int language) {
	QString _ret = QLocale::languageToString(static_cast<QLocale::Language>(language));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_countryToString(int country) {
	QString _ret = QLocale::countryToString(static_cast<QLocale::Country>(country));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_scriptToString(int script) {
	QString _ret = QLocale::scriptToString(static_cast<QLocale::Script>(script));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLocale_setDefault(QLocale* locale) {
	QLocale::setDefault(*locale);
}

QLocale* QLocale_c() {
	return new QLocale(QLocale::c());
}

QLocale* QLocale_system() {
	return new QLocale(QLocale::system());
}

struct miqt_array /* of QLocale* */  QLocale_matchingLocales(int language, int script, int country) {
	QList<QLocale> _ret = QLocale::matchingLocales(static_cast<QLocale::Language>(language), static_cast<QLocale::Script>(script), static_cast<QLocale::Country>(country));
	// Convert QList<> from C++ memory to manually-managed C memory
	QLocale** _arr = static_cast<QLocale**>(malloc(sizeof(QLocale*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QLocale(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QLocale_countriesForLanguage(int lang) {
	QList<QLocale::Country> _ret = QLocale::countriesForLanguage(static_cast<QLocale::Language>(lang));
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QLocale::Country _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QLocale_setNumberOptions(QLocale* self, int options) {
	self->setNumberOptions(static_cast<QLocale::NumberOptions>(options));
}

int QLocale_numberOptions(const QLocale* self) {
	QLocale::NumberOptions _ret = self->numberOptions();
	return static_cast<int>(_ret);
}

struct miqt_string QLocale_quoteString(const QLocale* self, struct miqt_string str) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QString _ret = self->quoteString(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_createSeparatedList(const QLocale* self, struct miqt_array /* of struct miqt_string */  strl) {
	QStringList strl_QList;
	strl_QList.reserve(strl.len);
	struct miqt_string* strl_arr = static_cast<struct miqt_string*>(strl.data);
	for(size_t i = 0; i < strl.len; ++i) {
		QString strl_arr_i_QString = QString::fromUtf8(strl_arr[i].data, strl_arr[i].len);
		strl_QList.push_back(strl_arr_i_QString);
	}
	QString _ret = self->createSeparatedList(strl_QList);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

short QLocale_toShort2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toShort(s_QString, ok);
}

unsigned short QLocale_toUShort2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	ushort _ret = self->toUShort(s_QString, ok);
	return static_cast<unsigned short>(_ret);
}

int QLocale_toInt2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toInt(s_QString, ok);
}

unsigned int QLocale_toUInt2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	uint _ret = self->toUInt(s_QString, ok);
	return static_cast<unsigned int>(_ret);
}

long QLocale_toLong2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toLong(s_QString, ok);
}

unsigned long QLocale_toULong2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	ulong _ret = self->toULong(s_QString, ok);
	return static_cast<unsigned long>(_ret);
}

long long QLocale_toLongLong2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	qlonglong _ret = self->toLongLong(s_QString, ok);
	return static_cast<long long>(_ret);
}

unsigned long long QLocale_toULongLong2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	qulonglong _ret = self->toULongLong(s_QString, ok);
	return static_cast<unsigned long long>(_ret);
}

float QLocale_toFloat2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toFloat(s_QString, ok);
}

double QLocale_toDouble2(const QLocale* self, struct miqt_string s, bool* ok) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	return self->toDouble(s_QString, ok);
}

struct miqt_string QLocale_toString12(const QLocale* self, double i, char f) {
	QString _ret = self->toString(static_cast<double>(i), static_cast<char>(f));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toString13(const QLocale* self, double i, char f, int prec) {
	QString _ret = self->toString(static_cast<double>(i), static_cast<char>(f), static_cast<int>(prec));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toString14(const QLocale* self, float i, char f) {
	QString _ret = self->toString(static_cast<float>(i), static_cast<char>(f));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toString15(const QLocale* self, float i, char f, int prec) {
	QString _ret = self->toString(static_cast<float>(i), static_cast<char>(f), static_cast<int>(prec));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toString16(const QLocale* self, QDate* date, int format) {
	QString _ret = self->toString(*date, static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toString17(const QLocale* self, QTime* time, int format) {
	QString _ret = self->toString(*time, static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toString18(const QLocale* self, QDateTime* dateTime, int format) {
	QString _ret = self->toString(*dateTime, static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_dateFormatWithFormat(const QLocale* self, int format) {
	QString _ret = self->dateFormat(static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_timeFormatWithFormat(const QLocale* self, int format) {
	QString _ret = self->timeFormat(static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_dateTimeFormatWithFormat(const QLocale* self, int format) {
	QString _ret = self->dateTimeFormat(static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDate* QLocale_toDate5(const QLocale* self, struct miqt_string string, int param2) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QDate(self->toDate(string_QString, static_cast<QLocale::FormatType>(param2)));
}

QTime* QLocale_toTime5(const QLocale* self, struct miqt_string string, int param2) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QTime(self->toTime(string_QString, static_cast<QLocale::FormatType>(param2)));
}

QDateTime* QLocale_toDateTime5(const QLocale* self, struct miqt_string string, int format) {
	QString string_QString = QString::fromUtf8(string.data, string.len);
	return new QDateTime(self->toDateTime(string_QString, static_cast<QLocale::FormatType>(format)));
}

struct miqt_string QLocale_monthName2(const QLocale* self, int param1, int format) {
	QString _ret = self->monthName(static_cast<int>(param1), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_standaloneMonthName2(const QLocale* self, int param1, int format) {
	QString _ret = self->standaloneMonthName(static_cast<int>(param1), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_dayName2(const QLocale* self, int param1, int format) {
	QString _ret = self->dayName(static_cast<int>(param1), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_standaloneDayName2(const QLocale* self, int param1, int format) {
	QString _ret = self->standaloneDayName(static_cast<int>(param1), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_currencySymbolWithQLocaleCurrencySymbolFormat(const QLocale* self, int param1) {
	QString _ret = self->currencySymbol(static_cast<QLocale::CurrencySymbolFormat>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString4(const QLocale* self, long long param1, struct miqt_string symbol) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<qlonglong>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString5(const QLocale* self, unsigned long long param1, struct miqt_string symbol) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<qulonglong>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString6(const QLocale* self, short param1, struct miqt_string symbol) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<short>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString7(const QLocale* self, unsigned short param1, struct miqt_string symbol) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<ushort>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString8(const QLocale* self, int param1, struct miqt_string symbol) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<int>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString9(const QLocale* self, unsigned int param1, struct miqt_string symbol) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<uint>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString10(const QLocale* self, double param1, struct miqt_string symbol) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<double>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_toCurrencyString11(const QLocale* self, float i, struct miqt_string symbol) {
	QString symbol_QString = QString::fromUtf8(symbol.data, symbol.len);
	QString _ret = self->toCurrencyString(static_cast<float>(i), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_formattedDataSize2(QLocale* self, long long bytes, int precision) {
	QString _ret = self->formattedDataSize(static_cast<qint64>(bytes), static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_formattedDataSize3(QLocale* self, long long bytes, int precision, int format) {
	QString _ret = self->formattedDataSize(static_cast<qint64>(bytes), static_cast<int>(precision), static_cast<QLocale::DataSizeFormats>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_formattedDataSize4(const QLocale* self, long long bytes, int precision) {
	QString _ret = self->formattedDataSize(static_cast<qint64>(bytes), static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_formattedDataSize5(const QLocale* self, long long bytes, int precision, int format) {
	QString _ret = self->formattedDataSize(static_cast<qint64>(bytes), static_cast<int>(precision), static_cast<QLocale::DataSizeFormats>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocale_quoteString2(const QLocale* self, struct miqt_string str, int style) {
	QString str_QString = QString::fromUtf8(str.data, str.len);
	QString _ret = self->quoteString(str_QString, static_cast<QLocale::QuotationStyle>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLocale_delete(QLocale* self) {
	delete self;
}

