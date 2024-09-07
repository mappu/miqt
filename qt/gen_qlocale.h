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
uintptr_t QLocale_Language(QLocale* self);
uintptr_t QLocale_Script(QLocale* self);
uintptr_t QLocale_Country(QLocale* self);
void QLocale_Name(QLocale* self, char** _out, int* _out_Strlen);
void QLocale_Bcp47Name(QLocale* self, char** _out, int* _out_Strlen);
void QLocale_NativeLanguageName(QLocale* self, char** _out, int* _out_Strlen);
void QLocale_NativeCountryName(QLocale* self, char** _out, int* _out_Strlen);
int16_t QLocale_ToShort(QLocale* self, const char* s, size_t s_Strlen);
uint16_t QLocale_ToUShort(QLocale* self, const char* s, size_t s_Strlen);
int QLocale_ToInt(QLocale* self, const char* s, size_t s_Strlen);
unsigned int QLocale_ToUInt(QLocale* self, const char* s, size_t s_Strlen);
long QLocale_ToLong(QLocale* self, const char* s, size_t s_Strlen);
unsigned long QLocale_ToULong(QLocale* self, const char* s, size_t s_Strlen);
int64_t QLocale_ToLongLong(QLocale* self, const char* s, size_t s_Strlen);
uint64_t QLocale_ToULongLong(QLocale* self, const char* s, size_t s_Strlen);
float QLocale_ToFloat(QLocale* self, const char* s, size_t s_Strlen);
double QLocale_ToDouble(QLocale* self, const char* s, size_t s_Strlen);
void QLocale_ToString(QLocale* self, int64_t i, char** _out, int* _out_Strlen);
void QLocale_ToStringWithQulonglong(QLocale* self, uint64_t i, char** _out, int* _out_Strlen);
void QLocale_ToStringWithLong(QLocale* self, long i, char** _out, int* _out_Strlen);
void QLocale_ToStringWithUlong(QLocale* self, unsigned long i, char** _out, int* _out_Strlen);
void QLocale_ToStringWithShort(QLocale* self, int16_t i, char** _out, int* _out_Strlen);
void QLocale_ToStringWithUshort(QLocale* self, uint16_t i, char** _out, int* _out_Strlen);
void QLocale_ToStringWithInt(QLocale* self, int i, char** _out, int* _out_Strlen);
void QLocale_ToStringWithUint(QLocale* self, unsigned int i, char** _out, int* _out_Strlen);
void QLocale_ToStringWithDouble(QLocale* self, double i, char** _out, int* _out_Strlen);
void QLocale_ToStringWithFloat(QLocale* self, float i, char** _out, int* _out_Strlen);
void QLocale_ToString2(QLocale* self, QDate* date, const char* formatStr, size_t formatStr_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToString3(QLocale* self, QTime* time, const char* formatStr, size_t formatStr_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToString4(QLocale* self, QDateTime* dateTime, const char* format, size_t format_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToStringWithDate(QLocale* self, QDate* date, char** _out, int* _out_Strlen);
void QLocale_ToStringWithTime(QLocale* self, QTime* time, char** _out, int* _out_Strlen);
void QLocale_ToStringWithDateTime(QLocale* self, QDateTime* dateTime, char** _out, int* _out_Strlen);
void QLocale_ToString9(QLocale* self, QDate* date, uintptr_t format, QCalendar* cal, char** _out, int* _out_Strlen);
void QLocale_ToString10(QLocale* self, QDateTime* dateTime, uintptr_t format, QCalendar* cal, char** _out, int* _out_Strlen);
void QLocale_DateFormat(QLocale* self, char** _out, int* _out_Strlen);
void QLocale_TimeFormat(QLocale* self, char** _out, int* _out_Strlen);
void QLocale_DateTimeFormat(QLocale* self, char** _out, int* _out_Strlen);
QDate* QLocale_ToDate(QLocale* self, const char* stringVal, size_t stringVal_Strlen);
QTime* QLocale_ToTime(QLocale* self, const char* stringVal, size_t stringVal_Strlen);
QDateTime* QLocale_ToDateTime(QLocale* self, const char* stringVal, size_t stringVal_Strlen);
QDate* QLocale_ToDate2(QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen);
QTime* QLocale_ToTime2(QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen);
QDateTime* QLocale_ToDateTime2(QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen);
QDate* QLocale_ToDate3(QLocale* self, const char* stringVal, size_t stringVal_Strlen, uintptr_t format, QCalendar* cal);
QDateTime* QLocale_ToDateTime3(QLocale* self, const char* stringVal, size_t stringVal_Strlen, uintptr_t format, QCalendar* cal);
QDate* QLocale_ToDate4(QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen, QCalendar* cal);
QDateTime* QLocale_ToDateTime4(QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen, QCalendar* cal);
QTime* QLocale_ToTime3(QLocale* self, const char* stringVal, size_t stringVal_Strlen, uintptr_t format, QCalendar* cal);
QTime* QLocale_ToTime4(QLocale* self, const char* stringVal, size_t stringVal_Strlen, const char* format, size_t format_Strlen, QCalendar* cal);
QChar* QLocale_DecimalPoint(QLocale* self);
QChar* QLocale_GroupSeparator(QLocale* self);
QChar* QLocale_Percent(QLocale* self);
QChar* QLocale_ZeroDigit(QLocale* self);
QChar* QLocale_NegativeSign(QLocale* self);
QChar* QLocale_PositiveSign(QLocale* self);
QChar* QLocale_Exponential(QLocale* self);
void QLocale_MonthName(QLocale* self, int param1, char** _out, int* _out_Strlen);
void QLocale_StandaloneMonthName(QLocale* self, int param1, char** _out, int* _out_Strlen);
void QLocale_DayName(QLocale* self, int param1, char** _out, int* _out_Strlen);
void QLocale_StandaloneDayName(QLocale* self, int param1, char** _out, int* _out_Strlen);
uintptr_t QLocale_FirstDayOfWeek(QLocale* self);
void QLocale_Weekdays(QLocale* self, uintptr_t** _out, size_t* _out_len);
void QLocale_AmText(QLocale* self, char** _out, int* _out_Strlen);
void QLocale_PmText(QLocale* self, char** _out, int* _out_Strlen);
uintptr_t QLocale_MeasurementSystem(QLocale* self);
QLocale* QLocale_Collation(QLocale* self);
uintptr_t QLocale_TextDirection(QLocale* self);
void QLocale_ToUpper(QLocale* self, const char* str, size_t str_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToLower(QLocale* self, const char* str, size_t str_Strlen, char** _out, int* _out_Strlen);
void QLocale_CurrencySymbol(QLocale* self, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString(QLocale* self, long long param1, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyStringWithQulonglong(QLocale* self, unsigned long long param1, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyStringWithShort(QLocale* self, int16_t param1, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyStringWithUshort(QLocale* self, uint16_t param1, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyStringWithInt(QLocale* self, int param1, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyStringWithUint(QLocale* self, unsigned int param1, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyStringWithDouble(QLocale* self, double param1, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString2(QLocale* self, double param1, const char* symbol, size_t symbol_Strlen, int precision, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyStringWithFloat(QLocale* self, float i, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString3(QLocale* self, float i, const char* symbol, size_t symbol_Strlen, int precision, char** _out, int* _out_Strlen);
void QLocale_FormattedDataSize(QLocale* self, long long bytes, char** _out, int* _out_Strlen);
void QLocale_FormattedDataSizeWithBytes(QLocale* self, long long bytes, char** _out, int* _out_Strlen);
void QLocale_UiLanguages(QLocale* self, char*** _out, int** _out_Lengths, size_t* _out_len);
bool QLocale_OperatorEqual(QLocale* self, QLocale* other);
bool QLocale_OperatorNotEqual(QLocale* self, QLocale* other);
void QLocale_LanguageToString(uintptr_t language, char** _out, int* _out_Strlen);
void QLocale_CountryToString(uintptr_t country, char** _out, int* _out_Strlen);
void QLocale_ScriptToString(uintptr_t script, char** _out, int* _out_Strlen);
void QLocale_SetDefault(QLocale* locale);
QLocale* QLocale_C();
QLocale* QLocale_System();
void QLocale_MatchingLocales(uintptr_t language, uintptr_t script, uintptr_t country, QLocale*** _out, size_t* _out_len);
void QLocale_CountriesForLanguage(uintptr_t lang, uintptr_t** _out, size_t* _out_len);
void QLocale_SetNumberOptions(QLocale* self, int options);
int QLocale_NumberOptions(QLocale* self);
void QLocale_QuoteString(QLocale* self, const char* str, size_t str_Strlen, char** _out, int* _out_Strlen);
void QLocale_CreateSeparatedList(QLocale* self, char** strl, uint64_t* strl_Lengths, size_t strl_len, char** _out, int* _out_Strlen);
int16_t QLocale_ToShort2(QLocale* self, const char* s, size_t s_Strlen, bool* ok);
uint16_t QLocale_ToUShort2(QLocale* self, const char* s, size_t s_Strlen, bool* ok);
int QLocale_ToInt2(QLocale* self, const char* s, size_t s_Strlen, bool* ok);
unsigned int QLocale_ToUInt2(QLocale* self, const char* s, size_t s_Strlen, bool* ok);
long QLocale_ToLong2(QLocale* self, const char* s, size_t s_Strlen, bool* ok);
unsigned long QLocale_ToULong2(QLocale* self, const char* s, size_t s_Strlen, bool* ok);
int64_t QLocale_ToLongLong2(QLocale* self, const char* s, size_t s_Strlen, bool* ok);
uint64_t QLocale_ToULongLong2(QLocale* self, const char* s, size_t s_Strlen, bool* ok);
float QLocale_ToFloat2(QLocale* self, const char* s, size_t s_Strlen, bool* ok);
double QLocale_ToDouble2(QLocale* self, const char* s, size_t s_Strlen, bool* ok);
void QLocale_ToString22(QLocale* self, double i, char f, char** _out, int* _out_Strlen);
void QLocale_ToString32(QLocale* self, double i, char f, int prec, char** _out, int* _out_Strlen);
void QLocale_ToString23(QLocale* self, float i, char f, char** _out, int* _out_Strlen);
void QLocale_ToString33(QLocale* self, float i, char f, int prec, char** _out, int* _out_Strlen);
void QLocale_ToString24(QLocale* self, QDate* date, uintptr_t format, char** _out, int* _out_Strlen);
void QLocale_ToString25(QLocale* self, QTime* time, uintptr_t format, char** _out, int* _out_Strlen);
void QLocale_ToString26(QLocale* self, QDateTime* dateTime, uintptr_t format, char** _out, int* _out_Strlen);
void QLocale_DateFormat1(QLocale* self, uintptr_t format, char** _out, int* _out_Strlen);
void QLocale_TimeFormat1(QLocale* self, uintptr_t format, char** _out, int* _out_Strlen);
void QLocale_DateTimeFormat1(QLocale* self, uintptr_t format, char** _out, int* _out_Strlen);
QDate* QLocale_ToDate22(QLocale* self, const char* stringVal, size_t stringVal_Strlen, uintptr_t param2);
QTime* QLocale_ToTime22(QLocale* self, const char* stringVal, size_t stringVal_Strlen, uintptr_t param2);
QDateTime* QLocale_ToDateTime22(QLocale* self, const char* stringVal, size_t stringVal_Strlen, uintptr_t format);
void QLocale_MonthName2(QLocale* self, int param1, uintptr_t format, char** _out, int* _out_Strlen);
void QLocale_StandaloneMonthName2(QLocale* self, int param1, uintptr_t format, char** _out, int* _out_Strlen);
void QLocale_DayName2(QLocale* self, int param1, uintptr_t format, char** _out, int* _out_Strlen);
void QLocale_StandaloneDayName2(QLocale* self, int param1, uintptr_t format, char** _out, int* _out_Strlen);
void QLocale_CurrencySymbol1(QLocale* self, uintptr_t param1, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString22(QLocale* self, long long param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString23(QLocale* self, unsigned long long param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString24(QLocale* self, int16_t param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString25(QLocale* self, uint16_t param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString26(QLocale* self, int param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString27(QLocale* self, unsigned int param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString28(QLocale* self, double param1, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen);
void QLocale_ToCurrencyString29(QLocale* self, float i, const char* symbol, size_t symbol_Strlen, char** _out, int* _out_Strlen);
void QLocale_FormattedDataSize2(QLocale* self, long long bytes, int precision, char** _out, int* _out_Strlen);
void QLocale_FormattedDataSize3(QLocale* self, long long bytes, int precision, int format, char** _out, int* _out_Strlen);
void QLocale_FormattedDataSize22(QLocale* self, long long bytes, int precision, char** _out, int* _out_Strlen);
void QLocale_FormattedDataSize32(QLocale* self, long long bytes, int precision, int format, char** _out, int* _out_Strlen);
void QLocale_QuoteString2(QLocale* self, const char* str, size_t str_Strlen, uintptr_t style, char** _out, int* _out_Strlen);
void QLocale_Delete(QLocale* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
