#ifndef GEN_QFILESYSTEMWATCHER_H
#define GEN_QFILESYSTEMWATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFileSystemWatcher;
class QMetaObject;
class QObject;
#else
typedef struct QFileSystemWatcher QFileSystemWatcher;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QFileSystemWatcher* QFileSystemWatcher_new();
QFileSystemWatcher* QFileSystemWatcher_new2(struct miqt_array* /* of struct miqt_string* */ paths);
QFileSystemWatcher* QFileSystemWatcher_new3(QObject* parent);
QFileSystemWatcher* QFileSystemWatcher_new4(struct miqt_array* /* of struct miqt_string* */ paths, QObject* parent);
QMetaObject* QFileSystemWatcher_MetaObject(const QFileSystemWatcher* self);
void* QFileSystemWatcher_Metacast(QFileSystemWatcher* self, const char* param1);
struct miqt_string* QFileSystemWatcher_Tr(const char* s);
struct miqt_string* QFileSystemWatcher_TrUtf8(const char* s);
bool QFileSystemWatcher_AddPath(QFileSystemWatcher* self, struct miqt_string* file);
struct miqt_array* QFileSystemWatcher_AddPaths(QFileSystemWatcher* self, struct miqt_array* /* of struct miqt_string* */ files);
bool QFileSystemWatcher_RemovePath(QFileSystemWatcher* self, struct miqt_string* file);
struct miqt_array* QFileSystemWatcher_RemovePaths(QFileSystemWatcher* self, struct miqt_array* /* of struct miqt_string* */ files);
struct miqt_array* QFileSystemWatcher_Files(const QFileSystemWatcher* self);
struct miqt_array* QFileSystemWatcher_Directories(const QFileSystemWatcher* self);
struct miqt_string* QFileSystemWatcher_Tr2(const char* s, const char* c);
struct miqt_string* QFileSystemWatcher_Tr3(const char* s, const char* c, int n);
struct miqt_string* QFileSystemWatcher_TrUtf82(const char* s, const char* c);
struct miqt_string* QFileSystemWatcher_TrUtf83(const char* s, const char* c, int n);
void QFileSystemWatcher_Delete(QFileSystemWatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
