#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QRADIOTUNER_H
#define MIQT_QT_MULTIMEDIA_GEN_QRADIOTUNER_H

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
class QMediaObject;
class QMediaService;
class QMetaMethod;
class QMetaObject;
class QObject;
class QRadioData;
class QRadioTuner;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMediaObject QMediaObject;
typedef struct QMediaService QMediaService;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRadioData QRadioData;
typedef struct QRadioTuner QRadioTuner;
typedef struct QTimerEvent QTimerEvent;
#endif

QRadioTuner* QRadioTuner_new();
QRadioTuner* QRadioTuner_new2(QObject* parent);
void QRadioTuner_virtbase(QRadioTuner* src, QMediaObject** outptr_QMediaObject);
QMetaObject* QRadioTuner_metaObject(const QRadioTuner* self);
void* QRadioTuner_metacast(QRadioTuner* self, const char* param1);
struct miqt_string QRadioTuner_tr(const char* s);
struct miqt_string QRadioTuner_trUtf8(const char* s);
int QRadioTuner_availability(const QRadioTuner* self);
int QRadioTuner_state(const QRadioTuner* self);
int QRadioTuner_band(const QRadioTuner* self);
bool QRadioTuner_isBandSupported(const QRadioTuner* self, int b);
int QRadioTuner_frequency(const QRadioTuner* self);
int QRadioTuner_frequencyStep(const QRadioTuner* self, int band);
struct miqt_map /* tuple of int and int */  QRadioTuner_frequencyRange(const QRadioTuner* self, int band);
bool QRadioTuner_isStereo(const QRadioTuner* self);
void QRadioTuner_setStereoMode(QRadioTuner* self, int mode);
int QRadioTuner_stereoMode(const QRadioTuner* self);
int QRadioTuner_signalStrength(const QRadioTuner* self);
int QRadioTuner_volume(const QRadioTuner* self);
bool QRadioTuner_isMuted(const QRadioTuner* self);
bool QRadioTuner_isSearching(const QRadioTuner* self);
bool QRadioTuner_isAntennaConnected(const QRadioTuner* self);
int QRadioTuner_error(const QRadioTuner* self);
struct miqt_string QRadioTuner_errorString(const QRadioTuner* self);
QRadioData* QRadioTuner_radioData(const QRadioTuner* self);
void QRadioTuner_searchForward(QRadioTuner* self);
void QRadioTuner_searchBackward(QRadioTuner* self);
void QRadioTuner_searchAllStations(QRadioTuner* self);
void QRadioTuner_cancelSearch(QRadioTuner* self);
void QRadioTuner_setBand(QRadioTuner* self, int band);
void QRadioTuner_setFrequency(QRadioTuner* self, int frequency);
void QRadioTuner_setVolume(QRadioTuner* self, int volume);
void QRadioTuner_setMuted(QRadioTuner* self, bool muted);
void QRadioTuner_start(QRadioTuner* self);
void QRadioTuner_stop(QRadioTuner* self);
void QRadioTuner_stateChanged(QRadioTuner* self, int state);
void QRadioTuner_connect_stateChanged(QRadioTuner* self, intptr_t slot);
void QRadioTuner_bandChanged(QRadioTuner* self, int band);
void QRadioTuner_connect_bandChanged(QRadioTuner* self, intptr_t slot);
void QRadioTuner_frequencyChanged(QRadioTuner* self, int frequency);
void QRadioTuner_connect_frequencyChanged(QRadioTuner* self, intptr_t slot);
void QRadioTuner_stereoStatusChanged(QRadioTuner* self, bool stereo);
void QRadioTuner_connect_stereoStatusChanged(QRadioTuner* self, intptr_t slot);
void QRadioTuner_searchingChanged(QRadioTuner* self, bool searching);
void QRadioTuner_connect_searchingChanged(QRadioTuner* self, intptr_t slot);
void QRadioTuner_signalStrengthChanged(QRadioTuner* self, int signalStrength);
void QRadioTuner_connect_signalStrengthChanged(QRadioTuner* self, intptr_t slot);
void QRadioTuner_volumeChanged(QRadioTuner* self, int volume);
void QRadioTuner_connect_volumeChanged(QRadioTuner* self, intptr_t slot);
void QRadioTuner_mutedChanged(QRadioTuner* self, bool muted);
void QRadioTuner_connect_mutedChanged(QRadioTuner* self, intptr_t slot);
void QRadioTuner_stationFound(QRadioTuner* self, int frequency, struct miqt_string stationId);
void QRadioTuner_connect_stationFound(QRadioTuner* self, intptr_t slot);
void QRadioTuner_antennaConnectedChanged(QRadioTuner* self, bool connectionStatus);
void QRadioTuner_connect_antennaConnectedChanged(QRadioTuner* self, intptr_t slot);
void QRadioTuner_errorWithError(QRadioTuner* self, int error);
void QRadioTuner_connect_errorWithError(QRadioTuner* self, intptr_t slot);
struct miqt_string QRadioTuner_tr2(const char* s, const char* c);
struct miqt_string QRadioTuner_tr3(const char* s, const char* c, int n);
struct miqt_string QRadioTuner_trUtf82(const char* s, const char* c);
struct miqt_string QRadioTuner_trUtf83(const char* s, const char* c, int n);
void QRadioTuner_searchAllStations1(QRadioTuner* self, int searchMode);
bool QRadioTuner_override_virtual_availability(void* self, intptr_t slot);
int QRadioTuner_virtualbase_availability(const void* self);
bool QRadioTuner_override_virtual_isAvailable(void* self, intptr_t slot);
bool QRadioTuner_virtualbase_isAvailable(const void* self);
bool QRadioTuner_override_virtual_service(void* self, intptr_t slot);
QMediaService* QRadioTuner_virtualbase_service(const void* self);
bool QRadioTuner_override_virtual_bind(void* self, intptr_t slot);
bool QRadioTuner_virtualbase_bind(void* self, QObject* param1);
bool QRadioTuner_override_virtual_unbind(void* self, intptr_t slot);
void QRadioTuner_virtualbase_unbind(void* self, QObject* param1);
bool QRadioTuner_override_virtual_event(void* self, intptr_t slot);
bool QRadioTuner_virtualbase_event(void* self, QEvent* event);
bool QRadioTuner_override_virtual_eventFilter(void* self, intptr_t slot);
bool QRadioTuner_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QRadioTuner_override_virtual_timerEvent(void* self, intptr_t slot);
void QRadioTuner_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QRadioTuner_override_virtual_childEvent(void* self, intptr_t slot);
void QRadioTuner_virtualbase_childEvent(void* self, QChildEvent* event);
bool QRadioTuner_override_virtual_customEvent(void* self, intptr_t slot);
void QRadioTuner_virtualbase_customEvent(void* self, QEvent* event);
bool QRadioTuner_override_virtual_connectNotify(void* self, intptr_t slot);
void QRadioTuner_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QRadioTuner_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QRadioTuner_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QRadioTuner_protectedbase_addPropertyWatch(bool* _dynamic_cast_ok, void* self, struct miqt_string name);
void QRadioTuner_protectedbase_removePropertyWatch(bool* _dynamic_cast_ok, void* self, struct miqt_string name);
QObject* QRadioTuner_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QRadioTuner_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QRadioTuner_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QRadioTuner_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QRadioTuner_delete(QRadioTuner* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
