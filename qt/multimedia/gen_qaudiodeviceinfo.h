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
void QAudioDeviceInfo_operatorAssign(QAudioDeviceInfo* self, QAudioDeviceInfo* other);
bool QAudioDeviceInfo_operatorEqual(const QAudioDeviceInfo* self, QAudioDeviceInfo* other);
bool QAudioDeviceInfo_operatorNotEqual(const QAudioDeviceInfo* self, QAudioDeviceInfo* other);
bool QAudioDeviceInfo_isNull(const QAudioDeviceInfo* self);
struct miqt_string QAudioDeviceInfo_deviceName(const QAudioDeviceInfo* self);
bool QAudioDeviceInfo_isFormatSupported(const QAudioDeviceInfo* self, QAudioFormat* format);
QAudioFormat* QAudioDeviceInfo_preferredFormat(const QAudioDeviceInfo* self);
QAudioFormat* QAudioDeviceInfo_nearestFormat(const QAudioDeviceInfo* self, QAudioFormat* format);
struct miqt_array /* of struct miqt_string */  QAudioDeviceInfo_supportedCodecs(const QAudioDeviceInfo* self);
struct miqt_array /* of int */  QAudioDeviceInfo_supportedSampleRates(const QAudioDeviceInfo* self);
struct miqt_array /* of int */  QAudioDeviceInfo_supportedChannelCounts(const QAudioDeviceInfo* self);
struct miqt_array /* of int */  QAudioDeviceInfo_supportedSampleSizes(const QAudioDeviceInfo* self);
struct miqt_array /* of int */  QAudioDeviceInfo_supportedByteOrders(const QAudioDeviceInfo* self);
struct miqt_array /* of int */  QAudioDeviceInfo_supportedSampleTypes(const QAudioDeviceInfo* self);
struct miqt_string QAudioDeviceInfo_realm(const QAudioDeviceInfo* self);
QAudioDeviceInfo* QAudioDeviceInfo_defaultInputDevice();
QAudioDeviceInfo* QAudioDeviceInfo_defaultOutputDevice();
struct miqt_array /* of QAudioDeviceInfo* */  QAudioDeviceInfo_availableDevices(int mode);
void QAudioDeviceInfo_delete(QAudioDeviceInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
