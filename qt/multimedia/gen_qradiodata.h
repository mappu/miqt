#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QRADIODATA_H
#define MIQT_QT_MULTIMEDIA_GEN_QRADIODATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QMediaBindableInterface;
class QMediaObject;
class QMetaMethod;
class QMetaObject;
class QObject;
class QRadioData;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMediaBindableInterface QMediaBindableInterface;
typedef struct QMediaObject QMediaObject;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRadioData QRadioData;
typedef struct QTimerEvent QTimerEvent;
#endif

void QRadioData_new(QMediaObject* mediaObject, QRadioData** outptr_QRadioData, QObject** outptr_QObject, QMediaBindableInterface** outptr_QMediaBindableInterface);
void QRadioData_new2(QMediaObject* mediaObject, QObject* parent, QRadioData** outptr_QRadioData, QObject** outptr_QObject, QMediaBindableInterface** outptr_QMediaBindableInterface);
QMetaObject* QRadioData_MetaObject(const QRadioData* self);
void* QRadioData_Metacast(QRadioData* self, const char* param1);
struct miqt_string QRadioData_Tr(const char* s);
struct miqt_string QRadioData_TrUtf8(const char* s);
int QRadioData_Availability(const QRadioData* self);
QMediaObject* QRadioData_MediaObject(const QRadioData* self);
struct miqt_string QRadioData_StationId(const QRadioData* self);
int QRadioData_ProgramType(const QRadioData* self);
struct miqt_string QRadioData_ProgramTypeName(const QRadioData* self);
struct miqt_string QRadioData_StationName(const QRadioData* self);
struct miqt_string QRadioData_RadioText(const QRadioData* self);
bool QRadioData_IsAlternativeFrequenciesEnabled(const QRadioData* self);
int QRadioData_Error(const QRadioData* self);
struct miqt_string QRadioData_ErrorString(const QRadioData* self);
void QRadioData_SetAlternativeFrequenciesEnabled(QRadioData* self, bool enabled);
void QRadioData_StationIdChanged(QRadioData* self, struct miqt_string stationId);
void QRadioData_connect_StationIdChanged(QRadioData* self, intptr_t slot);
void QRadioData_ProgramTypeChanged(QRadioData* self, int programType);
void QRadioData_connect_ProgramTypeChanged(QRadioData* self, intptr_t slot);
void QRadioData_ProgramTypeNameChanged(QRadioData* self, struct miqt_string programTypeName);
void QRadioData_connect_ProgramTypeNameChanged(QRadioData* self, intptr_t slot);
void QRadioData_StationNameChanged(QRadioData* self, struct miqt_string stationName);
void QRadioData_connect_StationNameChanged(QRadioData* self, intptr_t slot);
void QRadioData_RadioTextChanged(QRadioData* self, struct miqt_string radioText);
void QRadioData_connect_RadioTextChanged(QRadioData* self, intptr_t slot);
void QRadioData_AlternativeFrequenciesEnabledChanged(QRadioData* self, bool enabled);
void QRadioData_connect_AlternativeFrequenciesEnabledChanged(QRadioData* self, intptr_t slot);
void QRadioData_ErrorWithError(QRadioData* self, int error);
void QRadioData_connect_ErrorWithError(QRadioData* self, intptr_t slot);
bool QRadioData_SetMediaObject(QRadioData* self, QMediaObject* mediaObject);
struct miqt_string QRadioData_Tr2(const char* s, const char* c);
struct miqt_string QRadioData_Tr3(const char* s, const char* c, int n);
struct miqt_string QRadioData_TrUtf82(const char* s, const char* c);
struct miqt_string QRadioData_TrUtf83(const char* s, const char* c, int n);
void QRadioData_override_virtual_MediaObject(void* self, intptr_t slot);
QMediaObject* QRadioData_virtualbase_MediaObject(const void* self);
void QRadioData_override_virtual_SetMediaObject(void* self, intptr_t slot);
bool QRadioData_virtualbase_SetMediaObject(void* self, QMediaObject* mediaObject);
void QRadioData_override_virtual_Event(void* self, intptr_t slot);
bool QRadioData_virtualbase_Event(void* self, QEvent* event);
void QRadioData_override_virtual_EventFilter(void* self, intptr_t slot);
bool QRadioData_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QRadioData_override_virtual_TimerEvent(void* self, intptr_t slot);
void QRadioData_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QRadioData_override_virtual_ChildEvent(void* self, intptr_t slot);
void QRadioData_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QRadioData_override_virtual_CustomEvent(void* self, intptr_t slot);
void QRadioData_virtualbase_CustomEvent(void* self, QEvent* event);
void QRadioData_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QRadioData_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QRadioData_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QRadioData_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QRadioData_Delete(QRadioData* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
