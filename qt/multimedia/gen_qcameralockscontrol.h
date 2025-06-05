#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERALOCKSCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERALOCKSCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraLocksControl;
class QMediaControl;
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QCameraLocksControl QCameraLocksControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QCameraLocksControl_virtbase(QCameraLocksControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QCameraLocksControl_metaObject(const QCameraLocksControl* self);
void* QCameraLocksControl_metacast(QCameraLocksControl* self, const char* param1);
struct miqt_string QCameraLocksControl_tr(const char* s);
struct miqt_string QCameraLocksControl_trUtf8(const char* s);
int QCameraLocksControl_supportedLocks(const QCameraLocksControl* self);
int QCameraLocksControl_lockStatus(const QCameraLocksControl* self, int lock);
void QCameraLocksControl_searchAndLock(QCameraLocksControl* self, int locks);
void QCameraLocksControl_unlock(QCameraLocksControl* self, int locks);
void QCameraLocksControl_lockStatusChanged(QCameraLocksControl* self, int type, int status, int reason);
void QCameraLocksControl_connect_lockStatusChanged(QCameraLocksControl* self, intptr_t slot);
struct miqt_string QCameraLocksControl_tr2(const char* s, const char* c);
struct miqt_string QCameraLocksControl_tr3(const char* s, const char* c, int n);
struct miqt_string QCameraLocksControl_trUtf82(const char* s, const char* c);
struct miqt_string QCameraLocksControl_trUtf83(const char* s, const char* c, int n);

void QCameraLocksControl_delete(QCameraLocksControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
