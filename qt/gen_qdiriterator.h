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
class QDirIterator;
class QFileInfo;
#else
typedef struct QDirIterator QDirIterator;
typedef struct QFileInfo QFileInfo;
#endif

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
