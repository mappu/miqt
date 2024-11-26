#pragma once
#ifndef MIQT_QT6_GEN_QIODEVICE_H
#define MIQT_QT6_GEN_QIODEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QIODevice;
class QIODeviceBase;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

void QIODevice_new(QIODevice** outptr_QIODevice, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase);
void QIODevice_new2(QObject* parent, QIODevice** outptr_QIODevice, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase);
QMetaObject* QIODevice_MetaObject(const QIODevice* self);
void* QIODevice_Metacast(QIODevice* self, const char* param1);
struct miqt_string QIODevice_Tr(const char* s);
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
long long QIODevice_SkipData(QIODevice* self, long long maxSize);
long long QIODevice_WriteData(QIODevice* self, const char* data, long long lenVal);
struct miqt_string QIODevice_Tr2(const char* s, const char* c);
struct miqt_string QIODevice_Tr3(const char* s, const char* c, int n);
struct miqt_string QIODevice_ReadLine1(QIODevice* self, long long maxlen);
void QIODevice_override_virtual_IsSequential(void* self, intptr_t slot);
bool QIODevice_virtualbase_IsSequential(const void* self);
void QIODevice_override_virtual_Open(void* self, intptr_t slot);
bool QIODevice_virtualbase_Open(void* self, int mode);
void QIODevice_override_virtual_Close(void* self, intptr_t slot);
void QIODevice_virtualbase_Close(void* self);
void QIODevice_override_virtual_Pos(void* self, intptr_t slot);
long long QIODevice_virtualbase_Pos(const void* self);
void QIODevice_override_virtual_Size(void* self, intptr_t slot);
long long QIODevice_virtualbase_Size(const void* self);
void QIODevice_override_virtual_Seek(void* self, intptr_t slot);
bool QIODevice_virtualbase_Seek(void* self, long long pos);
void QIODevice_override_virtual_AtEnd(void* self, intptr_t slot);
bool QIODevice_virtualbase_AtEnd(const void* self);
void QIODevice_override_virtual_Reset(void* self, intptr_t slot);
bool QIODevice_virtualbase_Reset(void* self);
void QIODevice_override_virtual_BytesAvailable(void* self, intptr_t slot);
long long QIODevice_virtualbase_BytesAvailable(const void* self);
void QIODevice_override_virtual_BytesToWrite(void* self, intptr_t slot);
long long QIODevice_virtualbase_BytesToWrite(const void* self);
void QIODevice_override_virtual_CanReadLine(void* self, intptr_t slot);
bool QIODevice_virtualbase_CanReadLine(const void* self);
void QIODevice_override_virtual_WaitForReadyRead(void* self, intptr_t slot);
bool QIODevice_virtualbase_WaitForReadyRead(void* self, int msecs);
void QIODevice_override_virtual_WaitForBytesWritten(void* self, intptr_t slot);
bool QIODevice_virtualbase_WaitForBytesWritten(void* self, int msecs);
void QIODevice_override_virtual_ReadData(void* self, intptr_t slot);
long long QIODevice_virtualbase_ReadData(void* self, char* data, long long maxlen);
void QIODevice_override_virtual_ReadLineData(void* self, intptr_t slot);
long long QIODevice_virtualbase_ReadLineData(void* self, char* data, long long maxlen);
void QIODevice_override_virtual_SkipData(void* self, intptr_t slot);
long long QIODevice_virtualbase_SkipData(void* self, long long maxSize);
void QIODevice_override_virtual_WriteData(void* self, intptr_t slot);
long long QIODevice_virtualbase_WriteData(void* self, const char* data, long long lenVal);
void QIODevice_override_virtual_Event(void* self, intptr_t slot);
bool QIODevice_virtualbase_Event(void* self, QEvent* event);
void QIODevice_override_virtual_EventFilter(void* self, intptr_t slot);
bool QIODevice_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QIODevice_override_virtual_TimerEvent(void* self, intptr_t slot);
void QIODevice_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QIODevice_override_virtual_ChildEvent(void* self, intptr_t slot);
void QIODevice_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QIODevice_override_virtual_CustomEvent(void* self, intptr_t slot);
void QIODevice_virtualbase_CustomEvent(void* self, QEvent* event);
void QIODevice_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QIODevice_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QIODevice_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QIODevice_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QIODevice_Delete(QIODevice* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
