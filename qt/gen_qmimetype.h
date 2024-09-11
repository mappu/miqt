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
bool QMimeType_OperatorEqual(const QMimeType* self, QMimeType* other);
bool QMimeType_OperatorNotEqual(const QMimeType* self, QMimeType* other);
bool QMimeType_IsValid(const QMimeType* self);
bool QMimeType_IsDefault(const QMimeType* self);
void QMimeType_Name(const QMimeType* self, char** _out, int* _out_Strlen);
void QMimeType_Comment(const QMimeType* self, char** _out, int* _out_Strlen);
void QMimeType_GenericIconName(const QMimeType* self, char** _out, int* _out_Strlen);
void QMimeType_IconName(const QMimeType* self, char** _out, int* _out_Strlen);
void QMimeType_GlobPatterns(const QMimeType* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QMimeType_ParentMimeTypes(const QMimeType* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QMimeType_AllAncestors(const QMimeType* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QMimeType_Aliases(const QMimeType* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QMimeType_Suffixes(const QMimeType* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QMimeType_PreferredSuffix(const QMimeType* self, char** _out, int* _out_Strlen);
bool QMimeType_Inherits(const QMimeType* self, const char* mimeTypeName, size_t mimeTypeName_Strlen);
void QMimeType_FilterString(const QMimeType* self, char** _out, int* _out_Strlen);
void QMimeType_Delete(QMimeType* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
