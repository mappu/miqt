#ifndef GEN_QBUFFER_H
#define GEN_QBUFFER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBuffer;
class QByteArray;
class QMetaObject;
class QObject;
#else
typedef struct QBuffer QBuffer;
typedef struct QByteArray QByteArray;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QBuffer* QBuffer_new();
QBuffer* QBuffer_new2(QByteArray* buf);
QBuffer* QBuffer_new3(QObject* parent);
QBuffer* QBuffer_new4(QByteArray* buf, QObject* parent);
QMetaObject* QBuffer_MetaObject(QBuffer* self);
void QBuffer_Tr(char* s, char** _out, int* _out_Strlen);
void QBuffer_TrUtf8(char* s, char** _out, int* _out_Strlen);
QByteArray* QBuffer_Buffer(QBuffer* self);
QByteArray* QBuffer_Buffer2(QBuffer* self);
void QBuffer_SetBuffer(QBuffer* self, QByteArray* a);
void QBuffer_SetData(QBuffer* self, QByteArray* data);
void QBuffer_SetData2(QBuffer* self, char* data, int lenVal);
QByteArray* QBuffer_Data(QBuffer* self);
void QBuffer_Close(QBuffer* self);
int64_t QBuffer_Size(QBuffer* self);
int64_t QBuffer_Pos(QBuffer* self);
bool QBuffer_Seek(QBuffer* self, int64_t off);
bool QBuffer_AtEnd(QBuffer* self);
bool QBuffer_CanReadLine(QBuffer* self);
void QBuffer_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QBuffer_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QBuffer_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QBuffer_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QBuffer_Delete(QBuffer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
