#pragma once
#ifndef MIQT_QT6_GEN_QANYSTRINGVIEW_H
#define MIQT_QT6_GEN_QANYSTRINGVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAnyStringView;
class QChar;
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QChar QChar;
#endif

QAnyStringView* QAnyStringView_new();
QAnyStringView* QAnyStringView_new2(struct miqt_string str);
QAnyStringView* QAnyStringView_new3(struct miqt_string str);
QAnyStringView* QAnyStringView_new4(QChar* c);
QAnyStringView* QAnyStringView_new5(QAnyStringView* param1);
struct miqt_string QAnyStringView_toString(const QAnyStringView* self);
ptrdiff_t QAnyStringView_size(const QAnyStringView* self);
const void* QAnyStringView_data(const QAnyStringView* self);
int QAnyStringView_compare(QAnyStringView* lhs, QAnyStringView* rhs);
bool QAnyStringView_equal(QAnyStringView* lhs, QAnyStringView* rhs);
QChar* QAnyStringView_front(const QAnyStringView* self);
QChar* QAnyStringView_back(const QAnyStringView* self);
bool QAnyStringView_empty(const QAnyStringView* self);
ptrdiff_t QAnyStringView_sizeBytes(const QAnyStringView* self);
bool QAnyStringView_isNull(const QAnyStringView* self);
bool QAnyStringView_isEmpty(const QAnyStringView* self);
ptrdiff_t QAnyStringView_length(const QAnyStringView* self);
int QAnyStringView_compare2(QAnyStringView* lhs, QAnyStringView* rhs, int cs);
void QAnyStringView_delete(QAnyStringView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
