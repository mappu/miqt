#pragma once
#ifndef MIQT_QT6_GEN_QTIMEZONE_H
#define MIQT_QT6_GEN_QTIMEZONE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDateTime;
class QLocale;
class QTimeZone;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTimeZone__OffsetData)
typedef QTimeZone::OffsetData QTimeZone__OffsetData;
#else
class QTimeZone__OffsetData;
#endif
#else
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
QTimeZone* QTimeZone_new6(struct miqt_string zoneId, int offsetSeconds, struct miqt_string name, struct miqt_string abbreviation, unsigned short territory);
QTimeZone* QTimeZone_new7(struct miqt_string zoneId, int offsetSeconds, struct miqt_string name, struct miqt_string abbreviation, unsigned short territory, struct miqt_string comment);
void QTimeZone_operatorAssign(QTimeZone* self, QTimeZone* other);
void QTimeZone_swap(QTimeZone* self, QTimeZone* other);
bool QTimeZone_isValid(const QTimeZone* self);
struct miqt_string QTimeZone_id(const QTimeZone* self);
unsigned short QTimeZone_territory(const QTimeZone* self);
unsigned short QTimeZone_country(const QTimeZone* self);
struct miqt_string QTimeZone_comment(const QTimeZone* self);
struct miqt_string QTimeZone_displayName(const QTimeZone* self, QDateTime* atDateTime);
struct miqt_string QTimeZone_displayNameWithTimeType(const QTimeZone* self, int timeType);
struct miqt_string QTimeZone_abbreviation(const QTimeZone* self, QDateTime* atDateTime);
int QTimeZone_offsetFromUtc(const QTimeZone* self, QDateTime* atDateTime);
int QTimeZone_standardTimeOffset(const QTimeZone* self, QDateTime* atDateTime);
int QTimeZone_daylightTimeOffset(const QTimeZone* self, QDateTime* atDateTime);
bool QTimeZone_hasDaylightTime(const QTimeZone* self);
bool QTimeZone_isDaylightTime(const QTimeZone* self, QDateTime* atDateTime);
QTimeZone__OffsetData* QTimeZone_offsetData(const QTimeZone* self, QDateTime* forDateTime);
bool QTimeZone_hasTransitions(const QTimeZone* self);
QTimeZone__OffsetData* QTimeZone_nextTransition(const QTimeZone* self, QDateTime* afterDateTime);
QTimeZone__OffsetData* QTimeZone_previousTransition(const QTimeZone* self, QDateTime* beforeDateTime);
struct miqt_array /* of QTimeZone__OffsetData* */  QTimeZone_transitions(const QTimeZone* self, QDateTime* fromDateTime, QDateTime* toDateTime);
struct miqt_string QTimeZone_systemTimeZoneId();
QTimeZone* QTimeZone_systemTimeZone();
QTimeZone* QTimeZone_utc();
bool QTimeZone_isTimeZoneIdAvailable(struct miqt_string ianaId);
struct miqt_array /* of struct miqt_string */  QTimeZone_availableTimeZoneIds();
struct miqt_array /* of struct miqt_string */  QTimeZone_availableTimeZoneIdsWithTerritory(unsigned short territory);
struct miqt_array /* of struct miqt_string */  QTimeZone_availableTimeZoneIdsWithOffsetSeconds(int offsetSeconds);
struct miqt_string QTimeZone_ianaIdToWindowsId(struct miqt_string ianaId);
struct miqt_string QTimeZone_windowsIdToDefaultIanaId(struct miqt_string windowsId);
struct miqt_string QTimeZone_windowsIdToDefaultIanaId2(struct miqt_string windowsId, unsigned short territory);
struct miqt_array /* of struct miqt_string */  QTimeZone_windowsIdToIanaIds(struct miqt_string windowsId);
struct miqt_array /* of struct miqt_string */  QTimeZone_windowsIdToIanaIds2(struct miqt_string windowsId, unsigned short territory);
struct miqt_string QTimeZone_displayName2(const QTimeZone* self, QDateTime* atDateTime, int nameType);
struct miqt_string QTimeZone_displayName3(const QTimeZone* self, QDateTime* atDateTime, int nameType, QLocale* locale);
struct miqt_string QTimeZone_displayName4(const QTimeZone* self, int timeType, int nameType);
struct miqt_string QTimeZone_displayName5(const QTimeZone* self, int timeType, int nameType, QLocale* locale);

void QTimeZone_delete(QTimeZone* self);

QTimeZone__OffsetData* QTimeZone__OffsetData_new(QTimeZone__OffsetData* param1);
struct miqt_string QTimeZone__OffsetData_abbreviation(const QTimeZone__OffsetData* self);
void QTimeZone__OffsetData_setAbbreviation(QTimeZone__OffsetData* self, struct miqt_string abbreviation);
QDateTime* QTimeZone__OffsetData_atUtc(const QTimeZone__OffsetData* self);
void QTimeZone__OffsetData_setAtUtc(QTimeZone__OffsetData* self, QDateTime* atUtc);
int QTimeZone__OffsetData_offsetFromUtc(const QTimeZone__OffsetData* self);
void QTimeZone__OffsetData_setOffsetFromUtc(QTimeZone__OffsetData* self, int offsetFromUtc);
int QTimeZone__OffsetData_standardTimeOffset(const QTimeZone__OffsetData* self);
void QTimeZone__OffsetData_setStandardTimeOffset(QTimeZone__OffsetData* self, int standardTimeOffset);
int QTimeZone__OffsetData_daylightTimeOffset(const QTimeZone__OffsetData* self);
void QTimeZone__OffsetData_setDaylightTimeOffset(QTimeZone__OffsetData* self, int daylightTimeOffset);
void QTimeZone__OffsetData_operatorAssign(QTimeZone__OffsetData* self, QTimeZone__OffsetData* param1);

void QTimeZone__OffsetData_delete(QTimeZone__OffsetData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
