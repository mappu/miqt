#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QAUDIODEVICEINFO_H
#define MIQT_QT_MULTIMEDIA_GEN_QAUDIODEVICEINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioDeviceInfo;
class QAudioFormat;
#else
typedef struct QAudioDeviceInfo QAudioDeviceInfo;
typedef struct QAudioFormat QAudioFormat;
#endif

QAudioDeviceInfo* QAudioDeviceInfo_new();
QAudioDeviceInfo* QAudioDeviceInfo_new2(QAudioDeviceInfo* other);
void QAudioDeviceInfo_OperatorAssign(QAudioDeviceInfo* self, QAudioDeviceInfo* other);
bool QAudioDeviceInfo_OperatorEqual(const QAudioDeviceInfo* self, QAudioDeviceInfo* other);
bool QAudioDeviceInfo_OperatorNotEqual(const QAudioDeviceInfo* self, QAudioDeviceInfo* other);
bool QAudioDeviceInfo_IsNull(const QAudioDeviceInfo* self);
struct miqt_string QAudioDeviceInfo_DeviceName(const QAudioDeviceInfo* self);
bool QAudioDeviceInfo_IsFormatSupported(const QAudioDeviceInfo* self, QAudioFormat* format);
QAudioFormat* QAudioDeviceInfo_PreferredFormat(const QAudioDeviceInfo* self);
QAudioFormat* QAudioDeviceInfo_NearestFormat(const QAudioDeviceInfo* self, QAudioFormat* format);
struct miqt_array /* of struct miqt_string */  QAudioDeviceInfo_SupportedCodecs(const QAudioDeviceInfo* self);
struct miqt_array /* of int */  QAudioDeviceInfo_SupportedSampleRates(const QAudioDeviceInfo* self);
struct miqt_array /* of int */  QAudioDeviceInfo_SupportedChannelCounts(const QAudioDeviceInfo* self);
struct miqt_array /* of int */  QAudioDeviceInfo_SupportedSampleSizes(const QAudioDeviceInfo* self);
struct miqt_array /* of int */  QAudioDeviceInfo_SupportedByteOrders(const QAudioDeviceInfo* self);
struct miqt_array /* of int */  QAudioDeviceInfo_SupportedSampleTypes(const QAudioDeviceInfo* self);
struct miqt_string QAudioDeviceInfo_Realm(const QAudioDeviceInfo* self);
QAudioDeviceInfo* QAudioDeviceInfo_DefaultInputDevice();
QAudioDeviceInfo* QAudioDeviceInfo_DefaultOutputDevice();
struct miqt_array /* of QAudioDeviceInfo* */  QAudioDeviceInfo_AvailableDevices(int mode);
void QAudioDeviceInfo_Delete(QAudioDeviceInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
