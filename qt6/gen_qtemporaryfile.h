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
class QFile;
class QFileDevice;
class QIODevice;
class QIODeviceBase;
class QMetaObject;
class QObject;
class QTemporaryFile;
#else
typedef struct QFile QFile;
typedef struct QFileDevice QFileDevice;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTemporaryFile QTemporaryFile;
#endif

void QTemporaryFile_new(QTemporaryFile** outptr_QTemporaryFile, QFile** outptr_QFile, QFileDevice** outptr_QFileDevice, QIODevice** outptr_QIODevice, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase);
void QTemporaryFile_new2(struct miqt_string templateName, QTemporaryFile** outptr_QTemporaryFile, QFile** outptr_QFile, QFileDevice** outptr_QFileDevice, QIODevice** outptr_QIODevice, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase);
void QTemporaryFile_new3(QObject* parent, QTemporaryFile** outptr_QTemporaryFile, QFile** outptr_QFile, QFileDevice** outptr_QFileDevice, QIODevice** outptr_QIODevice, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase);
void QTemporaryFile_new4(struct miqt_string templateName, QObject* parent, QTemporaryFile** outptr_QTemporaryFile, QFile** outptr_QFile, QFileDevice** outptr_QFileDevice, QIODevice** outptr_QIODevice, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase);
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
void QTemporaryFile_override_virtual_FileName(void* self, intptr_t slot);
struct miqt_string QTemporaryFile_virtualbase_FileName(const void* self);
void QTemporaryFile_override_virtual_OpenWithFlags(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_OpenWithFlags(void* self, int flags);
void QTemporaryFile_override_virtual_Size(void* self, intptr_t slot);
long long QTemporaryFile_virtualbase_Size(const void* self);
void QTemporaryFile_override_virtual_Resize(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_Resize(void* self, long long sz);
void QTemporaryFile_override_virtual_Permissions(void* self, intptr_t slot);
int QTemporaryFile_virtualbase_Permissions(const void* self);
void QTemporaryFile_override_virtual_SetPermissions(void* self, intptr_t slot);
bool QTemporaryFile_virtualbase_SetPermissions(void* self, int permissionSpec);
void QTemporaryFile_Delete(QTemporaryFile* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
