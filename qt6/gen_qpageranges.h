#pragma once
#ifndef MIQT_QT6_GEN_QPAGERANGES_H
#define MIQT_QT6_GEN_QPAGERANGES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPageRanges;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QPageRanges__Range)
typedef QPageRanges::Range QPageRanges__Range;
#else
class QPageRanges__Range;
#endif
#else
typedef struct QPageRanges QPageRanges;
typedef struct QPageRanges__Range QPageRanges__Range;
#endif

QPageRanges* QPageRanges_new();
QPageRanges* QPageRanges_new2(QPageRanges* other);
void QPageRanges_operatorAssign(QPageRanges* self, QPageRanges* other);
void QPageRanges_swap(QPageRanges* self, QPageRanges* other);
void QPageRanges_addPage(QPageRanges* self, int pageNumber);
void QPageRanges_addRange(QPageRanges* self, int from, int to);
struct miqt_array /* of QPageRanges__Range* */  QPageRanges_toRangeList(const QPageRanges* self);
void QPageRanges_clear(QPageRanges* self);
struct miqt_string QPageRanges_toString(const QPageRanges* self);
QPageRanges* QPageRanges_fromString(struct miqt_string ranges);
bool QPageRanges_contains(const QPageRanges* self, int pageNumber);
bool QPageRanges_isEmpty(const QPageRanges* self);
int QPageRanges_firstPage(const QPageRanges* self);
int QPageRanges_lastPage(const QPageRanges* self);
void QPageRanges_detach(QPageRanges* self);

void QPageRanges_delete(QPageRanges* self);

QPageRanges__Range* QPageRanges__Range_new();
QPageRanges__Range* QPageRanges__Range_new2(QPageRanges__Range* param1);
int QPageRanges__Range_from(const QPageRanges__Range* self);
void QPageRanges__Range_setFrom(QPageRanges__Range* self, int from);
int QPageRanges__Range_to(const QPageRanges__Range* self);
void QPageRanges__Range_setTo(QPageRanges__Range* self, int to);
bool QPageRanges__Range_contains(const QPageRanges__Range* self, int pageNumber);

void QPageRanges__Range_delete(QPageRanges__Range* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
