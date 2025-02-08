#pragma once
#ifndef MIQT_QT_GEN_QFILE_H
#define MIQT_QT_GEN_QFILE_H

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
typedef struct QTimerEvent QTimerEvent;
#endif

QFile* QFile_new();
QFile* QFile_new2(struct miqt_string name);
QFile* QFile_new3(QObject* parent);
QFile* QFile_new4(struct miqt_string name, QObject* parent);
void QFile_virtbase(QFile* src, QFileDevice** outptr_QFileDevice);
QMetaObject* QFile_metaObject(const QFile* self);
void* QFile_metacast(QFile* self, const char* param1);
struct miqt_string QFile_tr(const char* s);
struct miqt_string QFile_trUtf8(const char* s);
struct miqt_string QFile_fileName(const QFile* self);
void QFile_setFileName(QFile* self, struct miqt_string name);
struct miqt_string QFile_encodeName(struct miqt_string fileName);
struct miqt_string QFile_decodeName(struct miqt_string localFileName);
struct miqt_string QFile_decodeNameWithLocalFileName(const char* localFileName);
bool QFile_exists(const QFile* self);
bool QFile_existsWithFileName(struct miqt_string fileName);
struct miqt_string QFile_readLink(const QFile* self);
struct miqt_string QFile_readLinkWithFileName(struct miqt_string fileName);
struct miqt_string QFile_symLinkTarget(const QFile* self);
struct miqt_string QFile_symLinkTargetWithFileName(struct miqt_string fileName);
bool QFile_remove(QFile* self);
bool QFile_removeWithFileName(struct miqt_string fileName);
bool QFile_moveToTrash(QFile* self);
bool QFile_moveToTrashWithFileName(struct miqt_string fileName);
bool QFile_rename(QFile* self, struct miqt_string newName);
bool QFile_rename2(struct miqt_string oldName, struct miqt_string newName);
bool QFile_link(QFile* self, struct miqt_string newName);
bool QFile_link2(struct miqt_string oldname, struct miqt_string newName);
bool QFile_copy(QFile* self, struct miqt_string newName);
bool QFile_copy2(struct miqt_string fileName, struct miqt_string newName);
bool QFile_open(QFile* self, int flags);
bool QFile_open3(QFile* self, int fd, int ioFlags);
long long QFile_size(const QFile* self);
bool QFile_resize(QFile* self, long long sz);
bool QFile_resize2(struct miqt_string filename, long long sz);
int QFile_permissions(const QFile* self);
int QFile_permissionsWithFilename(struct miqt_string filename);
bool QFile_setPermissions(QFile* self, int permissionSpec);
bool QFile_setPermissions2(struct miqt_string filename, int permissionSpec);
struct miqt_string QFile_tr2(const char* s, const char* c);
struct miqt_string QFile_tr3(const char* s, const char* c, int n);
struct miqt_string QFile_trUtf82(const char* s, const char* c);
struct miqt_string QFile_trUtf83(const char* s, const char* c, int n);
bool QFile_open33(QFile* self, int fd, int ioFlags, int handleFlags);
bool QFile_override_virtual_fileName(void* self, intptr_t slot);
struct miqt_string QFile_virtualbase_fileName(const void* self);
bool QFile_override_virtual_open(void* self, intptr_t slot);
bool QFile_virtualbase_open(void* self, int flags);
bool QFile_override_virtual_size(void* self, intptr_t slot);
long long QFile_virtualbase_size(const void* self);
bool QFile_override_virtual_resize(void* self, intptr_t slot);
bool QFile_virtualbase_resize(void* self, long long sz);
bool QFile_override_virtual_permissions(void* self, intptr_t slot);
int QFile_virtualbase_permissions(const void* self);
bool QFile_override_virtual_setPermissions(void* self, intptr_t slot);
bool QFile_virtualbase_setPermissions(void* self, int permissionSpec);
bool QFile_override_virtual_close(void* self, intptr_t slot);
void QFile_virtualbase_close(void* self);
bool QFile_override_virtual_isSequential(void* self, intptr_t slot);
bool QFile_virtualbase_isSequential(const void* self);
bool QFile_override_virtual_pos(void* self, intptr_t slot);
long long QFile_virtualbase_pos(const void* self);
bool QFile_override_virtual_seek(void* self, intptr_t slot);
bool QFile_virtualbase_seek(void* self, long long offset);
bool QFile_override_virtual_atEnd(void* self, intptr_t slot);
bool QFile_virtualbase_atEnd(const void* self);
bool QFile_override_virtual_readData(void* self, intptr_t slot);
long long QFile_virtualbase_readData(void* self, char* data, long long maxlen);
bool QFile_override_virtual_writeData(void* self, intptr_t slot);
long long QFile_virtualbase_writeData(void* self, const char* data, long long len);
bool QFile_override_virtual_readLineData(void* self, intptr_t slot);
long long QFile_virtualbase_readLineData(void* self, char* data, long long maxlen);
bool QFile_override_virtual_reset(void* self, intptr_t slot);
bool QFile_virtualbase_reset(void* self);
bool QFile_override_virtual_bytesAvailable(void* self, intptr_t slot);
long long QFile_virtualbase_bytesAvailable(const void* self);
bool QFile_override_virtual_bytesToWrite(void* self, intptr_t slot);
long long QFile_virtualbase_bytesToWrite(const void* self);
bool QFile_override_virtual_canReadLine(void* self, intptr_t slot);
bool QFile_virtualbase_canReadLine(const void* self);
bool QFile_override_virtual_waitForReadyRead(void* self, intptr_t slot);
bool QFile_virtualbase_waitForReadyRead(void* self, int msecs);
bool QFile_override_virtual_waitForBytesWritten(void* self, intptr_t slot);
bool QFile_virtualbase_waitForBytesWritten(void* self, int msecs);
bool QFile_override_virtual_event(void* self, intptr_t slot);
bool QFile_virtualbase_event(void* self, QEvent* event);
bool QFile_override_virtual_eventFilter(void* self, intptr_t slot);
bool QFile_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QFile_override_virtual_timerEvent(void* self, intptr_t slot);
void QFile_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QFile_override_virtual_childEvent(void* self, intptr_t slot);
void QFile_virtualbase_childEvent(void* self, QChildEvent* event);
bool QFile_override_virtual_customEvent(void* self, intptr_t slot);
void QFile_virtualbase_customEvent(void* self, QEvent* event);
bool QFile_override_virtual_connectNotify(void* self, intptr_t slot);
void QFile_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QFile_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QFile_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QFile_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
void QFile_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
QObject* QFile_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QFile_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QFile_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QFile_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QFile_delete(QFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
