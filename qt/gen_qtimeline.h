#ifndef GEN_QTIMELINE_H
#define GEN_QTIMELINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QMetaObject* QTimeLine_MetaObject(QTimeLine* self);
void QTimeLine_Tr(const char* s, char** _out, int* _out_Strlen);
void QTimeLine_TrUtf8(const char* s, char** _out, int* _out_Strlen);
uintptr_t QTimeLine_State(QTimeLine* self);
int QTimeLine_LoopCount(QTimeLine* self);
void QTimeLine_SetLoopCount(QTimeLine* self, int count);
uintptr_t QTimeLine_Direction(QTimeLine* self);
void QTimeLine_SetDirection(QTimeLine* self, uintptr_t direction);
int QTimeLine_Duration(QTimeLine* self);
void QTimeLine_SetDuration(QTimeLine* self, int duration);
int QTimeLine_StartFrame(QTimeLine* self);
void QTimeLine_SetStartFrame(QTimeLine* self, int frame);
int QTimeLine_EndFrame(QTimeLine* self);
void QTimeLine_SetEndFrame(QTimeLine* self, int frame);
void QTimeLine_SetFrameRange(QTimeLine* self, int startFrame, int endFrame);
int QTimeLine_UpdateInterval(QTimeLine* self);
void QTimeLine_SetUpdateInterval(QTimeLine* self, int interval);
uintptr_t QTimeLine_CurveShape(QTimeLine* self);
void QTimeLine_SetCurveShape(QTimeLine* self, uintptr_t shape);
QEasingCurve* QTimeLine_EasingCurve(QTimeLine* self);
void QTimeLine_SetEasingCurve(QTimeLine* self, QEasingCurve* curve);
int QTimeLine_CurrentTime(QTimeLine* self);
int QTimeLine_CurrentFrame(QTimeLine* self);
double QTimeLine_CurrentValue(QTimeLine* self);
int QTimeLine_FrameForTime(QTimeLine* self, int msec);
double QTimeLine_ValueForTime(QTimeLine* self, int msec);
void QTimeLine_Start(QTimeLine* self);
void QTimeLine_Resume(QTimeLine* self);
void QTimeLine_Stop(QTimeLine* self);
void QTimeLine_SetPaused(QTimeLine* self, bool paused);
void QTimeLine_SetCurrentTime(QTimeLine* self, int msec);
void QTimeLine_ToggleDirection(QTimeLine* self);
void QTimeLine_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTimeLine_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTimeLine_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QTimeLine_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QTimeLine_Delete(QTimeLine* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
