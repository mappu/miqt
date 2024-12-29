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
QMetaObject* QCameraCaptureBufferFormatControl_MetaObject(const QCameraCaptureBufferFormatControl* self);
void* QCameraCaptureBufferFormatControl_Metacast(QCameraCaptureBufferFormatControl* self, const char* param1);
struct miqt_string QCameraCaptureBufferFormatControl_Tr(const char* s);
struct miqt_string QCameraCaptureBufferFormatControl_TrUtf8(const char* s);
struct miqt_array /* of int */  QCameraCaptureBufferFormatControl_SupportedBufferFormats(const QCameraCaptureBufferFormatControl* self);
int QCameraCaptureBufferFormatControl_BufferFormat(const QCameraCaptureBufferFormatControl* self);
void QCameraCaptureBufferFormatControl_SetBufferFormat(QCameraCaptureBufferFormatControl* self, int format);
void QCameraCaptureBufferFormatControl_BufferFormatChanged(QCameraCaptureBufferFormatControl* self, int format);
void QCameraCaptureBufferFormatControl_connect_BufferFormatChanged(QCameraCaptureBufferFormatControl* self, intptr_t slot);
struct miqt_string QCameraCaptureBufferFormatControl_Tr2(const char* s, const char* c);
struct miqt_string QCameraCaptureBufferFormatControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QCameraCaptureBufferFormatControl_TrUtf82(const char* s, const char* c);
struct miqt_string QCameraCaptureBufferFormatControl_TrUtf83(const char* s, const char* c, int n);
void QCameraCaptureBufferFormatControl_Delete(QCameraCaptureBufferFormatControl* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
