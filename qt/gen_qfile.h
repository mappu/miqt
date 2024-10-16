#ifndef GEN_QFILE_H
#define GEN_QFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
QFile* QFile_new2(struct miqt_string* name);
QFile* QFile_new3(QObject* parent);
QFile* QFile_new4(struct miqt_string* name, QObject* parent);
QMetaObject* QFile_MetaObject(const QFile* self);
void* QFile_Metacast(QFile* self, const char* param1);
struct miqt_string* QFile_Tr(const char* s);
struct miqt_string* QFile_TrUtf8(const char* s);
struct miqt_string* QFile_FileName(const QFile* self);
void QFile_SetFileName(QFile* self, struct miqt_string* name);
QByteArray* QFile_EncodeName(struct miqt_string* fileName);
struct miqt_string* QFile_DecodeName(QByteArray* localFileName);
struct miqt_string* QFile_DecodeNameWithLocalFileName(const char* localFileName);
bool QFile_Exists(const QFile* self);
bool QFile_ExistsWithFileName(struct miqt_string* fileName);
struct miqt_string* QFile_ReadLink(const QFile* self);
struct miqt_string* QFile_ReadLinkWithFileName(struct miqt_string* fileName);
struct miqt_string* QFile_SymLinkTarget(const QFile* self);
struct miqt_string* QFile_SymLinkTargetWithFileName(struct miqt_string* fileName);
bool QFile_Remove(QFile* self);
bool QFile_RemoveWithFileName(struct miqt_string* fileName);
bool QFile_MoveToTrash(QFile* self);
bool QFile_MoveToTrashWithFileName(struct miqt_string* fileName);
bool QFile_Rename(QFile* self, struct miqt_string* newName);
bool QFile_Rename2(struct miqt_string* oldName, struct miqt_string* newName);
bool QFile_Link(QFile* self, struct miqt_string* newName);
bool QFile_Link2(struct miqt_string* oldname, struct miqt_string* newName);
bool QFile_Copy(QFile* self, struct miqt_string* newName);
bool QFile_Copy2(struct miqt_string* fileName, struct miqt_string* newName);
bool QFile_Open(QFile* self, int flags);
bool QFile_Open3(QFile* self, int fd, int ioFlags);
long long QFile_Size(const QFile* self);
bool QFile_Resize(QFile* self, long long sz);
bool QFile_Resize2(struct miqt_string* filename, long long sz);
int QFile_Permissions(const QFile* self);
int QFile_PermissionsWithFilename(struct miqt_string* filename);
bool QFile_SetPermissions(QFile* self, int permissionSpec);
bool QFile_SetPermissions2(struct miqt_string* filename, int permissionSpec);
struct miqt_string* QFile_Tr2(const char* s, const char* c);
struct miqt_string* QFile_Tr3(const char* s, const char* c, int n);
struct miqt_string* QFile_TrUtf82(const char* s, const char* c);
struct miqt_string* QFile_TrUtf83(const char* s, const char* c, int n);
bool QFile_Open33(QFile* self, int fd, int ioFlags, int handleFlags);
void QFile_Delete(QFile* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
