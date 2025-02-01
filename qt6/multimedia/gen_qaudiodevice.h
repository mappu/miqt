#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QAUDIODEVICE_H
#define MIQT_QT6_MULTIMEDIA_GEN_QAUDIODEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioDevice;
class QAudioFormat;
#else
typedef struct QAudioDevice QAudioDevice;
typedef struct QAudioFormat QAudioFormat;
#endif

QAudioDevice* QAudioDevice_new();
QAudioDevice* QAudioDevice_new2(QAudioDevice* other);
void QAudioDevice_swap(QAudioDevice* self, QAudioDevice* other);
void QAudioDevice_operatorAssign(QAudioDevice* self, QAudioDevice* other);
bool QAudioDevice_operatorEqual(const QAudioDevice* self, QAudioDevice* other);
bool QAudioDevice_operatorNotEqual(const QAudioDevice* self, QAudioDevice* other);
bool QAudioDevice_isNull(const QAudioDevice* self);
struct miqt_string QAudioDevice_id(const QAudioDevice* self);
struct miqt_string QAudioDevice_description(const QAudioDevice* self);
bool QAudioDevice_isDefault(const QAudioDevice* self);
int QAudioDevice_mode(const QAudioDevice* self);
bool QAudioDevice_isFormatSupported(const QAudioDevice* self, QAudioFormat* format);
QAudioFormat* QAudioDevice_preferredFormat(const QAudioDevice* self);
int QAudioDevice_minimumSampleRate(const QAudioDevice* self);
int QAudioDevice_maximumSampleRate(const QAudioDevice* self);
int QAudioDevice_minimumChannelCount(const QAudioDevice* self);
int QAudioDevice_maximumChannelCount(const QAudioDevice* self);
struct miqt_array /* of uint16_t */  QAudioDevice_supportedSampleFormats(const QAudioDevice* self);
uint32_t QAudioDevice_channelConfiguration(const QAudioDevice* self);
void QAudioDevice_delete(QAudioDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
