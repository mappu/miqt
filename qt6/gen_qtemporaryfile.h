#pragma once
#ifndef MIQT_QT6_GEN_QTEMPORARYFILE_H
#define MIQT_QT6_GEN_QTEMPORARYFILE_H

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
class QFile;
class QFileDevice;
class QIODevice;
class QIODeviceBase;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTemporaryFile;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFile QFile;
typedef struct QFileDevice QFileDevice;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTemporaryFile QTemporaryFile;
typedef struct QTimerEvent QTimerEvent;
#endif

QTemporaryFile* QTemporaryFile_new();
QTemporaryFile* QTemporaryFile_new2(struct miqt_string templateName);
QTemporaryFile* QTemporaryFile_new3(QObject* parent);
QTemporaryFile* QTemporaryFile_new4(struct miqt_string templateName, QObject* parent);
void QTemporaryFile_virtbase(QTemporaryFile* src, QFile** outptr_QFile);
QMetaObject* QTemporaryFile_MetaObject(const QTemporaryFile* self);
void* QTemporaryFile_Metacast(QTemporaryFile* self, const char* param1);
struct miqt_string QTemporaryFile_Tr(const char* s);
bool QTemporaryFile_AutoRemove(const QTemporaryFile* self);
void QTemporaryFile_SetAutoRemove(QTemporaryFile* self, bool b);
bool QTemporaryFile_Open(QTemporaryFile* self);
struct miqt_string QTemporaryFile_FileName(const QTemporaryFile* self);
struct miqt_string QTemporaryFile_FileTemplate(const QTemporaryFile* self);
void QTemporaryFile_SetFileTemplate(QTemporaryFile* self, struct miqt_string name);
bool QTemporaryFile_Rename(QTemporaryFile* self, struct miqt_string newName);
QTemporaryFile* QTemporaryFile_CreateNativeFile(struct miqt_string fileName);
QTemporaryFile* QTemporaryFile_CreateNativeFileWithFile(QFile* file);
bool QTemporaryFile_OpenWithFlags(QTemporaryFile* self, int flags);
struct miqt_string QTemporaryFile_Tr2(const char* s, const char* c);
struct miqt_string QTemporaryFile_Tr3(const char* s, const char* c, int n);
bool QTemporaryFile_override_virtual_FileName(void* self, intptr_t slot);
struct miqt_string QTemporaryFile_virtualbase_FileName(const void* self);
bool QTemporaryFile_override_virtual_OpenWithFlags(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_OpenWithFlags(void* self, int flags);
bool QTemporaryFile_override_virtual_Size(void* self, intptr_t slot);
long long QTemporaryFile_virtualbase_Size(const void* self);
bool QTemporaryFile_override_virtual_Resize(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_Resize(void* self, long long sz);
bool QTemporaryFile_override_virtual_Permissions(void* self, intptr_t slot);
int QTemporaryFile_virtualbase_Permissions(const void* self);
bool QTemporaryFile_override_virtual_SetPermissions(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_SetPermissions(void* self, int permissionSpec);
bool QTemporaryFile_override_virtual_Close(void* self, intptr_t slot);
void QTemporaryFile_virtualbase_Close(void* self);
bool QTemporaryFile_override_virtual_IsSequential(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_IsSequential(const void* self);
bool QTemporaryFile_override_virtual_Pos(void* self, intptr_t slot);
long long QTemporaryFile_virtualbase_Pos(const void* self);
bool QTemporaryFile_override_virtual_Seek(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_Seek(void* self, long long offset);
bool QTemporaryFile_override_virtual_AtEnd(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_AtEnd(const void* self);
bool QTemporaryFile_override_virtual_ReadData(void* self, intptr_t slot);
long long QTemporaryFile_virtualbase_ReadData(void* self, char* data, long long maxlen);
bool QTemporaryFile_override_virtual_WriteData(void* self, intptr_t slot);
long long QTemporaryFile_virtualbase_WriteData(void* self, const char* data, long long lenVal);
bool QTemporaryFile_override_virtual_ReadLineData(void* self, intptr_t slot);
long long QTemporaryFile_virtualbase_ReadLineData(void* self, char* data, long long maxlen);
bool QTemporaryFile_override_virtual_Reset(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_Reset(void* self);
bool QTemporaryFile_override_virtual_BytesAvailable(void* self, intptr_t slot);
long long QTemporaryFile_virtualbase_BytesAvailable(const void* self);
bool QTemporaryFile_override_virtual_BytesToWrite(void* self, intptr_t slot);
long long QTemporaryFile_virtualbase_BytesToWrite(const void* self);
bool QTemporaryFile_override_virtual_CanReadLine(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_CanReadLine(const void* self);
bool QTemporaryFile_override_virtual_WaitForReadyRead(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_WaitForReadyRead(void* self, int msecs);
bool QTemporaryFile_override_virtual_WaitForBytesWritten(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_WaitForBytesWritten(void* self, int msecs);
bool QTemporaryFile_override_virtual_SkipData(void* self, intptr_t slot);
long long QTemporaryFile_virtualbase_SkipData(void* self, long long maxSize);
bool QTemporaryFile_override_virtual_Event(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_Event(void* self, QEvent* event);
bool QTemporaryFile_override_virtual_EventFilter(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QTemporaryFile_override_virtual_TimerEvent(void* self, intptr_t slot);
void QTemporaryFile_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QTemporaryFile_override_virtual_ChildEvent(void* self, intptr_t slot);
void QTemporaryFile_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QTemporaryFile_override_virtual_CustomEvent(void* self, intptr_t slot);
void QTemporaryFile_virtualbase_CustomEvent(void* self, QEvent* event);
bool QTemporaryFile_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QTemporaryFile_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QTemporaryFile_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QTemporaryFile_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QTemporaryFile_Delete(QTemporaryFile* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
