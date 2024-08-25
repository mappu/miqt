#ifndef GEN_QMIMETYPE_H
#define GEN_QMIMETYPE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMimeType;
#else
typedef struct QMimeType QMimeType;
#endif

QMimeType* QMimeType_new();
QMimeType* QMimeType_new2(QMimeType* other);
void QMimeType_OperatorAssign(QMimeType* self, QMimeType* other);
void QMimeType_Swap(QMimeType* self, QMimeType* other);
bool QMimeType_OperatorEqual(QMimeType* self, QMimeType* other);
bool QMimeType_OperatorNotEqual(QMimeType* self, QMimeType* other);
bool QMimeType_IsValid(QMimeType* self);
bool QMimeType_IsDefault(QMimeType* self);
void QMimeType_Name(QMimeType* self, char** _out, int* _out_Strlen);
void QMimeType_Comment(QMimeType* self, char** _out, int* _out_Strlen);
void QMimeType_GenericIconName(QMimeType* self, char** _out, int* _out_Strlen);
void QMimeType_IconName(QMimeType* self, char** _out, int* _out_Strlen);
void QMimeType_GlobPatterns(QMimeType* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QMimeType_ParentMimeTypes(QMimeType* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QMimeType_AllAncestors(QMimeType* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QMimeType_Aliases(QMimeType* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QMimeType_Suffixes(QMimeType* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QMimeType_PreferredSuffix(QMimeType* self, char** _out, int* _out_Strlen);
bool QMimeType_Inherits(QMimeType* self, const char* mimeTypeName, size_t mimeTypeName_Strlen);
void QMimeType_FilterString(QMimeType* self, char** _out, int* _out_Strlen);
void QMimeType_Delete(QMimeType* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
