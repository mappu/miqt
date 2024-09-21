#ifndef GEN_QOBJECTCLEANUPHANDLER_H
#define GEN_QOBJECTCLEANUPHANDLER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
QMetaObject* QObjectCleanupHandler_MetaObject(const QObjectCleanupHandler* self);
void* QObjectCleanupHandler_Metacast(QObjectCleanupHandler* self, const char* param1);
struct miqt_string* QObjectCleanupHandler_Tr(const char* s);
struct miqt_string* QObjectCleanupHandler_TrUtf8(const char* s);
QObject* QObjectCleanupHandler_Add(QObjectCleanupHandler* self, QObject* object);
void QObjectCleanupHandler_Remove(QObjectCleanupHandler* self, QObject* object);
bool QObjectCleanupHandler_IsEmpty(const QObjectCleanupHandler* self);
void QObjectCleanupHandler_Clear(QObjectCleanupHandler* self);
struct miqt_string* QObjectCleanupHandler_Tr2(const char* s, const char* c);
struct miqt_string* QObjectCleanupHandler_Tr3(const char* s, const char* c, int n);
struct miqt_string* QObjectCleanupHandler_TrUtf82(const char* s, const char* c);
struct miqt_string* QObjectCleanupHandler_TrUtf83(const char* s, const char* c, int n);
void QObjectCleanupHandler_Delete(QObjectCleanupHandler* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
