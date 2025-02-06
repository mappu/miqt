#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERAFEEDBACKCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERAFEEDBACKCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraFeedbackControl;
class QMediaControl;
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QCameraFeedbackControl QCameraFeedbackControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QCameraFeedbackControl_virtbase(QCameraFeedbackControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QCameraFeedbackControl_metaObject(const QCameraFeedbackControl* self);
void* QCameraFeedbackControl_metacast(QCameraFeedbackControl* self, const char* param1);
struct miqt_string QCameraFeedbackControl_tr(const char* s);
struct miqt_string QCameraFeedbackControl_trUtf8(const char* s);
bool QCameraFeedbackControl_isEventFeedbackLocked(const QCameraFeedbackControl* self, int param1);
bool QCameraFeedbackControl_isEventFeedbackEnabled(const QCameraFeedbackControl* self, int param1);
bool QCameraFeedbackControl_setEventFeedbackEnabled(QCameraFeedbackControl* self, int param1, bool param2);
void QCameraFeedbackControl_resetEventFeedback(QCameraFeedbackControl* self, int param1);
bool QCameraFeedbackControl_setEventFeedbackSound(QCameraFeedbackControl* self, int param1, struct miqt_string filePath);
struct miqt_string QCameraFeedbackControl_tr2(const char* s, const char* c);
struct miqt_string QCameraFeedbackControl_tr3(const char* s, const char* c, int n);
struct miqt_string QCameraFeedbackControl_trUtf82(const char* s, const char* c);
struct miqt_string QCameraFeedbackControl_trUtf83(const char* s, const char* c, int n);
void QCameraFeedbackControl_delete(QCameraFeedbackControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
