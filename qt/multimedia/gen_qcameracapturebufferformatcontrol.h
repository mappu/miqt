#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERACAPTUREBUFFERFORMATCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERACAPTUREBUFFERFORMATCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraCaptureBufferFormatControl;
class QMediaControl;
class QMetaObject;
class QObject;
#else
typedef struct QCameraCaptureBufferFormatControl QCameraCaptureBufferFormatControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QCameraCaptureBufferFormatControl_virtbase(QCameraCaptureBufferFormatControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QCameraCaptureBufferFormatControl_metaObject(const QCameraCaptureBufferFormatControl* self);
void* QCameraCaptureBufferFormatControl_metacast(QCameraCaptureBufferFormatControl* self, const char* param1);
struct miqt_string QCameraCaptureBufferFormatControl_tr(const char* s);
struct miqt_string QCameraCaptureBufferFormatControl_trUtf8(const char* s);
struct miqt_array /* of int */  QCameraCaptureBufferFormatControl_supportedBufferFormats(const QCameraCaptureBufferFormatControl* self);
int QCameraCaptureBufferFormatControl_bufferFormat(const QCameraCaptureBufferFormatControl* self);
void QCameraCaptureBufferFormatControl_setBufferFormat(QCameraCaptureBufferFormatControl* self, int format);
void QCameraCaptureBufferFormatControl_bufferFormatChanged(QCameraCaptureBufferFormatControl* self, int format);
void QCameraCaptureBufferFormatControl_connect_bufferFormatChanged(QCameraCaptureBufferFormatControl* self, intptr_t slot);
struct miqt_string QCameraCaptureBufferFormatControl_tr2(const char* s, const char* c);
struct miqt_string QCameraCaptureBufferFormatControl_tr3(const char* s, const char* c, int n);
struct miqt_string QCameraCaptureBufferFormatControl_trUtf82(const char* s, const char* c);
struct miqt_string QCameraCaptureBufferFormatControl_trUtf83(const char* s, const char* c, int n);
void QCameraCaptureBufferFormatControl_delete(QCameraCaptureBufferFormatControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
