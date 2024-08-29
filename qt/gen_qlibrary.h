#ifndef GEN_QLIBRARY_H
#define GEN_QLIBRARY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLibrary;
class QMetaObject;
class QObject;
#else
typedef struct QLibrary QLibrary;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QLibrary* QLibrary_new();
QLibrary* QLibrary_new2(const char* fileName, size_t fileName_Strlen);
QLibrary* QLibrary_new3(const char* fileName, size_t fileName_Strlen, int verNum);
QLibrary* QLibrary_new4(const char* fileName, size_t fileName_Strlen, const char* version, size_t version_Strlen);
QLibrary* QLibrary_new5(QObject* parent);
QLibrary* QLibrary_new6(const char* fileName, size_t fileName_Strlen, QObject* parent);
QLibrary* QLibrary_new7(const char* fileName, size_t fileName_Strlen, int verNum, QObject* parent);
QLibrary* QLibrary_new8(const char* fileName, size_t fileName_Strlen, const char* version, size_t version_Strlen, QObject* parent);
QMetaObject* QLibrary_MetaObject(QLibrary* self);
void QLibrary_Tr(const char* s, char** _out, int* _out_Strlen);
void QLibrary_TrUtf8(const char* s, char** _out, int* _out_Strlen);
bool QLibrary_Load(QLibrary* self);
bool QLibrary_Unload(QLibrary* self);
bool QLibrary_IsLoaded(QLibrary* self);
bool QLibrary_IsLibrary(const char* fileName, size_t fileName_Strlen);
void QLibrary_SetFileName(QLibrary* self, const char* fileName, size_t fileName_Strlen);
void QLibrary_FileName(QLibrary* self, char** _out, int* _out_Strlen);
void QLibrary_SetFileNameAndVersion(QLibrary* self, const char* fileName, size_t fileName_Strlen, int verNum);
void QLibrary_SetFileNameAndVersion2(QLibrary* self, const char* fileName, size_t fileName_Strlen, const char* version, size_t version_Strlen);
void QLibrary_ErrorString(QLibrary* self, char** _out, int* _out_Strlen);
void QLibrary_SetLoadHints(QLibrary* self, int hints);
int QLibrary_LoadHints(QLibrary* self);
void QLibrary_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QLibrary_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QLibrary_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QLibrary_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QLibrary_Delete(QLibrary* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
