#ifndef GEN_QTEMPORARYFILE_H
#define GEN_QTEMPORARYFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFile;
class QMetaObject;
class QObject;
class QTemporaryFile;
#else
typedef struct QFile QFile;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTemporaryFile QTemporaryFile;
#endif

QTemporaryFile* QTemporaryFile_new();
QTemporaryFile* QTemporaryFile_new2(struct miqt_string* templateName);
QTemporaryFile* QTemporaryFile_new3(QObject* parent);
QTemporaryFile* QTemporaryFile_new4(struct miqt_string* templateName, QObject* parent);
QMetaObject* QTemporaryFile_MetaObject(const QTemporaryFile* self);
void* QTemporaryFile_Metacast(QTemporaryFile* self, const char* param1);
struct miqt_string* QTemporaryFile_Tr(const char* s);
struct miqt_string* QTemporaryFile_TrUtf8(const char* s);
bool QTemporaryFile_AutoRemove(const QTemporaryFile* self);
void QTemporaryFile_SetAutoRemove(QTemporaryFile* self, bool b);
bool QTemporaryFile_Open(QTemporaryFile* self);
struct miqt_string* QTemporaryFile_FileName(const QTemporaryFile* self);
struct miqt_string* QTemporaryFile_FileTemplate(const QTemporaryFile* self);
void QTemporaryFile_SetFileTemplate(QTemporaryFile* self, struct miqt_string* name);
bool QTemporaryFile_Rename(QTemporaryFile* self, struct miqt_string* newName);
QTemporaryFile* QTemporaryFile_CreateLocalFile(struct miqt_string* fileName);
QTemporaryFile* QTemporaryFile_CreateLocalFileWithFile(QFile* file);
QTemporaryFile* QTemporaryFile_CreateNativeFile(struct miqt_string* fileName);
QTemporaryFile* QTemporaryFile_CreateNativeFileWithFile(QFile* file);
struct miqt_string* QTemporaryFile_Tr2(const char* s, const char* c);
struct miqt_string* QTemporaryFile_Tr3(const char* s, const char* c, int n);
struct miqt_string* QTemporaryFile_TrUtf82(const char* s, const char* c);
struct miqt_string* QTemporaryFile_TrUtf83(const char* s, const char* c, int n);
void QTemporaryFile_Delete(QTemporaryFile* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
