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
void QPageRanges_OperatorAssign(QPageRanges* self, QPageRanges* other);
void QPageRanges_Swap(QPageRanges* self, QPageRanges* other);
void QPageRanges_AddPage(QPageRanges* self, int pageNumber);
void QPageRanges_AddRange(QPageRanges* self, int from, int to);
struct miqt_array /* of QPageRanges__Range* */  QPageRanges_ToRangeList(const QPageRanges* self);
void QPageRanges_Clear(QPageRanges* self);
struct miqt_string QPageRanges_ToString(const QPageRanges* self);
QPageRanges* QPageRanges_FromString(struct miqt_string ranges);
bool QPageRanges_Contains(const QPageRanges* self, int pageNumber);
bool QPageRanges_IsEmpty(const QPageRanges* self);
int QPageRanges_FirstPage(const QPageRanges* self);
int QPageRanges_LastPage(const QPageRanges* self);
void QPageRanges_Detach(QPageRanges* self);
void QPageRanges_Delete(QPageRanges* self);

QPageRanges__Range* QPageRanges__Range_new();
QPageRanges__Range* QPageRanges__Range_new2(QPageRanges__Range* param1);
bool QPageRanges__Range_Contains(const QPageRanges__Range* self, int pageNumber);
void QPageRanges__Range_Delete(QPageRanges__Range* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
