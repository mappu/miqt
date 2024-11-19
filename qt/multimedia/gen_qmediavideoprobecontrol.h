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
class QMetaObject;
class QObject;
class QVideoFrame;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMediaVideoProbeControl QMediaVideoProbeControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVideoFrame QVideoFrame;
#endif

QMetaObject* QMediaVideoProbeControl_MetaObject(const QMediaVideoProbeControl* self);
void* QMediaVideoProbeControl_Metacast(QMediaVideoProbeControl* self, const char* param1);
struct miqt_string QMediaVideoProbeControl_Tr(const char* s);
struct miqt_string QMediaVideoProbeControl_TrUtf8(const char* s);
void QMediaVideoProbeControl_VideoFrameProbed(QMediaVideoProbeControl* self, QVideoFrame* frame);
void QMediaVideoProbeControl_connect_VideoFrameProbed(QMediaVideoProbeControl* self, intptr_t slot);
void QMediaVideoProbeControl_Flush(QMediaVideoProbeControl* self);
void QMediaVideoProbeControl_connect_Flush(QMediaVideoProbeControl* self, intptr_t slot);
struct miqt_string QMediaVideoProbeControl_Tr2(const char* s, const char* c);
struct miqt_string QMediaVideoProbeControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QMediaVideoProbeControl_TrUtf82(const char* s, const char* c);
struct miqt_string QMediaVideoProbeControl_TrUtf83(const char* s, const char* c, int n);
void QMediaVideoProbeControl_Delete(QMediaVideoProbeControl* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
