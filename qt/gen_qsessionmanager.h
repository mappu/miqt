#ifndef GEN_QSESSIONMANAGER_H
#define GEN_QSESSIONMANAGER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QSessionManager;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QSessionManager QSessionManager;
#endif

QMetaObject* QSessionManager_MetaObject(const QSessionManager* self);
void* QSessionManager_Metacast(QSessionManager* self, const char* param1);
struct miqt_string QSessionManager_Tr(const char* s);
struct miqt_string QSessionManager_TrUtf8(const char* s);
struct miqt_string QSessionManager_SessionId(const QSessionManager* self);
struct miqt_string QSessionManager_SessionKey(const QSessionManager* self);
bool QSessionManager_AllowsInteraction(QSessionManager* self);
bool QSessionManager_AllowsErrorInteraction(QSessionManager* self);
void QSessionManager_Release(QSessionManager* self);
void QSessionManager_Cancel(QSessionManager* self);
void QSessionManager_SetRestartHint(QSessionManager* self, int restartHint);
int QSessionManager_RestartHint(const QSessionManager* self);
void QSessionManager_SetRestartCommand(QSessionManager* self, struct miqt_array* /* of struct miqt_string */ restartCommand);
struct miqt_array* QSessionManager_RestartCommand(const QSessionManager* self);
void QSessionManager_SetDiscardCommand(QSessionManager* self, struct miqt_array* /* of struct miqt_string */ discardCommand);
struct miqt_array* QSessionManager_DiscardCommand(const QSessionManager* self);
void QSessionManager_SetManagerProperty(QSessionManager* self, struct miqt_string name, struct miqt_string value);
void QSessionManager_SetManagerProperty2(QSessionManager* self, struct miqt_string name, struct miqt_array* /* of struct miqt_string */ value);
bool QSessionManager_IsPhase2(const QSessionManager* self);
void QSessionManager_RequestPhase2(QSessionManager* self);
struct miqt_string QSessionManager_Tr2(const char* s, const char* c);
struct miqt_string QSessionManager_Tr3(const char* s, const char* c, int n);
struct miqt_string QSessionManager_TrUtf82(const char* s, const char* c);
struct miqt_string QSessionManager_TrUtf83(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
