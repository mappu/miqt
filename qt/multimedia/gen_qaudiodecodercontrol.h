#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QAUDIODECODERCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QAUDIODECODERCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioBuffer;
class QAudioDecoderControl;
class QAudioFormat;
class QIODevice;
class QMediaControl;
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QAudioBuffer QAudioBuffer;
typedef struct QAudioDecoderControl QAudioDecoderControl;
typedef struct QAudioFormat QAudioFormat;
typedef struct QIODevice QIODevice;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QAudioDecoderControl_virtbase(QAudioDecoderControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QAudioDecoderControl_metaObject(const QAudioDecoderControl* self);
void* QAudioDecoderControl_metacast(QAudioDecoderControl* self, const char* param1);
struct miqt_string QAudioDecoderControl_tr(const char* s);
struct miqt_string QAudioDecoderControl_trUtf8(const char* s);
int QAudioDecoderControl_state(const QAudioDecoderControl* self);
struct miqt_string QAudioDecoderControl_sourceFilename(const QAudioDecoderControl* self);
void QAudioDecoderControl_setSourceFilename(QAudioDecoderControl* self, struct miqt_string fileName);
QIODevice* QAudioDecoderControl_sourceDevice(const QAudioDecoderControl* self);
void QAudioDecoderControl_setSourceDevice(QAudioDecoderControl* self, QIODevice* device);
void QAudioDecoderControl_start(QAudioDecoderControl* self);
void QAudioDecoderControl_stop(QAudioDecoderControl* self);
QAudioFormat* QAudioDecoderControl_audioFormat(const QAudioDecoderControl* self);
void QAudioDecoderControl_setAudioFormat(QAudioDecoderControl* self, QAudioFormat* format);
QAudioBuffer* QAudioDecoderControl_read(QAudioDecoderControl* self);
bool QAudioDecoderControl_bufferAvailable(const QAudioDecoderControl* self);
long long QAudioDecoderControl_position(const QAudioDecoderControl* self);
long long QAudioDecoderControl_duration(const QAudioDecoderControl* self);
void QAudioDecoderControl_stateChanged(QAudioDecoderControl* self, int newState);
void QAudioDecoderControl_connect_stateChanged(QAudioDecoderControl* self, intptr_t slot);
void QAudioDecoderControl_formatChanged(QAudioDecoderControl* self, QAudioFormat* format);
void QAudioDecoderControl_connect_formatChanged(QAudioDecoderControl* self, intptr_t slot);
void QAudioDecoderControl_sourceChanged(QAudioDecoderControl* self);
void QAudioDecoderControl_connect_sourceChanged(QAudioDecoderControl* self, intptr_t slot);
void QAudioDecoderControl_error(QAudioDecoderControl* self, int error, struct miqt_string errorString);
void QAudioDecoderControl_connect_error(QAudioDecoderControl* self, intptr_t slot);
void QAudioDecoderControl_bufferReady(QAudioDecoderControl* self);
void QAudioDecoderControl_connect_bufferReady(QAudioDecoderControl* self, intptr_t slot);
void QAudioDecoderControl_bufferAvailableChanged(QAudioDecoderControl* self, bool available);
void QAudioDecoderControl_connect_bufferAvailableChanged(QAudioDecoderControl* self, intptr_t slot);
void QAudioDecoderControl_finished(QAudioDecoderControl* self);
void QAudioDecoderControl_connect_finished(QAudioDecoderControl* self, intptr_t slot);
void QAudioDecoderControl_positionChanged(QAudioDecoderControl* self, long long position);
void QAudioDecoderControl_connect_positionChanged(QAudioDecoderControl* self, intptr_t slot);
void QAudioDecoderControl_durationChanged(QAudioDecoderControl* self, long long duration);
void QAudioDecoderControl_connect_durationChanged(QAudioDecoderControl* self, intptr_t slot);
struct miqt_string QAudioDecoderControl_tr2(const char* s, const char* c);
struct miqt_string QAudioDecoderControl_tr3(const char* s, const char* c, int n);
struct miqt_string QAudioDecoderControl_trUtf82(const char* s, const char* c);
struct miqt_string QAudioDecoderControl_trUtf83(const char* s, const char* c, int n);

void QAudioDecoderControl_delete(QAudioDecoderControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
