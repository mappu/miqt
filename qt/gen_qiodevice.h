#pragma once
#ifndef MIQT_QT_GEN_QIODEVICE_H
#define MIQT_QT_GEN_QIODEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QIODevice;
class QMetaObject;
class QObject;
#else
typedef struct QByteArray QByteArray;
typedef struct QIODevice QIODevice;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMetaObject* QIODevice_MetaObject(const QIODevice* self);
void* QIODevice_Metacast(QIODevice* self, const char* param1);
struct miqt_string QIODevice_Tr(const char* s);
struct miqt_string QIODevice_TrUtf8(const char* s);
int QIODevice_OpenMode(const QIODevice* self);
void QIODevice_SetTextModeEnabled(QIODevice* self, bool enabled);
bool QIODevice_IsTextModeEnabled(const QIODevice* self);
bool QIODevice_IsOpen(const QIODevice* self);
bool QIODevice_IsReadable(const QIODevice* self);
bool QIODevice_IsWritable(const QIODevice* self);
bool QIODevice_IsSequential(const QIODevice* self);
int QIODevice_ReadChannelCount(const QIODevice* self);
int QIODevice_WriteChannelCount(const QIODevice* self);
int QIODevice_CurrentReadChannel(const QIODevice* self);
void QIODevice_SetCurrentReadChannel(QIODevice* self, int channel);
int QIODevice_CurrentWriteChannel(const QIODevice* self);
void QIODevice_SetCurrentWriteChannel(QIODevice* self, int channel);
bool QIODevice_Open(QIODevice* self, int mode);
void QIODevice_Close(QIODevice* self);
long long QIODevice_Pos(const QIODevice* self);
long long QIODevice_Size(const QIODevice* self);
bool QIODevice_Seek(QIODevice* self, long long pos);
bool QIODevice_AtEnd(const QIODevice* self);
bool QIODevice_Reset(QIODevice* self);
long long QIODevice_BytesAvailable(const QIODevice* self);
long long QIODevice_BytesToWrite(const QIODevice* self);
long long QIODevice_Read(QIODevice* self, char* data, long long maxlen);
struct miqt_string QIODevice_ReadWithMaxlen(QIODevice* self, long long maxlen);
struct miqt_string QIODevice_ReadAll(QIODevice* self);
long long QIODevice_ReadLine(QIODevice* self, char* data, long long maxlen);
struct miqt_string QIODevice_ReadLine2(QIODevice* self);
bool QIODevice_CanReadLine(const QIODevice* self);
void QIODevice_StartTransaction(QIODevice* self);
void QIODevice_CommitTransaction(QIODevice* self);
void QIODevice_RollbackTransaction(QIODevice* self);
bool QIODevice_IsTransactionStarted(const QIODevice* self);
long long QIODevice_Write(QIODevice* self, const char* data, long long lenVal);
long long QIODevice_WriteWithData(QIODevice* self, const char* data);
long long QIODevice_Write2(QIODevice* self, struct miqt_string data);
long long QIODevice_Peek(QIODevice* self, char* data, long long maxlen);
struct miqt_string QIODevice_PeekWithMaxlen(QIODevice* self, long long maxlen);
long long QIODevice_Skip(QIODevice* self, long long maxSize);
bool QIODevice_WaitForReadyRead(QIODevice* self, int msecs);
bool QIODevice_WaitForBytesWritten(QIODevice* self, int msecs);
void QIODevice_UngetChar(QIODevice* self, char c);
bool QIODevice_PutChar(QIODevice* self, char c);
bool QIODevice_GetChar(QIODevice* self, char* c);
struct miqt_string QIODevice_ErrorString(const QIODevice* self);
void QIODevice_ReadyRead(QIODevice* self);
void QIODevice_connect_ReadyRead(QIODevice* self, intptr_t slot);
void QIODevice_ChannelReadyRead(QIODevice* self, int channel);
void QIODevice_connect_ChannelReadyRead(QIODevice* self, intptr_t slot);
void QIODevice_BytesWritten(QIODevice* self, long long bytes);
void QIODevice_connect_BytesWritten(QIODevice* self, intptr_t slot);
void QIODevice_ChannelBytesWritten(QIODevice* self, int channel, long long bytes);
void QIODevice_connect_ChannelBytesWritten(QIODevice* self, intptr_t slot);
void QIODevice_AboutToClose(QIODevice* self);
void QIODevice_connect_AboutToClose(QIODevice* self, intptr_t slot);
void QIODevice_ReadChannelFinished(QIODevice* self);
void QIODevice_connect_ReadChannelFinished(QIODevice* self, intptr_t slot);
long long QIODevice_ReadData(QIODevice* self, char* data, long long maxlen);
long long QIODevice_ReadLineData(QIODevice* self, char* data, long long maxlen);
long long QIODevice_WriteData(QIODevice* self, const char* data, long long lenVal);
struct miqt_string QIODevice_Tr2(const char* s, const char* c);
struct miqt_string QIODevice_Tr3(const char* s, const char* c, int n);
struct miqt_string QIODevice_TrUtf82(const char* s, const char* c);
struct miqt_string QIODevice_TrUtf83(const char* s, const char* c, int n);
struct miqt_string QIODevice_ReadLine1(QIODevice* self, long long maxlen);
void QIODevice_Delete(QIODevice* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
