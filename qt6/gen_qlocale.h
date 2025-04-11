#pragma once
#ifndef MIQT_QT6_GEN_QLOCALE_H
#define MIQT_QT6_GEN_QLOCALE_H

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
class QDate;
class QDateTime;
class QLocale;
class QTime;
#else
typedef struct QCalendar QCalendar;
typedef struct QDate QDate;
typedef struct QDateTime QDateTime;
typedef struct QLocale QLocale;
typedef struct QTime QTime;
#endif

QLocale* QLocale_new();
QLocale* QLocale_new2(struct miqt_string name);
QLocale* QLocale_new3(unsigned short language, unsigned short territory);
QLocale* QLocale_new4(unsigned short language);
QLocale* QLocale_new5(QLocale* other);
QLocale* QLocale_new6(unsigned short language, unsigned short script);
QLocale* QLocale_new7(unsigned short language, unsigned short script, unsigned short territory);
void QLocale_operatorAssign(QLocale* self, QLocale* other);
void QLocale_swap(QLocale* self, QLocale* other);
unsigned short QLocale_language(const QLocale* self);
unsigned short QLocale_script(const QLocale* self);
unsigned short QLocale_territory(const QLocale* self);
unsigned short QLocale_country(const QLocale* self);
struct miqt_string QLocale_name(const QLocale* self);
struct miqt_string QLocale_bcp47Name(const QLocale* self);
struct miqt_string QLocale_nativeLanguageName(const QLocale* self);
struct miqt_string QLocale_nativeTerritoryName(const QLocale* self);
struct miqt_string QLocale_nativeCountryName(const QLocale* self);
short QLocale_toShort(const QLocale* self, struct miqt_string s);
unsigned short QLocale_toUShort(const QLocale* self, struct miqt_string s);
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
struct miqt_string QLocale_toStringWithShort(const QLocale* self, short i);
struct miqt_string QLocale_toStringWithUshort(const QLocale* self, unsigned short i);
struct miqt_string QLocale_toStringWithInt(const QLocale* self, int i);
struct miqt_string QLocale_toStringWithUint(const QLocale* self, unsigned int i);
struct miqt_string QLocale_toStringWithDouble(const QLocale* self, double f);
struct miqt_string QLocale_toStringWithFloat(const QLocale* self, float f);
struct miqt_string QLocale_toString2(const QLocale* self, QDate* date, struct miqt_string format);
struct miqt_string QLocale_toString3(const QLocale* self, QTime* time, struct miqt_string format);
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
struct miqt_string QLocale_decimalPoint(const QLocale* self);
struct miqt_string QLocale_groupSeparator(const QLocale* self);
struct miqt_string QLocale_percent(const QLocale* self);
struct miqt_string QLocale_zeroDigit(const QLocale* self);
struct miqt_string QLocale_negativeSign(const QLocale* self);
struct miqt_string QLocale_positiveSign(const QLocale* self);
struct miqt_string QLocale_exponential(const QLocale* self);
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
struct miqt_string QLocale_toCurrencyStringWithShort(const QLocale* self, short i);
struct miqt_string QLocale_toCurrencyStringWithUshort(const QLocale* self, unsigned short i);
struct miqt_string QLocale_toCurrencyStringWithInt(const QLocale* self, int i);
struct miqt_string QLocale_toCurrencyStringWithUint(const QLocale* self, unsigned int i);
struct miqt_string QLocale_toCurrencyStringWithDouble(const QLocale* self, double param1);
struct miqt_string QLocale_toCurrencyStringWithFloat(const QLocale* self, float i);
struct miqt_string QLocale_formattedDataSize(const QLocale* self, long long bytes);
struct miqt_array /* of struct miqt_string */  QLocale_uiLanguages(const QLocale* self);
struct miqt_string QLocale_languageToCode(unsigned short language);
struct miqt_string QLocale_territoryToCode(unsigned short territory);
struct miqt_string QLocale_countryToCode(unsigned short country);
struct miqt_string QLocale_scriptToCode(unsigned short script);
struct miqt_string QLocale_languageToString(unsigned short language);
struct miqt_string QLocale_territoryToString(unsigned short territory);
struct miqt_string QLocale_countryToString(unsigned short country);
struct miqt_string QLocale_scriptToString(unsigned short script);
void QLocale_setDefault(QLocale* locale);
QLocale* QLocale_c();
QLocale* QLocale_system();
struct miqt_array /* of QLocale* */  QLocale_matchingLocales(unsigned short language, unsigned short script, unsigned short territory);
struct miqt_array /* of unsigned short */  QLocale_countriesForLanguage(unsigned short lang);
void QLocale_setNumberOptions(QLocale* self, int options);
int QLocale_numberOptions(const QLocale* self);
struct miqt_string QLocale_quoteString(const QLocale* self, struct miqt_string str);
struct miqt_string QLocale_createSeparatedList(const QLocale* self, struct miqt_array /* of struct miqt_string */  strl);
short QLocale_toShort2(const QLocale* self, struct miqt_string s, bool* ok);
unsigned short QLocale_toUShort2(const QLocale* self, struct miqt_string s, bool* ok);
int QLocale_toInt2(const QLocale* self, struct miqt_string s, bool* ok);
unsigned int QLocale_toUInt2(const QLocale* self, struct miqt_string s, bool* ok);
long QLocale_toLong2(const QLocale* self, struct miqt_string s, bool* ok);
unsigned long QLocale_toULong2(const QLocale* self, struct miqt_string s, bool* ok);
long long QLocale_toLongLong2(const QLocale* self, struct miqt_string s, bool* ok);
unsigned long long QLocale_toULongLong2(const QLocale* self, struct miqt_string s, bool* ok);
float QLocale_toFloat2(const QLocale* self, struct miqt_string s, bool* ok);
double QLocale_toDouble2(const QLocale* self, struct miqt_string s, bool* ok);
struct miqt_string QLocale_toString12(const QLocale* self, double f, char format);
struct miqt_string QLocale_toString13(const QLocale* self, double f, char format, int precision);
struct miqt_string QLocale_toString14(const QLocale* self, float f, char format);
struct miqt_string QLocale_toString15(const QLocale* self, float f, char format, int precision);
struct miqt_string QLocale_toString16(const QLocale* self, QDate* date, int format);
struct miqt_string QLocale_toString17(const QLocale* self, QTime* time, int format);
struct miqt_string QLocale_toString18(const QLocale* self, QDateTime* dateTime, int format);
struct miqt_string QLocale_dateFormatWithFormat(const QLocale* self, int format);
struct miqt_string QLocale_timeFormatWithFormat(const QLocale* self, int format);
struct miqt_string QLocale_dateTimeFormatWithFormat(const QLocale* self, int format);
QDate* QLocale_toDate5(const QLocale* self, struct miqt_string string, int param2);
QTime* QLocale_toTime3(const QLocale* self, struct miqt_string string, int param2);
QDateTime* QLocale_toDateTime5(const QLocale* self, struct miqt_string string, int format);
struct miqt_string QLocale_monthName2(const QLocale* self, int param1, int format);
struct miqt_string QLocale_standaloneMonthName2(const QLocale* self, int param1, int format);
struct miqt_string QLocale_dayName2(const QLocale* self, int param1, int format);
struct miqt_string QLocale_standaloneDayName2(const QLocale* self, int param1, int format);
struct miqt_string QLocale_currencySymbolWithQLocaleCurrencySymbolFormat(const QLocale* self, int param1);
struct miqt_string QLocale_toCurrencyString2(const QLocale* self, long long param1, struct miqt_string symbol);
struct miqt_string QLocale_toCurrencyString3(const QLocale* self, unsigned long long param1, struct miqt_string symbol);
struct miqt_string QLocale_toCurrencyString4(const QLocale* self, short i, struct miqt_string symbol);
struct miqt_string QLocale_toCurrencyString5(const QLocale* self, unsigned short i, struct miqt_string symbol);
struct miqt_string QLocale_toCurrencyString6(const QLocale* self, int i, struct miqt_string symbol);
struct miqt_string QLocale_toCurrencyString7(const QLocale* self, unsigned int i, struct miqt_string symbol);
struct miqt_string QLocale_toCurrencyString8(const QLocale* self, double param1, struct miqt_string symbol);
struct miqt_string QLocale_toCurrencyString9(const QLocale* self, double param1, struct miqt_string symbol, int precision);
struct miqt_string QLocale_toCurrencyString10(const QLocale* self, float i, struct miqt_string symbol);
struct miqt_string QLocale_toCurrencyString11(const QLocale* self, float i, struct miqt_string symbol, int precision);
struct miqt_string QLocale_formattedDataSize2(const QLocale* self, long long bytes, int precision);
struct miqt_string QLocale_formattedDataSize3(const QLocale* self, long long bytes, int precision, int format);
struct miqt_string QLocale_languageToCode2(unsigned short language, int codeTypes);
struct miqt_string QLocale_quoteString2(const QLocale* self, struct miqt_string str, int style);
void QLocale_delete(QLocale* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
