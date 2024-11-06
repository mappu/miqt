#ifndef GEN_QAUDIOPROBE_H
#define GEN_QAUDIOPROBE_H

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
class QAudioProbe;
class QMediaObject;
class QMediaRecorder;
class QMetaObject;
class QObject;
#else
typedef struct QAudioBuffer QAudioBuffer;
typedef struct QAudioProbe QAudioProbe;
typedef struct QMediaObject QMediaObject;
typedef struct QMediaRecorder QMediaRecorder;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QAudioProbe* QAudioProbe_new();
QAudioProbe* QAudioProbe_new2(QObject* parent);
QMetaObject* QAudioProbe_MetaObject(const QAudioProbe* self);
void* QAudioProbe_Metacast(QAudioProbe* self, const char* param1);
struct miqt_string QAudioProbe_Tr(const char* s);
struct miqt_string QAudioProbe_TrUtf8(const char* s);
bool QAudioProbe_SetSource(QAudioProbe* self, QMediaObject* source);
bool QAudioProbe_SetSourceWithSource(QAudioProbe* self, QMediaRecorder* source);
bool QAudioProbe_IsActive(const QAudioProbe* self);
void QAudioProbe_AudioBufferProbed(QAudioProbe* self, QAudioBuffer* buffer);
void QAudioProbe_connect_AudioBufferProbed(QAudioProbe* self, intptr_t slot);
void QAudioProbe_Flush(QAudioProbe* self);
void QAudioProbe_connect_Flush(QAudioProbe* self, intptr_t slot);
struct miqt_string QAudioProbe_Tr2(const char* s, const char* c);
struct miqt_string QAudioProbe_Tr3(const char* s, const char* c, int n);
struct miqt_string QAudioProbe_TrUtf82(const char* s, const char* c);
struct miqt_string QAudioProbe_TrUtf83(const char* s, const char* c, int n);
void QAudioProbe_Delete(QAudioProbe* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
