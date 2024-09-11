#ifndef GEN_QSESSIONMANAGER_H
#define GEN_QSESSIONMANAGER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
void QSessionManager_Tr(const char* s, char** _out, int* _out_Strlen);
void QSessionManager_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QSessionManager_SessionId(const QSessionManager* self, char** _out, int* _out_Strlen);
void QSessionManager_SessionKey(const QSessionManager* self, char** _out, int* _out_Strlen);
bool QSessionManager_AllowsInteraction(QSessionManager* self);
bool QSessionManager_AllowsErrorInteraction(QSessionManager* self);
void QSessionManager_Release(QSessionManager* self);
void QSessionManager_Cancel(QSessionManager* self);
void QSessionManager_SetRestartHint(QSessionManager* self, uintptr_t restartHint);
uintptr_t QSessionManager_RestartHint(const QSessionManager* self);
void QSessionManager_SetRestartCommand(QSessionManager* self, char** restartCommand, uint64_t* restartCommand_Lengths, size_t restartCommand_len);
void QSessionManager_RestartCommand(const QSessionManager* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QSessionManager_SetDiscardCommand(QSessionManager* self, char** discardCommand, uint64_t* discardCommand_Lengths, size_t discardCommand_len);
void QSessionManager_DiscardCommand(const QSessionManager* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QSessionManager_SetManagerProperty(QSessionManager* self, const char* name, size_t name_Strlen, const char* value, size_t value_Strlen);
void QSessionManager_SetManagerProperty2(QSessionManager* self, const char* name, size_t name_Strlen, char** value, uint64_t* value_Lengths, size_t value_len);
bool QSessionManager_IsPhase2(const QSessionManager* self);
void QSessionManager_RequestPhase2(QSessionManager* self);
void QSessionManager_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QSessionManager_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QSessionManager_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QSessionManager_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
