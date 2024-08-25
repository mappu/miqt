#ifndef GEN_QMIMEDATABASE_H
#define GEN_QMIMEDATABASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QIODevice;
class QMimeDatabase;
class QMimeType;
class QUrl;
#else
typedef struct QByteArray QByteArray;
typedef struct QIODevice QIODevice;
typedef struct QMimeDatabase QMimeDatabase;
typedef struct QMimeType QMimeType;
typedef struct QUrl QUrl;
#endif

QMimeDatabase* QMimeDatabase_new();
QMimeType* QMimeDatabase_MimeTypeForName(QMimeDatabase* self, const char* nameOrAlias, size_t nameOrAlias_Strlen);
void QMimeDatabase_MimeTypesForFileName(QMimeDatabase* self, const char* fileName, size_t fileName_Strlen, QMimeType*** _out, size_t* _out_len);
QMimeType* QMimeDatabase_MimeTypeForData(QMimeDatabase* self, QByteArray* data);
QMimeType* QMimeDatabase_MimeTypeForDataWithDevice(QMimeDatabase* self, QIODevice* device);
QMimeType* QMimeDatabase_MimeTypeForUrl(QMimeDatabase* self, QUrl* url);
QMimeType* QMimeDatabase_MimeTypeForFileNameAndData(QMimeDatabase* self, const char* fileName, size_t fileName_Strlen, QIODevice* device);
QMimeType* QMimeDatabase_MimeTypeForFileNameAndData2(QMimeDatabase* self, const char* fileName, size_t fileName_Strlen, QByteArray* data);
void QMimeDatabase_SuffixForFileName(QMimeDatabase* self, const char* fileName, size_t fileName_Strlen, char** _out, int* _out_Strlen);
void QMimeDatabase_AllMimeTypes(QMimeDatabase* self, QMimeType*** _out, size_t* _out_len);
void QMimeDatabase_Delete(QMimeDatabase* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
