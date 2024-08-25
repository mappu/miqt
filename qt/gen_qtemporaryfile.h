#ifndef GEN_QTEMPORARYFILE_H
#define GEN_QTEMPORARYFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QTemporaryFile* QTemporaryFile_new2(const char* templateName, size_t templateName_Strlen);
QTemporaryFile* QTemporaryFile_new3(QObject* parent);
QTemporaryFile* QTemporaryFile_new4(const char* templateName, size_t templateName_Strlen, QObject* parent);
QMetaObject* QTemporaryFile_MetaObject(QTemporaryFile* self);
void QTemporaryFile_Tr(char* s, char** _out, int* _out_Strlen);
void QTemporaryFile_TrUtf8(char* s, char** _out, int* _out_Strlen);
bool QTemporaryFile_AutoRemove(QTemporaryFile* self);
void QTemporaryFile_SetAutoRemove(QTemporaryFile* self, bool b);
bool QTemporaryFile_Open(QTemporaryFile* self);
void QTemporaryFile_FileName(QTemporaryFile* self, char** _out, int* _out_Strlen);
void QTemporaryFile_FileTemplate(QTemporaryFile* self, char** _out, int* _out_Strlen);
void QTemporaryFile_SetFileTemplate(QTemporaryFile* self, const char* name, size_t name_Strlen);
bool QTemporaryFile_Rename(QTemporaryFile* self, const char* newName, size_t newName_Strlen);
QTemporaryFile* QTemporaryFile_CreateLocalFile(const char* fileName, size_t fileName_Strlen);
QTemporaryFile* QTemporaryFile_CreateLocalFileWithFile(QFile* file);
QTemporaryFile* QTemporaryFile_CreateNativeFile(const char* fileName, size_t fileName_Strlen);
QTemporaryFile* QTemporaryFile_CreateNativeFileWithFile(QFile* file);
void QTemporaryFile_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QTemporaryFile_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QTemporaryFile_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QTemporaryFile_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QTemporaryFile_Delete(QTemporaryFile* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
