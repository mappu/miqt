#pragma once
#ifndef MIQT_QT_GEN_QLOCALE_H
#define MIQT_QT_GEN_QLOCALE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCalendar;
class QChar;
class QDate;
class QDateTime;
class QLocale;
class QTime;
#else
typedef struct QCalendar QCalendar;
typedef struct QChar QChar;
typedef struct QDate QDate;
typedef struct QDateTime QDateTime;
typedef struct QLocale QLocale;
typedef struct QTime QTime;
#endif

QLocale* QLocale_new();
QLocale* QLocale_new2(struct miqt_string name);
QLocale* QLocale_new3(int language);
QLocale* QLocale_new4(int language, int script, int country);
QLocale* QLocale_new5(QLocale* other);
QLocale* QLocale_new6(int language, int country);
void QLocale_operatorAssign(QLocale* self, QLocale* other);
void QLocale_swap(QLocale* self, QLocale* other);
int QLocale_language(const QLocale* self);
int QLocale_script(const QLocale* self);
int QLocale_country(const QLocale* self);
struct miqt_string QLocale_name(const QLocale* self);
struct miqt_string QLocale_bcp47Name(const QLocale* self);
struct miqt_string QLocale_nativeLanguageName(const QLocale* self);
struct miqt_string QLocale_nativeCountryName(const QLocale* self);
int16_t QLocale_toShort(const QLocale* self, struct miqt_string s);
uint16_t QLocale_toUShort(const QLocale* self, struct miqt_string s);
int QLocale_toInt(const QLocale* self, struct miqt_string s);
unsigned int QLocale_toUInt(const QLocale* self, struct miqt_string s);
long QLocale_toLong(const QLocale* self, struct miqt_string s);
unsigned long QLocale_toULong(const QLocale* self, struct miqt_string s);
long long QLocale_toLongLong(const QLocale* self, struct miqt_string s);
unsigned long long QLocale_toULongLong(const QLocale* self, struct miqt_string s);
float QLocale_toFloat(const QLocale* self, struct miqt_string s);
double QLocale_toDouble(const QLocale* self, struct miqt_string s);
struct miqt_string QLocale_toString(const QLocale* self, long long i);
struct miqt_string QLocale_toStringWithQulonglong(const QLocale* self, unsigned long long i);
struct miqt_string QLocale_toStringWithLong(const QLocale* self, long i);
struct miqt_string QLocale_toStringWithUlong(const QLocale* self, unsigned long i);
struct miqt_string QLocale_toStringWithShort(const QLocale* self, int16_t i);
struct miqt_string QLocale_toStringWithUshort(const QLocale* self, uint16_t i);
struct miqt_string QLocale_toStringWithInt(const QLocale* self, int i);
struct miqt_string QLocale_toStringWithUint(const QLocale* self, unsigned int i);
struct miqt_string QLocale_toStringWithDouble(const QLocale* self, double i);
struct miqt_string QLocale_toStringWithFloat(const QLocale* self, float i);
struct miqt_string QLocale_toString2(const QLocale* self, QDate* date, struct miqt_string formatStr);
struct miqt_string QLocale_toString3(const QLocale* self, QTime* time, struct miqt_string formatStr);
struct miqt_string QLocale_toString4(const QLocale* self, QDateTime* dateTime, struct miqt_string format);
struct miqt_string QLocale_toStringWithDate(const QLocale* self, QDate* date);
struct miqt_string QLocale_toStringWithTime(const QLocale* self, QTime* time);
struct miqt_string QLocale_toStringWithDateTime(const QLocale* self, QDateTime* dateTime);
struct miqt_string QLocale_toString9(const QLocale* self, QDate* date, int format, QCalendar* cal);
struct miqt_string QLocale_toString10(const QLocale* self, QDateTime* dateTime, int format, QCalendar* cal);
struct miqt_string QLocale_dateFormat(const QLocale* self);
struct miqt_string QLocale_timeFormat(const QLocale* self);
struct miqt_string QLocale_dateTimeFormat(const QLocale* self);
QDate* QLocale_toDate(const QLocale* self, struct miqt_string string);
QTime* QLocale_toTime(const QLocale* self, struct miqt_string string);
QDateTime* QLocale_toDateTime(const QLocale* self, struct miqt_string string);
QDate* QLocale_toDate2(const QLocale* self, struct miqt_string string, struct miqt_string format);
QTime* QLocale_toTime2(const QLocale* self, struct miqt_string string, struct miqt_string format);
QDateTime* QLocale_toDateTime2(const QLocale* self, struct miqt_string string, struct miqt_string format);
QDate* QLocale_toDate3(const QLocale* self, struct miqt_string string, int format, QCalendar* cal);
QDateTime* QLocale_toDateTime3(const QLocale* self, struct miqt_string string, int format, QCalendar* cal);
QDate* QLocale_toDate4(const QLocale* self, struct miqt_string string, struct miqt_string format, QCalendar* cal);
QDateTime* QLocale_toDateTime4(const QLocale* self, struct miqt_string string, struct miqt_string format, QCalendar* cal);
QTime* QLocale_toTime3(const QLocale* self, struct miqt_string string, int format, QCalendar* cal);
QTime* QLocale_toTime4(const QLocale* self, struct miqt_string string, struct miqt_string format, QCalendar* cal);
QChar* QLocale_decimalPoint(const QLocale* self);
QChar* QLocale_groupSeparator(const QLocale* self);
QChar* QLocale_percent(const QLocale* self);
QChar* QLocale_zeroDigit(const QLocale* self);
QChar* QLocale_negativeSign(const QLocale* self);
QChar* QLocale_positiveSign(const QLocale* self);
QChar* QLocale_exponential(const QLocale* self);
struct miqt_string QLocale_monthName(const QLocale* self, int param1);
struct miqt_string QLocale_standaloneMonthName(const QLocale* self, int param1);
struct miqt_string QLocale_dayName(const QLocale* self, int param1);
struct miqt_string QLocale_standaloneDayName(const QLocale* self, int param1);
int QLocale_firstDayOfWeek(const QLocale* self);
struct miqt_array /* of int */  QLocale_weekdays(const QLocale* self);
struct miqt_string QLocale_amText(const QLocale* self);
struct miqt_string QLocale_pmText(const QLocale* self);
int QLocale_measurementSystem(const QLocale* self);
QLocale* QLocale_collation(const QLocale* self);
int QLocale_textDirection(const QLocale* self);
struct miqt_string QLocale_toUpper(const QLocale* self, struct miqt_string str);
struct miqt_string QLocale_toLower(const QLocale* self, struct miqt_string str);
struct miqt_string QLocale_currencySymbol(const QLocale* self);
struct miqt_string QLocale_toCurrencyString(const QLocale* self, long long param1);
struct miqt_string QLocale_toCurrencyStringWithQulonglong(const QLocale* self, unsigned long long param1);
struct miqt_string QLocale_toCurrencyStringWithShort(const QLocale* self, int16_t param1);
struct miqt_string QLocale_toCurrencyStringWithUshort(const QLocale* self, uint16_t param1);
struct miqt_string QLocale_toCurrencyStringWithInt(const QLocale* self, int param1);
struct miqt_string QLocale_toCurrencyStringWithUint(const QLocale* self, unsigned int param1);
struct miqt_string QLocale_toCurrencyStringWithDouble(const QLocale* self, double param1);
struct miqt_string QLocale_toCurrencyString2(const QLocale* self, double param1, struct miqt_string symbol, int precision);
struct miqt_string QLocale_toCurrencyStringWithFloat(const QLocale* self, float i);
struct miqt_string QLocale_toCurrencyString3(const QLocale* self, float i, struct miqt_string symbol, int precision);
struct miqt_string QLocale_formattedDataSize(QLocale* self, long long bytes);
struct miqt_string QLocale_formattedDataSizeWithBytes(const QLocale* self, long long bytes);
struct miqt_array /* of struct miqt_string */  QLocale_uiLanguages(const QLocale* self);
bool QLocale_operatorEqual(const QLocale* self, QLocale* other);
bool QLocale_operatorNotEqual(const QLocale* self, QLocale* other);
struct miqt_string QLocale_languageToString(int language);
struct miqt_string QLocale_countryToString(int country);
struct miqt_string QLocale_scriptToString(int script);
void QLocale_setDefault(QLocale* locale);
QLocale* QLocale_c();
QLocale* QLocale_system();
struct miqt_array /* of QLocale* */  QLocale_matchingLocales(int language, int script, int country);
struct miqt_array /* of int */  QLocale_countriesForLanguage(int lang);
void QLocale_setNumberOptions(QLocale* self, int options);
int QLocale_numberOptions(const QLocale* self);
struct miqt_string QLocale_quoteString(const QLocale* self, struct miqt_string str);
struct miqt_string QLocale_createSeparatedList(const QLocale* self, struct miqt_array /* of struct miqt_string */  strl);
int16_t QLocale_toShort2(const QLocale* self, struct miqt_string s, bool* ok);
uint16_t QLocale_toUShort2(const QLocale* self, struct miqt_string s, bool* ok);
int QLocale_toInt2(const QLocale* self, struct miqt_string s, bool* ok);
unsigned int QLocale_toUInt2(const QLocale* self, struct miqt_string s, bool* ok);
long QLocale_toLong2(const QLocale* self, struct miqt_string s, bool* ok);
unsigned long QLocale_toULong2(const QLocale* self, struct miqt_string s, bool* ok);
long long QLocale_toLongLong2(const QLocale* self, struct miqt_string s, bool* ok);
unsigned long long QLocale_toULongLong2(const QLocale* self, struct miqt_string s, bool* ok);
float QLocale_toFloat2(const QLocale* self, struct miqt_string s, bool* ok);
double QLocale_toDouble2(const QLocale* self, struct miqt_string s, bool* ok);
struct miqt_string QLocale_toString22(const QLocale* self, double i, char f);
struct miqt_string QLocale_toString32(const QLocale* self, double i, char f, int prec);
struct miqt_string QLocale_toString23(const QLocale* self, float i, char f);
struct miqt_string QLocale_toString33(const QLocale* self, float i, char f, int prec);
struct miqt_string QLocale_toString24(const QLocale* self, QDate* date, int format);
struct miqt_string QLocale_toString25(const QLocale* self, QTime* time, int format);
struct miqt_string QLocale_toString26(const QLocale* self, QDateTime* dateTime, int format);
struct miqt_string QLocale_dateFormat1(const QLocale* self, int format);
struct miqt_string QLocale_timeFormat1(const QLocale* self, int format);
struct miqt_string QLocale_dateTimeFormat1(const QLocale* self, int format);
QDate* QLocale_toDate22(const QLocale* self, struct miqt_string string, int param2);
QTime* QLocale_toTime22(const QLocale* self, struct miqt_string string, int param2);
QDateTime* QLocale_toDateTime22(const QLocale* self, struct miqt_string string, int format);
struct miqt_string QLocale_monthName2(const QLocale* self, int param1, int format);
struct miqt_string QLocale_standaloneMonthName2(const QLocale* self, int param1, int format);
struct miqt_string QLocale_dayName2(const QLocale* self, int param1, int format);
struct miqt_string QLocale_standaloneDayName2(const QLocale* self, int param1, int format);
struct miqt_string QLocale_currencySymbol1(const QLocale* self, int param1);
struct miqt_string QLocale_toCurrencyString22(const QLocale* self, long long param1, struct miqt_string symbol);
struct miqt_string QLocale_toCurrencyString23(const QLocale* self, unsigned long long param1, struct miqt_string symbol);
struct miqt_string QLocale_toCurrencyString24(const QLocale* self, int16_t param1, struct miqt_string symbol);
struct miqt_string QLocale_toCurrencyString25(const QLocale* self, uint16_t param1, struct miqt_string symbol);
struct miqt_string QLocale_toCurrencyString26(const QLocale* self, int param1, struct miqt_string symbol);
struct miqt_string QLocale_toCurrencyString27(const QLocale* self, unsigned int param1, struct miqt_string symbol);
struct miqt_string QLocale_toCurrencyString28(const QLocale* self, double param1, struct miqt_string symbol);
struct miqt_string QLocale_toCurrencyString29(const QLocale* self, float i, struct miqt_string symbol);
struct miqt_string QLocale_formattedDataSize2(QLocale* self, long long bytes, int precision);
struct miqt_string QLocale_formattedDataSize3(QLocale* self, long long bytes, int precision, int format);
struct miqt_string QLocale_formattedDataSize22(const QLocale* self, long long bytes, int precision);
struct miqt_string QLocale_formattedDataSize32(const QLocale* self, long long bytes, int precision, int format);
struct miqt_string QLocale_quoteString2(const QLocale* self, struct miqt_string str, int style);
void QLocale_delete(QLocale* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
