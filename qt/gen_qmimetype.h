#ifndef GEN_QMIMETYPE_H
#define GEN_QMIMETYPE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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
struct miqt_string* QMimeType_Name(const QMimeType* self);
struct miqt_string* QMimeType_Comment(const QMimeType* self);
struct miqt_string* QMimeType_GenericIconName(const QMimeType* self);
struct miqt_string* QMimeType_IconName(const QMimeType* self);
struct miqt_array* QMimeType_GlobPatterns(const QMimeType* self);
struct miqt_array* QMimeType_ParentMimeTypes(const QMimeType* self);
struct miqt_array* QMimeType_AllAncestors(const QMimeType* self);
struct miqt_array* QMimeType_Aliases(const QMimeType* self);
struct miqt_array* QMimeType_Suffixes(const QMimeType* self);
struct miqt_string* QMimeType_PreferredSuffix(const QMimeType* self);
bool QMimeType_Inherits(const QMimeType* self, struct miqt_string* mimeTypeName);
struct miqt_string* QMimeType_FilterString(const QMimeType* self);
void QMimeType_Delete(QMimeType* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
