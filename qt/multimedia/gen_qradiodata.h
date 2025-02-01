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

QRadioData* QRadioData_new(QMediaObject* mediaObject);
QRadioData* QRadioData_new2(QMediaObject* mediaObject, QObject* parent);
void QRadioData_virtbase(QRadioData* src, QObject** outptr_QObject, QMediaBindableInterface** outptr_QMediaBindableInterface);
QMetaObject* QRadioData_metaObject(const QRadioData* self);
void* QRadioData_metacast(QRadioData* self, const char* param1);
struct miqt_string QRadioData_tr(const char* s);
struct miqt_string QRadioData_trUtf8(const char* s);
int QRadioData_availability(const QRadioData* self);
QMediaObject* QRadioData_mediaObject(const QRadioData* self);
struct miqt_string QRadioData_stationId(const QRadioData* self);
int QRadioData_programType(const QRadioData* self);
struct miqt_string QRadioData_programTypeName(const QRadioData* self);
struct miqt_string QRadioData_stationName(const QRadioData* self);
struct miqt_string QRadioData_radioText(const QRadioData* self);
bool QRadioData_isAlternativeFrequenciesEnabled(const QRadioData* self);
int QRadioData_error(const QRadioData* self);
struct miqt_string QRadioData_errorString(const QRadioData* self);
void QRadioData_setAlternativeFrequenciesEnabled(QRadioData* self, bool enabled);
void QRadioData_stationIdChanged(QRadioData* self, struct miqt_string stationId);
void QRadioData_connect_stationIdChanged(QRadioData* self, intptr_t slot);
void QRadioData_programTypeChanged(QRadioData* self, int programType);
void QRadioData_connect_programTypeChanged(QRadioData* self, intptr_t slot);
void QRadioData_programTypeNameChanged(QRadioData* self, struct miqt_string programTypeName);
void QRadioData_connect_programTypeNameChanged(QRadioData* self, intptr_t slot);
void QRadioData_stationNameChanged(QRadioData* self, struct miqt_string stationName);
void QRadioData_connect_stationNameChanged(QRadioData* self, intptr_t slot);
void QRadioData_radioTextChanged(QRadioData* self, struct miqt_string radioText);
void QRadioData_connect_radioTextChanged(QRadioData* self, intptr_t slot);
void QRadioData_alternativeFrequenciesEnabledChanged(QRadioData* self, bool enabled);
void QRadioData_connect_alternativeFrequenciesEnabledChanged(QRadioData* self, intptr_t slot);
void QRadioData_errorWithError(QRadioData* self, int error);
void QRadioData_connect_errorWithError(QRadioData* self, intptr_t slot);
bool QRadioData_setMediaObject(QRadioData* self, QMediaObject* mediaObject);
struct miqt_string QRadioData_tr2(const char* s, const char* c);
struct miqt_string QRadioData_tr3(const char* s, const char* c, int n);
struct miqt_string QRadioData_trUtf82(const char* s, const char* c);
struct miqt_string QRadioData_trUtf83(const char* s, const char* c, int n);
bool QRadioData_override_virtual_mediaObject(void* self, intptr_t slot);
QMediaObject* QRadioData_virtualbase_mediaObject(const void* self);
bool QRadioData_override_virtual_setMediaObject(void* self, intptr_t slot);
bool QRadioData_virtualbase_setMediaObject(void* self, QMediaObject* mediaObject);
bool QRadioData_override_virtual_event(void* self, intptr_t slot);
bool QRadioData_virtualbase_event(void* self, QEvent* event);
bool QRadioData_override_virtual_eventFilter(void* self, intptr_t slot);
bool QRadioData_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QRadioData_override_virtual_timerEvent(void* self, intptr_t slot);
void QRadioData_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QRadioData_override_virtual_childEvent(void* self, intptr_t slot);
void QRadioData_virtualbase_childEvent(void* self, QChildEvent* event);
bool QRadioData_override_virtual_customEvent(void* self, intptr_t slot);
void QRadioData_virtualbase_customEvent(void* self, QEvent* event);
bool QRadioData_override_virtual_connectNotify(void* self, intptr_t slot);
void QRadioData_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QRadioData_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QRadioData_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QRadioData_delete(QRadioData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
