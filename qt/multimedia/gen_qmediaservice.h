#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIASERVICE_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIASERVICE_H

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
class QMediaService;
class QMetaObject;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMediaService QMediaService;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QMediaService_MetaObject(const QMediaService* self);
void* QMediaService_Metacast(QMediaService* self, const char* param1);
struct miqt_string QMediaService_Tr(const char* s);
struct miqt_string QMediaService_TrUtf8(const char* s);
QMediaControl* QMediaService_RequestControl(QMediaService* self, const char* name);
void QMediaService_ReleaseControl(QMediaService* self, QMediaControl* control);
struct miqt_string QMediaService_Tr2(const char* s, const char* c);
struct miqt_string QMediaService_Tr3(const char* s, const char* c, int n);
struct miqt_string QMediaService_TrUtf82(const char* s, const char* c);
struct miqt_string QMediaService_TrUtf83(const char* s, const char* c, int n);
void QMediaService_Delete(QMediaService* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
