#ifndef GEN_QFILESELECTOR_H
#define GEN_QFILESELECTOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFileSelector;
class QMetaObject;
class QObject;
class QUrl;
#else
typedef struct QFileSelector QFileSelector;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
#endif

QFileSelector* QFileSelector_new();
QFileSelector* QFileSelector_new2(QObject* parent);
QMetaObject* QFileSelector_MetaObject(const QFileSelector* self);
void QFileSelector_Tr(const char* s, char** _out, int* _out_Strlen);
void QFileSelector_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QFileSelector_Select(const QFileSelector* self, const char* filePath, size_t filePath_Strlen, char** _out, int* _out_Strlen);
QUrl* QFileSelector_SelectWithFilePath(const QFileSelector* self, QUrl* filePath);
void QFileSelector_ExtraSelectors(const QFileSelector* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileSelector_SetExtraSelectors(QFileSelector* self, char** list, uint64_t* list_Lengths, size_t list_len);
void QFileSelector_AllSelectors(const QFileSelector* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QFileSelector_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QFileSelector_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QFileSelector_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QFileSelector_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QFileSelector_Delete(QFileSelector* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
