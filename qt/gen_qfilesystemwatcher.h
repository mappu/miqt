#ifndef GEN_QFILESYSTEMWATCHER_H
#define GEN_QFILESYSTEMWATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QFileSystemWatcher* QFileSystemWatcher_new2(char** paths, uint64_t* paths_Lengths, size_t paths_len);
QFileSystemWatcher* QFileSystemWatcher_new3(QObject* parent);
QFileSystemWatcher* QFileSystemWatcher_new4(char** paths, uint64_t* paths_Lengths, size_t paths_len, QObject* parent);
QMetaObject* QFileSystemWatcher_MetaObject(const QFileSystemWatcher* self);
void QFileSystemWatcher_Tr(const char* s, char** _out, int* _out_Strlen);
void QFileSystemWatcher_TrUtf8(const char* s, char** _out, int* _out_Strlen);
bool QFileSystemWatcher_AddPath(QFileSystemWatcher* self, const char* file, size_t file_Strlen);
void QFileSystemWatcher_AddPaths(QFileSystemWatcher* self, char** files, uint64_t* files_Lengths, size_t files_len, char*** _out, int** _out_Lengths, size_t* _out_len);
bool QFileSystemWatcher_RemovePath(QFileSystemWatcher* self, const char* file, size_t file_Strlen);
void QFileSystemWatcher_RemovePaths(QFileSystemWatcher* self, char** files, uint64_t* files_Lengths, size_t files_len, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileSystemWatcher_Files(const QFileSystemWatcher* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileSystemWatcher_Directories(const QFileSystemWatcher* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileSystemWatcher_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QFileSystemWatcher_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QFileSystemWatcher_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QFileSystemWatcher_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QFileSystemWatcher_Delete(QFileSystemWatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
