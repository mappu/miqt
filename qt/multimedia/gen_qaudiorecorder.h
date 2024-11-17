#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QAUDIORECORDER_H
#define MIQT_QT_MULTIMEDIA_GEN_QAUDIORECORDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioRecorder;
class QMetaObject;
class QObject;
#else
typedef struct QAudioRecorder QAudioRecorder;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QAudioRecorder* QAudioRecorder_new();
QAudioRecorder* QAudioRecorder_new2(QObject* parent);
QMetaObject* QAudioRecorder_MetaObject(const QAudioRecorder* self);
void* QAudioRecorder_Metacast(QAudioRecorder* self, const char* param1);
struct miqt_string QAudioRecorder_Tr(const char* s);
struct miqt_string QAudioRecorder_TrUtf8(const char* s);
struct miqt_array /* of struct miqt_string */  QAudioRecorder_AudioInputs(const QAudioRecorder* self);
struct miqt_string QAudioRecorder_DefaultAudioInput(const QAudioRecorder* self);
struct miqt_string QAudioRecorder_AudioInputDescription(const QAudioRecorder* self, struct miqt_string name);
struct miqt_string QAudioRecorder_AudioInput(const QAudioRecorder* self);
void QAudioRecorder_SetAudioInput(QAudioRecorder* self, struct miqt_string name);
void QAudioRecorder_AudioInputChanged(QAudioRecorder* self, struct miqt_string name);
void QAudioRecorder_connect_AudioInputChanged(QAudioRecorder* self, intptr_t slot);
void QAudioRecorder_AvailableAudioInputsChanged(QAudioRecorder* self);
void QAudioRecorder_connect_AvailableAudioInputsChanged(QAudioRecorder* self, intptr_t slot);
struct miqt_string QAudioRecorder_Tr2(const char* s, const char* c);
struct miqt_string QAudioRecorder_Tr3(const char* s, const char* c, int n);
struct miqt_string QAudioRecorder_TrUtf82(const char* s, const char* c);
struct miqt_string QAudioRecorder_TrUtf83(const char* s, const char* c, int n);
void QAudioRecorder_Delete(QAudioRecorder* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
