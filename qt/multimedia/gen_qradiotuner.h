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
class QMediaObject;
class QMediaService;
class QMetaObject;
class QObject;
class QRadioData;
class QRadioTuner;
#else
typedef struct QMediaObject QMediaObject;
typedef struct QMediaService QMediaService;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRadioData QRadioData;
typedef struct QRadioTuner QRadioTuner;
#endif

void QRadioTuner_new(QRadioTuner** outptr_QRadioTuner, QMediaObject** outptr_QMediaObject, QObject** outptr_QObject);
void QRadioTuner_new2(QObject* parent, QRadioTuner** outptr_QRadioTuner, QMediaObject** outptr_QMediaObject, QObject** outptr_QObject);
QMetaObject* QRadioTuner_MetaObject(const QRadioTuner* self);
void* QRadioTuner_Metacast(QRadioTuner* self, const char* param1);
struct miqt_string QRadioTuner_Tr(const char* s);
struct miqt_string QRadioTuner_TrUtf8(const char* s);
int QRadioTuner_Availability(const QRadioTuner* self);
int QRadioTuner_State(const QRadioTuner* self);
int QRadioTuner_Band(const QRadioTuner* self);
bool QRadioTuner_IsBandSupported(const QRadioTuner* self, int b);
int QRadioTuner_Frequency(const QRadioTuner* self);
int QRadioTuner_FrequencyStep(const QRadioTuner* self, int band);
struct miqt_map /* tuple of int and int */  QRadioTuner_FrequencyRange(const QRadioTuner* self, int band);
bool QRadioTuner_IsStereo(const QRadioTuner* self);
void QRadioTuner_SetStereoMode(QRadioTuner* self, int mode);
int QRadioTuner_StereoMode(const QRadioTuner* self);
int QRadioTuner_SignalStrength(const QRadioTuner* self);
int QRadioTuner_Volume(const QRadioTuner* self);
bool QRadioTuner_IsMuted(const QRadioTuner* self);
bool QRadioTuner_IsSearching(const QRadioTuner* self);
bool QRadioTuner_IsAntennaConnected(const QRadioTuner* self);
int QRadioTuner_Error(const QRadioTuner* self);
struct miqt_string QRadioTuner_ErrorString(const QRadioTuner* self);
QRadioData* QRadioTuner_RadioData(const QRadioTuner* self);
void QRadioTuner_SearchForward(QRadioTuner* self);
void QRadioTuner_SearchBackward(QRadioTuner* self);
void QRadioTuner_SearchAllStations(QRadioTuner* self);
void QRadioTuner_CancelSearch(QRadioTuner* self);
void QRadioTuner_SetBand(QRadioTuner* self, int band);
void QRadioTuner_SetFrequency(QRadioTuner* self, int frequency);
void QRadioTuner_SetVolume(QRadioTuner* self, int volume);
void QRadioTuner_SetMuted(QRadioTuner* self, bool muted);
void QRadioTuner_Start(QRadioTuner* self);
void QRadioTuner_Stop(QRadioTuner* self);
void QRadioTuner_StateChanged(QRadioTuner* self, int state);
void QRadioTuner_connect_StateChanged(QRadioTuner* self, intptr_t slot);
void QRadioTuner_BandChanged(QRadioTuner* self, int band);
void QRadioTuner_connect_BandChanged(QRadioTuner* self, intptr_t slot);
void QRadioTuner_FrequencyChanged(QRadioTuner* self, int frequency);
void QRadioTuner_connect_FrequencyChanged(QRadioTuner* self, intptr_t slot);
void QRadioTuner_StereoStatusChanged(QRadioTuner* self, bool stereo);
void QRadioTuner_connect_StereoStatusChanged(QRadioTuner* self, intptr_t slot);
void QRadioTuner_SearchingChanged(QRadioTuner* self, bool searching);
void QRadioTuner_connect_SearchingChanged(QRadioTuner* self, intptr_t slot);
void QRadioTuner_SignalStrengthChanged(QRadioTuner* self, int signalStrength);
void QRadioTuner_connect_SignalStrengthChanged(QRadioTuner* self, intptr_t slot);
void QRadioTuner_VolumeChanged(QRadioTuner* self, int volume);
void QRadioTuner_connect_VolumeChanged(QRadioTuner* self, intptr_t slot);
void QRadioTuner_MutedChanged(QRadioTuner* self, bool muted);
void QRadioTuner_connect_MutedChanged(QRadioTuner* self, intptr_t slot);
void QRadioTuner_StationFound(QRadioTuner* self, int frequency, struct miqt_string stationId);
void QRadioTuner_connect_StationFound(QRadioTuner* self, intptr_t slot);
void QRadioTuner_AntennaConnectedChanged(QRadioTuner* self, bool connectionStatus);
void QRadioTuner_connect_AntennaConnectedChanged(QRadioTuner* self, intptr_t slot);
void QRadioTuner_ErrorWithError(QRadioTuner* self, int error);
void QRadioTuner_connect_ErrorWithError(QRadioTuner* self, intptr_t slot);
struct miqt_string QRadioTuner_Tr2(const char* s, const char* c);
struct miqt_string QRadioTuner_Tr3(const char* s, const char* c, int n);
struct miqt_string QRadioTuner_TrUtf82(const char* s, const char* c);
struct miqt_string QRadioTuner_TrUtf83(const char* s, const char* c, int n);
void QRadioTuner_SearchAllStations1(QRadioTuner* self, int searchMode);
void QRadioTuner_override_virtual_Availability(void* self, intptr_t slot);
int QRadioTuner_virtualbase_Availability(const void* self);
void QRadioTuner_override_virtual_IsAvailable(void* self, intptr_t slot);
bool QRadioTuner_virtualbase_IsAvailable(const void* self);
void QRadioTuner_override_virtual_Service(void* self, intptr_t slot);
QMediaService* QRadioTuner_virtualbase_Service(const void* self);
void QRadioTuner_override_virtual_Bind(void* self, intptr_t slot);
bool QRadioTuner_virtualbase_Bind(void* self, QObject* param1);
void QRadioTuner_override_virtual_Unbind(void* self, intptr_t slot);
void QRadioTuner_virtualbase_Unbind(void* self, QObject* param1);
void QRadioTuner_Delete(QRadioTuner* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
