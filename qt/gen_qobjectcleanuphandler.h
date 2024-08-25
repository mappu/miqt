#ifndef GEN_QOBJECTCLEANUPHANDLER_H
#define GEN_QOBJECTCLEANUPHANDLER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QObjectCleanupHandler;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QObjectCleanupHandler QObjectCleanupHandler;
#endif

QObjectCleanupHandler* QObjectCleanupHandler_new();
QMetaObject* QObjectCleanupHandler_MetaObject(QObjectCleanupHandler* self);
void QObjectCleanupHandler_Tr(char* s, char** _out, int* _out_Strlen);
void QObjectCleanupHandler_TrUtf8(char* s, char** _out, int* _out_Strlen);
QObject* QObjectCleanupHandler_Add(QObjectCleanupHandler* self, QObject* object);
void QObjectCleanupHandler_Remove(QObjectCleanupHandler* self, QObject* object);
bool QObjectCleanupHandler_IsEmpty(QObjectCleanupHandler* self);
void QObjectCleanupHandler_Clear(QObjectCleanupHandler* self);
void QObjectCleanupHandler_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QObjectCleanupHandler_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QObjectCleanupHandler_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QObjectCleanupHandler_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QObjectCleanupHandler_Delete(QObjectCleanupHandler* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
