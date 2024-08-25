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
class QTimeZone;
#else
typedef struct QByteArray QByteArray;
typedef struct QDateTime QDateTime;
typedef struct QTimeZone QTimeZone;
#endif

QTimeZone* QTimeZone_new();
QTimeZone* QTimeZone_new2(QByteArray* ianaId);
QTimeZone* QTimeZone_new3(int offsetSeconds);
QTimeZone* QTimeZone_new4(QTimeZone* other);
void QTimeZone_OperatorAssign(QTimeZone* self, QTimeZone* other);
void QTimeZone_Swap(QTimeZone* self, QTimeZone* other);
bool QTimeZone_OperatorEqual(QTimeZone* self, QTimeZone* other);
bool QTimeZone_OperatorNotEqual(QTimeZone* self, QTimeZone* other);
bool QTimeZone_IsValid(QTimeZone* self);
QByteArray* QTimeZone_Id(QTimeZone* self);
void QTimeZone_Comment(QTimeZone* self, char** _out, int* _out_Strlen);
void QTimeZone_Abbreviation(QTimeZone* self, QDateTime* atDateTime, char** _out, int* _out_Strlen);
int QTimeZone_OffsetFromUtc(QTimeZone* self, QDateTime* atDateTime);
int QTimeZone_StandardTimeOffset(QTimeZone* self, QDateTime* atDateTime);
int QTimeZone_DaylightTimeOffset(QTimeZone* self, QDateTime* atDateTime);
bool QTimeZone_HasDaylightTime(QTimeZone* self);
bool QTimeZone_IsDaylightTime(QTimeZone* self, QDateTime* atDateTime);
bool QTimeZone_HasTransitions(QTimeZone* self);
QByteArray* QTimeZone_SystemTimeZoneId();
QTimeZone* QTimeZone_SystemTimeZone();
QTimeZone* QTimeZone_Utc();
bool QTimeZone_IsTimeZoneIdAvailable(QByteArray* ianaId);
void QTimeZone_AvailableTimeZoneIds(QByteArray*** _out, size_t* _out_len);
void QTimeZone_AvailableTimeZoneIdsWithOffsetSeconds(int offsetSeconds, QByteArray*** _out, size_t* _out_len);
QByteArray* QTimeZone_IanaIdToWindowsId(QByteArray* ianaId);
QByteArray* QTimeZone_WindowsIdToDefaultIanaId(QByteArray* windowsId);
void QTimeZone_WindowsIdToIanaIds(QByteArray* windowsId, QByteArray*** _out, size_t* _out_len);
void QTimeZone_Delete(QTimeZone* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
