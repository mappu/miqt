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
void QIODevice_Tr(const char* s, char** _out, int* _out_Strlen);
void QIODevice_TrUtf8(const char* s, char** _out, int* _out_Strlen);
int QIODevice_OpenMode(QIODevice* self);
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
bool QIODevice_Open(QIODevice* self, int mode);
void QIODevice_Close(QIODevice* self);
long long QIODevice_Pos(QIODevice* self);
long long QIODevice_Size(QIODevice* self);
bool QIODevice_Seek(QIODevice* self, long long pos);
bool QIODevice_AtEnd(QIODevice* self);
bool QIODevice_Reset(QIODevice* self);
long long QIODevice_BytesAvailable(QIODevice* self);
long long QIODevice_BytesToWrite(QIODevice* self);
long long QIODevice_Read(QIODevice* self, char* data, long long maxlen);
QByteArray* QIODevice_ReadWithMaxlen(QIODevice* self, long long maxlen);
QByteArray* QIODevice_ReadAll(QIODevice* self);
long long QIODevice_ReadLine(QIODevice* self, char* data, long long maxlen);
QByteArray* QIODevice_ReadLine2(QIODevice* self);
bool QIODevice_CanReadLine(QIODevice* self);
void QIODevice_StartTransaction(QIODevice* self);
void QIODevice_CommitTransaction(QIODevice* self);
void QIODevice_RollbackTransaction(QIODevice* self);
bool QIODevice_IsTransactionStarted(QIODevice* self);
long long QIODevice_Write(QIODevice* self, const char* data, long long lenVal);
long long QIODevice_WriteWithData(QIODevice* self, const char* data);
long long QIODevice_Write2(QIODevice* self, QByteArray* data);
long long QIODevice_Peek(QIODevice* self, char* data, long long maxlen);
QByteArray* QIODevice_PeekWithMaxlen(QIODevice* self, long long maxlen);
long long QIODevice_Skip(QIODevice* self, long long maxSize);
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
void QIODevice_BytesWritten(QIODevice* self, long long bytes);
void QIODevice_connect_BytesWritten(QIODevice* self, void* slot);
void QIODevice_ChannelBytesWritten(QIODevice* self, int channel, long long bytes);
void QIODevice_connect_ChannelBytesWritten(QIODevice* self, void* slot);
void QIODevice_AboutToClose(QIODevice* self);
void QIODevice_connect_AboutToClose(QIODevice* self, void* slot);
void QIODevice_ReadChannelFinished(QIODevice* self);
void QIODevice_connect_ReadChannelFinished(QIODevice* self, void* slot);
void QIODevice_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QIODevice_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QIODevice_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QIODevice_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
QByteArray* QIODevice_ReadLine1(QIODevice* self, long long maxlen);
void QIODevice_Delete(QIODevice* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
