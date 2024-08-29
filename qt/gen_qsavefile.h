#ifndef GEN_QSAVEFILE_H
#define GEN_QSAVEFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QSaveFile;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSaveFile QSaveFile;
#endif

QSaveFile* QSaveFile_new(const char* name, size_t name_Strlen);
QSaveFile* QSaveFile_new2();
QSaveFile* QSaveFile_new3(const char* name, size_t name_Strlen, QObject* parent);
QSaveFile* QSaveFile_new4(QObject* parent);
QMetaObject* QSaveFile_MetaObject(QSaveFile* self);
void QSaveFile_Tr(const char* s, char** _out, int* _out_Strlen);
void QSaveFile_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QSaveFile_FileName(QSaveFile* self, char** _out, int* _out_Strlen);
void QSaveFile_SetFileName(QSaveFile* self, const char* name, size_t name_Strlen);
bool QSaveFile_Open(QSaveFile* self, int flags);
bool QSaveFile_Commit(QSaveFile* self);
void QSaveFile_CancelWriting(QSaveFile* self);
void QSaveFile_SetDirectWriteFallback(QSaveFile* self, bool enabled);
bool QSaveFile_DirectWriteFallback(QSaveFile* self);
void QSaveFile_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QSaveFile_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QSaveFile_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QSaveFile_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QSaveFile_Delete(QSaveFile* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
