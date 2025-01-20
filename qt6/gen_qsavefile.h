#pragma once
#ifndef MIQT_QT6_GEN_QSAVEFILE_H
#define MIQT_QT6_GEN_QSAVEFILE_H

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
class QFileDevice;
class QIODevice;
class QIODeviceBase;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSaveFile;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFileDevice QFileDevice;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSaveFile QSaveFile;
typedef struct QTimerEvent QTimerEvent;
#endif

QSaveFile* QSaveFile_new(struct miqt_string name);
QSaveFile* QSaveFile_new2();
QSaveFile* QSaveFile_new3(struct miqt_string name, QObject* parent);
QSaveFile* QSaveFile_new4(QObject* parent);
void QSaveFile_virtbase(QSaveFile* src, QFileDevice** outptr_QFileDevice);
QMetaObject* QSaveFile_MetaObject(const QSaveFile* self);
void* QSaveFile_Metacast(QSaveFile* self, const char* param1);
struct miqt_string QSaveFile_Tr(const char* s);
struct miqt_string QSaveFile_FileName(const QSaveFile* self);
void QSaveFile_SetFileName(QSaveFile* self, struct miqt_string name);
bool QSaveFile_Open(QSaveFile* self, int flags);
bool QSaveFile_Commit(QSaveFile* self);
void QSaveFile_CancelWriting(QSaveFile* self);
void QSaveFile_SetDirectWriteFallback(QSaveFile* self, bool enabled);
bool QSaveFile_DirectWriteFallback(const QSaveFile* self);
long long QSaveFile_WriteData(QSaveFile* self, const char* data, long long lenVal);
struct miqt_string QSaveFile_Tr2(const char* s, const char* c);
struct miqt_string QSaveFile_Tr3(const char* s, const char* c, int n);
bool QSaveFile_override_virtual_FileName(void* self, intptr_t slot);
struct miqt_string QSaveFile_virtualbase_FileName(const void* self);
bool QSaveFile_override_virtual_Open(void* self, intptr_t slot);
bool QSaveFile_virtualbase_Open(void* self, int flags);
bool QSaveFile_override_virtual_WriteData(void* self, intptr_t slot);
long long QSaveFile_virtualbase_WriteData(void* self, const char* data, long long lenVal);
bool QSaveFile_override_virtual_IsSequential(void* self, intptr_t slot);
bool QSaveFile_virtualbase_IsSequential(const void* self);
bool QSaveFile_override_virtual_Pos(void* self, intptr_t slot);
long long QSaveFile_virtualbase_Pos(const void* self);
bool QSaveFile_override_virtual_Seek(void* self, intptr_t slot);
bool QSaveFile_virtualbase_Seek(void* self, long long offset);
bool QSaveFile_override_virtual_AtEnd(void* self, intptr_t slot);
bool QSaveFile_virtualbase_AtEnd(const void* self);
bool QSaveFile_override_virtual_Size(void* self, intptr_t slot);
long long QSaveFile_virtualbase_Size(const void* self);
bool QSaveFile_override_virtual_Resize(void* self, intptr_t slot);
bool QSaveFile_virtualbase_Resize(void* self, long long sz);
bool QSaveFile_override_virtual_Permissions(void* self, intptr_t slot);
int QSaveFile_virtualbase_Permissions(const void* self);
bool QSaveFile_override_virtual_SetPermissions(void* self, intptr_t slot);
bool QSaveFile_virtualbase_SetPermissions(void* self, int permissionSpec);
bool QSaveFile_override_virtual_ReadData(void* self, intptr_t slot);
long long QSaveFile_virtualbase_ReadData(void* self, char* data, long long maxlen);
bool QSaveFile_override_virtual_ReadLineData(void* self, intptr_t slot);
long long QSaveFile_virtualbase_ReadLineData(void* self, char* data, long long maxlen);
bool QSaveFile_override_virtual_Reset(void* self, intptr_t slot);
bool QSaveFile_virtualbase_Reset(void* self);
bool QSaveFile_override_virtual_BytesAvailable(void* self, intptr_t slot);
long long QSaveFile_virtualbase_BytesAvailable(const void* self);
bool QSaveFile_override_virtual_BytesToWrite(void* self, intptr_t slot);
long long QSaveFile_virtualbase_BytesToWrite(const void* self);
bool QSaveFile_override_virtual_CanReadLine(void* self, intptr_t slot);
bool QSaveFile_virtualbase_CanReadLine(const void* self);
bool QSaveFile_override_virtual_WaitForReadyRead(void* self, intptr_t slot);
bool QSaveFile_virtualbase_WaitForReadyRead(void* self, int msecs);
bool QSaveFile_override_virtual_WaitForBytesWritten(void* self, intptr_t slot);
bool QSaveFile_virtualbase_WaitForBytesWritten(void* self, int msecs);
bool QSaveFile_override_virtual_SkipData(void* self, intptr_t slot);
long long QSaveFile_virtualbase_SkipData(void* self, long long maxSize);
bool QSaveFile_override_virtual_Event(void* self, intptr_t slot);
bool QSaveFile_virtualbase_Event(void* self, QEvent* event);
bool QSaveFile_override_virtual_EventFilter(void* self, intptr_t slot);
bool QSaveFile_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QSaveFile_override_virtual_TimerEvent(void* self, intptr_t slot);
void QSaveFile_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QSaveFile_override_virtual_ChildEvent(void* self, intptr_t slot);
void QSaveFile_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QSaveFile_override_virtual_CustomEvent(void* self, intptr_t slot);
void QSaveFile_virtualbase_CustomEvent(void* self, QEvent* event);
bool QSaveFile_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QSaveFile_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QSaveFile_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QSaveFile_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QSaveFile_Delete(QSaveFile* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
