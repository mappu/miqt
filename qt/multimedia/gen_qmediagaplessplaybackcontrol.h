#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QMEDIAGAPLESSPLAYBACKCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QMEDIAGAPLESSPLAYBACKCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaContent;
class QMediaControl;
class QMediaGaplessPlaybackControl;
class QMetaObject;
class QObject;
#else
typedef struct QMediaContent QMediaContent;
typedef struct QMediaControl QMediaControl;
typedef struct QMediaGaplessPlaybackControl QMediaGaplessPlaybackControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QMediaGaplessPlaybackControl_virtbase(QMediaGaplessPlaybackControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QMediaGaplessPlaybackControl_metaObject(const QMediaGaplessPlaybackControl* self);
void* QMediaGaplessPlaybackControl_metacast(QMediaGaplessPlaybackControl* self, const char* param1);
struct miqt_string QMediaGaplessPlaybackControl_tr(const char* s);
struct miqt_string QMediaGaplessPlaybackControl_trUtf8(const char* s);
QMediaContent* QMediaGaplessPlaybackControl_nextMedia(const QMediaGaplessPlaybackControl* self);
void QMediaGaplessPlaybackControl_setNextMedia(QMediaGaplessPlaybackControl* self, QMediaContent* media);
bool QMediaGaplessPlaybackControl_isCrossfadeSupported(const QMediaGaplessPlaybackControl* self);
double QMediaGaplessPlaybackControl_crossfadeTime(const QMediaGaplessPlaybackControl* self);
void QMediaGaplessPlaybackControl_setCrossfadeTime(QMediaGaplessPlaybackControl* self, double crossfadeTime);
void QMediaGaplessPlaybackControl_crossfadeTimeChanged(QMediaGaplessPlaybackControl* self, double crossfadeTime);
void QMediaGaplessPlaybackControl_connect_crossfadeTimeChanged(QMediaGaplessPlaybackControl* self, intptr_t slot);
void QMediaGaplessPlaybackControl_nextMediaChanged(QMediaGaplessPlaybackControl* self, QMediaContent* media);
void QMediaGaplessPlaybackControl_connect_nextMediaChanged(QMediaGaplessPlaybackControl* self, intptr_t slot);
void QMediaGaplessPlaybackControl_advancedToNextMedia(QMediaGaplessPlaybackControl* self);
void QMediaGaplessPlaybackControl_connect_advancedToNextMedia(QMediaGaplessPlaybackControl* self, intptr_t slot);
struct miqt_string QMediaGaplessPlaybackControl_tr2(const char* s, const char* c);
struct miqt_string QMediaGaplessPlaybackControl_tr3(const char* s, const char* c, int n);
struct miqt_string QMediaGaplessPlaybackControl_trUtf82(const char* s, const char* c);
struct miqt_string QMediaGaplessPlaybackControl_trUtf83(const char* s, const char* c, int n);
void QMediaGaplessPlaybackControl_delete(QMediaGaplessPlaybackControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
