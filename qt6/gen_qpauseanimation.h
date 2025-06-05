#pragma once
#ifndef MIQT_QT6_GEN_QPAUSEANIMATION_H
#define MIQT_QT6_GEN_QPAUSEANIMATION_H

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
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPauseAnimation;
class QTimerEvent;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPauseAnimation QPauseAnimation;
typedef struct QTimerEvent QTimerEvent;
#endif

QPauseAnimation* QPauseAnimation_new();
QPauseAnimation* QPauseAnimation_new2(int msecs);
QPauseAnimation* QPauseAnimation_new3(QObject* parent);
QPauseAnimation* QPauseAnimation_new4(int msecs, QObject* parent);
void QPauseAnimation_virtbase(QPauseAnimation* src, QAbstractAnimation** outptr_QAbstractAnimation);
QMetaObject* QPauseAnimation_metaObject(const QPauseAnimation* self);
void* QPauseAnimation_metacast(QPauseAnimation* self, const char* param1);
struct miqt_string QPauseAnimation_tr(const char* s);
int QPauseAnimation_duration(const QPauseAnimation* self);
void QPauseAnimation_setDuration(QPauseAnimation* self, int msecs);
bool QPauseAnimation_event(QPauseAnimation* self, QEvent* e);
void QPauseAnimation_updateCurrentTime(QPauseAnimation* self, int param1);
struct miqt_string QPauseAnimation_tr2(const char* s, const char* c);
struct miqt_string QPauseAnimation_tr3(const char* s, const char* c, int n);

bool QPauseAnimation_override_virtual_duration(void* self, intptr_t slot);
int QPauseAnimation_virtualbase_duration(const void* self);
bool QPauseAnimation_override_virtual_event(void* self, intptr_t slot);
bool QPauseAnimation_virtualbase_event(void* self, QEvent* e);
bool QPauseAnimation_override_virtual_updateCurrentTime(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_updateCurrentTime(void* self, int param1);
bool QPauseAnimation_override_virtual_updateState(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_updateState(void* self, int newState, int oldState);
bool QPauseAnimation_override_virtual_updateDirection(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_updateDirection(void* self, int direction);
bool QPauseAnimation_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPauseAnimation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPauseAnimation_override_virtual_timerEvent(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPauseAnimation_override_virtual_childEvent(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPauseAnimation_override_virtual_customEvent(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_customEvent(void* self, QEvent* event);
bool QPauseAnimation_override_virtual_connectNotify(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPauseAnimation_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPauseAnimation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QPauseAnimation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPauseAnimation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPauseAnimation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPauseAnimation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QPauseAnimation_delete(QPauseAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
