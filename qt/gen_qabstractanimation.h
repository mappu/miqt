#ifndef GEN_QABSTRACTANIMATION_H
#define GEN_QABSTRACTANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractAnimation;
class QAnimationDriver;
class QAnimationGroup;
class QMetaObject;
class QObject;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QAnimationDriver QAnimationDriver;
typedef struct QAnimationGroup QAnimationGroup;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QAbstractAnimation_MetaObject(QAbstractAnimation* self);
void QAbstractAnimation_Tr(const char* s, char** _out, int* _out_Strlen);
void QAbstractAnimation_TrUtf8(const char* s, char** _out, int* _out_Strlen);
uintptr_t QAbstractAnimation_State(QAbstractAnimation* self);
QAnimationGroup* QAbstractAnimation_Group(QAbstractAnimation* self);
uintptr_t QAbstractAnimation_Direction(QAbstractAnimation* self);
void QAbstractAnimation_SetDirection(QAbstractAnimation* self, uintptr_t direction);
int QAbstractAnimation_CurrentTime(QAbstractAnimation* self);
int QAbstractAnimation_CurrentLoopTime(QAbstractAnimation* self);
int QAbstractAnimation_LoopCount(QAbstractAnimation* self);
void QAbstractAnimation_SetLoopCount(QAbstractAnimation* self, int loopCount);
int QAbstractAnimation_CurrentLoop(QAbstractAnimation* self);
int QAbstractAnimation_Duration(QAbstractAnimation* self);
int QAbstractAnimation_TotalDuration(QAbstractAnimation* self);
void QAbstractAnimation_Finished(QAbstractAnimation* self);
void QAbstractAnimation_connect_Finished(QAbstractAnimation* self, void* slot);
void QAbstractAnimation_StateChanged(QAbstractAnimation* self, uintptr_t newState, uintptr_t oldState);
void QAbstractAnimation_connect_StateChanged(QAbstractAnimation* self, void* slot);
void QAbstractAnimation_CurrentLoopChanged(QAbstractAnimation* self, int currentLoop);
void QAbstractAnimation_connect_CurrentLoopChanged(QAbstractAnimation* self, void* slot);
void QAbstractAnimation_DirectionChanged(QAbstractAnimation* self, uintptr_t param1);
void QAbstractAnimation_connect_DirectionChanged(QAbstractAnimation* self, void* slot);
void QAbstractAnimation_Start(QAbstractAnimation* self);
void QAbstractAnimation_Pause(QAbstractAnimation* self);
void QAbstractAnimation_Resume(QAbstractAnimation* self);
void QAbstractAnimation_SetPaused(QAbstractAnimation* self, bool paused);
void QAbstractAnimation_Stop(QAbstractAnimation* self);
void QAbstractAnimation_SetCurrentTime(QAbstractAnimation* self, int msecs);
void QAbstractAnimation_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QAbstractAnimation_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QAbstractAnimation_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QAbstractAnimation_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QAbstractAnimation_Start1(QAbstractAnimation* self, uintptr_t policy);
void QAbstractAnimation_Delete(QAbstractAnimation* self);

QAnimationDriver* QAnimationDriver_new();
QAnimationDriver* QAnimationDriver_new2(QObject* parent);
QMetaObject* QAnimationDriver_MetaObject(QAnimationDriver* self);
void QAnimationDriver_Tr(const char* s, char** _out, int* _out_Strlen);
void QAnimationDriver_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QAnimationDriver_Advance(QAnimationDriver* self);
void QAnimationDriver_Install(QAnimationDriver* self);
void QAnimationDriver_Uninstall(QAnimationDriver* self);
bool QAnimationDriver_IsRunning(QAnimationDriver* self);
long long QAnimationDriver_Elapsed(QAnimationDriver* self);
void QAnimationDriver_SetStartTime(QAnimationDriver* self, long long startTime);
long long QAnimationDriver_StartTime(QAnimationDriver* self);
void QAnimationDriver_Started(QAnimationDriver* self);
void QAnimationDriver_connect_Started(QAnimationDriver* self, void* slot);
void QAnimationDriver_Stopped(QAnimationDriver* self);
void QAnimationDriver_connect_Stopped(QAnimationDriver* self, void* slot);
void QAnimationDriver_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QAnimationDriver_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QAnimationDriver_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QAnimationDriver_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QAnimationDriver_Delete(QAnimationDriver* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
