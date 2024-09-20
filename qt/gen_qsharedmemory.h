#ifndef GEN_QSHAREDMEMORY_H
#define GEN_QSHAREDMEMORY_H

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
class QSharedMemory;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSharedMemory QSharedMemory;
#endif

QSharedMemory* QSharedMemory_new();
QSharedMemory* QSharedMemory_new2(struct miqt_string* key);
QSharedMemory* QSharedMemory_new3(QObject* parent);
QSharedMemory* QSharedMemory_new4(struct miqt_string* key, QObject* parent);
QMetaObject* QSharedMemory_MetaObject(const QSharedMemory* self);
void* QSharedMemory_Metacast(QSharedMemory* self, const char* param1);
struct miqt_string* QSharedMemory_Tr(const char* s);
struct miqt_string* QSharedMemory_TrUtf8(const char* s);
void QSharedMemory_SetKey(QSharedMemory* self, struct miqt_string* key);
struct miqt_string* QSharedMemory_Key(const QSharedMemory* self);
void QSharedMemory_SetNativeKey(QSharedMemory* self, struct miqt_string* key);
struct miqt_string* QSharedMemory_NativeKey(const QSharedMemory* self);
bool QSharedMemory_Create(QSharedMemory* self, int size);
int QSharedMemory_Size(const QSharedMemory* self);
bool QSharedMemory_Attach(QSharedMemory* self);
bool QSharedMemory_IsAttached(const QSharedMemory* self);
bool QSharedMemory_Detach(QSharedMemory* self);
void* QSharedMemory_Data(QSharedMemory* self);
const void* QSharedMemory_ConstData(const QSharedMemory* self);
const void* QSharedMemory_Data2(const QSharedMemory* self);
bool QSharedMemory_Lock(QSharedMemory* self);
bool QSharedMemory_Unlock(QSharedMemory* self);
int QSharedMemory_Error(const QSharedMemory* self);
struct miqt_string* QSharedMemory_ErrorString(const QSharedMemory* self);
struct miqt_string* QSharedMemory_Tr2(const char* s, const char* c);
struct miqt_string* QSharedMemory_Tr3(const char* s, const char* c, int n);
struct miqt_string* QSharedMemory_TrUtf82(const char* s, const char* c);
struct miqt_string* QSharedMemory_TrUtf83(const char* s, const char* c, int n);
bool QSharedMemory_Create2(QSharedMemory* self, int size, int mode);
bool QSharedMemory_Attach1(QSharedMemory* self, int mode);
void QSharedMemory_Delete(QSharedMemory* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
