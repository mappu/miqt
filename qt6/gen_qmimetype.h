#pragma once
#ifndef MIQT_QT6_GEN_QMIMETYPE_H
#define MIQT_QT6_GEN_QMIMETYPE_H

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
void QMimeType_operatorAssign(QMimeType* self, QMimeType* other);
void QMimeType_swap(QMimeType* self, QMimeType* other);
bool QMimeType_operatorEqual(const QMimeType* self, QMimeType* other);
bool QMimeType_operatorNotEqual(const QMimeType* self, QMimeType* other);
bool QMimeType_isValid(const QMimeType* self);
bool QMimeType_isDefault(const QMimeType* self);
struct miqt_string QMimeType_name(const QMimeType* self);
struct miqt_string QMimeType_comment(const QMimeType* self);
struct miqt_string QMimeType_genericIconName(const QMimeType* self);
struct miqt_string QMimeType_iconName(const QMimeType* self);
struct miqt_array /* of struct miqt_string */  QMimeType_globPatterns(const QMimeType* self);
struct miqt_array /* of struct miqt_string */  QMimeType_parentMimeTypes(const QMimeType* self);
struct miqt_array /* of struct miqt_string */  QMimeType_allAncestors(const QMimeType* self);
struct miqt_array /* of struct miqt_string */  QMimeType_aliases(const QMimeType* self);
struct miqt_array /* of struct miqt_string */  QMimeType_suffixes(const QMimeType* self);
struct miqt_string QMimeType_preferredSuffix(const QMimeType* self);
bool QMimeType_inherits(const QMimeType* self, struct miqt_string mimeTypeName);
struct miqt_string QMimeType_filterString(const QMimeType* self);

void QMimeType_delete(QMimeType* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
