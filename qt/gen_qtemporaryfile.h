#pragma once
#ifndef MIQT_QT_GEN_QTEMPORARYFILE_H
#define MIQT_QT_GEN_QTEMPORARYFILE_H

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
QMetaObject* QTemporaryFile_metaObject(const QTemporaryFile* self);
void* QTemporaryFile_metacast(QTemporaryFile* self, const char* param1);
struct miqt_string QTemporaryFile_tr(const char* s);
struct miqt_string QTemporaryFile_trUtf8(const char* s);
bool QTemporaryFile_autoRemove(const QTemporaryFile* self);
void QTemporaryFile_setAutoRemove(QTemporaryFile* self, bool b);
bool QTemporaryFile_open(QTemporaryFile* self);
struct miqt_string QTemporaryFile_fileName(const QTemporaryFile* self);
struct miqt_string QTemporaryFile_fileTemplate(const QTemporaryFile* self);
void QTemporaryFile_setFileTemplate(QTemporaryFile* self, struct miqt_string name);
bool QTemporaryFile_rename(QTemporaryFile* self, struct miqt_string newName);
QTemporaryFile* QTemporaryFile_createLocalFile(struct miqt_string fileName);
QTemporaryFile* QTemporaryFile_createLocalFileWithFile(QFile* file);
QTemporaryFile* QTemporaryFile_createNativeFile(struct miqt_string fileName);
QTemporaryFile* QTemporaryFile_createNativeFileWithFile(QFile* file);
bool QTemporaryFile_openWithFlags(QTemporaryFile* self, int flags);
struct miqt_string QTemporaryFile_tr2(const char* s, const char* c);
struct miqt_string QTemporaryFile_tr3(const char* s, const char* c, int n);
struct miqt_string QTemporaryFile_trUtf82(const char* s, const char* c);
struct miqt_string QTemporaryFile_trUtf83(const char* s, const char* c, int n);
bool QTemporaryFile_override_virtual_fileName(void* self, intptr_t slot);
struct miqt_string QTemporaryFile_virtualbase_fileName(const void* self);
bool QTemporaryFile_override_virtual_openWithFlags(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_openWithFlags(void* self, int flags);
bool QTemporaryFile_override_virtual_size(void* self, intptr_t slot);
long long QTemporaryFile_virtualbase_size(const void* self);
bool QTemporaryFile_override_virtual_resize(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_resize(void* self, long long sz);
bool QTemporaryFile_override_virtual_permissions(void* self, intptr_t slot);
int QTemporaryFile_virtualbase_permissions(const void* self);
bool QTemporaryFile_override_virtual_setPermissions(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_setPermissions(void* self, int permissionSpec);
bool QTemporaryFile_override_virtual_close(void* self, intptr_t slot);
void QTemporaryFile_virtualbase_close(void* self);
bool QTemporaryFile_override_virtual_isSequential(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_isSequential(const void* self);
bool QTemporaryFile_override_virtual_pos(void* self, intptr_t slot);
long long QTemporaryFile_virtualbase_pos(const void* self);
bool QTemporaryFile_override_virtual_seek(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_seek(void* self, long long offset);
bool QTemporaryFile_override_virtual_atEnd(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_atEnd(const void* self);
bool QTemporaryFile_override_virtual_readData(void* self, intptr_t slot);
long long QTemporaryFile_virtualbase_readData(void* self, char* data, long long maxlen);
bool QTemporaryFile_override_virtual_writeData(void* self, intptr_t slot);
long long QTemporaryFile_virtualbase_writeData(void* self, const char* data, long long len);
bool QTemporaryFile_override_virtual_readLineData(void* self, intptr_t slot);
long long QTemporaryFile_virtualbase_readLineData(void* self, char* data, long long maxlen);
bool QTemporaryFile_override_virtual_reset(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_reset(void* self);
bool QTemporaryFile_override_virtual_bytesAvailable(void* self, intptr_t slot);
long long QTemporaryFile_virtualbase_bytesAvailable(const void* self);
bool QTemporaryFile_override_virtual_bytesToWrite(void* self, intptr_t slot);
long long QTemporaryFile_virtualbase_bytesToWrite(const void* self);
bool QTemporaryFile_override_virtual_canReadLine(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_canReadLine(const void* self);
bool QTemporaryFile_override_virtual_waitForReadyRead(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_waitForReadyRead(void* self, int msecs);
bool QTemporaryFile_override_virtual_waitForBytesWritten(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_waitForBytesWritten(void* self, int msecs);
bool QTemporaryFile_override_virtual_event(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_event(void* self, QEvent* event);
bool QTemporaryFile_override_virtual_eventFilter(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QTemporaryFile_override_virtual_timerEvent(void* self, intptr_t slot);
void QTemporaryFile_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QTemporaryFile_override_virtual_childEvent(void* self, intptr_t slot);
void QTemporaryFile_virtualbase_childEvent(void* self, QChildEvent* event);
bool QTemporaryFile_override_virtual_customEvent(void* self, intptr_t slot);
void QTemporaryFile_virtualbase_customEvent(void* self, QEvent* event);
bool QTemporaryFile_override_virtual_connectNotify(void* self, intptr_t slot);
void QTemporaryFile_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QTemporaryFile_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QTemporaryFile_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QTemporaryFile_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
void QTemporaryFile_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
QObject* QTemporaryFile_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QTemporaryFile_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QTemporaryFile_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QTemporaryFile_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QTemporaryFile_delete(QTemporaryFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
