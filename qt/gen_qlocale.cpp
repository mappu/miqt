#include "gen_qlocale.h"
#include "qlocale.h"

#include <QCalendar>
#include <QChar>
#include <QDate>
#include <QDateTime>
#include <QList>
#include <QLocale>
#include <QString>
#include <QTime>


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

QLocale* QLocale_new3(QLocale* other) {
	return new QLocale(*other);
}

void QLocale_OperatorAssign(QLocale* self, QLocale* other) {
	self->operator=(*other);
}

void QLocale_Swap(QLocale* self, QLocale* other) {
	self->swap(*other);
}

void QLocale_Name(QLocale* self, char** _out, int* _out_Strlen) {
	QString ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_Bcp47Name(QLocale* self, char** _out, int* _out_Strlen) {
	QString ret = self->bcp47Name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_NativeLanguageName(QLocale* self, char** _out, int* _out_Strlen) {
	QString ret = self->nativeLanguageName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_NativeCountryName(QLocale* self, char** _out, int* _out_Strlen) {
	QString ret = self->nativeCountryName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

int16_t QLocale_ToShort(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toShort(s_QString);
}

uint16_t QLocale_ToUShort(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toUShort(s_QString);
}

int QLocale_ToInt(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toInt(s_QString);
}

unsigned int QLocale_ToUInt(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toUInt(s_QString);
}

long QLocale_ToLong(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toLong(s_QString);
}

unsigned long QLocale_ToULong(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toULong(s_QString);
}

int64_t QLocale_ToLongLong(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toLongLong(s_QString);
}

uint64_t QLocale_ToULongLong(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toULongLong(s_QString);
}

float QLocale_ToFloat(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toFloat(s_QString);
}

double QLocale_ToDouble(QLocale* self, const char* s, size_t s_Strlen) {
	QString s_QString = QString::fromUtf8(s, s_Strlen);
	return self->toDouble(s_QString);
}

void QLocale_ToString(QLocale* self, int64_t i, char** _out, int* _out_Strlen) {
	QString ret = self->toString((qlonglong)(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithQulonglong(QLocale* self, uint64_t i, char** _out, int* _out_Strlen) {
	QString ret = self->toString((qulonglong)(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithLong(QLocale* self, long i, char** _out, int* _out_Strlen) {
	QString ret = self->toString(static_cast<long>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithUlong(QLocale* self, unsigned long i, char** _out, int* _out_Strlen) {
	QString ret = self->toString(static_cast<ulong>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithShort(QLocale* self, int16_t i, char** _out, int* _out_Strlen) {
	QString ret = self->toString(static_cast<short>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithUshort(QLocale* self, uint16_t i, char** _out, int* _out_Strlen) {
	QString ret = self->toString(static_cast<ushort>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithInt(QLocale* self, int i, char** _out, int* _out_Strlen) {
	QString ret = self->toString(static_cast<int>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithUint(QLocale* self, unsigned int i, char** _out, int* _out_Strlen) {
	QString ret = self->toString(static_cast<uint>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithDouble(QLocale* self, double i, char** _out, int* _out_Strlen) {
	QString ret = self->toString(static_cast<double>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToStringWithFloat(QLocale* self, float i, char** _out, int* _out_Strlen) {
	QString ret = self->toString(static_cast<float>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToString2(QLocale* self, QDate* date, const char* formatStr, size_t formatStr_Strlen, char** _out, int* _out_Strlen) {
	QString formatStr_QString = QString::fromUtf8(formatStr, formatStr_Strlen);
	QString ret = self->toString(*date, formatStr_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToString3(QLocale* self, QTime* time, const char* formatStr, size_t formatStr_Strlen, char** _out, int* _out_Strlen) {
	QString formatStr_QString = QString::fromUtf8(formatStr, formatStr_Strlen);
	QString ret = self->toString(*time, formatStr_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToString4(QLocale* self, QDateTime* dateTime, const char* format, size_t format_Strlen, char** _out, int* _out_Strlen) {
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QString ret = self->toString(*dateTime, format_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QDate* QLocale_ToDate(QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QDate ret = self->toDate(stringVal_QString, format_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QTime* QLocale_ToTime(QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QTime ret = self->toTime(stringVal_QString, format_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

QDateTime* QLocale_ToDateTime(QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QDateTime ret = self->toDateTime(stringVal_QString, format_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QDate* QLocale_ToDate2(QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen, QCalendar* cal) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QDate ret = self->toDate(stringVal_QString, format_QString, *cal);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDate*>(new QDate(ret));
}

QDateTime* QLocale_ToDateTime2(QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen, QCalendar* cal) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QDateTime ret = self->toDateTime(stringVal_QString, format_QString, *cal);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QDateTime*>(new QDateTime(ret));
}

QTime* QLocale_ToTime2(QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen, QCalendar* cal) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QString format_QString = QString::fromUtf8(format, format_Strlen);
	QTime ret = self->toTime(stringVal_QString, format_QString, *cal);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QTime*>(new QTime(ret));
}

QChar* QLocale_DecimalPoint(QLocale* self) {
	QChar ret = self->decimalPoint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QLocale_GroupSeparator(QLocale* self) {
	QChar ret = self->groupSeparator();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QLocale_Percent(QLocale* self) {
	QChar ret = self->percent();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QLocale_ZeroDigit(QLocale* self) {
	QChar ret = self->zeroDigit();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QLocale_NegativeSign(QLocale* self) {
	QChar ret = self->negativeSign();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QLocale_PositiveSign(QLocale* self) {
	QChar ret = self->positiveSign();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QLocale_Exponential(QLocale* self) {
	QChar ret = self->exponential();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

void QLocale_AmText(QLocale* self, char** _out, int* _out_Strlen) {
	QString ret = self->amText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_PmText(QLocale* self, char** _out, int* _out_Strlen) {
	QString ret = self->pmText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QLocale* QLocale_Collation(QLocale* self) {
	QLocale ret = self->collation();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLocale*>(new QLocale(ret));
}

void QLocale_ToUpper(QLocale* self, const char* str, size_t str_Strlen, char** _out, int* _out_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QString ret = self->toUpper(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToLower(QLocale* self, const char* str, size_t str_Strlen, char** _out, int* _out_Strlen) {
	QString str_QString = QString::fromUtf8(str, str_Strlen);
	QString ret = self->toLower(str_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyString(QLocale* self, int64_t param1, char** _out, int* _out_Strlen) {
	QString ret = self->toCurrencyString((qlonglong)(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyStringWithQulonglong(QLocale* self, uint64_t param1, char** _out, int* _out_Strlen) {
	QString ret = self->toCurrencyString((qulonglong)(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyStringWithShort(QLocale* self, int16_t param1, char** _out, int* _out_Strlen) {
	QString ret = self->toCurrencyString(static_cast<short>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyStringWithUshort(QLocale* self, uint16_t param1, char** _out, int* _out_Strlen) {
	QString ret = self->toCurrencyString(static_cast<ushort>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyStringWithInt(QLocale* self, int param1, char** _out, int* _out_Strlen) {
	QString ret = self->toCurrencyString(static_cast<int>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyStringWithUint(QLocale* self, unsigned int param1, char** _out, int* _out_Strlen) {
	QString ret = self->toCurrencyString(static_cast<uint>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyStringWithDouble(QLocale* self, double param1, char** _out, int* _out_Strlen) {
	QString ret = self->toCurrencyString(static_cast<double>(param1));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyString2(QLocale* self, double param1, const char* symbol, size_t symbol_Strlen, int precision, char** _out, int* _out_Strlen) {
	QString symbol_QString = QString::fromUtf8(symbol, symbol_Strlen);
	QString ret = self->toCurrencyString(static_cast<double>(param1), symbol_QString, static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyStringWithFloat(QLocale* self, float i, char** _out, int* _out_Strlen) {
	QString ret = self->toCurrencyString(static_cast<float>(i));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_ToCurrencyString3(QLocale* self, float i, const char* symbol, size_t symbol_Strlen, int precision, char** _out, int* _out_Strlen) {
	QString symbol_QString = QString::fromUtf8(symbol, symbol_Strlen);
	QString ret = self->toCurrencyString(static_cast<float>(i), symbol_QString, static_cast<int>(precision));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QLocale_UiLanguages(QLocale* self, char*** _out, int** _out_Lengths, size_t* _out_len) {
	QList<QString> ret = self->uiLanguages();
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
	return self->operator==(*other);
}

bool QLocale_OperatorNotEqual(QLocale* self, QLocale* other) {
	return self->operator!=(*other);
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

void QLocale_CreateSeparatedList(QLocale* self, char** strl, uint64_t* strl_Lengths, size_t strl_len, char** _out, int* _out_Strlen) {
	QList<QString> strl_QList;
	strl_QList.reserve(strl_len);
	for(size_t i = 0; i < strl_len; ++i) {
		strl_QList.push_back(QString::fromUtf8(strl[i], strl_Lengths[i]));
	}
	QString ret = self->createSeparatedList(strl_QList);
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

void QLocale_Delete(QLocale* self) {
	delete self;
}

