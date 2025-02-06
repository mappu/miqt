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
class QMediaControl;
class QMediaRecorderControl;
class QMetaMethod;
class QMetaObject;
class QObject;
class QUrl;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMediaRecorderControl QMediaRecorderControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

void QMediaRecorderControl_virtbase(QMediaRecorderControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QMediaRecorderControl_metaObject(const QMediaRecorderControl* self);
void* QMediaRecorderControl_metacast(QMediaRecorderControl* self, const char* param1);
struct miqt_string QMediaRecorderControl_tr(const char* s);
struct miqt_string QMediaRecorderControl_trUtf8(const char* s);
QUrl* QMediaRecorderControl_outputLocation(const QMediaRecorderControl* self);
bool QMediaRecorderControl_setOutputLocation(QMediaRecorderControl* self, QUrl* location);
int QMediaRecorderControl_state(const QMediaRecorderControl* self);
int QMediaRecorderControl_status(const QMediaRecorderControl* self);
long long QMediaRecorderControl_duration(const QMediaRecorderControl* self);
bool QMediaRecorderControl_isMuted(const QMediaRecorderControl* self);
double QMediaRecorderControl_volume(const QMediaRecorderControl* self);
void QMediaRecorderControl_applySettings(QMediaRecorderControl* self);
void QMediaRecorderControl_stateChanged(QMediaRecorderControl* self, int state);
void QMediaRecorderControl_connect_stateChanged(QMediaRecorderControl* self, intptr_t slot);
void QMediaRecorderControl_statusChanged(QMediaRecorderControl* self, int status);
void QMediaRecorderControl_connect_statusChanged(QMediaRecorderControl* self, intptr_t slot);
void QMediaRecorderControl_durationChanged(QMediaRecorderControl* self, long long position);
void QMediaRecorderControl_connect_durationChanged(QMediaRecorderControl* self, intptr_t slot);
void QMediaRecorderControl_mutedChanged(QMediaRecorderControl* self, bool muted);
void QMediaRecorderControl_connect_mutedChanged(QMediaRecorderControl* self, intptr_t slot);
void QMediaRecorderControl_volumeChanged(QMediaRecorderControl* self, double volume);
void QMediaRecorderControl_connect_volumeChanged(QMediaRecorderControl* self, intptr_t slot);
void QMediaRecorderControl_actualLocationChanged(QMediaRecorderControl* self, QUrl* location);
void QMediaRecorderControl_connect_actualLocationChanged(QMediaRecorderControl* self, intptr_t slot);
void QMediaRecorderControl_error(QMediaRecorderControl* self, int error, struct miqt_string errorString);
void QMediaRecorderControl_connect_error(QMediaRecorderControl* self, intptr_t slot);
void QMediaRecorderControl_setState(QMediaRecorderControl* self, int state);
void QMediaRecorderControl_setMuted(QMediaRecorderControl* self, bool muted);
void QMediaRecorderControl_setVolume(QMediaRecorderControl* self, double volume);
struct miqt_string QMediaRecorderControl_tr2(const char* s, const char* c);
struct miqt_string QMediaRecorderControl_tr3(const char* s, const char* c, int n);
struct miqt_string QMediaRecorderControl_trUtf82(const char* s, const char* c);
struct miqt_string QMediaRecorderControl_trUtf83(const char* s, const char* c, int n);
void QMediaRecorderControl_delete(QMediaRecorderControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
