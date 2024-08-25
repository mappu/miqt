#ifndef GEN_QFILEINFO_H
#define GEN_QFILEINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDateTime;
class QDir;
class QFile;
class QFileInfo;
#else
typedef struct QDateTime QDateTime;
typedef struct QDir QDir;
typedef struct QFile QFile;
typedef struct QFileInfo QFileInfo;
#endif

QFileInfo* QFileInfo_new();
QFileInfo* QFileInfo_new2(const char* file, size_t file_Strlen);
QFileInfo* QFileInfo_new3(QFile* file);
QFileInfo* QFileInfo_new4(QDir* dir, const char* file, size_t file_Strlen);
QFileInfo* QFileInfo_new5(QFileInfo* fileinfo);
void QFileInfo_OperatorAssign(QFileInfo* self, QFileInfo* fileinfo);
void QFileInfo_Swap(QFileInfo* self, QFileInfo* other);
bool QFileInfo_OperatorEqual(QFileInfo* self, QFileInfo* fileinfo);
bool QFileInfo_OperatorNotEqual(QFileInfo* self, QFileInfo* fileinfo);
void QFileInfo_SetFile(QFileInfo* self, const char* file, size_t file_Strlen);
void QFileInfo_SetFileWithFile(QFileInfo* self, QFile* file);
void QFileInfo_SetFile2(QFileInfo* self, QDir* dir, const char* file, size_t file_Strlen);
bool QFileInfo_Exists(QFileInfo* self);
bool QFileInfo_ExistsWithFile(const char* file, size_t file_Strlen);
void QFileInfo_Refresh(QFileInfo* self);
void QFileInfo_FilePath(QFileInfo* self, char** _out, int* _out_Strlen);
void QFileInfo_AbsoluteFilePath(QFileInfo* self, char** _out, int* _out_Strlen);
void QFileInfo_CanonicalFilePath(QFileInfo* self, char** _out, int* _out_Strlen);
void QFileInfo_FileName(QFileInfo* self, char** _out, int* _out_Strlen);
void QFileInfo_BaseName(QFileInfo* self, char** _out, int* _out_Strlen);
void QFileInfo_CompleteBaseName(QFileInfo* self, char** _out, int* _out_Strlen);
void QFileInfo_Suffix(QFileInfo* self, char** _out, int* _out_Strlen);
void QFileInfo_BundleName(QFileInfo* self, char** _out, int* _out_Strlen);
void QFileInfo_CompleteSuffix(QFileInfo* self, char** _out, int* _out_Strlen);
void QFileInfo_Path(QFileInfo* self, char** _out, int* _out_Strlen);
void QFileInfo_AbsolutePath(QFileInfo* self, char** _out, int* _out_Strlen);
void QFileInfo_CanonicalPath(QFileInfo* self, char** _out, int* _out_Strlen);
QDir* QFileInfo_Dir(QFileInfo* self);
QDir* QFileInfo_AbsoluteDir(QFileInfo* self);
bool QFileInfo_IsReadable(QFileInfo* self);
bool QFileInfo_IsWritable(QFileInfo* self);
bool QFileInfo_IsExecutable(QFileInfo* self);
bool QFileInfo_IsHidden(QFileInfo* self);
bool QFileInfo_IsNativePath(QFileInfo* self);
bool QFileInfo_IsRelative(QFileInfo* self);
bool QFileInfo_IsAbsolute(QFileInfo* self);
bool QFileInfo_MakeAbsolute(QFileInfo* self);
bool QFileInfo_IsFile(QFileInfo* self);
bool QFileInfo_IsDir(QFileInfo* self);
bool QFileInfo_IsSymLink(QFileInfo* self);
bool QFileInfo_IsSymbolicLink(QFileInfo* self);
bool QFileInfo_IsShortcut(QFileInfo* self);
bool QFileInfo_IsJunction(QFileInfo* self);
bool QFileInfo_IsRoot(QFileInfo* self);
bool QFileInfo_IsBundle(QFileInfo* self);
void QFileInfo_ReadLink(QFileInfo* self, char** _out, int* _out_Strlen);
void QFileInfo_SymLinkTarget(QFileInfo* self, char** _out, int* _out_Strlen);
void QFileInfo_Owner(QFileInfo* self, char** _out, int* _out_Strlen);
unsigned int QFileInfo_OwnerId(QFileInfo* self);
void QFileInfo_Group(QFileInfo* self, char** _out, int* _out_Strlen);
unsigned int QFileInfo_GroupId(QFileInfo* self);
int64_t QFileInfo_Size(QFileInfo* self);
QDateTime* QFileInfo_Created(QFileInfo* self);
QDateTime* QFileInfo_BirthTime(QFileInfo* self);
QDateTime* QFileInfo_MetadataChangeTime(QFileInfo* self);
QDateTime* QFileInfo_LastModified(QFileInfo* self);
QDateTime* QFileInfo_LastRead(QFileInfo* self);
bool QFileInfo_Caching(QFileInfo* self);
void QFileInfo_SetCaching(QFileInfo* self, bool on);
void QFileInfo_Delete(QFileInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
