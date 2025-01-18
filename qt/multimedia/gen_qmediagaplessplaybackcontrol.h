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
QMetaObject* QMediaGaplessPlaybackControl_MetaObject(const QMediaGaplessPlaybackControl* self);
void* QMediaGaplessPlaybackControl_Metacast(QMediaGaplessPlaybackControl* self, const char* param1);
struct miqt_string QMediaGaplessPlaybackControl_Tr(const char* s);
struct miqt_string QMediaGaplessPlaybackControl_TrUtf8(const char* s);
QMediaContent* QMediaGaplessPlaybackControl_NextMedia(const QMediaGaplessPlaybackControl* self);
void QMediaGaplessPlaybackControl_SetNextMedia(QMediaGaplessPlaybackControl* self, QMediaContent* media);
bool QMediaGaplessPlaybackControl_IsCrossfadeSupported(const QMediaGaplessPlaybackControl* self);
double QMediaGaplessPlaybackControl_CrossfadeTime(const QMediaGaplessPlaybackControl* self);
void QMediaGaplessPlaybackControl_SetCrossfadeTime(QMediaGaplessPlaybackControl* self, double crossfadeTime);
void QMediaGaplessPlaybackControl_CrossfadeTimeChanged(QMediaGaplessPlaybackControl* self, double crossfadeTime);
void QMediaGaplessPlaybackControl_connect_CrossfadeTimeChanged(QMediaGaplessPlaybackControl* self, intptr_t slot);
void QMediaGaplessPlaybackControl_NextMediaChanged(QMediaGaplessPlaybackControl* self, QMediaContent* media);
void QMediaGaplessPlaybackControl_connect_NextMediaChanged(QMediaGaplessPlaybackControl* self, intptr_t slot);
void QMediaGaplessPlaybackControl_AdvancedToNextMedia(QMediaGaplessPlaybackControl* self);
void QMediaGaplessPlaybackControl_connect_AdvancedToNextMedia(QMediaGaplessPlaybackControl* self, intptr_t slot);
struct miqt_string QMediaGaplessPlaybackControl_Tr2(const char* s, const char* c);
struct miqt_string QMediaGaplessPlaybackControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QMediaGaplessPlaybackControl_TrUtf82(const char* s, const char* c);
struct miqt_string QMediaGaplessPlaybackControl_TrUtf83(const char* s, const char* c, int n);
void QMediaGaplessPlaybackControl_Delete(QMediaGaplessPlaybackControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
