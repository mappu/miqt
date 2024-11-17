#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERAVIEWFINDER_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERAVIEWFINDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraViewfinder;
class QMediaObject;
class QMetaObject;
class QWidget;
#else
typedef struct QCameraViewfinder QCameraViewfinder;
typedef struct QMediaObject QMediaObject;
typedef struct QMetaObject QMetaObject;
typedef struct QWidget QWidget;
#endif

QCameraViewfinder* QCameraViewfinder_new(QWidget* parent);
QCameraViewfinder* QCameraViewfinder_new2();
QMetaObject* QCameraViewfinder_MetaObject(const QCameraViewfinder* self);
void* QCameraViewfinder_Metacast(QCameraViewfinder* self, const char* param1);
struct miqt_string QCameraViewfinder_Tr(const char* s);
struct miqt_string QCameraViewfinder_TrUtf8(const char* s);
QMediaObject* QCameraViewfinder_MediaObject(const QCameraViewfinder* self);
struct miqt_string QCameraViewfinder_Tr2(const char* s, const char* c);
struct miqt_string QCameraViewfinder_Tr3(const char* s, const char* c, int n);
struct miqt_string QCameraViewfinder_TrUtf82(const char* s, const char* c);
struct miqt_string QCameraViewfinder_TrUtf83(const char* s, const char* c, int n);
void QCameraViewfinder_Delete(QCameraViewfinder* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
