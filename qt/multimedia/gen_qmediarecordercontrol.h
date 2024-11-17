#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIARECORDERCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIARECORDERCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaRecorderControl;
class QMetaObject;
class QUrl;
#else
typedef struct QMediaRecorderControl QMediaRecorderControl;
typedef struct QMetaObject QMetaObject;
typedef struct QUrl QUrl;
#endif

QMetaObject* QMediaRecorderControl_MetaObject(const QMediaRecorderControl* self);
void* QMediaRecorderControl_Metacast(QMediaRecorderControl* self, const char* param1);
struct miqt_string QMediaRecorderControl_Tr(const char* s);
struct miqt_string QMediaRecorderControl_TrUtf8(const char* s);
QUrl* QMediaRecorderControl_OutputLocation(const QMediaRecorderControl* self);
bool QMediaRecorderControl_SetOutputLocation(QMediaRecorderControl* self, QUrl* location);
int QMediaRecorderControl_State(const QMediaRecorderControl* self);
int QMediaRecorderControl_Status(const QMediaRecorderControl* self);
long long QMediaRecorderControl_Duration(const QMediaRecorderControl* self);
bool QMediaRecorderControl_IsMuted(const QMediaRecorderControl* self);
double QMediaRecorderControl_Volume(const QMediaRecorderControl* self);
void QMediaRecorderControl_ApplySettings(QMediaRecorderControl* self);
void QMediaRecorderControl_StateChanged(QMediaRecorderControl* self, int state);
void QMediaRecorderControl_connect_StateChanged(QMediaRecorderControl* self, intptr_t slot);
void QMediaRecorderControl_StatusChanged(QMediaRecorderControl* self, int status);
void QMediaRecorderControl_connect_StatusChanged(QMediaRecorderControl* self, intptr_t slot);
void QMediaRecorderControl_DurationChanged(QMediaRecorderControl* self, long long position);
void QMediaRecorderControl_connect_DurationChanged(QMediaRecorderControl* self, intptr_t slot);
void QMediaRecorderControl_MutedChanged(QMediaRecorderControl* self, bool muted);
void QMediaRecorderControl_connect_MutedChanged(QMediaRecorderControl* self, intptr_t slot);
void QMediaRecorderControl_VolumeChanged(QMediaRecorderControl* self, double volume);
void QMediaRecorderControl_connect_VolumeChanged(QMediaRecorderControl* self, intptr_t slot);
void QMediaRecorderControl_ActualLocationChanged(QMediaRecorderControl* self, QUrl* location);
void QMediaRecorderControl_connect_ActualLocationChanged(QMediaRecorderControl* self, intptr_t slot);
void QMediaRecorderControl_Error(QMediaRecorderControl* self, int error, struct miqt_string errorString);
void QMediaRecorderControl_connect_Error(QMediaRecorderControl* self, intptr_t slot);
void QMediaRecorderControl_SetState(QMediaRecorderControl* self, int state);
void QMediaRecorderControl_SetMuted(QMediaRecorderControl* self, bool muted);
void QMediaRecorderControl_SetVolume(QMediaRecorderControl* self, double volume);
struct miqt_string QMediaRecorderControl_Tr2(const char* s, const char* c);
struct miqt_string QMediaRecorderControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QMediaRecorderControl_TrUtf82(const char* s, const char* c);
struct miqt_string QMediaRecorderControl_TrUtf83(const char* s, const char* c, int n);
void QMediaRecorderControl_Delete(QMediaRecorderControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
