#ifndef GEN_QFILE_H
#define GEN_QFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QFile;
class QMetaObject;
class QObject;
#else
typedef struct QByteArray QByteArray;
typedef struct QFile QFile;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QFile* QFile_new();
QFile* QFile_new2(const char* name, size_t name_Strlen);
QFile* QFile_new3(QObject* parent);
QFile* QFile_new4(const char* name, size_t name_Strlen, QObject* parent);
QMetaObject* QFile_MetaObject(QFile* self);
void QFile_Tr(const char* s, char** _out, int* _out_Strlen);
void QFile_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QFile_FileName(QFile* self, char** _out, int* _out_Strlen);
void QFile_SetFileName(QFile* self, const char* name, size_t name_Strlen);
QByteArray* QFile_EncodeName(const char* fileName, size_t fileName_Strlen);
void QFile_DecodeName(QByteArray* localFileName, char** _out, int* _out_Strlen);
void QFile_DecodeNameWithLocalFileName(const char* localFileName, char** _out, int* _out_Strlen);
bool QFile_Exists(QFile* self);
bool QFile_ExistsWithFileName(const char* fileName, size_t fileName_Strlen);
void QFile_ReadLink(QFile* self, char** _out, int* _out_Strlen);
void QFile_ReadLinkWithFileName(const char* fileName, size_t fileName_Strlen, char** _out, int* _out_Strlen);
void QFile_SymLinkTarget(QFile* self, char** _out, int* _out_Strlen);
void QFile_SymLinkTargetWithFileName(const char* fileName, size_t fileName_Strlen, char** _out, int* _out_Strlen);
bool QFile_Remove(QFile* self);
bool QFile_RemoveWithFileName(const char* fileName, size_t fileName_Strlen);
bool QFile_MoveToTrash(QFile* self);
bool QFile_MoveToTrashWithFileName(const char* fileName, size_t fileName_Strlen);
bool QFile_Rename(QFile* self, const char* newName, size_t newName_Strlen);
bool QFile_Rename2(const char* oldName, size_t oldName_Strlen, const char* newName, size_t newName_Strlen);
bool QFile_Link(QFile* self, const char* newName, size_t newName_Strlen);
bool QFile_Link2(const char* oldname, size_t oldname_Strlen, const char* newName, size_t newName_Strlen);
bool QFile_Copy(QFile* self, const char* newName, size_t newName_Strlen);
bool QFile_Copy2(const char* fileName, size_t fileName_Strlen, const char* newName, size_t newName_Strlen);
bool QFile_Open(QFile* self, int flags);
bool QFile_Open3(QFile* self, int fd, int ioFlags);
long long QFile_Size(QFile* self);
bool QFile_Resize(QFile* self, long long sz);
bool QFile_Resize2(const char* filename, size_t filename_Strlen, long long sz);
int QFile_Permissions(QFile* self);
int QFile_PermissionsWithFilename(const char* filename, size_t filename_Strlen);
bool QFile_SetPermissions(QFile* self, int permissionSpec);
bool QFile_SetPermissions2(const char* filename, size_t filename_Strlen, int permissionSpec);
void QFile_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QFile_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QFile_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QFile_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
bool QFile_Open33(QFile* self, int fd, int ioFlags, int handleFlags);
void QFile_Delete(QFile* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
