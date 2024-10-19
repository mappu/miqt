#ifndef GEN_QTIMELINE_H
#define GEN_QTIMELINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEasingCurve;
class QMetaObject;
class QObject;
class QTimeLine;
#else
typedef struct QEasingCurve QEasingCurve;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimeLine QTimeLine;
#endif

QTimeLine* QTimeLine_new();
QTimeLine* QTimeLine_new2(int duration);
QTimeLine* QTimeLine_new3(int duration, QObject* parent);
QMetaObject* QTimeLine_MetaObject(const QTimeLine* self);
void* QTimeLine_Metacast(QTimeLine* self, const char* param1);
struct miqt_string QTimeLine_Tr(const char* s);
struct miqt_string QTimeLine_TrUtf8(const char* s);
int QTimeLine_State(const QTimeLine* self);
int QTimeLine_LoopCount(const QTimeLine* self);
void QTimeLine_SetLoopCount(QTimeLine* self, int count);
int QTimeLine_Direction(const QTimeLine* self);
void QTimeLine_SetDirection(QTimeLine* self, int direction);
int QTimeLine_Duration(const QTimeLine* self);
void QTimeLine_SetDuration(QTimeLine* self, int duration);
int QTimeLine_StartFrame(const QTimeLine* self);
void QTimeLine_SetStartFrame(QTimeLine* self, int frame);
int QTimeLine_EndFrame(const QTimeLine* self);
void QTimeLine_SetEndFrame(QTimeLine* self, int frame);
void QTimeLine_SetFrameRange(QTimeLine* self, int startFrame, int endFrame);
int QTimeLine_UpdateInterval(const QTimeLine* self);
void QTimeLine_SetUpdateInterval(QTimeLine* self, int interval);
int QTimeLine_CurveShape(const QTimeLine* self);
void QTimeLine_SetCurveShape(QTimeLine* self, int shape);
QEasingCurve* QTimeLine_EasingCurve(const QTimeLine* self);
void QTimeLine_SetEasingCurve(QTimeLine* self, QEasingCurve* curve);
int QTimeLine_CurrentTime(const QTimeLine* self);
int QTimeLine_CurrentFrame(const QTimeLine* self);
double QTimeLine_CurrentValue(const QTimeLine* self);
int QTimeLine_FrameForTime(const QTimeLine* self, int msec);
double QTimeLine_ValueForTime(const QTimeLine* self, int msec);
void QTimeLine_Start(QTimeLine* self);
void QTimeLine_Resume(QTimeLine* self);
void QTimeLine_Stop(QTimeLine* self);
void QTimeLine_SetPaused(QTimeLine* self, bool paused);
void QTimeLine_SetCurrentTime(QTimeLine* self, int msec);
void QTimeLine_ToggleDirection(QTimeLine* self);
struct miqt_string QTimeLine_Tr2(const char* s, const char* c);
struct miqt_string QTimeLine_Tr3(const char* s, const char* c, int n);
struct miqt_string QTimeLine_TrUtf82(const char* s, const char* c);
struct miqt_string QTimeLine_TrUtf83(const char* s, const char* c, int n);
void QTimeLine_Delete(QTimeLine* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
