#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIASTREAMSCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIASTREAMSCONTROL_H

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
class QMediaStreamsControl;
class QMetaObject;
class QObject;
class QVariant;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMediaStreamsControl QMediaStreamsControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

void QMediaStreamsControl_virtbase(QMediaStreamsControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QMediaStreamsControl_MetaObject(const QMediaStreamsControl* self);
void* QMediaStreamsControl_Metacast(QMediaStreamsControl* self, const char* param1);
struct miqt_string QMediaStreamsControl_Tr(const char* s);
struct miqt_string QMediaStreamsControl_TrUtf8(const char* s);
int QMediaStreamsControl_StreamCount(QMediaStreamsControl* self);
int QMediaStreamsControl_StreamType(QMediaStreamsControl* self, int streamNumber);
QVariant* QMediaStreamsControl_MetaData(QMediaStreamsControl* self, int streamNumber, struct miqt_string key);
bool QMediaStreamsControl_IsActive(QMediaStreamsControl* self, int streamNumber);
void QMediaStreamsControl_SetActive(QMediaStreamsControl* self, int streamNumber, bool state);
void QMediaStreamsControl_StreamsChanged(QMediaStreamsControl* self);
void QMediaStreamsControl_connect_StreamsChanged(QMediaStreamsControl* self, intptr_t slot);
void QMediaStreamsControl_ActiveStreamsChanged(QMediaStreamsControl* self);
void QMediaStreamsControl_connect_ActiveStreamsChanged(QMediaStreamsControl* self, intptr_t slot);
struct miqt_string QMediaStreamsControl_Tr2(const char* s, const char* c);
struct miqt_string QMediaStreamsControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QMediaStreamsControl_TrUtf82(const char* s, const char* c);
struct miqt_string QMediaStreamsControl_TrUtf83(const char* s, const char* c, int n);
void QMediaStreamsControl_Delete(QMediaStreamsControl* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
