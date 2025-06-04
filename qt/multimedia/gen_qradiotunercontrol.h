#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QRADIOTUNERCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QRADIOTUNERCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaControl;
class QMetaMethod;
class QMetaObject;
class QObject;
class QRadioTunerControl;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRadioTunerControl QRadioTunerControl;
#endif

void QRadioTunerControl_virtbase(QRadioTunerControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QRadioTunerControl_metaObject(const QRadioTunerControl* self);
void* QRadioTunerControl_metacast(QRadioTunerControl* self, const char* param1);
struct miqt_string QRadioTunerControl_tr(const char* s);
struct miqt_string QRadioTunerControl_trUtf8(const char* s);
int QRadioTunerControl_state(const QRadioTunerControl* self);
int QRadioTunerControl_band(const QRadioTunerControl* self);
void QRadioTunerControl_setBand(QRadioTunerControl* self, int b);
bool QRadioTunerControl_isBandSupported(const QRadioTunerControl* self, int b);
int QRadioTunerControl_frequency(const QRadioTunerControl* self);
int QRadioTunerControl_frequencyStep(const QRadioTunerControl* self, int b);
struct miqt_map /* tuple of int and int */  QRadioTunerControl_frequencyRange(const QRadioTunerControl* self, int b);
void QRadioTunerControl_setFrequency(QRadioTunerControl* self, int frequency);
bool QRadioTunerControl_isStereo(const QRadioTunerControl* self);
int QRadioTunerControl_stereoMode(const QRadioTunerControl* self);
void QRadioTunerControl_setStereoMode(QRadioTunerControl* self, int mode);
int QRadioTunerControl_signalStrength(const QRadioTunerControl* self);
int QRadioTunerControl_volume(const QRadioTunerControl* self);
void QRadioTunerControl_setVolume(QRadioTunerControl* self, int volume);
bool QRadioTunerControl_isMuted(const QRadioTunerControl* self);
void QRadioTunerControl_setMuted(QRadioTunerControl* self, bool muted);
bool QRadioTunerControl_isSearching(const QRadioTunerControl* self);
bool QRadioTunerControl_isAntennaConnected(const QRadioTunerControl* self);
void QRadioTunerControl_searchForward(QRadioTunerControl* self);
void QRadioTunerControl_searchBackward(QRadioTunerControl* self);
void QRadioTunerControl_searchAllStations(QRadioTunerControl* self, int searchMode);
void QRadioTunerControl_cancelSearch(QRadioTunerControl* self);
void QRadioTunerControl_start(QRadioTunerControl* self);
void QRadioTunerControl_stop(QRadioTunerControl* self);
int QRadioTunerControl_error(const QRadioTunerControl* self);
struct miqt_string QRadioTunerControl_errorString(const QRadioTunerControl* self);
void QRadioTunerControl_stateChanged(QRadioTunerControl* self, int state);
void QRadioTunerControl_connect_stateChanged(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_bandChanged(QRadioTunerControl* self, int band);
void QRadioTunerControl_connect_bandChanged(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_frequencyChanged(QRadioTunerControl* self, int frequency);
void QRadioTunerControl_connect_frequencyChanged(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_stereoStatusChanged(QRadioTunerControl* self, bool stereo);
void QRadioTunerControl_connect_stereoStatusChanged(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_searchingChanged(QRadioTunerControl* self, bool searching);
void QRadioTunerControl_connect_searchingChanged(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_signalStrengthChanged(QRadioTunerControl* self, int signalStrength);
void QRadioTunerControl_connect_signalStrengthChanged(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_volumeChanged(QRadioTunerControl* self, int volume);
void QRadioTunerControl_connect_volumeChanged(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_mutedChanged(QRadioTunerControl* self, bool muted);
void QRadioTunerControl_connect_mutedChanged(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_errorWithErr(QRadioTunerControl* self, int err);
void QRadioTunerControl_connect_errorWithErr(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_stationFound(QRadioTunerControl* self, int frequency, struct miqt_string stationId);
void QRadioTunerControl_connect_stationFound(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_antennaConnectedChanged(QRadioTunerControl* self, bool connectionStatus);
void QRadioTunerControl_connect_antennaConnectedChanged(QRadioTunerControl* self, intptr_t slot);
struct miqt_string QRadioTunerControl_tr2(const char* s, const char* c);
struct miqt_string QRadioTunerControl_tr3(const char* s, const char* c, int n);
struct miqt_string QRadioTunerControl_trUtf82(const char* s, const char* c);
struct miqt_string QRadioTunerControl_trUtf83(const char* s, const char* c, int n);

void QRadioTunerControl_delete(QRadioTunerControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
