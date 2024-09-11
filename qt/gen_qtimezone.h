#ifndef GEN_QTIMEZONE_H
#define GEN_QTIMEZONE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QDateTime;
class QLocale;
class QTimeZone;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTimeZone__OffsetData)
typedef QTimeZone::OffsetData QTimeZone__OffsetData;
#else
class QTimeZone__OffsetData;
#endif
#else
typedef struct QByteArray QByteArray;
typedef struct QDateTime QDateTime;
typedef struct QLocale QLocale;
typedef struct QTimeZone QTimeZone;
typedef struct QTimeZone__OffsetData QTimeZone__OffsetData;
#endif

QTimeZone* QTimeZone_new();
QTimeZone* QTimeZone_new2(QByteArray* ianaId);
QTimeZone* QTimeZone_new3(int offsetSeconds);
QTimeZone* QTimeZone_new4(QByteArray* zoneId, int offsetSeconds, const char* name, size_t name_Strlen, const char* abbreviation, size_t abbreviation_Strlen);
QTimeZone* QTimeZone_new5(QTimeZone* other);
QTimeZone* QTimeZone_new6(QByteArray* zoneId, int offsetSeconds, const char* name, size_t name_Strlen, const char* abbreviation, size_t abbreviation_Strlen, uintptr_t country);
QTimeZone* QTimeZone_new7(QByteArray* zoneId, int offsetSeconds, const char* name, size_t name_Strlen, const char* abbreviation, size_t abbreviation_Strlen, uintptr_t country, const char* comment, size_t comment_Strlen);
void QTimeZone_OperatorAssign(QTimeZone* self, QTimeZone* other);
void QTimeZone_Swap(QTimeZone* self, QTimeZone* other);
bool QTimeZone_OperatorEqual(const QTimeZone* self, QTimeZone* other);
bool QTimeZone_OperatorNotEqual(const QTimeZone* self, QTimeZone* other);
bool QTimeZone_IsValid(const QTimeZone* self);
QByteArray* QTimeZone_Id(const QTimeZone* self);
uintptr_t QTimeZone_Country(const QTimeZone* self);
void QTimeZone_Comment(const QTimeZone* self, char** _out, int* _out_Strlen);
void QTimeZone_DisplayName(const QTimeZone* self, QDateTime* atDateTime, char** _out, int* _out_Strlen);
void QTimeZone_DisplayNameWithTimeType(const QTimeZone* self, uintptr_t timeType, char** _out, int* _out_Strlen);
void QTimeZone_Abbreviation(const QTimeZone* self, QDateTime* atDateTime, char** _out, int* _out_Strlen);
int QTimeZone_OffsetFromUtc(const QTimeZone* self, QDateTime* atDateTime);
int QTimeZone_StandardTimeOffset(const QTimeZone* self, QDateTime* atDateTime);
int QTimeZone_DaylightTimeOffset(const QTimeZone* self, QDateTime* atDateTime);
bool QTimeZone_HasDaylightTime(const QTimeZone* self);
bool QTimeZone_IsDaylightTime(const QTimeZone* self, QDateTime* atDateTime);
QTimeZone__OffsetData* QTimeZone_OffsetData(const QTimeZone* self, QDateTime* forDateTime);
bool QTimeZone_HasTransitions(const QTimeZone* self);
QTimeZone__OffsetData* QTimeZone_NextTransition(const QTimeZone* self, QDateTime* afterDateTime);
QTimeZone__OffsetData* QTimeZone_PreviousTransition(const QTimeZone* self, QDateTime* beforeDateTime);
void QTimeZone_Transitions(const QTimeZone* self, QDateTime* fromDateTime, QDateTime* toDateTime, QTimeZone__OffsetData*** _out, size_t* _out_len);
QByteArray* QTimeZone_SystemTimeZoneId();
QTimeZone* QTimeZone_SystemTimeZone();
QTimeZone* QTimeZone_Utc();
bool QTimeZone_IsTimeZoneIdAvailable(QByteArray* ianaId);
void QTimeZone_AvailableTimeZoneIds(QByteArray*** _out, size_t* _out_len);
void QTimeZone_AvailableTimeZoneIdsWithCountry(uintptr_t country, QByteArray*** _out, size_t* _out_len);
void QTimeZone_AvailableTimeZoneIdsWithOffsetSeconds(int offsetSeconds, QByteArray*** _out, size_t* _out_len);
QByteArray* QTimeZone_IanaIdToWindowsId(QByteArray* ianaId);
QByteArray* QTimeZone_WindowsIdToDefaultIanaId(QByteArray* windowsId);
QByteArray* QTimeZone_WindowsIdToDefaultIanaId2(QByteArray* windowsId, uintptr_t country);
void QTimeZone_WindowsIdToIanaIds(QByteArray* windowsId, QByteArray*** _out, size_t* _out_len);
void QTimeZone_WindowsIdToIanaIds2(QByteArray* windowsId, uintptr_t country, QByteArray*** _out, size_t* _out_len);
void QTimeZone_DisplayName2(const QTimeZone* self, QDateTime* atDateTime, uintptr_t nameType, char** _out, int* _out_Strlen);
void QTimeZone_DisplayName3(const QTimeZone* self, QDateTime* atDateTime, uintptr_t nameType, QLocale* locale, char** _out, int* _out_Strlen);
void QTimeZone_DisplayName22(const QTimeZone* self, uintptr_t timeType, uintptr_t nameType, char** _out, int* _out_Strlen);
void QTimeZone_DisplayName32(const QTimeZone* self, uintptr_t timeType, uintptr_t nameType, QLocale* locale, char** _out, int* _out_Strlen);
void QTimeZone_Delete(QTimeZone* self);

QTimeZone__OffsetData* QTimeZone__OffsetData_new(QTimeZone__OffsetData* param1);
void QTimeZone__OffsetData_Delete(QTimeZone__OffsetData* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
