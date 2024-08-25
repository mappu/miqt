#ifndef GEN_QRESOURCE_H
#define GEN_QRESOURCE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QDateTime;
class QLocale;
class QResource;
#else
typedef struct QByteArray QByteArray;
typedef struct QDateTime QDateTime;
typedef struct QLocale QLocale;
typedef struct QResource QResource;
#endif

QResource* QResource_new();
QResource* QResource_new2(const char* file, size_t file_Strlen);
QResource* QResource_new3(const char* file, size_t file_Strlen, QLocale* locale);
void QResource_SetFileName(QResource* self, const char* file, size_t file_Strlen);
void QResource_FileName(QResource* self, char** _out, int* _out_Strlen);
void QResource_AbsoluteFilePath(QResource* self, char** _out, int* _out_Strlen);
void QResource_SetLocale(QResource* self, QLocale* locale);
QLocale* QResource_Locale(QResource* self);
bool QResource_IsValid(QResource* self);
int64_t QResource_Size(QResource* self);
unsigned char* QResource_Data(QResource* self);
int64_t QResource_UncompressedSize(QResource* self);
QByteArray* QResource_UncompressedData(QResource* self);
QDateTime* QResource_LastModified(QResource* self);
void QResource_AddSearchPath(const char* path, size_t path_Strlen);
void QResource_SearchPaths(char*** _out, int** _out_Lengths, size_t* _out_len);
bool QResource_IsCompressed(QResource* self);
bool QResource_RegisterResource(const char* rccFilename, size_t rccFilename_Strlen);
bool QResource_UnregisterResource(const char* rccFilename, size_t rccFilename_Strlen);
bool QResource_RegisterResourceWithRccData(unsigned char* rccData);
bool QResource_UnregisterResourceWithRccData(unsigned char* rccData);
bool QResource_RegisterResource2(const char* rccFilename, size_t rccFilename_Strlen, const char* resourceRoot, size_t resourceRoot_Strlen);
bool QResource_UnregisterResource2(const char* rccFilename, size_t rccFilename_Strlen, const char* resourceRoot, size_t resourceRoot_Strlen);
bool QResource_RegisterResource22(unsigned char* rccData, const char* resourceRoot, size_t resourceRoot_Strlen);
bool QResource_UnregisterResource22(unsigned char* rccData, const char* resourceRoot, size_t resourceRoot_Strlen);
void QResource_Delete(QResource* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
