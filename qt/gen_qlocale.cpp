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
#include "_cgo_export.h"

QLocale* QLocale_new() {
	return new QLocale();
}

QLocale* QLocale_new2(struct miqt_string* name) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
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

uintptr_t QLocale_Language(const QLocale* self) {
	QLocale::Language _ret = self->language();
	return static_cast<uintptr_t>(_ret);
}

uintptr_t QLocale_Script(const QLocale* self) {
	QLocale::Script _ret = self->script();
	return static_cast<uintptr_t>(_ret);
}

uintptr_t QLocale_Country(const QLocale* self) {
	QLocale::Country _ret = self->country();
	return static_cast<uintptr_t>(_ret);
}

struct miqt_string* QLocale_Name(const QLocale* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_Bcp47Name(const QLocale* self) {
	QString _ret = self->bcp47Name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_NativeLanguageName(const QLocale* self) {
	QString _ret = self->nativeLanguageName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_NativeCountryName(const QLocale* self) {
	QString _ret = self->nativeCountryName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int16_t QLocale_ToShort(const QLocale* self, struct miqt_string* s) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toShort(s_QString);
}

uint16_t QLocale_ToUShort(const QLocale* self, struct miqt_string* s) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toUShort(s_QString);
}

int QLocale_ToInt(const QLocale* self, struct miqt_string* s) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toInt(s_QString);
}

unsigned int QLocale_ToUInt(const QLocale* self, struct miqt_string* s) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toUInt(s_QString);
}

long QLocale_ToLong(const QLocale* self, struct miqt_string* s) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toLong(s_QString);
}

unsigned long QLocale_ToULong(const QLocale* self, struct miqt_string* s) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toULong(s_QString);
}

int64_t QLocale_ToLongLong(const QLocale* self, struct miqt_string* s) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toLongLong(s_QString);
}

uint64_t QLocale_ToULongLong(const QLocale* self, struct miqt_string* s) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toULongLong(s_QString);
}

float QLocale_ToFloat(const QLocale* self, struct miqt_string* s) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toFloat(s_QString);
}

double QLocale_ToDouble(const QLocale* self, struct miqt_string* s) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toDouble(s_QString);
}

struct miqt_string* QLocale_ToString(const QLocale* self, int64_t i) {
	QString _ret = self->toString((qlonglong)(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToStringWithQulonglong(const QLocale* self, uint64_t i) {
	QString _ret = self->toString((qulonglong)(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToStringWithLong(const QLocale* self, long i) {
	QString _ret = self->toString(static_cast<long>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToStringWithUlong(const QLocale* self, unsigned long i) {
	QString _ret = self->toString(static_cast<ulong>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToStringWithShort(const QLocale* self, int16_t i) {
	QString _ret = self->toString(static_cast<short>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToStringWithUshort(const QLocale* self, uint16_t i) {
	QString _ret = self->toString(static_cast<ushort>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToStringWithInt(const QLocale* self, int i) {
	QString _ret = self->toString(static_cast<int>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToStringWithUint(const QLocale* self, unsigned int i) {
	QString _ret = self->toString(static_cast<uint>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToStringWithDouble(const QLocale* self, double i) {
	QString _ret = self->toString(static_cast<double>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToStringWithFloat(const QLocale* self, float i) {
	QString _ret = self->toString(static_cast<float>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToString2(const QLocale* self, QDate* date, struct miqt_string* formatStr) {
	QString formatStr_QString = QString::fromUtf8(&formatStr->data, formatStr->len);
	QString _ret = self->toString(*date, formatStr_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToString3(const QLocale* self, QTime* time, struct miqt_string* formatStr) {
	QString formatStr_QString = QString::fromUtf8(&formatStr->data, formatStr->len);
	QString _ret = self->toString(*time, formatStr_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToString4(const QLocale* self, QDateTime* dateTime, struct miqt_string* format) {
	QString format_QString = QString::fromUtf8(&format->data, format->len);
	QString _ret = self->toString(*dateTime, format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToStringWithDate(const QLocale* self, QDate* date) {
	QString _ret = self->toString(*date);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToStringWithTime(const QLocale* self, QTime* time) {
	QString _ret = self->toString(*time);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToStringWithDateTime(const QLocale* self, QDateTime* dateTime) {
	QString _ret = self->toString(*dateTime);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToString9(const QLocale* self, QDate* date, uintptr_t format, QCalendar* cal) {
	QString _ret = self->toString(*date, static_cast<QLocale::FormatType>(format), *cal);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToString10(const QLocale* self, QDateTime* dateTime, uintptr_t format, QCalendar* cal) {
	QString _ret = self->toString(*dateTime, static_cast<QLocale::FormatType>(format), *cal);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_DateFormat(const QLocale* self) {
	QString _ret = self->dateFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_TimeFormat(const QLocale* self) {
	QString _ret = self->timeFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_DateTimeFormat(const QLocale* self) {
	QString _ret = self->dateTimeFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QDate* QLocale_ToDate(const QLocale* self, struct miqt_string* stringVal) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	return new QDate(self->toDate(stringVal_QString));
}

QTime* QLocale_ToTime(const QLocale* self, struct miqt_string* stringVal) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	return new QTime(self->toTime(stringVal_QString));
}

QDateTime* QLocale_ToDateTime(const QLocale* self, struct miqt_string* stringVal) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	return new QDateTime(self->toDateTime(stringVal_QString));
}

QDate* QLocale_ToDate2(const QLocale* self, struct miqt_string* stringVal, struct miqt_string* format) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	QString format_QString = QString::fromUtf8(&format->data, format->len);
	return new QDate(self->toDate(stringVal_QString, format_QString));
}

QTime* QLocale_ToTime2(const QLocale* self, struct miqt_string* stringVal, struct miqt_string* format) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	QString format_QString = QString::fromUtf8(&format->data, format->len);
	return new QTime(self->toTime(stringVal_QString, format_QString));
}

QDateTime* QLocale_ToDateTime2(const QLocale* self, struct miqt_string* stringVal, struct miqt_string* format) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	QString format_QString = QString::fromUtf8(&format->data, format->len);
	return new QDateTime(self->toDateTime(stringVal_QString, format_QString));
}

QDate* QLocale_ToDate3(const QLocale* self, struct miqt_string* stringVal, uintptr_t format, QCalendar* cal) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	return new QDate(self->toDate(stringVal_QString, static_cast<QLocale::FormatType>(format), *cal));
}

QDateTime* QLocale_ToDateTime3(const QLocale* self, struct miqt_string* stringVal, uintptr_t format, QCalendar* cal) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	return new QDateTime(self->toDateTime(stringVal_QString, static_cast<QLocale::FormatType>(format), *cal));
}

QDate* QLocale_ToDate4(const QLocale* self, struct miqt_string* stringVal, struct miqt_string* format, QCalendar* cal) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	QString format_QString = QString::fromUtf8(&format->data, format->len);
	return new QDate(self->toDate(stringVal_QString, format_QString, *cal));
}

QDateTime* QLocale_ToDateTime4(const QLocale* self, struct miqt_string* stringVal, struct miqt_string* format, QCalendar* cal) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	QString format_QString = QString::fromUtf8(&format->data, format->len);
	return new QDateTime(self->toDateTime(stringVal_QString, format_QString, *cal));
}

QTime* QLocale_ToTime3(const QLocale* self, struct miqt_string* stringVal, uintptr_t format, QCalendar* cal) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	return new QTime(self->toTime(stringVal_QString, static_cast<QLocale::FormatType>(format), *cal));
}

QTime* QLocale_ToTime4(const QLocale* self, struct miqt_string* stringVal, struct miqt_string* format, QCalendar* cal) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	QString format_QString = QString::fromUtf8(&format->data, format->len);
	return new QTime(self->toTime(stringVal_QString, format_QString, *cal));
}

QChar* QLocale_DecimalPoint(const QLocale* self) {
	return new QChar(self->decimalPoint());
}

QChar* QLocale_GroupSeparator(const QLocale* self) {
	return new QChar(self->groupSeparator());
}

QChar* QLocale_Percent(const QLocale* self) {
	return new QChar(self->percent());
}

QChar* QLocale_ZeroDigit(const QLocale* self) {
	return new QChar(self->zeroDigit());
}

QChar* QLocale_NegativeSign(const QLocale* self) {
	return new QChar(self->negativeSign());
}

QChar* QLocale_PositiveSign(const QLocale* self) {
	return new QChar(self->positiveSign());
}

QChar* QLocale_Exponential(const QLocale* self) {
	return new QChar(self->exponential());
}

struct miqt_string* QLocale_MonthName(const QLocale* self, int param1) {
	QString _ret = self->monthName(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_StandaloneMonthName(const QLocale* self, int param1) {
	QString _ret = self->standaloneMonthName(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_DayName(const QLocale* self, int param1) {
	QString _ret = self->dayName(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_StandaloneDayName(const QLocale* self, int param1) {
	QString _ret = self->standaloneDayName(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

uintptr_t QLocale_FirstDayOfWeek(const QLocale* self) {
	Qt::DayOfWeek _ret = self->firstDayOfWeek();
	return static_cast<uintptr_t>(_ret);
}

struct miqt_array* QLocale_Weekdays(const QLocale* self) {
	QList<Qt::DayOfWeek> _ret = self->weekdays();
	// Convert QList<> from C++ memory to manually-managed C memory
	uintptr_t* _arr = static_cast<uintptr_t*>(malloc(sizeof(uintptr_t) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		Qt::DayOfWeek _lv_ret = _ret[i];
		_arr[i] = static_cast<uintptr_t>(_lv_ret);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string* QLocale_AmText(const QLocale* self) {
	QString _ret = self->amText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_PmText(const QLocale* self) {
	QString _ret = self->pmText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

uintptr_t QLocale_MeasurementSystem(const QLocale* self) {
	QLocale::MeasurementSystem _ret = self->measurementSystem();
	return static_cast<uintptr_t>(_ret);
}

QLocale* QLocale_Collation(const QLocale* self) {
	return new QLocale(self->collation());
}

uintptr_t QLocale_TextDirection(const QLocale* self) {
	Qt::LayoutDirection _ret = self->textDirection();
	return static_cast<uintptr_t>(_ret);
}

struct miqt_string* QLocale_ToUpper(const QLocale* self, struct miqt_string* str) {
	QString str_QString = QString::fromUtf8(&str->data, str->len);
	QString _ret = self->toUpper(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToLower(const QLocale* self, struct miqt_string* str) {
	QString str_QString = QString::fromUtf8(&str->data, str->len);
	QString _ret = self->toLower(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_CurrencySymbol(const QLocale* self) {
	QString _ret = self->currencySymbol();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToCurrencyString(const QLocale* self, long long param1) {
	QString _ret = self->toCurrencyString(static_cast<qint64>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToCurrencyStringWithQulonglong(const QLocale* self, unsigned long long param1) {
	QString _ret = self->toCurrencyString(static_cast<quint64>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToCurrencyStringWithShort(const QLocale* self, int16_t param1) {
	QString _ret = self->toCurrencyString(static_cast<short>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToCurrencyStringWithUshort(const QLocale* self, uint16_t param1) {
	QString _ret = self->toCurrencyString(static_cast<ushort>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToCurrencyStringWithInt(const QLocale* self, int param1) {
	QString _ret = self->toCurrencyString(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToCurrencyStringWithUint(const QLocale* self, unsigned int param1) {
	QString _ret = self->toCurrencyString(static_cast<uint>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToCurrencyStringWithDouble(const QLocale* self, double param1) {
	QString _ret = self->toCurrencyString(static_cast<double>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToCurrencyString2(const QLocale* self, double param1, struct miqt_string* symbol, int precision) {
	QString symbol_QString = QString::fromUtf8(&symbol->data, symbol->len);
	QString _ret = self->toCurrencyString(static_cast<double>(param1), symbol_QString, static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToCurrencyStringWithFloat(const QLocale* self, float i) {
	QString _ret = self->toCurrencyString(static_cast<float>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToCurrencyString3(const QLocale* self, float i, struct miqt_string* symbol, int precision) {
	QString symbol_QString = QString::fromUtf8(&symbol->data, symbol->len);
	QString _ret = self->toCurrencyString(static_cast<float>(i), symbol_QString, static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_FormattedDataSize(QLocale* self, long long bytes) {
	QString _ret = self->formattedDataSize(static_cast<qint64>(bytes));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_FormattedDataSizeWithBytes(const QLocale* self, long long bytes) {
	QString _ret = self->formattedDataSize(static_cast<qint64>(bytes));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_array* QLocale_UiLanguages(const QLocale* self) {
	QStringList _ret = self->uiLanguages();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

bool QLocale_OperatorEqual(const QLocale* self, QLocale* other) {
	return self->operator==(*other);
}

bool QLocale_OperatorNotEqual(const QLocale* self, QLocale* other) {
	return self->operator!=(*other);
}

struct miqt_string* QLocale_LanguageToString(uintptr_t language) {
	QString _ret = QLocale::languageToString(static_cast<QLocale::Language>(language));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_CountryToString(uintptr_t country) {
	QString _ret = QLocale::countryToString(static_cast<QLocale::Country>(country));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ScriptToString(uintptr_t script) {
	QString _ret = QLocale::scriptToString(static_cast<QLocale::Script>(script));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QLocale_SetDefault(QLocale* locale) {
	QLocale::setDefault(*locale);
}

QLocale* QLocale_C() {
	return new QLocale(QLocale::c());
}

QLocale* QLocale_System() {
	return new QLocale(QLocale::system());
}

struct miqt_array* QLocale_MatchingLocales(uintptr_t language, uintptr_t script, uintptr_t country) {
	QList<QLocale> _ret = QLocale::matchingLocales(static_cast<QLocale::Language>(language), static_cast<QLocale::Script>(script), static_cast<QLocale::Country>(country));
	// Convert QList<> from C++ memory to manually-managed C memory
	QLocale** _arr = static_cast<QLocale**>(malloc(sizeof(QLocale*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QLocale(_ret[i]);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QLocale_CountriesForLanguage(uintptr_t lang) {
	QList<QLocale::Country> _ret = QLocale::countriesForLanguage(static_cast<QLocale::Language>(lang));
	// Convert QList<> from C++ memory to manually-managed C memory
	uintptr_t* _arr = static_cast<uintptr_t*>(malloc(sizeof(uintptr_t) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QLocale::Country _lv_ret = _ret[i];
		_arr[i] = static_cast<uintptr_t>(_lv_ret);
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QLocale_SetNumberOptions(QLocale* self, int options) {
	self->setNumberOptions(static_cast<QLocale::NumberOptions>(options));
}

int QLocale_NumberOptions(const QLocale* self) {
	QLocale::NumberOptions _ret = self->numberOptions();
	return static_cast<int>(_ret);
}

struct miqt_string* QLocale_QuoteString(const QLocale* self, struct miqt_string* str) {
	QString str_QString = QString::fromUtf8(&str->data, str->len);
	QString _ret = self->quoteString(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_CreateSeparatedList(const QLocale* self, struct miqt_array* /* of struct miqt_string* */ strl) {
	QList<QString> strl_QList;
	strl_QList.reserve(strl->len);
	miqt_string** strl_arr = static_cast<miqt_string**>(strl->data);
	for(size_t i = 0; i < strl->len; ++i) {
		strl_QList.push_back(QString::fromUtf8(& strl_arr[i]->data, strl_arr[i]->len));
	}
	QString _ret = self->createSeparatedList(strl_QList);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

int16_t QLocale_ToShort2(const QLocale* self, struct miqt_string* s, bool* ok) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toShort(s_QString, ok);
}

uint16_t QLocale_ToUShort2(const QLocale* self, struct miqt_string* s, bool* ok) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toUShort(s_QString, ok);
}

int QLocale_ToInt2(const QLocale* self, struct miqt_string* s, bool* ok) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toInt(s_QString, ok);
}

unsigned int QLocale_ToUInt2(const QLocale* self, struct miqt_string* s, bool* ok) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toUInt(s_QString, ok);
}

long QLocale_ToLong2(const QLocale* self, struct miqt_string* s, bool* ok) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toLong(s_QString, ok);
}

unsigned long QLocale_ToULong2(const QLocale* self, struct miqt_string* s, bool* ok) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toULong(s_QString, ok);
}

int64_t QLocale_ToLongLong2(const QLocale* self, struct miqt_string* s, bool* ok) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toLongLong(s_QString, ok);
}

uint64_t QLocale_ToULongLong2(const QLocale* self, struct miqt_string* s, bool* ok) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toULongLong(s_QString, ok);
}

float QLocale_ToFloat2(const QLocale* self, struct miqt_string* s, bool* ok) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toFloat(s_QString, ok);
}

double QLocale_ToDouble2(const QLocale* self, struct miqt_string* s, bool* ok) {
	QString s_QString = QString::fromUtf8(&s->data, s->len);
	return self->toDouble(s_QString, ok);
}

struct miqt_string* QLocale_ToString22(const QLocale* self, double i, char f) {
	QString _ret = self->toString(static_cast<double>(i), static_cast<char>(f));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToString32(const QLocale* self, double i, char f, int prec) {
	QString _ret = self->toString(static_cast<double>(i), static_cast<char>(f), static_cast<int>(prec));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToString23(const QLocale* self, float i, char f) {
	QString _ret = self->toString(static_cast<float>(i), static_cast<char>(f));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToString33(const QLocale* self, float i, char f, int prec) {
	QString _ret = self->toString(static_cast<float>(i), static_cast<char>(f), static_cast<int>(prec));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToString24(const QLocale* self, QDate* date, uintptr_t format) {
	QString _ret = self->toString(*date, static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToString25(const QLocale* self, QTime* time, uintptr_t format) {
	QString _ret = self->toString(*time, static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToString26(const QLocale* self, QDateTime* dateTime, uintptr_t format) {
	QString _ret = self->toString(*dateTime, static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_DateFormat1(const QLocale* self, uintptr_t format) {
	QString _ret = self->dateFormat(static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_TimeFormat1(const QLocale* self, uintptr_t format) {
	QString _ret = self->timeFormat(static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_DateTimeFormat1(const QLocale* self, uintptr_t format) {
	QString _ret = self->dateTimeFormat(static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QDate* QLocale_ToDate22(const QLocale* self, struct miqt_string* stringVal, uintptr_t param2) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	return new QDate(self->toDate(stringVal_QString, static_cast<QLocale::FormatType>(param2)));
}

QTime* QLocale_ToTime22(const QLocale* self, struct miqt_string* stringVal, uintptr_t param2) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	return new QTime(self->toTime(stringVal_QString, static_cast<QLocale::FormatType>(param2)));
}

QDateTime* QLocale_ToDateTime22(const QLocale* self, struct miqt_string* stringVal, uintptr_t format) {
	QString stringVal_QString = QString::fromUtf8(&stringVal->data, stringVal->len);
	return new QDateTime(self->toDateTime(stringVal_QString, static_cast<QLocale::FormatType>(format)));
}

struct miqt_string* QLocale_MonthName2(const QLocale* self, int param1, uintptr_t format) {
	QString _ret = self->monthName(static_cast<int>(param1), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_StandaloneMonthName2(const QLocale* self, int param1, uintptr_t format) {
	QString _ret = self->standaloneMonthName(static_cast<int>(param1), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_DayName2(const QLocale* self, int param1, uintptr_t format) {
	QString _ret = self->dayName(static_cast<int>(param1), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_StandaloneDayName2(const QLocale* self, int param1, uintptr_t format) {
	QString _ret = self->standaloneDayName(static_cast<int>(param1), static_cast<QLocale::FormatType>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_CurrencySymbol1(const QLocale* self, uintptr_t param1) {
	QString _ret = self->currencySymbol(static_cast<QLocale::CurrencySymbolFormat>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToCurrencyString22(const QLocale* self, long long param1, struct miqt_string* symbol) {
	QString symbol_QString = QString::fromUtf8(&symbol->data, symbol->len);
	QString _ret = self->toCurrencyString(static_cast<qint64>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToCurrencyString23(const QLocale* self, unsigned long long param1, struct miqt_string* symbol) {
	QString symbol_QString = QString::fromUtf8(&symbol->data, symbol->len);
	QString _ret = self->toCurrencyString(static_cast<quint64>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToCurrencyString24(const QLocale* self, int16_t param1, struct miqt_string* symbol) {
	QString symbol_QString = QString::fromUtf8(&symbol->data, symbol->len);
	QString _ret = self->toCurrencyString(static_cast<short>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToCurrencyString25(const QLocale* self, uint16_t param1, struct miqt_string* symbol) {
	QString symbol_QString = QString::fromUtf8(&symbol->data, symbol->len);
	QString _ret = self->toCurrencyString(static_cast<ushort>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToCurrencyString26(const QLocale* self, int param1, struct miqt_string* symbol) {
	QString symbol_QString = QString::fromUtf8(&symbol->data, symbol->len);
	QString _ret = self->toCurrencyString(static_cast<int>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToCurrencyString27(const QLocale* self, unsigned int param1, struct miqt_string* symbol) {
	QString symbol_QString = QString::fromUtf8(&symbol->data, symbol->len);
	QString _ret = self->toCurrencyString(static_cast<uint>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToCurrencyString28(const QLocale* self, double param1, struct miqt_string* symbol) {
	QString symbol_QString = QString::fromUtf8(&symbol->data, symbol->len);
	QString _ret = self->toCurrencyString(static_cast<double>(param1), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_ToCurrencyString29(const QLocale* self, float i, struct miqt_string* symbol) {
	QString symbol_QString = QString::fromUtf8(&symbol->data, symbol->len);
	QString _ret = self->toCurrencyString(static_cast<float>(i), symbol_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_FormattedDataSize2(QLocale* self, long long bytes, int precision) {
	QString _ret = self->formattedDataSize(static_cast<qint64>(bytes), static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_FormattedDataSize3(QLocale* self, long long bytes, int precision, int format) {
	QString _ret = self->formattedDataSize(static_cast<qint64>(bytes), static_cast<int>(precision), static_cast<QLocale::DataSizeFormats>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_FormattedDataSize22(const QLocale* self, long long bytes, int precision) {
	QString _ret = self->formattedDataSize(static_cast<qint64>(bytes), static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_FormattedDataSize32(const QLocale* self, long long bytes, int precision, int format) {
	QString _ret = self->formattedDataSize(static_cast<qint64>(bytes), static_cast<int>(precision), static_cast<QLocale::DataSizeFormats>(format));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QLocale_QuoteString2(const QLocale* self, struct miqt_string* str, uintptr_t style) {
	QString str_QString = QString::fromUtf8(&str->data, str->len);
	QString _ret = self->quoteString(str_QString, static_cast<QLocale::QuotationStyle>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QLocale_Delete(QLocale* self) {
	delete self;
}

