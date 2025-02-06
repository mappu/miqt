#pragma once
#ifndef MIQT_QT_GEN_QFILEDEVICE_H
#define MIQT_QT_GEN_QFILEDEVICE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDateTime;
class QFileDevice;
class QIODevice;
class QMetaMethod;
class QMetaObject;
class QObject;
#else
typedef struct QDateTime QDateTime;
typedef struct QFileDevice QFileDevice;
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QFileDevice_virtbase(QFileDevice* src, QIODevice** outptr_QIODevice);
QMetaObject* QFileDevice_metaObject(const QFileDevice* self);
void* QFileDevice_metacast(QFileDevice* self, const char* param1);
struct miqt_string QFileDevice_tr(const char* s);
struct miqt_string QFileDevice_trUtf8(const char* s);
int QFileDevice_error(const QFileDevice* self);
void QFileDevice_unsetError(QFileDevice* self);
void QFileDevice_close(QFileDevice* self);
bool QFileDevice_isSequential(const QFileDevice* self);
int QFileDevice_handle(const QFileDevice* self);
struct miqt_string QFileDevice_fileName(const QFileDevice* self);
long long QFileDevice_pos(const QFileDevice* self);
bool QFileDevice_seek(QFileDevice* self, long long offset);
bool QFileDevice_atEnd(const QFileDevice* self);
bool QFileDevice_flush(QFileDevice* self);
long long QFileDevice_size(const QFileDevice* self);
bool QFileDevice_resize(QFileDevice* self, long long sz);
int QFileDevice_permissions(const QFileDevice* self);
bool QFileDevice_setPermissions(QFileDevice* self, int permissionSpec);
unsigned char* QFileDevice_map(QFileDevice* self, long long offset, long long size);
bool QFileDevice_unmap(QFileDevice* self, unsigned char* address);
QDateTime* QFileDevice_fileTime(const QFileDevice* self, int time);
bool QFileDevice_setFileTime(QFileDevice* self, QDateTime* newDate, int fileTime);
long long QFileDevice_readData(QFileDevice* self, char* data, long long maxlen);
long long QFileDevice_writeData(QFileDevice* self, const char* data, long long len);
long long QFileDevice_readLineData(QFileDevice* self, char* data, long long maxlen);
struct miqt_string QFileDevice_tr2(const char* s, const char* c);
struct miqt_string QFileDevice_tr3(const char* s, const char* c, int n);
struct miqt_string QFileDevice_trUtf82(const char* s, const char* c);
struct miqt_string QFileDevice_trUtf83(const char* s, const char* c, int n);
unsigned char* QFileDevice_map3(QFileDevice* self, long long offset, long long size, int flags);
void QFileDevice_delete(QFileDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
