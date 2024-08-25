#ifndef GEN_QIODEVICE_H
#define GEN_QIODEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QIODevice;
class QMetaObject;
#else
typedef struct QByteArray QByteArray;
typedef struct QIODevice QIODevice;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QIODevice_MetaObject(QIODevice* self);
void QIODevice_Tr(char* s, char** _out, int* _out_Strlen);
void QIODevice_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QIODevice_SetTextModeEnabled(QIODevice* self, bool enabled);
bool QIODevice_IsTextModeEnabled(QIODevice* self);
bool QIODevice_IsOpen(QIODevice* self);
bool QIODevice_IsReadable(QIODevice* self);
bool QIODevice_IsWritable(QIODevice* self);
bool QIODevice_IsSequential(QIODevice* self);
int QIODevice_ReadChannelCount(QIODevice* self);
int QIODevice_WriteChannelCount(QIODevice* self);
int QIODevice_CurrentReadChannel(QIODevice* self);
void QIODevice_SetCurrentReadChannel(QIODevice* self, int channel);
int QIODevice_CurrentWriteChannel(QIODevice* self);
void QIODevice_SetCurrentWriteChannel(QIODevice* self, int channel);
void QIODevice_Close(QIODevice* self);
int64_t QIODevice_Pos(QIODevice* self);
int64_t QIODevice_Size(QIODevice* self);
bool QIODevice_Seek(QIODevice* self, int64_t pos);
bool QIODevice_AtEnd(QIODevice* self);
bool QIODevice_Reset(QIODevice* self);
int64_t QIODevice_BytesAvailable(QIODevice* self);
int64_t QIODevice_BytesToWrite(QIODevice* self);
int64_t QIODevice_Read(QIODevice* self, char* data, int64_t maxlen);
QByteArray* QIODevice_ReadWithMaxlen(QIODevice* self, int64_t maxlen);
QByteArray* QIODevice_ReadAll(QIODevice* self);
int64_t QIODevice_ReadLine(QIODevice* self, char* data, int64_t maxlen);
QByteArray* QIODevice_ReadLine2(QIODevice* self);
bool QIODevice_CanReadLine(QIODevice* self);
void QIODevice_StartTransaction(QIODevice* self);
void QIODevice_CommitTransaction(QIODevice* self);
void QIODevice_RollbackTransaction(QIODevice* self);
bool QIODevice_IsTransactionStarted(QIODevice* self);
int64_t QIODevice_Write(QIODevice* self, char* data, int64_t lenVal);
int64_t QIODevice_WriteWithData(QIODevice* self, char* data);
int64_t QIODevice_Write2(QIODevice* self, QByteArray* data);
int64_t QIODevice_Peek(QIODevice* self, char* data, int64_t maxlen);
QByteArray* QIODevice_PeekWithMaxlen(QIODevice* self, int64_t maxlen);
int64_t QIODevice_Skip(QIODevice* self, int64_t maxSize);
bool QIODevice_WaitForReadyRead(QIODevice* self, int msecs);
bool QIODevice_WaitForBytesWritten(QIODevice* self, int msecs);
void QIODevice_UngetChar(QIODevice* self, char c);
bool QIODevice_PutChar(QIODevice* self, char c);
bool QIODevice_GetChar(QIODevice* self, char* c);
void QIODevice_ErrorString(QIODevice* self, char** _out, int* _out_Strlen);
void QIODevice_ReadyRead(QIODevice* self);
void QIODevice_connect_ReadyRead(QIODevice* self, void* slot);
void QIODevice_ChannelReadyRead(QIODevice* self, int channel);
void QIODevice_connect_ChannelReadyRead(QIODevice* self, void* slot);
void QIODevice_BytesWritten(QIODevice* self, int64_t bytes);
void QIODevice_connect_BytesWritten(QIODevice* self, void* slot);
void QIODevice_ChannelBytesWritten(QIODevice* self, int channel, int64_t bytes);
void QIODevice_connect_ChannelBytesWritten(QIODevice* self, void* slot);
void QIODevice_AboutToClose(QIODevice* self);
void QIODevice_connect_AboutToClose(QIODevice* self, void* slot);
void QIODevice_ReadChannelFinished(QIODevice* self);
void QIODevice_connect_ReadChannelFinished(QIODevice* self, void* slot);
void QIODevice_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QIODevice_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QIODevice_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QIODevice_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
QByteArray* QIODevice_ReadLine1(QIODevice* self, int64_t maxlen);
void QIODevice_Delete(QIODevice* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
