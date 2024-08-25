#ifndef GEN_QSHAREDMEMORY_H
#define GEN_QSHAREDMEMORY_H

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
class QSharedMemory;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSharedMemory QSharedMemory;
#endif

QSharedMemory* QSharedMemory_new();
QSharedMemory* QSharedMemory_new2(const char* key, size_t key_Strlen);
QSharedMemory* QSharedMemory_new3(QObject* parent);
QSharedMemory* QSharedMemory_new4(const char* key, size_t key_Strlen, QObject* parent);
QMetaObject* QSharedMemory_MetaObject(QSharedMemory* self);
void QSharedMemory_Tr(char* s, char** _out, int* _out_Strlen);
void QSharedMemory_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QSharedMemory_SetKey(QSharedMemory* self, const char* key, size_t key_Strlen);
void QSharedMemory_Key(QSharedMemory* self, char** _out, int* _out_Strlen);
void QSharedMemory_SetNativeKey(QSharedMemory* self, const char* key, size_t key_Strlen);
void QSharedMemory_NativeKey(QSharedMemory* self, char** _out, int* _out_Strlen);
int QSharedMemory_Size(QSharedMemory* self);
bool QSharedMemory_IsAttached(QSharedMemory* self);
bool QSharedMemory_Detach(QSharedMemory* self);
bool QSharedMemory_Lock(QSharedMemory* self);
bool QSharedMemory_Unlock(QSharedMemory* self);
void QSharedMemory_ErrorString(QSharedMemory* self, char** _out, int* _out_Strlen);
void QSharedMemory_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QSharedMemory_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSharedMemory_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QSharedMemory_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSharedMemory_Delete(QSharedMemory* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
