#ifndef GEN_QDIRITERATOR_H
#define GEN_QDIRITERATOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDir;
class QDirIterator;
class QFileInfo;
#else
typedef struct QDir QDir;
typedef struct QDirIterator QDirIterator;
typedef struct QFileInfo QFileInfo;
#endif

QDirIterator* QDirIterator_new(QDir* dir);
QDirIterator* QDirIterator_new2(const char* path, size_t path_Strlen);
QDirIterator* QDirIterator_new3(const char* path, size_t path_Strlen, int filter);
QDirIterator* QDirIterator_new4(const char* path, size_t path_Strlen, char** nameFilters, uint64_t* nameFilters_Lengths, size_t nameFilters_len);
QDirIterator* QDirIterator_new5(QDir* dir, int flags);
QDirIterator* QDirIterator_new6(const char* path, size_t path_Strlen, int flags);
QDirIterator* QDirIterator_new7(const char* path, size_t path_Strlen, int filter, int flags);
QDirIterator* QDirIterator_new8(const char* path, size_t path_Strlen, char** nameFilters, uint64_t* nameFilters_Lengths, size_t nameFilters_len, int filters);
QDirIterator* QDirIterator_new9(const char* path, size_t path_Strlen, char** nameFilters, uint64_t* nameFilters_Lengths, size_t nameFilters_len, int filters, int flags);
void QDirIterator_Next(QDirIterator* self, char** _out, int* _out_Strlen);
bool QDirIterator_HasNext(QDirIterator* self);
void QDirIterator_FileName(QDirIterator* self, char** _out, int* _out_Strlen);
void QDirIterator_FilePath(QDirIterator* self, char** _out, int* _out_Strlen);
QFileInfo* QDirIterator_FileInfo(QDirIterator* self);
void QDirIterator_Path(QDirIterator* self, char** _out, int* _out_Strlen);
void QDirIterator_Delete(QDirIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
