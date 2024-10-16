#ifndef GEN_QABSTRACTANIMATION_H
#define GEN_QABSTRACTANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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

QMetaObject* QAbstractAnimation_MetaObject(const QAbstractAnimation* self);
void* QAbstractAnimation_Metacast(QAbstractAnimation* self, const char* param1);
struct miqt_string* QAbstractAnimation_Tr(const char* s);
struct miqt_string* QAbstractAnimation_TrUtf8(const char* s);
int QAbstractAnimation_State(const QAbstractAnimation* self);
QAnimationGroup* QAbstractAnimation_Group(const QAbstractAnimation* self);
int QAbstractAnimation_Direction(const QAbstractAnimation* self);
void QAbstractAnimation_SetDirection(QAbstractAnimation* self, int direction);
int QAbstractAnimation_CurrentTime(const QAbstractAnimation* self);
int QAbstractAnimation_CurrentLoopTime(const QAbstractAnimation* self);
int QAbstractAnimation_LoopCount(const QAbstractAnimation* self);
void QAbstractAnimation_SetLoopCount(QAbstractAnimation* self, int loopCount);
int QAbstractAnimation_CurrentLoop(const QAbstractAnimation* self);
int QAbstractAnimation_Duration(const QAbstractAnimation* self);
int QAbstractAnimation_TotalDuration(const QAbstractAnimation* self);
void QAbstractAnimation_Finished(QAbstractAnimation* self);
void QAbstractAnimation_connect_Finished(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_StateChanged(QAbstractAnimation* self, int newState, int oldState);
void QAbstractAnimation_connect_StateChanged(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_CurrentLoopChanged(QAbstractAnimation* self, int currentLoop);
void QAbstractAnimation_connect_CurrentLoopChanged(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_DirectionChanged(QAbstractAnimation* self, int param1);
void QAbstractAnimation_connect_DirectionChanged(QAbstractAnimation* self, intptr_t slot);
void QAbstractAnimation_Start(QAbstractAnimation* self);
void QAbstractAnimation_Pause(QAbstractAnimation* self);
void QAbstractAnimation_Resume(QAbstractAnimation* self);
void QAbstractAnimation_SetPaused(QAbstractAnimation* self, bool paused);
void QAbstractAnimation_Stop(QAbstractAnimation* self);
void QAbstractAnimation_SetCurrentTime(QAbstractAnimation* self, int msecs);
struct miqt_string* QAbstractAnimation_Tr2(const char* s, const char* c);
struct miqt_string* QAbstractAnimation_Tr3(const char* s, const char* c, int n);
struct miqt_string* QAbstractAnimation_TrUtf82(const char* s, const char* c);
struct miqt_string* QAbstractAnimation_TrUtf83(const char* s, const char* c, int n);
void QAbstractAnimation_Start1(QAbstractAnimation* self, int policy);
void QAbstractAnimation_Delete(QAbstractAnimation* self);

QAnimationDriver* QAnimationDriver_new();
QAnimationDriver* QAnimationDriver_new2(QObject* parent);
QMetaObject* QAnimationDriver_MetaObject(const QAnimationDriver* self);
void* QAnimationDriver_Metacast(QAnimationDriver* self, const char* param1);
struct miqt_string* QAnimationDriver_Tr(const char* s);
struct miqt_string* QAnimationDriver_TrUtf8(const char* s);
void QAnimationDriver_Advance(QAnimationDriver* self);
void QAnimationDriver_Install(QAnimationDriver* self);
void QAnimationDriver_Uninstall(QAnimationDriver* self);
bool QAnimationDriver_IsRunning(const QAnimationDriver* self);
long long QAnimationDriver_Elapsed(const QAnimationDriver* self);
void QAnimationDriver_SetStartTime(QAnimationDriver* self, long long startTime);
long long QAnimationDriver_StartTime(const QAnimationDriver* self);
void QAnimationDriver_Started(QAnimationDriver* self);
void QAnimationDriver_connect_Started(QAnimationDriver* self, intptr_t slot);
void QAnimationDriver_Stopped(QAnimationDriver* self);
void QAnimationDriver_connect_Stopped(QAnimationDriver* self, intptr_t slot);
struct miqt_string* QAnimationDriver_Tr2(const char* s, const char* c);
struct miqt_string* QAnimationDriver_Tr3(const char* s, const char* c, int n);
struct miqt_string* QAnimationDriver_TrUtf82(const char* s, const char* c);
struct miqt_string* QAnimationDriver_TrUtf83(const char* s, const char* c, int n);
void QAnimationDriver_Delete(QAnimationDriver* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
