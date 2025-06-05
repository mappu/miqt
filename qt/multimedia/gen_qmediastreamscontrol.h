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
class QMetaMethod;
class QMetaObject;
class QObject;
class QVariant;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMediaStreamsControl QMediaStreamsControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

void QMediaStreamsControl_virtbase(QMediaStreamsControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QMediaStreamsControl_metaObject(const QMediaStreamsControl* self);
void* QMediaStreamsControl_metacast(QMediaStreamsControl* self, const char* param1);
struct miqt_string QMediaStreamsControl_tr(const char* s);
struct miqt_string QMediaStreamsControl_trUtf8(const char* s);
int QMediaStreamsControl_streamCount(QMediaStreamsControl* self);
int QMediaStreamsControl_streamType(QMediaStreamsControl* self, int streamNumber);
QVariant* QMediaStreamsControl_metaData(QMediaStreamsControl* self, int streamNumber, struct miqt_string key);
bool QMediaStreamsControl_isActive(QMediaStreamsControl* self, int streamNumber);
void QMediaStreamsControl_setActive(QMediaStreamsControl* self, int streamNumber, bool state);
void QMediaStreamsControl_streamsChanged(QMediaStreamsControl* self);
void QMediaStreamsControl_connect_streamsChanged(QMediaStreamsControl* self, intptr_t slot);
void QMediaStreamsControl_activeStreamsChanged(QMediaStreamsControl* self);
void QMediaStreamsControl_connect_activeStreamsChanged(QMediaStreamsControl* self, intptr_t slot);
struct miqt_string QMediaStreamsControl_tr2(const char* s, const char* c);
struct miqt_string QMediaStreamsControl_tr3(const char* s, const char* c, int n);
struct miqt_string QMediaStreamsControl_trUtf82(const char* s, const char* c);
struct miqt_string QMediaStreamsControl_trUtf83(const char* s, const char* c, int n);

void QMediaStreamsControl_delete(QMediaStreamsControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
