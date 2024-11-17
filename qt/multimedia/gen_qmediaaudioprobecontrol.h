#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIAAUDIOPROBECONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIAAUDIOPROBECONTROL_H

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
class QMediaAudioProbeControl;
class QMetaObject;
#else
typedef struct QAudioBuffer QAudioBuffer;
typedef struct QMediaAudioProbeControl QMediaAudioProbeControl;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QMediaAudioProbeControl_MetaObject(const QMediaAudioProbeControl* self);
void* QMediaAudioProbeControl_Metacast(QMediaAudioProbeControl* self, const char* param1);
struct miqt_string QMediaAudioProbeControl_Tr(const char* s);
struct miqt_string QMediaAudioProbeControl_TrUtf8(const char* s);
void QMediaAudioProbeControl_AudioBufferProbed(QMediaAudioProbeControl* self, QAudioBuffer* buffer);
void QMediaAudioProbeControl_connect_AudioBufferProbed(QMediaAudioProbeControl* self, intptr_t slot);
void QMediaAudioProbeControl_Flush(QMediaAudioProbeControl* self);
void QMediaAudioProbeControl_connect_Flush(QMediaAudioProbeControl* self, intptr_t slot);
struct miqt_string QMediaAudioProbeControl_Tr2(const char* s, const char* c);
struct miqt_string QMediaAudioProbeControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QMediaAudioProbeControl_TrUtf82(const char* s, const char* c);
struct miqt_string QMediaAudioProbeControl_TrUtf83(const char* s, const char* c, int n);
void QMediaAudioProbeControl_Delete(QMediaAudioProbeControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
