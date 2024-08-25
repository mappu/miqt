#ifndef GEN_QFILEDEVICE_H
#define GEN_QFILEDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFileDevice;
class QMetaObject;
#else
typedef struct QFileDevice QFileDevice;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QFileDevice_MetaObject(QFileDevice* self);
void QFileDevice_Tr(char* s, char** _out, int* _out_Strlen);
void QFileDevice_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QFileDevice_UnsetError(QFileDevice* self);
void QFileDevice_Close(QFileDevice* self);
bool QFileDevice_IsSequential(QFileDevice* self);
int QFileDevice_Handle(QFileDevice* self);
void QFileDevice_FileName(QFileDevice* self, char** _out, int* _out_Strlen);
int64_t QFileDevice_Pos(QFileDevice* self);
bool QFileDevice_Seek(QFileDevice* self, int64_t offset);
bool QFileDevice_AtEnd(QFileDevice* self);
bool QFileDevice_Flush(QFileDevice* self);
int64_t QFileDevice_Size(QFileDevice* self);
bool QFileDevice_Resize(QFileDevice* self, int64_t sz);
bool QFileDevice_Unmap(QFileDevice* self, unsigned char* address);
void QFileDevice_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QFileDevice_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QFileDevice_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QFileDevice_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QFileDevice_Delete(QFileDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
