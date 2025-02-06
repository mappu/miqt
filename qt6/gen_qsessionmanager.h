#pragma once
#ifndef MIQT_QT6_GEN_QSESSIONMANAGER_H
#define MIQT_QT6_GEN_QSESSIONMANAGER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaMethod;
class QMetaObject;
class QObject;
class QSessionManager;
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSessionManager QSessionManager;
#endif

void QSessionManager_virtbase(QSessionManager* src, QObject** outptr_QObject);
QMetaObject* QSessionManager_metaObject(const QSessionManager* self);
void* QSessionManager_metacast(QSessionManager* self, const char* param1);
struct miqt_string QSessionManager_tr(const char* s);
struct miqt_string QSessionManager_sessionId(const QSessionManager* self);
struct miqt_string QSessionManager_sessionKey(const QSessionManager* self);
bool QSessionManager_allowsInteraction(QSessionManager* self);
bool QSessionManager_allowsErrorInteraction(QSessionManager* self);
void QSessionManager_release(QSessionManager* self);
void QSessionManager_cancel(QSessionManager* self);
void QSessionManager_setRestartHint(QSessionManager* self, int restartHint);
int QSessionManager_restartHint(const QSessionManager* self);
void QSessionManager_setRestartCommand(QSessionManager* self, struct miqt_array /* of struct miqt_string */  restartCommand);
struct miqt_array /* of struct miqt_string */  QSessionManager_restartCommand(const QSessionManager* self);
void QSessionManager_setDiscardCommand(QSessionManager* self, struct miqt_array /* of struct miqt_string */  discardCommand);
struct miqt_array /* of struct miqt_string */  QSessionManager_discardCommand(const QSessionManager* self);
void QSessionManager_setManagerProperty(QSessionManager* self, struct miqt_string name, struct miqt_string value);
void QSessionManager_setManagerProperty2(QSessionManager* self, struct miqt_string name, struct miqt_array /* of struct miqt_string */  value);
bool QSessionManager_isPhase2(const QSessionManager* self);
void QSessionManager_requestPhase2(QSessionManager* self);
struct miqt_string QSessionManager_tr2(const char* s, const char* c);
struct miqt_string QSessionManager_tr3(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
