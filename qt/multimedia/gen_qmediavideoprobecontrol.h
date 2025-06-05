#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIAVIDEOPROBECONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIAVIDEOPROBECONTROL_H

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
class QMediaVideoProbeControl;
class QMetaMethod;
class QMetaObject;
class QObject;
class QVideoFrame;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMediaVideoProbeControl QMediaVideoProbeControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVideoFrame QVideoFrame;
#endif

void QMediaVideoProbeControl_virtbase(QMediaVideoProbeControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QMediaVideoProbeControl_metaObject(const QMediaVideoProbeControl* self);
void* QMediaVideoProbeControl_metacast(QMediaVideoProbeControl* self, const char* param1);
struct miqt_string QMediaVideoProbeControl_tr(const char* s);
struct miqt_string QMediaVideoProbeControl_trUtf8(const char* s);
void QMediaVideoProbeControl_videoFrameProbed(QMediaVideoProbeControl* self, QVideoFrame* frame);
void QMediaVideoProbeControl_connect_videoFrameProbed(QMediaVideoProbeControl* self, intptr_t slot);
void QMediaVideoProbeControl_flush(QMediaVideoProbeControl* self);
void QMediaVideoProbeControl_connect_flush(QMediaVideoProbeControl* self, intptr_t slot);
struct miqt_string QMediaVideoProbeControl_tr2(const char* s, const char* c);
struct miqt_string QMediaVideoProbeControl_tr3(const char* s, const char* c, int n);
struct miqt_string QMediaVideoProbeControl_trUtf82(const char* s, const char* c);
struct miqt_string QMediaVideoProbeControl_trUtf83(const char* s, const char* c, int n);

void QMediaVideoProbeControl_delete(QMediaVideoProbeControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
