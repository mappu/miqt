#ifndef GEN_QLOCALE_H
#define GEN_QLOCALE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QLocale* QLocale_new2(const char* name, size_t name_Strlen);
QLocale* QLocale_new3(uintptr_t language);
QLocale* QLocale_new4(uintptr_t language, uintptr_t script, uintptr_t country);
QLocale* QLocale_new5(QLocale* other);
QLocale* QLocale_new6(uintptr_t language, uintptr_t country);
void QLocale_OperatorAssign(QLocale* self, QLocale* other);
void QLocale_Swap(QLocale* self, QLocale* other);
uintptr_t QLocale_Language(const QLocale* self);
uintptr_t QLocale_Script(const QLocale* self);
uintptr_t QLocale_Country(const QLocale* self);
void QLocale_Name(const QLocale* self, char** _out, int* _out_Strlen);
void QLocale_Bcp47Name(const QLocale* self, char** _out, int* _out_Strlen);
void QLocale_NativeLanguageName(const QLocale* self, char** _out, int* _out_Strlen);
void QLocale_NativeCountryName(const QLocale* self, char** _out, int* _out_Strlen);
int16_t QLocale_ToShort(const QLocale* self, const char* s, size_t s_Strlen);
uint16_t QLocale_ToUShort(const QLocale* self, const char* s, size_t s_Strlen);
int QLocale_ToInt(const QLocale* self, const char* s, size_t s_Strlen);
unsigned int QLocale_ToUInt(const QLocale* self, const char* s, size_t s_Strlen);
long QLocale_ToLong(const QLocale* self, const char* s, size_t s_Strlen);
unsigned long QLocale_ToULong(const QLocale* self, const char* s, size_t s_Strlen);
int64_t QLocale_ToLongLong(const QLocale* self, const char* s, size_t s_Strlen);
uint64_t QLocale_ToULongLong(const QLocale* self, const char* s, size_t s_Strlen);
float QLocale_ToFloat(const QLocale* self, const char* s, size_t s_Strlen);
double QLocale_ToDouble(const QLocale* self, const char* s, size_t s_Strlen);
void QLocale_ToString(const QLocale* self, int64_t i, char** _out, int* _out_Strlen);
void QLocale_ToStringWithQulonglong(const QLocale* self, uint64_t i, char** _out, int* _out_Strlen);
void QLocale_ToStringWithLong(const QLocale* self, long i, char** _out, int* _out_Strlen);
void QLocale_ToStringWithUlong(const QLocale* self, unsigned long i, char** _out, int* _out_Strlen);
void QLocale_ToStringWithShort(const QLocale* self, int16_t i, char** _out, int* _out_Strlen);
void QLocale_ToStringWithUshort(const QLocale* self, uint16_t i, char** _out, int* _out_Strlen);
void QLocale_ToStringWithInt(const QLocale* self, int i, char** _out, int* _out_Strlen);
void QLocale_ToStringWithUint(const QLocale* self, unsigned int i, char** _out, int* _out_Strlen);
void QLocale_ToStringWithDouble(const QLocale* self, double i, char** _out, int* _out_Strlen);
void QLocale_ToStringWithFloat(const QLocale* self, float i, char** _out, int* _out_Strlen);
void QLocale_ToString2(const QLocale* self, QDate* date, const char* formatStr, size_t formatStr_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToString3(const QLocale* self, QTime* time, const char* formatStr, size_t formatStr_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToString4(const QLocale* self, QDateTime* dateTime, const char* format, size_t format_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToStringWithDate(const QLocale* self, QDate* date, char** _out, int* _out_Strlen);
void QLocale_ToStringWithTime(const QLocale* self, QTime* time, char** _out, int* _out_Strlen);
void QLocale_ToStringWithDateTime(const QLocale* self, QDateTime* dateTime, char** _out, int* _out_Strlen);
void QLocale_ToString9(const QLocale* self, QDate* date, uintptr_t format, QCalendar* cal, char** _out, int* _out_Strlen);
void QLocale_ToString10(const QLocale* self, QDateTime* dateTime, uintptr_t format, QCalendar* cal, char** _out, int* _out_Strlen);
void QLocale_DateFormat(const QLocale* self, char** _out, int* _out_Strlen);
void QLocale_TimeFormat(const QLocale* self, char** _out, int* _out_Strlen);
void QLocale_DateTimeFormat(const QLocale* self, char** _out, int* _out_Strlen);
QDate* QLocale_ToDate(const QLocale* self, const char* stringVal, size_t stringVal_Strlen);
QTime* QLocale_ToTime(const QLocale* self, const char* stringVal, size_t stringVal_Strlen);
QDateTime* QLocale_ToDateTime(const QLocale* self, const char* stringVal, size_t stringVal_Strlen);
QDate* QLocale_ToDate2(const QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen);
QTime* QLocale_ToTime2(const QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen);
QDateTime* QLocale_ToDateTime2(const QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen);
QDate* QLocale_ToDate3(const QLocale* self, const char* stringVal, size_t stringVal_Strlen, uintptr_t format, QCalendar* cal);
QDateTime* QLocale_ToDateTime3(const QLocale* self, const char* stringVal, size_t stringVal_Strlen, uintptr_t format, QCalendar* cal);
QDate* QLocale_ToDate4(const QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen, QCalendar* cal);
QDateTime* QLocale_ToDateTime4(const QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen, QCalendar* cal);
QTime* QLocale_ToTime3(const QLocale* self, const char* stringVal, size_t stringVal_Strlen, uintptr_t format, QCalendar* cal);
QTime* QLocale_ToTime4(const QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen, QCalendar* cal);
QChar* QLocale_DecimalPoint(const QLocale* self);
QChar* QLocale_GroupSeparator(const QLocale* self);
QChar* QLocale_Percent(const QLocale* self);
QChar* QLocale_ZeroDigit(const QLocale* self);
QChar* QLocale_NegativeSign(const QLocale* self);
QChar* QLocale_PositiveSign(const QLocale* self);
QChar* QLocale_Exponential(const QLocale* self);
void QLocale_MonthName(const QLocale* self, int param1, char** _out, int* _out_Strlen);
void QLocale_StandaloneMonthName(const QLocale* self, int param1, char** _out, int* _out_Strlen);
void QLocale_DayName(const QLocale* self, int param1, char** _out, int* _out_Strlen);
void QLocale_StandaloneDayName(const QLocale* self, int param1, char** _out, int* _out_Strlen);
uintptr_t QLocale_FirstDayOfWeek(const QLocale* self);
void QLocale_Weekdays(const QLocale* self, uintptr_t** _out, size_t* _out_len);
void QLocale_AmText(const QLocale* self, char** _out, int* _out_Strlen);
void QLocale_PmText(const QLocale* self, char** _out, int* _out_Strlen);
uintptr_t QLocale_MeasurementSystem(const QLocale* self);
QLocale* QLocale_Collation(const QLocale* self);
uintptr_t QLocale_TextDirection(const QLocale* self);
void QLocale_ToUpper(const QLocale* self, const char* str, size_t str_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToLower(const QLocale* self, const char* str, size_t str_Strlen, char** _out, int* _out_Strlen);
void QLocale_CurrencySymbol(const QLocale* self, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString(const QLocale* self, long long param1, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyStringWithQulonglong(const QLocale* self, unsigned long long param1, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyStringWithShort(const QLocale* self, int16_t param1, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyStringWithUshort(const QLocale* self, uint16_t param1, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyStringWithInt(const QLocale* self, int param1, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyStringWithUint(const QLocale* self, unsigned int param1, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyStringWithDouble(const QLocale* self, double param1, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString2(const QLocale* self, double param1, const char* symbol, size_t symbol_Strlen, int precision, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyStringWithFloat(const QLocale* self, float i, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString3(const QLocale* self, float i, const char* symbol, size_t symbol_Strlen, int precision, char** _out, int* _out_Strlen);
void QLocale_FormattedDataSize(QLocale* self, long long bytes, char** _out, int* _out_Strlen);
void QLocale_FormattedDataSizeWithBytes(const QLocale* self, long long bytes, char** _out, int* _out_Strlen);
void QLocale_UiLanguages(const QLocale* self, char*** _out, int** _out_Lengths, size_t* _out_len);
bool QLocale_OperatorEqual(const QLocale* self, QLocale* other);
bool QLocale_OperatorNotEqual(const QLocale* self, QLocale* other);
void QLocale_LanguageToString(uintptr_t language, char** _out, int* _out_Strlen);
void QLocale_CountryToString(uintptr_t country, char** _out, int* _out_Strlen);
void QLocale_ScriptToString(uintptr_t script, char** _out, int* _out_Strlen);
void QLocale_SetDefault(QLocale* locale);
QLocale* QLocale_C();
QLocale* QLocale_System();
void QLocale_MatchingLocales(uintptr_t language, uintptr_t script, uintptr_t country, QLocale*** _out, size_t* _out_len);
void QLocale_CountriesForLanguage(uintptr_t lang, uintptr_t** _out, size_t* _out_len);
void QLocale_SetNumberOptions(QLocale* self, int options);
int QLocale_NumberOptions(const QLocale* self);
void QLocale_QuoteString(const QLocale* self, const char* str, size_t str_Strlen, char** _out, int* _out_Strlen);
void QLocale_CreateSeparatedList(const QLocale* self, char** strl, uint64_t* strl_Lengths, size_t strl_len, char** _out, int* _out_Strlen);
int16_t QLocale_ToShort2(const QLocale* self, const char* s, size_t s_Strlen, bool* ok);
uint16_t QLocale_ToUShort2(const QLocale* self, const char* s, size_t s_Strlen, bool* ok);
int QLocale_ToInt2(const QLocale* self, const char* s, size_t s_Strlen, bool* ok);
unsigned int QLocale_ToUInt2(const QLocale* self, const char* s, size_t s_Strlen, bool* ok);
long QLocale_ToLong2(const QLocale* self, const char* s, size_t s_Strlen, bool* ok);
unsigned long QLocale_ToULong2(const QLocale* self, const char* s, size_t s_Strlen, bool* ok);
int64_t QLocale_ToLongLong2(const QLocale* self, const char* s, size_t s_Strlen, bool* ok);
uint64_t QLocale_ToULongLong2(const QLocale* self, const char* s, size_t s_Strlen, bool* ok);
float QLocale_ToFloat2(const QLocale* self, const char* s, size_t s_Strlen, bool* ok);
double QLocale_ToDouble2(const QLocale* self, const char* s, size_t s_Strlen, bool* ok);
void QLocale_ToString22(const QLocale* self, double i, char f, char** _out, int* _out_Strlen);
void QLocale_ToString32(const QLocale* self, double i, char f, int prec, char** _out, int* _out_Strlen);
void QLocale_ToString23(const QLocale* self, float i, char f, char** _out, int* _out_Strlen);
void QLocale_ToString33(const QLocale* self, float i, char f, int prec, char** _out, int* _out_Strlen);
void QLocale_ToString24(const QLocale* self, QDate* date, uintptr_t format, char** _out, int* _out_Strlen);
void QLocale_ToString25(const QLocale* self, QTime* time, uintptr_t format, char** _out, int* _out_Strlen);
void QLocale_ToString26(const QLocale* self, QDateTime* dateTime, uintptr_t format, char** _out, int* _out_Strlen);
void QLocale_DateFormat1(const QLocale* self, uintptr_t format, char** _out, int* _out_Strlen);
void QLocale_TimeFormat1(const QLocale* self, uintptr_t format, char** _out, int* _out_Strlen);
void QLocale_DateTimeFormat1(const QLocale* self, uintptr_t format, char** _out, int* _out_Strlen);
QDate* QLocale_ToDate22(const QLocale* self, const char* stringVal, size_t stringVal_Strlen, uintptr_t param2);
QTime* QLocale_ToTime22(const QLocale* self, const char* stringVal, size_t stringVal_Strlen, uintptr_t param2);
QDateTime* QLocale_ToDateTime22(const QLocale* self, const char* stringVal, size_t stringVal_Strlen, uintptr_t format);
void QLocale_MonthName2(const QLocale* self, int param1, uintptr_t format, char** _out, int* _out_Strlen);
void QLocale_StandaloneMonthName2(const QLocale* self, int param1, uintptr_t format, char** _out, int* _out_Strlen);
void QLocale_DayName2(const QLocale* self, int param1, uintptr_t format, char** _out, int* _out_Strlen);
void QLocale_StandaloneDayName2(const QLocale* self, int param1, uintptr_t format, char** _out, int* _out_Strlen);
void QLocale_CurrencySymbol1(const QLocale* self, uintptr_t param1, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString22(const QLocale* self, long long param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString23(const QLocale* self, unsigned long long param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString24(const QLocale* self, int16_t param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString25(const QLocale* self, uint16_t param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString26(const QLocale* self, int param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString27(const QLocale* self, unsigned int param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString28(const QLocale* self, double param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString29(const QLocale* self, float i, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen);
void QLocale_FormattedDataSize2(QLocale* self, long long bytes, int precision, char** _out, int* _out_Strlen);
void QLocale_FormattedDataSize3(QLocale* self, long long bytes, int precision, int format, char** _out, int* _out_Strlen);
void QLocale_FormattedDataSize22(const QLocale* self, long long bytes, int precision, char** _out, int* _out_Strlen);
void QLocale_FormattedDataSize32(const QLocale* self, long long bytes, int precision, int format, char** _out, int* _out_Strlen);
void QLocale_QuoteString2(const QLocale* self, const char* str, size_t str_Strlen, uintptr_t style, char** _out, int* _out_Strlen);
void QLocale_Delete(QLocale* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
