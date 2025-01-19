#pragma once
#ifndef MIQT_QT6_GEN_QFILE_H
#define MIQT_QT6_GEN_QFILE_H

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
typedef struct QTimerEvent QTimerEvent;
#endif

QFile* QFile_new();
QFile* QFile_new2(struct miqt_string name);
QFile* QFile_new3(QObject* parent);
QFile* QFile_new4(struct miqt_string name, QObject* parent);
void QFile_virtbase(QFile* src, QFileDevice** outptr_QFileDevice);
QMetaObject* QFile_MetaObject(const QFile* self);
void* QFile_Metacast(QFile* self, const char* param1);
struct miqt_string QFile_Tr(const char* s);
struct miqt_string QFile_FileName(const QFile* self);
void QFile_SetFileName(QFile* self, struct miqt_string name);
struct miqt_string QFile_EncodeName(struct miqt_string fileName);
struct miqt_string QFile_DecodeName(struct miqt_string localFileName);
struct miqt_string QFile_DecodeNameWithLocalFileName(const char* localFileName);
bool QFile_Exists(const QFile* self);
bool QFile_ExistsWithFileName(struct miqt_string fileName);
struct miqt_string QFile_SymLinkTarget(const QFile* self);
struct miqt_string QFile_SymLinkTargetWithFileName(struct miqt_string fileName);
bool QFile_Remove(QFile* self);
bool QFile_RemoveWithFileName(struct miqt_string fileName);
bool QFile_MoveToTrash(QFile* self);
bool QFile_MoveToTrashWithFileName(struct miqt_string fileName);
bool QFile_Rename(QFile* self, struct miqt_string newName);
bool QFile_Rename2(struct miqt_string oldName, struct miqt_string newName);
bool QFile_Link(QFile* self, struct miqt_string newName);
bool QFile_Link2(struct miqt_string fileName, struct miqt_string newName);
bool QFile_Copy(QFile* self, struct miqt_string newName);
bool QFile_Copy2(struct miqt_string fileName, struct miqt_string newName);
bool QFile_Open(QFile* self, int flags);
bool QFile_Open2(QFile* self, int flags, int permissions);
bool QFile_Open4(QFile* self, int fd, int ioFlags);
long long QFile_Size(const QFile* self);
bool QFile_Resize(QFile* self, long long sz);
bool QFile_Resize2(struct miqt_string filename, long long sz);
int QFile_Permissions(const QFile* self);
int QFile_PermissionsWithFilename(struct miqt_string filename);
bool QFile_SetPermissions(QFile* self, int permissionSpec);
bool QFile_SetPermissions2(struct miqt_string filename, int permissionSpec);
struct miqt_string QFile_Tr2(const char* s, const char* c);
struct miqt_string QFile_Tr3(const char* s, const char* c, int n);
bool QFile_Open33(QFile* self, int fd, int ioFlags, int handleFlags);
bool QFile_override_virtual_FileName(void* self, intptr_t slot);
struct miqt_string QFile_virtualbase_FileName(const void* self);
bool QFile_override_virtual_Open(void* self, intptr_t slot);
bool QFile_virtualbase_Open(void* self, int flags);
bool QFile_override_virtual_Size(void* self, intptr_t slot);
long long QFile_virtualbase_Size(const void* self);
bool QFile_override_virtual_Resize(void* self, intptr_t slot);
bool QFile_virtualbase_Resize(void* self, long long sz);
bool QFile_override_virtual_Permissions(void* self, intptr_t slot);
int QFile_virtualbase_Permissions(const void* self);
bool QFile_override_virtual_SetPermissions(void* self, intptr_t slot);
bool QFile_virtualbase_SetPermissions(void* self, int permissionSpec);
bool QFile_override_virtual_Close(void* self, intptr_t slot);
void QFile_virtualbase_Close(void* self);
bool QFile_override_virtual_IsSequential(void* self, intptr_t slot);
bool QFile_virtualbase_IsSequential(const void* self);
bool QFile_override_virtual_Pos(void* self, intptr_t slot);
long long QFile_virtualbase_Pos(const void* self);
bool QFile_override_virtual_Seek(void* self, intptr_t slot);
bool QFile_virtualbase_Seek(void* self, long long offset);
bool QFile_override_virtual_AtEnd(void* self, intptr_t slot);
bool QFile_virtualbase_AtEnd(const void* self);
bool QFile_override_virtual_ReadData(void* self, intptr_t slot);
long long QFile_virtualbase_ReadData(void* self, char* data, long long maxlen);
bool QFile_override_virtual_WriteData(void* self, intptr_t slot);
long long QFile_virtualbase_WriteData(void* self, const char* data, long long lenVal);
bool QFile_override_virtual_ReadLineData(void* self, intptr_t slot);
long long QFile_virtualbase_ReadLineData(void* self, char* data, long long maxlen);
bool QFile_override_virtual_Reset(void* self, intptr_t slot);
bool QFile_virtualbase_Reset(void* self);
bool QFile_override_virtual_BytesAvailable(void* self, intptr_t slot);
long long QFile_virtualbase_BytesAvailable(const void* self);
bool QFile_override_virtual_BytesToWrite(void* self, intptr_t slot);
long long QFile_virtualbase_BytesToWrite(const void* self);
bool QFile_override_virtual_CanReadLine(void* self, intptr_t slot);
bool QFile_virtualbase_CanReadLine(const void* self);
bool QFile_override_virtual_WaitForReadyRead(void* self, intptr_t slot);
bool QFile_virtualbase_WaitForReadyRead(void* self, int msecs);
bool QFile_override_virtual_WaitForBytesWritten(void* self, intptr_t slot);
bool QFile_virtualbase_WaitForBytesWritten(void* self, int msecs);
bool QFile_override_virtual_SkipData(void* self, intptr_t slot);
long long QFile_virtualbase_SkipData(void* self, long long maxSize);
bool QFile_override_virtual_Event(void* self, intptr_t slot);
bool QFile_virtualbase_Event(void* self, QEvent* event);
bool QFile_override_virtual_EventFilter(void* self, intptr_t slot);
bool QFile_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QFile_override_virtual_TimerEvent(void* self, intptr_t slot);
void QFile_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QFile_override_virtual_ChildEvent(void* self, intptr_t slot);
void QFile_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QFile_override_virtual_CustomEvent(void* self, intptr_t slot);
void QFile_virtualbase_CustomEvent(void* self, QEvent* event);
bool QFile_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QFile_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QFile_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QFile_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QFile_Delete(QFile* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
