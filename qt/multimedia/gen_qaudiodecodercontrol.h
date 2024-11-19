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
class QMetaObject;
class QObject;
#else
typedef struct QAudioBuffer QAudioBuffer;
typedef struct QAudioDecoderControl QAudioDecoderControl;
typedef struct QAudioFormat QAudioFormat;
typedef struct QIODevice QIODevice;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QAudioDecoderControl_MetaObject(const QAudioDecoderControl* self);
void* QAudioDecoderControl_Metacast(QAudioDecoderControl* self, const char* param1);
struct miqt_string QAudioDecoderControl_Tr(const char* s);
struct miqt_string QAudioDecoderControl_TrUtf8(const char* s);
int QAudioDecoderControl_State(const QAudioDecoderControl* self);
struct miqt_string QAudioDecoderControl_SourceFilename(const QAudioDecoderControl* self);
void QAudioDecoderControl_SetSourceFilename(QAudioDecoderControl* self, struct miqt_string fileName);
QIODevice* QAudioDecoderControl_SourceDevice(const QAudioDecoderControl* self);
void QAudioDecoderControl_SetSourceDevice(QAudioDecoderControl* self, QIODevice* device);
void QAudioDecoderControl_Start(QAudioDecoderControl* self);
void QAudioDecoderControl_Stop(QAudioDecoderControl* self);
QAudioFormat* QAudioDecoderControl_AudioFormat(const QAudioDecoderControl* self);
void QAudioDecoderControl_SetAudioFormat(QAudioDecoderControl* self, QAudioFormat* format);
QAudioBuffer* QAudioDecoderControl_Read(QAudioDecoderControl* self);
bool QAudioDecoderControl_BufferAvailable(const QAudioDecoderControl* self);
long long QAudioDecoderControl_Position(const QAudioDecoderControl* self);
long long QAudioDecoderControl_Duration(const QAudioDecoderControl* self);
void QAudioDecoderControl_StateChanged(QAudioDecoderControl* self, int newState);
void QAudioDecoderControl_connect_StateChanged(QAudioDecoderControl* self, intptr_t slot);
void QAudioDecoderControl_FormatChanged(QAudioDecoderControl* self, QAudioFormat* format);
void QAudioDecoderControl_connect_FormatChanged(QAudioDecoderControl* self, intptr_t slot);
void QAudioDecoderControl_SourceChanged(QAudioDecoderControl* self);
void QAudioDecoderControl_connect_SourceChanged(QAudioDecoderControl* self, intptr_t slot);
void QAudioDecoderControl_Error(QAudioDecoderControl* self, int error, struct miqt_string errorString);
void QAudioDecoderControl_connect_Error(QAudioDecoderControl* self, intptr_t slot);
void QAudioDecoderControl_BufferReady(QAudioDecoderControl* self);
void QAudioDecoderControl_connect_BufferReady(QAudioDecoderControl* self, intptr_t slot);
void QAudioDecoderControl_BufferAvailableChanged(QAudioDecoderControl* self, bool available);
void QAudioDecoderControl_connect_BufferAvailableChanged(QAudioDecoderControl* self, intptr_t slot);
void QAudioDecoderControl_Finished(QAudioDecoderControl* self);
void QAudioDecoderControl_connect_Finished(QAudioDecoderControl* self, intptr_t slot);
void QAudioDecoderControl_PositionChanged(QAudioDecoderControl* self, long long position);
void QAudioDecoderControl_connect_PositionChanged(QAudioDecoderControl* self, intptr_t slot);
void QAudioDecoderControl_DurationChanged(QAudioDecoderControl* self, long long duration);
void QAudioDecoderControl_connect_DurationChanged(QAudioDecoderControl* self, intptr_t slot);
struct miqt_string QAudioDecoderControl_Tr2(const char* s, const char* c);
struct miqt_string QAudioDecoderControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QAudioDecoderControl_TrUtf82(const char* s, const char* c);
struct miqt_string QAudioDecoderControl_TrUtf83(const char* s, const char* c, int n);
void QAudioDecoderControl_Delete(QAudioDecoderControl* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
