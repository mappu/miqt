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
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMediaService QMediaService;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QMediaService_virtbase(QMediaService* src, QObject** outptr_QObject);
QMetaObject* QMediaService_metaObject(const QMediaService* self);
void* QMediaService_metacast(QMediaService* self, const char* param1);
struct miqt_string QMediaService_tr(const char* s);
struct miqt_string QMediaService_trUtf8(const char* s);
QMediaControl* QMediaService_requestControl(QMediaService* self, const char* name);
void QMediaService_releaseControl(QMediaService* self, QMediaControl* control);
struct miqt_string QMediaService_tr2(const char* s, const char* c);
struct miqt_string QMediaService_tr3(const char* s, const char* c, int n);
struct miqt_string QMediaService_trUtf82(const char* s, const char* c);
struct miqt_string QMediaService_trUtf83(const char* s, const char* c, int n);

void QMediaService_delete(QMediaService* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
