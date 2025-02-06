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
QMetaObject* QSaveFile_metaObject(const QSaveFile* self);
void* QSaveFile_metacast(QSaveFile* self, const char* param1);
struct miqt_string QSaveFile_tr(const char* s);
struct miqt_string QSaveFile_fileName(const QSaveFile* self);
void QSaveFile_setFileName(QSaveFile* self, struct miqt_string name);
bool QSaveFile_open(QSaveFile* self, int flags);
bool QSaveFile_commit(QSaveFile* self);
void QSaveFile_cancelWriting(QSaveFile* self);
void QSaveFile_setDirectWriteFallback(QSaveFile* self, bool enabled);
bool QSaveFile_directWriteFallback(const QSaveFile* self);
long long QSaveFile_writeData(QSaveFile* self, const char* data, long long len);
struct miqt_string QSaveFile_tr2(const char* s, const char* c);
struct miqt_string QSaveFile_tr3(const char* s, const char* c, int n);
bool QSaveFile_override_virtual_fileName(void* self, intptr_t slot);
struct miqt_string QSaveFile_virtualbase_fileName(const void* self);
bool QSaveFile_override_virtual_open(void* self, intptr_t slot);
bool QSaveFile_virtualbase_open(void* self, int flags);
bool QSaveFile_override_virtual_writeData(void* self, intptr_t slot);
long long QSaveFile_virtualbase_writeData(void* self, const char* data, long long len);
bool QSaveFile_override_virtual_isSequential(void* self, intptr_t slot);
bool QSaveFile_virtualbase_isSequential(const void* self);
bool QSaveFile_override_virtual_pos(void* self, intptr_t slot);
long long QSaveFile_virtualbase_pos(const void* self);
bool QSaveFile_override_virtual_seek(void* self, intptr_t slot);
bool QSaveFile_virtualbase_seek(void* self, long long offset);
bool QSaveFile_override_virtual_atEnd(void* self, intptr_t slot);
bool QSaveFile_virtualbase_atEnd(const void* self);
bool QSaveFile_override_virtual_size(void* self, intptr_t slot);
long long QSaveFile_virtualbase_size(const void* self);
bool QSaveFile_override_virtual_resize(void* self, intptr_t slot);
bool QSaveFile_virtualbase_resize(void* self, long long sz);
bool QSaveFile_override_virtual_permissions(void* self, intptr_t slot);
int QSaveFile_virtualbase_permissions(const void* self);
bool QSaveFile_override_virtual_setPermissions(void* self, intptr_t slot);
bool QSaveFile_virtualbase_setPermissions(void* self, int permissionSpec);
bool QSaveFile_override_virtual_readData(void* self, intptr_t slot);
long long QSaveFile_virtualbase_readData(void* self, char* data, long long maxlen);
bool QSaveFile_override_virtual_readLineData(void* self, intptr_t slot);
long long QSaveFile_virtualbase_readLineData(void* self, char* data, long long maxlen);
bool QSaveFile_override_virtual_reset(void* self, intptr_t slot);
bool QSaveFile_virtualbase_reset(void* self);
bool QSaveFile_override_virtual_bytesAvailable(void* self, intptr_t slot);
long long QSaveFile_virtualbase_bytesAvailable(const void* self);
bool QSaveFile_override_virtual_bytesToWrite(void* self, intptr_t slot);
long long QSaveFile_virtualbase_bytesToWrite(const void* self);
bool QSaveFile_override_virtual_canReadLine(void* self, intptr_t slot);
bool QSaveFile_virtualbase_canReadLine(const void* self);
bool QSaveFile_override_virtual_waitForReadyRead(void* self, intptr_t slot);
bool QSaveFile_virtualbase_waitForReadyRead(void* self, int msecs);
bool QSaveFile_override_virtual_waitForBytesWritten(void* self, intptr_t slot);
bool QSaveFile_virtualbase_waitForBytesWritten(void* self, int msecs);
bool QSaveFile_override_virtual_skipData(void* self, intptr_t slot);
long long QSaveFile_virtualbase_skipData(void* self, long long maxSize);
bool QSaveFile_override_virtual_event(void* self, intptr_t slot);
bool QSaveFile_virtualbase_event(void* self, QEvent* event);
bool QSaveFile_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSaveFile_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSaveFile_override_virtual_timerEvent(void* self, intptr_t slot);
void QSaveFile_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSaveFile_override_virtual_childEvent(void* self, intptr_t slot);
void QSaveFile_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSaveFile_override_virtual_customEvent(void* self, intptr_t slot);
void QSaveFile_virtualbase_customEvent(void* self, QEvent* event);
bool QSaveFile_override_virtual_connectNotify(void* self, intptr_t slot);
void QSaveFile_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSaveFile_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSaveFile_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QSaveFile_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
void QSaveFile_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
QObject* QSaveFile_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSaveFile_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSaveFile_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSaveFile_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QSaveFile_delete(QSaveFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
