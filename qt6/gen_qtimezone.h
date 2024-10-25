#ifndef GEN_QTIMEZONE_H
#define GEN_QTIMEZONE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
QTimeZone* QTimeZone_new2(struct miqt_string ianaId);
QTimeZone* QTimeZone_new3(int offsetSeconds);
QTimeZone* QTimeZone_new4(struct miqt_string zoneId, int offsetSeconds, struct miqt_string name, struct miqt_string abbreviation);
QTimeZone* QTimeZone_new5(QTimeZone* other);
QTimeZone* QTimeZone_new6(struct miqt_string zoneId, int offsetSeconds, struct miqt_string name, struct miqt_string abbreviation, uint16_t territory);
QTimeZone* QTimeZone_new7(struct miqt_string zoneId, int offsetSeconds, struct miqt_string name, struct miqt_string abbreviation, uint16_t territory, struct miqt_string comment);
void QTimeZone_OperatorAssign(QTimeZone* self, QTimeZone* other);
void QTimeZone_Swap(QTimeZone* self, QTimeZone* other);
bool QTimeZone_IsValid(const QTimeZone* self);
struct miqt_string QTimeZone_Id(const QTimeZone* self);
uint16_t QTimeZone_Territory(const QTimeZone* self);
uint16_t QTimeZone_Country(const QTimeZone* self);
struct miqt_string QTimeZone_Comment(const QTimeZone* self);
struct miqt_string QTimeZone_DisplayName(const QTimeZone* self, QDateTime* atDateTime);
struct miqt_string QTimeZone_DisplayNameWithTimeType(const QTimeZone* self, int timeType);
struct miqt_string QTimeZone_Abbreviation(const QTimeZone* self, QDateTime* atDateTime);
int QTimeZone_OffsetFromUtc(const QTimeZone* self, QDateTime* atDateTime);
int QTimeZone_StandardTimeOffset(const QTimeZone* self, QDateTime* atDateTime);
int QTimeZone_DaylightTimeOffset(const QTimeZone* self, QDateTime* atDateTime);
bool QTimeZone_HasDaylightTime(const QTimeZone* self);
bool QTimeZone_IsDaylightTime(const QTimeZone* self, QDateTime* atDateTime);
QTimeZone__OffsetData* QTimeZone_OffsetData(const QTimeZone* self, QDateTime* forDateTime);
bool QTimeZone_HasTransitions(const QTimeZone* self);
QTimeZone__OffsetData* QTimeZone_NextTransition(const QTimeZone* self, QDateTime* afterDateTime);
QTimeZone__OffsetData* QTimeZone_PreviousTransition(const QTimeZone* self, QDateTime* beforeDateTime);
struct miqt_array* QTimeZone_Transitions(const QTimeZone* self, QDateTime* fromDateTime, QDateTime* toDateTime);
struct miqt_string QTimeZone_SystemTimeZoneId();
QTimeZone* QTimeZone_SystemTimeZone();
QTimeZone* QTimeZone_Utc();
bool QTimeZone_IsTimeZoneIdAvailable(struct miqt_string ianaId);
struct miqt_array* QTimeZone_AvailableTimeZoneIds();
struct miqt_array* QTimeZone_AvailableTimeZoneIdsWithTerritory(uint16_t territory);
struct miqt_array* QTimeZone_AvailableTimeZoneIdsWithOffsetSeconds(int offsetSeconds);
struct miqt_string QTimeZone_IanaIdToWindowsId(struct miqt_string ianaId);
struct miqt_string QTimeZone_WindowsIdToDefaultIanaId(struct miqt_string windowsId);
struct miqt_string QTimeZone_WindowsIdToDefaultIanaId2(struct miqt_string windowsId, uint16_t territory);
struct miqt_array* QTimeZone_WindowsIdToIanaIds(struct miqt_string windowsId);
struct miqt_array* QTimeZone_WindowsIdToIanaIds2(struct miqt_string windowsId, uint16_t territory);
struct miqt_string QTimeZone_DisplayName2(const QTimeZone* self, QDateTime* atDateTime, int nameType);
struct miqt_string QTimeZone_DisplayName3(const QTimeZone* self, QDateTime* atDateTime, int nameType, QLocale* locale);
struct miqt_string QTimeZone_DisplayName22(const QTimeZone* self, int timeType, int nameType);
struct miqt_string QTimeZone_DisplayName32(const QTimeZone* self, int timeType, int nameType, QLocale* locale);
void QTimeZone_Delete(QTimeZone* self);

QTimeZone__OffsetData* QTimeZone__OffsetData_new(QTimeZone__OffsetData* param1);
void QTimeZone__OffsetData_OperatorAssign(QTimeZone__OffsetData* self, QTimeZone__OffsetData* param1);
void QTimeZone__OffsetData_Delete(QTimeZone__OffsetData* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
