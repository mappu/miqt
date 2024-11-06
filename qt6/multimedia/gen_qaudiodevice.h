#ifndef GEN_QAUDIODEVICE_H
#define GEN_QAUDIODEVICE_H

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
class QByteArray;
#else
typedef struct QAudioDevice QAudioDevice;
typedef struct QAudioFormat QAudioFormat;
typedef struct QByteArray QByteArray;
#endif

QAudioDevice* QAudioDevice_new();
QAudioDevice* QAudioDevice_new2(QAudioDevice* other);
void QAudioDevice_Swap(QAudioDevice* self, QAudioDevice* other);
void QAudioDevice_OperatorAssign(QAudioDevice* self, QAudioDevice* other);
bool QAudioDevice_OperatorEqual(const QAudioDevice* self, QAudioDevice* other);
bool QAudioDevice_OperatorNotEqual(const QAudioDevice* self, QAudioDevice* other);
bool QAudioDevice_IsNull(const QAudioDevice* self);
struct miqt_string QAudioDevice_Id(const QAudioDevice* self);
struct miqt_string QAudioDevice_Description(const QAudioDevice* self);
bool QAudioDevice_IsDefault(const QAudioDevice* self);
int QAudioDevice_Mode(const QAudioDevice* self);
bool QAudioDevice_IsFormatSupported(const QAudioDevice* self, QAudioFormat* format);
QAudioFormat* QAudioDevice_PreferredFormat(const QAudioDevice* self);
int QAudioDevice_MinimumSampleRate(const QAudioDevice* self);
int QAudioDevice_MaximumSampleRate(const QAudioDevice* self);
int QAudioDevice_MinimumChannelCount(const QAudioDevice* self);
int QAudioDevice_MaximumChannelCount(const QAudioDevice* self);
struct miqt_array QAudioDevice_SupportedSampleFormats(const QAudioDevice* self);
uint32_t QAudioDevice_ChannelConfiguration(const QAudioDevice* self);
void QAudioDevice_Delete(QAudioDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
