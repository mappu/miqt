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
class QMetaObject;
class QObject;
class QRadioTunerControl;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRadioTunerControl QRadioTunerControl;
#endif

void QRadioTunerControl_virtbase(QRadioTunerControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QRadioTunerControl_MetaObject(const QRadioTunerControl* self);
void* QRadioTunerControl_Metacast(QRadioTunerControl* self, const char* param1);
struct miqt_string QRadioTunerControl_Tr(const char* s);
struct miqt_string QRadioTunerControl_TrUtf8(const char* s);
int QRadioTunerControl_State(const QRadioTunerControl* self);
int QRadioTunerControl_Band(const QRadioTunerControl* self);
void QRadioTunerControl_SetBand(QRadioTunerControl* self, int b);
bool QRadioTunerControl_IsBandSupported(const QRadioTunerControl* self, int b);
int QRadioTunerControl_Frequency(const QRadioTunerControl* self);
int QRadioTunerControl_FrequencyStep(const QRadioTunerControl* self, int b);
struct miqt_map /* tuple of int and int */  QRadioTunerControl_FrequencyRange(const QRadioTunerControl* self, int b);
void QRadioTunerControl_SetFrequency(QRadioTunerControl* self, int frequency);
bool QRadioTunerControl_IsStereo(const QRadioTunerControl* self);
int QRadioTunerControl_StereoMode(const QRadioTunerControl* self);
void QRadioTunerControl_SetStereoMode(QRadioTunerControl* self, int mode);
int QRadioTunerControl_SignalStrength(const QRadioTunerControl* self);
int QRadioTunerControl_Volume(const QRadioTunerControl* self);
void QRadioTunerControl_SetVolume(QRadioTunerControl* self, int volume);
bool QRadioTunerControl_IsMuted(const QRadioTunerControl* self);
void QRadioTunerControl_SetMuted(QRadioTunerControl* self, bool muted);
bool QRadioTunerControl_IsSearching(const QRadioTunerControl* self);
bool QRadioTunerControl_IsAntennaConnected(const QRadioTunerControl* self);
void QRadioTunerControl_SearchForward(QRadioTunerControl* self);
void QRadioTunerControl_SearchBackward(QRadioTunerControl* self);
void QRadioTunerControl_SearchAllStations(QRadioTunerControl* self, int searchMode);
void QRadioTunerControl_CancelSearch(QRadioTunerControl* self);
void QRadioTunerControl_Start(QRadioTunerControl* self);
void QRadioTunerControl_Stop(QRadioTunerControl* self);
int QRadioTunerControl_Error(const QRadioTunerControl* self);
struct miqt_string QRadioTunerControl_ErrorString(const QRadioTunerControl* self);
void QRadioTunerControl_StateChanged(QRadioTunerControl* self, int state);
void QRadioTunerControl_connect_StateChanged(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_BandChanged(QRadioTunerControl* self, int band);
void QRadioTunerControl_connect_BandChanged(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_FrequencyChanged(QRadioTunerControl* self, int frequency);
void QRadioTunerControl_connect_FrequencyChanged(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_StereoStatusChanged(QRadioTunerControl* self, bool stereo);
void QRadioTunerControl_connect_StereoStatusChanged(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_SearchingChanged(QRadioTunerControl* self, bool searching);
void QRadioTunerControl_connect_SearchingChanged(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_SignalStrengthChanged(QRadioTunerControl* self, int signalStrength);
void QRadioTunerControl_connect_SignalStrengthChanged(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_VolumeChanged(QRadioTunerControl* self, int volume);
void QRadioTunerControl_connect_VolumeChanged(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_MutedChanged(QRadioTunerControl* self, bool muted);
void QRadioTunerControl_connect_MutedChanged(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_ErrorWithErr(QRadioTunerControl* self, int err);
void QRadioTunerControl_connect_ErrorWithErr(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_StationFound(QRadioTunerControl* self, int frequency, struct miqt_string stationId);
void QRadioTunerControl_connect_StationFound(QRadioTunerControl* self, intptr_t slot);
void QRadioTunerControl_AntennaConnectedChanged(QRadioTunerControl* self, bool connectionStatus);
void QRadioTunerControl_connect_AntennaConnectedChanged(QRadioTunerControl* self, intptr_t slot);
struct miqt_string QRadioTunerControl_Tr2(const char* s, const char* c);
struct miqt_string QRadioTunerControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QRadioTunerControl_TrUtf82(const char* s, const char* c);
struct miqt_string QRadioTunerControl_TrUtf83(const char* s, const char* c, int n);
void QRadioTunerControl_Delete(QRadioTunerControl* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
